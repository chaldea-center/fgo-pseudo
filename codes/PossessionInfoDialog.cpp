void __fastcall PossessionInfoDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B128BC & 1) == 0 )
  {
    sub_1BCA7E0(&PossessionInfoDialog_TypeInfo, v1, v2);
    byte_4B128BC = 1;
  }
  PossessionInfoDialog_TypeInfo->static_fields->DISPLAY_LIMIT_NUM = 6;
}


void __fastcall PossessionInfoDialog___ctor(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1

  if ( (byte_4B128BB & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v7, v8);
    byte_4B128BB = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_GameObject__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.objectList, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v16);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v54; // x1
  int64_t Master_object; // x0
  __int64 v56; // x1
  System_Int32_array *FeaturedServantIds; // x21
  PossessionInfoDialog_c *v58; // x0
  UILabel_o *titleLabel; // x22
  UILabel_o *messageLabel; // x22
  __int64 v61; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  Il2CppObject *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  System_Func_int__bool__o *v78; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v79; // x21
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  System_Func_int__int__o *v83; // x22
  __int64 v84; // x8
  int64_t v85; // x20
  __int64 v86; // x9
  int *v87; // x10
  __int64 v88; // x0
  __int64 v89; // x1
  __int64 v90; // x20
  __int64 v91; // x8
  __int64 v92; // x9
  int *v93; // x10
  __int64 v94; // x0
  __int64 v95; // x8
  __int64 v96; // x9
  int *v97; // x10
  __int64 v98; // x0
  __int64 v99; // x1
  int32_t v100; // w21
  UnityEngine_Component_o *listRoot; // x0
  Il2CppObject *possessionInfoObject; // x22
  __int64 v103; // x1
  UnityEngine_Transform_o *v104; // x23
  Il2CppObject *v105; // x0
  __int64 v106; // x1
  PossessionInfo_o *v107; // x22
  System_Collections_Generic_List_object__o *objectList; // x23
  Il2CppObject *gameObject; // x0
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  int64_t v116; // x1
  struct System_Object_array *items; // x8
  _QWORD *v118; // x9
  __int64 size; // x10
  Il2CppClass **v120; // x0
  const MethodInfo *v121; // x2
  __int64 v122; // x8
  __int64 v123; // x9
  int *v124; // x10
  __int64 v125; // x0

  if ( (byte_4B128B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIGrid___, *(_QWORD *)&gachaId, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_int__bool___, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ThenBy_int__int___, v16, v17);
    sub_1BCA7E0(&System_Func_int__int__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v20, v21);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_int__TypeInfo, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_int__TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v30, v31);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_PossessionInfo___, v34, v35);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v36, v37);
    sub_1BCA7E0(&PossessionInfoDialog_TypeInfo, v38, v39);
    sub_1BCA7E0(&Method_PossessionInfoDialog___c__DisplayClass7_0__Init_b__0__, v40, v41);
    sub_1BCA7E0(&Method_PossessionInfoDialog___c__DisplayClass7_0__Init_b__1__, v42, v43);
    sub_1BCA7E0(&PossessionInfoDialog___c__DisplayClass7_0_TypeInfo, v44, v45);
    sub_1BCA7E0(&StringLiteral_15810/*"Window/CloseButton"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_10537/*"POSSESSION_DIALOG_TITLE"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_10536/*"POSSESSION_DIALOG_MESSAGE"*/, v50, v51);
    byte_4B128B8 = 1;
  }
  v52 = sub_1BCAA2C(PossessionInfoDialog___c__DisplayClass7_0_TypeInfo, *(_QWORD *)&gachaId, method, v3);
  System_Object___ctor((Il2CppObject *)v52, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackKeyTarget_42533088(transform, (System_String_o *)StringLiteral_15810/*"Window/CloseButton"*/, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v54);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___);
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
  v58 = PossessionInfoDialog_TypeInfo;
  if ( !PossessionInfoDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PossessionInfoDialog_TypeInfo, v56);
    v58 = PossessionInfoDialog_TypeInfo;
  }
  if ( v58->static_fields->DISPLAY_LIMIT_NUM >= (signed int)FeaturedServantIds->max_length )
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56);
    Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10537/*"POSSESSION_DIALOG_TITLE"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0LL);
      messageLabel = this->fields.messageLabel;
      Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10536/*"POSSESSION_DIALOG_MESSAGE"*/, 0LL);
      if ( messageLabel )
      {
        UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v61);
        Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
        if ( v52 )
        {
          *(_QWORD *)(v52 + 24) = Master_object;
          sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 24), Master_object, v62, v63, v64, v65, v66, v67);
          v68 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
          *(_QWORD *)(v52 + 16) = v68;
          sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 16), (int64_t)v68, v69, v70, v71, v72, v73, v74);
          v78 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v75, v76, v77);
          System_Func_int__bool____ctor(
            v78,
            (Il2CppObject *)v52,
            Method_PossessionInfoDialog___c__DisplayClass7_0__Init_b__0__,
            0LL);
          v79 = System_Linq_Enumerable__OrderBy_int__bool_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)FeaturedServantIds,
                  (System_Func_TSource__TKey__o *)v78,
                  (const MethodInfo_2F3B10C *)Method_System_Linq_Enumerable_OrderBy_int__bool___);
          v83 = (System_Func_int__int__o *)sub_1BCAA2C(System_Func_int__int__TypeInfo, v80, v81, v82);
          System_Func_int__int____ctor(
            v83,
            (Il2CppObject *)v52,
            Method_PossessionInfoDialog___c__DisplayClass7_0__Init_b__1__,
            0LL);
          Master_object = (int64_t)System_Linq_Enumerable__ThenBy_int__int_(
                                     v79,
                                     (System_Func_TSource__TKey__o *)v83,
                                     (const MethodInfo_2F4AC38 *)Method_System_Linq_Enumerable_ThenBy_int__int___);
          if ( Master_object )
          {
            v84 = *(_QWORD *)Master_object;
            v85 = Master_object;
            v86 = *(unsigned __int16 *)(*(_QWORD *)Master_object + 302LL);
            if ( *(_WORD *)(*(_QWORD *)Master_object + 302LL) )
            {
              v87 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerable_int__c **)v87 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
              {
                --v86;
                v87 += 4;
                if ( !v86 )
                  goto LABEL_23;
              }
              v88 = v84 + 16LL * *v87 + 312;
            }
            else
            {
LABEL_23:
              v88 = sub_1C1C7C0(Master_object, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
            }
            v90 = (*(__int64 (__fastcall **)(int64_t, _QWORD))v88)(v85, *(_QWORD *)(v88 + 8));
            if ( !v90 )
              sub_1BCAA3C(0LL, v89);
            while ( 1 )
            {
              v91 = *(_QWORD *)v90;
              v92 = *(unsigned __int16 *)(*(_QWORD *)v90 + 302LL);
              if ( *(_WORD *)(*(_QWORD *)v90 + 302LL) )
              {
                v93 = (int *)(*(_QWORD *)(v91 + 176) + 8LL);
                while ( *((System_Collections_IEnumerator_c **)v93 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v92;
                  v93 += 4;
                  if ( !v92 )
                    goto LABEL_30;
                }
                v94 = v91 + 16LL * *v93 + 312;
              }
              else
              {
LABEL_30:
                v94 = sub_1C1C7C0(v90, System_Collections_IEnumerator_TypeInfo, 0LL);
              }
              if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v94)(v90, *(_QWORD *)(v94 + 8)) & 1) == 0 )
                break;
              v95 = *(_QWORD *)v90;
              v96 = *(unsigned __int16 *)(*(_QWORD *)v90 + 302LL);
              if ( *(_WORD *)(*(_QWORD *)v90 + 302LL) )
              {
                v97 = (int *)(*(_QWORD *)(v95 + 176) + 8LL);
                while ( *((System_Collections_Generic_IEnumerator_int__c **)v97 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
                {
                  --v96;
                  v97 += 4;
                  if ( !v96 )
                    goto LABEL_37;
                }
                v98 = v95 + 16LL * *v97 + 312;
              }
              else
              {
LABEL_37:
                v98 = sub_1C1C7C0(v90, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
              }
              v100 = (*(__int64 (__fastcall **)(__int64, _QWORD))v98)(v90, *(_QWORD *)(v98 + 8));
              listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
              if ( !listRoot )
                sub_1BCAA3C(0LL, v99);
              possessionInfoObject = (Il2CppObject *)this->fields.possessionInfoObject;
              v104 = UnityEngine_Component__get_transform(listRoot, 0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v103);
              v105 = UnityEngine_Object__Instantiate_object__49903816(
                       possessionInfoObject,
                       v104,
                       (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_PossessionInfo___);
              v107 = (PossessionInfo_o *)v105;
              if ( !v105 )
                sub_1BCAA3C(0LL, v106);
              objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
              gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v105, 0LL);
              v116 = (int64_t)gameObject;
              if ( !objectList )
                sub_1BCAA3C(gameObject, gameObject);
              items = objectList->fields._items;
              v118 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++objectList->fields._version;
              if ( !items )
                sub_1BCAA3C(gameObject, gameObject);
              size = objectList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  objectList,
                  gameObject,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
              }
              else
              {
                v120 = &items->obj.klass + size;
                objectList->fields._size = size + 1;
                v120[4] = (Il2CppClass *)v116;
                sub_1BCA784((PartyOrganizationUtility_o *)(v120 + 4), v116, v110, v111, v112, v113, v114, v115);
              }
              PossessionInfo__SetInfo(v107, v100, v121);
            }
            v122 = *(_QWORD *)v90;
            v123 = *(unsigned __int16 *)(*(_QWORD *)v90 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v90 + 302LL) )
            {
              v124 = (int *)(*(_QWORD *)(v122 + 176) + 8LL);
              while ( *((System_IDisposable_c **)v124 - 1) != System_IDisposable_TypeInfo )
              {
                --v123;
                v124 += 4;
                if ( !v123 )
                  goto LABEL_53;
              }
              v125 = v122 + 16LL * *v124 + 312;
            }
            else
            {
LABEL_53:
              v125 = sub_1C1C7C0(v90, System_IDisposable_TypeInfo, 0LL);
            }
            (*(void (__fastcall **)(__int64, _QWORD))v125)(v90, *(_QWORD *)(v125 + 8));
            Master_object = (int64_t)this->fields.listRoot;
            if ( Master_object )
            {
              Master_object = (int64_t)UnityEngine_Component__GetComponent_object_(
                                         (UnityEngine_Component_o *)Master_object,
                                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIGrid___);
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
    sub_1BCAA3C(Master_object, v56);
  }
}


void __fastcall PossessionInfoDialog__OnClickClose(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  PossessionInfoDialog___c_c *v17; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x20
  System_Action_object__o *_9__10_0; // x21
  Il2CppObject *v20; // x22
  struct PossessionInfoDialog___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B128BA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_GameObject__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__ForEach__, v4, v5);
    sub_1BCA7E0(&Method_PossessionInfoDialog_OnClickClose__, v6, v7);
    sub_1BCA7E0(&Method_PossessionInfoDialog___c__OnClickClose_b__10_0__, v8, v9);
    sub_1BCA7E0(&PossessionInfoDialog___c_TypeInfo, v10, v11);
    byte_4B128BA = 1;
  }
  v12 = Method_PossessionInfoDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_PossessionInfoDialog_OnClickClose__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BCA7F8(Method_PossessionInfoDialog_OnClickClose__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
  v17 = PossessionInfoDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !PossessionInfoDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PossessionInfoDialog___c_TypeInfo, v14);
    v17 = PossessionInfoDialog___c_TypeInfo;
  }
  _9__10_0 = (System_Action_object__o *)v17->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17, v14);
      v17 = PossessionInfoDialog___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__10_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_GameObject__TypeInfo, v14, v15, v16);
    System_Action_object____ctor(_9__10_0, v20, Method_PossessionInfoDialog___c__OnClickClose_b__10_0__, 0LL);
    static_fields = PossessionInfoDialog___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Action_GameObject__o *)_9__10_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__10_0,
      (int64_t)_9__10_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  if ( !objectList )
    sub_1BCAA3C(v17, v14);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)objectList,
    (System_Action_T__o *)_9__10_0,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
  this->fields.isInit = 0;
}


void __fastcall PossessionInfoDialog__Open(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B128B9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_PossessionInfoDialog__Open_b__9_0__, v5, v6);
    byte_4B128B9 = 1;
  }
  if ( this->fields.isInit )
  {
    v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_PossessionInfoDialog__Open_b__9_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v7, 0, 0LL);
  }
}


void __fastcall PossessionInfoDialog___Open_b__9_0(PossessionInfoDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  PossessionInfoDialog___c_c *v11; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x19
  System_Action_object__o *_9__9_1; // x20
  Il2CppObject *v14; // x21
  struct PossessionInfoDialog___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B128BD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_GameObject__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__ForEach__, v5, v6);
    sub_1BCA7E0(&Method_PossessionInfoDialog___c__Open_b__9_1__, v7, v8);
    sub_1BCA7E0(&PossessionInfoDialog___c_TypeInfo, v9, v10);
    byte_4B128BD = 1;
  }
  v11 = PossessionInfoDialog___c_TypeInfo;
  objectList = this->fields.objectList;
  if ( !PossessionInfoDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PossessionInfoDialog___c_TypeInfo, method);
    v11 = PossessionInfoDialog___c_TypeInfo;
  }
  _9__9_1 = (System_Action_object__o *)v11->static_fields->__9__9_1;
  if ( !_9__9_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = PossessionInfoDialog___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__9_1 = (System_Action_object__o *)sub_1BCAA2C(System_Action_GameObject__TypeInfo, method, v2, v3);
    System_Action_object____ctor(_9__9_1, v14, Method_PossessionInfoDialog___c__Open_b__9_1__, 0LL);
    static_fields = PossessionInfoDialog___c_TypeInfo->static_fields;
    static_fields->__9__9_1 = (struct System_Action_GameObject__o *)_9__9_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__9_1, (int64_t)_9__9_1, v16, v17, v18, v19, v20, v21);
  }
  if ( !objectList )
    sub_1BCAA3C(v11, method);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)objectList,
    (System_Action_T__o *)_9__9_1,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_GameObject__ForEach__);
}


void __fastcall PossessionInfoDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B128BE & 1) == 0 )
  {
    sub_1BCA7E0(&PossessionInfoDialog___c_TypeInfo, v1, v2);
    byte_4B128BE = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(PossessionInfoDialog___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  PossessionInfoDialog___c_TypeInfo->static_fields->__9 = (struct PossessionInfoDialog___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)PossessionInfoDialog___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v4; // x1

  if ( (byte_4B128C0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, obj, method);
    byte_4B128C0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)obj, 0LL);
  }
}


void __fastcall PossessionInfoDialog___c___Open_b__9_1(
        PossessionInfoDialog___c_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_4B128BF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, obj, method);
    byte_4B128BF = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( v4 )
  {
    if ( !obj )
      sub_1BCAA3C(v4, v5);
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

  if ( (byte_4B128C1 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, *(_QWORD *)&id, method);
    byte_4B128C1 = 1;
  }
  userServantCollectionMaster = this->fields.userServantCollectionMaster;
  v6 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
  if ( !v6 )
    goto LABEL_7;
  v7 = v6;
  if ( !v6->max_length )
    sub_1BCAA44(v6, v6);
  v6->m_Items[1] = id;
  if ( !userServantCollectionMaster )
LABEL_7:
    sub_1BCAA3C(v6, v7);
  return UserServantCollectionMaster__IsServantHaving(userServantCollectionMaster, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PossessionInfoDialog___c__DisplayClass7_0___Init_b__1(
        PossessionInfoDialog___c__DisplayClass7_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *svtMaster; // x0

  if ( (byte_4B128C2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, *(_QWORD *)&id, method);
    byte_4B128C2 = 1;
  }
  svtMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.svtMaster;
  if ( !svtMaster
    || (svtMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                    svtMaster,
                                                                    id,
                                                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(svtMaster, *(_QWORD *)&id);
  }
  return svtMaster[2].fields.revision;
}