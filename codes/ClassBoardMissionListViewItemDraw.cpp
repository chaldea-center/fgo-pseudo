void __fastcall ClassBoardMissionListViewItemDraw___ctor(
        ClassBoardMissionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B058D1 & 1) == 0 )
  {
    sub_1BC3008(&MissionListViewItemDraw_TypeInfo, method);
    byte_4B058D1 = 1;
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
  __int64 v18; // x2
  struct UnityEngine_GameObject_array *disableDispObjList; // x19
  __int64 v20; // x8
  _BOOL8 v21; // x0
  __int64 v22; // x20
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B058D0 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, missionListViewItem);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    sub_1BC3008(&StringLiteral_3379/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_TITLE"*/, v10);
    sub_1BC3008(&StringLiteral_3378/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_PROG"*/, v11);
    byte_4B058D0 = 1;
  }
  conditionTitle = (UnityEngine_Object_o *)this->fields.conditionTitle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(conditionTitle, 0LL, 0LL) )
  {
    v13 = this->fields.conditionTitle;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    missionCondLb = LocalizationManager__Get((System_String_o *)StringLiteral_3379/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_TITLE"*/, 0LL);
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
    missionCondLb = LocalizationManager__Get((System_String_o *)StringLiteral_3378/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_PROG"*/, 0LL);
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
    v24.fields.r = 0.0;
    v24.fields.g = 0.0;
    v24.fields.b = 0.0;
    v24.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)missionCondLb, v24, 0LL);
    disableDispObjList = this->fields.disableDispObjList;
    if ( disableDispObjList )
    {
      v20 = *(_QWORD *)&disableDispObjList->max_length;
      v21 = 1LL;
      if ( v20 && (int)v20 >= 1 )
      {
        v22 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v22 >= (unsigned int)v20 )
            sub_1BC326C(v21, v15, v18);
          missionCondLb = (System_String_o *)disableDispObjList->m_Items[v22];
          if ( !missionCondLb )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)missionCondLb, 0, 0LL);
          LODWORD(v20) = disableDispObjList->max_length;
          if ( (int)++v22 >= (int)v20 )
            goto LABEL_26;
        }
LABEL_29:
        sub_1BC3264(missionCondLb, v15);
      }
    }
    else
    {
LABEL_26:
      LOBYTE(v21) = 1;
    }
  }
  else
  {
    LOBYTE(v21) = 0;
  }
  return v21;
}