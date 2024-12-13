void __fastcall PossessionInfoDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B33846 & 1) == 0 )
  {
    sub_1BD3458(&PossessionInfoDialog_TypeInfo, v1);
    byte_4B33846 = 1;
  }
  PossessionInfoDialog_TypeInfo->static_fields->DISPLAY_LIMIT_NUM = 6;
}


void __fastcall PossessionInfoDialog___ctor(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B33845 & 1) == 0 )
  {
    sub_1BD3458(&BaseDialog_TypeInfo, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject___ctor__, v3);
    sub_1BD3458(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    byte_4B33845 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v5;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.objectList, (int64_t)v5, v6, v7, v8, v9, v10, v11);
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
  int64_t Master_object; // x0
  __int64 v31; // x1
  System_Int32_array *FeaturedServantIds; // x21
  PossessionInfoDialog_c *v33; // x0
  UILabel_o *titleLabel; // x22
  UILabel_o *messageLabel; // x22
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  Il2CppObject *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_Func_int__bool__o *v49; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v50; // x21
  System_Func_int__int__o *v51; // x22
  __int64 v52; // x8
  int64_t v53; // x20
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x20
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  __int64 v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  __int64 v67; // x1
  int32_t v68; // w21
  UnityEngine_Component_o *listRoot; // x0
  Il2CppObject *possessionInfoObject; // x22
  UnityEngine_Transform_o *v71; // x23
  Il2CppObject *v72; // x0
  __int64 v73; // x1
  PossessionInfo_o *v74; // x22
  System_Collections_Generic_List_object__o *objectList; // x23
  Il2CppObject *gameObject; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  int64_t v83; // x1
  struct System_Object_array *items; // x8
  _QWORD *v85; // x9
  __int64 size; // x10
  Il2CppClass **v87; // x0
  const MethodInfo *v88; // x2
  __int64 v89; // x8
  __int64 v90; // x9
  int *v91; // x10
  __int64 v92; // x0

  if ( (byte_4B33842 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_UIGrid___, *(_QWORD *)&gachaId);
    sub_1BD3458(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_1BD3458(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v6);
    sub_1BD3458(&Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___, v7);
    sub_1BD3458(&DataManager_TypeInfo, v8);
    sub_1BD3458(&Method_System_Linq_Enumerable_OrderBy_int__bool___, v9);
    sub_1BD3458(&Method_System_Linq_Enumerable_ThenBy_int__int___, v10);
    sub_1BD3458(&System_Func_int__int__TypeInfo, v11);
    sub_1BD3458(&System_Func_int__bool__TypeInfo, v12);
    sub_1BD3458(&System_IDisposable_TypeInfo, v13);
    sub_1BD3458(&System_Collections_Generic_IEnumerable_int__TypeInfo, v14);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_int__TypeInfo, v15);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__Add__, v17);
    sub_1BD3458(&LocalizationManager_TypeInfo, v18);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_PossessionInfo___, v19);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v20);
    sub_1BD3458(&PossessionInfoDialog_TypeInfo, v21);
    sub_1BD3458(&Method_PossessionInfoDialog___c__DisplayClass7_0__Init_b__0__, v22);
    sub_1BD3458(&Method_PossessionInfoDialog___c__DisplayClass7_0__Init_b__1__, v23);
    sub_1BD3458(&PossessionInfoDialog___c__DisplayClass7_0_TypeInfo, v24);
    sub_1BD3458(&StringLiteral_15829/*"Window/CloseButton"*/, v25);
    sub_1BD3458(&StringLiteral_10552/*"POSSESSION_DIALOG_TITLE"*/, v26);
    sub_1BD3458(&StringLiteral_10551/*"POSSESSION_DIALOG_MESSAGE"*/, v27);
    byte_4B33842 = 1;
  }
  v28 = sub_1BD36A4(PossessionInfoDialog___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackKeyTarget_42636932(transform, (System_String_o *)StringLiteral_15829/*"Window/CloseButton"*/, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___);
  if ( !Master_object )
    goto LABEL_63;
  FeaturedServantIds = ViewGachaFeaturedServantMaster__GetFeaturedServantIds(
                         (ViewGachaFeaturedServantMaster_o *)Master_object,
                         gachaId,
                         0LL);
  Master_object = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)FeaturedServantIds, 0LL);
  if ( (Master_object & 1) != 0 )
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
    Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10552/*"POSSESSION_DIALOG_TITLE"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0LL);
      messageLabel = this->fields.messageLabel;
      Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10551/*"POSSESSION_DIALOG_MESSAGE"*/, 0LL);
      if ( messageLabel )
      {
        UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ServantMaster___);
        if ( v28 )
        {
          *(_QWORD *)(v28 + 24) = Master_object;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v28 + 24), Master_object, v36, v37, v38, v39, v40, v41);
          v42 = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
          *(_QWORD *)(v28 + 16) = v42;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v28 + 16), (int64_t)v42, v43, v44, v45, v46, v47, v48);
          v49 = (System_Func_int__bool__o *)sub_1BD36A4(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v49,
            (Il2CppObject *)v28,
            Method_PossessionInfoDialog___c__DisplayClass7_0__Init_b__0__,
            0LL);
          v50 = System_Linq_Enumerable__OrderBy_int__bool_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)FeaturedServantIds,
                  (System_Func_TSource__TKey__o *)v49,
                  (const MethodInfo_2F5A4B8 *)Method_System_Linq_Enumerable_OrderBy_int__bool___);
          v51 = (System_Func_int__int__o *)sub_1BD36A4(System_Func_int__int__TypeInfo);
          System_Func_int__int____ctor(
            v51,
            (Il2CppObject *)v28,
            Method_PossessionInfoDialog___c__DisplayClass7_0__Init_b__1__,
            0LL);
          Master_object = (int64_t)System_Linq_Enumerable__ThenBy_int__int_(
                                     v50,
                                     (System_Func_TSource__TKey__o *)v51,
                                     (const MethodInfo_2F69FE4 *)Method_System_Linq_Enumerable_ThenBy_int__int___);
          if ( Master_object )
          {
            v52 = *(_QWORD *)Master_object;
            v53 = Master_object;
            v54 = *(unsigned __int16 *)(*(_QWORD *)Master_object + 302LL);
            if ( *(_WORD *)(*(_QWORD *)Master_object + 302LL) )
            {
              v55 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerable_int__c **)v55 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
              {
                --v54;
                v55 += 4;
                if ( !v54 )
                  goto LABEL_23;
              }
              v56 = v52 + 16LL * *v55 + 312;
            }
            else
            {
LABEL_23:
              v56 = sub_1C25438(Master_object, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
            }
            v58 = (*(__int64 (__fastcall **)(int64_t, _QWORD))v56)(v53, *(_QWORD *)(v56 + 8));
            if ( !v58 )
              sub_1BD36B4(0LL, v57);
            while ( 1 )
            {
              v59 = *(_QWORD *)v58;
              v60 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
              if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
              {
                v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
                while ( *((System_Collections_IEnumerator_c **)v61 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v60;
                  v61 += 4;
                  if ( !v60 )
                    goto LABEL_30;
                }
                v62 = v59 + 16LL * *v61 + 312;
              }
              else
              {
LABEL_30:
                v62 = sub_1C25438(v58, System_Collections_IEnumerator_TypeInfo, 0LL);
              }
              if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v62)(v58, *(_QWORD *)(v62 + 8)) & 1) == 0 )
                break;
              v63 = *(_QWORD *)v58;
              v64 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
              if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
              {
                v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
                while ( *((System_Collections_Generic_IEnumerator_int__c **)v65 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
                {
                  --v64;
                  v65 += 4;
                  if ( !v64 )
                    goto LABEL_37;
                }
                v66 = v63 + 16LL * *v65 + 312;
              }
              else
              {
LABEL_37:
                v66 = sub_1C25438(v58, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
              }
              v68 = (*(__int64 (__fastcall **)(__int64, _QWORD))v66)(v58, *(_QWORD *)(v66 + 8));
              listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
              if ( !listRoot )
                sub_1BD36B4(0LL, v67);
              possessionInfoObject = (Il2CppObject *)this->fields.possessionInfoObject;
              v71 = UnityEngine_Component__get_transform(listRoot, 0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v72 = UnityEngine_Object__Instantiate_object__50031952(
                      possessionInfoObject,
                      v71,
                      (const MethodInfo_2FB6D50 *)Method_UnityEngine_Object_Instantiate_PossessionInfo___);
              v74 = (PossessionInfo_o *)v72;
              if ( !v72 )
                sub_1BD36B4(0LL, v73);
              objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
              gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v72, 0LL);
              v83 = (int64_t)gameObject;
              if ( !objectList )
                sub_1BD36B4(gameObject, gameObject);
              items = objectList->fields._items;
              v85 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++objectList->fields._version;
              if ( !items )
                sub_1BD36B4(gameObject, gameObject);
              size = objectList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  objectList,
                  gameObject,
                  *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
              }
              else
              {
                v87 = &items->obj.klass + size;
                objectList->fields._size = size + 1;
                v87[4] = (Il2CppClass *)v83;
                sub_1BD33FC((PartyOrganizationUtility_o *)(v87 + 4), v83, v77, v78, v79, v80, v81, v82);
              }
              PossessionInfo__SetInfo(v74, v68, v88);
            }
            v89 = *(_QWORD *)v58;
            v90 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
            {
              v91 = (int *)(*(_QWORD *)(v89 + 176) + 8LL);
              while ( *((System_IDisposable_c **)v91 - 1) != System_IDisposable_TypeInfo )
              {
                --v90;
                v91 += 4;
                if ( !v90 )
                  goto LABEL_53;
              }
              v92 = v89 + 16LL * *v91 + 312;
            }
            else
            {
LABEL_53:
              v92 = sub_1C25438(v58, System_IDisposable_TypeInfo, 0LL);
            }
            (*(void (__fastcall **)(__int64, _QWORD))v92)(v58, *(_QWORD *)(v92 + 8));
            Master_object = (int64_t)this->fields.listRoot;
            if ( Master_object )
            {
              Master_object = (int64_t)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)Master_object,
                                         (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
              if ( Master_object )
              {
                (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Master_object + 440LL))(
                  Master_object,
                  *(_QWORD *)(*(_QWORD *)Master_object + 448LL));
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
    sub_1BD36B4(Master_object, v31);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B33844 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_GameObject__TypeInfo, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__ForEach__, v3);
    sub_1BD3458(&Method_PossessionInfoDialog_OnClickClose__, v4);
    sub_1BD3458(&Method_PossessionInfoDialog___c__OnClickClose_b__10_0__, v5);
    sub_1BD3458(&PossessionInfoDialog___c_TypeInfo, v6);
    byte_4B33844 = 1;
  }
  v7 = Method_PossessionInfoDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_PossessionInfoDialog_OnClickClose__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BD3470(Method_PossessionInfoDialog_OnClickClose__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BD343C(v7, v7[4]);
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
    _9__10_0 = (System_Action_object__o *)sub_1BD36A4(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__10_0, v13, Method_PossessionInfoDialog___c__OnClickClose_b__10_0__, 0LL);
    static_fields = PossessionInfoDialog___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Action_GameObject__o *)_9__10_0;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
      (int64_t)_9__10_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !objectList )
    sub_1BD36B4(v10, v9);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)objectList,
    (System_Action_T__o *)_9__10_0,
    (const MethodInfo_35C17D0 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  this->fields.isInit = 0;
}


void __fastcall PossessionInfoDialog__Open(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B33843 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_PossessionInfoDialog__Open_b__9_0__, v3);
    byte_4B33843 = 1;
  }
  if ( this->fields.isInit )
  {
    v4 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B33847 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_GameObject__TypeInfo, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__ForEach__, v3);
    sub_1BD3458(&Method_PossessionInfoDialog___c__Open_b__9_1__, v4);
    sub_1BD3458(&PossessionInfoDialog___c_TypeInfo, v5);
    byte_4B33847 = 1;
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
    _9__9_1 = (System_Action_object__o *)sub_1BD36A4(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__9_1, v9, Method_PossessionInfoDialog___c__Open_b__9_1__, 0LL);
    static_fields = PossessionInfoDialog___c_TypeInfo->static_fields;
    static_fields->__9__9_1 = (struct System_Action_GameObject__o *)_9__9_1;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__9_1, (int64_t)_9__9_1, v11, v12, v13, v14, v15, v16);
  }
  if ( !objectList )
    sub_1BD36B4(v6, method);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)objectList,
    (System_Action_T__o *)_9__9_1,
    (const MethodInfo_35C17D0 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
}


void __fastcall PossessionInfoDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B33848 & 1) == 0 )
  {
    sub_1BD3458(&PossessionInfoDialog___c_TypeInfo, v1);
    byte_4B33848 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(PossessionInfoDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PossessionInfoDialog___c_TypeInfo->static_fields->__9 = (struct PossessionInfoDialog___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)PossessionInfoDialog___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  if ( (byte_4B3384A & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, obj);
    byte_4B3384A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70278272((UnityEngine_Object_o *)obj, 0LL);
  }
}


void __fastcall PossessionInfoDialog___c___Open_b__9_1(
        PossessionInfoDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4B33849 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, obj);
    byte_4B33849 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( v4 )
  {
    if ( !obj )
      sub_1BD36B4(v4, v5);
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

  if ( (byte_4B3384B & 1) == 0 )
  {
    sub_1BD3458(&int___TypeInfo, *(_QWORD *)&id);
    byte_4B3384B = 1;
  }
  userServantCollectionMaster = this->fields.userServantCollectionMaster;
  v6 = (System_Int32_array *)sub_1BD3500(int___TypeInfo, 1LL);
  if ( !v6 )
    goto LABEL_7;
  v7 = v6;
  if ( !v6->max_length )
    sub_1BD36BC(v6, v6);
  v6->m_Items[1] = id;
  if ( !userServantCollectionMaster )
LABEL_7:
    sub_1BD36B4(v6, v7);
  return UserServantCollectionMaster__IsServantHaving(userServantCollectionMaster, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PossessionInfoDialog___c__DisplayClass7_0___Init_b__1(
        PossessionInfoDialog___c__DisplayClass7_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *svtMaster; // x0

  if ( (byte_4B3384C & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, *(_QWORD *)&id);
    byte_4B3384C = 1;
  }
  svtMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.svtMaster;
  if ( !svtMaster
    || (svtMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                    svtMaster,
                                                                    id,
                                                                    (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BD36B4(svtMaster, *(_QWORD *)&id);
  }
  return svtMaster[2].fields.revision;
}