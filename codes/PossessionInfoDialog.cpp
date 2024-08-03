void __fastcall PossessionInfoDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49F8C60 & 1) == 0 )
  {
    sub_1B640C8(&PossessionInfoDialog_TypeInfo, v1);
    byte_49F8C60 = 1;
  }
  PossessionInfoDialog_TypeInfo->static_fields->DISPLAY_LIMIT_NUM = 6;
}


void __fastcall PossessionInfoDialog___ctor(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49F8C5F & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    byte_49F8C5F = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_GameObject__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.objectList, (int32_t)v6, v7, v8);
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
  System_Int32_array *FeaturedServantIds; // x21
  PossessionInfoDialog_c *v32; // x0
  UILabel_o *titleLabel; // x22
  UILabel_o *messageLabel; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x1
  __int64 v41; // x2
  System_Func_int__bool__o *v42; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v43; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  System_Func_int__int__o *v46; // x22
  ViewGachaFeaturedServantMaster_c *klass; // x8
  ViewGachaFeaturedServantMaster_o *v48; // x20
  __int64 v49; // x9
  int32_t *p_offset; // x10
  __int64 v51; // x0
  __int64 v52; // x20
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  __int64 v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  int32_t v61; // w21
  UnityEngine_Component_o *listRoot; // x0
  Il2CppObject *possessionInfoObject; // x22
  UnityEngine_Transform_o *v64; // x23
  Il2CppObject *v65; // x0
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

  if ( (byte_49F8C5C & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIGrid___, *(_QWORD *)&gachaId);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_int__bool___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_ThenBy_int__int___, v10);
    sub_1B640C8(&System_Func_int__int__TypeInfo, v11);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v12);
    sub_1B640C8(&System_IDisposable_TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_int__TypeInfo, v14);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_int__TypeInfo, v15);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v17);
    sub_1B640C8(&LocalizationManager_TypeInfo, v18);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_PossessionInfo___, v19);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v20);
    sub_1B640C8(&PossessionInfoDialog_TypeInfo, v21);
    sub_1B640C8(&Method_PossessionInfoDialog___c__DisplayClass7_0__Init_b__0__, v22);
    sub_1B640C8(&Method_PossessionInfoDialog___c__DisplayClass7_0__Init_b__1__, v23);
    sub_1B640C8(&PossessionInfoDialog___c__DisplayClass7_0_TypeInfo, v24);
    sub_1B640C8(&StringLiteral_15575/*"Window/CloseButton"*/, v25);
    sub_1B640C8(&StringLiteral_10354/*"POSSESSION_DIALOG_TITLE"*/, v26);
    sub_1B640C8(&StringLiteral_10353/*"POSSESSION_DIALOG_MESSAGE"*/, v27);
    byte_49F8C5C = 1;
  }
  v28 = sub_1B64314(PossessionInfoDialog___c__DisplayClass7_0_TypeInfo, *(_QWORD *)&gachaId, method);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackKeyTarget_41447704(transform, (System_String_o *)StringLiteral_15575/*"Window/CloseButton"*/, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ViewGachaFeaturedServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___);
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
  v32 = PossessionInfoDialog_TypeInfo;
  if ( !PossessionInfoDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PossessionInfoDialog_TypeInfo);
    v32 = PossessionInfoDialog_TypeInfo;
  }
  if ( v32->static_fields->DISPLAY_LIMIT_NUM >= (signed int)FeaturedServantIds->max_length )
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ViewGachaFeaturedServantMaster_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_10354/*"POSSESSION_DIALOG_TITLE"*/,
                                                          0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0LL);
      messageLabel = this->fields.messageLabel;
      Master_object = (ViewGachaFeaturedServantMaster_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_10353/*"POSSESSION_DIALOG_MESSAGE"*/,
                                                            0LL);
      if ( messageLabel )
      {
        UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (ViewGachaFeaturedServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( v28 )
        {
          *(_QWORD *)(v28 + 24) = Master_object;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 24), (int32_t)Master_object, v35, v36);
          v37 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
          *(_QWORD *)(v28 + 16) = v37;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)v37, v38, v39);
          v42 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v40, v41);
          System_Func_int__bool____ctor(
            v42,
            (Il2CppObject *)v28,
            Method_PossessionInfoDialog___c__DisplayClass7_0__Init_b__0__,
            0LL);
          v43 = System_Linq_Enumerable__OrderBy_int__bool_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)FeaturedServantIds,
                  (System_Func_TSource__TKey__o *)v42,
                  (const MethodInfo_2E62E38 *)Method_System_Linq_Enumerable_OrderBy_int__bool___);
          v46 = (System_Func_int__int__o *)sub_1B64314(System_Func_int__int__TypeInfo, v44, v45);
          System_Func_int__int____ctor(
            v46,
            (Il2CppObject *)v28,
            Method_PossessionInfoDialog___c__DisplayClass7_0__Init_b__1__,
            0LL);
          Master_object = (ViewGachaFeaturedServantMaster_o *)System_Linq_Enumerable__ThenBy_int__int_(
                                                                v43,
                                                                (System_Func_TSource__TKey__o *)v46,
                                                                (const MethodInfo_2E7078C *)Method_System_Linq_Enumerable_ThenBy_int__int___);
          if ( Master_object )
          {
            klass = Master_object->klass;
            v48 = Master_object;
            v49 = *(unsigned __int16 *)(&Master_object->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&Master_object->klass->_2.bitflags2 + 3) )
            {
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
              {
                --v49;
                p_offset += 4;
                if ( !v49 )
                  goto LABEL_23;
              }
              v51 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
            }
            else
            {
LABEL_23:
              v51 = sub_1BB60A8(Master_object, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
            }
            v52 = (*(__int64 (__fastcall **)(ViewGachaFeaturedServantMaster_o *, _QWORD))v51)(v48, *(_QWORD *)(v51 + 8));
            if ( !v52 )
              sub_1B64324(0LL);
            while ( 1 )
            {
              v53 = *(_QWORD *)v52;
              v54 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
              if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
              {
                v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
                while ( *((System_Collections_IEnumerator_c **)v55 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v54;
                  v55 += 4;
                  if ( !v54 )
                    goto LABEL_30;
                }
                v56 = v53 + 16LL * *v55 + 312;
              }
              else
              {
LABEL_30:
                v56 = sub_1BB60A8(v52, System_Collections_IEnumerator_TypeInfo, 0LL);
              }
              if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v52, *(_QWORD *)(v56 + 8)) & 1) == 0 )
                break;
              v57 = *(_QWORD *)v52;
              v58 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
              if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
              {
                v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
                while ( *((System_Collections_Generic_IEnumerator_int__c **)v59 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
                {
                  --v58;
                  v59 += 4;
                  if ( !v58 )
                    goto LABEL_37;
                }
                v60 = v57 + 16LL * *v59 + 312;
              }
              else
              {
LABEL_37:
                v60 = sub_1BB60A8(v52, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
              }
              v61 = (*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v52, *(_QWORD *)(v60 + 8));
              listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
              if ( !listRoot )
                sub_1B64324(0LL);
              possessionInfoObject = (Il2CppObject *)this->fields.possessionInfoObject;
              v64 = UnityEngine_Component__get_transform(listRoot, 0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v65 = UnityEngine_Object__Instantiate_object__49003980(
                      possessionInfoObject,
                      v64,
                      (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_PossessionInfo___);
              v66 = (PossessionInfo_o *)v65;
              if ( !v65 )
                sub_1B64324(0LL);
              objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
              gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v65, 0LL);
              v71 = gameObject;
              if ( !objectList )
                sub_1B64324(gameObject);
              items = objectList->fields._items;
              v73 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++objectList->fields._version;
              if ( !items )
                sub_1B64324(gameObject);
              size = objectList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  objectList,
                  gameObject,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
              }
              else
              {
                v75 = &items->obj.klass + size;
                objectList->fields._size = size + 1;
                v75[4] = (Il2CppClass *)v71;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v75 + 4), (int32_t)v71, v69, v70);
              }
              PossessionInfo__SetInfo(v66, v61, v76);
            }
            v77 = *(_QWORD *)v52;
            v78 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
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
              v80 = sub_1BB60A8(v52, System_IDisposable_TypeInfo, 0LL);
            }
            (*(void (__fastcall **)(__int64, _QWORD))v80)(v52, *(_QWORD *)(v80 + 8));
            Master_object = (ViewGachaFeaturedServantMaster_o *)this->fields.listRoot;
            if ( Master_object )
            {
              Master_object = (ViewGachaFeaturedServantMaster_o *)UnityEngine_Component__GetComponent_object_(
                                                                    (UnityEngine_Component_o *)Master_object,
                                                                    (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
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
    sub_1B64324(Master_object);
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
  __int64 v10; // x2
  PossessionInfoDialog___c_c *v11; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  System_Action_object__o *_9__10_0; // x21
  Il2CppObject *v14; // x22
  struct PossessionInfoDialog___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_49F8C5E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_GameObject__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__ForEach__, v3);
    sub_1B640C8(&Method_PossessionInfoDialog_OnClickClose__, v4);
    sub_1B640C8(&Method_PossessionInfoDialog___c__OnClickClose_b__10_0__, v5);
    sub_1B640C8(&PossessionInfoDialog___c_TypeInfo, v6);
    byte_49F8C5E = 1;
  }
  v7 = Method_PossessionInfoDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_PossessionInfoDialog_OnClickClose__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B640E0(Method_PossessionInfoDialog_OnClickClose__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  v11 = PossessionInfoDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !PossessionInfoDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PossessionInfoDialog___c_TypeInfo);
    v11 = PossessionInfoDialog___c_TypeInfo;
  }
  _9__10_0 = (System_Action_object__o *)v11->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = PossessionInfoDialog___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__10_0 = (System_Action_object__o *)sub_1B64314(System_Action_GameObject__TypeInfo, v9, v10);
    System_Action_object____ctor(_9__10_0, v14, Method_PossessionInfoDialog___c__OnClickClose_b__10_0__, 0LL);
    static_fields = PossessionInfoDialog___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Action_GameObject__o *)_9__10_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v16, v17);
  }
  if ( !objectList )
    sub_1B64324(v11);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)objectList,
    (System_Action_T__o *)_9__10_0,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  this->fields.isInit = 0;
}


void __fastcall PossessionInfoDialog__Open(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_49F8C5D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_PossessionInfoDialog__Open_b__9_0__, v4);
    byte_49F8C5D = 1;
  }
  if ( this->fields.isInit )
  {
    v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_PossessionInfoDialog__Open_b__9_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v5, 0, 0LL);
  }
}


void __fastcall PossessionInfoDialog___Open_b__9_0(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  PossessionInfoDialog___c_c *v7; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x19
  System_Action_object__o *_9__9_1; // x20
  Il2CppObject *v10; // x21
  struct PossessionInfoDialog___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49F8C61 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_GameObject__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__ForEach__, v4);
    sub_1B640C8(&Method_PossessionInfoDialog___c__Open_b__9_1__, v5);
    sub_1B640C8(&PossessionInfoDialog___c_TypeInfo, v6);
    byte_49F8C61 = 1;
  }
  v7 = PossessionInfoDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !PossessionInfoDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PossessionInfoDialog___c_TypeInfo);
    v7 = PossessionInfoDialog___c_TypeInfo;
  }
  _9__9_1 = (System_Action_object__o *)v7->static_fields->__9__9_1;
  if ( !_9__9_1 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = PossessionInfoDialog___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__9_1 = (System_Action_object__o *)sub_1B64314(System_Action_GameObject__TypeInfo, method, v2);
    System_Action_object____ctor(_9__9_1, v10, Method_PossessionInfoDialog___c__Open_b__9_1__, 0LL);
    static_fields = PossessionInfoDialog___c_TypeInfo->static_fields;
    static_fields->__9__9_1 = (struct System_Action_GameObject__o *)_9__9_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__9_1, (int32_t)_9__9_1, v12, v13);
  }
  if ( !objectList )
    sub_1B64324(v7);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)objectList,
    (System_Action_T__o *)_9__9_1,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
}


void __fastcall PossessionInfoDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F8C62 & 1) == 0 )
  {
    sub_1B640C8(&PossessionInfoDialog___c_TypeInfo, v1);
    byte_49F8C62 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(PossessionInfoDialog___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  PossessionInfoDialog___c_TypeInfo->static_fields->__9 = (struct PossessionInfoDialog___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)PossessionInfoDialog___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
  if ( (byte_49F8C64 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, obj);
    byte_49F8C64 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)obj, 0LL);
  }
}


void __fastcall PossessionInfoDialog___c___Open_b__9_1(
        PossessionInfoDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0

  if ( (byte_49F8C63 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, obj);
    byte_49F8C63 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( v4 )
  {
    if ( !obj )
      sub_1B64324(v4);
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

  if ( (byte_49F8C65 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, *(_QWORD *)&id);
    byte_49F8C65 = 1;
  }
  userServantCollectionMaster = this->fields.userServantCollectionMaster;
  v6 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
  if ( !v6 )
    goto LABEL_7;
  if ( !v6->max_length )
    sub_1B6432C(v6, v6);
  v6->m_Items[1] = id;
  if ( !userServantCollectionMaster )
LABEL_7:
    sub_1B64324(v6);
  return UserServantCollectionMaster__IsServantHaving(userServantCollectionMaster, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PossessionInfoDialog___c__DisplayClass7_0___Init_b__1(
        PossessionInfoDialog___c__DisplayClass7_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *svtMaster; // x0

  if ( (byte_49F8C66 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, *(_QWORD *)&id);
    byte_49F8C66 = 1;
  }
  svtMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.svtMaster;
  if ( !svtMaster
    || (svtMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                    svtMaster,
                                                                    id,
                                                                    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B64324(svtMaster);
  }
  return svtMaster[2].fields.revision;
}