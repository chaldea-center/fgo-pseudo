void CenterEffectDetailDialog___ctor(CenterEffectDetailDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D26302 & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D26302 = 1;
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
  sub_1C9403C(p_callbackFunc, 0);
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

  if ( (byte_4D262FF & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_CenterEffectDetailDialog_EndClose__);
    byte_4D262FF = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C9403C(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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
    sub_1C9403C(p_closeCallbackFunc, 0);
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
    sub_1C942F0(0, method);
  ListViewManager__DestroyList(itemListViewManager, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, v4);
}


void CenterEffectDetailDialog__OnClickCancel(CenterEffectDetailDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4D26300 & 1) == 0 )
  {
    sub_1C94098(&Method_CenterEffectDetailDialog_OnClickCancel__);
    byte_4D26300 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CenterEffectDetailDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CenterEffectDetailDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0();
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
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
  __int64 v11; // x1
  UILabel_o *titleDetailLabel; // x20
  UILabel_o *closeLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__o *v15; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_IEnumerable_T__o *FieldPosSkillId; // x23
  System_Collections_Generic_List_int__o *v20; // x21
  System_Collections_Generic_IEnumerable_T__o *FieldPosSkillLv; // x23
  System_Collections_Generic_List_int__o *v22; // x22
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w23
  __int64 Item; // x0
  __int64 v27; // x1
  int32_t v28; // w24
  __int64 v29; // x0
  __int64 v30; // x1
  struct CenterEffectDetailDialog_CenterEffectDetailSkillInfo_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  CenterEffectDetailDialog_CenterEffectDetailSkillInfo_o v34; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  const MethodInfo *v36; // x2
  System_Action_o *v37; // x20
  const MethodInfo *v38; // x4
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D262FE & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_CenterEffectDetailDialog_EndOpen__);
    sub_1C94098(&Method_DataManager_GetMaster_StageMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Distinct_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_StageEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_StageEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_StageEntity__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_StageEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor___78995296);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_3315/*"CENTER_EFFECT_DETAIL_DIALOG_TITLE"*/);
    sub_1C94098(&StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C94098(&StringLiteral_3314/*"CENTER_EFFECT_DETAIL_DIALOG_MESSAGE"*/);
    byte_4D262FE = 1;
  }
  memset(&v40, 0, sizeof(v40));
  this->fields.callbackFunc = callback;
  sub_1C9403C(&this->fields.callbackFunc, callback);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  closeBtn = LocalizationManager__Get((System_String_o *)StringLiteral_3315/*"CENTER_EFFECT_DETAIL_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_35;
  UILabel__set_text(titleLabel, closeBtn, 0);
  titleDetailLabel = this->fields.titleDetailLabel;
  closeBtn = LocalizationManager__Get((System_String_o *)StringLiteral_3314/*"CENTER_EFFECT_DETAIL_DIALOG_MESSAGE"*/, 0);
  if ( !titleDetailLabel )
    goto LABEL_35;
  UILabel__set_text(titleDetailLabel, closeBtn, 0);
  closeLabel = this->fields.closeLabel;
  closeBtn = LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_35;
  UILabel__set_text(closeLabel, closeBtn, 0);
  closeBtn = (System_String_o *)this->fields.closeBtn;
  if ( !closeBtn )
    goto LABEL_35;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeBtn, 0);
  AndroidBackKeyManager__AddBackBtn(gameObject, 0);
  v15 = (System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__o *)sub_1C942E4(System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__TypeInfo);
  System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo____ctor(
    v15,
    (const MethodInfo_390B464 *)Method_System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  closeBtn = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_StageMaster___);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_object__o *)closeBtn,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_StageEntity__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_StageEntity__MoveNext__);
    if ( !v16 )
      break;
    current = v40.fields._current;
    if ( !v40.fields._current )
      sub_1C942F0(v16, v17);
    FieldPosSkillId = (System_Collections_Generic_IEnumerable_T__o *)StageEntity__GetFieldPosSkillId(
                                                                       (StageEntity_o *)v40.fields._current,
                                                                       0);
    v20 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_59037412(
      v20,
      FieldPosSkillId,
      (const MethodInfo_384D6E4 *)Method_System_Collections_Generic_List_int___ctor___78995296);
    FieldPosSkillLv = (System_Collections_Generic_IEnumerable_T__o *)StageEntity__GetFieldPosSkillLv(
                                                                       (StageEntity_o *)current,
                                                                       0);
    v22 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_59037412(
      v22,
      FieldPosSkillLv,
      (const MethodInfo_384D6E4 *)Method_System_Collections_Generic_List_int___ctor___78995296);
    if ( !v20 )
      sub_1C942F0(v23, v24);
    if ( v20->fields._size >= 1 )
    {
      v25 = 0;
      do
      {
        Item = System_Collections_Generic_List_int___get_Item(
                 v20,
                 v25,
                 (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v22 )
          sub_1C942F0(Item, v27);
        v28 = Item;
        v29 = System_Collections_Generic_List_int___get_Item(
                v22,
                v25,
                (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v15 )
          sub_1C942F0(v29, v30);
        items = v15->fields._items;
        v32 = Method_System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__Add__;
        ++v15->fields._version;
        if ( !items )
          sub_1C942F0(v29, v30);
        size = v15->fields._size;
        v34.fields.id = v28;
        v34.fields.lv = v29;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___AddWithResize(
            v15,
            v34,
            *(const MethodInfo_390BCB8 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v15->fields._size = size + 1;
          items->m_Items[size] = v34;
        }
        ++v25;
      }
      while ( v25 < v20->fields._size );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_StageEntity__Dispose__);
  v35 = System_Linq_Enumerable__Distinct_CenterEffectDetailDialog_CenterEffectDetailSkillInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v15,
          (const MethodInfo_31BF808 *)Method_System_Linq_Enumerable_Distinct_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___);
  closeBtn = (System_String_o *)System_Linq_Enumerable__ToList_CenterEffectDetailDialog_CenterEffectDetailSkillInfo_(
                                  v35,
                                  (const MethodInfo_31E17B8 *)Method_System_Linq_Enumerable_ToList_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___);
  if ( !this->fields.itemListViewManager
    || (CenterEffectDetailItemListViewManager__CreateList(
          this->fields.itemListViewManager,
          (System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__o *)closeBtn,
          v36),
        (closeBtn = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_35:
    sub_1C942F0(closeBtn, v11);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)closeBtn, 1, 0);
  this->fields.state = 1;
  v37 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_CenterEffectDetailDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v37, 0, 0, v38);
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

  if ( (byte_4D262FC & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D262FC = 1;
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
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CenterEffectDetailDialog_o *)sub_1C9468C(v8);
  CenterEffectDetailDialog__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *CenterEffectDetailDialog__get_closeBtnObject(
        CenterEffectDetailDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4D26301 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26301 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeBtn, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeBtn;
  if ( !v6 )
    sub_1C942F0(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
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

  if ( (byte_4D262FD & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D262FD = 1;
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
    v9 = sub_1CEFE6C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CenterEffectDetailDialog_o *)sub_1C9468C(v8);
  CenterEffectDetailDialog__Init(v11, v12);
}