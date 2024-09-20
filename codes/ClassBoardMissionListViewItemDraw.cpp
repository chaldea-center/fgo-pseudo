void __fastcall ClassBoardMissionListViewItemDraw___ctor(
        ClassBoardMissionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E5B7 & 1) == 0 )
  {
    sub_1B885B0(&MissionListViewItemDraw_TypeInfo);
    byte_4A5E5B7 = 1;
  }
  if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
  MissionListViewItemDraw___ctor((MissionListViewItemDraw_o *)this, 0LL);
}


bool __fastcall ClassBoardMissionListViewItemDraw__SetItem(
        ClassBoardMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int32_t mode,
        ListViewManager_o *listViewManager,
        const MethodInfo *method)
{
  UnityEngine_Object_o *conditionTitle; // x23
  UILabel_o *v10; // x23
  System_String_o *missionCondLb; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *progLabel; // x23
  UILabel_o *v14; // x23
  struct UnityEngine_GameObject_array *disableDispObjList; // x19
  __int64 v16; // x8
  _BOOL8 v17; // x0
  __int64 v18; // x20
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E5B6 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3509/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_TITLE"*/);
    sub_1B885B0(&StringLiteral_3508/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_PROG"*/);
    byte_4A5E5B6 = 1;
  }
  conditionTitle = (UnityEngine_Object_o *)this->fields.conditionTitle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(conditionTitle, 0LL, 0LL) )
  {
    v10 = this->fields.conditionTitle;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    missionCondLb = LocalizationManager__Get((System_String_o *)StringLiteral_3509/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_TITLE"*/, 0LL);
    if ( !v10 )
      goto LABEL_29;
    UILabel__set_text(v10, missionCondLb, 0LL);
  }
  progLabel = (UnityEngine_Object_o *)this->fields.progLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(progLabel, 0LL, 0LL) )
  {
    v14 = this->fields.progLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    missionCondLb = LocalizationManager__Get((System_String_o *)StringLiteral_3508/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_PROG"*/, 0LL);
    if ( !v14 )
      goto LABEL_29;
    UILabel__set_text(v14, missionCondLb, 0LL);
  }
  if ( MissionListViewItemDraw__SetItem(
         (MissionListViewItemDraw_o *)this,
         missionListViewItem,
         mode,
         listViewManager,
         0LL) )
  {
    missionCondLb = (System_String_o *)this->fields.missionCondLb;
    if ( !missionCondLb )
      goto LABEL_29;
    v20.fields.r = 0.0;
    v20.fields.g = 0.0;
    v20.fields.b = 0.0;
    v20.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)missionCondLb, v20, 0LL);
    disableDispObjList = this->fields.disableDispObjList;
    if ( disableDispObjList )
    {
      v16 = *(_QWORD *)&disableDispObjList->max_length;
      v17 = 1LL;
      if ( v16 && (int)v16 >= 1 )
      {
        v18 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v18 >= (unsigned int)v16 )
            sub_1B88814(v17, v12);
          missionCondLb = (System_String_o *)disableDispObjList->m_Items[v18];
          if ( !missionCondLb )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)missionCondLb, 0, 0LL);
          LODWORD(v16) = disableDispObjList->max_length;
          if ( (int)++v18 >= (int)v16 )
            goto LABEL_26;
        }
LABEL_29:
        sub_1B8880C(missionCondLb, v12);
      }
    }
    else
    {
LABEL_26:
      LOBYTE(v17) = 1;
    }
  }
  else
  {
    LOBYTE(v17) = 0;
  }
  return v17;
}