void __fastcall ClassBoardMissionListViewItemDraw___ctor(
        ClassBoardMissionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA829 & 1) == 0 )
  {
    sub_B5D5C4(&MissionListViewItemDraw_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA829 = 1;
  }
  if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
  }
  MissionListViewItemDraw___ctor((MissionListViewItemDraw_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardMissionListViewItemDraw__SetItem(
        ClassBoardMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int32_t mode,
        ListViewManager_o *listViewManager,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  UnityEngine_Object_o *conditionTitle; // x23
  UILabel_o *v19; // x23
  System_String_o *v20; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *progLabel; // x23
  UILabel_o *v23; // x23
  UIWidget_o *missionCondLb; // x20
  int v25; // s0
  __int64 v29; // x0
  struct UnityEngine_GameObject_array *disableDispObjList; // x19
  __int64 v31; // x8
  __int64 v32; // x20
  __int64 v34; // x0

  if ( (byte_42EA828 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)missionListViewItem, mode, listViewManager);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_3084/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_TITLE"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_3083/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_PROG"*/, v15, v16, v17);
    byte_42EA828 = 1;
  }
  conditionTitle = (UnityEngine_Object_o *)this->fields.conditionTitle;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(conditionTitle, 0LL, 0LL) )
  {
    v19 = this->fields.conditionTitle;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3084/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_TITLE"*/, 0LL);
    if ( !v19 )
      goto LABEL_32;
    UILabel__set_text(v19, v20, 0LL);
  }
  progLabel = (UnityEngine_Object_o *)this->fields.progLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(progLabel, 0LL, 0LL) )
  {
    v23 = this->fields.progLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3083/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_PROG"*/, 0LL);
    if ( !v23 )
      goto LABEL_32;
    UILabel__set_text(v23, v20, 0LL);
  }
  if ( !MissionListViewItemDraw__SetItem(
          (MissionListViewItemDraw_o *)this,
          missionListViewItem,
          mode,
          listViewManager,
          0LL) )
    return 0;
  missionCondLb = (UIWidget_o *)this->fields.missionCondLb;
  *(UnityEngine_Color_o *)&v25 = UnityEngine_Color__get_black(0LL);
  if ( !missionCondLb )
    goto LABEL_32;
  UIWidget__set_color(missionCondLb, *(UnityEngine_Color_o *)&v25, 0LL);
  disableDispObjList = this->fields.disableDispObjList;
  if ( disableDispObjList )
  {
    v31 = *(_QWORD *)&disableDispObjList->max_length;
    if ( v31 )
    {
      if ( (int)v31 >= 1 )
      {
        v32 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v32 >= (unsigned int)v31 )
          {
            v34 = sub_B5D6C8(v29);
            sub_B5D668(v34, 0LL);
          }
          v20 = (System_String_o *)disableDispObjList->m_Items[v32];
          if ( !v20 )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v20, 0, 0LL);
          LODWORD(v31) = disableDispObjList->max_length;
          if ( (int)++v32 >= (int)v31 )
            return 1;
        }
LABEL_32:
        sub_B5D69C(v20, v21);
      }
    }
  }
  return 1;
}