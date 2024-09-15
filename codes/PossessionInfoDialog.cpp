void __fastcall PossessionInfoDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A2A724 & 1) == 0 )
  {
    sub_1B761C0(&PossessionInfoDialog_TypeInfo, v1);
    byte_4A2A724 = 1;
  }
  PossessionInfoDialog_TypeInfo->static_fields->DISPLAY_LIMIT_NUM = 6;
}


void __fastcall PossessionInfoDialog___ctor(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A2A723 & 1) == 0 )
  {
    sub_1B761C0(&BaseDialog_TypeInfo, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject___ctor__, v3);
    sub_1B761C0(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    byte_4A2A723 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v5;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.objectList, (int32_t)v5, v6, v7);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall PossessionInfoDialog__Init(PossessionInfoDialog_o *this, int32_t gachaId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x20
  UnityEngine_Transform_o *transform; // x0
  ViewGachaFeaturedServantMaster_o *Master_object; // x0
  __int64 v31; // x1
  System_Int32_array *FeaturedServantIds; // x21
  PossessionInfoDialog_c *v33; // x0
  UILabel_o *titleLabel; // x22
  UILabel_o *messageLabel; // x22
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppObject *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Func_int__bool__o *v41; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x21
  System_Func_int__int__o *v43; // x22
  ViewGachaFeaturedServantMaster_c *klass; // x8
  ViewGachaFeaturedServantMaster_o *v45; // x20
  __int64 v46; // x9
  int32_t *p_offset; // x10
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x20
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  __int64 v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0
  __int64 v59; // x1
  int32_t v60; // w21
  UnityEngine_Component_o *listRoot; // x0
  Il2CppObject *possessionInfoObject; // x22
  UnityEngine_Transform_o *v63; // x23
  Il2CppObject *v64; // x0
  __int64 v65; // x1
  PossessionInfo_o *v66; // x22
  System_Collections_Generic_List_object__o *objectList; // x23
  Il2CppObject *gameObject; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  Il2CppObject *v71; // x1
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x0
  const MethodInfo *v76; // x2
  __int64 v77; // x8
  __int64 v78; // x9
  int *v79; // x10
  __int64 v80; // x0

  if ( (byte_4A2A720 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_Component_GetComponent_UIGrid___, *(_QWORD *)&gachaId);
    sub_1B761C0(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_1B761C0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v6);
    sub_1B761C0(&Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___, v7);
    sub_1B761C0(&DataManager_TypeInfo, v8);
    sub_1B761C0(&Method_System_Linq_Enumerable_OrderBy_int__bool___, v9);
    sub_1B761C0(&Method_System_Linq_Enumerable_ThenBy_int__int___, v10);
    sub_1B761C0(&System_Func_int__int__TypeInfo, v11);
    sub_1B761C0(&System_Func_int__bool__TypeInfo, v12);
    sub_1B761C0(&System_IDisposable_TypeInfo, v13);
    sub_1B761C0(&System_Collections_Generic_IEnumerable_int__TypeInfo, v14);
    sub_1B761C0(&System_Collections_Generic_IEnumerator_int__TypeInfo, v15);
    sub_1B761C0(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__Add__, v17);
    sub_1B761C0(&LocalizationManager_TypeInfo, v18);
    sub_1B761C0(&Method_UnityEngine_Object_Instantiate_PossessionInfo___, v19);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v20);
    sub_1B761C0(&PossessionInfoDialog_TypeInfo, v21);
    sub_1B761C0(&Method_PossessionInfoDialog___c__DisplayClass7_0__Init_b__0__, v22);
    sub_1B761C0(&Method_PossessionInfoDialog___c__DisplayClass7_0__Init_b__1__, v23);
    sub_1B761C0(&PossessionInfoDialog___c__DisplayClass7_0_TypeInfo, v24);
    sub_1B761C0(&StringLiteral_15637/*"Window/CloseButton"*/, v25);
    sub_1B761C0(&StringLiteral_10401/*"POSSESSION_DIALOG_TITLE"*/, v26);
    sub_1B761C0(&StringLiteral_10400/*"POSSESSION_DIALOG_MESSAGE"*/, v27);
    byte_4A2A720 = 1;
  }
  v28 = sub_1B7640C(PossessionInfoDialog___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackKeyTarget_41760472(transform, (System_String_o *)StringLiteral_15637/*"Window/CloseButton"*/, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ViewGachaFeaturedServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___);
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
  v33 = PossessionInfoDialog_TypeInfo;
  if ( !PossessionInfoDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PossessionInfoDialog_TypeInfo);
    v33 = PossessionInfoDialog_TypeInfo;
  }
  if ( v33->static_fields->DISPLAY_LIMIT_NUM >= (signed int)FeaturedServantIds->max_length )
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ViewGachaFeaturedServantMaster_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_10401/*"POSSESSION_DIALOG_TITLE"*/,
                                                          0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0LL);
      messageLabel = this->fields.messageLabel;
      Master_object = (ViewGachaFeaturedServantMaster_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_10400/*"POSSESSION_DIALOG_MESSAGE"*/,
                                                            0LL);
      if ( messageLabel )
      {
        UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (ViewGachaFeaturedServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( v28 )
        {
          *(_QWORD *)(v28 + 24) = Master_object;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v28 + 24), (int32_t)Master_object, v36, v37);
          v38 = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
          *(_QWORD *)(v28 + 16) = v38;
          sub_1B76164((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)v38, v39, v40);
          v41 = (System_Func_int__bool__o *)sub_1B7640C(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v41,
            (Il2CppObject *)v28,
            Method_PossessionInfoDialog___c__DisplayClass7_0__Init_b__0__,
            0LL);
          v42 = System_Linq_Enumerable__OrderBy_int__bool_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)FeaturedServantIds,
                  (System_Func_TSource__TKey__o *)v41,
                  (const MethodInfo_2E8C6A4 *)Method_System_Linq_Enumerable_OrderBy_int__bool___);
          v43 = (System_Func_int__int__o *)sub_1B7640C(System_Func_int__int__TypeInfo);
          System_Func_int__int____ctor(
            v43,
            (Il2CppObject *)v28,
            Method_PossessionInfoDialog___c__DisplayClass7_0__Init_b__1__,
            0LL);
          Master_object = (ViewGachaFeaturedServantMaster_o *)System_Linq_Enumerable__ThenBy_int__int_(
                                                                v42,
                                                                (System_Func_TSource__TKey__o *)v43,
                                                                (const MethodInfo_2E9A0D4 *)Method_System_Linq_Enumerable_ThenBy_int__int___);
          if ( Master_object )
          {
            klass = Master_object->klass;
            v45 = Master_object;
            v46 = *(unsigned __int16 *)(&Master_object->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Master_object->klass->_2.bitflags2 + 3) )
            {
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
              {
                --v46;
                p_offset += 4;
                if ( !v46 )
                  goto LABEL_23;
              }
              v48 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
            }
            else
            {
LABEL_23:
              v48 = sub_1BC81A0(Master_object, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
            }
            v50 = (*(__int64 (__fastcall **)(ViewGachaFeaturedServantMaster_o *, _QWORD))v48)(v45, *(_QWORD *)(v48 + 8));
            if ( !v50 )
              sub_1B7641C(0LL, v49);
            while ( 1 )
            {
              v51 = *(_QWORD *)v50;
              v52 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
              if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
              {
                v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
                while ( *((System_Collections_IEnumerator_c **)v53 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v52;
                  v53 += 4;
                  if ( !v52 )
                    goto LABEL_30;
                }
                v54 = v51 + 16LL * *v53 + 312;
              }
              else
              {
LABEL_30:
                v54 = sub_1BC81A0(v50, System_Collections_IEnumerator_TypeInfo, 0LL);
              }
              if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v50, *(_QWORD *)(v54 + 8)) & 1) == 0 )
                break;
              v55 = *(_QWORD *)v50;
              v56 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
              if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
              {
                v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
                while ( *((System_Collections_Generic_IEnumerator_int__c **)v57 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
                {
                  --v56;
                  v57 += 4;
                  if ( !v56 )
                    goto LABEL_37;
                }
                v58 = v55 + 16LL * *v57 + 312;
              }
              else
              {
LABEL_37:
                v58 = sub_1BC81A0(v50, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
              }
              v60 = (*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v50, *(_QWORD *)(v58 + 8));
              listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
              if ( !listRoot )
                sub_1B7641C(0LL, v59);
              possessionInfoObject = (Il2CppObject *)this->fields.possessionInfoObject;
              v63 = UnityEngine_Component__get_transform(listRoot, 0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v64 = UnityEngine_Object__Instantiate_object__49174716(
                      possessionInfoObject,
                      v63,
                      (const MethodInfo_2EE58BC *)Method_UnityEngine_Object_Instantiate_PossessionInfo___);
              v66 = (PossessionInfo_o *)v64;
              if ( !v64 )
                sub_1B7641C(0LL, v65);
              objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
              gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v64, 0LL);
              v71 = gameObject;
              if ( !objectList )
                sub_1B7641C(gameObject, gameObject);
              items = objectList->fields._items;
              v73 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++objectList->fields._version;
              if ( !items )
                sub_1B7641C(gameObject, gameObject);
              size = objectList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  objectList,
                  gameObject,
                  *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
              }
              else
              {
                v75 = &items->obj.klass + size;
                objectList->fields._size = size + 1;
                v75[4] = (Il2CppClass *)v71;
                sub_1B76164((ServantStatusBattleListViewItem_o *)(v75 + 4), (int32_t)v71, v69, v70);
              }
              PossessionInfo__SetInfo(v66, v60, v76);
            }
            v77 = *(_QWORD *)v50;
            v78 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
            {
              v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
              while ( *((System_IDisposable_c **)v79 - 1) != System_IDisposable_TypeInfo )
              {
                --v78;
                v79 += 4;
                if ( !v78 )
                  goto LABEL_53;
              }
              v80 = v77 + 16LL * *v79 + 312;
            }
            else
            {
LABEL_53:
              v80 = sub_1BC81A0(v50, System_IDisposable_TypeInfo, 0LL);
            }
            (*(void (__fastcall **)(__int64, _QWORD))v80)(v50, *(_QWORD *)(v80 + 8));
            Master_object = (ViewGachaFeaturedServantMaster_o *)this->fields.listRoot;
            if ( Master_object )
            {
              Master_object = (ViewGachaFeaturedServantMaster_o *)UnityEngine_Component__GetComponent_object_(
                                                                    (UnityEngine_Component_o *)Master_object,
                                                                    (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_UIGrid___);
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
    sub_1B7641C(Master_object, v31);
  }
}


void __fastcall PossessionInfoDialog__OnClickClose(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x1
  PossessionInfoDialog___c_c *v10; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  System_Action_object__o *_9__10_0; // x21
  Il2CppObject *v13; // x22
  struct PossessionInfoDialog___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A2A722 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_GameObject__TypeInfo, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__ForEach__, v3);
    sub_1B761C0(&Method_PossessionInfoDialog_OnClickClose__, v4);
    sub_1B761C0(&Method_PossessionInfoDialog___c__OnClickClose_b__10_0__, v5);
    sub_1B761C0(&PossessionInfoDialog___c_TypeInfo, v6);
    byte_4A2A722 = 1;
  }
  v7 = Method_PossessionInfoDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_PossessionInfoDialog_OnClickClose__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B761D8(Method_PossessionInfoDialog_OnClickClose__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B761A4(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  v10 = PossessionInfoDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !PossessionInfoDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PossessionInfoDialog___c_TypeInfo);
    v10 = PossessionInfoDialog___c_TypeInfo;
  }
  _9__10_0 = (System_Action_object__o *)v10->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = PossessionInfoDialog___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__10_0 = (System_Action_object__o *)sub_1B7640C(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__10_0, v13, Method_PossessionInfoDialog___c__OnClickClose_b__10_0__, 0LL);
    static_fields = PossessionInfoDialog___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Action_GameObject__o *)_9__10_0;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v15, v16);
  }
  if ( !objectList )
    sub_1B7641C(v10, v9);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)objectList,
    (System_Action_T__o *)_9__10_0,
    (const MethodInfo_34D8014 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  this->fields.isInit = 0;
}


void __fastcall PossessionInfoDialog__Open(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4A2A721 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_PossessionInfoDialog__Open_b__9_0__, v3);
    byte_4A2A721 = 1;
  }
  if ( this->fields.isInit )
  {
    v4 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_PossessionInfoDialog__Open_b__9_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v4, 0, 0LL);
  }
}


void __fastcall PossessionInfoDialog___Open_b__9_0(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  PossessionInfoDialog___c_c *v6; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x19
  System_Action_object__o *_9__9_1; // x20
  Il2CppObject *v9; // x21
  struct PossessionInfoDialog___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A2A725 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_GameObject__TypeInfo, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__ForEach__, v3);
    sub_1B761C0(&Method_PossessionInfoDialog___c__Open_b__9_1__, v4);
    sub_1B761C0(&PossessionInfoDialog___c_TypeInfo, v5);
    byte_4A2A725 = 1;
  }
  v6 = PossessionInfoDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !PossessionInfoDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PossessionInfoDialog___c_TypeInfo);
    v6 = PossessionInfoDialog___c_TypeInfo;
  }
  _9__9_1 = (System_Action_object__o *)v6->static_fields->__9__9_1;
  if ( !_9__9_1 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = PossessionInfoDialog___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__9_1 = (System_Action_object__o *)sub_1B7640C(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__9_1, v9, Method_PossessionInfoDialog___c__Open_b__9_1__, 0LL);
    static_fields = PossessionInfoDialog___c_TypeInfo->static_fields;
    static_fields->__9__9_1 = (struct System_Action_GameObject__o *)_9__9_1;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__9_1, (int32_t)_9__9_1, v11, v12);
  }
  if ( !objectList )
    sub_1B7641C(v6, method);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)objectList,
    (System_Action_T__o *)_9__9_1,
    (const MethodInfo_34D8014 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
}


void __fastcall PossessionInfoDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A2A726 & 1) == 0 )
  {
    sub_1B761C0(&PossessionInfoDialog___c_TypeInfo, v1);
    byte_4A2A726 = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(PossessionInfoDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PossessionInfoDialog___c_TypeInfo->static_fields->__9 = (struct PossessionInfoDialog___c_o *)v2;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)PossessionInfoDialog___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  if ( (byte_4A2A728 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, obj);
    byte_4A2A728 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69287408((UnityEngine_Object_o *)obj, 0LL);
  }
}


void __fastcall PossessionInfoDialog___c___Open_b__9_1(
        PossessionInfoDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4A2A727 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, obj);
    byte_4A2A727 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( v4 )
  {
    if ( !obj )
      sub_1B7641C(v4, v5);
    UnityEngine_GameObject__SetActive(obj, 1, 0LL);
  }
}


void __fastcall PossessionInfoDialog___c__DisplayClass7_0___ctor(
        PossessionInfoDialog___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PossessionInfoDialog___c__DisplayClass7_0___Init_b__0(
        PossessionInfoDialog___c__DisplayClass7_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  UserServantCollectionMaster_o *userServantCollectionMaster; // x20
  System_Int32_array *v6; // x0
  System_Int32_array *v7; // x1

  if ( (byte_4A2A729 & 1) == 0 )
  {
    sub_1B761C0(&int___TypeInfo, *(_QWORD *)&id);
    byte_4A2A729 = 1;
  }
  userServantCollectionMaster = this->fields.userServantCollectionMaster;
  v6 = (System_Int32_array *)sub_1B76268(int___TypeInfo, 1LL);
  if ( !v6 )
    goto LABEL_7;
  v7 = v6;
  if ( !v6->max_length )
    sub_1B76424(v6, v6);
  v6->m_Items[1] = id;
  if ( !userServantCollectionMaster )
LABEL_7:
    sub_1B7641C(v6, v7);
  return UserServantCollectionMaster__IsServantHaving(userServantCollectionMaster, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PossessionInfoDialog___c__DisplayClass7_0___Init_b__1(
        PossessionInfoDialog___c__DisplayClass7_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *svtMaster; // x0

  if ( (byte_4A2A72A & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, *(_QWORD *)&id);
    byte_4A2A72A = 1;
  }
  svtMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.svtMaster;
  if ( !svtMaster
    || (svtMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                    svtMaster,
                                                                    id,
                                                                    (const MethodInfo_30FF780 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B7641C(svtMaster, *(_QWORD *)&id);
  }
  return svtMaster[2].fields.revision;
}