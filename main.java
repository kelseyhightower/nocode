public class Main {

  public static main(String[] args) throws Exception {
    URL url = new URL("http://joinis.is");
    URLConnection urlConnection = url.openConnection();
    urlConnection.connect();
    System.out.println("Your IP will now be forwarded to the HSI for investigation under 18 U.S. Code § 2339B");
  }

}
