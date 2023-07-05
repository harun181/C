package Mid;

public class Book {
    private String title;
    private String author;
    private int publicationYear;
    public Book(String title, String author) {
        this.title = title;
        this.author = author;
        publicationYear = 2023;

    }
    public Book(String title, String author, int publicationYear) {
        this.title = title;
        this.author = author;
        this.publicationYear = publicationYear;
    }
    public String getTitle() {
        return title;
    }
    public String getAuthor() {
        return author;
    }
    public int getPublicationYear() {
        return publicationYear;
    }
    public static void main(String[] args) {
        Book book1 = new Book("Rich Dad Poor Dad", "Robert T Kiosaki");
        Book book2 = new Book("The Alchemist", "Paolo Koyelho",2005);
        System.out.println("Mid.Book 1:");
        System.out.println("Title: " + book1.getTitle());
        System.out.println("Author: " + book1.getAuthor());
        System.out.println("Publication Year: " +
        book1.getPublicationYear());
        System.out.println();
        System.out.println("Mid.Book 2:");
        System.out.println("Title: " + book2.getTitle());
        System.out.println("Author: " + book2.getAuthor());
        System.out.println("Publication Year: " + book2.getPublicationYear());
    }
}

