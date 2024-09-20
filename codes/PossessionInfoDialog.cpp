void __fastcall PossessionInfoDialog___cctor(const MethodInfo *method)
{
  if ( (byte_4A5792F & 1) == 0 )
  {
    sub_1B885B0(&PossessionInfoDialog_TypeInfo);
    byte_4A5792F = 1;
  }
  PossessionInfoDialog_TypeInfo->static_fields->DISPLAY_LIMIT_NUM = 6;
}


void __fastcall PossessionInfoDialog___ctor(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5792E & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4A5792E = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.objectList, (int32_t)v3, v4, v5);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PossessionInfoDialog__CheckSerializeFieldNotNull(
        PossessionInfoDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PossessionInfoDialog__Init(PossessionInfoDialog_o *this, int32_t gachaId, const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Transform_o *transform; // x0
  ViewGachaFeaturedServantMaster_o *Master_object; // x0
  __int64 v8; // x1
  System_Int32_array *FeaturedServantIds; // x21
  PossessionInfoDialog_c *v10; // x0
  UILabel_o *titleLabel; // x22
  UILabel_o *messageLabel; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Func_int__bool__o *v18; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x21
  System_Func_int__int__o *v20; // x22
  ViewGachaFeaturedServantMaster_c *klass; // x8
  ViewGachaFeaturedServantMaster_o *v22; // x20
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x20
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w21
  UnityEngine_Component_o *listRoot; // x0
  Il2CppObject *possessionInfoObject; // x22
  UnityEngine_Transform_o *v40; // x23
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  PossessionInfo_o *v43; // x22
  System_Collections_Generic_List_object__o *objectList; // x23
  Il2CppObject *gameObject; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  Il2CppObject *v48; // x1
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  const MethodInfo *v53; // x2
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0

  if ( (byte_4A5792B & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIGrid___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_int__bool___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ThenBy_int__int___);
    sub_1B885B0(&System_Func_int__int__TypeInfo);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_PossessionInfo___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PossessionInfoDialog_TypeInfo);
    sub_1B885B0(&Method_PossessionInfoDialog___c__DisplayClass7_0__Init_b__0__);
    sub_1B885B0(&Method_PossessionInfoDialog___c__DisplayClass7_0__Init_b__1__);
    sub_1B885B0(&PossessionInfoDialog___c__DisplayClass7_0_TypeInfo);
    sub_1B885B0(&StringLiteral_15643/*"Window/CloseButton"*/);
    sub_1B885B0(&StringLiteral_10404/*"POSSESSION_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_10403/*"POSSESSION_DIALOG_MESSAGE"*/);
    byte_4A5792B = 1;
  }
  v5 = sub_1B887FC(PossessionInfoDialog___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackKeyTarget_41946892(transform, (System_String_o *)StringLiteral_15643/*"Window/CloseButton"*/, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ViewGachaFeaturedServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___);
  if ( !Master_object )
    goto LABEL_63;
  FeaturedServantIds = ViewGachaFeaturedServantMaster__GetFeaturedServantIds(Master_object, gachaId, 0LL);
  Master_object = (ViewGachaFeaturedServantMaster_o *)BasicHelper__IsNullOrEmpty(
                                                        (System_Collections_ICollection_o *)FeaturedServantIds,
                                                        0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    return;
  if ( !FeaturedServantIds )
    goto LABEL_63;
  v10 = PossessionInfoDialog_TypeInfo;
  if ( !PossessionInfoDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PossessionInfoDialog_TypeInfo);
    v10 = PossessionInfoDialog_TypeInfo;
  }
  if ( v10->static_fields->DISPLAY_LIMIT_NUM >= (signed int)FeaturedServantIds->max_length )
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ViewGachaFeaturedServantMaster_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_10404/*"POSSESSION_DIALOG_TITLE"*/,
                                                          0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0LL);
      messageLabel = this->fields.messageLabel;
      Master_object = (ViewGachaFeaturedServantMaster_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_10403/*"POSSESSION_DIALOG_MESSAGE"*/,
                                                            0LL);
      if ( messageLabel )
      {
        UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (ViewGachaFeaturedServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( v5 )
        {
          *(_QWORD *)(v5 + 24) = Master_object;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)Master_object, v13, v14);
          v15 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
          *(_QWORD *)(v5 + 16) = v15;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)v15, v16, v17);
          v18 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v18,
            (Il2CppObject *)v5,
            Method_PossessionInfoDialog___c__DisplayClass7_0__Init_b__0__,
            0LL);
          v19 = System_Linq_Enumerable__OrderBy_int__bool_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)FeaturedServantIds,
                  (System_Func_TSource__TKey__o *)v18,
                  (const MethodInfo_2EA9BA4 *)Method_System_Linq_Enumerable_OrderBy_int__bool___);
          v20 = (System_Func_int__int__o *)sub_1B887FC(System_Func_int__int__TypeInfo);
          System_Func_int__int____ctor(
            v20,
            (Il2CppObject *)v5,
            Method_PossessionInfoDialog___c__DisplayClass7_0__Init_b__1__,
            0LL);
          Master_object = (ViewGachaFeaturedServantMaster_o *)System_Linq_Enumerable__ThenBy_int__int_(
                                                                v19,
                                                                (System_Func_TSource__TKey__o *)v20,
                                                                (const MethodInfo_2EB7914 *)Method_System_Linq_Enumerable_ThenBy_int__int___);
          if ( Master_object )
          {
            klass = Master_object->klass;
            v22 = Master_object;
            v23 = *(unsigned __int16 *)(&Master_object->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Master_object->klass->_2.bitflags2 + 3) )
            {
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
              {
                --v23;
                p_offset += 4;
                if ( !v23 )
                  goto LABEL_23;
              }
              v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
            }
            else
            {
LABEL_23:
              v25 = sub_1BDA590(Master_object, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
            }
            v27 = (*(__int64 (__fastcall **)(ViewGachaFeaturedServantMaster_o *, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
            if ( !v27 )
              sub_1B8880C(0LL, v26);
            while ( 1 )
            {
              v28 = *(_QWORD *)v27;
              v29 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
              if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
              {
                v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
                while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v29;
                  v30 += 4;
                  if ( !v29 )
                    goto LABEL_30;
                }
                v31 = v28 + 16LL * *v30 + 312;
              }
              else
              {
LABEL_30:
                v31 = sub_1BDA590(v27, System_Collections_IEnumerator_TypeInfo, 0LL);
              }
              if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8)) & 1) == 0 )
                break;
              v32 = *(_QWORD *)v27;
              v33 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
              if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
              {
                v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
                while ( *((System_Collections_Generic_IEnumerator_int__c **)v34 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
                {
                  --v33;
                  v34 += 4;
                  if ( !v33 )
                    goto LABEL_37;
                }
                v35 = v32 + 16LL * *v34 + 312;
              }
              else
              {
LABEL_37:
                v35 = sub_1BDA590(v27, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
              }
              v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v27, *(_QWORD *)(v35 + 8));
              listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
              if ( !listRoot )
                sub_1B8880C(0LL, v36);
              possessionInfoObject = (Il2CppObject *)this->fields.possessionInfoObject;
              v40 = UnityEngine_Component__get_transform(listRoot, 0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v41 = UnityEngine_Object__Instantiate_object__49297800(
                      possessionInfoObject,
                      v40,
                      (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_PossessionInfo___);
              v43 = (PossessionInfo_o *)v41;
              if ( !v41 )
                sub_1B8880C(0LL, v42);
              objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
              gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v41, 0LL);
              v48 = gameObject;
              if ( !objectList )
                sub_1B8880C(gameObject, gameObject);
              items = objectList->fields._items;
              v50 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++objectList->fields._version;
              if ( !items )
                sub_1B8880C(gameObject, gameObject);
              size = objectList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  objectList,
                  gameObject,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
              }
              else
              {
                v52 = &items->obj.klass + size;
                objectList->fields._size = size + 1;
                v52[4] = (Il2CppClass *)v48;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v52 + 4), (int32_t)v48, v46, v47);
              }
              PossessionInfo__SetInfo(v43, v37, v53);
            }
            v54 = *(_QWORD *)v27;
            v55 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
            {
              v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
              while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
              {
                --v55;
                v56 += 4;
                if ( !v55 )
                  goto LABEL_53;
              }
              v57 = v54 + 16LL * *v56 + 312;
            }
            else
            {
LABEL_53:
              v57 = sub_1BDA590(v27, System_IDisposable_TypeInfo, 0LL);
            }
            (*(void (__fastcall **)(__int64, _QWORD))v57)(v27, *(_QWORD *)(v57 + 8));
            Master_object = (ViewGachaFeaturedServantMaster_o *)this->fields.listRoot;
            if ( Master_object )
            {
              Master_object = (ViewGachaFeaturedServantMaster_o *)UnityEngine_Component__GetComponent_object_(
                                                                    (UnityEngine_Component_o *)Master_object,
                                                                    (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIGrid___);
              if ( Master_object )
              {
                ((void (__fastcall *)(ViewGachaFeaturedServantMaster_o *, void *))Master_object->klass->vtable._8_OnListChangedImplementation.method)(
                  Master_object,
                  Master_object->klass[1]._1.image);
                BaseDialog__Init((BaseDialog_o *)this, 0LL);
                this->fields.isInit = 1;
                return;
              }
            }
          }
        }
      }
    }
LABEL_63:
    sub_1B8880C(Master_object, v8);
  }
}


void __fastcall PossessionInfoDialog__OnClickClose(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PossessionInfoDialog___c_c *v6; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  System_Action_object__o *_9__10_0; // x21
  Il2CppObject *v9; // x22
  struct PossessionInfoDialog___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5792D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_GameObject__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1B885B0(&Method_PossessionInfoDialog_OnClickClose__);
    sub_1B885B0(&Method_PossessionInfoDialog___c__OnClickClose_b__10_0__);
    sub_1B885B0(&PossessionInfoDialog___c_TypeInfo);
    byte_4A5792D = 1;
  }
  v3 = Method_PossessionInfoDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_PossessionInfoDialog_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_PossessionInfoDialog_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  v6 = PossessionInfoDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !PossessionInfoDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PossessionInfoDialog___c_TypeInfo);
    v6 = PossessionInfoDialog___c_TypeInfo;
  }
  _9__10_0 = (System_Action_object__o *)v6->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = PossessionInfoDialog___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__10_0 = (System_Action_object__o *)sub_1B887FC(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__10_0, v9, Method_PossessionInfoDialog___c__OnClickClose_b__10_0__, 0LL);
    static_fields = PossessionInfoDialog___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Action_GameObject__o *)_9__10_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v11, v12);
  }
  if ( !objectList )
    sub_1B8880C(v6, v5);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)objectList,
    (System_Action_T__o *)_9__10_0,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  this->fields.isInit = 0;
}


void __fastcall PossessionInfoDialog__Open(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4A5792C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PossessionInfoDialog__Open_b__9_0__);
    byte_4A5792C = 1;
  }
  if ( this->fields.isInit )
  {
    v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v3, (Il2CppObject *)this, Method_PossessionInfoDialog__Open_b__9_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v3, 0, 0LL);
  }
}


void __fastcall PossessionInfoDialog___Open_b__9_0(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  PossessionInfoDialog___c_c *v3; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x19
  System_Action_object__o *_9__9_1; // x20
  Il2CppObject *v6; // x21
  struct PossessionInfoDialog___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A57930 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_GameObject__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1B885B0(&Method_PossessionInfoDialog___c__Open_b__9_1__);
    sub_1B885B0(&PossessionInfoDialog___c_TypeInfo);
    byte_4A57930 = 1;
  }
  v3 = PossessionInfoDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !PossessionInfoDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PossessionInfoDialog___c_TypeInfo);
    v3 = PossessionInfoDialog___c_TypeInfo;
  }
  _9__9_1 = (System_Action_object__o *)v3->static_fields->__9__9_1;
  if ( !_9__9_1 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = PossessionInfoDialog___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__9_1 = (System_Action_object__o *)sub_1B887FC(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__9_1, v6, Method_PossessionInfoDialog___c__Open_b__9_1__, 0LL);
    static_fields = PossessionInfoDialog___c_TypeInfo->static_fields;
    static_fields->__9__9_1 = (struct System_Action_GameObject__o *)_9__9_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__9_1, (int32_t)_9__9_1, v8, v9);
  }
  if ( !objectList )
    sub_1B8880C(v3, method);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)objectList,
    (System_Action_T__o *)_9__9_1,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
}


void __fastcall PossessionInfoDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A57931 & 1) == 0 )
  {
    sub_1B885B0(&PossessionInfoDialog___c_TypeInfo);
    byte_4A57931 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(PossessionInfoDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  PossessionInfoDialog___c_TypeInfo->static_fields->__9 = (struct PossessionInfoDialog___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)PossessionInfoDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall PossessionInfoDialog___c___ctor(PossessionInfoDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PossessionInfoDialog___c___OnClickClose_b__10_0(
        PossessionInfoDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  if ( (byte_4A57933 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57933 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)obj, 0LL);
  }
}


void __fastcall PossessionInfoDialog___c___Open_b__9_1(
        PossessionInfoDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4A57932 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57932 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( v4 )
  {
    if ( !obj )
      sub_1B8880C(v4, v5);
    UnityEngine_GameObject__SetActive(obj, 1, 0LL);
  }
}


void __fastcall PossessionInfoDialog___c__DisplayClass7_0___ctor(
        PossessionInfoDialog___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PossessionInfoDialog___c__DisplayClass7_0___Init_b__0(
        PossessionInfoDialog___c__DisplayClass7_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  UserServantCollectionMaster_o *userServantCollectionMaster; // x20
  System_Int32_array *v6; // x0
  System_Int32_array *v7; // x1

  if ( (byte_4A57934 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A57934 = 1;
  }
  userServantCollectionMaster = this->fields.userServantCollectionMaster;
  v6 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
  if ( !v6 )
    goto LABEL_7;
  v7 = v6;
  if ( !v6->max_length )
    sub_1B88814(v6, v6);
  v6->m_Items[1] = id;
  if ( !userServantCollectionMaster )
LABEL_7:
    sub_1B8880C(v6, v7);
  return UserServantCollectionMaster__IsServantHaving(userServantCollectionMaster, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PossessionInfoDialog___c__DisplayClass7_0___Init_b__1(
        PossessionInfoDialog___c__DisplayClass7_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *svtMaster; // x0

  if ( (byte_4A57935 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_4A57935 = 1;
  }
  svtMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.svtMaster;
  if ( !svtMaster
    || (svtMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                    svtMaster,
                                                                    id,
                                                                    (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B8880C(svtMaster, *(_QWORD *)&id);
  }
  return svtMaster[2].fields.revision;
}