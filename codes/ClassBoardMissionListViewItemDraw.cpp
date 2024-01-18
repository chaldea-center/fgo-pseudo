void __fastcall ClassBoardMissionListViewItemDraw___ctor(
        ClassBoardMissionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189514 & 1) == 0 )
  {
    sub_B2C35C(&MissionListViewItemDraw_TypeInfo, method);
    byte_4189514 = 1;
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
  __int64 v15; // x1
  UnityEngine_Object_o *progLabel; // x23
  UILabel_o *v17; // x23
  UIWidget_o *missionCondLb; // x20
  int v19; // s0
  __int64 v23; // x0
  struct UnityEngine_GameObject_array *disableDispObjList; // x19
  __int64 v25; // x8
  __int64 v26; // x20
  __int64 v28; // x0

  if ( (byte_4189513 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, missionListViewItem);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_3025/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_TITLE"*/, v10);
    sub_B2C35C(&StringLiteral_3024/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_PROG"*/, v11);
    byte_4189513 = 1;
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
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3025/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_TITLE"*/, 0LL);
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
    v17 = this->fields.progLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3024/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_PROG"*/, 0LL);
    if ( !v17 )
      goto LABEL_32;
    UILabel__set_text(v17, v14, 0LL);
  }
  if ( !MissionListViewItemDraw__SetItem(
          (MissionListViewItemDraw_o *)this,
          missionListViewItem,
          mode,
          listViewManager,
          0LL) )
    return 0;
  missionCondLb = (UIWidget_o *)this->fields.missionCondLb;
  *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_black(0LL);
  if ( !missionCondLb )
    goto LABEL_32;
  UIWidget__set_color(missionCondLb, *(UnityEngine_Color_o *)&v19, 0LL);
  disableDispObjList = this->fields.disableDispObjList;
  if ( disableDispObjList )
  {
    v25 = *(_QWORD *)&disableDispObjList->max_length;
    if ( v25 )
    {
      if ( (int)v25 >= 1 )
      {
        v26 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v26 >= (unsigned int)v25 )
          {
            v28 = sub_B2C460(v23);
            sub_B2C400(v28, 0LL);
          }
          v14 = (System_String_o *)disableDispObjList->m_Items[v26];
          if ( !v14 )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v14, 0, 0LL);
          LODWORD(v25) = disableDispObjList->max_length;
          if ( (int)++v26 >= (int)v25 )
            return 1;
        }
LABEL_32:
        sub_B2C434(v14, v15);
      }
    }
  }
  return 1;
}