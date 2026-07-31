void CenterEffectDetailDialog___ctor(CenterEffectDetailDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5931D1A & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5931D1A = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
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
  sub_21FFBF4(p_callbackFunc, 0);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))v3->fields.invoke_impl)(v3->fields.method_code, v3->fields.method);
}


void CenterEffectDetailDialog__Close(
        CenterEffectDetailDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_c *v5; // x0
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_5931D17 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CenterEffectDetailDialog_EndClose__);
    byte_5931D17 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(&this->fields.closeCallbackFunc, callback);
  v5 = System_Action_TypeInfo;
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_21FFEBC(v5);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_CenterEffectDetailDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, v7);
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
    sub_21FFBF4(p_closeCallbackFunc, 0);
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
    sub_21FFECC(0, method);
  ListViewManager__DestroyList(itemListViewManager, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, v4);
}


void CenterEffectDetailDialog__OnClickCancel(CenterEffectDetailDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_5931D18 & 1) == 0 )
  {
    sub_21FFC50(&Method_CenterEffectDetailDialog_OnClickCancel__);
    byte_5931D18 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CenterEffectDetailDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CenterEffectDetailDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68();
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
  __int64 v9; // x1
  __int64 v10; // x2
  UILabel_o *titleLabel; // x20
  System_String_o *closeBtn; // x0
  __int64 v13; // x1
  UILabel_o *titleDetailLabel; // x20
  UILabel_o *closeLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *current; // x22
  System_Collections_Generic_IEnumerable_T__o *FieldPosSkillId; // x23
  System_Collections_Generic_List_int__o *v24; // x21
  System_Collections_Generic_IEnumerable_T__o *FieldPosSkillLv; // x23
  System_Collections_Generic_List_int__o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w23
  __int64 Item; // x0
  __int64 v31; // x1
  int32_t v32; // w24
  __int64 v33; // x0
  __int64 v34; // x1
  struct CenterEffectDetailDialog_CenterEffectDetailSkillInfo_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  CenterEffectDetailDialog_CenterEffectDetailSkillInfo_o v38; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  const MethodInfo *v40; // x2
  System_Action_o *v41; // x20
  const MethodInfo *v42; // x4
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5931D16 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CenterEffectDetailDialog_EndOpen__);
    sub_21FFC50(&Method_DataManager_GetMaster_StageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Distinct_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StageEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StageEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StageEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StageEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor___91427360);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3444/*"CENTER_EFFECT_DETAIL_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_3443/*"CENTER_EFFECT_DETAIL_DIALOG_MESSAGE"*/);
    byte_5931D16 = 1;
  }
  *(_QWORD *)&v44.fields._index = 0;
  this->fields.callbackFunc = callback;
  v44.fields._list = 0;
  v44.fields._current = 0;
  sub_21FFBF4(&this->fields.callbackFunc, callback);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
  closeBtn = LocalizationManager__Get((System_String_o *)StringLiteral_3444/*"CENTER_EFFECT_DETAIL_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_34;
  UILabel__set_text(titleLabel, closeBtn, 0);
  titleDetailLabel = this->fields.titleDetailLabel;
  closeBtn = LocalizationManager__Get((System_String_o *)StringLiteral_3443/*"CENTER_EFFECT_DETAIL_DIALOG_MESSAGE"*/, 0);
  if ( !titleDetailLabel )
    goto LABEL_34;
  UILabel__set_text(titleDetailLabel, closeBtn, 0);
  closeLabel = this->fields.closeLabel;
  closeBtn = LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_34;
  UILabel__set_text(closeLabel, closeBtn, 0);
  closeBtn = (System_String_o *)this->fields.closeBtn;
  if ( !closeBtn )
    goto LABEL_34;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeBtn, 0);
  AndroidBackKeyManager__AddBackBtn(gameObject, 0);
  v17 = (System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__o *)sub_21FFEBC(System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__TypeInfo);
  System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo____ctor(
    v17,
    (const MethodInfo_44CF910 *)Method_System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18, v19);
  closeBtn = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_StageMaster___);
  if ( !closeBtn )
    goto LABEL_34;
  closeBtn = (System_String_o *)StageMaster__GetEntityListIncludeRemap(
                                  (StageMaster_o *)closeBtn,
                                  questId,
                                  questPhase,
                                  0);
  if ( !closeBtn )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    (System_Collections_Generic_List_object__o *)closeBtn,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_StageEntity__GetEnumerator__);
  v44 = v43;
  v43.fields._list = 0;
  *(_QWORD *)&v43.fields._index = &v44;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v44,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_StageEntity__MoveNext__);
    if ( !v20 )
      break;
    current = v44.fields._current;
    if ( !v44.fields._current )
      sub_21FFECC(v20, v21);
    FieldPosSkillId = (System_Collections_Generic_IEnumerable_T__o *)StageEntity__GetFieldPosSkillId(
                                                                       (StageEntity_o *)v44.fields._current,
                                                                       0);
    v24 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_71510500(
      v24,
      FieldPosSkillId,
      (const MethodInfo_44329E4 *)Method_System_Collections_Generic_List_int___ctor___91427360);
    FieldPosSkillLv = (System_Collections_Generic_IEnumerable_T__o *)StageEntity__GetFieldPosSkillLv(
                                                                       (StageEntity_o *)current,
                                                                       0);
    v26 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor_71510500(
      v26,
      FieldPosSkillLv,
      (const MethodInfo_44329E4 *)Method_System_Collections_Generic_List_int___ctor___91427360);
    if ( !v24 )
      sub_21FFECC(v27, v28);
    if ( v24->fields._size >= 1 )
    {
      v29 = 0;
      do
      {
        Item = System_Collections_Generic_List_int___get_Item(
                 v24,
                 v29,
                 (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v26 )
          sub_21FFECC(Item, v31);
        v32 = Item;
        v33 = System_Collections_Generic_List_int___get_Item(
                v26,
                v29,
                (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v17
          || (items = v17->fields._items,
              v36 = Method_System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__Add__,
              ++v17->fields._version,
              !items) )
        {
          sub_21FFECC(v33, v34);
        }
        size = v17->fields._size;
        v38.fields.id = v32;
        v38.fields.lv = v33;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___AddWithResize(
            v17,
            v38,
            *(const MethodInfo_44D019C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = size + 1;
          items->m_Items[size] = v38;
        }
        ++v29;
      }
      while ( v29 < v24->fields._size );
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_StageEntity__Dispose__);
  v39 = System_Linq_Enumerable__Distinct_CenterEffectDetailDialog_CenterEffectDetailSkillInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v17,
          (const MethodInfo_3849298 *)Method_System_Linq_Enumerable_Distinct_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___);
  closeBtn = (System_String_o *)System_Linq_Enumerable__ToList_CenterEffectDetailDialog_CenterEffectDetailSkillInfo_(
                                  v39,
                                  (const MethodInfo_386DBAC *)Method_System_Linq_Enumerable_ToList_CenterEffectDetailDialog_CenterEffectDetailSkillInfo___);
  if ( !this->fields.itemListViewManager
    || (CenterEffectDetailItemListViewManager__CreateList(
          this->fields.itemListViewManager,
          (System_Collections_Generic_List_CenterEffectDetailDialog_CenterEffectDetailSkillInfo__o *)closeBtn,
          v40),
        (closeBtn = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_34:
    sub_21FFECC(closeBtn, v13);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)closeBtn, 1, 0);
  this->fields.state = 1;
  v41 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_CenterEffectDetailDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0, v42);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  CenterEffectDetailDialog_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5931D14 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5931D14 = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (CenterEffectDetailDialog_o *)sub_220024C(v8, System_Action_TypeInfo, v9, v10);
  CenterEffectDetailDialog__remove_callbackFunc(v13, v14, v15);
}


UnityEngine_GameObject_o *CenterEffectDetailDialog__get_closeBtnObject(
        CenterEffectDetailDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeBtn; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_5931D19 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5931D19 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeBtn, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeBtn;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  CenterEffectDetailDialog_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5931D15 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5931D15 = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (CenterEffectDetailDialog_o *)sub_220024C(v8, System_Action_TypeInfo, v9, v10);
  CenterEffectDetailDialog__Init(v13, v14);
}