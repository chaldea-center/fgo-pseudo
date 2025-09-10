void ClassBoardMissionListViewItemDraw___ctor(ClassBoardMissionListViewItemDraw_o *this, const MethodInfo *method)
{
  if ( (byte_4C2AD11 & 1) == 0 )
  {
    sub_1C2D490(&MissionListViewItemDraw_TypeInfo);
    byte_4C2AD11 = 1;
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
  __int64 v12; // x1
  UnityEngine_Object_o *progLabel; // x23
  UILabel_o *v14; // x23
  __int64 v15; // x2
  struct UnityEngine_GameObject_array *disableDispObjList; // x19
  il2cpp_array_size_t max_length; // x8
  _BOOL8 v18; // x0
  __int64 v19; // x20
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2AD10 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_3407/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_TITLE"*/);
    sub_1C2D490(&StringLiteral_3406/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_PROG"*/);
    byte_4C2AD10 = 1;
  }
  conditionTitle = (UnityEngine_Object_o *)this->fields.conditionTitle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(conditionTitle, 0, 0) )
  {
    v10 = this->fields.conditionTitle;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    missionCondLb = LocalizationManager__Get((System_String_o *)StringLiteral_3407/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_TITLE"*/, 0);
    if ( !v10 )
      goto LABEL_29;
    UILabel__set_text(v10, missionCondLb, 0);
  }
  progLabel = (UnityEngine_Object_o *)this->fields.progLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(progLabel, 0, 0) )
  {
    v14 = this->fields.progLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    missionCondLb = LocalizationManager__Get((System_String_o *)StringLiteral_3406/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_PROG"*/, 0);
    if ( !v14 )
      goto LABEL_29;
    UILabel__set_text(v14, missionCondLb, 0);
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
    v21.fields.r = 0.0;
    v21.fields.g = 0.0;
    v21.fields.b = 0.0;
    v21.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)missionCondLb, v21, 0);
    disableDispObjList = this->fields.disableDispObjList;
    if ( disableDispObjList )
    {
      max_length = disableDispObjList->max_length;
      v18 = 1;
      if ( max_length && (int)max_length >= 1 )
      {
        v19 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v19 >= (unsigned int)max_length )
            sub_1C2D6F4(v18, v12, v15);
          missionCondLb = (System_String_o *)disableDispObjList->m_Items[v19];
          if ( !missionCondLb )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)missionCondLb, 0, 0);
          LODWORD(max_length) = disableDispObjList->max_length;
          if ( (int)++v19 >= (int)max_length )
            goto LABEL_26;
        }
LABEL_29:
        sub_1C2D6EC(missionCondLb, v12);
      }
    }
    else
    {
LABEL_26:
      LOBYTE(v18) = 1;
    }
  }
  else
  {
    LOBYTE(v18) = 0;
  }
  return v18;
}