void CenterEffectDetailDialog___ctor(CenterEffectDetailDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C3CD2A & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C3CD2A = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void CenterEffectDetailDialog__Callback(CenterEffectDetailDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x0
  struct System_Action_o *v3; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v3 = callbackFunc;
  *p_callbackFunc = 0;
  sub_1C36FFC(p_callbackFunc, 0);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))v3->fields.invoke_impl)(v3->fields.method_code, v3->fields.method);
}


void CenterEffectDetailDialog__Close(
        CenterEffectDetailDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4C3CD27 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CenterEffectDetailDialog_EndClose__);
    byte_4C3CD27 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C36FFC(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CenterEffectDetailDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, v6);
}


void CenterEffectDetailDialog__EndClose(CenterEffectDetailDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  CenterEffectDetailDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_1C36FFC(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void CenterEffectDetailDialog__EndOpen(CenterEffectDetailDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void CenterEffectDetailDialog__Init(CenterEffectDetailDialog_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0
  const MethodInfo *v4; // x1

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1C372B4(0);
  ListViewManager__DestroyList(itemListViewManager, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, v4);
}


void CenterEffectDetailDialog__OnClickCancel(CenterEffectDetailDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C3CD28 & 1) == 0 )
  {
    sub_1C37058(&Method_CenterEffectDetailDialog_OnClickCancel__);
    byte_4C3CD28 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CenterEffectDetailDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CenterEffectDetailDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070();
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    this->fields.state = 3;
    CenterEffectDetailDialog__Callback(this, v5);
  }
}


void CenterEffectDetailDialog__Open(
        CenterEffectDetailDialog_o *this,
        int32_t questId,
        int32_t questPhase,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x20
  System_String_o *closeBtn; // x0
  UILabel_o *titleDetailLabel; // x20
  UILabel_o *closeLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__o *v14; // x20
  _BOOL8 v15; // x0
  Il2CppObject *current; // x22
  System_Collections_Generic_IEnumerable_T__o *FieldPosSkillId; // x23
  System_Collections_Generic_List_int__o *v18; // x21
  System_Collections_Generic_IEnumerable_T__o *FieldPosSkillLv; // x23
  System_Collections_Generic_List_int__o *v20; // x22
  __int64 v21; // x0
  int32_t v22; // w23
  __int64 Item; // x0
  int32_t v24; // w24
  __int64 v25; // x0
  struct CenterEffectDetailDialog_CenterEffectDetailSkillInfo_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  CenterEffectDetailDialog_CenterEffectDetailSkillInfo_o v29; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  const MethodInfo *v31; // x2
  System_Action_o *v32; // x20
  const MethodInfo *v33; // x4
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C3CD26 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CenterEffectDetailDialog_EndOpen__);
    sub_1C37058(&Method_DataManager_GetMaster_StageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Distinct_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_StageEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_StageEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_StageEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_StageEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor___78055976);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_3312/*"CENTER_EFFECT_DETAIL_DIALOG_TITLE"*/);
    sub_1C37058(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C37058(&StringLiteral_3311/*"CENTER_EFFECT_DETAIL_DIALOG_MESSAGE"*/);
    byte_4C3CD26 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  this->fields.callbackFunc = callback;
  sub_1C36FFC(&this->fields.callbackFunc, callback);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  closeBtn = LocalizationManager__Get((System_String_o *)StringLiteral_3312/*"CENTER_EFFECT_DETAIL_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_35;
  UILabel__set_text(titleLabel, closeBtn, 0);
  titleDetailLabel = this->fields.titleDetailLabel;
  closeBtn = LocalizationManager__Get((System_String_o *)StringLiteral_3311/*"CENTER_EFFECT_DETAIL_DIALOG_MESSAGE"*/, 0);
  if ( !titleDetailLabel )
    goto LABEL_35;
  UILabel__set_text(titleDetailLabel, closeBtn, 0);
  closeLabel = this->fields.closeLabel;
  closeBtn = LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_35;
  UILabel__set_text(closeLabel, closeBtn, 0);
  closeBtn = (System_String_o *)this->fields.closeBtn;
  if ( !closeBtn )
    goto LABEL_35;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeBtn, 0);
  AndroidBackKeyManager__AddBackBtn(gameObject, 0);
  v14 = (System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__o *)sub_1C372A4(System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__TypeInfo);
  System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo____ctor(
    v14,
    (const MethodInfo_3843478 *)Method_System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  closeBtn = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_StageMaster___);
  if ( !closeBtn )
    goto LABEL_35;
  closeBtn = (System_String_o *)StageMaster__GetEntityListIncludeRemap(
                                  (StageMaster_o *)closeBtn,
                                  questId,
                                  questPhase,
                                  0);
  if ( !closeBtn )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)closeBtn,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_StageEntity__GetEnumerator__);
  v35 = v34;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_StageEntity__MoveNext__);
    if ( !v15 )
      break;
    current = v35.fields._current;
    if ( !v35.fields._current )
      sub_1C372B4(v15);
    FieldPosSkillId = (System_Collections_Generic_IEnumerable_T__o *)StageEntity__GetFieldPosSkillId(
                                                                       (StageEntity_o *)v35.fields._current,
                                                                       0);
    v18 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_58218708(
      v18,
      FieldPosSkillId,
      (const MethodInfo_37858D4 *)Method_System_Collections_Generic_List_int___ctor___78055976);
    FieldPosSkillLv = (System_Collections_Generic_IEnumerable_T__o *)StageEntity__GetFieldPosSkillLv(
                                                                       (StageEntity_o *)current,
                                                                       0);
    v20 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_58218708(
      v20,
      FieldPosSkillLv,
      (const MethodInfo_37858D4 *)Method_System_Collections_Generic_List_int___ctor___78055976);
    if ( !v18 )
      sub_1C372B4(v21);
    if ( v18->fields._size >= 1 )
    {
      v22 = 0;
      do
      {
        Item = System_Collections_Generic_List_int___get_Item(
                 v18,
                 v22,
                 (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v20 )
          sub_1C372B4(Item);
        v24 = Item;
        v25 = System_Collections_Generic_List_int___get_Item(
                v20,
                v22,
                (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v14 )
          sub_1C372B4(v25);
        items = v14->fields._items;
        v27 = Method_System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__Add__;
        ++v14->fields._version;
        if ( !items )
          sub_1C372B4(v25);
        size = v14->fields._size;
        v29.fields.id = v24;
        v29.fields.lv = v25;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___AddWithResize(
            v14,
            v29,
            *(const MethodInfo_3843CCC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v14->fields._size = size + 1;
          items->m_Items[size] = v29;
        }
        ++v22;
      }
      while ( v22 < v18->fields._size );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_StageEntity__Dispose__);
  v30 = System_Linq_Enumerable__Distinct_CenterEffectDetailDialog_CenterEffectDetailSkillInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v14,
          (const MethodInfo_310AFB8 *)Method_System_Linq_Enumerable_Distinct_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___);
  closeBtn = (System_String_o *)System_Linq_Enumerable__ToList_CenterEffectDetailDialog_CenterEffectDetailSkillInfo_(
                                  v30,
                                  (const MethodInfo_312C200 *)Method_System_Linq_Enumerable_ToList_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___);
  if ( !this->fields.itemListViewManager
    || (CenterEffectDetailItemListViewManager__CreateList(
          this->fields.itemListViewManager,
          (System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__o *)closeBtn,
          v31),
        (closeBtn = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_35:
    sub_1C372B4(closeBtn);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)closeBtn, 1, 0);
  this->fields.state = 1;
  v32 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_CenterEffectDetailDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v32, 0, 0, v33);
}


void CenterEffectDetailDialog__add_callbackFunc(
        CenterEffectDetailDialog_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CenterEffectDetailDialog_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C3CD24 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C3CD24 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CenterEffectDetailDialog_o *)sub_1C37574(v8);
  CenterEffectDetailDialog__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *CenterEffectDetailDialog__get_closeBtnObject(
        CenterEffectDetailDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4C3CD29 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3CD29 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeBtn, 0, 0) )
    return 0;
  v5 = (UnityEngine_Component_o *)this->fields.closeBtn;
  if ( !v5 )
    sub_1C372B4(0);
  return UnityEngine_Component__get_gameObject(v5, 0);
}


void CenterEffectDetailDialog__remove_callbackFunc(
        CenterEffectDetailDialog_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CenterEffectDetailDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C3CD25 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C3CD25 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CenterEffectDetailDialog_o *)sub_1C37574(v8);
  CenterEffectDetailDialog__Init(v11, v12);
}