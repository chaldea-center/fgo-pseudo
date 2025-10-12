void ClassBoardMissionListViewItemDraw___ctor(ClassBoardMissionListViewItemDraw_o *this, const MethodInfo *method)
{
  if ( (byte_4C3B430 & 1) == 0 )
  {
    sub_1C32C20(&MissionListViewItemDraw_TypeInfo);
    byte_4C3B430 = 1;
  }
  if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
  MissionListViewItemDraw___ctor((MissionListViewItemDraw_o *)this, 0);
}


bool ClassBoardMissionListViewItemDraw__SetItem(
        ClassBoardMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int32_t mode,
        ListViewManager_o *listViewManager,
        const MethodInfo *method)
{
  UnityEngine_Object_o *conditionTitle; // x23
  UILabel_o *v10; // x23
  System_String_o *missionCondLb; // x0
  UnityEngine_Object_o *progLabel; // x23
  UILabel_o *v13; // x23
  struct UnityEngine_GameObject_array *disableDispObjList; // x19
  il2cpp_array_size_t max_length; // x8
  _BOOL8 v16; // x0
  __int64 v17; // x20
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3B42F & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_3410/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_TITLE"*/);
    sub_1C32C20(&StringLiteral_3409/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_PROG"*/);
    byte_4C3B42F = 1;
  }
  conditionTitle = (UnityEngine_Object_o *)this->fields.conditionTitle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(conditionTitle, 0, 0) )
  {
    v10 = this->fields.conditionTitle;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    missionCondLb = LocalizationManager__Get((System_String_o *)StringLiteral_3410/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_TITLE"*/, 0);
    if ( !v10 )
      goto LABEL_29;
    UILabel__set_text(v10, missionCondLb, 0);
  }
  progLabel = (UnityEngine_Object_o *)this->fields.progLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(progLabel, 0, 0) )
  {
    v13 = this->fields.progLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    missionCondLb = LocalizationManager__Get((System_String_o *)StringLiteral_3409/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_PROG"*/, 0);
    if ( !v13 )
      goto LABEL_29;
    UILabel__set_text(v13, missionCondLb, 0);
  }
  if ( MissionListViewItemDraw__SetItem(
         (MissionListViewItemDraw_o *)this,
         missionListViewItem,
         mode,
         listViewManager,
         0) )
  {
    missionCondLb = (System_String_o *)this->fields.missionCondLb;
    if ( !missionCondLb )
      goto LABEL_29;
    v19.fields.r = 0.0;
    v19.fields.g = 0.0;
    v19.fields.b = 0.0;
    v19.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)missionCondLb, v19, 0);
    disableDispObjList = this->fields.disableDispObjList;
    if ( disableDispObjList )
    {
      max_length = disableDispObjList->max_length;
      v16 = 1;
      if ( max_length && (int)max_length >= 1 )
      {
        v17 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v17 >= (unsigned int)max_length )
            sub_1C32E84(v16);
          missionCondLb = (System_String_o *)disableDispObjList->m_Items[v17];
          if ( !missionCondLb )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)missionCondLb, 0, 0);
          LODWORD(max_length) = disableDispObjList->max_length;
          if ( (int)++v17 >= (int)max_length )
            goto LABEL_26;
        }
LABEL_29:
        sub_1C32E7C(missionCondLb);
      }
    }
    else
    {
LABEL_26:
      LOBYTE(v16) = 1;
    }
  }
  else
  {
    LOBYTE(v16) = 0;
  }
  return v16;
}