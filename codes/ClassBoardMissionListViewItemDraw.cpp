void __fastcall ClassBoardMissionListViewItemDraw___ctor(
        ClassBoardMissionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B196E5 & 1) == 0 )
  {
    sub_1BCA7E0(&MissionListViewItemDraw_TypeInfo, method, v2);
    byte_4B196E5 = 1;
  }
  if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, method);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *conditionTitle; // x23
  __int64 v16; // x1
  UILabel_o *v17; // x23
  System_String_o *missionCondLb; // x0
  __int64 v19; // x1
  UnityEngine_Object_o *progLabel; // x23
  __int64 v21; // x1
  UILabel_o *v22; // x23
  struct UnityEngine_GameObject_array *disableDispObjList; // x19
  __int64 v24; // x8
  _BOOL8 v25; // x0
  __int64 v26; // x20
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B196E4 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, missionListViewItem, *(_QWORD *)&mode);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_3535/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_TITLE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3534/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_PROG"*/, v13, v14);
    byte_4B196E4 = 1;
  }
  conditionTitle = (UnityEngine_Object_o *)this->fields.conditionTitle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, missionListViewItem);
  if ( UnityEngine_Object__op_Inequality(conditionTitle, 0LL, 0LL) )
  {
    v17 = this->fields.conditionTitle;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    missionCondLb = LocalizationManager__Get((System_String_o *)StringLiteral_3535/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_TITLE"*/, 0LL);
    if ( !v17 )
      goto LABEL_29;
    UILabel__set_text(v17, missionCondLb, 0LL);
  }
  progLabel = (UnityEngine_Object_o *)this->fields.progLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality(progLabel, 0LL, 0LL) )
  {
    v22 = this->fields.progLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
    missionCondLb = LocalizationManager__Get((System_String_o *)StringLiteral_3534/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_PROG"*/, 0LL);
    if ( !v22 )
      goto LABEL_29;
    UILabel__set_text(v22, missionCondLb, 0LL);
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
    v28.fields.r = 0.0;
    v28.fields.g = 0.0;
    v28.fields.b = 0.0;
    v28.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)missionCondLb, v28, 0LL);
    disableDispObjList = this->fields.disableDispObjList;
    if ( disableDispObjList )
    {
      v24 = *(_QWORD *)&disableDispObjList->max_length;
      v25 = 1LL;
      if ( v24 && (int)v24 >= 1 )
      {
        v26 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v26 >= (unsigned int)v24 )
            sub_1BCAA44(v25, v19);
          missionCondLb = (System_String_o *)disableDispObjList->m_Items[v26];
          if ( !missionCondLb )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)missionCondLb, 0, 0LL);
          LODWORD(v24) = disableDispObjList->max_length;
          if ( (int)++v26 >= (int)v24 )
            goto LABEL_26;
        }
LABEL_29:
        sub_1BCAA3C(missionCondLb, v19);
      }
    }
    else
    {
LABEL_26:
      LOBYTE(v25) = 1;
    }
  }
  else
  {
    LOBYTE(v25) = 0;
  }
  return v25;
}