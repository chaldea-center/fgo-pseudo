// local variable allocation has failed, the output may be wrong!
void __fastcall Submarine2DUILocationInfo___ctor(Submarine2DUILocationInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Collections_Generic_List_Rect__o *v9; // x20
  int v10; // s0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_Rect_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F7C21 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Rect__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Rect___ctor__, v3);
    sub_B16FFC(&System_Collections_Generic_List_Rect__TypeInfo, v4);
    byte_40F7C21 = 1;
  }
  Base2DUILocationInfo___ctor((Base2DUILocationInfo_o *)this, 0LL);
  v9 = (System_Collections_Generic_List_Rect__o *)sub_B170CC(
                                                    System_Collections_Generic_List_Rect__TypeInfo,
                                                    v5,
                                                    v6,
                                                    v7,
                                                    v8);
  System_Collections_Generic_List_Rect____ctor(
    v9,
    (const MethodInfo_2E934A4 *)Method_System_Collections_Generic_List_Rect___ctor__);
  ((void (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._8_GetScanDialogRect.method)(
    this,
    this->klass->vtable._9_GetStorageRect.methodPtr);
  if ( !v9 )
    sub_B170D4();
  System_Collections_Generic_List_Rect___Add(
    v9,
    *(UnityEngine_Rect_o *)&v10,
    (const MethodInfo_2E94238 *)Method_System_Collections_Generic_List_Rect__Add__);
  v20.fields.m_XMin = ((float (__fastcall *)(Submarine2DUILocationInfo_o *, void *))this->klass->vtable._9_GetStorageRect.method)(
                        this,
                        this->klass[1]._1.image);
  System_Collections_Generic_List_Rect___Add(
    v9,
    v20,
    (const MethodInfo_2E94238 *)Method_System_Collections_Generic_List_Rect__Add__);
  v21.fields.m_XMin = ((float (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._4_GetTitleInfoRect.method)(
                        this,
                        this->klass->vtable._5_GetMenuButtonRect.methodPtr);
  System_Collections_Generic_List_Rect___Add(
    v9,
    v21,
    (const MethodInfo_2E94238 *)Method_System_Collections_Generic_List_Rect__Add__);
  v22.fields.m_XMin = ((float (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._6_GetMapChangeButtonRect.method)(
                        this,
                        this->klass->vtable._7_GetMasterIconSurroundsRect.methodPtr);
  System_Collections_Generic_List_Rect___Add(
    v9,
    v22,
    (const MethodInfo_2E94238 *)Method_System_Collections_Generic_List_Rect__Add__);
  v23.fields.m_XMin = ((float (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._5_GetMenuButtonRect.method)(
                        this,
                        this->klass->vtable._6_GetMapChangeButtonRect.methodPtr);
  System_Collections_Generic_List_Rect___Add(
    v9,
    v23,
    (const MethodInfo_2E94238 *)Method_System_Collections_Generic_List_Rect__Add__);
  v24.fields.m_XMin = ((float (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._7_GetMasterIconSurroundsRect.method)(
                        this,
                        this->klass->vtable._8_GetScanDialogRect.methodPtr);
  System_Collections_Generic_List_Rect___Add(
    v9,
    v24,
    (const MethodInfo_2E94238 *)Method_System_Collections_Generic_List_Rect__Add__);
  this->fields._rects_k__BackingField = v9;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v9, v14, v15, v16, v17, v18, v19);
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