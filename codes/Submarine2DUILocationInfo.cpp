// local variable allocation has failed, the output may be wrong!
void __fastcall Submarine2DUILocationInfo___ctor(Submarine2DUILocationInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_Rect__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int v6; // s0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Rect_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42AEDF2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Rect__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_Rect___ctor__);
    sub_B52984(&System_Collections_Generic_List_Rect__TypeInfo);
    byte_42AEDF2 = 1;
  }
  Base2DUILocationInfo___ctor((Base2DUILocationInfo_o *)this, 0LL);
  v3 = (System_Collections_Generic_List_Rect__o *)sub_B52A54(System_Collections_Generic_List_Rect__TypeInfo);
  System_Collections_Generic_List_Rect____ctor(
    v3,
    (const MethodInfo_2FCBA28 *)Method_System_Collections_Generic_List_Rect___ctor__);
  v4 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._8_GetScanDialogRect.method)(
         this,
         this->klass->vtable._9_GetStorageRect.methodPtr);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  System_Collections_Generic_List_Rect___Add(
    v3,
    *(UnityEngine_Rect_o *)&v6,
    (const MethodInfo_2FCC7BC *)Method_System_Collections_Generic_List_Rect__Add__);
  v16.fields.m_XMin = ((float (__fastcall *)(Submarine2DUILocationInfo_o *, void *))this->klass->vtable._9_GetStorageRect.method)(
                        this,
                        this->klass[1]._1.image);
  System_Collections_Generic_List_Rect___Add(
    v3,
    v16,
    (const MethodInfo_2FCC7BC *)Method_System_Collections_Generic_List_Rect__Add__);
  v17.fields.m_XMin = ((float (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._4_GetTitleInfoRect.method)(
                        this,
                        this->klass->vtable._5_GetMenuButtonRect.methodPtr);
  System_Collections_Generic_List_Rect___Add(
    v3,
    v17,
    (const MethodInfo_2FCC7BC *)Method_System_Collections_Generic_List_Rect__Add__);
  v18.fields.m_XMin = ((float (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._6_GetMapChangeButtonRect.method)(
                        this,
                        this->klass->vtable._7_GetMasterIconSurroundsRect.methodPtr);
  System_Collections_Generic_List_Rect___Add(
    v3,
    v18,
    (const MethodInfo_2FCC7BC *)Method_System_Collections_Generic_List_Rect__Add__);
  v19.fields.m_XMin = ((float (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._5_GetMenuButtonRect.method)(
                        this,
                        this->klass->vtable._6_GetMapChangeButtonRect.methodPtr);
  System_Collections_Generic_List_Rect___Add(
    v3,
    v19,
    (const MethodInfo_2FCC7BC *)Method_System_Collections_Generic_List_Rect__Add__);
  v20.fields.m_XMin = ((float (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._7_GetMasterIconSurroundsRect.method)(
                        this,
                        this->klass->vtable._8_GetScanDialogRect.methodPtr);
  System_Collections_Generic_List_Rect___Add(
    v3,
    v20,
    (const MethodInfo_2FCC7BC *)Method_System_Collections_Generic_List_Rect__Add__);
  this->fields._rects_k__BackingField = v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v10, v11, v12, v13, v14, v15);
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