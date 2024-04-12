void __fastcall ClassBoardMissionListViewItemDraw___ctor(
        ClassBoardMissionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B388F & 1) == 0 )
  {
    sub_B52984(&MissionListViewItemDraw_TypeInfo);
    byte_42B388F = 1;
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
  UnityEngine_Object_o *conditionTitle; // x23
  UILabel_o *v10; // x23
  System_String_o *v11; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *progLabel; // x23
  UILabel_o *v14; // x23
  UIWidget_o *missionCondLb; // x20
  int v16; // s0
  __int64 v20; // x0
  struct UnityEngine_GameObject_array *disableDispObjList; // x19
  __int64 v22; // x8
  __int64 v23; // x20
  __int64 v25; // x0

  if ( (byte_42B388E & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_3057/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_TITLE"*/);
    sub_B52984(&StringLiteral_3056/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_PROG"*/);
    byte_42B388E = 1;
  }
  conditionTitle = (UnityEngine_Object_o *)this->fields.conditionTitle;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(conditionTitle, 0LL, 0LL) )
  {
    v10 = this->fields.conditionTitle;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3057/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_TITLE"*/, 0LL);
    if ( !v10 )
      goto LABEL_32;
    UILabel__set_text(v10, v11, 0LL);
  }
  progLabel = (UnityEngine_Object_o *)this->fields.progLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(progLabel, 0LL, 0LL) )
  {
    v14 = this->fields.progLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3056/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_PROG"*/, 0LL);
    if ( !v14 )
      goto LABEL_32;
    UILabel__set_text(v14, v11, 0LL);
  }
  if ( !MissionListViewItemDraw__SetItem(
          (MissionListViewItemDraw_o *)this,
          missionListViewItem,
          mode,
          listViewManager,
          0LL) )
    return 0;
  missionCondLb = (UIWidget_o *)this->fields.missionCondLb;
  *(UnityEngine_Color_o *)&v16 = UnityEngine_Color__get_black(0LL);
  if ( !missionCondLb )
    goto LABEL_32;
  UIWidget__set_color(missionCondLb, *(UnityEngine_Color_o *)&v16, 0LL);
  disableDispObjList = this->fields.disableDispObjList;
  if ( disableDispObjList )
  {
    v22 = *(_QWORD *)&disableDispObjList->max_length;
    if ( v22 )
    {
      if ( (int)v22 >= 1 )
      {
        v23 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v23 >= (unsigned int)v22 )
          {
            v25 = sub_B52A88(v20);
            sub_B52A28(v25, 0LL);
          }
          v11 = (System_String_o *)disableDispObjList->m_Items[v23];
          if ( !v11 )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v11, 0, 0LL);
          LODWORD(v22) = disableDispObjList->max_length;
          if ( (int)++v23 >= (int)v22 )
            return 1;
        }
LABEL_32:
        sub_B52A5C(v11, v12);
      }
    }
  }
  return 1;
}