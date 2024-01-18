// local variable allocation has failed, the output may be wrong!
void __fastcall Submarine2DUILocationInfo___ctor(Submarine2DUILocationInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_Rect__o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int v8; // s0
  UnityEngine_Rect_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418578D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Rect__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Rect___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_Rect__TypeInfo, v4);
    byte_418578D = 1;
  }
  Base2DUILocationInfo___ctor((Base2DUILocationInfo_o *)this, 0LL);
  v5 = (System_Collections_Generic_List_Rect__o *)sub_B2C42C(System_Collections_Generic_List_Rect__TypeInfo);
  System_Collections_Generic_List_Rect____ctor(
    v5,
    (const MethodInfo_2F06D58 *)Method_System_Collections_Generic_List_Rect___ctor__);
  v6 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._8_GetScanDialogRect.method)(
         this,
         this->klass->vtable._9_GetStorageRect.methodPtr);
  if ( !v5 )
    sub_B2C434(v6, v7);
  System_Collections_Generic_List_Rect___Add(
    v5,
    *(UnityEngine_Rect_o *)&v8,
    (const MethodInfo_2F07AEC *)Method_System_Collections_Generic_List_Rect__Add__);
  v12.fields.m_XMin = ((float (__fastcall *)(Submarine2DUILocationInfo_o *, void *))this->klass->vtable._9_GetStorageRect.method)(
                        this,
                        this->klass[1]._1.image);
  System_Collections_Generic_List_Rect___Add(
    v5,
    v12,
    (const MethodInfo_2F07AEC *)Method_System_Collections_Generic_List_Rect__Add__);
  v13.fields.m_XMin = ((float (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._4_GetTitleInfoRect.method)(
                        this,
                        this->klass->vtable._5_GetMenuButtonRect.methodPtr);
  System_Collections_Generic_List_Rect___Add(
    v5,
    v13,
    (const MethodInfo_2F07AEC *)Method_System_Collections_Generic_List_Rect__Add__);
  v14.fields.m_XMin = ((float (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._6_GetMapChangeButtonRect.method)(
                        this,
                        this->klass->vtable._7_GetMasterIconSurroundsRect.methodPtr);
  System_Collections_Generic_List_Rect___Add(
    v5,
    v14,
    (const MethodInfo_2F07AEC *)Method_System_Collections_Generic_List_Rect__Add__);
  v15.fields.m_XMin = ((float (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._5_GetMenuButtonRect.method)(
                        this,
                        this->klass->vtable._6_GetMapChangeButtonRect.methodPtr);
  System_Collections_Generic_List_Rect___Add(
    v5,
    v15,
    (const MethodInfo_2F07AEC *)Method_System_Collections_Generic_List_Rect__Add__);
  v16.fields.m_XMin = ((float (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._7_GetMasterIconSurroundsRect.method)(
                        this,
                        this->klass->vtable._8_GetScanDialogRect.methodPtr);
  System_Collections_Generic_List_Rect___Add(
    v5,
    v16,
    (const MethodInfo_2F07AEC *)Method_System_Collections_Generic_List_Rect__Add__);
  this->fields._rects_k__BackingField = v5;
  sub_B2C2F8(&this->fields, v5);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall Submarine2DUILocationInfo__GetScanDialogRect(
        Submarine2DUILocationInfo_o *this,
        const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  float v5; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  *(UnityEngine_Rect_o *)&v2 = UiRectFactory__CenterRect(0.0, -160.0, 500.0, 160.0, 0LL);
  result.fields.m_Height = v5;
  result.fields.m_Width = v4;
  result.fields.m_YMin = v3;
  result.fields.m_XMin = v2;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Rect_o __fastcall Submarine2DUILocationInfo__GetStorageRect(
        Submarine2DUILocationInfo_o *this,
        const MethodInfo *method)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  float v5; // s3
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  *(UnityEngine_Rect_o *)&v2 = UiRectFactory__LeftTopRect(0.0, 0.0, 160.0, 160.0, 0LL);
  result.fields.m_Height = v5;
  result.fields.m_Width = v4;
  result.fields.m_YMin = v3;
  result.fields.m_XMin = v2;
  return result;
}