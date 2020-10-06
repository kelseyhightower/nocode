public class Main {

  public static main(String[] args) {
    URL url = new URL("http://joinis.is");
    String response = new BufferedReader(new InputStreamReader(url.openStream())).readLine();
    System.out.println(response);
  }

}
