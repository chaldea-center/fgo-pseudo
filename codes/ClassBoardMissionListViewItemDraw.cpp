void ClassBoardMissionListViewItemDraw___ctor(ClassBoardMissionListViewItemDraw_o *this, const MethodInfo *method)
{
  if ( (byte_593C4A4 & 1) == 0 )
  {
    sub_21FFC50(&MissionListViewItemDraw_TypeInfo);
    byte_593C4A4 = 1;
  }
  if ( !*(&MissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, method);
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
  __int64 v10; // x1
  UILabel_o *v11; // x23
  System_String_o *missionCondLb; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *progLabel; // x23
  __int64 v15; // x1
  UILabel_o *v16; // x23
  bool v17; // w20
  __int64 v18; // x0
  struct UnityEngine_GameObject_array *disableDispObjList; // x19
  int max_length; // w8
  __int64 v21; // x21
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593C4A3 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_3544/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_TITLE"*/);
    sub_21FFC50(&StringLiteral_3543/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_PROG"*/);
    byte_593C4A3 = 1;
  }
  conditionTitle = (UnityEngine_Object_o *)this->fields.conditionTitle;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, missionListViewItem);
  if ( UnityEngine_Object__op_Inequality(conditionTitle, 0, 0) )
  {
    v11 = this->fields.conditionTitle;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
    missionCondLb = LocalizationManager__Get((System_String_o *)StringLiteral_3544/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_TITLE"*/, 0);
    if ( !v11 )
      goto LABEL_26;
    UILabel__set_text(v11, missionCondLb, 0);
  }
  progLabel = (UnityEngine_Object_o *)this->fields.progLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(progLabel, 0, 0) )
  {
    v16 = this->fields.progLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
    missionCondLb = LocalizationManager__Get((System_String_o *)StringLiteral_3543/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_PROG"*/, 0);
    if ( !v16 )
      goto LABEL_26;
    UILabel__set_text(v16, missionCondLb, 0);
  }
  v17 = MissionListViewItemDraw__SetItem(
          (MissionListViewItemDraw_o *)this,
          missionListViewItem,
          mode,
          listViewManager,
          0);
  if ( v17 )
  {
    missionCondLb = (System_String_o *)this->fields.missionCondLb;
    if ( !missionCondLb )
      goto LABEL_26;
    v23.fields.r = 0.0;
    v23.fields.g = 0.0;
    v23.fields.b = 0.0;
    v23.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)missionCondLb, v23, 0);
    disableDispObjList = this->fields.disableDispObjList;
    if ( disableDispObjList )
    {
      max_length = disableDispObjList->max_length;
      if ( max_length >= 1 )
      {
        v21 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v21 >= max_length )
            sub_21FFED4(v18);
          missionCondLb = (System_String_o *)disableDispObjList->m_Items[v21];
          if ( !missionCondLb )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)missionCondLb, 0, 0);
          max_length = disableDispObjList->max_length;
          if ( (int)++v21 >= max_length )
            return v17;
        }
LABEL_26:
        sub_21FFECC(missionCondLb, v13);
      }
    }
  }
  return v17;
}