void __fastcall ClassBoardMissionListViewItemDraw___ctor(
        ClassBoardMissionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A3135D & 1) == 0 )
  {
    sub_1B761C0(&MissionListViewItemDraw_TypeInfo, method);
    byte_4A3135D = 1;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *conditionTitle; // x23
  UILabel_o *v13; // x23
  System_String_o *missionCondLb; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *progLabel; // x23
  UILabel_o *v17; // x23
  struct UnityEngine_GameObject_array *disableDispObjList; // x19
  __int64 v19; // x8
  _BOOL8 v20; // x0
  __int64 v21; // x20
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A3135C & 1) == 0 )
  {
    sub_1B761C0(&LocalizationManager_TypeInfo, missionListViewItem);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v9);
    sub_1B761C0(&StringLiteral_3508/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_TITLE"*/, v10);
    sub_1B761C0(&StringLiteral_3507/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_PROG"*/, v11);
    byte_4A3135C = 1;
  }
  conditionTitle = (UnityEngine_Object_o *)this->fields.conditionTitle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(conditionTitle, 0LL, 0LL) )
  {
    v13 = this->fields.conditionTitle;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    missionCondLb = LocalizationManager__Get((System_String_o *)StringLiteral_3508/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_TITLE"*/, 0LL);
    if ( !v13 )
      goto LABEL_29;
    UILabel__set_text(v13, missionCondLb, 0LL);
  }
  progLabel = (UnityEngine_Object_o *)this->fields.progLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(progLabel, 0LL, 0LL) )
  {
    v17 = this->fields.progLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    missionCondLb = LocalizationManager__Get((System_String_o *)StringLiteral_3507/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_PROG"*/, 0LL);
    if ( !v17 )
      goto LABEL_29;
    UILabel__set_text(v17, missionCondLb, 0LL);
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
    v23.fields.r = 0.0;
    v23.fields.g = 0.0;
    v23.fields.b = 0.0;
    v23.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)missionCondLb, v23, 0LL);
    disableDispObjList = this->fields.disableDispObjList;
    if ( disableDispObjList )
    {
      v19 = *(_QWORD *)&disableDispObjList->max_length;
      v20 = 1LL;
      if ( v19 && (int)v19 >= 1 )
      {
        v21 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v21 >= (unsigned int)v19 )
            sub_1B76424(v20, v15);
          missionCondLb = (System_String_o *)disableDispObjList->m_Items[v21];
          if ( !missionCondLb )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)missionCondLb, 0, 0LL);
          LODWORD(v19) = disableDispObjList->max_length;
          if ( (int)++v21 >= (int)v19 )
            goto LABEL_26;
        }
LABEL_29:
        sub_1B7641C(missionCondLb, v15);
      }
    }
    else
    {
LABEL_26:
      LOBYTE(v20) = 1;
    }
  }
  else
  {
    LOBYTE(v20) = 0;
  }
  return v20;
}