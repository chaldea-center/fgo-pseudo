// local variable allocation has failed, the output may be wrong!
void __fastcall Submarine2DUILocationInfo___ctor(Submarine2DUILocationInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_Rect__o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int v8; // s0
  int v9; // s1
  int v10; // s2
  int v11; // s3
  struct UnityEngine_Rect_array *items; // x9
  _QWORD *v13; // x8
  __int64 size; // x10
  Il2CppObject *v15; // x9
  int v16; // s0
  int v17; // s1
  int v18; // s2
  int v19; // s3
  struct UnityEngine_Rect_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppObject *v23; // x8
  int v24; // s0
  int v25; // s1
  int v26; // s2
  int v27; // s3
  struct UnityEngine_Rect_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppObject *v31; // x8
  int v32; // s0
  int v33; // s1
  int v34; // s2
  int v35; // s3
  struct UnityEngine_Rect_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppObject *v39; // x8
  int v40; // s0
  int v41; // s1
  int v42; // s2
  int v43; // s3
  struct UnityEngine_Rect_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppObject *v47; // x8
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int v54; // s0
  int v55; // s1
  int v56; // s2
  int v57; // s3
  struct UnityEngine_Rect_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  Il2CppObject *v61; // x8

  if ( (byte_4BB1209 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Rect__Add__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Rect___ctor__, v3);
    sub_1C13D24(&System_Collections_Generic_List_Rect__TypeInfo, v4);
    byte_4BB1209 = 1;
  }
  Base2DUILocationInfo___ctor((Base2DUILocationInfo_o *)this, 0LL);
  v5 = (System_Collections_Generic_List_Rect__o *)sub_1C13F70(System_Collections_Generic_List_Rect__TypeInfo);
  System_Collections_Generic_List_Rect____ctor(
    v5,
    (const MethodInfo_363D6E0 *)Method_System_Collections_Generic_List_Rect___ctor__);
  v6 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._8_GetScanDialogRect.method)(
         this,
         this->klass->vtable._9_GetStorageRect.methodPtr);
  if ( !v5 )
    goto LABEL_29;
  items = v5->fields._items;
  v13 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_29;
  size = v5->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v5,
      *(UnityEngine_Rect_o *)&v8,
      *(const MethodInfo_363DF6C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj + size;
    v5->fields._size = size + 1;
    LODWORD(v15[2].klass) = v8;
    HIDWORD(v15[2].klass) = v9;
    LODWORD(v15[2].monitor) = v10;
    HIDWORD(v15[2].monitor) = v11;
  }
  v6 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, void *))this->klass->vtable._9_GetStorageRect.method)(
         this,
         this->klass[1]._1.image);
  v20 = v5->fields._items;
  v21 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v5->fields._version;
  if ( !v20 )
    goto LABEL_29;
  v22 = v5->fields._size;
  if ( (unsigned int)v22 >= v20->max_length )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v5,
      *(UnityEngine_Rect_o *)&v16,
      *(const MethodInfo_363DF6C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &v20->obj + v22;
    v5->fields._size = v22 + 1;
    LODWORD(v23[2].klass) = v16;
    HIDWORD(v23[2].klass) = v17;
    LODWORD(v23[2].monitor) = v18;
    HIDWORD(v23[2].monitor) = v19;
  }
  v6 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._4_GetTitleInfoRect.method)(
         this,
         this->klass->vtable._5_GetMenuButtonRect.methodPtr);
  v28 = v5->fields._items;
  v29 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v5->fields._version;
  if ( !v28 )
    goto LABEL_29;
  v30 = v5->fields._size;
  if ( (unsigned int)v30 >= v28->max_length )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v5,
      *(UnityEngine_Rect_o *)&v24,
      *(const MethodInfo_363DF6C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &v28->obj + v30;
    v5->fields._size = v30 + 1;
    LODWORD(v31[2].klass) = v24;
    HIDWORD(v31[2].klass) = v25;
    LODWORD(v31[2].monitor) = v26;
    HIDWORD(v31[2].monitor) = v27;
  }
  v6 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._6_GetMapChangeButtonRect.method)(
         this,
         this->klass->vtable._7_GetMasterIconSurroundsRect.methodPtr);
  v36 = v5->fields._items;
  v37 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v5->fields._version;
  if ( !v36 )
    goto LABEL_29;
  v38 = v5->fields._size;
  if ( (unsigned int)v38 >= v36->max_length )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v5,
      *(UnityEngine_Rect_o *)&v32,
      *(const MethodInfo_363DF6C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = &v36->obj + v38;
    v5->fields._size = v38 + 1;
    LODWORD(v39[2].klass) = v32;
    HIDWORD(v39[2].klass) = v33;
    LODWORD(v39[2].monitor) = v34;
    HIDWORD(v39[2].monitor) = v35;
  }
  v6 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._5_GetMenuButtonRect.method)(
         this,
         this->klass->vtable._6_GetMapChangeButtonRect.methodPtr);
  v44 = v5->fields._items;
  v45 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v5->fields._version;
  if ( !v44 )
    goto LABEL_29;
  v46 = v5->fields._size;
  if ( (unsigned int)v46 >= v44->max_length )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v5,
      *(UnityEngine_Rect_o *)&v40,
      *(const MethodInfo_363DF6C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = &v44->obj + v46;
    v5->fields._size = v46 + 1;
    LODWORD(v47[2].klass) = v40;
    HIDWORD(v47[2].klass) = v41;
    LODWORD(v47[2].monitor) = v42;
    HIDWORD(v47[2].monitor) = v43;
  }
  v6 = ((__int64 (__fastcall *)(Submarine2DUILocationInfo_o *, Il2CppMethodPointer))this->klass->vtable._7_GetMasterIconSurroundsRect.method)(
         this,
         this->klass->vtable._8_GetScanDialogRect.methodPtr);
  v58 = v5->fields._items;
  v59 = Method_System_Collections_Generic_List_Rect__Add__;
  ++v5->fields._version;
  if ( !v58 )
LABEL_29:
    sub_1C13F80(v6, v7);
  v60 = v5->fields._size;
  if ( (unsigned int)v60 >= v58->max_length )
  {
    System_Collections_Generic_List_Rect___AddWithResize(
      v5,
      *(UnityEngine_Rect_o *)&v54,
      *(const MethodInfo_363DF6C **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
  }
  else
  {
    v61 = &v58->obj + v60;
    v5->fields._size = v60 + 1;
    LODWORD(v61[2].klass) = v54;
    HIDWORD(v61[2].klass) = v55;
    LODWORD(v61[2].monitor) = v56;
    HIDWORD(v61[2].monitor) = v57;
  }
  this->fields._rects_k__BackingField = v5;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)v5, v48, v49, v50, v51, v52, v53);
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