// local variable allocation has failed, the output may be wrong!
void __fastcall Submarine2DUILocationInfo___ctor(Submarine2DUILocationInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_Rect__o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int v14; // s0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_Rect_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E7B19 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Rect__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Rect___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_Rect__TypeInfo, v8, v9, v10);
    byte_42E7B19 = 1;
  }
  Base2DUILocationInfo___ctor((Base2DUILocationInfo_o *)this, 0LL);
  v11 = (System_Collections_Generic_List_Rect__o *)sub_B5D694(System_Collections_Generic_List_Rect__TypeInfo);
  System_Collections_Generic_List_Rect____ctor(
    v11,
    (const MethodInfo_2FF8F28 *)Method_System_Collections_Generic_List_Rect___ctor__);
  v12 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._8_GetScanDialogRect.method)(
          this,
          this->klass->vtable._9_GetStorageRect.methodPtr);
  if ( !v11 )
    sub_B5D69C(v12, v13);
  System_Collections_Generic_List_Rect___Add(
    v11,
    *(UnityEngine_Rect_o *)&v14,
    (const MethodInfo_2FF9CBC *)Method_System_Collections_Generic_List_Rect__Add__);
  v24.fields.m_XMin = ((float (__fastcall *)(Submarine2DUILocationInfo_o *, void *))this->klass->vtable._9_GetStorageRect.method)(
                        this,
                        this->klass[1]._1.image);
  System_Collections_Generic_List_Rect___Add(
    v11,
    v24,
    (const MethodInfo_2FF9CBC *)Method_System_Collections_Generic_List_Rect__Add__);
  v25.fields.m_XMin = ((float (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._4_GetTitleInfoRect.method)(
                        this,
                        this->klass->vtable._5_GetMenuButtonRect.methodPtr);
  System_Collections_Generic_List_Rect___Add(
    v11,
    v25,
    (const MethodInfo_2FF9CBC *)Method_System_Collections_Generic_List_Rect__Add__);
  v26.fields.m_XMin = ((float (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._6_GetMapChangeButtonRect.method)(
                        this,
                        this->klass->vtable._7_GetMasterIconSurroundsRect.methodPtr);
  System_Collections_Generic_List_Rect___Add(
    v11,
    v26,
    (const MethodInfo_2FF9CBC *)Method_System_Collections_Generic_List_Rect__Add__);
  v27.fields.m_XMin = ((float (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._5_GetMenuButtonRect.method)(
                        this,
                        this->klass->vtable._6_GetMapChangeButtonRect.methodPtr);
  System_Collections_Generic_List_Rect___Add(
    v11,
    v27,
    (const MethodInfo_2FF9CBC *)Method_System_Collections_Generic_List_Rect__Add__);
  v28.fields.m_XMin = ((float (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._7_GetMasterIconSurroundsRect.method)(
                        this,
                        this->klass->vtable._8_GetScanDialogRect.methodPtr);
  System_Collections_Generic_List_Rect___Add(
    v11,
    v28,
    (const MethodInfo_2FF9CBC *)Method_System_Collections_Generic_List_Rect__Add__);
  this->fields._rects_k__BackingField = v11;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v11, v18, v19, v20, v21, v22, v23);
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