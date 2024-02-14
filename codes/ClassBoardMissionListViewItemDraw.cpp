void __fastcall ClassBoardMissionListViewItemDraw___ctor(
        ClassBoardMissionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_4217B43 & 1) == 0 )
  {
    sub_B0D8A4(&MissionListViewItemDraw_TypeInfo, method);
    byte_4217B43 = 1;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *conditionTitle; // x23
  UILabel_o *v13; // x23
  System_String_o *v14; // x0
  UnityEngine_Object_o *progLabel; // x23
  UILabel_o *v16; // x23
  UIWidget_o *missionCondLb; // x20
  int v18; // s0
  __int64 v22; // x0
  struct UnityEngine_GameObject_array *disableDispObjList; // x19
  __int64 v24; // x8
  __int64 v25; // x20
  __int64 v27; // x0

  if ( (byte_4217B42 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, missionListViewItem);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_3037/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_TITLE"*/, v10);
    sub_B0D8A4(&StringLiteral_3036/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_PROG"*/, v11);
    byte_4217B42 = 1;
  }
  conditionTitle = (UnityEngine_Object_o *)this->fields.conditionTitle;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(conditionTitle, 0LL, 0LL) )
  {
    v13 = this->fields.conditionTitle;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3037/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_TITLE"*/, 0LL);
    if ( !v13 )
      goto LABEL_32;
    UILabel__set_text(v13, v14, 0LL);
  }
  progLabel = (UnityEngine_Object_o *)this->fields.progLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(progLabel, 0LL, 0LL) )
  {
    v16 = this->fields.progLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3036/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_PROG"*/, 0LL);
    if ( !v16 )
      goto LABEL_32;
    UILabel__set_text(v16, v14, 0LL);
  }
  if ( !MissionListViewItemDraw__SetItem(
          (MissionListViewItemDraw_o *)this,
          missionListViewItem,
          mode,
          listViewManager,
          0LL) )
    return 0;
  missionCondLb = (UIWidget_o *)this->fields.missionCondLb;
  *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_black(0LL);
  if ( !missionCondLb )
    goto LABEL_32;
  UIWidget__set_color(missionCondLb, *(UnityEngine_Color_o *)&v18, 0LL);
  disableDispObjList = this->fields.disableDispObjList;
  if ( disableDispObjList )
  {
    v24 = *(_QWORD *)&disableDispObjList->max_length;
    if ( v24 )
    {
      if ( (int)v24 >= 1 )
      {
        v25 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v25 >= (unsigned int)v24 )
          {
            v27 = sub_B0D9A8(v22);
            sub_B0D948(v27, 0LL);
          }
          v14 = (System_String_o *)disableDispObjList->m_Items[v25];
          if ( !v14 )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v14, 0, 0LL);
          LODWORD(v24) = disableDispObjList->max_length;
          if ( (int)++v25 >= (int)v24 )
            return 1;
        }
LABEL_32:
        sub_B0D97C(v14);
      }
    }
  }
  return 1;
}