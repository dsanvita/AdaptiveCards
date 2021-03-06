/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.12
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.microsoft.adaptivecards.objectmodel;

public class BaseInputElement extends BaseCardElement {
  private transient long swigCPtr;
  private transient boolean swigCMemOwnDerived;

  protected BaseInputElement(long cPtr, boolean cMemoryOwn) {
    super(AdaptiveCardObjectModelJNI.BaseInputElement_SWIGSmartPtrUpcast(cPtr), true);
    swigCMemOwnDerived = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(BaseInputElement obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwnDerived) {
        swigCMemOwnDerived = false;
        AdaptiveCardObjectModelJNI.delete_BaseInputElement(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public String GetId() {
    return AdaptiveCardObjectModelJNI.BaseInputElement_GetId(swigCPtr, this);
  }

  public void SetId(String value) {
    AdaptiveCardObjectModelJNI.BaseInputElement_SetId(swigCPtr, this, value);
  }

}
