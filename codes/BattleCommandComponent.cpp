void __fastcall BattleCommandComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  int64_t v18; // x1
  struct BattleCommandComponent_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x1
  struct BattleCommandComponent_StaticFields *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  BattleCommandComponent_c *v34; // x8
  int64_t v40; // x1
  struct BattleCommandComponent_StaticFields *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x1
  struct BattleCommandComponent_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7

  if ( (byte_4B18B18 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_20300/*"icon_cardsealed_quick"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_23306/*"se_"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_20297/*"icon_cardsealed_arts"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_20299/*"icon_cardsealed_buster"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_24754/*"v_"*/, v16, v17);
    byte_4B18B18 = 1;
  }
  BattleCommandComponent_TypeInfo->static_fields->SEALED_CARDTYPE_ICON_ARTS = (struct System_String_o *)StringLiteral_20297/*"icon_cardsealed_arts"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleCommandComponent_TypeInfo->static_fields,
    StringLiteral_20297/*"icon_cardsealed_arts"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v18 = StringLiteral_20299/*"icon_cardsealed_buster"*/;
  static_fields = BattleCommandComponent_TypeInfo->static_fields;
  static_fields->SEALED_CARDTYPE_ICON_BUSTER = (struct System_String_o *)StringLiteral_20299/*"icon_cardsealed_buster"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->SEALED_CARDTYPE_ICON_BUSTER,
    v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = StringLiteral_20300/*"icon_cardsealed_quick"*/;
  v27 = BattleCommandComponent_TypeInfo->static_fields;
  v27->SEALED_CARDTYPE_ICON_QUICK = (struct System_String_o *)StringLiteral_20300/*"icon_cardsealed_quick"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v27->SEALED_CARDTYPE_ICON_QUICK, v26, v28, v29, v30, v31, v32, v33);
  v34 = BattleCommandComponent_TypeInfo;
  __asm { FMOV            V0.4S, #1.0 }
  BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientTopOnDefault = _Q0;
  v34->static_fields->CriticalLabelGradientBottomOnDefault = (struct UnityEngine_Color_o)xmmword_BD3A50;
  v34->static_fields->CriticalNumberLabelGradientTopOnBoosted = (struct UnityEngine_Color_o)xmmword_BD24B0;
  v34->static_fields->CriticalNumberLabelGradientBottomOnBoosted = (struct UnityEngine_Color_o)xmmword_BD3B20;
  v34->static_fields->CriticalPercentLabelGradientTopOnBoosted = (struct UnityEngine_Color_o)xmmword_BD2D00;
  v34->static_fields->CriticalPercentLabelGradientBottomOnBoosted = (struct UnityEngine_Color_o)xmmword_BD2EF0;
  v40 = StringLiteral_24754/*"v_"*/;
  v41 = v34->static_fields;
  v41->voiceIdPrefix = (struct System_String_o *)StringLiteral_24754/*"v_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v41->voiceIdPrefix, v40, v42, v43, v44, v45, v46, v47);
  v48 = StringLiteral_23306/*"se_"*/;
  v49 = BattleCommandComponent_TypeInfo->static_fields;
  v49->seIdPrefix = (struct System_String_o *)StringLiteral_23306/*"se_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v49->seIdPrefix, v48, v50, v51, v52, v53, v54, v55);
}


void __fastcall BattleCommandComponent___ctor(BattleCommandComponent_o *this, const MethodInfo *method)
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
  struct UnityEngine_GameObject_array *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct UnityEngine_GameObject_array *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Array_o *v36; // x0
  struct BuffList_TYPE_array *v37; // x20
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Array_o *v44; // x0
  struct BuffList_TYPE_array *v45; // x20
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Array_o *v52; // x0
  struct BuffList_TYPE_array *v53; // x20
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Array_o *v60; // x0
  struct BuffList_TYPE_array *v61; // x20
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  System_Collections_Generic_List_object__o *v71; // x20
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  System_Collections_Generic_Dictionary_object__object__o *v81; // x20
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_RuntimeFieldHandle_o v88; // 0:w1.4
  System_RuntimeFieldHandle_o v89; // 0:w1.4
  System_RuntimeFieldHandle_o v90; // 0:w1.4
  System_RuntimeFieldHandle_o v91; // 0:w1.4

  if ( (byte_4B18B17 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleCommandComponent_CardBuffData__TypeInfo, v10, v11);
    sub_1BCA7E0(&BuffList_TYPE___TypeInfo, v12, v13);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__2798D0F53EF571A9EA2B1242325EF118911DCE9160ED6DF6A7ABD71F4BE53437,
      v14,
      v15);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__4962172457F75B1A722121B5C4C6A8C6778DDBA77FB677DDE7A5BBE546867870,
      v16,
      v17);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__7FF261A5C35634E350068AE4166549E7E2B263049C77B28D36985A526C7753C9,
      v18,
      v19);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__81E6881EDC288CDA01A3F973C0C8C6DA6E8CCE911E702C19528468EFB3B4B468,
      v20,
      v21);
    byte_4B18B17 = 1;
  }
  v22 = (struct UnityEngine_GameObject_array *)sub_1BCA888(UnityEngine_GameObject___TypeInfo, 6LL);
  this->fields.effectobj = v22;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectobj, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = (struct UnityEngine_GameObject_array *)sub_1BCA888(UnityEngine_GameObject___TypeInfo, 2LL);
  this->fields.addObjectList = v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.addObjectList, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  v36 = (System_Array_o *)sub_1BCA888(BuffList_TYPE___TypeInfo, 13LL);
  v88.fields.value = Field__PrivateImplementationDetails__4962172457F75B1A722121B5C4C6A8C6778DDBA77FB677DDE7A5BBE546867870;
  v37 = (struct BuffList_TYPE_array *)v36;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v36, v88, 0LL);
  this->fields.qabTypes = v37;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.qabTypes, (int64_t)v37, v38, v39, v40, v41, v42, v43);
  v44 = (System_Array_o *)sub_1BCA888(BuffList_TYPE___TypeInfo, 4LL);
  v89.fields.value = Field__PrivateImplementationDetails__2798D0F53EF571A9EA2B1242325EF118911DCE9160ED6DF6A7ABD71F4BE53437;
  v45 = (struct BuffList_TYPE_array *)v44;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v44, v89, 0LL);
  this->fields.noneTdQabTypes = v45;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.noneTdQabTypes, (int64_t)v45, v46, v47, v48, v49, v50, v51);
  v52 = (System_Array_o *)sub_1BCA888(BuffList_TYPE___TypeInfo, 3LL);
  v90.fields.value = Field__PrivateImplementationDetails__81E6881EDC288CDA01A3F973C0C8C6DA6E8CCE911E702C19528468EFB3B4B468;
  v53 = (struct BuffList_TYPE_array *)v52;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v52, v90, 0LL);
  this->fields.tdTypes = v53;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tdTypes, (int64_t)v53, v54, v55, v56, v57, v58, v59);
  v60 = (System_Array_o *)sub_1BCA888(BuffList_TYPE___TypeInfo, 15LL);
  v91.fields.value = Field__PrivateImplementationDetails__7FF261A5C35634E350068AE4166549E7E2B263049C77B28D36985A526C7753C9;
  v61 = (struct BuffList_TYPE_array *)v60;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v60, v91, 0LL);
  this->fields.otherTypes = v61;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.otherTypes, (int64_t)v61, v62, v63, v64, v65, v66, v67);
  v71 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleCommandComponent_CardBuffData__TypeInfo,
                                                       v68,
                                                       v69,
                                                       v70);
  System_Collections_Generic_List_object____ctor(
    v71,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData___ctor__);
  this->fields.specialCardBuffList = (struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *)v71;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.specialCardBuffList,
    (int64_t)v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  this->fields.cardBuffAlphaFor = 1.0;
  v81 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__GameObject__TypeInfo,
                                                                     v78,
                                                                     v79,
                                                                     v80);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v81,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.cardEffectDict = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v81;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.cardEffectDict, (int64_t)v81, v82, v83, v84, v85, v86, v87);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__AddBoostedCriticalRate(
        BattleCommandComponent_o *this,
        int32_t toAdd,
        const MethodInfo *method)
{
  BattleCommandData_o *data; // x0
  int32_t CriticalPoint; // w0
  int32_t boostedCriticalRate; // w8
  int32_t v8; // w9
  int32_t v9; // w10
  int32_t v10; // w9
  const MethodInfo *v11; // x2

  data = this->fields.data;
  if ( data )
  {
    CriticalPoint = BattleCommandData__getCriticalPoint(data, 0LL);
    boostedCriticalRate = this->fields.boostedCriticalRate;
    v8 = 100 - (CriticalPoint + boostedCriticalRate);
    if ( v8 <= toAdd )
      v9 = 100 - (CriticalPoint + boostedCriticalRate);
    else
      v9 = toAdd;
    if ( v8 >= 0 )
      v10 = v9;
    else
      v10 = 0;
  }
  else
  {
    boostedCriticalRate = this->fields.boostedCriticalRate;
    if ( toAdd >= 100 )
      v10 = 100;
    else
      v10 = toAdd;
  }
  this->fields.boostedCriticalRate = v10 + boostedCriticalRate;
  BattleCommandComponent__ChangeCriticalLabelColor(this, *(const MethodInfo **)&toAdd);
  BattleCommandComponent__updateCount(this, 0, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__CardEffectSetActive(
        BattleCommandComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_Dictionary_object__object__o *cardEffectDict; // x0
  bool v14; // w19
  __int64 v15; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B18B0F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__, value, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__,
      v7,
      v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__,
      v11,
      v12);
    byte_4B18B0F = 1;
  }
  memset(&v16, 0, sizeof(v16));
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict
    || (cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      cardEffectDict,
                                                                                      (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__)) == 0LL )
  {
    sub_1BCAA3C(cardEffectDict, value);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v16,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  v14 = value;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v16,
            (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v16.fields._currentValue )
      sub_1BCAA3C(0LL, v15);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16.fields._currentValue, v14, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v16,
    (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
}


void __fastcall BattleCommandComponent__ChangeCardEffectMaskForInside(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_Dictionary_object__object__o *cardEffectDict; // x0
  __int64 v15; // x1
  System_Object_array *ComponentsInChildren_object__49689332; // x0
  __int64 v17; // x1
  System_Object_array *v18; // x19
  int max_length; // w8
  int i; // w23
  UnityEngine_ParticleSystemRenderer_o *v21; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v23; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B18B11 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__, method, v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__,
      v8,
      v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___, v10, v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__,
      v12,
      v13);
    byte_4B18B11 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict
    || (cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      cardEffectDict,
                                                                                      (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__)) == 0LL )
  {
    sub_1BCAA3C(cardEffectDict, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v22,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v23,
            (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v23.fields._currentValue )
      sub_1BCAA3C(0LL, v15);
    ComponentsInChildren_object__49689332 = UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                              (UnityEngine_GameObject_o *)v23.fields._currentValue,
                                              (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
    v18 = ComponentsInChildren_object__49689332;
    if ( !ComponentsInChildren_object__49689332 )
      sub_1BCAA3C(0LL, v17);
    max_length = ComponentsInChildren_object__49689332->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1BCAA44(ComponentsInChildren_object__49689332, v17);
        v21 = (UnityEngine_ParticleSystemRenderer_o *)v18->m_Items[i];
        if ( !v21 )
          sub_1BCAA3C(0LL, v17);
        UnityEngine_ParticleSystemRenderer__set_maskInteraction(v21, 1, 0LL);
        max_length = v18->max_length;
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v23,
    (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
}


void __fastcall BattleCommandComponent__ChangeCriticalLabelColor(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  void *criticallabel; // x0
  int v7; // w8
  void *v8; // x20
  unsigned int v9; // w23
  UILabel_o *v10; // x21
  UILabel_o *criticalPercentLabel; // x20

  if ( (byte_4B18ACA & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76859144, v4, v5);
    byte_4B18ACA = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_17;
  criticallabel = UnityEngine_Component__GetComponentsInChildren_object_(
                    (UnityEngine_Component_o *)criticallabel,
                    1,
                    (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76859144);
  if ( !criticallabel )
    goto LABEL_17;
  v7 = *((_DWORD *)criticallabel + 6);
  v8 = criticallabel;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v7 )
        sub_1BCAA44(criticallabel, method);
      criticallabel = BattleCommandComponent_TypeInfo;
      v10 = (UILabel_o *)*((_QWORD *)v8 + (int)v9 + 4);
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, method);
        criticallabel = BattleCommandComponent_TypeInfo;
      }
      if ( !v10 )
        break;
      UILabel__set_gradientTop(v10, *(UnityEngine_Color_o *)(*((_QWORD *)criticallabel + 23) + 56LL), 0LL);
      UILabel__set_gradientBottom(
        v10,
        BattleCommandComponent_TypeInfo->static_fields->CriticalNumberLabelGradientBottomOnBoosted,
        0LL);
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        goto LABEL_12;
    }
LABEL_17:
    sub_1BCAA3C(criticallabel, method);
  }
LABEL_12:
  criticallabel = BattleCommandComponent_TypeInfo;
  criticalPercentLabel = this->fields.criticalPercentLabel;
  if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, method);
    criticallabel = BattleCommandComponent_TypeInfo;
  }
  if ( !criticalPercentLabel )
    goto LABEL_17;
  UILabel__set_gradientTop(criticalPercentLabel, *(UnityEngine_Color_o *)(*((_QWORD *)criticallabel + 23) + 88LL), 0LL);
  criticallabel = this->fields.criticalPercentLabel;
  if ( !criticallabel )
    goto LABEL_17;
  UILabel__set_gradientBottom(
    (UILabel_o *)criticallabel,
    BattleCommandComponent_TypeInfo->static_fields->CriticalPercentLabelGradientBottomOnBoosted,
    0LL);
}


void __fastcall BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *specialCardBuffList; // x0
  int32_t cardBuffListIndex; // w1
  int items; // w8

  if ( (byte_4B18B0B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__, v4, v5);
    byte_4B18B0B = 1;
  }
  specialCardBuffList = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  if ( !specialCardBuffList )
    goto LABEL_11;
  cardBuffListIndex = this->fields.cardBuffListIndex;
  if ( specialCardBuffList->fields._size <= cardBuffListIndex )
  {
LABEL_9:
    BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, 0, v2);
    return;
  }
  specialCardBuffList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       specialCardBuffList,
                                                                       cardBuffListIndex,
                                                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
  if ( !specialCardBuffList )
LABEL_11:
    sub_1BCAA3C(specialCardBuffList, method);
  items = (int)specialCardBuffList->fields._items;
  if ( items != 156 )
  {
    if ( items == 131 )
    {
      BattleCommandComponent__UpdateFixedCommandCard(this, method);
      return;
    }
    goto LABEL_9;
  }
  BattleCommandComponent__UpdateCommandCardTypeChange(this, method);
}


UISprite_o *__fastcall BattleCommandComponent__ChoiceUnusableMarkSprite(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v4; // x1
  UISprite_o **p_donotPermanentSleep; // x8
  UISprite_o *result; // x0

  SealStatus = BattleCommandComponent__get_SealStatus(this, method);
  if ( !SealStatus )
    sub_1BCAA3C(0LL, v4);
  switch ( BattleCommandSealStatus__get_PrioredStatus(SealStatus, 0LL) )
  {
    case 0:
      p_donotPermanentSleep = &this->fields.donotPermanentSleep;
      goto LABEL_12;
    case 1:
      p_donotPermanentSleep = &this->fields.donotsleepSprite;
      goto LABEL_12;
    case 2:
      p_donotPermanentSleep = &this->fields.donotactSprite;
      goto LABEL_12;
    case 3:
    case 5:
      p_donotPermanentSleep = &this->fields.sealedSprite;
      goto LABEL_12;
    case 4:
      p_donotPermanentSleep = &this->fields.dontuseSprite;
      goto LABEL_12;
    case 6:
      p_donotPermanentSleep = &this->fields.unusableShortageStarSprite;
      goto LABEL_12;
    case 7:
      p_donotPermanentSleep = &this->fields.unusableNpSprite;
      goto LABEL_12;
    case 8:
    case 9:
      p_donotPermanentSleep = &this->fields.donotActWithTypeSp;
      goto LABEL_12;
    case 10:
      p_donotPermanentSleep = &this->fields.treasureDeviceErrorSprite;
LABEL_12:
      result = *p_donotPermanentSleep;
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}


void __fastcall BattleCommandComponent__ClearCardEffect(BattleCommandComponent_o *this, const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_Dictionary_object__object__o *cardEffectDict; // x0
  __int64 v17; // x1
  Il2CppObject *currentValue; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v19; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B18B10 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__, v4, v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__,
      v8,
      v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__,
      v10,
      v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__,
      v14,
      v15);
    byte_4B18B10 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict )
    goto LABEL_12;
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                cardEffectDict,
                                                                                (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
  if ( !cardEffectDict )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v19,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v19,
            (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    currentValue = v19.fields._currentValue;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)currentValue, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v19,
    (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict )
LABEL_12:
    sub_1BCAA3C(cardEffectDict, method);
  System_Collections_Generic_Dictionary_object__object___Clear(
    cardEffectDict,
    (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
}


void __fastcall BattleCommandComponent__DestroyEffectObject1(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCommandComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_GameObject_array *v8; // x8
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x20
  struct UnityEngine_GameObject_array *v11; // x8
  UnityEngine_Object_o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  v3 = this;
  if ( (byte_4B18AF1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___, method, v2);
    this = (BattleCommandComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B18AF1 = 1;
  }
  effectobj = v3->fields.effectobj;
  if ( !effectobj )
    goto LABEL_24;
  if ( effectobj->max_length <= 1 )
    goto LABEL_25;
  v7 = (UnityEngine_Object_o *)effectobj->m_Items[1];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v3->fields.newMatriarl )
    {
      v8 = v3->fields.effectobj;
      if ( !v8 )
        goto LABEL_24;
      if ( v8->max_length <= 1 )
        goto LABEL_25;
      this = (BattleCommandComponent_o *)v8->m_Items[1];
      if ( !this )
        goto LABEL_24;
      this = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
      if ( !this )
        goto LABEL_24;
      v10 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BattleCommandComponent_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                                      this,
                                      this->klass[1].vtable._2_GetHashCode.methodPtr);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      UnityEngine_Object__Destroy_70154244(v10, 0LL);
      v3->fields.newMatriarl = 0;
    }
    v11 = v3->fields.effectobj;
    if ( v11 )
    {
      if ( v11->max_length <= 1 )
        goto LABEL_25;
      v12 = (UnityEngine_Object_o *)v11->m_Items[1];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      UnityEngine_Object__Destroy_70154244(v12, 0LL);
      this = (BattleCommandComponent_o *)v3->fields.effectobj;
      if ( this )
      {
        if ( LODWORD(this->fields.m_CancellationTokenSource) > 1 )
        {
          this->fields.bg = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bg, 0LL, v13, v14, v15, v16, v17, v18);
          return;
        }
LABEL_25:
        sub_1BCAA44(this, method);
      }
    }
LABEL_24:
    sub_1BCAA3C(this, method);
  }
}


BattleCommandData_o *__fastcall BattleCommandComponent__GetCommandData(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.data;
}


int32_t __fastcall BattleCommandComponent__GetCriticalPoint(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LODWORD(data) = this->fields.boostedCriticalRate + BattleCommandData__getCriticalPoint(data, 0LL);
  return (int)data;
}


int32_t __fastcall BattleCommandComponent__GetPassStarCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1BCAA3C(0LL, method);
  return BattleCommandData__getPassStarCount(data, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleCommandComponent__GetSpawnerObj(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *prefab,
        UnityEngine_Transform_o *parent,
        UnityEngine_Vector3_o scale,
        const MethodInfo *method)
{
  Spawner_o *spawner; // x21
  float z; // s8
  float y; // s9
  float x; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v12; // s12
  float v13; // s13
  float v14; // s11
  UnityEngine_GameObject_o *v15; // x19
  __int64 v16; // x2
  BattleCommandComponent_o *v17; // x20
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  spawner = this->fields.spawner;
  z = scale.fields.z;
  y = scale.fields.y;
  x = scale.fields.x;
  if ( !byte_4B109C1 )
  {
    this = (BattleCommandComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, prefab, parent);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v13 = static_fields->zeroVector.fields.x;
  v12 = static_fields->zeroVector.fields.y;
  v14 = static_fields->zeroVector.fields.z;
  if ( !byte_4B109C7 )
  {
    this = (BattleCommandComponent_o *)sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, prefab, parent);
    byte_4B109C7 = 1;
  }
  if ( !spawner )
    goto LABEL_12;
  v19.fields.x = v13;
  v19.fields.y = v12;
  v19.fields.z = v14;
  v15 = Spawner__Spawn_38681780(
          spawner,
          (UnityEngine_Object_o *)prefab,
          v19,
          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
          0LL);
  GameObjectExtensions__SetParent(v15, (UnityEngine_Component_o *)parent, 0LL);
  if ( !v15 )
    goto LABEL_12;
  this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform(v15, 0LL);
  v17 = this;
  if ( !byte_4B109C1 )
  {
    this = (BattleCommandComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, prefab, v16);
    byte_4B109C1 = 1;
  }
  if ( !v17
    || (UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v17,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL),
        (this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform(v15, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(this, prefab);
  }
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v20, 0LL);
  return v15;
}


void __fastcall BattleCommandComponent__HideAndCancelCountUpFinishEffect(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  DrumRollLabel_o *criticallabel; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *countUpFinishEffect; // x20
  UnityEngine_GameObject_o **p_countUpFinishEffect; // x19
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B18AC9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18AC9 = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_10;
  DrumRollLabel__CancelFinishCallback(criticallabel, 0LL, 0LL);
  countUpFinishEffect = (UnityEngine_Object_o *)this->fields.countUpFinishEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(countUpFinishEffect, 0LL, 0LL) )
  {
    criticallabel = (DrumRollLabel_o *)this->fields.spawner;
    if ( criticallabel )
    {
      p_countUpFinishEffect = &this->fields.countUpFinishEffect;
      Spawner__Despawn((Spawner_o *)criticallabel, *p_countUpFinishEffect, 1, 0LL);
      *p_countUpFinishEffect = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)p_countUpFinishEffect, 0LL, v8, v9, v10, v11, v12, v13);
      return;
    }
LABEL_10:
    sub_1BCAA3C(criticallabel, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__HidePowerUpValueLabelActive(
        BattleCommandComponent_o *this,
        bool isCommandCardUnderIcon,
        const MethodInfo *method)
{
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *powerUpCardValue; // x0

  if ( (byte_4B18B0C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isCommandCardUnderIcon, method);
    byte_4B18B0C = 1;
  }
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isCommandCardUnderIcon);
  if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0LL, 0LL) )
  {
    powerUpCardValue = (UnityEngine_Component_o *)this->fields.powerUpCardValue;
    if ( powerUpCardValue )
    {
      powerUpCardValue = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(powerUpCardValue, 0LL);
      if ( powerUpCardValue )
      {
        if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)powerUpCardValue, 0LL)
          || !isCommandCardUnderIcon )
        {
          return;
        }
        powerUpCardValue = (UnityEngine_Component_o *)this->fields.powerUpCardValue;
        if ( powerUpCardValue )
        {
          powerUpCardValue = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(powerUpCardValue, 0LL);
          if ( powerUpCardValue )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)powerUpCardValue, 0, 0LL);
            return;
          }
        }
      }
    }
    sub_1BCAA3C(powerUpCardValue, v6);
  }
}


void __fastcall BattleCommandComponent__InitDonotActCardSprite(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *donotActCardSprite; // x20
  __int64 v17; // x1
  BattleDataDefine_c *v18; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v21; // x1
  UISprite_o *v22; // x20

  if ( (byte_4B18AC3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, method, v2);
    sub_1BCA7E0(&AssetManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_3251/*"BattleAssetUIAtlas"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_20298/*"icon_cardsealed_block"*/, v14, v15);
    byte_4B18AC3 = 1;
  }
  donotActCardSprite = (UnityEngine_Object_o *)this->fields.donotActCardSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(donotActCardSprite, 0LL, 0LL) )
  {
    v18 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v17);
      v18 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v18->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v17);
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
    if ( !AssetStorage
      || (AssetStorage = (AssetData_o *)AssetData__GetObject_object__49237568(
                                          AssetStorage,
                                          (System_String_o *)StringLiteral_3251/*"BattleAssetUIAtlas"*/,
                                          (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696)) == 0LL
      || (v22 = this->fields.donotActCardSprite,
          AssetStorage = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)AssetStorage,
                                          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !v22)
      || (UISprite__set_atlas(v22, (UIAtlas_o *)AssetStorage, 0LL),
          (AssetStorage = (AssetData_o *)this->fields.donotActCardSprite) == 0LL) )
    {
      sub_1BCAA3C(AssetStorage, v21);
    }
    UnityEngine_Object__set_name((UnityEngine_Object_o *)AssetStorage, (System_String_o *)StringLiteral_20298/*"icon_cardsealed_block"*/, 0LL);
  }
}


void __fastcall BattleCommandComponent__InitTreasureDeviceErrorAnimation(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  BattleDataDefine_c *v16; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v19; // x1
  UnityEngine_Object_o *Object_38483832; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x20
  Il2CppObject *Component_object; // x21
  __int64 v24; // x1
  Il2CppObject *v25; // x19

  if ( (byte_4B18AC2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_AnimationClip_TypeInfo, method, v2);
    sub_1BCA7E0(&AssetManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Animation___, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_16947/*"anim_erroraction"*/, v14, v15);
    byte_4B18AC2 = 1;
  }
  v16 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
    v16 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v16->static_fields->ASSET_BATTLE_COMMON;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
  if ( !AssetStorage )
    goto LABEL_29;
  Object_38483832 = AssetData__GetObject_38483832(AssetStorage, (System_String_o *)StringLiteral_16947/*"anim_erroraction"*/, 0LL);
  if ( Object_38483832 )
  {
    if ( (UnityEngine_AnimationClip_c *)Object_38483832->klass == UnityEngine_AnimationClip_TypeInfo )
      v22 = Object_38483832;
    else
      v22 = 0LL;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( !UnityEngine_Object__op_Equality(v22, 0LL, 0LL) )
  {
    this->fields.isSettedTreasureDeviceErrorAnim = 1;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v25 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)AssetStorage & 1) != 0 )
    {
      if ( v22 )
      {
        AssetStorage = (AssetData_o *)UnityEngine_Object__get_name(v22, 0LL);
        if ( Component_object )
        {
          SimpleAnimation__AddClip(
            (SimpleAnimation_o *)Component_object,
            (UnityEngine_AnimationClip_o *)v22,
            (System_String_o *)AssetStorage,
            0LL);
          return;
        }
      }
LABEL_29:
      sub_1BCAA3C(AssetStorage, v19);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0LL, 0LL);
    if ( ((unsigned __int8)AssetStorage & 1) != 0 )
    {
      if ( !v22 )
        goto LABEL_29;
      AssetStorage = (AssetData_o *)UnityEngine_Object__get_name(v22, 0LL);
      if ( !v25 )
        goto LABEL_29;
      UnityEngine_Animation__AddClip(
        (UnityEngine_Animation_o *)v25,
        (UnityEngine_AnimationClip_o *)v22,
        (System_String_o *)AssetStorage,
        0LL);
    }
  }
}


void __fastcall BattleCommandComponent__InitTreasureDeviceErrorSpriteMark(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *treasureDeviceErrorSprite; // x20
  __int64 v17; // x1
  BattleDataDefine_c *v18; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x1

  if ( (byte_4B18AC1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, method, v2);
    sub_1BCA7E0(&AssetManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_3251/*"BattleAssetUIAtlas"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_20356/*"icon_error"*/, v14, v15);
    byte_4B18AC1 = 1;
  }
  treasureDeviceErrorSprite = (UnityEngine_Object_o *)this->fields.treasureDeviceErrorSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(treasureDeviceErrorSprite, 0LL, 0LL) )
  {
    v18 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v17);
      v18 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v18->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v17);
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
    if ( !AssetStorage
      || (AssetStorage = (AssetData_o *)AssetData__GetObject_object__49237568(
                                          AssetStorage,
                                          (System_String_o *)StringLiteral_3251/*"BattleAssetUIAtlas"*/,
                                          (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696)) == 0LL
      || (AssetStorage = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)AssetStorage,
                                          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.treasureDeviceErrorSprite)
      || (UISprite__set_atlas(this->fields.treasureDeviceErrorSprite, (UIAtlas_o *)AssetStorage, 0LL),
          (AssetStorage = (AssetData_o *)this->fields.treasureDeviceErrorSprite) == 0LL) )
    {
      sub_1BCAA3C(AssetStorage, v21);
    }
    UISprite__set_spriteName((UISprite_o *)AssetStorage, (System_String_o *)StringLiteral_20356/*"icon_error"*/, 0LL);
    BattleCommandComponent__SetConfWindowTreasureDeviceErrorMark(this, v22);
  }
}


void __fastcall BattleCommandComponent__InitUnusableMarks(BattleCommandComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattleCommandComponent_o *v4; // x0
  const MethodInfo *v5; // x3
  BattleCommandComponent_o *v6; // x0
  const MethodInfo *v7; // x3
  BattleCommandComponent_o *v8; // x0
  const MethodInfo *v9; // x3
  BattleCommandComponent_o *v10; // x0
  const MethodInfo *v11; // x3
  BattleCommandComponent_o *v12; // x0
  const MethodInfo *v13; // x3
  BattleCommandComponent_o *v14; // x0
  const MethodInfo *v15; // x3
  BattleCommandComponent_o *v16; // x0
  const MethodInfo *v17; // x3
  BattleCommandComponent_o *v18; // x0
  const MethodInfo *v19; // x3
  BattleCommandComponent_o *v20; // x0
  const MethodInfo *v21; // x3
  BattleCommandComponent_o *v22; // x0
  const MethodInfo *v23; // x3
  BattleCommandComponent_o *v24; // x0
  const MethodInfo *v25; // x3

  BattleCommandComponent__SetActiveComponent(this, (UnityEngine_Component_o *)this->fields.sealedSprite, 0, v2);
  BattleCommandComponent__SetActiveComponent(
    v4,
    (UnityEngine_Component_o *)this->fields.unusableShortageStarSprite,
    0,
    v5);
  BattleCommandComponent__SetActiveComponent(v6, (UnityEngine_Component_o *)this->fields.unusableNpSprite, 0, v7);
  BattleCommandComponent__SetActiveComponent(v8, (UnityEngine_Component_o *)this->fields.donotsleepSprite, 0, v9);
  BattleCommandComponent__SetActiveComponent(v10, (UnityEngine_Component_o *)this->fields.displayRemainingTurn, 0, v11);
  BattleCommandComponent__SetActiveComponent(v12, (UnityEngine_Component_o *)this->fields.donotactSprite, 0, v13);
  BattleCommandComponent__SetActiveComponent(v14, (UnityEngine_Component_o *)this->fields.dontuseSprite, 0, v15);
  BattleCommandComponent__SetActiveComponent(v16, (UnityEngine_Component_o *)this->fields.donotActWithTypeSp, 0, v17);
  BattleCommandComponent__SetActiveComponent(v18, (UnityEngine_Component_o *)this->fields.donotPermanentSleep, 0, v19);
  BattleCommandComponent__SetActiveComponent(
    v20,
    (UnityEngine_Component_o *)this->fields.treasureDeviceErrorSprite,
    0,
    v21);
  BattleCommandComponent__SetActiveComponent(v22, (UnityEngine_Component_o *)this->fields.donotActTypeSprite, 0, v23);
  BattleCommandComponent__SetActiveComponent(v24, (UnityEngine_Component_o *)this->fields.donotActCardSprite, 0, v25);
}


void __fastcall BattleCommandComponent__Initialize(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  struct Spawner_o **p_spawner; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  UnityEngine_Object_o *spawner; // x21
  const MethodInfo *v16; // x1
  Spawner_o *v17; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1

  if ( (byte_4B18AC4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_Spawner__get_Instance__, v4, v5);
    byte_4B18AC4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  p_spawner = &this->fields.spawner;
  this->fields.spawner = (struct Spawner_o *)Instance;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.spawner, (int64_t)Instance, v8, v9, v10, v11, v12, v13);
  spawner = (UnityEngine_Object_o *)this->fields.spawner;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL) )
  {
    v17 = *p_spawner;
    if ( !*p_spawner
      || (Spawner__Precache_38679812(v17, (UnityEngine_Object_o *)this->fields.effect_cricomplete, 5, 0LL),
          (v17 = this->fields.spawner) == 0LL) )
    {
      sub_1BCAA3C(v17, v16);
    }
    Spawner__Precache_38679812(v17, (UnityEngine_Object_o *)this->fields.effect_fullcricomplete, 5, 0LL);
  }
  BattleCommandComponent__InitTreasureDeviceErrorSpriteMark(this, v16);
  BattleCommandComponent__InitTreasureDeviceErrorAnimation(this, v18);
  BattleCommandComponent__InitDonotActCardSprite(this, v19);
}


bool __fastcall BattleCommandComponent__IsAnimationBusy(
        BattleCommandComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Component_object; // x21
  __int64 v10; // x1
  Il2CppObject *v11; // x20
  _BOOL8 v12; // x0
  __int64 v13; // x1

  if ( (byte_4B18B15 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Animation___, animationName, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B18B15 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v11 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v12 )
  {
    if ( Component_object )
      return SimpleAnimation__IsPlaying((SimpleAnimation_o *)Component_object, animationName, 0LL);
LABEL_14:
    sub_1BCAA3C(v12, v13);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
  if ( !v12 )
    return 0;
  if ( !v11 )
    goto LABEL_14;
  return UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)v11, animationName, 0LL);
}


bool __fastcall BattleCommandComponent__IsMaxCritical(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1BCAA3C(0LL, method);
  return BattleCommandData__checkCriticalMax(data, 0LL);
}


bool __fastcall BattleCommandComponent__IsMaxViewCritical(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *criticalObject; // x0
  struct DrumRollLabel_o *criticallabel; // x8

  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    goto LABEL_6;
  criticalObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(criticalObject, 0LL);
  if ( ((unsigned __int8)criticalObject & 1) != 0 )
  {
    criticallabel = this->fields.criticallabel;
    if ( criticallabel )
      return criticallabel->fields.nowvalue == 100;
LABEL_6:
    sub_1BCAA3C(criticalObject, method);
  }
  return 0;
}


bool __fastcall BattleCommandComponent__IsValidVoiceType(
        BattleCommandComponent_o *this,
        System_String_o *voiceTypeId,
        const MethodInfo *method)
{
  BattleCommandComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleServantData_o *svtData; // x8
  __int64 v8; // x21
  __int64 v9; // x22
  int32_t v10; // w21
  struct BattleServantData_o *v11; // x8
  int32_t v12; // w20
  int32_t overwriteSvtVoiceId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  v4 = this;
  if ( (byte_4B18AE8 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, voiceTypeId, method);
    this = (BattleCommandComponent_o *)sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v5, v6);
    byte_4B18AE8 = 1;
  }
  svtData = v4->fields.svtData;
  if ( !svtData )
    goto LABEL_11;
  v9 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, voiceTypeId);
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  this = (BattleCommandComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v15, 0LL);
  if ( !v4->fields.svtData
    || (v10 = (int)this,
        this = (BattleCommandComponent_o *)BattleServantData__getDispLimitCount(v4->fields.svtData, 1, 0LL),
        (v11 = v4->fields.svtData) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(this, voiceTypeId);
  }
  v12 = (int)this;
  overwriteSvtVoiceId = v11->fields.overwriteSvtVoiceId;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, voiceTypeId);
  return ServantAssetLoadManager__checkBattleVoice(v10, v12, overwriteSvtVoiceId, voiceTypeId, 0, 0LL);
}


void __fastcall BattleCommandComponent__OnClickEvent(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *target; // x20
  struct BattleCommandData_o *data; // x8
  UnityEngine_GameObject_o *v10; // x19
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  int32_t markindex; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B18AE5 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_24249/*"touchCommandCard"*/, v6, v7);
    byte_4B18AE5 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( data )
    {
      v10 = this->fields.target;
      markindex = data->fields.markindex;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &markindex);
      if ( !v10 )
        sub_1BCAA3C(v11, v12);
      UnityEngine_GameObject__SendMessage_70135616(v10, (System_String_o *)StringLiteral_24249/*"touchCommandCard"*/, v11, 0LL);
    }
  }
}


void __fastcall BattleCommandComponent__OnLongPressEvent(
        BattleCommandComponent_o *this,
        UnityEngine_Object_o *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *target; // x20
  struct BattleCommandData_o *data; // x8
  UnityEngine_GameObject_o *v10; // x19
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  int32_t markindex; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B18AE6 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, obj, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_8602/*"LongPress"*/, v6, v7);
    byte_4B18AE6 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( data )
    {
      v10 = this->fields.target;
      markindex = data->fields.markindex;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &markindex);
      if ( !v10 )
        sub_1BCAA3C(v11, v12);
      UnityEngine_GameObject__SendMessage_70135616(v10, (System_String_o *)StringLiteral_8602/*"LongPress"*/, v11, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__PlayAnimation(
        BattleCommandComponent_o *this,
        System_String_o *animationName,
        float simpleAnimationTime,
        const MethodInfo *method)
{
  long double v4; // q8
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Component_object; // x20
  __int64 v14; // x1
  Il2CppObject *v15; // x21
  UnityEngine_AnimationState_o *Item; // x0
  __int64 v17; // x1
  UnityEngine_AnimationState_c *klass; // x8
  UnityEngine_AnimationState_o *v19; // x21
  __int64 v20; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v22; // x0

  v4 = *(long double *)&simpleAnimationTime;
  if ( (byte_4B18AD1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Animation___, animationName, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v11, v12);
    byte_4B18AD1 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v15 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  Item = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)Item & 1) == 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    Item = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
    if ( ((unsigned __int8)Item & 1) == 0 )
      return;
    if ( v15 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v15, 0, 0LL);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v15, 1, 0LL);
      Item = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v15, animationName, 0LL);
      if ( Item )
      {
        UnityEngine_AnimationState__set_time(Item, *(float *)&v4, 0LL);
        UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)v15, animationName, 0LL);
        return;
      }
    }
LABEL_22:
    sub_1BCAA3C(Item, v17);
  }
  if ( !Component_object )
    goto LABEL_22;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0LL);
  Item = (UnityEngine_AnimationState_o *)SimpleAnimation__get_Item(
                                           (SimpleAnimation_o *)Component_object,
                                           animationName,
                                           0LL);
  if ( !Item )
    goto LABEL_22;
  klass = Item->klass;
  v19 = Item;
  v20 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v20;
      p_offset += 2;
      if ( !v20 )
        goto LABEL_12;
    }
    v22 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_12:
    v22 = sub_1C1C7C0(Item, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_AnimationState_o *, _QWORD, long double))v22)(v19, *(_QWORD *)(v22 + 8), v4);
  SimpleAnimation__Play_64539336((SimpleAnimation_o *)Component_object, animationName, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__PlayStarSe(
        BattleCommandComponent_o *this,
        float preDelayTime,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  BattleCommandComponent__PlayStarSe_d__161_o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B18ADE & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandComponent__PlayStarSe_d__161_TypeInfo, method, v3);
    byte_4B18ADE = 1;
  }
  v6 = (BattleCommandComponent__PlayStarSe_d__161_o *)sub_1BCAA2C(
                                                        BattleCommandComponent__PlayStarSe_d__161_TypeInfo,
                                                        method,
                                                        v3,
                                                        v4);
  BattleCommandComponent__PlayStarSe_d__161___ctor(v6, 0, 0LL);
  if ( !v6 )
    sub_1BCAA3C(v7, v8);
  v6->fields.preDelayTime = preDelayTime;
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleCommandComponent__PlayTDErrorAnimation(
        BattleCommandComponent_o *this,
        System_Action_o *tdErrorAfterAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  _BOOL4 IsAnimationBusy; // w22
  struct System_Action_o **p_tdErrorAfterAction; // x20
  System_Delegate_o *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x8
  System_Action_c *v21; // x1
  __int64 v22; // x1
  BattleServantData_o *svtData; // x0
  struct BattleServantData_o *v24; // x8
  System_String_o *TDErrorCardSelectVoiceSe; // x0
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x2

  if ( (byte_4B18B16 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, tdErrorAfterAction, method);
    sub_1BCA7E0(&StringLiteral_23307/*"se_ba41"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_16947/*"anim_erroraction"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_16945/*"anim_commandfloat"*/, v9, v10);
    byte_4B18B16 = 1;
  }
  IsAnimationBusy = BattleCommandComponent__IsAnimationBusy(this, (System_String_o *)StringLiteral_16945/*"anim_commandfloat"*/, method);
  p_tdErrorAfterAction = &this->fields.tdErrorAfterAction;
  v13 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.tdErrorAfterAction,
          (System_Delegate_o *)tdErrorAfterAction,
          0LL);
  v20 = (int64_t)v13;
  if ( !v13 )
    goto LABEL_7;
  v21 = System_Action_TypeInfo;
  if ( (System_Action_c *)v13->klass != System_Action_TypeInfo
    || (*p_tdErrorAfterAction = (struct System_Action_o *)v13, (System_Action_c *)v13->klass != v21) )
  {
    sub_1BCACFC(v13);
LABEL_7:
    *p_tdErrorAfterAction = (struct System_Action_o *)v20;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tdErrorAfterAction, v20, v14, v15, v16, v17, v18, v19);
  if ( !this->fields.isSettedTreasureDeviceErrorAnim || !IsAnimationBusy )
  {
    if ( *p_tdErrorAfterAction )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))(*p_tdErrorAfterAction)->fields.m_target)(
        (*p_tdErrorAfterAction)->fields.original_method_info,
        *(_QWORD *)&(*p_tdErrorAfterAction)->fields.extra_arg);
  }
  else
  {
    svtData = this->fields.svtData;
    if ( !svtData
      || (BattleServantData__AddTDErrorTouchCount(svtData, 0LL), (v24 = this->fields.svtData) == 0LL)
      || (svtData = (BattleServantData_o *)v24->fields.deckSvt) == 0LL )
    {
      sub_1BCAA3C(svtData, v22);
    }
    TDErrorCardSelectVoiceSe = BattleDeckServantData__GetTDErrorCardSelectVoiceSe(
                                 (BattleDeckServantData_o *)svtData,
                                 (System_String_o *)StringLiteral_23307/*"se_ba41"*/,
                                 0LL);
    BattleCommandComponent__PlayTDErrorVoiceSe(this, TDErrorCardSelectVoiceSe, -1, v26);
    BattleCommandComponent__PlayAnimation(this, (System_String_o *)StringLiteral_16947/*"anim_erroraction"*/, 0.0, v27);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleCommandComponent__PlayTDErrorVoiceSe(
        BattleCommandComponent_o *this,
        System_String_o *voiceSeId,
        int32_t voiceUniqueId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  System_String_o *v20; // x22
  BattleServantData_o *svtData; // x0
  int32_t v22; // w22
  int32_t DispLimitCount; // w23
  int32_t VoicePrefix; // w0
  __int64 v25; // x1
  BattleCommandComponent_c *v26; // x8
  int v27; // w24
  struct BattleServantData_o *v28; // x8
  System_String_o *v29; // x19
  int32_t overwriteSvtVoiceId; // w21
  Il2CppObject *v31; // x20
  Il2CppObject *v32; // x0
  BattleCommandComponent_c *v33; // x0
  __int64 v34; // x1
  BattleCommandComponent_c *v35; // x0
  _QWORD *v36; // x8
  System_Reflection_MethodBase_o *v37; // x0
  int v39; // [xsp+8h] [xbp-48h] BYREF
  int32_t v40; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B18B13 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleCommandComponent_PlayTDErrorVoiceSe__, voiceSeId, *(_QWORD *)&voiceUniqueId);
    sub_1BCA7E0(&BattleCommandComponent_TypeInfo, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_25352/*"{0}_{1:D0}_{2}"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    byte_4B18B13 = 1;
  }
  v20 = 0LL;
  if ( !System_String__IsNullOrEmpty(voiceSeId, 0LL) )
  {
    svtData = (BattleServantData_o *)BattleCommandComponent_TypeInfo;
    if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, v19);
    if ( !voiceSeId )
      goto LABEL_27;
    if ( System_String__StartsWith(voiceSeId, BattleCommandComponent_TypeInfo->static_fields->voiceIdPrefix, 0LL) )
    {
      svtData = this->fields.svtData;
      if ( svtData )
      {
        svtData = (BattleServantData_o *)BattleServantData__getSvtId(svtData, 0LL);
        if ( this->fields.svtData )
        {
          v22 = (int)svtData;
          DispLimitCount = BattleServantData__getDispLimitCount(this->fields.svtData, 1, 0LL);
          svtData = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( svtData )
          {
            VoicePrefix = ServantAssetLoadManager__getVoicePrefix(
                            (ServantAssetLoadManager_o *)svtData,
                            v22,
                            DispLimitCount,
                            0LL);
            v26 = BattleCommandComponent_TypeInfo;
            v27 = VoicePrefix;
            if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, v25);
              v26 = BattleCommandComponent_TypeInfo;
            }
            svtData = (BattleServantData_o *)System_String__Replace_62420848(
                                               voiceSeId,
                                               v26->static_fields->voiceIdPrefix,
                                               (System_String_o *)StringLiteral_1/*""*/,
                                               0LL);
            v28 = this->fields.svtData;
            if ( v28 )
            {
              v29 = (System_String_o *)svtData;
              overwriteSvtVoiceId = v28->fields.overwriteSvtVoiceId;
              if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v19);
              ServantAssetLoadManager__playBattleVoice(
                v22,
                DispLimitCount,
                overwriteSvtVoiceId,
                v29,
                1.0,
                0LL,
                voiceUniqueId,
                0,
                0LL);
              v40 = v22;
              v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
              v39 = v27;
              v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
              return System_String__Format_62415660(
                       (System_String_o *)StringLiteral_25352/*"{0}_{1:D0}_{2}"*/,
                       v31,
                       v32,
                       (Il2CppObject *)v29,
                       0LL);
            }
          }
        }
      }
LABEL_27:
      sub_1BCAA3C(svtData, v19);
    }
    v33 = BattleCommandComponent_TypeInfo;
    if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, v19);
      v33 = BattleCommandComponent_TypeInfo;
    }
    if ( System_String__StartsWith(voiceSeId, v33->static_fields->seIdPrefix, 0LL) )
    {
      v35 = BattleCommandComponent_TypeInfo;
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, v34);
        v35 = BattleCommandComponent_TypeInfo;
      }
      v20 = System_String__Replace_62420848(
              voiceSeId,
              v35->static_fields->seIdPrefix,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      v36 = Method_BattleCommandComponent_PlayTDErrorVoiceSe__;
      if ( (*((_BYTE *)Method_BattleCommandComponent_PlayTDErrorVoiceSe__ + 83) & 2) != 0 )
        v36 = (_QWORD *)sub_1BCA7F8(Method_BattleCommandComponent_PlayTDErrorVoiceSe__);
      v37 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v36, v36[4]);
      OverwriteAssetSoundName__PlaySe(v37, v20, 0LL);
    }
    else
    {
      return voiceSeId;
    }
  }
  return v20;
}


void __fastcall BattleCommandComponent__PlayVoiceSe(
        BattleCommandComponent_o *this,
        float waitSeconds,
        const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0
  const MethodInfo *v6; // x3
  struct BattleCommandData_o *data; // x8
  System_String_o *v8; // x0
  const MethodInfo *v9; // x2
  System_Collections_IEnumerator_o *v10; // x1

  svtData = this->fields.svtData;
  if ( !svtData
    || (svtData = (BattleServantData_o *)BattleServantData__GetCurrentTDErrorStatusVoiceSe(svtData, 0LL),
        (data = this->fields.data) == 0LL) )
  {
    sub_1BCAA3C(svtData, method);
  }
  v8 = BattleCommandComponent__PlayTDErrorVoiceSe(this, (System_String_o *)svtData, data->fields.uniqueId, v6);
  v10 = BattleCommandComponent__WaitForErrorViewFinished(this, waitSeconds, v8, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
}


void __fastcall BattleCommandComponent__ReleaseNobleGaugeEffect(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *nobleGaugeEffect; // x20
  __int64 v7; // x1
  PartyOrganizationUtility_o *p_nobleGaugeEffect; // x19
  UnityEngine_GameObject_o *klass; // x20
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B18AD5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&iTween_TypeInfo, v4, v5);
    byte_4B18AD5 = 1;
  }
  nobleGaugeEffect = (UnityEngine_Object_o *)this->fields.nobleGaugeEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(nobleGaugeEffect, 0LL, 0LL) )
  {
    p_nobleGaugeEffect = (PartyOrganizationUtility_o *)&this->fields.nobleGaugeEffect;
    klass = (UnityEngine_GameObject_o *)p_nobleGaugeEffect->klass;
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v7);
    iTween__Stop_61049892(klass, 0LL);
    v11 = (UnityEngine_Object_o *)p_nobleGaugeEffect->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    UnityEngine_Object__Destroy_70154244(v11, 0LL);
    p_nobleGaugeEffect->klass = 0LL;
    sub_1BCA784(p_nobleGaugeEffect, 0LL, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall BattleCommandComponent__ResetBoostedCriticalRate(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *criticalObject; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  this->fields.boostedCriticalRate = 0;
  BattleCommandComponent__ResetCriticalLabelColor(this, method);
  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    sub_1BCAA3C(0LL, v3);
  if ( UnityEngine_GameObject__get_activeInHierarchy(criticalObject, 0LL) )
    BattleCommandComponent__HideAndCancelCountUpFinishEffect(this, v5);
  BattleCommandComponent__updateCount(this, 1, v6);
}


void __fastcall BattleCommandComponent__ResetBoostedCriticalRateLocal(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  this->fields.boostedCriticalRate = 0;
  BattleCommandComponent__ResetCriticalLabelColor(this, method);
}


void __fastcall BattleCommandComponent__ResetCardBuffIconAlphaAnim(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  __int64 v5; // x1
  struct UISprite_o *v6; // x0

  if ( (byte_4B18B08 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18B08 = 1;
  }
  this->fields.cardBuffListIndex = 0;
  *(_QWORD *)&this->fields.cardBuffAlphaFor = 1065353216LL;
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(specialCardBuffIcon, 0LL, 0LL) )
  {
    v6 = this->fields.specialCardBuffIcon;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))v6->klass->vtable._8_set_alpha.method)(
      v6,
      v6->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
  }
  this->fields.isChangedBuffIcon = 0;
}


void __fastcall BattleCommandComponent__ResetCriticalLabelColor(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  void *criticallabel; // x0
  int v7; // w8
  void *v8; // x20
  unsigned int v9; // w23
  UILabel_o *v10; // x21
  UILabel_o *criticalPercentLabel; // x20

  if ( (byte_4B18ACB & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76859144, v4, v5);
    byte_4B18ACB = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_17;
  criticallabel = UnityEngine_Component__GetComponentsInChildren_object_(
                    (UnityEngine_Component_o *)criticallabel,
                    1,
                    (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____76859144);
  if ( !criticallabel )
    goto LABEL_17;
  v7 = *((_DWORD *)criticallabel + 6);
  v8 = criticallabel;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v7 )
        sub_1BCAA44(criticallabel, method);
      criticallabel = BattleCommandComponent_TypeInfo;
      v10 = (UILabel_o *)*((_QWORD *)v8 + (int)v9 + 4);
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, method);
        criticallabel = BattleCommandComponent_TypeInfo;
      }
      if ( !v10 )
        break;
      UILabel__set_gradientTop(v10, *(UnityEngine_Color_o *)(*((_QWORD *)criticallabel + 23) + 24LL), 0LL);
      UILabel__set_gradientBottom(
        v10,
        BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientBottomOnDefault,
        0LL);
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        goto LABEL_12;
    }
LABEL_17:
    sub_1BCAA3C(criticallabel, method);
  }
LABEL_12:
  criticallabel = BattleCommandComponent_TypeInfo;
  criticalPercentLabel = this->fields.criticalPercentLabel;
  if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, method);
    criticallabel = BattleCommandComponent_TypeInfo;
  }
  if ( !criticalPercentLabel )
    goto LABEL_17;
  UILabel__set_gradientTop(criticalPercentLabel, *(UnityEngine_Color_o *)(*((_QWORD *)criticallabel + 23) + 24LL), 0LL);
  criticallabel = this->fields.criticalPercentLabel;
  if ( !criticallabel )
    goto LABEL_17;
  UILabel__set_gradientBottom(
    (UILabel_o *)criticallabel,
    BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientBottomOnDefault,
    0LL);
}


void __fastcall BattleCommandComponent__ResetPassStarCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1BCAA3C(0LL, method);
  BattleCommandData__ResetPassStar(data, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetActiveComponent(
        BattleCommandComponent_o *this,
        UnityEngine_Component_o *component,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4B18AFE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, component, value);
    byte_4B18AFE = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, component);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)component,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !component || (gameObject = UnityEngine_Component__get_gameObject(component, 0LL)) == 0LL )
      sub_1BCAA3C(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, value, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetActiveSpecialCardBuffIcon(
        BattleCommandComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4B18B05 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, active, method);
    byte_4B18B05 = 1;
  }
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, active);
  if ( UnityEngine_Object__op_Inequality(specialCardBuffIcon, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1BCAA3C(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, active, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetCardBuffAlphaAnimFlag(
        BattleCommandComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  bool v4; // w21
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  v4 = active;
  if ( (byte_4B18B04 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, active, method);
    byte_4B18B04 = 1;
  }
  this->fields.isCardBuffAlphaAnim = v4;
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, active);
  if ( UnityEngine_Object__op_Inequality(specialCardBuffIcon, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1BCAA3C(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetCardColor(
        BattleCommandComponent_o *this,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  __int64 v3; // x2
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *facetex; // x20
  __int64 v10; // x1
  UIWidget_o *v11; // x0
  UnityEngine_Object_o *bg; // x20
  UnityEngine_Object_o *codeSprite; // x20
  UnityEngine_Object_o *codeTexture; // x20
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  __int64 v17; // x1
  UnityEngine_Object_o *powerUpCardIcon; // x20
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4B18AEC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B18AEC = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v11 = (UIWidget_o *)this->fields.facetex;
    if ( !v11 )
      goto LABEL_29;
    v19.fields.r = r;
    v19.fields.g = g;
    v19.fields.b = b;
    v19.fields.a = a;
    UIWidget__set_color(v11, v19, 0LL);
  }
  bg = (UnityEngine_Object_o *)this->fields.bg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(bg, 0LL, 0LL) )
  {
    v11 = (UIWidget_o *)this->fields.bg;
    if ( !v11 )
      goto LABEL_29;
    v20.fields.r = r;
    v20.fields.g = g;
    v20.fields.b = b;
    v20.fields.a = a;
    UIWidget__set_color(v11, v20, 0LL);
  }
  codeSprite = (UnityEngine_Object_o *)this->fields.codeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(codeSprite, 0LL, 0LL) )
  {
    v11 = (UIWidget_o *)this->fields.codeSprite;
    if ( !v11 )
      goto LABEL_29;
    v21.fields.r = r;
    v21.fields.g = g;
    v21.fields.b = b;
    v21.fields.a = a;
    UIWidget__set_color(v11, v21, 0LL);
  }
  codeTexture = (UnityEngine_Object_o *)this->fields.codeTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(codeTexture, 0LL, 0LL) )
  {
    v11 = (UIWidget_o *)this->fields.codeTexture;
    if ( !v11 )
      goto LABEL_29;
    v22.fields.r = r;
    v22.fields.g = g;
    v22.fields.b = b;
    v22.fields.a = a;
    UIWidget__set_color(v11, v22, 0LL);
  }
  v23.fields.r = r;
  v23.fields.g = g;
  v23.fields.b = b;
  v23.fields.a = a;
  BattleCommandComponent__SetCommandCodeActive(this, v23, 0, v15);
  v24.fields.r = r;
  v24.fields.g = g;
  v24.fields.b = b;
  v24.fields.a = a;
  BattleCommandComponent__SetCommandAssistActive(this, v24, 0, v16);
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(powerUpCardIcon, 0LL, 0LL) )
  {
    v11 = (UIWidget_o *)this->fields.powerUpCardIcon;
    if ( v11 )
    {
      v25.fields.b = b;
      v25.fields.a = a;
      v25.fields.r = r;
      v25.fields.g = g;
      UIWidget__set_color(v11, v25, 0LL);
      return;
    }
LABEL_29:
    sub_1BCAA3C(v11, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetCommandAssistActive(
        BattleCommandComponent_o *this,
        UnityEngine_Color_o color,
        bool isFirst,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s11
  float r; // s10
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *assistChargeTurnLabel; // x21
  __int64 v15; // x1
  UnityEngine_Object_o *assistRemainingTurnLabel; // x21
  __int64 v17; // x1
  void *buffData; // x0
  __int64 v19; // x1
  UnityEngine_Object_o *assistSprite; // x21
  BattleCommandData_o *data; // x0
  struct BattleServantData_o *svtData; // x8
  int v23; // w8
  int v24; // w9
  _DWORD *v25; // x21
  struct BattleCommandData_o *v26; // x10
  int32_t v27; // w21
  int v28; // t1
  UILabel_o *v29; // x22
  __int64 v30; // x1
  UILabel_o *v31; // x21
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4B18AEE & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, isFirst, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_2853/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, v12, v13);
    byte_4B18AEE = 1;
  }
  if ( this->fields.isInBattle )
  {
    if ( (float)((float)(a * a) + (float)((float)(b * b) + (float)((float)(r * r) + (float)(g * g)))) < 1.0e-10 )
    {
      r = 1.0;
      g = 1.0;
      b = 1.0;
      a = 1.0;
    }
    assistChargeTurnLabel = (UnityEngine_Object_o *)this->fields.assistChargeTurnLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isFirst);
    if ( !UnityEngine_Object__op_Equality(assistChargeTurnLabel, 0LL, 0LL) )
    {
      assistRemainingTurnLabel = (UnityEngine_Object_o *)this->fields.assistRemainingTurnLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      if ( !UnityEngine_Object__op_Equality(assistRemainingTurnLabel, 0LL, 0LL) )
      {
        buffData = this->fields.assistChargeTurnLabel;
        if ( !buffData )
          goto LABEL_48;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0LL);
        buffData = this->fields.assistRemainingTurnLabel;
        if ( !buffData )
          goto LABEL_48;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0LL);
        assistSprite = (UnityEngine_Object_o *)this->fields.assistSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
        if ( !UnityEngine_Object__op_Equality(assistSprite, 0LL, 0LL) )
        {
          buffData = this->fields.assistSprite;
          if ( !buffData )
            goto LABEL_48;
          v32.fields.r = r;
          v32.fields.g = g;
          v32.fields.b = b;
          v32.fields.a = a;
          UIWidget__set_color((UIWidget_o *)buffData, v32, 0LL);
          data = this->fields.data;
          if ( data )
          {
            if ( BattleCommandData__IsEnableCommandAssist(data, 0LL) )
            {
              svtData = this->fields.svtData;
              if ( svtData )
              {
                buffData = svtData->fields.buffData;
                if ( !buffData )
                  goto LABEL_48;
                buffData = BattleBuffData__getPassiveList((BattleBuffData_o *)buffData, 1, 0LL);
                if ( !buffData )
                  goto LABEL_48;
                v23 = *((_DWORD *)buffData + 6);
                if ( v23 >= 1 )
                {
                  v24 = 0;
                  while ( 1 )
                  {
                    if ( v23 == v24 )
                      sub_1BCAA44(buffData, v17);
                    v25 = (_DWORD *)*((_QWORD *)buffData + v24 + 4);
                    if ( !v25 )
                      goto LABEL_48;
                    v26 = this->fields.data;
                    if ( !v26 )
                      goto LABEL_48;
                    if ( v25[87] == v26->fields.commandAssistId && v25[88] == v26->fields.servantCardIdsIndex )
                      break;
                    if ( v23 == ++v24 )
                      goto LABEL_41;
                  }
                  v28 = v25[28];
                  v27 = (_DWORD)v25 + 112;
                  if ( v28 >= 1 )
                  {
                    buffData = this->fields.assistSprite;
                    if ( !buffData )
                      goto LABEL_48;
                    v33.fields.r = 0.5;
                    v33.fields.g = 0.5;
                    v33.fields.b = 0.5;
                    v33.fields.a = 1.0;
                    UIWidget__set_color((UIWidget_o *)buffData, v33, 0LL);
                    buffData = this->fields.assistChargeTurnLabel;
                    if ( !buffData )
                      goto LABEL_48;
                    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                    buffData = this->fields.assistRemainingTurnLabel;
                    if ( !buffData )
                      goto LABEL_48;
                    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                    v29 = this->fields.assistChargeTurnLabel;
                    buffData = System_Int32__ToString(v27, 0LL);
                    if ( !v29 )
                      goto LABEL_48;
                    UILabel__set_text(v29, (System_String_o *)buffData, 0LL);
                    v31 = this->fields.assistRemainingTurnLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30);
                    buffData = LocalizationManager__Get((System_String_o *)StringLiteral_2853/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, 0LL);
                    if ( !v31 )
                      goto LABEL_48;
                    UILabel__set_text(v31, (System_String_o *)buffData, 0LL);
                  }
                }
LABEL_41:
                if ( isFirst )
                {
                  buffData = this->fields.assistChargeTurnLabel;
                  if ( buffData )
                  {
                    buffData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffData, 0LL);
                    if ( buffData )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffData, 0, 0LL);
                      buffData = this->fields.assistRemainingTurnLabel;
                      if ( buffData )
                      {
                        buffData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffData, 0LL);
                        if ( buffData )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffData, 0, 0LL);
                          return;
                        }
                      }
                    }
                  }
LABEL_48:
                  sub_1BCAA3C(buffData, v17);
                }
              }
            }
          }
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetCommandAssistView(
        BattleCommandComponent_o *this,
        int32_t commandAssistId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *assistSprite; // x21
  __int64 v14; // x1
  UnityEngine_Behaviour_o *Master_object; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  int32_t EventId; // w21
  UISprite_o *v19; // x20
  __int64 v20; // x1
  System_String_o *v21; // x21

  if ( (byte_4B18AF7 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&commandAssistId, method);
    sub_1BCA7E0(&BattleData_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B18AF7 = 1;
  }
  assistSprite = (UnityEngine_Object_o *)this->fields.assistSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&commandAssistId);
  if ( !UnityEngine_Object__op_Equality(assistSprite, 0LL, 0LL) )
  {
    Master_object = (UnityEngine_Behaviour_o *)this->fields.assistSprite;
    if ( Master_object )
    {
      if ( commandAssistId <= 0 )
        goto LABEL_19;
      UnityEngine_Behaviour__set_enabled(Master_object, 1, 0LL);
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v16);
      EventId = BattleData__GetEventId(0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
      Master_object = (UnityEngine_Behaviour_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
      if ( Master_object )
      {
        Master_object = (UnityEngine_Behaviour_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                     (EventCommandAssistMaster_o *)Master_object,
                                                     EventId,
                                                     commandAssistId,
                                                     -1,
                                                     0,
                                                     0LL);
        if ( Master_object )
        {
          v19 = this->fields.assistSprite;
          v21 = System_Int32__ToString((int)Master_object + 48, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v20);
          if ( AtlasManager__SetEventSprite(v19, v21, 0LL) )
            return;
          Master_object = (UnityEngine_Behaviour_o *)this->fields.assistSprite;
          if ( Master_object )
          {
LABEL_19:
            UnityEngine_Behaviour__set_enabled(Master_object, 0, 0LL);
            return;
          }
        }
      }
    }
    sub_1BCAA3C(Master_object, v14);
  }
}


void __fastcall BattleCommandComponent__SetCommandCardTypeChange(
        BattleCommandComponent_o *this,
        bool active,
        int32_t turn,
        int32_t addOrder,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  BattleCommandComponent__SetSpecialCommandCardBuffData(this, 156, active, turn, addOrder, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetCommandCodeActive(
        BattleCommandComponent_o *this,
        UnityEngine_Color_o color,
        bool isFirst,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s11
  float r; // s10
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *chargeTurnLabel; // x21
  __int64 v15; // x1
  UnityEngine_Object_o *remainingTurnLabel; // x21
  __int64 v17; // x1
  void *buffData; // x0
  __int64 v19; // x1
  UnityEngine_Object_o *codeTexture; // x21
  UnityEngine_Object_o *codeSprite; // x21
  BattleCommandData_o *data; // x0
  struct BattleServantData_o *svtData; // x8
  int v24; // w8
  int v25; // w9
  __int64 v26; // x21
  struct BattleCommandData_o *v27; // x10
  int32_t v28; // w21
  int v29; // t1
  UILabel_o *v30; // x22
  __int64 v31; // x1
  UILabel_o *v32; // x21
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4B18AED & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, isFirst, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_2853/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, v12, v13);
    byte_4B18AED = 1;
  }
  if ( this->fields.isInBattle )
  {
    if ( (float)((float)(a * a) + (float)((float)(b * b) + (float)((float)(r * r) + (float)(g * g)))) < 1.0e-10 )
    {
      r = 1.0;
      g = 1.0;
      b = 1.0;
      a = 1.0;
    }
    chargeTurnLabel = (UnityEngine_Object_o *)this->fields.chargeTurnLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isFirst);
    if ( !UnityEngine_Object__op_Equality(chargeTurnLabel, 0LL, 0LL) )
    {
      remainingTurnLabel = (UnityEngine_Object_o *)this->fields.remainingTurnLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      if ( !UnityEngine_Object__op_Equality(remainingTurnLabel, 0LL, 0LL) )
      {
        buffData = this->fields.chargeTurnLabel;
        if ( !buffData )
          goto LABEL_56;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0LL);
        buffData = this->fields.remainingTurnLabel;
        if ( !buffData )
          goto LABEL_56;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0LL);
        if ( this->fields.isCodeTextureView )
        {
          codeTexture = (UnityEngine_Object_o *)this->fields.codeTexture;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
          if ( UnityEngine_Object__op_Equality(codeTexture, 0LL, 0LL) )
            return;
          buffData = this->fields.codeTexture;
          if ( !buffData )
            goto LABEL_56;
        }
        else
        {
          codeSprite = (UnityEngine_Object_o *)this->fields.codeSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
          if ( UnityEngine_Object__op_Equality(codeSprite, 0LL, 0LL) )
            return;
          buffData = this->fields.codeSprite;
          if ( !buffData )
            goto LABEL_56;
        }
        v33.fields.r = r;
        v33.fields.g = g;
        v33.fields.b = b;
        v33.fields.a = a;
        UIWidget__set_color((UIWidget_o *)buffData, v33, 0LL);
        data = this->fields.data;
        if ( data )
        {
          if ( BattleCommandData__IsEnableCommandCode(data, 0LL) )
          {
            svtData = this->fields.svtData;
            if ( svtData )
            {
              buffData = svtData->fields.buffData;
              if ( !buffData )
                goto LABEL_56;
              buffData = BattleBuffData__getPassiveList((BattleBuffData_o *)buffData, 1, 0LL);
              if ( !buffData )
                goto LABEL_56;
              v24 = *((_DWORD *)buffData + 6);
              if ( v24 >= 1 )
              {
                v25 = 0;
                while ( 1 )
                {
                  if ( v24 == v25 )
                    sub_1BCAA44(buffData, v17);
                  v26 = *((_QWORD *)buffData + v25 + 4);
                  if ( !v26 )
                    goto LABEL_56;
                  v27 = this->fields.data;
                  if ( !v27 )
                    goto LABEL_56;
                  if ( *(_QWORD *)(v26 + 88) == v27->fields.userCommandCodeId )
                    break;
                  if ( v24 == ++v25 )
                    goto LABEL_49;
                }
                v29 = *(_DWORD *)(v26 + 112);
                v28 = v26 + 112;
                if ( v29 >= 1 )
                {
                  if ( this->fields.isCodeTextureView )
                  {
                    buffData = this->fields.codeTexture;
                    if ( !buffData )
                      goto LABEL_56;
                  }
                  else
                  {
                    buffData = this->fields.codeSprite;
                    if ( !buffData )
                      goto LABEL_56;
                  }
                  v34.fields.r = 0.5;
                  v34.fields.g = 0.5;
                  v34.fields.b = 0.5;
                  v34.fields.a = 1.0;
                  UIWidget__set_color((UIWidget_o *)buffData, v34, 0LL);
                  buffData = this->fields.chargeTurnLabel;
                  if ( !buffData )
                    goto LABEL_56;
                  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                  buffData = this->fields.remainingTurnLabel;
                  if ( !buffData )
                    goto LABEL_56;
                  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                  v30 = this->fields.chargeTurnLabel;
                  buffData = System_Int32__ToString(v28, 0LL);
                  if ( !v30 )
                    goto LABEL_56;
                  UILabel__set_text(v30, (System_String_o *)buffData, 0LL);
                  v32 = this->fields.remainingTurnLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
                  buffData = LocalizationManager__Get((System_String_o *)StringLiteral_2853/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, 0LL);
                  if ( !v32 )
                    goto LABEL_56;
                  UILabel__set_text(v32, (System_String_o *)buffData, 0LL);
                }
              }
LABEL_49:
              if ( isFirst )
              {
                buffData = this->fields.chargeTurnLabel;
                if ( buffData )
                {
                  buffData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffData, 0LL);
                  if ( buffData )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffData, 0, 0LL);
                    buffData = this->fields.remainingTurnLabel;
                    if ( buffData )
                    {
                      buffData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffData, 0LL);
                      if ( buffData )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffData, 0, 0LL);
                        return;
                      }
                    }
                  }
                }
LABEL_56:
                sub_1BCAA3C(buffData, v17);
              }
            }
          }
        }
      }
    }
  }
}


void __fastcall BattleCommandComponent__SetCommandCodeMode(
        BattleCommandComponent_o *this,
        bool isTextureMode,
        const MethodInfo *method)
{
  this->fields.isCodeTextureView = isTextureMode;
}


void __fastcall BattleCommandComponent__SetCommandCodeView(
        BattleCommandComponent_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  UnityEngine_Behaviour_o *codeTexture; // x0
  PartyOrganizationUtility_o *p_codeTexture; // x19
  __int64 v20; // x1
  UITexture_o *klass; // x21
  __int64 v22; // x1
  UnityEngine_Object_o *Manager__loadCommandCodeTexture; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  Il2CppObject *Entity; // x0
  __int64 v31; // x1
  void *monitor; // x20
  Il2CppClass *v33; // x21
  int32_t v34; // w20
  UISprite_o *codeSprite; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4B18AF5 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, userCommandCodeId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B18AF5 = 1;
  }
  if ( userCommandCodeId < 1 )
  {
    BattleCommandComponent__SwitchChangeObjPos(this, 0, method);
    codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
    if ( codeTexture )
    {
      UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
      codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
      if ( codeTexture )
      {
        UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
        return;
      }
    }
    goto LABEL_28;
  }
  BattleCommandComponent__SwitchChangeObjPos(this, 1, method);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
  if ( !codeTexture )
    goto LABEL_28;
  if ( this->fields.isCodeTextureView )
  {
    UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0LL);
    codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
    if ( codeTexture )
    {
      p_codeTexture = (PartyOrganizationUtility_o *)&this->fields.codeTexture;
      UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
      klass = (UITexture_o *)p_codeTexture->klass;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v20);
      Manager__loadCommandCodeTexture = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCodeTexture(
                                                                  klass,
                                                                  userCommandCodeId,
                                                                  0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCodeTexture, 0LL, 0LL) )
      {
        p_codeTexture->klass = (PartyOrganizationUtility_c *)Manager__loadCommandCodeTexture;
        sub_1BCA784(p_codeTexture, (int64_t)Manager__loadCommandCodeTexture, v24, v25, v26, v27, v28, v29);
      }
      return;
    }
LABEL_28:
    sub_1BCAA3C(codeTexture, v17);
  }
  UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
  if ( !codeTexture )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0LL);
  codeTexture = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !codeTexture )
    goto LABEL_28;
  codeTexture = (UnityEngine_Behaviour_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)codeTexture,
                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !codeTexture )
    goto LABEL_28;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)codeTexture,
             userCommandCodeId,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  if ( Entity )
  {
    v33 = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31);
    *(_QWORD *)&v36.fields.currentCryptoKey = v33;
    *(_QWORD *)&v36.fields.fakeValue = monitor;
    v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v36, 0LL);
  }
  else
  {
    v34 = -1;
  }
  codeSprite = this->fields.codeSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v31);
  AtlasManager__SetCommandCodeMiniImage(codeSprite, v34, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetCommandCodeView_43840204(
        BattleCommandComponent_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  UnityEngine_Behaviour_o *codeTexture; // x0
  PartyOrganizationUtility_o *p_codeTexture; // x20
  __int64 v12; // x1
  UITexture_o *klass; // x21
  __int64 v14; // x1
  UnityEngine_Object_o *Manager__loadCommandCodeTexture_38670888; // x19
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  UISprite_o *codeSprite; // x20

  if ( (byte_4B18AF6 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&commandCodeId, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v7, v8);
    byte_4B18AF6 = 1;
  }
  if ( (commandCodeId & 0x80000000) != 0 )
  {
    BattleCommandComponent__SwitchChangeObjPos(this, 0, method);
    codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
    if ( codeTexture )
    {
      UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
      codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
      if ( codeTexture )
      {
LABEL_21:
        UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
        return;
      }
    }
LABEL_22:
    sub_1BCAA3C(codeTexture, v9);
  }
  BattleCommandComponent__SwitchChangeObjPos(this, 1, method);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
  if ( !codeTexture )
    goto LABEL_22;
  if ( this->fields.isCodeTextureView )
  {
    UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0LL);
    codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
    if ( codeTexture )
    {
      p_codeTexture = (PartyOrganizationUtility_o *)&this->fields.codeTexture;
      UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
      klass = (UITexture_o *)p_codeTexture->klass;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v12);
      Manager__loadCommandCodeTexture_38670888 = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCodeTexture_38670888(
                                                                           klass,
                                                                           commandCodeId,
                                                                           0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCodeTexture_38670888, 0LL, 0LL) )
      {
        p_codeTexture->klass = (PartyOrganizationUtility_c *)Manager__loadCommandCodeTexture_38670888;
        sub_1BCA784(p_codeTexture, (int64_t)Manager__loadCommandCodeTexture_38670888, v16, v17, v18, v19, v20, v21);
        return;
      }
      codeTexture = (UnityEngine_Behaviour_o *)p_codeTexture->klass;
      if ( p_codeTexture->klass )
        goto LABEL_21;
    }
    goto LABEL_22;
  }
  UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
  if ( !codeTexture )
    goto LABEL_22;
  UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0LL);
  codeSprite = this->fields.codeSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v22);
  AtlasManager__SetCommandCodeMiniImage(codeSprite, commandCodeId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetCommandEffectActive(
        BattleCommandComponent_o *this,
        int32_t effectType,
        bool active,
        const MethodInfo *method)
{
  BattleCommandComponent_o *v6; // x21
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v8; // x22
  struct UnityEngine_GameObject_array *v9; // x8

  v6 = this;
  if ( (byte_4B18B12 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&effectType, active);
    byte_4B18B12 = 1;
  }
  effectobj = v6->fields.effectobj;
  if ( !effectobj )
    goto LABEL_13;
  if ( effectobj->max_length <= effectType )
LABEL_14:
    sub_1BCAA44(this, *(_QWORD *)&effectType);
  v8 = (UnityEngine_Object_o *)effectobj->m_Items[effectType];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&effectType);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v6->fields.effectobj;
    if ( !v9 )
      goto LABEL_13;
    if ( v9->max_length > effectType )
    {
      this = (BattleCommandComponent_o *)v9->m_Items[effectType];
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, active, 0LL);
        return;
      }
LABEL_13:
      sub_1BCAA3C(this, *(_QWORD *)&effectType);
    }
    goto LABEL_14;
  }
}


void __fastcall BattleCommandComponent__SetConfWindowTreasureDeviceErrorMark(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0
  const MethodInfo *v4; // x1
  UISprite_o *v5; // x0
  const MethodInfo *v6; // x3
  BattleCommandComponent_o *v7; // x0
  const MethodInfo *v8; // x3

  svtData = this->fields.svtData;
  if ( svtData )
  {
    if ( BattleServantData__get_isTreasureDeveiceError(svtData, 0LL) )
    {
      v5 = BattleCommandComponent__ChoiceUnusableMarkSprite(this, v4);
      BattleCommandComponent__SetActiveComponent((BattleCommandComponent_o *)v5, (UnityEngine_Component_o *)v5, 0, v6);
      BattleCommandComponent__SetActiveComponent(
        v7,
        (UnityEngine_Component_o *)this->fields.treasureDeviceErrorSprite,
        1,
        v8);
    }
  }
}


void __fastcall BattleCommandComponent__SetDonotPermanentSleepSprite(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *donotPermanentSleep; // x20
  __int64 v9; // x1
  UISprite_o *v10; // x19

  if ( (byte_4B18B03 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_20396/*"icon_sleep_2"*/, v6, v7);
    byte_4B18B03 = 1;
  }
  donotPermanentSleep = (UnityEngine_Object_o *)this->fields.donotPermanentSleep;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(donotPermanentSleep, 0LL, 0LL) )
  {
    v10 = this->fields.donotPermanentSleep;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9);
    AtlasManager__SetEventSprite(v10, (System_String_o *)StringLiteral_20396/*"icon_sleep_2"*/, 0LL);
  }
}


void __fastcall BattleCommandComponent__SetDonotSleepSprite(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *donotsleepSprite; // x20
  __int64 v9; // x1
  UISprite_o *v10; // x19

  if ( (byte_4B18B02 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_20395/*"icon_sleep"*/, v6, v7);
    byte_4B18B02 = 1;
  }
  donotsleepSprite = (UnityEngine_Object_o *)this->fields.donotsleepSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(donotsleepSprite, 0LL, 0LL) )
  {
    v10 = this->fields.donotsleepSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9);
    AtlasManager__SetEventSprite(v10, (System_String_o *)StringLiteral_20395/*"icon_sleep"*/, 0LL);
  }
}


void __fastcall BattleCommandComponent__SetDownloadEventSprite(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  BattleCommandComponent__SetDonotSleepSprite(this, method);
  BattleCommandComponent__SetUnusableShortageStarSprite(this, v3);
  BattleCommandComponent__SetDonotPermanentSleepSprite(this, v4);
}


void __fastcall BattleCommandComponent__SetFixedCommandCardBuff(
        BattleCommandComponent_o *this,
        bool active,
        int32_t turn,
        int32_t addOrder,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  BattleCommandComponent__SetSpecialCommandCardBuffData(this, 131, active, turn, addOrder, v5);
}


void __fastcall BattleCommandComponent__SetIsInBattle(
        BattleCommandComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isInBattle = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetLabelActive(
        BattleCommandComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Component_o *chargeTurnLabel; // x0

  chargeTurnLabel = (UnityEngine_Component_o *)this->fields.chargeTurnLabel;
  if ( !chargeTurnLabel
    || (chargeTurnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(chargeTurnLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)chargeTurnLabel, active, 0LL),
        (chargeTurnLabel = (UnityEngine_Component_o *)this->fields.remainingTurnLabel) == 0LL)
    || (chargeTurnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(chargeTurnLabel, 0LL)) == 0LL )
  {
    sub_1BCAA3C(chargeTurnLabel, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)chargeTurnLabel, active, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetLabelAssistActive(
        BattleCommandComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Component_o *assistChargeTurnLabel; // x0

  assistChargeTurnLabel = (UnityEngine_Component_o *)this->fields.assistChargeTurnLabel;
  if ( !assistChargeTurnLabel
    || (assistChargeTurnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             assistChargeTurnLabel,
                                                             0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)assistChargeTurnLabel, active, 0LL),
        (assistChargeTurnLabel = (UnityEngine_Component_o *)this->fields.assistRemainingTurnLabel) == 0LL)
    || (assistChargeTurnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             assistChargeTurnLabel,
                                                             0LL)) == 0LL )
  {
    sub_1BCAA3C(assistChargeTurnLabel, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)assistChargeTurnLabel, active, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetLockInfo(
        BattleCommandComponent_o *this,
        bool isLock,
        const MethodInfo *method)
{
  UnityEngine_Object_o *LockInfo; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4B18AFB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isLock, method);
    byte_4B18AFB = 1;
  }
  LockInfo = (UnityEngine_Object_o *)this->fields.LockInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isLock);
  if ( UnityEngine_Object__op_Inequality(LockInfo, 0LL, 0LL) )
  {
    v7 = this->fields.LockInfo;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isLock, 0LL);
  }
}


void __fastcall BattleCommandComponent__SetNobleGaugeEffect(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *effect,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.nobleGaugeEffect = effect;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.nobleGaugeEffect,
    (int64_t)effect,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetPowerUpCardIcon(
        BattleCommandComponent_o *this,
        int32_t powerUpValue,
        int32_t iconType,
        bool isBright,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *powerUpCardIcon; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  UISprite_o *v14; // x23
  UnityEngine_Component_o *v15; // x8
  char v16; // w19
  bool v17; // w1

  if ( (byte_4B18AFD & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&powerUpValue, *(_QWORD *)&iconType);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B18AFD = 1;
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&powerUpValue);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(powerUpCardIcon, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    v14 = this->fields.powerUpCardIcon;
    if ( powerUpValue <= 0 )
    {
      if ( v14 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.powerUpCardIcon, 0LL);
        if ( gameObject )
        {
          v17 = 0;
          goto LABEL_15;
        }
      }
    }
    else
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13);
      gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetCommandCardIconImage(
                                                 v14,
                                                 powerUpValue,
                                                 iconType,
                                                 isBright,
                                                 0LL);
      v15 = (UnityEngine_Component_o *)this->fields.powerUpCardIcon;
      if ( v15 )
      {
        v16 = (char)gameObject;
        gameObject = UnityEngine_Component__get_gameObject(v15, 0LL);
        if ( gameObject )
        {
          v17 = v16 & 1;
LABEL_15:
          UnityEngine_GameObject__SetActive(gameObject, v17, 0LL);
          return;
        }
      }
    }
    sub_1BCAA3C(gameObject, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetPowerUpCardValue(
        BattleCommandComponent_o *this,
        int32_t powerUpValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *powerUpCardValue; // x21
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *v12; // x20
  Il2CppObject *v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B18AFC & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&powerUpValue, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_860/*"+{0:#,0}"*/, v7, v8);
    byte_4B18AFC = 1;
  }
  powerUpCardValue = (UnityEngine_Object_o *)this->fields.powerUpCardValue;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&powerUpValue);
  if ( !UnityEngine_Object__op_Equality(powerUpCardValue, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.powerUpCardValue;
    if ( !gameObject )
      goto LABEL_13;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_13;
    if ( powerUpValue <= 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      return;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v12 = this->fields.powerUpCardValue;
    v14 = powerUpValue;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_860/*"+{0:#,0}"*/, v13, 0LL);
    if ( !v12 )
LABEL_13:
      sub_1BCAA3C(gameObject, v10);
    UILabel__set_text(v12, (System_String_o *)gameObject, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetSpecialCommandCardBuffData(
        BattleCommandComponent_o *this,
        int32_t buffType,
        bool active,
        int32_t turn,
        int32_t addOrder,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  BattleCommandComponent___c__DisplayClass225_0_o *v35; // x24
  void *Index; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_List_object__o *specialCardBuffList; // x23
  System_Predicate_object__o *v41; // x25
  __int64 v42; // x2
  __int64 v43; // x3
  int32_t v44; // w23
  System_Collections_Generic_List_object__o *v45; // x22
  int32_t v46; // w24
  BattleCommandComponent_CardBuffData_o *v47; // x23
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  System_Collections_Generic_List_object__o *v58; // x20
  System_Comparison_T__o *v59; // x21
  Il2CppObject *v60; // x22
  struct BattleCommandComponent___c_StaticFields *static_fields; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  const MethodInfo *v68; // x2
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v69; // x8

  if ( (byte_4B18B06 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandComponent_CardBuffData_TypeInfo, *(_QWORD *)&buffType, active);
    sub_1BCA7E0(&System_Comparison_BattleCommandComponent_CardBuffData__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__RemoveAt__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Sort__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__, v23, v24);
    sub_1BCA7E0(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_BattleCommandComponent___c__SetSpecialCommandCardBuffData_b__225_1__, v27, v28);
    sub_1BCA7E0(&Method_BattleCommandComponent___c__DisplayClass225_0__SetSpecialCommandCardBuffData_b__0__, v29, v30);
    sub_1BCA7E0(&BattleCommandComponent___c__DisplayClass225_0_TypeInfo, v31, v32);
    sub_1BCA7E0(&BattleCommandComponent___c_TypeInfo, v33, v34);
    byte_4B18B06 = 1;
  }
  v35 = (BattleCommandComponent___c__DisplayClass225_0_o *)sub_1BCAA2C(
                                                             BattleCommandComponent___c__DisplayClass225_0_TypeInfo,
                                                             *(_QWORD *)&buffType,
                                                             active,
                                                             *(_QWORD *)&turn);
  BattleCommandComponent___c__DisplayClass225_0___ctor(v35, 0LL);
  if ( !v35 )
    goto LABEL_29;
  v35->fields.buffType = buffType;
  specialCardBuffList = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  v41 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo,
                                        v37,
                                        v38,
                                        v39);
  System_Predicate_object____ctor(
    v41,
    (Il2CppObject *)v35,
    Method_BattleCommandComponent___c__DisplayClass225_0__SetSpecialCommandCardBuffData_b__0__,
    0LL);
  if ( !specialCardBuffList )
    goto LABEL_29;
  Index = (void *)System_Collections_Generic_List_object___FindIndex(
                    specialCardBuffList,
                    (System_Predicate_T__o *)v41,
                    (const MethodInfo_35A24B4 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  v44 = (int)Index;
  if ( active )
  {
    v45 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
    if ( ((unsigned int)Index & 0x80000000) != 0 )
    {
      v46 = v35->fields.buffType;
      v47 = (BattleCommandComponent_CardBuffData_o *)sub_1BCAA2C(
                                                       BattleCommandComponent_CardBuffData_TypeInfo,
                                                       v37,
                                                       v42,
                                                       v43);
      BattleCommandComponent_CardBuffData___ctor(v47, v46, turn, addOrder, 0LL);
      if ( !v45 )
        goto LABEL_29;
      items = v45->fields._items;
      v55 = Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Add__;
      ++v45->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v45->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v45,
          (Il2CppObject *)v47,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = &items->obj.klass + size;
        v45->fields._size = size + 1;
        v57[4] = (Il2CppClass *)v47;
        sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 4), (int64_t)v47, v48, v49, v50, v51, v52, v53);
      }
    }
    else
    {
      if ( !v45 )
        goto LABEL_29;
      Index = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList,
                (int32_t)Index,
                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
      if ( !Index )
        goto LABEL_29;
      *((_DWORD *)Index + 5) = turn;
      Index = this->fields.specialCardBuffList;
      if ( !Index )
        goto LABEL_29;
      Index = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Index,
                v44,
                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
      if ( !Index )
        goto LABEL_29;
      *((_DWORD *)Index + 6) = addOrder;
    }
  }
  else if ( ((unsigned int)Index & 0x80000000) == 0 )
  {
    Index = this->fields.specialCardBuffList;
    if ( !Index )
      goto LABEL_29;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)Index,
      v44,
      (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__RemoveAt__);
  }
  v58 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  Index = BattleCommandComponent___c_TypeInfo;
  if ( !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo, v37);
    Index = BattleCommandComponent___c_TypeInfo;
  }
  v59 = *(System_Comparison_T__o **)(*((_QWORD *)Index + 23) + 24LL);
  if ( !v59 )
  {
    if ( !*((_DWORD *)Index + 56) )
    {
      j_il2cpp_runtime_class_init_0(Index, v37);
      Index = BattleCommandComponent___c_TypeInfo;
    }
    v60 = (Il2CppObject *)**((_QWORD **)Index + 23);
    v59 = (System_Comparison_T__o *)sub_1BCAA2C(
                                      System_Comparison_BattleCommandComponent_CardBuffData__TypeInfo,
                                      v37,
                                      v42,
                                      v43);
    System_Comparison_object____ctor(
      v59,
      v60,
      Method_BattleCommandComponent___c__SetSpecialCommandCardBuffData_b__225_1__,
      0LL);
    static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    static_fields->__9__225_1 = (struct System_Comparison_BattleCommandComponent_CardBuffData__o *)v59;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__225_1, (int64_t)v59, v62, v63, v64, v65, v66, v67);
  }
  if ( !v58
    || (System_Collections_Generic_List_object___Sort_56244000(
          v58,
          v59,
          (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Sort__),
        (v69 = this->fields.specialCardBuffList) == 0LL) )
  {
LABEL_29:
    sub_1BCAA3C(Index, v37);
  }
  BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, v69->fields._size > 0, v68);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetTreasureDeviceTypeChange(
        BattleCommandComponent_o *this,
        bool active,
        int32_t turn,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *nowTreasureDeviceTypeImage; // x22
  __int64 v14; // x1
  UnityEngine_Object_o *restTreasureDeviceChangeTurnLabel; // x22
  __int64 v16; // x1
  UnityEngine_Component_o *gameObject; // x0
  __int64 v18; // x1
  UILabel_o *v19; // x20
  System_String_o *v20; // x21
  Il2CppObject *v21; // x0
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B18AFA & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, active, *(_QWORD *)&turn);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_2895/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_REST_TURN"*/, v11, v12);
    byte_4B18AFA = 1;
  }
  nowTreasureDeviceTypeImage = (UnityEngine_Object_o *)this->fields.nowTreasureDeviceTypeImage;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, active);
  if ( !UnityEngine_Object__op_Equality(nowTreasureDeviceTypeImage, 0LL, 0LL) )
  {
    restTreasureDeviceChangeTurnLabel = (UnityEngine_Object_o *)this->fields.restTreasureDeviceChangeTurnLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    if ( !UnityEngine_Object__op_Equality(restTreasureDeviceChangeTurnLabel, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.nowTreasureDeviceTypeImage;
      if ( !gameObject )
        goto LABEL_17;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, active, 0LL);
      if ( !active )
        return;
      v19 = this->fields.restTreasureDeviceChangeTurnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2895/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_REST_TURN"*/, 0LL);
      v22 = turn;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
      gameObject = (UnityEngine_Component_o *)System_String__Format(v20, v21, 0LL);
      if ( !v19 )
LABEL_17:
        sub_1BCAA3C(gameObject, v16);
      UILabel__set_text(v19, (System_String_o *)gameObject, 0LL);
    }
  }
}


bool __fastcall BattleCommandComponent__SetTreasureDeviceTypeImageDefaultAtlas(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *defaultTdTypeImageAtlas; // x21
  struct UIAtlas_o **p_defaultTdTypeImageAtlas; // x20
  __int64 v6; // x1
  UnityEngine_Object_o *nowTreasureDeviceTypeImage; // x21
  _BOOL8 v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct UISprite_o *v15; // x8
  int64_t mAtlas; // x1
  UnityEngine_Object_o *v17; // x19

  if ( (byte_4B18AFF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18AFF = 1;
  }
  defaultTdTypeImageAtlas = (UnityEngine_Object_o *)this->fields.defaultTdTypeImageAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  p_defaultTdTypeImageAtlas = &this->fields.defaultTdTypeImageAtlas;
  if ( UnityEngine_Object__op_Equality(defaultTdTypeImageAtlas, 0LL, 0LL) )
  {
    nowTreasureDeviceTypeImage = (UnityEngine_Object_o *)this->fields.nowTreasureDeviceTypeImage;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v8 = UnityEngine_Object__op_Inequality(nowTreasureDeviceTypeImage, 0LL, 0LL);
    if ( v8 )
    {
      v15 = this->fields.nowTreasureDeviceTypeImage;
      if ( !v15 )
        sub_1BCAA3C(v8, v6);
      mAtlas = (int64_t)v15->fields.mAtlas;
      *p_defaultTdTypeImageAtlas = (struct UIAtlas_o *)mAtlas;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.defaultTdTypeImageAtlas,
        mAtlas,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
  }
  v17 = (UnityEngine_Object_o *)*p_defaultTdTypeImageAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  return UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetUntrueCount(
        BattleCommandComponent_o *this,
        int32_t count,
        bool isInitZero,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  DrumRollLabel_o *criticallabel; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  struct DrumRollLabel_o *v12; // x21
  DrumRollLabel_CompleteEventHandler_o *v13; // x22

  if ( (byte_4B18ADC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleCommandComponent_compCriticallabel__, *(_QWORD *)&count, isInitZero);
    sub_1BCA7E0(&DrumRollLabel_CompleteEventHandler_TypeInfo, v7, v8);
    byte_4B18ADC = 1;
  }
  if ( isInitZero )
  {
    criticallabel = this->fields.criticallabel;
    if ( !criticallabel )
      goto LABEL_12;
    DrumRollLabel__setParam(criticallabel, 0, 0LL);
  }
  criticallabel = (DrumRollLabel_o *)this->fields.criticalObject;
  if ( !criticallabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)criticallabel, 1, 0LL),
        (v12 = this->fields.criticallabel) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(criticallabel, *(_QWORD *)&count);
  }
  if ( v12->fields.nowvalue <= count )
  {
    v13 = (DrumRollLabel_CompleteEventHandler_o *)sub_1BCAA2C(
                                                    DrumRollLabel_CompleteEventHandler_TypeInfo,
                                                    *(_QWORD *)&count,
                                                    v10,
                                                    v11);
    DrumRollLabel_CompleteEventHandler___ctor(
      v13,
      (Il2CppObject *)this,
      Method_BattleCommandComponent_compCriticallabel__,
      0LL);
  }
  else
  {
    v13 = 0LL;
  }
  DrumRollLabel__changeParam(v12, count, 1, v13, 0.0, 0LL);
}


void __fastcall BattleCommandComponent__SetUnusableShortageStarSprite(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *unusableShortageStarSprite; // x20
  __int64 v9; // x1
  UISprite_o *v10; // x19

  if ( (byte_4B18B01 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_20411/*"icon_unusable_star"*/, v6, v7);
    byte_4B18B01 = 1;
  }
  unusableShortageStarSprite = (UnityEngine_Object_o *)this->fields.unusableShortageStarSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(unusableShortageStarSprite, 0LL, 0LL) )
  {
    v10 = this->fields.unusableShortageStarSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9);
    AtlasManager__SetEventSprite(v10, (System_String_o *)StringLiteral_20411/*"icon_unusable_star"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SwitchChangeObjPos(
        BattleCommandComponent_o *this,
        bool isUp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *codeObject; // x21
  UnityEngine_Transform_o *friendIcon; // x0
  __int64 v7; // x1
  struct UnityEngine_Transform_array *stateCodePoints; // x8
  __int64 v9; // x9
  struct UnityEngine_Transform_array *stateArrowPoints; // x10
  UnityEngine_Transform_o *v11; // x21
  int v12; // s0
  __int64 v15; // x8
  struct UnityEngine_Transform_array *v16; // x8
  UnityEngine_Transform_o *v17; // x20
  int v18; // s0
  struct UnityEngine_Transform_array *v21; // x9
  struct UnityEngine_GameObject_array *addObjectList; // x10
  UnityEngine_Transform_o *v23; // x20
  UnityEngine_Object_o *v24; // x21
  struct UnityEngine_GameObject_array *v25; // x8
  UnityEngine_Transform_o *v26; // x21
  int v27; // s0
  struct UnityEngine_GameObject_array *v30; // x8
  UnityEngine_Object_o *v31; // x21
  struct UnityEngine_GameObject_array *v32; // x8
  UnityEngine_Transform_o *v33; // x19
  int v34; // s0

  if ( (byte_4B18AF8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isUp, method);
    byte_4B18AF8 = 1;
  }
  codeObject = (UnityEngine_Object_o *)this->fields.codeObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isUp);
  friendIcon = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(codeObject, 0LL, 0LL);
  if ( ((unsigned __int8)friendIcon & 1) == 0 )
  {
    stateCodePoints = this->fields.stateCodePoints;
    if ( stateCodePoints )
    {
      v9 = *(_QWORD *)&stateCodePoints->max_length;
      if ( v9 )
      {
        stateArrowPoints = this->fields.stateArrowPoints;
        if ( stateArrowPoints )
        {
          if ( *(_QWORD *)&stateArrowPoints->max_length )
          {
            if ( !(_DWORD)v9 )
              goto LABEL_49;
            friendIcon = stateCodePoints->m_Items[0];
            if ( !friendIcon )
              goto LABEL_48;
            v11 = this->fields.codeObject;
            *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_position(friendIcon, 0LL);
            if ( !v11 )
              goto LABEL_48;
            UnityEngine_Transform__set_position(v11, *(UnityEngine_Vector3_o *)&v12, 0LL);
            v15 = 0LL;
            if ( isUp )
            {
              friendIcon = (UnityEngine_Transform_o *)this->fields.friendIcon;
              if ( !friendIcon )
                goto LABEL_48;
              friendIcon = (UnityEngine_Transform_o *)UnityEngine_Behaviour__get_enabled(
                                                        (UnityEngine_Behaviour_o *)friendIcon,
                                                        0LL);
              if ( ((unsigned __int8)friendIcon & 1) != 0 )
              {
                v16 = this->fields.stateCodePoints;
                if ( !v16 )
                  goto LABEL_48;
                if ( v16->max_length <= 1 )
                  goto LABEL_49;
                friendIcon = v16->m_Items[1];
                if ( !friendIcon )
                  goto LABEL_48;
                v17 = this->fields.codeObject;
                *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__get_position(friendIcon, 0LL);
                if ( !v17 )
                  goto LABEL_48;
                UnityEngine_Transform__set_position(v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
                v15 = 2LL;
              }
              else
              {
                friendIcon = (UnityEngine_Transform_o *)this->fields.friendIcon;
                if ( !friendIcon )
                  goto LABEL_48;
                friendIcon = (UnityEngine_Transform_o *)UnityEngine_Behaviour__get_enabled(
                                                          (UnityEngine_Behaviour_o *)friendIcon,
                                                          0LL);
                v15 = ((unsigned __int8)friendIcon & 1) == 0;
              }
            }
            v21 = this->fields.stateArrowPoints;
            if ( !v21 )
              goto LABEL_48;
            if ( (unsigned int)v15 >= v21->max_length )
              goto LABEL_49;
            addObjectList = this->fields.addObjectList;
            if ( !addObjectList )
              goto LABEL_48;
            if ( addObjectList->max_length <= 1 )
              goto LABEL_49;
            v23 = v21->m_Items[v15];
            v24 = (UnityEngine_Object_o *)addObjectList->m_Items[1];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
            friendIcon = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v24, 0LL, 0LL);
            if ( ((unsigned __int8)friendIcon & 1) != 0 )
            {
              v25 = this->fields.addObjectList;
              if ( !v25 )
                goto LABEL_48;
              if ( v25->max_length <= 1 )
                goto LABEL_49;
              friendIcon = (UnityEngine_Transform_o *)v25->m_Items[1];
              if ( !friendIcon )
                goto LABEL_48;
              friendIcon = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)friendIcon, 0LL);
              if ( !v23 )
                goto LABEL_48;
              v26 = friendIcon;
              *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Transform__get_position(v23, 0LL);
              if ( !v26 )
                goto LABEL_48;
              UnityEngine_Transform__set_position(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
            }
            v30 = this->fields.addObjectList;
            if ( !v30 )
              goto LABEL_48;
            if ( !v30->max_length )
LABEL_49:
              sub_1BCAA44(friendIcon, v7);
            v31 = (UnityEngine_Object_o *)v30->m_Items[0];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
            friendIcon = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
            if ( ((unsigned __int8)friendIcon & 1) != 0 )
            {
              v32 = this->fields.addObjectList;
              if ( !v32 )
                goto LABEL_48;
              if ( v32->max_length )
              {
                friendIcon = (UnityEngine_Transform_o *)v32->m_Items[0];
                if ( friendIcon )
                {
                  friendIcon = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)friendIcon, 0LL);
                  if ( v23 )
                  {
                    v33 = friendIcon;
                    *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Transform__get_position(v23, 0LL);
                    if ( v33 )
                    {
                      UnityEngine_Transform__set_position(v33, *(UnityEngine_Vector3_o *)&v34, 0LL);
                      return;
                    }
                  }
                }
LABEL_48:
                sub_1BCAA3C(friendIcon, v7);
              }
              goto LABEL_49;
            }
          }
        }
      }
    }
  }
}


void __fastcall BattleCommandComponent__UpdateCommandCardEffect(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
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
  BattleCommandData_o *data; // x0
  BattleBuffData_BuffData_array *CommandCodeBuffArray; // x0
  BattleBuffData_BuffData_array *v24; // x20
  DataManager_o *Instance; // x0
  __int64 v26; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x21
  __int64 v29; // x24
  BattleBuffData_BuffData_o *v30; // x22
  System_String_o *datalist; // x22
  System_String_o *v32; // x22
  Il2CppObject *v33; // x23
  __int64 v34; // x1
  UnityEngine_Object_o *Manager__loadBattleCommonEffect; // x22
  UnityEngine_Transform_o *objectRoot; // x23
  Il2CppObject *v37; // x22
  Il2CppObject *Component_object; // x23
  const MethodInfo *v39; // x3
  struct UISprite_o *text; // x8
  struct UISprite_o *bg; // x9
  struct BattleCommandData_o *v42; // x8
  struct BattleCommandData_o *v43; // x8
  Il2CppObject *key; // [xsp+0h] [xbp-70h] BYREF
  System_String_o *path; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B18B0E & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EffectMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CardEffectComponent___, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    byte_4B18B0E = 1;
  }
  key = 0LL;
  path = 0LL;
  BattleCommandComponent__ClearCardEffect(this, method);
  data = this->fields.data;
  if ( data )
  {
    CommandCodeBuffArray = BattleCommandData__GetCommandCodeBuffArray(data, 0LL);
    if ( CommandCodeBuffArray )
    {
      v24 = CommandCodeBuffArray;
      if ( *(_QWORD *)&CommandCodeBuffArray->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_43;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EffectMaster___);
        max_length = v24->max_length;
        if ( max_length >= 1 )
        {
          v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v29 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v29 >= max_length )
              sub_1BCAA44(Instance, v26);
            v30 = v24->m_Items[v29];
            if ( !v30 )
              break;
            if ( v30->fields.cardEffectId >= 1 )
            {
              Instance = (DataManager_o *)BattleBuffData_BuffData__isEnableCommandCardBuff(
                                            v24->m_Items[v29],
                                            this->fields.data,
                                            0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_13;
              Instance = (DataManager_o *)BattleBuffData_BuffData__isCommandCodeBuff(v30, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                v42 = this->fields.data;
                if ( !v42 )
                  break;
                if ( v30->fields.userCommandCodeId == v42->fields.userCommandCodeId )
                  goto LABEL_13;
              }
              Instance = (DataManager_o *)BattleBuffData_BuffData__IsCommandAssistBuff(v30, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                v43 = this->fields.data;
                if ( !v43 )
                  break;
                if ( v30->fields.commandAssistId == v43->fields.commandAssistId
                  && v30->fields.cardIndex == v43->fields.servantCardIdsIndex )
                {
LABEL_13:
                  if ( !v28 )
                    break;
                  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                v28,
                                                v30->fields.cardEffectId,
                                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
                  if ( Instance )
                  {
                    datalist = (System_String_o *)Instance->fields.datalist;
                    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v26);
                    BattleEffectUtility__GetBattleCommonEffectPathAndName(
                      datalist,
                      &path,
                      (System_String_o **)&key,
                      0LL);
                    Instance = (DataManager_o *)this->fields.cardEffectDict;
                    if ( !Instance )
                      break;
                    Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                  (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                                                  key,
                                                  (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
                    if ( ((unsigned __int8)Instance & 1) == 0 )
                    {
                      v33 = key;
                      v32 = path;
                      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v26);
                      Manager__loadBattleCommonEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                                  v32,
                                                                                  (System_String_o *)v33,
                                                                                  0LL);
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
                      Instance = (DataManager_o *)UnityEngine_Object__op_Equality(
                                                    Manager__loadBattleCommonEffect,
                                                    0LL,
                                                    0LL);
                      if ( ((unsigned __int8)Instance & 1) == 0 )
                      {
                        objectRoot = this->fields.objectRoot;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
                        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object__49903816(
                                                      (Il2CppObject *)Manager__loadBattleCommonEffect,
                                                      objectRoot,
                                                      (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
                        if ( !Instance )
                          break;
                        v37 = (Il2CppObject *)Instance;
                        Component_object = UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)Instance,
                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CardEffectComponent___);
                        Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(
                                                      (UnityEngine_Object_o *)Component_object,
                                                      0LL,
                                                      0LL);
                        if ( ((unsigned __int8)Instance & 1) != 0 )
                        {
                          text = this->fields.text;
                          if ( !text )
                            break;
                          bg = this->fields.bg;
                          if ( !bg || !Component_object )
                            break;
                          CardEffectComponent__SetCardEffectDepth(
                            (CardEffectComponent_o *)Component_object,
                            text->fields.mDepth,
                            bg->fields.mDepth,
                            v39);
                        }
                        Instance = (DataManager_o *)this->fields.cardEffectDict;
                        if ( !Instance )
                          break;
                        System_Collections_Generic_Dictionary_object__object___Add(
                          (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                          key,
                          v37,
                          (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
                      }
                    }
                  }
                }
              }
            }
            max_length = v24->max_length;
            if ( (int)++v29 >= max_length )
              return;
          }
LABEL_43:
          sub_1BCAA3C(Instance, v26);
        }
      }
    }
  }
}


void __fastcall BattleCommandComponent__UpdateCommandCardTypeChange(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  void *data; // x0
  System_Collections_Generic_List_object__o *specialCardBuffList; // x20
  System_Predicate_object__o *v29; // x21
  Il2CppObject *v30; // x22
  struct BattleCommandComponent___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int32_t Index; // w0
  __int64 v39; // x1
  int32_t v40; // w20
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  __int64 v42; // x1
  UnityEngine_Object_o *specialCardBuffTurn; // x21
  UISprite_o *v44; // x21
  Il2CppObject *v45; // x0
  __int64 v46; // x1
  System_String_o *v47; // x22
  UILabel_o *v48; // x21
  System_Collections_Generic_List_object__o *v49; // x8
  System_String_o *v50; // x19
  Il2CppObject *v51; // x0
  int v52; // [xsp+8h] [xbp-38h] BYREF
  int32_t type; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B18B07 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_BattleCommandComponent___c__UpdateCommandCardTypeChange_b__227_0__, v17, v18);
    sub_1BCA7E0(&BattleCommandComponent___c_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_5123/*"DISPLAY_REMAINING_TURN"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_20337/*"icon_commandchange_{0}"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v25, v26);
    byte_4B18B07 = 1;
  }
  data = BattleCommandComponent___c_TypeInfo;
  specialCardBuffList = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  if ( !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo, method);
    data = BattleCommandComponent___c_TypeInfo;
  }
  v29 = *(System_Predicate_object__o **)(*((_QWORD *)data + 23) + 32LL);
  if ( !v29 )
  {
    if ( !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data, method);
      data = BattleCommandComponent___c_TypeInfo;
    }
    v30 = (Il2CppObject *)**((_QWORD **)data + 23);
    v29 = (System_Predicate_object__o *)sub_1BCAA2C(
                                          System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo,
                                          method,
                                          v2,
                                          v3);
    System_Predicate_object____ctor(
      v29,
      v30,
      Method_BattleCommandComponent___c__UpdateCommandCardTypeChange_b__227_0__,
      0LL);
    static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    static_fields->__9__227_0 = (struct System_Predicate_BattleCommandComponent_CardBuffData__o *)v29;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__227_0, (int64_t)v29, v32, v33, v34, v35, v36, v37);
  }
  if ( !specialCardBuffList )
    goto LABEL_30;
  Index = System_Collections_Generic_List_object___FindIndex(
            specialCardBuffList,
            (System_Predicate_T__o *)v29,
            (const MethodInfo_35A24B4 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  if ( (Index & 0x80000000) == 0 )
  {
    v40 = Index;
    specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
    if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0LL, 0LL) )
    {
      specialCardBuffTurn = (UnityEngine_Object_o *)this->fields.specialCardBuffTurn;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
      if ( !UnityEngine_Object__op_Equality(specialCardBuffTurn, 0LL, 0LL) )
      {
        data = this->fields.data;
        if ( !data )
          goto LABEL_30;
        v44 = this->fields.specialCardBuffIcon;
        type = BattleCommandData__get_type((BattleCommandData_o *)data, 0LL);
        v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &type);
        v47 = System_String__Format((System_String_o *)StringLiteral_20337/*"icon_commandchange_{0}"*/, v45, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v46);
        if ( !AtlasManager__SetEventSprite(v44, v47, 0LL) )
        {
          data = this->fields.specialCardBuffIcon;
          if ( !data )
            goto LABEL_30;
          UISprite__set_spriteName((UISprite_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v48 = this->fields.specialCardBuffTurn;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
        data = LocalizationManager__Get((System_String_o *)StringLiteral_5123/*"DISPLAY_REMAINING_TURN"*/, 0LL);
        v49 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
        if ( v49 )
        {
          v50 = (System_String_o *)data;
          data = System_Collections_Generic_List_object___get_Item(
                   v49,
                   v40,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
          if ( data )
          {
            v52 = *((_DWORD *)data + 5);
            v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
            data = System_String__Format(v50, v51, 0LL);
            if ( v48 )
            {
              UILabel__set_text(v48, (System_String_o *)data, 0LL);
              return;
            }
          }
        }
LABEL_30:
        sub_1BCAA3C(data, method);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__UpdateCommandUpDetailLabel(
        BattleCommandComponent_o *this,
        int32_t targetIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  char *data; // x0
  bool isAddAttack; // w0
  const MethodInfo *v17; // x1
  System_String_o *v18; // x21
  Il2CppObject *v19; // x0
  __int64 *v20; // x8
  UnityEngine_Transform_o *transform; // x0
  int64_t v22; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int v29; // w8
  char *v30; // x21
  unsigned int v31; // w22
  int v32; // [xsp+Ch] [xbp-34h] BYREF
  int v33; // [xsp+18h] [xbp-28h] BYREF
  int v34; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4B18AEB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___,
      *(_QWORD *)&targetIndex,
      method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_16789/*"a"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_19088/*"effect/ef_commandup_{0}{1:00}"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_22916/*"q"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17169/*"b"*/, v13, v14);
    byte_4B18AEB = 1;
  }
  data = (char *)this->fields.data;
  if ( !data )
    goto LABEL_29;
  isAddAttack = BattleCommandData__isAddAttack((BattleCommandData_o *)data, 0LL);
  if ( (unsigned int)targetIndex > 2 || isAddAttack || BattleCommandComponent__get_isKindOfDontAction(this, v17) )
    return;
  data = (char *)this->fields.data;
  if ( !data )
LABEL_29:
    sub_1BCAA3C(data, *(_QWORD *)&targetIndex);
  v18 = (System_String_o *)StringLiteral_19088/*"effect/ef_commandup_{0}{1:00}"*/;
  if ( BattleCommandData__isQuick((BattleCommandData_o *)data, 0LL) )
  {
    v34 = targetIndex + 1;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
    v20 = &StringLiteral_22916/*"q"*/;
LABEL_16:
    v18 = System_String__Format_62415592(v18, (Il2CppObject *)*v20, v19, 0LL);
    goto LABEL_17;
  }
  data = (char *)this->fields.data;
  if ( !data )
    goto LABEL_29;
  if ( BattleCommandData__isArts((BattleCommandData_o *)data, 0LL) )
  {
    v33 = targetIndex + 1;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
    v20 = &StringLiteral_16789/*"a"*/;
    goto LABEL_16;
  }
  data = (char *)this->fields.data;
  if ( !data )
    goto LABEL_29;
  if ( BattleCommandData__isBuster((BattleCommandData_o *)data, 0LL) )
  {
    v32 = targetIndex + 1;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
    v20 = &StringLiteral_17169/*"b"*/;
    goto LABEL_16;
  }
LABEL_17:
  data = (char *)this->fields.nomalwidget;
  if ( !data )
    goto LABEL_29;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
  data = (char *)BaseMonoBehaviour__createObject_38952608((BaseMonoBehaviour_o *)this, v18, transform, 0LL, 0LL);
  if ( !data )
    goto LABEL_29;
  v22 = (int64_t)data;
  data = (char *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                   (UnityEngine_GameObject_o *)data,
                   (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( !data )
    goto LABEL_29;
  v29 = *((_DWORD *)data + 6);
  v30 = data;
  if ( v29 >= 1 )
  {
    v31 = 0;
    while ( v31 < v29 )
    {
      data = *(char **)&v30[8 * v31 + 32];
      if ( !data )
        goto LABEL_29;
      UnityEngine_ParticleSystem__Stop_70434692((UnityEngine_ParticleSystem_o *)data, 0LL);
      v29 = *((_DWORD *)v30 + 6);
      if ( (int)++v31 >= v29 )
        goto LABEL_25;
    }
LABEL_30:
    sub_1BCAA44(data, *(_QWORD *)&targetIndex);
  }
LABEL_25:
  data = (char *)this->fields.effectobj;
  if ( !data )
    goto LABEL_29;
  if ( *((_DWORD *)data + 6) <= 3u )
    goto LABEL_30;
  *((_QWORD *)data + 7) = v22;
  sub_1BCA784((PartyOrganizationUtility_o *)(data + 56), v22, v23, v24, v25, v26, v27, v28);
}


void __fastcall BattleCommandComponent__UpdateFixedCommandCard(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  void *Item; // x0
  System_Collections_Generic_List_object__o *specialCardBuffList; // x20
  System_Predicate_object__o *v25; // x21
  Il2CppObject *v26; // x22
  struct BattleCommandComponent___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int32_t Index; // w0
  __int64 v35; // x1
  int32_t v36; // w20
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  __int64 v38; // x1
  UnityEngine_Object_o *specialCardBuffTurn; // x21
  __int64 v40; // x1
  UILabel_o *v41; // x21
  System_Collections_Generic_List_object__o *v42; // x8
  System_String_o *v43; // x19
  Il2CppObject *v44; // x0
  int v45; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B18AF9 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_BattleCommandComponent___c__UpdateFixedCommandCard_b__211_0__, v15, v16);
    sub_1BCA7E0(&BattleCommandComponent___c_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_5123/*"DISPLAY_REMAINING_TURN"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_20296/*"icon_cardfixation"*/, v21, v22);
    byte_4B18AF9 = 1;
  }
  Item = BattleCommandComponent___c_TypeInfo;
  specialCardBuffList = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  if ( !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo, method);
    Item = BattleCommandComponent___c_TypeInfo;
  }
  v25 = *(System_Predicate_object__o **)(*((_QWORD *)Item + 23) + 16LL);
  if ( !v25 )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item, method);
      Item = BattleCommandComponent___c_TypeInfo;
    }
    v26 = (Il2CppObject *)**((_QWORD **)Item + 23);
    v25 = (System_Predicate_object__o *)sub_1BCAA2C(
                                          System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo,
                                          method,
                                          v2,
                                          v3);
    System_Predicate_object____ctor(v25, v26, Method_BattleCommandComponent___c__UpdateFixedCommandCard_b__211_0__, 0LL);
    static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    static_fields->__9__211_0 = (struct System_Predicate_BattleCommandComponent_CardBuffData__o *)v25;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__211_0, (int64_t)v25, v28, v29, v30, v31, v32, v33);
  }
  if ( !specialCardBuffList )
    goto LABEL_26;
  Index = System_Collections_Generic_List_object___FindIndex(
            specialCardBuffList,
            (System_Predicate_T__o *)v25,
            (const MethodInfo_35A24B4 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  if ( (Index & 0x80000000) == 0 )
  {
    v36 = Index;
    specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
    if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0LL, 0LL) )
    {
      specialCardBuffTurn = (UnityEngine_Object_o *)this->fields.specialCardBuffTurn;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
      if ( !UnityEngine_Object__op_Equality(specialCardBuffTurn, 0LL, 0LL) )
      {
        Item = this->fields.specialCardBuffIcon;
        if ( Item )
        {
          UISprite__set_atlas((UISprite_o *)Item, this->fields.commandAtlas, 0LL);
          Item = this->fields.specialCardBuffIcon;
          if ( Item )
          {
            UISprite__set_spriteName((UISprite_o *)Item, (System_String_o *)StringLiteral_20296/*"icon_cardfixation"*/, 0LL);
            v41 = this->fields.specialCardBuffTurn;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
            Item = LocalizationManager__Get((System_String_o *)StringLiteral_5123/*"DISPLAY_REMAINING_TURN"*/, 0LL);
            v42 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
            if ( v42 )
            {
              v43 = (System_String_o *)Item;
              Item = System_Collections_Generic_List_object___get_Item(
                       v42,
                       v36,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
              if ( Item )
              {
                v45 = *((_DWORD *)Item + 5);
                v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
                Item = System_String__Format(v43, v44, 0LL);
                if ( v41 )
                {
                  UILabel__set_text(v41, (System_String_o *)Item, 0LL);
                  return;
                }
              }
            }
          }
        }
LABEL_26:
        sub_1BCAA3C(Item, method);
      }
    }
  }
}


void __fastcall BattleCommandComponent__UpdateIconChangeTypeByTransform(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *iconChangeTypeByTransform; // x20
  __int64 v7; // x1
  BattleCommandData_o *data; // x0
  int32_t v9; // w0
  BattleCommandComponent_o *v10; // x20
  const MethodInfo *v11; // x3
  UISprite_o *v12; // x19

  if ( (byte_4B18B09 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_20295/*"icon_cardchange_"*/, v4, v5);
    byte_4B18B09 = 1;
  }
  iconChangeTypeByTransform = (UnityEngine_Object_o *)this->fields.iconChangeTypeByTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(iconChangeTypeByTransform, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_11;
    v9 = BattleCommandData__GetChangeTypeByTransform(data, 0LL);
    v10 = (BattleCommandComponent_o *)BattleCommand__GetCardTypeChangeSpriteNameSuffix(v9, 0LL, 0LL);
    BattleCommandComponent__SetActiveComponent(
      v10,
      (UnityEngine_Component_o *)this->fields.iconChangeTypeByTransform,
      v10 != 0LL,
      v11);
    if ( v10 )
    {
      v12 = this->fields.iconChangeTypeByTransform;
      data = (BattleCommandData_o *)System_String__Concat_62401220(
                                      (System_String_o *)StringLiteral_20295/*"icon_cardchange_"*/,
                                      (System_String_o *)v10,
                                      0LL);
      if ( v12 )
      {
        UISprite__set_spriteName(v12, (System_String_o *)data, 0LL);
        return;
      }
LABEL_11:
      sub_1BCAA3C(data, v7);
    }
  }
}


void __fastcall BattleCommandComponent__UpdateSealStatus(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BattleServantData_o *svtData; // x20
  BattleCommandData_o *data; // x21
  UnityEngine_Object_o *perf; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  BattleData_o *v13; // x22
  struct BattlePerformance_o *v14; // x8
  BattleCommandSealStatus_o *v15; // x23
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B18AEA & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandSealStatus_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B18AEA = 1;
  }
  data = this->fields.data;
  svtData = this->fields.svtData;
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v9 = UnityEngine_Object__op_Implicit(perf, 0LL);
  v13 = 0LL;
  if ( v9 )
  {
    v14 = this->fields.perf;
    if ( !v14 )
      sub_1BCAA3C(v9, v10);
    v13 = v14->fields.data;
  }
  v15 = (BattleCommandSealStatus_o *)sub_1BCAA2C(BattleCommandSealStatus_TypeInfo, v10, v11, v12);
  BattleCommandSealStatus___ctor_44078548(v15, data, svtData, v13, 0LL);
  this->fields.sealStatus = v15;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sealStatus, (int64_t)v15, v16, v17, v18, v19, v20, v21);
}


void __fastcall BattleCommandComponent__UpdateSpecialCardBuffIconAlpha(
        BattleCommandComponent_o *this,
        float deltaTime,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x8
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  System_Collections_IEnumerator_o *updated; // x0
  const MethodInfo *v15; // x1
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v16; // x8
  float v17; // s0
  float cardBuffAlphaFor; // s1
  float v19; // s2
  float v20; // s0
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v21; // x9
  int32_t v22; // w8
  UnityEngine_Object_o *v23; // x20

  if ( (byte_4B18B0A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__, method, v3);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B18B0A = 1;
  }
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_34;
  if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    specialCardBuffList = this->fields.specialCardBuffList;
    if ( !specialCardBuffList || specialCardBuffList->fields._size < 1 )
      goto LABEL_32;
    specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(specialCardBuffIcon, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 && this->fields.isCardBuffAlphaAnim )
    {
      if ( !this->fields.isChangedBuffIcon )
      {
        updated = BattleCommandComponent__coroutineUpdateSpecialBuffIcon(this, v9);
        UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
        BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(this, v15);
        this->fields.isChangedBuffIcon = 1;
      }
      v16 = this->fields.specialCardBuffList;
      if ( !v16 )
        goto LABEL_34;
      if ( v16->fields._size != 1 )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
        if ( !gameObject )
          goto LABEL_34;
        v17 = (*(float (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&gameObject->klass[1]._1.this_arg.bits)(
                gameObject,
                gameObject->klass[1]._1.element_class);
        cardBuffAlphaFor = this->fields.cardBuffAlphaFor;
        v19 = this->fields.cardBuffAlphaAnimTime + deltaTime;
        v20 = v17 + (float)((float)(cardBuffAlphaFor - v17) * 0.5);
        this->fields.cardBuffAlphaAnimTime = v19;
        if ( v19 >= 3.0 )
        {
          cardBuffAlphaFor = 0.0;
          *(_QWORD *)&this->fields.cardBuffAlphaFor = 0LL;
        }
        if ( v20 <= 0.01 && cardBuffAlphaFor <= 0.0 )
        {
          v21 = this->fields.specialCardBuffList;
          v22 = this->fields.cardBuffListIndex + 1;
          *(_QWORD *)&this->fields.cardBuffAlphaFor = 1065353216LL;
          this->fields.cardBuffListIndex = v22;
          if ( !v21 )
            goto LABEL_34;
          if ( v21->fields._size <= v22 )
            this->fields.cardBuffListIndex = 0;
          this->fields.isChangedBuffIcon = 0;
        }
        gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
        if ( gameObject )
        {
          ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))gameObject->klass[1]._1.castClass)(
            gameObject,
            gameObject->klass[1]._1.declaringType);
          return;
        }
LABEL_34:
        sub_1BCAA3C(gameObject, v9);
      }
    }
    else
    {
LABEL_32:
      BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, 0, v11);
    }
  }
  else
  {
    v23 = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
      if ( !gameObject )
        goto LABEL_34;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_34;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
  }
}


void __fastcall BattleCommandComponent__UpdateTDTypeChange(
        BattleCommandComponent_o *this,
        bool isForceHide,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattleServantData_o *svtData; // x0
  BattleBuffData_BuffData_o *v6; // x0
  const MethodInfo *v7; // x2
  int32_t turn; // w8
  int v9; // w8
  int v10; // w20
  BattleCommandComponent_o *v11; // x0
  bool v12; // w1
  int32_t v13; // w2
  struct BattleCommandData_o *data; // x8
  int treasureDvc; // w9

  if ( isForceHide || (svtData = this->fields.svtData) == 0LL )
  {
    v11 = this;
    v12 = 0;
    v13 = 0;
  }
  else
  {
    v6 = BattleServantData__getTdTypeChangeBuffSingle(svtData, 0LL);
    if ( v6 )
    {
      turn = v6->fields.turn;
      if ( turn + 1 >= 0 )
        v9 = turn + 1;
      else
        v9 = turn + 2;
      v10 = v9 >> 1;
    }
    else
    {
      v10 = 0;
    }
    data = this->fields.data;
    if ( data )
    {
      treasureDvc = data->fields.treasureDvc;
      LOBYTE(data) = v10 > 0 && treasureDvc > 0;
      if ( v6 )
      {
        if ( v10 >= 1 && treasureDvc >= 1 )
          LOBYTE(data) = BattleCommandComponent__UpdateTreasureDeviceTypeImage(this, v6->fields.buffId, v7);
      }
    }
    v12 = (unsigned __int8)data & 1;
    v11 = this;
    v13 = v10;
  }
  BattleCommandComponent__SetTreasureDeviceTypeChange(v11, v12, v13, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleCommandComponent__UpdateTreasureDeviceTypeImage(
        BattleCommandComponent_o *this,
        int32_t buffId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  BuffMaster_o *Master_object; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  UISprite_o *nowTreasureDeviceTypeImage; // x20
  System_String_o *v18; // x21
  __int64 v19; // x1
  UnityEngine_Object_o *defaultTdTypeImageAtlas; // x20
  UISpriteData_o *Sprite; // x0
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18B00 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&buffId, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BuffMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_20301/*"icon_cardtypechange"*/, v11, v12);
    byte_4B18B00 = 1;
  }
  name = 0LL;
  if ( !BattleCommandComponent__SetTreasureDeviceTypeImageDefaultAtlas(this, *(const MethodInfo **)&buffId) )
    goto LABEL_20;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
  Master_object = (BuffMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_object )
    goto LABEL_22;
  if ( !BuffMaster__TryGetDisplayCardBottomImageName(
          Master_object,
          &name,
          buffId,
          (System_String_o *)StringLiteral_20301/*"icon_cardtypechange"*/,
          0LL) )
    goto LABEL_20;
  nowTreasureDeviceTypeImage = this->fields.nowTreasureDeviceTypeImage;
  v18 = name;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16);
  if ( AtlasManager__SetEventSprite(nowTreasureDeviceTypeImage, v18, 0LL) )
    goto LABEL_19;
  defaultTdTypeImageAtlas = (UnityEngine_Object_o *)this->fields.defaultTdTypeImageAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( !UnityEngine_Object__op_Inequality(defaultTdTypeImageAtlas, 0LL, 0LL) )
  {
LABEL_20:
    LOBYTE(Sprite) = 0;
    return (char)Sprite;
  }
  Master_object = (BuffMaster_o *)this->fields.defaultTdTypeImageAtlas;
  if ( !Master_object )
    goto LABEL_22;
  Sprite = UIAtlas__GetSprite((UIAtlas_o *)Master_object, name, 0LL);
  if ( !Sprite )
    return (char)Sprite;
  Master_object = (BuffMaster_o *)this->fields.nowTreasureDeviceTypeImage;
  if ( !Master_object
    || (UISprite__set_atlas((UISprite_o *)Master_object, this->fields.defaultTdTypeImageAtlas, 0LL),
        (Master_object = (BuffMaster_o *)this->fields.nowTreasureDeviceTypeImage) == 0LL) )
  {
LABEL_22:
    sub_1BCAA3C(Master_object, v15);
  }
  UISprite__set_spriteName((UISprite_o *)Master_object, name, 0LL);
LABEL_19:
  LOBYTE(Sprite) = 1;
  return (char)Sprite;
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__WaitForErrorViewFinished(
        BattleCommandComponent_o *this,
        float waitSeconds,
        System_String_o *busyVoiceSe,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B18B14 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandComponent__WaitForErrorViewFinished_d__244_TypeInfo, busyVoiceSe, method);
    byte_4B18B14 = 1;
  }
  v8 = sub_1BCAA2C(BattleCommandComponent__WaitForErrorViewFinished_d__244_TypeInfo, busyVoiceSe, method, v4);
  BattleCommandComponent__WaitForErrorViewFinished_d__244___ctor(
    (BattleCommandComponent__WaitForErrorViewFinished_d__244_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_1BCAA3C(v9, v10);
  *(_QWORD *)(v8 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 40), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(float *)(v8 + 32) = waitSeconds;
  *(_QWORD *)(v8 + 48) = busyVoiceSe;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 48), (int64_t)busyVoiceSe, v17, v18, v19, v20, v21, v22);
  return (System_Collections_IEnumerator_o *)v8;
}


bool __fastcall BattleCommandComponent___setBuffIconList_b__138_0(
        BattleCommandComponent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleCommandComponent_o *v4; // x20
  struct BattleCommandData_o *data; // x8

  if ( !buff )
    goto LABEL_7;
  v4 = this;
  this = (BattleCommandComponent_o *)BattleBuffData_BuffData__isCommandCodeBuff(buff, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  data = v4->fields.data;
  if ( !data )
LABEL_7:
    sub_1BCAA3C(this, buff);
  return !BattleBuffData_BuffData__IsMineCommandCode(buff, data->fields.userCommandCodeId, 0LL);
}


bool __fastcall BattleCommandComponent___setBuffIconList_b__138_1(
        BattleCommandComponent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1BCAA3C(this, 0LL);
  return BattleBuffData_BuffData__isCommandCardBuff(buff, 0LL)
      && !BattleBuffData_BuffData__isEnableCommandCardBuff(buff, this->fields.data, 0LL);
}


bool __fastcall BattleCommandComponent___setBuffIconList_b__138_2(
        BattleCommandComponent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleCommandComponent_o *v4; // x20
  struct BattleCommandData_o *data; // x8

  if ( !buff )
    goto LABEL_6;
  v4 = this;
  this = (BattleCommandComponent_o *)BattleBuffData_BuffData__IsCommandAssistBuff(buff, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    data = v4->fields.data;
    if ( data )
      return buff->fields.commandAssistId != data->fields.commandAssistId;
LABEL_6:
    sub_1BCAA3C(this, buff);
  }
  return 0;
}


void __fastcall BattleCommandComponent__addCriticalBuff(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
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
  __int64 v14; // x21
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Action_o *v32; // x20
  BattleCommandComponent_o *v33; // x0
  const MethodInfo *v34; // x2
  System_Collections_IEnumerator_o *v35; // x0
  System_String_o *CommonSeNameLocal; // x20
  System_String_o *CueSheet; // x21
  float DefaultPreDelayTime; // s0
  BattleCommandComponent_o *v39; // x0
  const MethodInfo *v40; // x1
  System_Collections_IEnumerator_o *v41; // x1

  if ( (byte_4B18ADD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, obj, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SeManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_BattleCommandComponent___c__DisplayClass160_0__addCriticalBuff_b__0__, v10, v11);
    sub_1BCA7E0(&BattleCommandComponent___c__DisplayClass160_0_TypeInfo, v12, v13);
    byte_4B18ADD = 1;
  }
  v14 = sub_1BCAA2C(BattleCommandComponent___c__DisplayClass160_0_TypeInfo, obj, method, v3);
  BattleCommandComponent___c__DisplayClass160_0___ctor((BattleCommandComponent___c__DisplayClass160_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_8;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = obj;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)obj, v23, v24, v25, v26, v27, v28);
  v32 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v30, v31);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v14,
    Method_BattleCommandComponent___c__DisplayClass160_0__addCriticalBuff_b__0__,
    0LL);
  v35 = BattleCommandComponent__delayFrame(v33, v32, v34);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v35, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance
    || (CommonSeNameLocal = SeManager__GetCommonSeNameLocal((SeManager_o *)Instance, 7, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__)) == 0LL)
    || (CueSheet = SoundManager__GetCueSheet((SoundManager_o *)Instance, CommonSeNameLocal, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__)) == 0LL) )
  {
LABEL_8:
    sub_1BCAA3C(Instance, v16);
  }
  DefaultPreDelayTime = SeManager__GetDefaultPreDelayTime((SeManager_o *)Instance, CueSheet, CommonSeNameLocal, 0LL);
  v41 = BattleCommandComponent__PlayStarSe(v39, DefaultPreDelayTime / 1000.0, v40);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v41, 0LL);
}


void __fastcall BattleCommandComponent__addFirstAura(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *effect,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *effectobj; // x19
  UnityEngine_GameObject_o *Object; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  BattleCommandComponent__stopFirstAura(this, (const MethodInfo *)effect);
  effectobj = this->fields.effectobj;
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, effect, this->fields.objectRoot, 0LL, 0LL);
  if ( !effectobj )
    sub_1BCAA3C(Object, v7);
  if ( effectobj->max_length <= 4 )
    sub_1BCAA44(Object, v7);
  effectobj->m_Items[4] = Object;
  sub_1BCA784((PartyOrganizationUtility_o *)&effectobj->m_Items[4], (int64_t)Object, v8, v9, v10, v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__addObject(
        BattleCommandComponent_o *this,
        System_String_o *name,
        int32_t type,
        const MethodInfo *method)
{
  BattleCommandComponent_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct UnityEngine_GameObject_array *addObjectList; // x8
  UnityEngine_Object_o *v12; // x22
  struct UnityEngine_GameObject_array *v13; // x8
  UnityEngine_Object_o *v14; // x22
  System_String_o *v15; // x0
  UnityEngine_Object_o *v16; // x21
  __int64 v17; // x2
  BattleCommandComponent_o *v18; // x22
  System_String_o *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct UnityEngine_GameObject_array *v26; // x8
  Il2CppClass **v27; // x0
  struct UnityEngine_GameObject_array *v28; // x8
  System_Enum_o v29; // [xsp+8h] [xbp-58h] BYREF
  int32_t v30; // [xsp+18h] [xbp-48h]

  v6 = this;
  if ( (byte_4B18ACD & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo, name, *(_QWORD *)&type);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    this = (BattleCommandComponent_o *)sub_1BCA7E0(&StringLiteral_19064/*"effect/"*/, v9, v10);
    byte_4B18ACD = 1;
  }
  addObjectList = v6->fields.addObjectList;
  if ( !addObjectList )
    goto LABEL_23;
  if ( addObjectList->max_length <= type )
    goto LABEL_24;
  v12 = (UnityEngine_Object_o *)addObjectList->m_Items[type];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, name);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v13 = v6->fields.addObjectList;
    if ( !v13 )
      goto LABEL_23;
    if ( v13->max_length <= type )
      goto LABEL_24;
    v14 = (UnityEngine_Object_o *)v13->m_Items[type];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, name);
    UnityEngine_Object__Destroy_70154244(v14, 0LL);
  }
  v15 = System_String__Concat_62401220((System_String_o *)StringLiteral_19064/*"effect/"*/, name, 0LL);
  this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject_38952608(
                                       (BaseMonoBehaviour_o *)v6,
                                       v15,
                                       v6->fields.objectRoot,
                                       0LL,
                                       0LL);
  if ( !this )
    goto LABEL_23;
  v16 = (UnityEngine_Object_o *)this;
  this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v18 = this;
  if ( !byte_4B109C7 )
  {
    this = (BattleCommandComponent_o *)sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, name, v17);
    byte_4B109C7 = 1;
  }
  if ( !v18
    || (UnityEngine_Transform__set_localRotation(
          (UnityEngine_Transform_o *)v18,
          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
          0LL),
        v29.klass = (System_Enum_c *)BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo,
        v29.monitor = (void *)-1LL,
        v30 = type,
        v19 = System_Enum__ToString(&v29, 0LL),
        UnityEngine_Object__set_name(v16, v19, 0LL),
        (v26 = v6->fields.addObjectList) == 0LL) )
  {
LABEL_23:
    sub_1BCAA3C(this, name);
  }
  if ( v26->max_length <= type )
    goto LABEL_24;
  v27 = &v26->obj.klass + type;
  v27[4] = (Il2CppClass *)v16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 4), (int64_t)v16, v20, v21, v22, v23, v24, v25);
  v28 = v6->fields.addObjectList;
  if ( !v28 )
    goto LABEL_23;
  if ( v28->max_length <= type )
LABEL_24:
    sub_1BCAA44(this, name);
  this = (BattleCommandComponent_o *)v28->m_Items[type];
  if ( !this )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__attachEffect(
        BattleCommandComponent_o *this,
        System_String_o *name,
        int32_t index,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  UnityEngine_GameObject_o *Object_38952608; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x21
  __int64 v11; // x2
  UnityEngine_Transform_o *v12; // x22
  __int64 v13; // x2
  UnityEngine_Transform_o *v14; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct UnityEngine_GameObject_array *effectobj; // x8
  int32_t max_length; // w9
  Il2CppClass **v23; // x0

  if ( (byte_4B18AE1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19064/*"effect/"*/, name, *(_QWORD *)&index);
    byte_4B18AE1 = 1;
  }
  v7 = System_String__Concat_62401220((System_String_o *)StringLiteral_19064/*"effect/"*/, name, 0LL);
  Object_38952608 = BaseMonoBehaviour__createObject_38952608(
                      (BaseMonoBehaviour_o *)this,
                      v7,
                      this->fields.objectRoot,
                      0LL,
                      0LL);
  if ( !Object_38952608 )
    goto LABEL_16;
  v10 = Object_38952608;
  Object_38952608 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Object_38952608, 0LL);
  v12 = (UnityEngine_Transform_o *)Object_38952608;
  if ( !byte_4B109C1 )
  {
    Object_38952608 = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v9, v11);
    byte_4B109C1 = 1;
  }
  if ( !v12 )
    goto LABEL_16;
  UnityEngine_Transform__set_localPosition(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Object_38952608 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v14 = (UnityEngine_Transform_o *)Object_38952608;
  if ( !byte_4B109C6 )
  {
    Object_38952608 = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v9, v13);
    byte_4B109C6 = 1;
  }
  if ( !v14
    || (UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (effectobj = this->fields.effectobj) == 0LL) )
  {
LABEL_16:
    sub_1BCAA3C(Object_38952608, v9);
  }
  max_length = effectobj->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
      sub_1BCAA44(Object_38952608, v9);
    v23 = &effectobj->obj.klass + index;
    v23[4] = (Il2CppClass *)v10;
    sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)v10, v15, v16, v17, v18, v19, v20);
  }
}


bool __fastcall BattleCommandComponent__checkCriticalPointValid(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *criticalObject; // x0

  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    sub_1BCAA3C(0LL, method);
  return UnityEngine_GameObject__get_activeSelf(criticalObject, 0LL);
}


bool __fastcall BattleCommandComponent__checkMark(
        BattleCommandComponent_o *this,
        int32_t mark,
        const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  return data && data->fields.markindex == mark;
}


bool __fastcall BattleCommandComponent__checkObject(BattleCommandComponent_o *this, const MethodInfo *method)
{
  return this->fields.data != 0LL;
}


void __fastcall BattleCommandComponent__compCriticallabel(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  float v5; // s8
  float y; // s9
  float z; // s10
  float v8; // s11
  float v9; // s0
  float v10; // s0
  float v11; // s10
  float v12; // s9
  float v13; // s8
  const MethodInfo *v14; // x1
  struct UnityEngine_GameObject_o *tr_criticaleffect; // x8
  UnityEngine_GameObject_o *effect_fullcricomplete; // x20
  UnityEngine_Transform_o *v17; // x0
  const MethodInfo *v18; // x3
  struct UnityEngine_GameObject_o *SpawnerObj; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_14;
  LODWORD(v5) = (unsigned int)UnityEngine_Transform__get_lossyScale(transform, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_14;
  lossyScale = UnityEngine_Transform__get_lossyScale(transform, 0LL);
  y = lossyScale.fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_14;
  v27 = UnityEngine_Transform__get_lossyScale(transform, 0LL);
  z = v27.fields.z;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_14;
  transform = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !transform )
    goto LABEL_14;
  v8 = 1.0 / z;
  v9 = COERCE_FLOAT(UnityEngine_Transform__get_localScale(transform, 0LL));
  v10 = v9 + v9;
  v11 = (float)(1.0 / v5) * v10;
  v12 = (float)(1.0 / y) * v10;
  v13 = v8 * v10;
  transform = (UnityEngine_Transform_o *)BattleCommandComponent__IsMaxViewCritical(this, v14);
  tr_criticaleffect = this->fields.tr_criticaleffect;
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !tr_criticaleffect )
      goto LABEL_14;
    effect_fullcricomplete = this->fields.effect_fullcricomplete;
  }
  else
  {
    if ( !tr_criticaleffect )
      goto LABEL_14;
    effect_fullcricomplete = this->fields.effect_cricomplete;
  }
  v17 = UnityEngine_GameObject__get_transform(this->fields.tr_criticaleffect, 0LL);
  v28.fields.x = v11;
  v28.fields.y = v12;
  v28.fields.z = v13;
  SpawnerObj = BattleCommandComponent__GetSpawnerObj(this, effect_fullcricomplete, v17, v28, v18);
  this->fields.countUpFinishEffect = SpawnerObj;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.countUpFinishEffect,
    (int64_t)SpawnerObj,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  transform = (UnityEngine_Transform_o *)this->fields.countUpFinishEffect;
  if ( !transform
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL),
        (transform = (UnityEngine_Transform_o *)this->fields.countUpFinishEffect) == 0LL) )
  {
LABEL_14:
    sub_1BCAA3C(transform, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  this->fields.isCountUp = 0;
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B18B0D & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_TypeInfo, method, v2);
    byte_4B18B0D = 1;
  }
  v5 = sub_1BCAA2C(BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_TypeInfo, method, v2, v3);
  BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233___ctor(
    (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__delayFrame(
        BattleCommandComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B18ADF & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandComponent__delayFrame_d__162_TypeInfo, action, method);
    byte_4B18ADF = 1;
  }
  v5 = sub_1BCAA2C(BattleCommandComponent__delayFrame_d__162_TypeInfo, action, method, v3);
  BattleCommandComponent__delayFrame_d__162___ctor((BattleCommandComponent__delayFrame_d__162_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  *(_QWORD *)(v5 + 32) = action;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)action, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleCommandComponent__endFashTypeCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCommandComponent_o *v3; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_array *v6; // x8
  UnityEngine_Object_o *v7; // x19

  v3 = this;
  if ( (byte_4B18AF3 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18AF3 = 1;
  }
  effectobj = v3->fields.effectobj;
  if ( !effectobj )
    goto LABEL_14;
  if ( !effectobj->max_length )
    goto LABEL_15;
  v5 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v3->fields.effectobj;
    if ( v6 )
    {
      if ( v6->max_length )
      {
        v7 = (UnityEngine_Object_o *)v6->m_Items[0];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        UnityEngine_Object__Destroy_70154244(v7, 0LL);
        return;
      }
LABEL_15:
      sub_1BCAA44(this, method);
    }
LABEL_14:
    sub_1BCAA3C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__fadeoutEffect(
        BattleCommandComponent_o *this,
        bool isTresure,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B18AE3 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandComponent__fadeoutEffect_d__182_TypeInfo, isTresure, method);
    byte_4B18AE3 = 1;
  }
  v6 = sub_1BCAA2C(BattleCommandComponent__fadeoutEffect_d__182_TypeInfo, isTresure, method, v3);
  BattleCommandComponent__fadeoutEffect_d__182___ctor((BattleCommandComponent__fadeoutEffect_d__182_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_1BCAA3C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v9, v10, v11, v12, v13, v14);
  *(_BYTE *)(v6 + 40) = isTresure;
  return (System_Collections_IEnumerator_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__flashComboSvt(
        BattleCommandComponent_o *this,
        int32_t index,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  struct System_Boolean_array *sameflg; // x8

  if ( index > 2 )
    goto LABEL_6;
  if ( !combo || (sameflg = combo->fields.sameflg) == 0LL )
    sub_1BCAA3C(this, *(_QWORD *)&index);
  if ( sameflg->max_length <= index )
    sub_1BCAA44(this, index);
  if ( sameflg->m_Items[index + 4] )
LABEL_6:
    BattleCommandComponent__flashServant(this, *(const MethodInfo **)&index);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__flashComboType(
        BattleCommandComponent_o *this,
        int32_t index,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  if ( !combo )
    sub_1BCAA3C(this, *(_QWORD *)&index);
  if ( combo->fields.flash )
    BattleCommandComponent__flashTypeCard(this, *(const MethodInfo **)&index);
}


void __fastcall BattleCommandComponent__flashServant(BattleCommandComponent_o *this, const MethodInfo *method)
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
  UnityEngine_Object_o *facetex; // x20
  int64_t v30; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct UnityEngine_GameObject_array *effectobj; // x20
  UnityEngine_GameObject_o *v33; // x21
  UnityEngine_Transform_o *parent; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct UnityEngine_GameObject_array *v41; // x8
  UIWidget_o *v42; // x20
  UnityEngine_Shader_o *v43; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  UnityEngine_Material_o *v47; // x22
  struct UnityEngine_GameObject_array *v48; // x8
  UnityEngine_GameObject_o *v49; // x20
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Object_array *v56; // x21
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x22
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x22
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x22
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  __int64 v102; // x1
  System_Collections_Hashtable_o *v103; // x0
  struct UnityEngine_GameObject_array *v104; // x8
  __int64 v105; // x0
  __int64 v106; // [xsp+0h] [xbp-40h] BYREF
  int v107; // [xsp+8h] [xbp-38h]
  int v108; // [xsp+1Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v110; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v111; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4B18AF0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___, method, v2);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v4, v5);
    sub_1BCA7E0(&object___TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&float_TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_22515/*"oncompletetarget"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_19198/*"endFashSvt"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_16302/*"_AddColor"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_23258/*"scale"*/, v24, v25);
    sub_1BCA7E0(&iTween_TypeInfo, v26, v27);
    byte_4B18AF0 = 1;
  }
  BattleCommandComponent__DestroyEffectObject1(this, method);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  if ( !UnityEngine_Object__op_Equality(facetex, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !gameObject )
      goto LABEL_62;
    effectobj = this->fields.effectobj;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !this->fields.nomalwidget )
      goto LABEL_62;
    v33 = (UnityEngine_GameObject_o *)gameObject;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)this->fields.nomalwidget,
                                              0LL);
    if ( !gameObject )
      goto LABEL_62;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              0LL);
    if ( !gameObject )
      goto LABEL_62;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                              (BaseMonoBehaviour_o *)this,
                                              v33,
                                              parent,
                                              0LL,
                                              0LL);
    if ( !effectobj )
      goto LABEL_62;
    if ( effectobj->max_length <= 1 )
      goto LABEL_63;
    effectobj->m_Items[1] = (UnityEngine_GameObject_o *)gameObject;
    sub_1BCA784((PartyOrganizationUtility_o *)&effectobj->m_Items[1], (int64_t)gameObject, v35, v36, v37, v38, v39, v40);
    v41 = this->fields.effectobj;
    if ( !v41 )
      goto LABEL_62;
    if ( v41->max_length <= 1 )
      goto LABEL_63;
    gameObject = (UnityEngine_Component_o *)v41->m_Items[1];
    if ( !gameObject )
      goto LABEL_62;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
    if ( !gameObject )
      goto LABEL_62;
    v42 = (UIWidget_o *)gameObject;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_62;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              0LL);
    if ( !gameObject )
      goto LABEL_62;
    v109.fields.x = 0.0;
    v109.fields.y = 0.0;
    v109.fields.z = -5.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v109, 0LL);
    this->fields.newMatriarl = 1;
    v43 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))v42->klass->vtable._28_get_shader.method)(
                                    v42,
                                    v42->klass->vtable._29_set_shader.methodPtr);
    v47 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v44, v45, v46);
    UnityEngine_Material___ctor(v47, v43, 0LL);
    ((void (__fastcall *)(UIWidget_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v42->klass->vtable._25_set_material.method)(
      v42,
      v47,
      v42->klass->vtable._26_get_mainTexture.methodPtr);
    gameObject = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))v42->klass->vtable._24_get_material.method)(
                                              v42,
                                              v42->klass->vtable._25_set_material.methodPtr);
    if ( !gameObject )
      goto LABEL_62;
    v110.fields.r = 1.0;
    v110.fields.g = 1.0;
    v110.fields.b = 1.0;
    v110.fields.a = 0.0;
    UnityEngine_Material__SetColor(
      (UnityEngine_Material_o *)gameObject,
      (System_String_o *)StringLiteral_16302/*"_AddColor"*/,
      v110,
      0LL);
    UIWidget__set_depth(v42, this->fields.basedepth + 400, 0LL);
    v48 = this->fields.effectobj;
    if ( !v48 )
      goto LABEL_62;
    if ( v48->max_length <= 1 )
      goto LABEL_63;
    v49 = v48->m_Items[1];
    gameObject = (UnityEngine_Component_o *)sub_1BCA888(object___TypeInfo, 8LL);
    if ( !gameObject )
      goto LABEL_62;
    v56 = (System_Object_array *)gameObject;
    gameObject = (UnityEngine_Component_o *)StringLiteral_23258/*"scale"*/;
    if ( StringLiteral_23258/*"scale"*/ )
    {
      gameObject = (UnityEngine_Component_o *)sub_1BCA91C(StringLiteral_23258/*"scale"*/, v56->obj.klass->_1.element_class);
      if ( !gameObject )
        goto LABEL_64;
      v30 = StringLiteral_23258/*"scale"*/;
    }
    else
    {
      v30 = 0LL;
    }
    if ( !v56->max_length )
      goto LABEL_63;
    v56->m_Items[0] = (Il2CppObject *)v30;
    sub_1BCA784((PartyOrganizationUtility_o *)v56->m_Items, v30, v50, v51, v52, v53, v54, v55);
    v106 = vdup_n_s32(0x3FE66666u).n64_i64[0];
    v107 = 1065353216;
    gameObject = (UnityEngine_Component_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v106);
    v63 = (int64_t)gameObject;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)sub_1BCA91C(gameObject, v56->obj.klass->_1.element_class)) != 0LL )
    {
      if ( v56->max_length <= 1 )
        goto LABEL_63;
      v56->m_Items[1] = (Il2CppObject *)v63;
      sub_1BCA784((PartyOrganizationUtility_o *)&v56->m_Items[1], v63, v57, v58, v59, v60, v61, v62);
      gameObject = (UnityEngine_Component_o *)StringLiteral_24178/*"time"*/;
      if ( StringLiteral_24178/*"time"*/ )
      {
        gameObject = (UnityEngine_Component_o *)sub_1BCA91C(StringLiteral_24178/*"time"*/, v56->obj.klass->_1.element_class);
        if ( !gameObject )
          goto LABEL_64;
        v30 = StringLiteral_24178/*"time"*/;
      }
      else
      {
        v30 = 0LL;
      }
      if ( v56->max_length <= 2 )
        goto LABEL_63;
      v56->m_Items[2] = (Il2CppObject *)v30;
      sub_1BCA784((PartyOrganizationUtility_o *)&v56->m_Items[2], v30, v64, v65, v66, v67, v68, v69);
      v108 = 1065353216;
      gameObject = (UnityEngine_Component_o *)j_il2cpp_value_box_0(float_TypeInfo, &v108);
      v76 = (int64_t)gameObject;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)sub_1BCA91C(gameObject, v56->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v56->max_length <= 3 )
          goto LABEL_63;
        v56->m_Items[3] = (Il2CppObject *)v76;
        sub_1BCA784((PartyOrganizationUtility_o *)&v56->m_Items[3], v76, v70, v71, v72, v73, v74, v75);
        gameObject = (UnityEngine_Component_o *)StringLiteral_22515/*"oncompletetarget"*/;
        if ( StringLiteral_22515/*"oncompletetarget"*/ )
        {
          gameObject = (UnityEngine_Component_o *)sub_1BCA91C(StringLiteral_22515/*"oncompletetarget"*/, v56->obj.klass->_1.element_class);
          if ( !gameObject )
            goto LABEL_64;
          v30 = StringLiteral_22515/*"oncompletetarget"*/;
        }
        else
        {
          v30 = 0LL;
        }
        if ( v56->max_length <= 4 )
          goto LABEL_63;
        v56->m_Items[4] = (Il2CppObject *)v30;
        sub_1BCA784((PartyOrganizationUtility_o *)&v56->m_Items[4], v30, v77, v78, v79, v80, v81, v82);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
        v89 = (int64_t)gameObject;
        if ( !gameObject
          || (gameObject = (UnityEngine_Component_o *)sub_1BCA91C(gameObject, v56->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v56->max_length <= 5 )
            goto LABEL_63;
          v56->m_Items[5] = (Il2CppObject *)v89;
          sub_1BCA784((PartyOrganizationUtility_o *)&v56->m_Items[5], v89, v83, v84, v85, v86, v87, v88);
          gameObject = (UnityEngine_Component_o *)StringLiteral_22513/*"oncomplete"*/;
          if ( StringLiteral_22513/*"oncomplete"*/ )
          {
            gameObject = (UnityEngine_Component_o *)sub_1BCA91C(StringLiteral_22513/*"oncomplete"*/, v56->obj.klass->_1.element_class);
            if ( !gameObject )
              goto LABEL_64;
            v30 = StringLiteral_22513/*"oncomplete"*/;
          }
          else
          {
            v30 = 0LL;
          }
          if ( v56->max_length <= 6 )
            goto LABEL_63;
          v56->m_Items[6] = (Il2CppObject *)v30;
          sub_1BCA784((PartyOrganizationUtility_o *)&v56->m_Items[6], v30, v90, v91, v92, v93, v94, v95);
          gameObject = (UnityEngine_Component_o *)StringLiteral_19198/*"endFashSvt"*/;
          if ( !StringLiteral_19198/*"endFashSvt"*/ )
          {
            v30 = 0LL;
            goto LABEL_55;
          }
          gameObject = (UnityEngine_Component_o *)sub_1BCA91C(StringLiteral_19198/*"endFashSvt"*/, v56->obj.klass->_1.element_class);
          if ( gameObject )
          {
            v30 = StringLiteral_19198/*"endFashSvt"*/;
LABEL_55:
            if ( v56->max_length <= 7 )
              goto LABEL_63;
            v56->m_Items[7] = (Il2CppObject *)v30;
            sub_1BCA784((PartyOrganizationUtility_o *)&v56->m_Items[7], v30, v96, v97, v98, v99, v100, v101);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v102);
            v103 = iTween__Hash(v56, 0LL);
            iTween__ScaleTo_60945080(v49, v103, 0LL);
            v104 = this->fields.effectobj;
            if ( v104 )
            {
              if ( v104->max_length > 1 )
              {
                v111.fields.r = 0.0;
                v111.fields.g = 0.0;
                v111.fields.b = 0.0;
                v111.fields.a = 0.0;
                TweenColor__Begin(v104->m_Items[1], 1.0, v111, 0LL);
                return;
              }
LABEL_63:
              sub_1BCAA44(gameObject, v30);
            }
LABEL_62:
            sub_1BCAA3C(gameObject, v30);
          }
        }
      }
    }
LABEL_64:
    v105 = sub_1BCAA60(gameObject);
    sub_1BCA908(v105, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__flashType(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_Collections_IEnumerator_o *v6; // x1

  BattleCommandComponent__flashTypeCard(this, (const MethodInfo *)flg);
  if ( flg )
  {
    v6 = BattleCommandComponent__fadeoutEffect(this, 0, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
  }
}


void __fastcall BattleCommandComponent__flashTypeCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCommandComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
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
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v25; // x20
  struct UnityEngine_GameObject_array *v26; // x8
  UnityEngine_Object_o *v27; // x20
  struct UnityEngine_GameObject_array *v28; // x20
  BattleCommandComponent_o *v29; // x21
  BattleCommandComponent_o *v30; // x22
  UnityEngine_Transform_o *transform; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct UnityEngine_GameObject_array *v38; // x8
  __int64 v39; // x1
  Il2CppObject *ComponentInChildren_object; // x20
  struct UnityEngine_GameObject_array *v41; // x8
  struct UnityEngine_GameObject_array *v42; // x8
  UnityEngine_GameObject_o *v43; // x20
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  BattleCommandComponent_o *v50; // x21
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  BattleCommandComponent_o *v57; // x22
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  BattleCommandComponent_o *v70; // x22
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  BattleCommandComponent_o *v83; // x19
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  __int64 v96; // x1
  System_Collections_Hashtable_o *v97; // x0
  __int64 v98; // x0
  int v99; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v100; // [xsp+10h] [xbp-40h] BYREF
  int v101; // [xsp+18h] [xbp-38h]
  UnityEngine_Color_o v102; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v3 = this;
  if ( (byte_4B18AF2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, method, v2);
    sub_1BCA7E0(&object___TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&float_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_19199/*"endFashTypeCard"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_22515/*"oncompletetarget"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_23258/*"scale"*/, v20, v21);
    this = (BattleCommandComponent_o *)sub_1BCA7E0(&iTween_TypeInfo, v22, v23);
    byte_4B18AF2 = 1;
  }
  effectobj = v3->fields.effectobj;
  if ( !effectobj )
    goto LABEL_71;
  if ( !effectobj->max_length )
    goto LABEL_72;
  v25 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v26 = v3->fields.effectobj;
    if ( !v26 )
      goto LABEL_71;
    if ( !v26->max_length )
      goto LABEL_72;
    v27 = (UnityEngine_Object_o *)v26->m_Items[0];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    UnityEngine_Object__Destroy_70154244(v27, 0LL);
  }
  this = (BattleCommandComponent_o *)v3->fields.icon;
  if ( !this )
    goto LABEL_71;
  v28 = v3->fields.effectobj;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v3->fields.nomalwidget )
    goto LABEL_71;
  v29 = this;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)v3->fields.nomalwidget,
                                       0LL);
  if ( !this )
    goto LABEL_71;
  this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_71;
  this = (BattleCommandComponent_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !v3->fields.icon )
    goto LABEL_71;
  v30 = this;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)v3->fields.icon,
                                       0LL);
  if ( !this )
    goto LABEL_71;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject(
                                       (BaseMonoBehaviour_o *)v3,
                                       (UnityEngine_GameObject_o *)v29,
                                       (UnityEngine_Transform_o *)v30,
                                       transform,
                                       0LL);
  if ( !v28 )
    goto LABEL_71;
  if ( !v28->max_length )
    goto LABEL_72;
  v28->m_Items[0] = (UnityEngine_GameObject_o *)this;
  sub_1BCA784((PartyOrganizationUtility_o *)v28->m_Items, (int64_t)this, v32, v33, v34, v35, v36, v37);
  v38 = v3->fields.effectobj;
  if ( !v38 )
    goto LABEL_71;
  if ( !v38->max_length )
    goto LABEL_72;
  this = (BattleCommandComponent_o *)v38->m_Items[0];
  if ( !this )
    goto LABEL_71;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)ComponentInChildren_object,
                                       0LL,
                                       0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !ComponentInChildren_object )
      goto LABEL_71;
    UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, v3->fields.basedepth + 400, 0LL);
    v41 = v3->fields.effectobj;
    if ( !v41 )
      goto LABEL_71;
    if ( !v41->max_length )
      goto LABEL_72;
    v102.fields.r = 0.0;
    v102.fields.g = 0.0;
    v102.fields.b = 0.0;
    v102.fields.a = 0.0;
    this = (BattleCommandComponent_o *)TweenColor__Begin(v41->m_Items[0], 1.0, v102, 0LL);
  }
  v42 = v3->fields.effectobj;
  if ( !v42 )
    goto LABEL_71;
  if ( !v42->max_length )
    goto LABEL_72;
  v43 = v42->m_Items[0];
  this = (BattleCommandComponent_o *)sub_1BCA888(object___TypeInfo, 8LL);
  if ( !this )
LABEL_71:
    sub_1BCAA3C(this, method);
  v50 = this;
  this = (BattleCommandComponent_o *)StringLiteral_23258/*"scale"*/;
  if ( StringLiteral_23258/*"scale"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1BCA91C(StringLiteral_23258/*"scale"*/, v50->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
    method = (const MethodInfo *)StringLiteral_23258/*"scale"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( !LODWORD(v50->fields.m_CancellationTokenSource) )
    goto LABEL_72;
  v50->fields.objectRoot = (struct UnityEngine_Transform_o *)method;
  sub_1BCA784((PartyOrganizationUtility_o *)&v50->fields.objectRoot, (int64_t)method, v44, v45, v46, v47, v48, v49);
  v100 = 0x4000000040000000LL;
  v101 = 1065353216;
  this = (BattleCommandComponent_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v100);
  v57 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_1BCA91C(this, v50->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
  }
  if ( LODWORD(v50->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_72;
  v50->fields.bg = (struct UISprite_o *)v57;
  sub_1BCA784((PartyOrganizationUtility_o *)&v50->fields.bg, (int64_t)v57, v51, v52, v53, v54, v55, v56);
  this = (BattleCommandComponent_o *)StringLiteral_24178/*"time"*/;
  if ( StringLiteral_24178/*"time"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1BCA91C(StringLiteral_24178/*"time"*/, v50->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
    method = (const MethodInfo *)StringLiteral_24178/*"time"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v50->fields.m_CancellationTokenSource) <= 2 )
    goto LABEL_72;
  v50->fields.icon = (struct UISprite_o *)method;
  sub_1BCA784((PartyOrganizationUtility_o *)&v50->fields.icon, (int64_t)method, v58, v59, v60, v61, v62, v63);
  v99 = 1065353216;
  this = (BattleCommandComponent_o *)j_il2cpp_value_box_0(float_TypeInfo, &v99);
  v70 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_1BCA91C(this, v50->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
  }
  if ( LODWORD(v50->fields.m_CancellationTokenSource) <= 3 )
    goto LABEL_72;
  v50->fields.text = (struct UISprite_o *)v70;
  sub_1BCA784((PartyOrganizationUtility_o *)&v50->fields.text, (int64_t)v70, v64, v65, v66, v67, v68, v69);
  this = (BattleCommandComponent_o *)StringLiteral_22515/*"oncompletetarget"*/;
  if ( StringLiteral_22515/*"oncompletetarget"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1BCA91C(StringLiteral_22515/*"oncompletetarget"*/, v50->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
    method = (const MethodInfo *)StringLiteral_22515/*"oncompletetarget"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v50->fields.m_CancellationTokenSource) <= 4 )
    goto LABEL_72;
  v50->fields.facetex = (struct UITexture_o *)method;
  sub_1BCA784((PartyOrganizationUtility_o *)&v50->fields.facetex, (int64_t)method, v71, v72, v73, v74, v75, v76);
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
  v83 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_1BCA91C(this, v50->klass->_1.element_class);
    if ( !this )
    {
LABEL_73:
      v98 = sub_1BCAA60(this);
      sub_1BCA908(v98, 0LL);
    }
  }
  if ( LODWORD(v50->fields.m_CancellationTokenSource) <= 5 )
    goto LABEL_72;
  v50->fields.nobletex = (struct UITexture_o *)v83;
  sub_1BCA784((PartyOrganizationUtility_o *)&v50->fields.nobletex, (int64_t)v83, v77, v78, v79, v80, v81, v82);
  this = (BattleCommandComponent_o *)StringLiteral_22513/*"oncomplete"*/;
  if ( StringLiteral_22513/*"oncomplete"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1BCA91C(StringLiteral_22513/*"oncomplete"*/, v50->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
    method = (const MethodInfo *)StringLiteral_22513/*"oncomplete"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v50->fields.m_CancellationTokenSource) <= 6 )
    goto LABEL_72;
  v50->fields.friendIcon = (struct UISprite_o *)method;
  sub_1BCA784((PartyOrganizationUtility_o *)&v50->fields.friendIcon, (int64_t)method, v84, v85, v86, v87, v88, v89);
  this = (BattleCommandComponent_o *)StringLiteral_19199/*"endFashTypeCard"*/;
  if ( StringLiteral_19199/*"endFashTypeCard"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1BCA91C(StringLiteral_19199/*"endFashTypeCard"*/, v50->klass->_1.element_class);
    if ( this )
    {
      method = (const MethodInfo *)StringLiteral_19199/*"endFashTypeCard"*/;
      goto LABEL_67;
    }
    goto LABEL_73;
  }
  method = 0LL;
LABEL_67:
  if ( LODWORD(v50->fields.m_CancellationTokenSource) <= 7 )
LABEL_72:
    sub_1BCAA44(this, method);
  v50->fields.sealedSprite = (struct UISprite_o *)method;
  sub_1BCA784((PartyOrganizationUtility_o *)&v50->fields.sealedSprite, (int64_t)method, v90, v91, v92, v93, v94, v95);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v96);
  v97 = iTween__Hash((System_Object_array *)v50, 0LL);
  iTween__ScaleTo_60945080(v43, v97, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleCommandComponent__getCardTypeSealSpriteName(
        BattleCommandComponent_o *this,
        int32_t commandType,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  BattleCommandComponent_c *v6; // x0
  System_String_o **p_SEALED_CARDTYPE_ICON_QUICK; // x8
  BattleCommandComponent_c *v8; // x0
  BattleCommandComponent_c *v9; // x0

  if ( (byte_4B18AD0 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandComponent_TypeInfo, *(_QWORD *)&commandType, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B18AD0 = 1;
  }
  switch ( commandType )
  {
    case 3:
      v8 = BattleCommandComponent_TypeInfo;
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, *(_QWORD *)&commandType);
        v8 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v8->static_fields->SEALED_CARDTYPE_ICON_QUICK;
      break;
    case 2:
      v9 = BattleCommandComponent_TypeInfo;
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, *(_QWORD *)&commandType);
        v9 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v9->static_fields->SEALED_CARDTYPE_ICON_BUSTER;
      break;
    case 1:
      v6 = BattleCommandComponent_TypeInfo;
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo, *(_QWORD *)&commandType);
        v6 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v6->static_fields->SEALED_CARDTYPE_ICON_ARTS;
      break;
    default:
      p_SEALED_CARDTYPE_ICON_QUICK = (System_String_o **)&StringLiteral_1/*""*/;
      break;
  }
  return *p_SEALED_CARDTYPE_ICON_QUICK;
}


int32_t __fastcall BattleCommandComponent__getCommandType(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1BCAA3C(0LL, method);
  return BattleCommandData__getCommandType(data, 0LL);
}


int32_t __fastcall BattleCommandComponent__getCriticalCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( data )
  {
    LODWORD(data) = this->fields.boostedCriticalRate + BattleCommandData__getCriticalPoint(data, 0LL);
    if ( (int)data >= 1 )
    {
      if ( (int)data < 10 )
        LODWORD(data) = 1;
      else
        LODWORD(data) = (unsigned int)data / 0xA;
    }
  }
  return (int)data;
}


int32_t __fastcall BattleCommandComponent__getMarkIndex(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( data )
    return data->fields.markindex;
  else
    return -1;
}


int32_t __fastcall BattleCommandComponent__getPowerUpDepth(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *powerUpCardIcon; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct UISprite_o *v7; // x8

  if ( (byte_4B18AC7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18AC7 = 1;
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(powerUpCardIcon, 0LL, 0LL);
  if ( !v5 )
    return -1;
  v7 = this->fields.powerUpCardIcon;
  if ( !v7 )
    sub_1BCAA3C(v5, v6);
  return v7->fields.mDepth;
}


int32_t __fastcall BattleCommandComponent__getSvtId(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1BCAA3C(this, method);
  return data->fields.svtId;
}


int32_t __fastcall BattleCommandComponent__getSvtLimitCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1BCAA3C(this, method);
  return data->fields.svtlimit;
}


int32_t __fastcall BattleCommandComponent__getUniqueID(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1BCAA3C(this, method);
  return data->fields.uniqueId;
}


BattleCommandSealStatus_o *__fastcall BattleCommandComponent__get_SealStatus(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BattleCommandSealStatus_o *result; // x0
  PartyOrganizationUtility_o *p_sealStatus; // x19
  BattleCommandSealStatus_o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B18AC0 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandSealStatus_TypeInfo, method, v2);
    byte_4B18AC0 = 1;
  }
  result = this->fields.sealStatus;
  if ( !result )
  {
    p_sealStatus = (PartyOrganizationUtility_o *)&this->fields.sealStatus;
    v7 = (BattleCommandSealStatus_o *)sub_1BCAA2C(BattleCommandSealStatus_TypeInfo, method, v2, v3);
    BattleCommandSealStatus___ctor(v7, 0LL);
    p_sealStatus->klass = (PartyOrganizationUtility_c *)v7;
    sub_1BCA784(p_sealStatus, (int64_t)v7, v8, v9, v10, v11, v12, v13);
    return (BattleCommandSealStatus_o *)p_sealStatus->klass;
  }
  return result;
}


bool __fastcall BattleCommandComponent__get_isKindOfDontAction(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v3; // x1

  SealStatus = BattleCommandComponent__get_SealStatus(this, method);
  if ( !SealStatus )
    sub_1BCAA3C(0LL, v3);
  return BattleCommandSealStatus__get_HasKindOfDontAction(SealStatus, 0LL);
}


bool __fastcall BattleCommandComponent__get_isSealed(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v3; // x1

  SealStatus = BattleCommandComponent__get_SealStatus(this, method);
  if ( !SealStatus )
    sub_1BCAA3C(0LL, v3);
  return BattleCommandSealStatus__get_HasKindOfSealed(SealStatus, 0LL);
}


BattleCommandData_o *__fastcall BattleCommandComponent__getcommandData(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.data;
}


void __fastcall BattleCommandComponent__hideOutCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UIWidget_o *nomalwidget; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  struct UnityEngine_GameObject_array *addObjectList; // x8
  __int64 v8; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v10; // x23
  UnityEngine_Object_o *v11; // x20
  struct UnityEngine_GameObject_array *v12; // x8

  if ( (byte_4B18AE4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18AE4 = 1;
  }
  nomalwidget = this->fields.nomalwidget;
  if ( !nomalwidget
    || (((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))nomalwidget->klass->vtable._8_set_alpha.method)(
          nomalwidget,
          nomalwidget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          0.0),
        BattleCommandComponent__DestroyEffectObject1(this, v5),
        (addObjectList = this->fields.addObjectList) == 0LL) )
  {
LABEL_16:
    sub_1BCAA3C(nomalwidget, method);
  }
  v8 = 4LL;
  while ( 1 )
  {
    max_length = addObjectList->max_length;
    v10 = v8 - 4;
    if ( v8 - 4 >= (int)max_length )
      break;
    if ( v10 >= max_length )
      goto LABEL_18;
    v11 = (UnityEngine_Object_o *)*((_QWORD *)&addObjectList->obj.klass + v8);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    nomalwidget = (struct UIWidget_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
    if ( ((unsigned __int8)nomalwidget & 1) != 0 )
    {
      v12 = this->fields.addObjectList;
      if ( !v12 )
        goto LABEL_16;
      if ( v10 >= v12->max_length )
LABEL_18:
        sub_1BCAA44(nomalwidget, method);
      nomalwidget = (struct UIWidget_o *)*((_QWORD *)&v12->obj.klass + v8);
      if ( !nomalwidget )
        goto LABEL_16;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nomalwidget, 0, 0LL);
    }
    addObjectList = this->fields.addObjectList;
    ++v8;
    if ( !addObjectList )
      goto LABEL_16;
  }
  BattleCommandComponent__CardEffectSetActive(this, 0, v6);
}


bool __fastcall BattleCommandComponent__isSelect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  return this->fields.selectflg;
}


bool __fastcall BattleCommandComponent__isTreasureDvc(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  return data && data->fields.treasureDvc > 0;
}


void __fastcall BattleCommandComponent__openCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_5;
  if ( data->fields.starcount > 0 )
    return;
  this = (BattleCommandComponent_o *)this->fields.criticalObject;
  if ( !this )
LABEL_5:
    sub_1BCAA3C(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__playAddAttackEffect(
        BattleCommandComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_Collections_IEnumerator_o *v6; // x1

  BattleCommandComponent__flashServant(this, (const MethodInfo *)flg);
  if ( flg )
  {
    v6 = BattleCommandComponent__fadeoutEffect(this, 0, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__playAttackEffect(
        BattleCommandComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x1

  BattleCommandComponent__flashTypeCard(this, (const MethodInfo *)flg);
  BattleCommandComponent__flashServant(this, v5);
  if ( flg )
  {
    v7 = BattleCommandComponent__fadeoutEffect(this, 0, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


void __fastcall BattleCommandComponent__playNpAttackEffect(
        BattleCommandComponent_o *this,
        float ftime,
        const MethodInfo *method)
{
  __int64 v3; // x2
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
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Object_array *v27; // x21
  void *v28; // x0
  Il2CppObject *v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x22
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x22
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x22
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x22
  __int64 v76; // x1
  System_Collections_Hashtable_o *v77; // x0
  UnityEngine_GameObject_o *v78; // x20
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  System_Object_array *v85; // x21
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x22
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x22
  System_Collections_Hashtable_o *v106; // x0
  const MethodInfo *v107; // x2
  System_Collections_IEnumerator_o *v108; // x0
  __int64 v109; // x0
  float v110; // [xsp+0h] [xbp-70h] BYREF
  int v111; // [xsp+4h] [xbp-6Ch] BYREF
  float v112; // [xsp+8h] [xbp-68h] BYREF
  int v113; // [xsp+Ch] [xbp-64h] BYREF
  int v114; // [xsp+18h] [xbp-58h] BYREF
  int v115; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4B18AE2 & 1) == 0 )
  {
    sub_1BCA7E0(&object___TypeInfo, method, v3);
    sub_1BCA7E0(&float_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_24997/*"x"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_25101/*"y"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_25150/*"z"*/, v14, v15);
    sub_1BCA7E0(&iTween_TypeInfo, v16, v17);
    byte_4B18AE2 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v19 = sub_1BCA888(object___TypeInfo, 8LL);
  if ( !v19 )
    goto LABEL_58;
  v27 = (System_Object_array *)v19;
  v28 = StringLiteral_24997/*"x"*/;
  if ( StringLiteral_24997/*"x"*/ )
  {
    v28 = (void *)sub_1BCA91C(StringLiteral_24997/*"x"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_57;
    v29 = (Il2CppObject *)StringLiteral_24997/*"x"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( !v27->max_length )
    goto LABEL_56;
  v27->m_Items[0] = v29;
  sub_1BCA784((PartyOrganizationUtility_o *)v27->m_Items, (int64_t)v29, v21, v22, v23, v24, v25, v26);
  v115 = 0x40000000;
  v28 = (void *)j_il2cpp_value_box_0(float_TypeInfo, &v115);
  v36 = (int64_t)v28;
  if ( v28 )
  {
    v28 = (void *)sub_1BCA91C(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_57;
  }
  if ( v27->max_length <= 1 )
    goto LABEL_56;
  v27->m_Items[1] = (Il2CppObject *)v36;
  sub_1BCA784((PartyOrganizationUtility_o *)&v27->m_Items[1], v36, v30, v31, v32, v33, v34, v35);
  v28 = (void *)StringLiteral_25101/*"y"*/;
  if ( StringLiteral_25101/*"y"*/ )
  {
    v28 = (void *)sub_1BCA91C(StringLiteral_25101/*"y"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_57;
    v29 = (Il2CppObject *)StringLiteral_25101/*"y"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v27->max_length <= 2 )
    goto LABEL_56;
  v27->m_Items[2] = v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&v27->m_Items[2], (int64_t)v29, v37, v38, v39, v40, v41, v42);
  v114 = 0x40000000;
  v28 = (void *)j_il2cpp_value_box_0(float_TypeInfo, &v114);
  v49 = (int64_t)v28;
  if ( v28 )
  {
    v28 = (void *)sub_1BCA91C(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_57;
  }
  if ( v27->max_length <= 3 )
    goto LABEL_56;
  v27->m_Items[3] = (Il2CppObject *)v49;
  sub_1BCA784((PartyOrganizationUtility_o *)&v27->m_Items[3], v49, v43, v44, v45, v46, v47, v48);
  v28 = (void *)StringLiteral_25150/*"z"*/;
  if ( StringLiteral_25150/*"z"*/ )
  {
    v28 = (void *)sub_1BCA91C(StringLiteral_25150/*"z"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_57;
    v29 = (Il2CppObject *)StringLiteral_25150/*"z"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v27->max_length <= 4 )
    goto LABEL_56;
  v27->m_Items[4] = v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&v27->m_Items[4], (int64_t)v29, v50, v51, v52, v53, v54, v55);
  v113 = 1065353216;
  v28 = (void *)j_il2cpp_value_box_0(float_TypeInfo, &v113);
  v62 = (int64_t)v28;
  if ( v28 )
  {
    v28 = (void *)sub_1BCA91C(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_57;
  }
  if ( v27->max_length <= 5 )
    goto LABEL_56;
  v27->m_Items[5] = (Il2CppObject *)v62;
  sub_1BCA784((PartyOrganizationUtility_o *)&v27->m_Items[5], v62, v56, v57, v58, v59, v60, v61);
  v28 = (void *)StringLiteral_24178/*"time"*/;
  if ( StringLiteral_24178/*"time"*/ )
  {
    v28 = (void *)sub_1BCA91C(StringLiteral_24178/*"time"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_57;
    v29 = (Il2CppObject *)StringLiteral_24178/*"time"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v27->max_length <= 6 )
    goto LABEL_56;
  v27->m_Items[6] = v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&v27->m_Items[6], (int64_t)v29, v63, v64, v65, v66, v67, v68);
  v112 = ftime + 0.1;
  v28 = (void *)j_il2cpp_value_box_0(float_TypeInfo, &v112);
  v75 = (int64_t)v28;
  if ( v28 )
  {
    v28 = (void *)sub_1BCA91C(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_57;
  }
  if ( v27->max_length <= 7 )
    goto LABEL_56;
  v27->m_Items[7] = (Il2CppObject *)v75;
  sub_1BCA784((PartyOrganizationUtility_o *)&v27->m_Items[7], v75, v69, v70, v71, v72, v73, v74);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v76);
  v77 = iTween__Hash(v27, 0LL);
  iTween__ScaleTo_60945080(gameObject, v77, 0LL);
  v78 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v19 = sub_1BCA888(object___TypeInfo, 4LL);
  if ( !v19 )
LABEL_58:
    sub_1BCAA3C(v19, v20);
  v85 = (System_Object_array *)v19;
  v28 = (void *)StringLiteral_25150/*"z"*/;
  if ( StringLiteral_25150/*"z"*/ )
  {
    v28 = (void *)sub_1BCA91C(StringLiteral_25150/*"z"*/, v85->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_57;
    v29 = (Il2CppObject *)StringLiteral_25150/*"z"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( !v85->max_length )
    goto LABEL_56;
  v85->m_Items[0] = v29;
  sub_1BCA784((PartyOrganizationUtility_o *)v85->m_Items, (int64_t)v29, v79, v80, v81, v82, v83, v84);
  v111 = 1144258560;
  v28 = (void *)j_il2cpp_value_box_0(float_TypeInfo, &v111);
  v92 = (int64_t)v28;
  if ( v28 )
  {
    v28 = (void *)sub_1BCA91C(v28, v85->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_57;
  }
  if ( v85->max_length <= 1 )
    goto LABEL_56;
  v85->m_Items[1] = (Il2CppObject *)v92;
  sub_1BCA784((PartyOrganizationUtility_o *)&v85->m_Items[1], v92, v86, v87, v88, v89, v90, v91);
  v28 = (void *)StringLiteral_24178/*"time"*/;
  if ( StringLiteral_24178/*"time"*/ )
  {
    v28 = (void *)sub_1BCA91C(StringLiteral_24178/*"time"*/, v85->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_57;
    v29 = (Il2CppObject *)StringLiteral_24178/*"time"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v85->max_length <= 2 )
    goto LABEL_56;
  v85->m_Items[2] = v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&v85->m_Items[2], (int64_t)v29, v93, v94, v95, v96, v97, v98);
  v110 = ftime;
  v28 = (void *)j_il2cpp_value_box_0(float_TypeInfo, &v110);
  v105 = (int64_t)v28;
  if ( v28 )
  {
    v28 = (void *)sub_1BCA91C(v28, v85->obj.klass->_1.element_class);
    if ( !v28 )
    {
LABEL_57:
      v109 = sub_1BCAA60(v28);
      sub_1BCA908(v109, 0LL);
    }
  }
  if ( v85->max_length <= 3 )
LABEL_56:
    sub_1BCAA44(v28, v29);
  v85->m_Items[3] = (Il2CppObject *)v105;
  sub_1BCA784((PartyOrganizationUtility_o *)&v85->m_Items[3], v105, v99, v100, v101, v102, v103, v104);
  v106 = iTween__Hash(v85, 0LL);
  iTween__RotateTo_60949996(v78, v106, 0LL);
  v108 = BattleCommandComponent__fadeoutEffect(this, 1, v107);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v108, 0LL);
}


void __fastcall BattleCommandComponent__playOpenNobleCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCommandComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_GameObject_array *v8; // x8
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_array *v10; // x20
  UnityEngine_Transform_o *transform; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  v3 = this;
  if ( (byte_4B18AD4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    this = (BattleCommandComponent_o *)sub_1BCA7E0(&StringLiteral_19092/*"effect/ef_noblecard"*/, v4, v5);
    byte_4B18AD4 = 1;
  }
  effectobj = v3->fields.effectobj;
  if ( !effectobj )
    goto LABEL_17;
  if ( effectobj->max_length <= 2 )
    goto LABEL_18;
  v7 = (UnityEngine_Object_o *)effectobj->m_Items[2];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = v3->fields.effectobj;
    if ( !v8 )
      goto LABEL_17;
    if ( v8->max_length <= 2 )
      goto LABEL_18;
    v9 = (UnityEngine_Object_o *)v8->m_Items[2];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    UnityEngine_Object__DestroyImmediate_70154432(v9, 0LL);
  }
  this = (BattleCommandComponent_o *)v3->fields.nomalwidget;
  if ( !this
    || (v10 = v3->fields.effectobj,
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject_38952608(
                                             (BaseMonoBehaviour_o *)v3,
                                             (System_String_o *)StringLiteral_19092/*"effect/ef_noblecard"*/,
                                             transform,
                                             0LL,
                                             0LL),
        !v10) )
  {
LABEL_17:
    sub_1BCAA3C(this, method);
  }
  if ( v10->max_length <= 2 )
LABEL_18:
    sub_1BCAA44(this, method);
  v10->m_Items[2] = (UnityEngine_GameObject_o *)this;
  sub_1BCA784((PartyOrganizationUtility_o *)&v10->m_Items[2], (int64_t)this, v12, v13, v14, v15, v16, v17);
}


void __fastcall BattleCommandComponent__resetAddObject(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v11; // x20
  unsigned __int64 v12; // x22
  __int64 v13; // x27
  UnityEngine_Transform_o *objectRoot; // x21
  System_String_o *v15; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *NodeFromName; // x21
  struct UnityEngine_GameObject_array *addObjectList; // x28
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  Il2CppClass **v26; // x0
  struct UnityEngine_GameObject_array *v27; // x8
  System_Enum_o v28; // [xsp+8h] [xbp-78h] BYREF
  int v29; // [xsp+18h] [xbp-68h]

  if ( (byte_4B18ACE & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandComponent_ADDOBJECT_TYPE___TypeInfo, method, v2);
    sub_1BCA7E0(&BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B18ACE = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)sub_1BCA888(BattleCommandComponent_ADDOBJECT_TYPE___TypeInfo, 2LL);
  if ( !gameObject )
LABEL_21:
    sub_1BCAA3C(gameObject, v9);
  klass = gameObject[1].klass;
  v11 = gameObject;
  if ( (unsigned int)klass <= 1 )
LABEL_20:
    sub_1BCAA44(gameObject, v9);
  HIDWORD(gameObject[1].monitor) = 1;
  if ( (int)klass >= 1 )
  {
    v12 = 0LL;
    while ( v12 < (unsigned int)klass )
    {
      v13 = *((int *)&v11[1].monitor + v12);
      objectRoot = this->fields.objectRoot;
      v28.klass = (System_Enum_c *)BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo;
      v28.monitor = (void *)-1LL;
      v29 = v13;
      v15 = System_Enum__ToString(&v28, 0LL);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(objectRoot, v15, 1, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !NodeFromName )
          goto LABEL_21;
        addObjectList = this->fields.addObjectList;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NodeFromName, 0LL);
        if ( !addObjectList )
          goto LABEL_21;
        if ( (unsigned int)v13 >= addObjectList->max_length )
          goto LABEL_20;
        v25 = (int64_t)gameObject;
        v26 = &addObjectList->obj.klass + v13;
        v26[4] = (Il2CppClass *)v25;
        sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 4), v25, v19, v20, v21, v22, v23, v24);
        v27 = this->fields.addObjectList;
        if ( !v27 )
          goto LABEL_21;
        if ( (unsigned int)v13 >= v27->max_length )
          goto LABEL_20;
        gameObject = v27->m_Items[v13];
        if ( !gameObject )
          goto LABEL_21;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      LODWORD(klass) = v11[1].klass;
      if ( (__int64)++v12 >= (int)klass )
        return;
    }
    goto LABEL_20;
  }
}


void __fastcall BattleCommandComponent__resetComboData(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UnityEngine_GameObject_array *effectobj; // x20
  __int64 v7; // x8
  unsigned __int64 v8; // x21
  UnityEngine_Object_o *v9; // x19

  if ( (byte_4B18AE0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18AE0 = 1;
  }
  BattleCommandComponent__DestroyEffectObject1(this, method);
  effectobj = this->fields.effectobj;
  if ( !effectobj )
    sub_1BCAA3C(v4, v5);
  v7 = *(_QWORD *)&effectobj->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v7 )
        sub_1BCAA44(v4, v5);
      v9 = (UnityEngine_Object_o *)effectobj->m_Items[v8];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
      v4 = UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
      if ( v4 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
        UnityEngine_Object__Destroy_70154244(v9, 0LL);
      }
      LODWORD(v7) = effectobj->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)v7 );
  }
}


void __fastcall BattleCommandComponent__resetCriticalLabel(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DrumRollLabel_o *criticallabel; // x0

  this->fields.boostedCriticalRate = 0;
  BattleCommandComponent__ResetCriticalLabelColor(this, method);
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel
    || (DrumRollLabel__setParam(criticallabel, 0, 0LL), (criticallabel = this->fields.criticallabel) == 0LL) )
  {
    sub_1BCAA3C(criticallabel, v3);
  }
  DrumRollLabel__ChangeParamNonAnimation(criticallabel, 0, 1, 0LL);
}


void __fastcall BattleCommandComponent__resetSelect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCommandComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct BattleCommandData_o *data; // x8
  int32_t uniqueId; // w20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v11; // x20
  struct UnityEngine_GameObject_array *v12; // x8
  UnityEngine_Object_o *v13; // x19
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4B18AEF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    this = (BattleCommandComponent_o *)sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v4, v5);
    byte_4B18AEF = 1;
  }
  data = v3->fields.data;
  if ( !data )
    goto LABEL_17;
  uniqueId = data->fields.uniqueId;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method);
  ServantAssetLoadManager__StopVoice(uniqueId, 0.0, 0LL);
  v14.fields.r = 1.0;
  v14.fields.g = 1.0;
  v14.fields.b = 1.0;
  v14.fields.a = 1.0;
  BattleCommandComponent__SetCardColor(v3, v14, v8);
  BattleCommandComponent__resetSelectStamp(v3, v9);
  effectobj = v3->fields.effectobj;
  if ( !effectobj )
    goto LABEL_17;
  if ( effectobj->max_length <= 3 )
    goto LABEL_18;
  v11 = (UnityEngine_Object_o *)effectobj->m_Items[3];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v12 = v3->fields.effectobj;
    if ( v12 )
    {
      if ( v12->max_length > 3 )
      {
        v13 = (UnityEngine_Object_o *)v12->m_Items[3];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        UnityEngine_Object__Destroy_70154244(v13, 0LL);
        return;
      }
LABEL_18:
      sub_1BCAA44(this, method);
    }
LABEL_17:
    sub_1BCAA3C(this, method);
  }
}


void __fastcall BattleCommandComponent__resetSelectStamp(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCommandComponent_o *v3; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_array *v6; // x8

  v3 = this;
  if ( (byte_4B18AD8 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18AD8 = 1;
  }
  effectobj = v3->fields.effectobj;
  if ( !effectobj )
    goto LABEL_13;
  if ( effectobj->max_length <= 5 )
LABEL_14:
    sub_1BCAA44(this, method);
  v5 = (UnityEngine_Object_o *)effectobj->m_Items[5];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v3->fields.effectobj;
    if ( !v6 )
      goto LABEL_13;
    if ( v6->max_length > 5 )
    {
      this = (BattleCommandComponent_o *)v3->fields.spawner;
      if ( this )
      {
        Spawner__Despawn((Spawner_o *)this, v6->m_Items[5], 1, 0LL);
        return;
      }
LABEL_13:
      sub_1BCAA3C(this, method);
    }
    goto LABEL_14;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__selectCard(
        BattleCommandComponent_o *this,
        int32_t targetIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  const MethodInfo *v53; // x1
  __int64 v54; // x1
  int64_t data; // x0
  const MethodInfo *v56; // x1
  struct BattleCommandData_o *v57; // x8
  int treasureDvc; // w21
  Voice_BATTLE_array *v59; // x21
  System_String_o *FileName; // x0
  const MethodInfo *v61; // x2
  System_Array_o *v62; // x0
  __int64 *v63; // x8
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  System_Collections_Generic_List_KeyValuePair_string__int___o *v67; // x21
  BattleCommandComponent___c_c *v68; // x0
  System_Func_T__TResult__o *_9__188_0; // x22
  Il2CppObject *v70; // x23
  struct BattleCommandComponent___c_StaticFields *static_fields; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  System_Int32_array *v79; // x0
  System_Collections_Generic_List_T__o *v80; // x21
  int32_t size; // w25
  int32_t v82; // w22
  System_Collections_Generic_KeyValuePair_object__int__o v83; // kr10_16
  struct BattleCommandData_o *v84; // x8
  Il2CppObject *key; // x21
  int32_t uniqueId; // w23
  System_String_o *LastVoiceType; // x0
  System_Collections_Generic_List_T__o *v88; // x21
  struct BattleCommandData_o *v89; // x8
  int32_t svtId; // w23
  VoiceMaster_o *v91; // x22
  struct BattleServantData_o *svtData; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleCommandData_o *v94; // x8
  int32_t v95; // w2
  struct BattleServantData_o *v96; // x8
  __int64 v97; // x1
  UnityEngine_Object_o *ServantActor; // x22
  int32_t v99; // w22
  struct BattleServantData_o *v100; // x8
  struct BattleCommandData_o *v101; // x9
  int32_t v102; // w23
  int32_t overwriteSvtVoiceId; // w25
  int32_t v104; // w24
  System_String_o *v105; // x21
  Il2CppObject *v106; // x0
  __int64 *v107; // x8
  struct UnityEngine_GameObject_array *effectobj; // x22
  UnityEngine_Transform_o *transform; // x0
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  struct BattlePerformance_o *v116; // x8
  bool v117; // w0
  int v118; // [xsp+4h] [xbp-5Ch] BYREF
  System_Collections_Generic_List_KeyValuePair_string__int___o *voiceInfoList; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o Item; // 0:x2.16
  System_Collections_Generic_KeyValuePair_object__int__o v121; // 0:x2.16
  UnityEngine_Color_o v122; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B18AE9 & 1) == 0 )
  {
    sub_1BCA7E0(&Voice_BATTLE___TypeInfo, *(_QWORD *)&targetIndex, method);
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_KeyValuePair_string__int____, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoiceMaster___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___int___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v11, v12);
    sub_1BCA7E0(&System_Func_KeyValuePair_string__int___int__TypeInfo, v13, v14);
    sub_1BCA7E0(&int_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Count__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Item__, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__388AFD0FB77AF6556B184A69B44D84800D854675D6242CF90106726D5CB5F546,
      v29,
      v30);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__465D7DAC1D1469B8AAD4256C55331C9F60FE5E94AD5B4D3AC8992CB164DDDCE3,
      v31,
      v32);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__71A03FE3843FC2331F63AFCE9FB6609CA17FF235B50C9A2A810635482008B1D0,
      v33,
      v34);
    sub_1BCA7E0(&Method_BattleCommandComponent___c__selectCard_b__188_0__, v35, v36);
    sub_1BCA7E0(&BattleCommandComponent___c_TypeInfo, v37, v38);
    sub_1BCA7E0(&Voice_TypeInfo, v39, v40);
    sub_1BCA7E0(&StringLiteral_16789/*"a"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_7241/*"HEROINE_CHANGECARDVOICE"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_19088/*"effect/ef_commandup_{0}{1:00}"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_22916/*"q"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_17169/*"b"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v51, v52);
    byte_4B18AE9 = 1;
  }
  v122.fields.r = 0.5;
  v122.fields.g = 0.5;
  v122.fields.b = 0.5;
  v122.fields.a = 1.0;
  voiceInfoList = 0LL;
  BattleCommandComponent__SetCardColor(this, v122, *(const MethodInfo **)&targetIndex);
  BattleCommandComponent__stopFirstAura(this, v53);
  data = (int64_t)this->fields.data;
  if ( !data )
    goto LABEL_78;
  if ( BattleCommandData__isBlank((BattleCommandData_o *)data, 0LL) )
    return;
  data = BattleCommandComponent__get_isKindOfDontAction(this, v56);
  if ( (data & 1) != 0 )
    return;
  v57 = this->fields.data;
  if ( !v57 )
    goto LABEL_78;
  treasureDvc = v57->fields.treasureDvc;
  if ( treasureDvc <= 0 )
  {
    if ( !Voice_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Voice_TypeInfo, v54);
    FileName = Voice__getFileName(245, 0LL);
    if ( BattleCommandComponent__IsValidVoiceType(this, FileName, v61) )
    {
      v62 = (System_Array_o *)sub_1BCA888(Voice_BATTLE___TypeInfo, 6LL);
      v63 = &Field__PrivateImplementationDetails__71A03FE3843FC2331F63AFCE9FB6609CA17FF235B50C9A2A810635482008B1D0;
    }
    else
    {
      v62 = (System_Array_o *)sub_1BCA888(Voice_BATTLE___TypeInfo, 3LL);
      v63 = &Field__PrivateImplementationDetails__465D7DAC1D1469B8AAD4256C55331C9F60FE5E94AD5B4D3AC8992CB164DDDCE3;
    }
    goto LABEL_18;
  }
  if ( treasureDvc != ConstantMaster__getValue((System_String_o *)StringLiteral_7241/*"HEROINE_CHANGECARDVOICE"*/, 0LL) )
  {
    v62 = (System_Array_o *)sub_1BCA888(Voice_BATTLE___TypeInfo, 12LL);
    v63 = &Field__PrivateImplementationDetails__388AFD0FB77AF6556B184A69B44D84800D854675D6242CF90106726D5CB5F546;
LABEL_18:
    v64 = *v63;
    v59 = (Voice_BATTLE_array *)v62;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v62, (System_RuntimeFieldHandle_o)v64, 0LL);
    goto LABEL_19;
  }
  data = sub_1BCA888(Voice_BATTLE___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_78;
  v59 = (Voice_BATTLE_array *)data;
  if ( !*(_DWORD *)(data + 24) )
    goto LABEL_79;
  *(_DWORD *)(data + 32) = 252;
LABEL_19:
  data = (int64_t)this->fields.svtData;
  if ( !data )
    goto LABEL_78;
  if ( BattleServantData__TryGetPlayableVoiceInfoList((BattleServantData_o *)data, &voiceInfoList, v59, 0LL) )
  {
    v67 = voiceInfoList;
    v68 = BattleCommandComponent___c_TypeInfo;
    if ( !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo, v54);
      v68 = BattleCommandComponent___c_TypeInfo;
    }
    _9__188_0 = (System_Func_T__TResult__o *)v68->static_fields->__9__188_0;
    if ( !_9__188_0 )
    {
      if ( !v68->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v68, v54);
        v68 = BattleCommandComponent___c_TypeInfo;
      }
      v70 = (Il2CppObject *)v68->static_fields->__9;
      _9__188_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                                 System_Func_KeyValuePair_string__int___int__TypeInfo,
                                                 v54,
                                                 v65,
                                                 v66);
      System_Func_KeyValuePair_object__int___int____ctor(
        _9__188_0,
        v70,
        Method_BattleCommandComponent___c__selectCard_b__188_0__,
        0LL);
      static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
      static_fields->__9__188_0 = (struct System_Func_KeyValuePair_string__int___int__o *)_9__188_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__188_0,
        (int64_t)_9__188_0,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77);
    }
    v78 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v67,
                                                                 (System_Func_TSource__TResult__o *)_9__188_0,
                                                                 (const MethodInfo_2F3D220 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___int___);
    v79 = System_Linq_Enumerable__ToArray_int_(
            v78,
            (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
    data = RandomUtility__GetRandomRangeIndex(v79, 0, 0LL);
    v80 = (System_Collections_Generic_List_T__o *)voiceInfoList;
    if ( !voiceInfoList )
      goto LABEL_78;
    size = voiceInfoList->fields._size;
    v82 = data;
    Item = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
             (System_Collections_Generic_List_T__o *)voiceInfoList,
             0,
             (const MethodInfo_34F71A8 *)Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Item__);
    v83 = BasicHelper__IndexValue_KeyValuePair_object__int__(
            v80,
            v82,
            Item,
            (const MethodInfo_2F01600 *)Method_BasicHelper_IndexValue_KeyValuePair_string__int____);
    v54 = *(_QWORD *)&v83.fields.value;
    data = (int64_t)v83.fields.key;
    v84 = this->fields.data;
    if ( !v84 )
      goto LABEL_78;
    key = v83.fields.key;
    uniqueId = v84->fields.uniqueId;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, *(_QWORD *)&v83.fields.value);
    LastVoiceType = ServantAssetLoadManager__GetLastVoiceType(uniqueId, 0LL);
    data = System_String__op_Equality(LastVoiceType, (System_String_o *)v83.fields.key, 0LL);
    if ( (data & 1) != 0 )
    {
      v88 = (System_Collections_Generic_List_T__o *)voiceInfoList;
      if ( !voiceInfoList )
        goto LABEL_78;
      v121 = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
               (System_Collections_Generic_List_T__o *)voiceInfoList,
               0,
               (const MethodInfo_34F71A8 *)Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Item__);
      key = BasicHelper__IndexValue_KeyValuePair_object__int__(
              v88,
              (v82 + 1) % size,
              v121,
              (const MethodInfo_2F01600 *)Method_BasicHelper_IndexValue_KeyValuePair_string__int____).fields.key;
    }
    data = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !data
      || (data = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)data,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoiceMaster___),
          (v89 = this->fields.data) == 0LL)
      || (svtId = v89->fields.svtId,
          v91 = (VoiceMaster_o *)data,
          data = (int64_t)System_String__Concat_62401220(
                            (System_String_o *)StringLiteral_16290/*"_"*/,
                            (System_String_o *)key,
                            0LL),
          !v91) )
    {
LABEL_78:
      sub_1BCAA3C(data, v54);
    }
    data = VoiceMaster__getFlagRequestNumber(v91, svtId, (System_String_o *)data, 0, 0LL);
    if ( (_DWORD)data )
    {
      svtData = this->fields.svtData;
      if ( !svtData )
        goto LABEL_78;
      if ( !svtData->fields.followerType )
      {
        perf = this->fields.perf;
        if ( !perf )
          goto LABEL_78;
        v94 = this->fields.data;
        if ( !v94 )
          goto LABEL_78;
        v95 = data;
        data = (int64_t)perf->fields.data;
        if ( !data )
          goto LABEL_78;
        BattleData__AddServantVoicePlayed_43253260((BattleData_o *)data, v94->fields.svtId, v95, 0, 0LL);
      }
    }
    v96 = this->fields.svtData;
    if ( !v96 )
      goto LABEL_78;
    data = (int64_t)this->fields.perf;
    if ( !data )
      goto LABEL_78;
    ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                             (BattlePerformance_o *)data,
                                             v96->fields.uniqueId,
                                             0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v97);
    data = UnityEngine_Object__op_Inequality(ServantActor, 0LL, 0LL);
    if ( (data & 1) != 0 )
    {
      if ( !ServantActor )
        goto LABEL_78;
      if ( !BattleActorControl__isNoVoice((BattleActorControl_o *)ServantActor, 0LL) )
      {
        data = (int64_t)this->fields.svtData;
        if ( !data )
          goto LABEL_78;
        data = BattleServantData__getSvtId((BattleServantData_o *)data, 0LL);
        if ( !this->fields.svtData )
          goto LABEL_78;
        v99 = data;
        data = BattleServantData__getDispLimitCount(this->fields.svtData, 1, 0LL);
        v100 = this->fields.svtData;
        if ( !v100 )
          goto LABEL_78;
        v101 = this->fields.data;
        if ( !v101 )
          goto LABEL_78;
        v102 = data;
        overwriteSvtVoiceId = v100->fields.overwriteSvtVoiceId;
        v104 = v101->fields.uniqueId;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v54);
        ServantAssetLoadManager__playBattleVoice(
          v99,
          v102,
          overwriteSvtVoiceId,
          (System_String_o *)key,
          1.0,
          0LL,
          v104,
          0,
          0LL);
      }
    }
  }
  data = (int64_t)this->fields.data;
  if ( !data )
    goto LABEL_78;
  v105 = (System_String_o *)StringLiteral_19088/*"effect/ef_commandup_{0}{1:00}"*/;
  if ( BattleCommandData__isQuick((BattleCommandData_o *)data, 0LL) )
  {
    v118 = targetIndex + 1;
    v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v118);
    v107 = &StringLiteral_22916/*"q"*/;
LABEL_67:
    v105 = System_String__Format_62415592(v105, (Il2CppObject *)*v107, v106, 0LL);
    goto LABEL_68;
  }
  data = (int64_t)this->fields.data;
  if ( !data )
    goto LABEL_78;
  if ( BattleCommandData__isArts((BattleCommandData_o *)data, 0LL) )
  {
    v118 = targetIndex + 1;
    v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v118);
    v107 = &StringLiteral_16789/*"a"*/;
    goto LABEL_67;
  }
  data = (int64_t)this->fields.data;
  if ( !data )
    goto LABEL_78;
  if ( BattleCommandData__isBuster((BattleCommandData_o *)data, 0LL) )
  {
    v118 = targetIndex + 1;
    v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v118);
    v107 = &StringLiteral_17169/*"b"*/;
    goto LABEL_67;
  }
LABEL_68:
  data = (int64_t)this->fields.nomalwidget;
  if ( !data )
    goto LABEL_78;
  effectobj = this->fields.effectobj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
  data = (int64_t)BaseMonoBehaviour__createObject_38952608((BaseMonoBehaviour_o *)this, v105, transform, 0LL, 0LL);
  if ( !effectobj )
    goto LABEL_78;
  if ( effectobj->max_length <= 3 )
LABEL_79:
    sub_1BCAA44(data, v54);
  effectobj->m_Items[3] = (UnityEngine_GameObject_o *)data;
  sub_1BCA784((PartyOrganizationUtility_o *)&effectobj->m_Items[3], data, v110, v111, v112, v113, v114, v115);
  v116 = this->fields.perf;
  if ( !v116 )
    goto LABEL_78;
  data = (int64_t)v116->fields.data;
  if ( !data )
    goto LABEL_78;
  v117 = BattleData__checkLimitTurn((BattleData_o *)data, 0LL);
  if ( !targetIndex && v117 )
  {
    data = (int64_t)this->fields.perf;
    if ( data )
    {
      BattlePerformance__SetLimitTurnEffectFlag((BattlePerformance_o *)data, 0, 0LL);
      return;
    }
    goto LABEL_78;
  }
}


void __fastcall BattleCommandComponent__setAttackCommandData(
        BattleCommandComponent_o *this,
        BattleCommandComponent_o *comp,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x7
  struct BattlePerformance_o *perf; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x4
  struct BattleCommandData_o *data; // x8

  if ( !comp
    || (BattleCommandComponent__setData(this, comp->fields.data, comp->fields.svtData, 1, 1, 0, 1, v3),
        perf = comp->fields.perf,
        this->fields.perf = perf,
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.perf, (int64_t)perf, v7, v8, v9, v10, v11, v12),
        BattleCommandComponent__SetPowerUpCardValue(this, 0, v13),
        (data = comp->fields.data) == 0LL) )
  {
    sub_1BCAA3C(this, comp);
  }
  BattleCommandComponent__SetPowerUpCardIcon(this, data->fields.commandCardParam, 2, 0, v14);
}


void __fastcall BattleCommandComponent__setBuffIconList(
        BattleCommandComponent_o *this,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  UnityEngine_Component_o *buffRoot; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Collections_Generic_List_object__o *v49; // x21
  BuffList_TYPE_array *qabTypes; // x22
  int32_t CommandType; // w0
  System_Int32_array *Individuality; // x23
  BattleBuffData_BuffData_array *ShowCommandBuffListActive; // x0
  BuffList_TYPE_array *v54; // x22
  int32_t v55; // w0
  System_Int32_array *v56; // x23
  BattleBuffData_BuffData_array *ShowCommandBuffListPassive; // x0
  System_Collections_Generic_IEnumerable_T__o *BuffList_43169876; // x0
  BuffList_TYPE_array *tdTypes; // x22
  BattleBuffData_BuffData_array *v60; // x0
  System_Collections_Generic_IEnumerable_T__o *v61; // x0
  struct BuffList_TYPE_array *v62; // x22
  BattleBuffData_BuffData_array *v63; // x3
  BattleBuffData_o *v64; // x0
  BuffList_TYPE_array *v65; // x1
  System_Int32_array *v66; // x2
  BuffList_TYPE_array *noneTdQabTypes; // x22
  int32_t v68; // w0
  System_Int32_array *v69; // x23
  BattleBuffData_BuffData_array *v70; // x0
  System_Collections_Generic_IEnumerable_T__o *v71; // x0
  struct BuffList_TYPE_array *v72; // x22
  int32_t v73; // w0
  System_Int32_array *v74; // x23
  System_Collections_Generic_IEnumerable_T__o *v75; // x0
  BuffList_TYPE_array *otherTypes; // x22
  BattleBuffData_BuffData_array *v77; // x0
  System_Collections_Generic_IEnumerable_T__o *v78; // x0
  BuffList_TYPE_array *v79; // x22
  BattleBuffData_BuffData_array *v80; // x0
  System_Collections_Generic_IEnumerable_T__o *v81; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  System_Predicate_object__o *v85; // x20
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  System_Predicate_object__o *v89; // x20
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  System_Predicate_object__o *v93; // x20
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  System_Collections_Generic_List_int__o *v97; // x20
  Il2CppObject *MasterData_object; // x22
  _BOOL8 v99; // x0
  __int64 v100; // x1
  Il2CppObject *Entity; // x0
  __int64 v102; // x1
  Il2CppObject *v103; // x21
  _BOOL8 v104; // x0
  __int64 monitor_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v107; // x9
  __int64 size; // x10
  struct BattleServantBuffIconComponent_array *buffIconList; // x8
  signed __int64 v110; // x21
  unsigned __int64 max_length; // x9
  BattleServantBuffIconComponent_o *v112; // x22
  int32_t v113; // w1
  System_Collections_Generic_List_Enumerator_object__o v114; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v115; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B18AD6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleCommandComponent__setBuffIconList_b__138_0__, buffData, method);
    sub_1BCA7E0(&Method_BattleCommandComponent__setBuffIconList_b__138_1__, v5, v6);
    sub_1BCA7E0(&Method_BattleCommandComponent__setBuffIconList_b__138_2__, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BuffMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v35, v36);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v37, v38);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v39, v40);
    sub_1BCA7E0(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v41, v42);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43, v44);
    byte_4B18AD6 = 1;
  }
  memset(&v115, 0, sizeof(v115));
  if ( !buffData || !this->fields.data )
  {
    buffRoot = (UnityEngine_Component_o *)this->fields.buffRoot;
    if ( buffRoot )
    {
      buffRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(buffRoot, 0LL);
      if ( buffRoot )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffRoot, 0, 0LL);
        return;
      }
    }
    goto LABEL_43;
  }
  buffRoot = (UnityEngine_Component_o *)this->fields.buffRoot;
  if ( !buffRoot )
    goto LABEL_43;
  buffRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(buffRoot, 0LL);
  if ( !buffRoot )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffRoot, 1, 0LL);
  v49 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                       v46,
                                                       v47,
                                                       v48);
  System_Collections_Generic_List_object____ctor(
    v49,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_43;
  qabTypes = this->fields.qabTypes;
  CommandType = BattleCommandData__getCommandType((BattleCommandData_o *)buffRoot, 0LL);
  Individuality = BattleCommand__getIndividuality(CommandType, 1, 0LL);
  ShowCommandBuffListActive = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
  buffRoot = (UnityEngine_Component_o *)BattleBuffData__getBuffList_43169876(
                                          buffData,
                                          qabTypes,
                                          Individuality,
                                          ShowCommandBuffListActive,
                                          0LL);
  if ( !v49 )
    goto LABEL_43;
  System_Collections_Generic_List_object___AddRange(
    v49,
    (System_Collections_Generic_IEnumerable_T__o *)buffRoot,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_43;
  v54 = this->fields.qabTypes;
  v55 = BattleCommandData__getCommandType((BattleCommandData_o *)buffRoot, 0LL);
  v56 = BattleCommand__getIndividuality(v55, 1, 0LL);
  ShowCommandBuffListPassive = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
  BuffList_43169876 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_43169876(
                                                                       buffData,
                                                                       v54,
                                                                       v56,
                                                                       ShowCommandBuffListPassive,
                                                                       0LL);
  System_Collections_Generic_List_object___AddRange(
    v49,
    BuffList_43169876,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_43;
  if ( BattleCommandData__isTreasureDvc((BattleCommandData_o *)buffRoot, 0LL) )
  {
    tdTypes = this->fields.tdTypes;
    v60 = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
    v61 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_43169876(
                                                           buffData,
                                                           tdTypes,
                                                           0LL,
                                                           v60,
                                                           0LL);
    System_Collections_Generic_List_object___AddRange(
      v49,
      v61,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    v62 = this->fields.tdTypes;
    v63 = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
    v64 = buffData;
    v65 = v62;
    v66 = 0LL;
  }
  else
  {
    buffRoot = (UnityEngine_Component_o *)this->fields.data;
    if ( !buffRoot )
      goto LABEL_43;
    noneTdQabTypes = this->fields.noneTdQabTypes;
    v68 = BattleCommandData__getCommandType((BattleCommandData_o *)buffRoot, 0LL);
    v69 = BattleCommand__getIndividuality(v68, 1, 0LL);
    v70 = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
    v71 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_43169876(
                                                           buffData,
                                                           noneTdQabTypes,
                                                           v69,
                                                           v70,
                                                           0LL);
    System_Collections_Generic_List_object___AddRange(
      v49,
      v71,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    buffRoot = (UnityEngine_Component_o *)this->fields.data;
    if ( !buffRoot )
      goto LABEL_43;
    v72 = this->fields.noneTdQabTypes;
    v73 = BattleCommandData__getCommandType((BattleCommandData_o *)buffRoot, 0LL);
    v74 = BattleCommand__getIndividuality(v73, 1, 0LL);
    v63 = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
    v64 = buffData;
    v65 = v72;
    v66 = v74;
  }
  v75 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_43169876(v64, v65, v66, v63, 0LL);
  System_Collections_Generic_List_object___AddRange(
    v49,
    v75,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  otherTypes = this->fields.otherTypes;
  v77 = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
  v78 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_43169876(
                                                         buffData,
                                                         otherTypes,
                                                         0LL,
                                                         v77,
                                                         0LL);
  System_Collections_Generic_List_object___AddRange(
    v49,
    v78,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v79 = this->fields.otherTypes;
  v80 = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
  v81 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_43169876(
                                                         buffData,
                                                         v79,
                                                         0LL,
                                                         v80,
                                                         0LL);
  System_Collections_Generic_List_object___AddRange(
    v49,
    v81,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v85 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_BattleBuffData_BuffData__TypeInfo, v82, v83, v84);
  System_Predicate_object____ctor(
    v85,
    (Il2CppObject *)this,
    Method_BattleCommandComponent__setBuffIconList_b__138_0__,
    0LL);
  System_Collections_Generic_List_object___RemoveAll(
    v49,
    (System_Predicate_T__o *)v85,
    (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v89 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_BattleBuffData_BuffData__TypeInfo, v86, v87, v88);
  System_Predicate_object____ctor(
    v89,
    (Il2CppObject *)this,
    Method_BattleCommandComponent__setBuffIconList_b__138_1__,
    0LL);
  System_Collections_Generic_List_object___RemoveAll(
    v49,
    (System_Predicate_T__o *)v89,
    (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v93 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_BattleBuffData_BuffData__TypeInfo, v90, v91, v92);
  System_Predicate_object____ctor(
    v93,
    (Il2CppObject *)this,
    Method_BattleCommandComponent__setBuffIconList_b__138_2__,
    0LL);
  System_Collections_Generic_List_object___RemoveAll(
    v49,
    (System_Predicate_T__o *)v93,
    (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v97 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v94,
                                                    v95,
                                                    v96);
  System_Collections_Generic_List_int____ctor(
    v97,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  buffRoot = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !buffRoot )
    goto LABEL_43;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)buffRoot,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BuffMaster___);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v114,
    v49,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v115 = v114;
  while ( 1 )
  {
    v99 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v115,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v99 )
      break;
    if ( !v115.fields._current )
      sub_1BCAA3C(v99, v100);
    if ( !MasterData_object )
      sub_1BCAA3C(v99, v100);
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int32_t)v115.fields._current[1].klass,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    v103 = Entity;
    if ( !Entity )
      sub_1BCAA3C(0LL, v102);
    if ( !v97 )
      sub_1BCAA3C(Entity, v102);
    v104 = System_Collections_Generic_List_int___Contains(
             v97,
             (int32_t)Entity[2].monitor,
             (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( !v104 )
    {
      monitor_low = LODWORD(v103[2].monitor);
      items = v97->fields._items;
      v107 = Method_System_Collections_Generic_List_int__Add__;
      ++v97->fields._version;
      if ( !items )
        sub_1BCAA3C(v104, monitor_low);
      size = v97->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v97,
          monitor_low,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
      }
      else
      {
        v97->fields._size = size + 1;
        items->m_Items[size + 1] = monitor_low;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v115,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  buffIconList = this->fields.buffIconList;
  if ( !buffIconList )
LABEL_43:
    sub_1BCAA3C(buffRoot, buffData);
  v110 = 0LL;
  while ( 1 )
  {
    max_length = buffIconList->max_length;
    if ( v110 >= (int)max_length )
      break;
    if ( !v97 )
      goto LABEL_43;
    if ( v110 >= max_length )
      sub_1BCAA44(buffRoot, buffData);
    v112 = buffIconList->m_Items[v110];
    if ( v110 >= v97->fields._size )
    {
      if ( !v112 )
        goto LABEL_43;
      v113 = 0;
    }
    else
    {
      buffRoot = (UnityEngine_Component_o *)System_Collections_Generic_List_int___get_Item(
                                              v97,
                                              v110,
                                              (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v112 )
        goto LABEL_43;
      v113 = (int)buffRoot;
    }
    BattleServantBuffIconComponent__setImageId(v112, v113, 0LL);
    buffIconList = this->fields.buffIconList;
    ++v110;
    if ( !buffIconList )
      goto LABEL_43;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__setCriticalObject(
        BattleCommandComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *criticalObject; // x0

  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    sub_1BCAA3C(0LL, flg);
  UnityEngine_GameObject__SetActive(criticalObject, flg, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__setData(
        BattleCommandComponent_o *this,
        BattleCommandData_o *indata,
        BattleServantData_o *insvtData,
        bool isAttack,
        bool isShowBuffIcon,
        bool isTDTypeChangeWindow,
        bool isInit,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  BattleCommandData_o **p_data; // x25
  struct BattleServantData_o **p_svtData; // x26
  int64_t v17; // x2
  char v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Spawner_o *spawner; // x0
  const MethodInfo *v24; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  struct UnityEngine_GameObject_array *v26; // x8
  struct UnityEngine_GameObject_array **p_effectobj; // x27
  __int64 v28; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 v30; // x24
  UnityEngine_Object_o *v31; // x28
  struct UnityEngine_GameObject_array *v32; // x8
  struct UnityEngine_GameObject_array *v33; // x8
  UnityEngine_Object_o *v34; // x28
  int64_t v35; // x0
  int64_t v36; // x2
  char v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  const MethodInfo *v42; // x6
  BattleServantData_o *v43; // x1
  BattleBuffData_o *buffData; // x0
  BattleCommandData_o *v45; // x22
  const MethodInfo *v46; // x2
  BattleCommandData_o *data; // x0
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x4
  int32_t commandCardParam; // w1
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B18AC8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, indata, insvtData);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B18AC8 = 1;
  }
  p_data = &this->fields.data;
  this->fields.data = indata;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.data,
    (int64_t)indata,
    (int64_t)insvtData,
    isAttack,
    (System_String_o *)isShowBuffIcon,
    (BattleSetupInfo_o *)isTDTypeChangeWindow,
    (FollowerInfo_o *)isInit,
    (PartyListViewItem_o *)method);
  p_svtData = &this->fields.svtData;
  this->fields.svtData = insvtData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtData, (int64_t)insvtData, v17, v18, v19, v20, v21, v22);
  effectobj = this->fields.effectobj;
  this->fields.selectflg = 0;
  if ( !effectobj )
    goto LABEL_23;
  BattleCommandComponent__DestroyEffectObject1(this, v24);
  v26 = this->fields.effectobj;
  if ( !v26 )
    goto LABEL_23;
  p_effectobj = &this->fields.effectobj;
  v28 = 4LL;
  while ( 1 )
  {
    max_length = v26->max_length;
    v30 = v28 - 4;
    if ( v28 - 4 >= (int)max_length )
      break;
    if ( v30 >= max_length )
      goto LABEL_45;
    v31 = (UnityEngine_Object_o *)*((_QWORD *)&v26->obj.klass + v28);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    spawner = (Spawner_o *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
    if ( ((unsigned __int8)spawner & 1) != 0 )
    {
      if ( v30 < 5 )
      {
        v33 = *p_effectobj;
        if ( !*p_effectobj )
          goto LABEL_23;
        if ( v30 >= v33->max_length )
LABEL_45:
          sub_1BCAA44(spawner, v24);
        v34 = (UnityEngine_Object_o *)*((_QWORD *)&v33->obj.klass + v28);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
        UnityEngine_Object__Destroy_70154244(v34, 0LL);
      }
      else if ( v28 == 9 )
      {
        v32 = this->fields.effectobj;
        if ( !v32 )
          goto LABEL_23;
        if ( (*(_QWORD *)&v32->max_length & 0xFFFFFFFEuLL) <= 5 )
          goto LABEL_45;
        spawner = this->fields.spawner;
        if ( !spawner )
          goto LABEL_23;
        Spawner__Despawn(spawner, v32->m_Items[5], 1, 0LL);
      }
    }
    v26 = *p_effectobj;
    ++v28;
    if ( !*p_effectobj )
      goto LABEL_23;
  }
  v35 = sub_1BCA888(UnityEngine_GameObject___TypeInfo, v26->max_length);
  *p_effectobj = (struct UnityEngine_GameObject_array *)v35;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectobj, v35, v36, v37, v38, v39, v40, v41);
  if ( *p_data )
  {
    if ( BattleCommandData__isTreasureDvc(*p_data, 0LL) )
    {
      v43 = *p_svtData;
      if ( *p_svtData )
      {
        buffData = v43->fields.buffData;
        if ( buffData )
        {
          if ( BattleBuffData__isTDTypeChange(buffData, v43, 0LL, 0LL) )
          {
            spawner = (Spawner_o *)*p_svtData;
            if ( !*p_svtData )
              goto LABEL_23;
            spawner = (Spawner_o *)BattleServantData__get_TreasureDevice((BattleServantData_o *)spawner, 0LL);
            if ( !spawner )
              goto LABEL_23;
            if ( TreasureDvcEntity__IsTDTypeChange((TreasureDvcEntity_o *)spawner, 0LL) && !isTDTypeChangeWindow )
            {
              spawner = (Spawner_o *)*p_svtData;
              if ( !*p_svtData )
                goto LABEL_23;
              v45 = *p_data;
              spawner = (Spawner_o *)BattleServantData__getTreasureDvcCardId((BattleServantData_o *)spawner, 0LL);
              if ( !v45 )
                goto LABEL_23;
              v45->fields._type = (int)spawner;
            }
          }
        }
      }
    }
  }
  BattleCommandComponent__updateView(this, isInit, isAttack, isShowBuffIcon, isTDTypeChangeWindow, 0, v42);
  data = this->fields.data;
  if ( !data || BattleCommandData__getCriticalPoint(data, 0LL) < 1 || !this->fields.isCountUp )
    goto LABEL_41;
  spawner = (Spawner_o *)this->fields.criticalObject;
  if ( !spawner )
LABEL_23:
    sub_1BCAA3C(spawner, v24);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spawner, 1, 0LL);
LABEL_41:
  v54.fields.r = 0.0;
  v54.fields.g = 0.0;
  v54.fields.b = 0.0;
  v54.fields.a = 0.0;
  BattleCommandComponent__SetCommandCodeActive(this, v54, 1, v46);
  v55.fields.r = 0.0;
  v55.fields.g = 0.0;
  v55.fields.b = 0.0;
  v55.fields.a = 0.0;
  BattleCommandComponent__SetCommandAssistActive(this, v55, 1, v48);
  if ( indata )
  {
    BattleCommandComponent__SetPowerUpCardValue(this, indata->fields.commandCardParam, v49);
    commandCardParam = indata->fields.commandCardParam;
  }
  else
  {
    BattleCommandComponent__SetPowerUpCardValue(this, 0, v49);
    commandCardParam = 0;
  }
  BattleCommandComponent__SetPowerUpCardIcon(this, commandCardParam, 2, 1, v50);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__setData_43835992(
        BattleCommandComponent_o *this,
        BattleServantData_o *svtData,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x22
  __int64 v18; // x23
  __int64 v19; // x24
  Il2CppClass *klass; // x8
  int32_t v21; // w22
  __int64 v22; // x23
  __int64 v23; // x24
  int32_t v24; // w24
  int32_t CommandDispLimitCount; // w25
  int32_t CommandImageSvtId; // w26
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x23
  struct BattleBuffData_o *buffData; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  const MethodInfo *v38; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4B18ACC & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandData_TypeInfo, svtData, *(_QWORD *)&index);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B18ACC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svtData )
    goto LABEL_16;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v19 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
  *(_QWORD *)&v39.fields.currentCryptoKey = v19;
  *(_QWORD *)&v39.fields.fakeValue = v18;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v39, 0LL);
  if ( !v17 )
    goto LABEL_16;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v17,
               (int32_t)Instance,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Instance )
  {
    klass = Instance[9].klass;
    if ( klass )
    {
      if ( LODWORD(klass->_1.namespaze) <= index )
        sub_1BCAA44(Instance, v16);
      v21 = *((_DWORD *)&klass->_1.byval_arg.data + index);
      v23 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
      v22 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
      *(_QWORD *)&v40.fields.currentCryptoKey = v23;
      *(_QWORD *)&v40.fields.fakeValue = v22;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v40, 0LL);
      CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(svtData, 0LL);
      CommandImageSvtId = BattleServantData__GetCommandImageSvtId(svtData, 0LL);
      v30 = sub_1BCAA2C(BattleCommandData_TypeInfo, v27, v28, v29);
      BattleCommandData___ctor_44072696(
        (BattleCommandData_o *)v30,
        v21,
        v24,
        CommandDispLimitCount,
        CommandImageSvtId,
        -1,
        0LL);
      if ( v30 )
      {
        BattleCommandData__SetCommandCardParam((BattleCommandData_o *)v30, svtData->fields.commandCardParam, index, 0LL);
        buffData = svtData->fields.buffData;
        *(_QWORD *)(v30 + 112) = buffData;
        sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 112), (int64_t)buffData, v32, v33, v34, v35, v36, v37);
        *(_DWORD *)(v30 + 88) = index;
        BattleCommandComponent__setData(this, (BattleCommandData_o *)v30, svtData, 0, 1, 0, 1, v38);
        return;
      }
    }
LABEL_16:
    sub_1BCAA3C(Instance, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__setDepth(
        BattleCommandComponent_o *this,
        int32_t basedepth,
        const MethodInfo *method)
{
  UIWidget_o *bg; // x0
  int32_t v6; // w22
  int32_t v7; // w21
  __int64 v8; // x1
  UnityEngine_Object_o *assistSprite; // x23
  UnityEngine_Object_o *assistChargeTurnLabel; // x23
  UnityEngine_Object_o *assistRemainingTurnLabel; // x23
  int32_t v12; // w23
  __int64 v13; // x1
  UnityEngine_Object_o *donotsleepSprite; // x24
  UnityEngine_Object_o *donotPermanentSleep; // x24
  UnityEngine_Object_o *unusableShortageStarSprite; // x24
  UnityEngine_Object_o *unusableNpSprite; // x24
  UnityEngine_Object_o *donotActTypeSprite; // x24
  UnityEngine_Object_o *donotActWithTypeSp; // x24
  UnityEngine_Object_o *donotActCardSprite; // x24
  UnityEngine_Object_o *treasureDeviceErrorSprite; // x24
  struct BattleServantBuffIconComponent_array *buffIconList; // x22
  int max_length; // w8
  unsigned int v24; // w23
  BattleServantBuffIconComponent_o *v25; // x8
  UnityEngine_Object_o *powerUpCardValue; // x21
  UnityEngine_Object_o *powerUpCardIcon; // x21
  UnityEngine_Object_o *nowTreasureDeviceTypeImage; // x21
  UnityEngine_Object_o *restTreasureDeviceChangeTurnLabel; // x21
  UnityEngine_Object_o *iconChangeTypeByTransform; // x21

  if ( (byte_4B18AC6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth, method);
    byte_4B18AC6 = 1;
  }
  bg = (UIWidget_o *)this->fields.bg;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, basedepth + 1, 0LL);
  bg = (UIWidget_o *)this->fields.facetex;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, basedepth + 2, 0LL);
  bg = (UIWidget_o *)this->fields.icon;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, basedepth + 3, 0LL);
  bg = (UIWidget_o *)this->fields.text;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, basedepth + 4, 0LL);
  bg = (UIWidget_o *)this->fields.nobletex;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, basedepth + 5, 0LL);
  bg = (UIWidget_o *)this->fields.codeTexture;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, basedepth + 6, 0LL);
  bg = (UIWidget_o *)this->fields.codeSprite;
  if ( !bg )
    goto LABEL_103;
  v6 = basedepth + 7;
  UIWidget__set_depth(bg, basedepth + 7, 0LL);
  bg = (UIWidget_o *)this->fields.chargeTurnLabel;
  if ( !bg )
    goto LABEL_103;
  v7 = basedepth + 11;
  UIWidget__set_depth(bg, basedepth + 11, 0LL);
  bg = (UIWidget_o *)this->fields.remainingTurnLabel;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, v7, 0LL);
  assistSprite = (UnityEngine_Object_o *)this->fields.assistSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(assistSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.assistSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v6, 0LL);
  }
  assistChargeTurnLabel = (UnityEngine_Object_o *)this->fields.assistChargeTurnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(assistChargeTurnLabel, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.assistChargeTurnLabel;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v7, 0LL);
  }
  assistRemainingTurnLabel = (UnityEngine_Object_o *)this->fields.assistRemainingTurnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(assistRemainingTurnLabel, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.assistRemainingTurnLabel;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v7, 0LL);
  }
  bg = (UIWidget_o *)this->fields.sealedSprite;
  if ( !bg )
    goto LABEL_103;
  v12 = basedepth + 9;
  UIWidget__set_depth(bg, basedepth + 9, 0LL);
  bg = (UIWidget_o *)this->fields.donotactSprite;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, v12, 0LL);
  donotsleepSprite = (UnityEngine_Object_o *)this->fields.donotsleepSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(donotsleepSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotsleepSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v12, 0LL);
  }
  donotPermanentSleep = (UnityEngine_Object_o *)this->fields.donotPermanentSleep;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(donotPermanentSleep, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotPermanentSleep;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v12, 0LL);
  }
  unusableShortageStarSprite = (UnityEngine_Object_o *)this->fields.unusableShortageStarSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(unusableShortageStarSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.unusableShortageStarSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v12, 0LL);
  }
  unusableNpSprite = (UnityEngine_Object_o *)this->fields.unusableNpSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(unusableNpSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.unusableNpSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v12, 0LL);
  }
  donotActTypeSprite = (UnityEngine_Object_o *)this->fields.donotActTypeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(donotActTypeSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotActTypeSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 10, 0LL);
  }
  donotActWithTypeSp = (UnityEngine_Object_o *)this->fields.donotActWithTypeSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(donotActWithTypeSp, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotActWithTypeSp;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v12, 0LL);
  }
  donotActCardSprite = (UnityEngine_Object_o *)this->fields.donotActCardSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(donotActCardSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotActCardSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 10, 0LL);
  }
  treasureDeviceErrorSprite = (UnityEngine_Object_o *)this->fields.treasureDeviceErrorSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(treasureDeviceErrorSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.treasureDeviceErrorSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v12, 0LL);
  }
  GameObjectHelper__addNguiDepth(this->fields.criticalObject, v6, 1, 0LL);
  bg = (UIWidget_o *)this->fields.friendIcon;
  if ( !bg || (UIWidget__set_depth(bg, basedepth + 10, 0LL), (buffIconList = this->fields.buffIconList) == 0LL) )
LABEL_103:
    sub_1BCAA3C(bg, *(_QWORD *)&basedepth);
  max_length = buffIconList->max_length;
  if ( max_length >= 1 )
  {
    v24 = 0;
    do
    {
      if ( v24 >= max_length )
        sub_1BCAA44(bg, *(_QWORD *)&basedepth);
      v25 = buffIconList->m_Items[v24];
      if ( !v25 )
        goto LABEL_103;
      bg = (UIWidget_o *)v25->fields.iconSprite;
      if ( !bg )
        goto LABEL_103;
      UIWidget__set_depth(bg, v7, 0LL);
      max_length = buffIconList->max_length;
    }
    while ( (int)++v24 < max_length );
  }
  powerUpCardValue = (UnityEngine_Object_o *)this->fields.powerUpCardValue;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(powerUpCardValue, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.powerUpCardValue;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 8, 0LL);
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(powerUpCardIcon, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.powerUpCardIcon;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 8, 0LL);
  }
  nowTreasureDeviceTypeImage = (UnityEngine_Object_o *)this->fields.nowTreasureDeviceTypeImage;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(nowTreasureDeviceTypeImage, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.nowTreasureDeviceTypeImage;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 12, 0LL);
  }
  restTreasureDeviceChangeTurnLabel = (UnityEngine_Object_o *)this->fields.restTreasureDeviceChangeTurnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(restTreasureDeviceChangeTurnLabel, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.restTreasureDeviceChangeTurnLabel;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 13, 0LL);
  }
  iconChangeTypeByTransform = (UnityEngine_Object_o *)this->fields.iconChangeTypeByTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
  if ( UnityEngine_Object__op_Inequality(iconChangeTypeByTransform, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.iconChangeTypeByTransform;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 12, 0LL);
  }
  this->fields.basedepth = basedepth;
}


void __fastcall BattleCommandComponent__setMoveMode(BattleCommandComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BattleCommandComponent__stopFirstAura(this, method);
  BattleCommandComponent__resetSelectStamp(this, v3);
}


void __fastcall BattleCommandComponent__setPerf(
        BattleCommandComponent_o *this,
        BattlePerformance_o *inPerf,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.perf = inPerf;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.perf, (int64_t)inPerf, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall BattleCommandComponent__setSelect(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  this->fields.selectflg = flg;
}


void __fastcall BattleCommandComponent__setSelectStamp(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *stamp,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct UnityEngine_GameObject_array *effectobj; // x0

  effectobj = this->fields.effectobj;
  if ( !effectobj )
    sub_1BCAA3C(0LL, stamp);
  if ( effectobj->max_length <= 5 )
    sub_1BCAA44(effectobj, stamp);
  effectobj->m_Items[5] = stamp;
  sub_1BCA784((PartyOrganizationUtility_o *)&effectobj->m_Items[5], (int64_t)stamp, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall BattleCommandComponent__setShader(
        BattleCommandComponent_o *this,
        System_String_o *shaderName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *facetex; // x21
  struct UITexture_o *v8; // x20
  UnityEngine_Shader_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  UnityEngine_Material_o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B18AC5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, shaderName, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B18AC5 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, shaderName);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v8 = this->fields.facetex;
    v9 = UnityEngine_Shader__Find(shaderName, 0LL);
    v13 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v10, v11, v12);
    UnityEngine_Material___ctor(v13, v9, 0LL);
    if ( !v8 )
      sub_1BCAA3C(v14, v15);
    ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v8->klass->vtable._25_set_material.method)(
      v8,
      v13,
      v8->klass->vtable._26_get_mainTexture.methodPtr);
  }
}


void __fastcall BattleCommandComponent__setTarget(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.target = target;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.target, (int64_t)target, (int64_t)method, v3, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__setTouchFlg(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B18AE7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, flg, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B18AE7 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v9 )
  {
    if ( !Component_object )
      sub_1BCAA3C(v9, v10);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0LL);
  }
}


void __fastcall BattleCommandComponent__startComboCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4.fields.r = 1.0;
  v4.fields.g = 1.0;
  v4.fields.b = 1.0;
  v4.fields.a = 1.0;
  BattleCommandComponent__SetCardColor(this, v4, method);
  BattleCommandComponent__resetSelectStamp(this, v3);
}


void __fastcall BattleCommandComponent__startCountUp(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCommandComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct BattleCommandData_o *data; // x8
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  BattleCommandData_o *v10; // x0
  DrumRollLabel_o *criticallabel; // x20
  int32_t v12; // w21
  DrumRollLabel_CompleteEventHandler_o *v13; // x22

  v3 = this;
  if ( (byte_4B18ADA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleCommandComponent_compCriticallabel__, method, v2);
    this = (BattleCommandComponent_o *)sub_1BCA7E0(&DrumRollLabel_CompleteEventHandler_TypeInfo, v4, v5);
    byte_4B18ADA = 1;
  }
  data = v3->fields.data;
  if ( !data )
    goto LABEL_15;
  this = (BattleCommandComponent_o *)v3->fields.criticalObject;
  if ( data->fields.starcount <= 0 )
  {
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
LABEL_15:
    sub_1BCAA3C(this, method);
  }
  if ( !this )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (BattleCommandComponent_o *)v3->fields.criticallabel;
  v3->fields.isCountUp = 1;
  if ( !this )
    goto LABEL_15;
  DrumRollLabel__setParam((DrumRollLabel_o *)this, 0, 0LL);
  this = (BattleCommandComponent_o *)v3->fields.criticallabel;
  if ( !this )
    goto LABEL_15;
  DrumRollLabel__ChangeParamNonAnimation((DrumRollLabel_o *)this, 0, 1, 0LL);
  v10 = v3->fields.data;
  criticallabel = v3->fields.criticallabel;
  v12 = v10 ? v3->fields.boostedCriticalRate + BattleCommandData__getCriticalPoint(v10, 0LL) : 0;
  v13 = (DrumRollLabel_CompleteEventHandler_o *)sub_1BCAA2C(DrumRollLabel_CompleteEventHandler_TypeInfo, v7, v8, v9);
  DrumRollLabel_CompleteEventHandler___ctor(
    v13,
    (Il2CppObject *)v3,
    Method_BattleCommandComponent_compCriticallabel__,
    0LL);
  if ( !criticallabel )
    goto LABEL_15;
  DrumRollLabel__changeParam(criticallabel, v12, 1, v13, 0.0, 0LL);
}


void __fastcall BattleCommandComponent__startMoveFloat(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float v4; // s0
  const MethodInfo *v5; // x2

  if ( (byte_4B18AD2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16945/*"anim_commandfloat"*/, method, v2);
    byte_4B18AD2 = 1;
  }
  v4 = UnityEngine_Random__Range(0.0, 0.2, 0LL);
  BattleCommandComponent__PlayAnimation(this, (System_String_o *)StringLiteral_16945/*"anim_commandfloat"*/, v4, v5);
}


void __fastcall BattleCommandComponent__stopAnimation(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Component_object; // x21
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  __int64 nomalwidget; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Transform_o *v14; // x20
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v16; // x20
  struct UnityEngine_GameObject_array *v17; // x8
  UnityEngine_Object_o *v18; // x19

  if ( (byte_4B18AD3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Animation___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B18AD3 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  nomalwidget = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( (nomalwidget & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    SimpleAnimation__Stop((SimpleAnimation_o *)Component_object, 0LL);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    nomalwidget = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL);
    if ( (nomalwidget & 1) != 0 )
    {
      if ( !v10 )
        goto LABEL_29;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v10, 0LL);
    }
  }
  nomalwidget = (__int64)this->fields.nomalwidget;
  if ( !nomalwidget )
    goto LABEL_29;
  nomalwidget = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nomalwidget, 0LL);
  if ( !nomalwidget )
    goto LABEL_29;
  nomalwidget = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)nomalwidget, 0LL);
  v14 = (UnityEngine_Transform_o *)nomalwidget;
  if ( !byte_4B109C1 )
  {
    nomalwidget = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v12, v13);
    byte_4B109C1 = 1;
  }
  if ( !v14
    || (UnityEngine_Transform__set_localPosition(v14, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (effectobj = this->fields.effectobj) == 0LL) )
  {
LABEL_29:
    sub_1BCAA3C(nomalwidget, v12);
  }
  if ( effectobj->max_length <= 2 )
    goto LABEL_30;
  v16 = (UnityEngine_Object_o *)effectobj->m_Items[2];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  nomalwidget = UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
  if ( (nomalwidget & 1) != 0 )
  {
    v17 = this->fields.effectobj;
    if ( v17 )
    {
      if ( v17->max_length > 2 )
      {
        v18 = (UnityEngine_Object_o *)v17->m_Items[2];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
        UnityEngine_Object__DestroyImmediate_70154432(v18, 0LL);
        return;
      }
LABEL_30:
      sub_1BCAA44(nomalwidget, v12);
    }
    goto LABEL_29;
  }
}


void __fastcall BattleCommandComponent__stopFirstAura(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCommandComponent_o *v3; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_array *v6; // x8
  UnityEngine_Object_o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  v3 = this;
  if ( (byte_4B18AD7 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18AD7 = 1;
  }
  effectobj = v3->fields.effectobj;
  if ( !effectobj )
    goto LABEL_16;
  if ( effectobj->max_length <= 4 )
    goto LABEL_17;
  v5 = (UnityEngine_Object_o *)effectobj->m_Items[4];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v3->fields.effectobj;
    if ( v6 )
    {
      if ( v6->max_length <= 4 )
        goto LABEL_17;
      v7 = (UnityEngine_Object_o *)v6->m_Items[4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      UnityEngine_Object__Destroy_70154244(v7, 0LL);
      this = (BattleCommandComponent_o *)v3->fields.effectobj;
      if ( this )
      {
        if ( LODWORD(this->fields.m_CancellationTokenSource) > 4 )
        {
          this->fields.facetex = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.facetex, 0LL, v8, v9, v10, v11, v12, v13);
          return;
        }
LABEL_17:
        sub_1BCAA44(this, method);
      }
    }
LABEL_16:
    sub_1BCAA3C(this, method);
  }
}


void __fastcall BattleCommandComponent__updateClassMag(
        BattleCommandComponent_o *this,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  BattleCommandComponent_o *v4; // x19
  struct UnityEngine_GameObject_array *addObjectList; // x8
  UnityEngine_Object_o *v6; // x21
  struct UnityEngine_GameObject_array *v7; // x8
  UnityEngine_Object_o *v8; // x21
  struct UnityEngine_GameObject_array *v9; // x8
  struct UnityEngine_GameObject_array *v10; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleCommandData_o *data; // x8
  float ShowClassMagnification; // s0
  struct UnityEngine_GameObject_array *v14; // x8
  struct UnityEngine_GameObject_array *v15; // x8

  v4 = this;
  if ( (byte_4B18AF4 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, targetSvt, method);
    byte_4B18AF4 = 1;
  }
  if ( targetSvt && v4->fields.data )
  {
    addObjectList = v4->fields.addObjectList;
    if ( !addObjectList )
      goto LABEL_36;
    if ( !addObjectList->max_length )
      goto LABEL_37;
    v6 = (UnityEngine_Object_o *)addObjectList->m_Items[0];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetSvt);
    this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v7 = v4->fields.addObjectList;
      if ( !v7 )
        goto LABEL_36;
      if ( v7->max_length <= 1 )
        goto LABEL_37;
      v8 = (UnityEngine_Object_o *)v7->m_Items[1];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetSvt);
      this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = v4->fields.addObjectList;
        if ( !v9 )
          goto LABEL_36;
        if ( !v9->max_length )
          goto LABEL_37;
        this = (BattleCommandComponent_o *)v9->m_Items[0];
        if ( !this )
          goto LABEL_36;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v10 = v4->fields.addObjectList;
        if ( !v10 )
          goto LABEL_36;
        if ( v10->max_length <= 1 )
          goto LABEL_37;
        this = (BattleCommandComponent_o *)v10->m_Items[1];
        if ( !this
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
              (perf = v4->fields.perf) == 0LL)
          || (data = v4->fields.data) == 0LL
          || (this = (BattleCommandComponent_o *)perf->fields.data) == 0LL
          || (this = (BattleCommandComponent_o *)BattleData__getServantData(
                                                   (BattleData_o *)this,
                                                   data->fields.uniqueId,
                                                   0LL),
              !v4->fields.perf) )
        {
LABEL_36:
          sub_1BCAA3C(this, targetSvt);
        }
        ShowClassMagnification = BattlePerformance__getShowClassMagnification(
                                   v4->fields.perf,
                                   v4->fields.data,
                                   (BattleServantData_o *)this,
                                   targetSvt,
                                   0LL);
        if ( ShowClassMagnification > 1.0 )
        {
          v14 = v4->fields.addObjectList;
          if ( !v14 )
            goto LABEL_36;
          if ( v14->max_length > 1 )
          {
            this = (BattleCommandComponent_o *)v14->m_Items[1];
            if ( !this )
              goto LABEL_36;
            goto LABEL_34;
          }
          goto LABEL_37;
        }
        if ( ShowClassMagnification < 1.0 )
        {
          v15 = v4->fields.addObjectList;
          if ( !v15 )
            goto LABEL_36;
          if ( v15->max_length )
          {
            this = (BattleCommandComponent_o *)v15->m_Items[0];
            if ( !this )
              goto LABEL_36;
LABEL_34:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            return;
          }
LABEL_37:
          sub_1BCAA44(this, targetSvt);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__updateCount(
        BattleCommandComponent_o *this,
        bool isNonAnimation,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  BattleCommandData_o *data; // x0
  int32_t v8; // w20
  UnityEngine_GameObject_o *criticalObject; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  struct DrumRollLabel_o *criticallabel; // x22
  DrumRollLabel_o *v13; // x0
  int32_t v14; // w1
  DrumRollLabel_CompleteEventHandler_o *v15; // x3
  DrumRollLabel_CompleteEventHandler_o *v16; // x21

  if ( (byte_4B18ADB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleCommandComponent_compCriticallabel__, isNonAnimation, method);
    sub_1BCA7E0(&DrumRollLabel_CompleteEventHandler_TypeInfo, v5, v6);
    byte_4B18ADB = 1;
  }
  data = this->fields.data;
  if ( !data || (v8 = this->fields.boostedCriticalRate + BattleCommandData__getCriticalPoint(data, 0LL), v8 <= 0) )
  {
    criticalObject = this->fields.criticalObject;
    if ( criticalObject )
    {
      UnityEngine_GameObject__SetActive(criticalObject, 0, 0LL);
      return;
    }
    goto LABEL_19;
  }
  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    goto LABEL_19;
  if ( !UnityEngine_GameObject__get_activeSelf(criticalObject, 0LL) )
  {
    criticalObject = (UnityEngine_GameObject_o *)this->fields.criticallabel;
    if ( !criticalObject )
      goto LABEL_19;
    DrumRollLabel__ChangeParamNonAnimation((DrumRollLabel_o *)criticalObject, 0, 1, 0LL);
  }
  criticalObject = this->fields.criticalObject;
  if ( !criticalObject
    || (UnityEngine_GameObject__SetActive(criticalObject, 1, 0LL), (criticallabel = this->fields.criticallabel) == 0LL) )
  {
LABEL_19:
    sub_1BCAA3C(criticalObject, isNonAnimation);
  }
  if ( isNonAnimation )
  {
    DrumRollLabel__ChangeParamNonAnimation(this->fields.criticallabel, v8, 0, 0LL);
  }
  else
  {
    if ( v8 >= criticallabel->fields.nowvalue )
    {
      v16 = (DrumRollLabel_CompleteEventHandler_o *)sub_1BCAA2C(
                                                      DrumRollLabel_CompleteEventHandler_TypeInfo,
                                                      isNonAnimation,
                                                      v10,
                                                      v11);
      DrumRollLabel_CompleteEventHandler___ctor(
        v16,
        (Il2CppObject *)this,
        Method_BattleCommandComponent_compCriticallabel__,
        0LL);
      v13 = criticallabel;
      v14 = v8;
      v15 = v16;
    }
    else
    {
      v13 = this->fields.criticallabel;
      v14 = v8;
      v15 = 0LL;
    }
    DrumRollLabel__changeParam(v13, v14, 1, v15, 0.0, 0LL);
  }
}


void __fastcall BattleCommandComponent__updateSelectedEffect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCommandComponent_o *v3; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_array *v6; // x8
  BattleCommandComponent_o *v7; // x20
  struct UnityEngine_GameObject_array *v8; // x8
  __int64 v9; // x2
  BattleCommandComponent_o *v10; // x20
  struct UnityEngine_GameObject_array *v11; // x8
  __int64 v12; // x2
  BattleCommandComponent_o *v13; // x20
  struct UnityEngine_GameObject_array *v14; // x8
  struct UnityEngine_GameObject_array *v15; // x8
  UnityEngine_Object_o *v16; // x20
  struct UnityEngine_GameObject_array *v17; // x8
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4B18AD9 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18AD9 = 1;
  }
  effectobj = v3->fields.effectobj;
  if ( !effectobj )
    goto LABEL_41;
  if ( effectobj->max_length <= 3 )
LABEL_42:
    sub_1BCAA44(this, method);
  v5 = (UnityEngine_Object_o *)effectobj->m_Items[3];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v3->fields.effectobj;
    if ( !v6 )
      goto LABEL_41;
    if ( v6->max_length <= 3 )
      goto LABEL_42;
    this = (BattleCommandComponent_o *)v6->m_Items[3];
    if ( !this )
      goto LABEL_41;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !v3->fields.nomalwidget )
      goto LABEL_41;
    v7 = this;
    this = (BattleCommandComponent_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)v3->fields.nomalwidget,
                                         0LL);
    if ( !v7 )
      goto LABEL_41;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v7, (UnityEngine_Transform_o *)this, 0LL);
    v8 = v3->fields.effectobj;
    if ( !v8 )
      goto LABEL_41;
    if ( v8->max_length <= 3 )
      goto LABEL_42;
    this = (BattleCommandComponent_o *)v8->m_Items[3];
    if ( !this )
      goto LABEL_41;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    v10 = this;
    if ( !byte_4B109C1 )
    {
      this = (BattleCommandComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v9);
      byte_4B109C1 = 1;
    }
    if ( !v10 )
      goto LABEL_41;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)v10,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0LL);
    v11 = v3->fields.effectobj;
    if ( !v11 )
      goto LABEL_41;
    if ( v11->max_length <= 3 )
      goto LABEL_42;
    this = (BattleCommandComponent_o *)v11->m_Items[3];
    if ( !this )
      goto LABEL_41;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    v13 = this;
    if ( !byte_4B109C9 )
    {
      this = (BattleCommandComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v12);
      byte_4B109C9 = 1;
    }
    if ( !v13 )
      goto LABEL_41;
    UnityEngine_Transform__set_eulerAngles(
      (UnityEngine_Transform_o *)v13,
      UnityEngine_Vector3_TypeInfo->static_fields->upVector,
      0LL);
    v14 = v3->fields.effectobj;
    if ( !v14 )
      goto LABEL_41;
    if ( v14->max_length <= 3 )
      goto LABEL_42;
    this = (BattleCommandComponent_o *)v14->m_Items[3];
    if ( !this )
      goto LABEL_41;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_41;
    v18.fields.x = 1.0;
    v18.fields.y = 1.0;
    v18.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v18, 0LL);
  }
  v15 = v3->fields.effectobj;
  if ( !v15 )
    goto LABEL_41;
  if ( v15->max_length <= 4 )
    goto LABEL_42;
  v16 = (UnityEngine_Object_o *)v15->m_Items[4];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v17 = v3->fields.effectobj;
    if ( !v17 )
      goto LABEL_41;
    if ( v17->max_length > 4 )
    {
      this = (BattleCommandComponent_o *)v17->m_Items[4];
      if ( this )
      {
        this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( this )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v3->fields.objectRoot, 0LL);
          return;
        }
      }
LABEL_41:
      sub_1BCAA3C(this, method);
    }
    goto LABEL_42;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__updateView(
        BattleCommandComponent_o *this,
        bool initFlg,
        bool isAttack,
        bool isShowBuffIcon,
        bool isTDTypeChangeWindow,
        bool isCharaHide,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  System_String_o *v47; // x21
  __int64 v48; // x28
  __int64 transform; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  UnityEngine_Transform_o *v52; // x26
  __int64 v53; // x1
  struct UIWidget_o *nomalwidget; // x0
  UnityEngine_GameObject_o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x1
  UnityEngine_GameObject_o *criticalObject; // x0
  const MethodInfo *v59; // x2
  struct BattleServantData_o *svtData; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v62; // x1
  BattleCommandData_o *data; // x0
  __int64 v64; // x1
  UnityEngine_Behaviour_o *facetex; // x0
  __int64 v66; // x1
  UnityEngine_Behaviour_o *icon; // x0
  __int64 v68; // x1
  UnityEngine_Behaviour_o *text; // x0
  __int64 v70; // x1
  UISprite_o *bg; // x0
  __int64 v72; // x1
  UIWidget_o *v73; // x0
  __int64 v74; // x1
  UIWidget_o *v75; // x0
  __int64 v76; // x1
  UnityEngine_Behaviour_o *friendIcon; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  BattleCommandSealStatus_o *v81; // x20
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  BattleCommandComponent_o *v88; // x0
  const MethodInfo *v89; // x3
  const MethodInfo *v90; // x2
  BattleServantData_o *v91; // x23
  BattleCommandData_o *v92; // x24
  UnityEngine_Object_o *perf; // x25
  _BOOL8 v94; // x0
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  struct BattlePerformance_o *v98; // x8
  BattleData_o *v99; // x25
  BattleCommandSealStatus_o *v100; // x26
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  __int64 v107; // x1
  UIWidget_o **p_facetex; // x23
  UITexture_o *v109; // x24
  BattleCommandData_o *v110; // x0
  __int64 v111; // x1
  int32_t ImageServantId; // w25
  BattleCommandData_o *v113; // x0
  __int64 loadSvtLimit; // x0
  __int64 v115; // x1
  struct BattleCommandData_o *v116; // x8
  int32_t v117; // w26
  int32_t svtlimit; // w27
  __int64 v119; // x1
  UnityEngine_Object_o *Manager__loadCommandCard; // x24
  __int64 v121; // x1
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  UnityEngine_Behaviour_o *v128; // x0
  __int64 v129; // x1
  UnityEngine_Behaviour_o *v130; // x0
  __int64 v131; // x1
  UnityEngine_Object_o *v132; // x24
  _BOOL8 v133; // x0
  __int64 v134; // x1
  UnityEngine_Behaviour_o *v135; // x0
  struct BattleCommandData_o *v136; // x8
  UnityEngine_Object_o *v137; // x22
  int treasureDvc; // w9
  uint32_t cctor_finished; // w8
  __int64 v140; // x1
  __int64 v141; // x1
  __int64 v142; // x1
  BattleCommandData_o *v143; // x0
  __int64 v144; // x1
  __int64 *v145; // x8
  BattleCommandData_o *v146; // x0
  BattleCommandData_o *v147; // x0
  Il2CppObject *v148; // x22
  UnityEngine_Behaviour_o *v149; // x0
  __int64 v150; // x0
  __int64 v151; // x1
  struct BattleCommandData_o *v152; // x8
  UISprite_o *v153; // x23
  FileName_c *v154; // x0
  __int64 v155; // x1
  UnityEngine_Behaviour_o *v156; // x0
  __int64 v157; // x0
  UISprite_o *v158; // x23
  FileName_c *v159; // x0
  __int64 v160; // x1
  UnityEngine_Behaviour_o *v161; // x0
  UISprite_o *v162; // x23
  System_String_o *v163; // x0
  UISprite_o *v164; // x21
  System_String_o *v165; // x0
  UISprite_o *v166; // x21
  System_String_o *v167; // x0
  __int64 v168; // x0
  __int64 v169; // x1
  struct UISprite_o *v170; // x21
  UISpriteData_o *AtlasSprite; // x0
  __int64 v172; // x1
  int width; // w22
  UISpriteData_o *v174; // x0
  __int64 v175; // x1
  __int64 v176; // x1
  UnityEngine_Component_o *v177; // x0
  UnityEngine_GameObject_o *v178; // x0
  __int64 v179; // x1
  __int64 v180; // x0
  __int64 v181; // x1
  __int64 v182; // x2
  UnityEngine_Transform_o *v183; // x21
  const MethodInfo *v184; // x1
  __int64 v185; // x0
  const MethodInfo *v186; // x1
  struct BattleCommandData_o *v187; // x8
  UnityEngine_Behaviour_o *v188; // x0
  __int64 v189; // x1
  BattleCommandData_o *v190; // x0
  UITexture_o *nobletex; // x21
  __int64 v192; // x1
  int32_t v193; // w22
  BattleCommandData_o *v194; // x0
  __int64 v195; // x0
  __int64 v196; // x1
  struct BattleCommandData_o *v197; // x8
  int32_t v198; // w23
  int32_t v199; // w24
  __int64 v200; // x1
  bool Manager__loadNobleName; // w21
  UnityEngine_Object_o *v202; // x22
  __int64 v203; // x1
  const MethodInfo *v204; // x2
  UnityEngine_Component_o *v205; // x0
  UnityEngine_GameObject_o *v206; // x0
  __int64 v207; // x1
  BattleCommandComponent_o *PrioredStatus; // x0
  const MethodInfo *v209; // x1
  const MethodInfo *v210; // x2
  struct BattleCommandData_o *v211; // x8
  __int64 v212; // x0
  __int64 v213; // x1
  const MethodInfo *v214; // x2
  struct BattleCommandData_o *v215; // x8
  const MethodInfo *v216; // x2
  __int64 v217; // x1
  UnityEngine_Object_o *svtId_label; // x20
  struct BattleCommandData_o *v219; // x8
  UILabel_o *v220; // x19
  System_String_o *v221; // x1
  UISprite_o *v222; // x0
  const MethodInfo *v223; // x3
  const MethodInfo *v224; // x1
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v226; // x1
  const MethodInfo *v227; // x3
  __int64 v228; // x1
  BattleCommandData_o *v229; // x0
  UISprite_o *donotActTypeSprite; // x20
  BattleCommandComponent_o *type; // x0
  const MethodInfo *v232; // x2
  System_String_o *CardTypeSealSpriteName; // x0
  BattleCommandData_o *v234; // x0
  __int64 v235; // x1
  UnityEngine_Object_o *displayRemainingTurn; // x20
  UILabel_o *v237; // x20
  System_String_o *v238; // x21
  const MethodInfo *v239; // x1
  const MethodInfo *v240; // x0
  __int64 v241; // x1
  InvokerMethod invoker_method; // x8
  int v243; // w8
  int v244; // w8
  Il2CppObject *v245; // x1
  System_String_o *v246; // x0
  int v247; // [xsp+8h] [xbp-68h] BYREF
  int32_t svtId; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B18ACF & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandSealStatus_TypeInfo, initFlg, isAttack);
    sub_1BCA7E0(&FileName_TypeInfo, v13, v14);
    sub_1BCA7E0(&int_TypeInfo, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_17945/*"card_bg_blank"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_5123/*"DISPLAY_REMAINING_TURN"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_22352/*"none"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_17087/*"arts"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_17967/*"card_txt_{0}"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_17821/*"buster"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_22975/*"quick"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_17959/*"card_icon_{0}"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_17947/*"card_bg_{0}"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_19524/*"extra"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_17946/*"card_bg_np{0}"*/, v45, v46);
    byte_4B18ACF = 1;
  }
  svtId = 0;
  if ( !this->fields.data )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      return;
    }
    goto LABEL_158;
  }
  v47 = (System_String_o *)StringLiteral_17947/*"card_bg_{0}"*/;
  v48 = StringLiteral_22352/*"none"*/;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v52 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4B109C6 )
  {
    transform = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v50, v51);
    byte_4B109C6 = 1;
  }
  if ( !v52 )
    sub_1BCAA3C(transform, v50);
  UnityEngine_Transform__set_localScale(v52, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  if ( initFlg )
  {
    nomalwidget = this->fields.nomalwidget;
    if ( !nomalwidget )
      sub_1BCAA3C(0LL, v53);
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))nomalwidget->klass->vtable._8_set_alpha.method)(
      nomalwidget,
      nomalwidget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
  }
  v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v55 )
    sub_1BCAA3C(0LL, v56);
  UnityEngine_GameObject__SetActive(v55, 1, 0LL);
  if ( !isAttack )
  {
    criticalObject = this->fields.criticalObject;
    if ( !criticalObject )
      sub_1BCAA3C(0LL, v57);
    UnityEngine_GameObject__SetActive(criticalObject, 0, 0LL);
    svtData = this->fields.svtData;
    if ( svtData && isShowBuffIcon )
      BattleCommandComponent__setBuffIconList(this, svtData->fields.buffData, v59);
    else
      BattleCommandComponent__setBuffIconList(this, 0LL, v59);
  }
  data = this->fields.data;
  if ( !data )
    sub_1BCAA3C(0LL, v57);
  if ( BattleCommandData__isBlank(data, 0LL) )
  {
    facetex = (UnityEngine_Behaviour_o *)this->fields.facetex;
    if ( !facetex )
      sub_1BCAA3C(0LL, v64);
    UnityEngine_Behaviour__set_enabled(facetex, 0, 0LL);
    icon = (UnityEngine_Behaviour_o *)this->fields.icon;
    if ( !icon )
      sub_1BCAA3C(0LL, v66);
    UnityEngine_Behaviour__set_enabled(icon, 0, 0LL);
    text = (UnityEngine_Behaviour_o *)this->fields.text;
    if ( !text )
      sub_1BCAA3C(0LL, v68);
    UnityEngine_Behaviour__set_enabled(text, 0, 0LL);
    bg = this->fields.bg;
    if ( !bg )
      sub_1BCAA3C(0LL, v70);
    UISprite__set_spriteName(bg, (System_String_o *)StringLiteral_17945/*"card_bg_blank"*/, 0LL);
    v73 = (UIWidget_o *)this->fields.bg;
    if ( !v73 )
      sub_1BCAA3C(0LL, v72);
    UIWidget__set_height(v73, 170, 0LL);
    v75 = (UIWidget_o *)this->fields.bg;
    if ( !v75 )
      sub_1BCAA3C(0LL, v74);
    UIWidget__set_width(v75, 133, 0LL);
    friendIcon = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !friendIcon )
      sub_1BCAA3C(0LL, v76);
    UnityEngine_Behaviour__set_enabled(friendIcon, 0, 0LL);
    v81 = (BattleCommandSealStatus_o *)sub_1BCAA2C(BattleCommandSealStatus_TypeInfo, v78, v79, v80);
    BattleCommandSealStatus___ctor(v81, 0LL);
    this->fields.sealStatus = v81;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sealStatus, (int64_t)v81, v82, v83, v84, v85, v86, v87);
    BattleCommandComponent__SetActiveComponent(
      v88,
      (UnityEngine_Component_o *)this->fields.iconChangeTypeByTransform,
      0,
      v89);
    goto LABEL_124;
  }
  v92 = this->fields.data;
  v91 = this->fields.svtData;
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64);
  v94 = UnityEngine_Object__op_Implicit(perf, 0LL);
  if ( v94 )
  {
    v98 = this->fields.perf;
    if ( !v98 )
      sub_1BCAA3C(v94, v95);
    v99 = v98->fields.data;
  }
  else
  {
    v99 = 0LL;
  }
  v100 = (BattleCommandSealStatus_o *)sub_1BCAA2C(BattleCommandSealStatus_TypeInfo, v95, v96, v97);
  BattleCommandSealStatus___ctor_44078548(v100, v92, v91, v99, 0LL);
  this->fields.sealStatus = v100;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sealStatus, (int64_t)v100, v101, v102, v103, v104, v105, v106);
  p_facetex = (UIWidget_o **)&this->fields.facetex;
  v109 = this->fields.facetex;
  v110 = this->fields.data;
  if ( !v110 )
    sub_1BCAA3C(0LL, v107);
  ImageServantId = BattleCommandData__GetImageServantId(v110, 0LL);
  v113 = this->fields.data;
  if ( !v113 )
    sub_1BCAA3C(0LL, v111);
  loadSvtLimit = BattleCommandData__get_loadSvtLimit(v113, 0LL);
  v116 = this->fields.data;
  if ( !v116 )
    sub_1BCAA3C(loadSvtLimit, v115);
  v117 = loadSvtLimit;
  svtlimit = v116->fields.svtlimit;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v115);
  Manager__loadCommandCard = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCard(
                                                       v109,
                                                       ImageServantId,
                                                       v117,
                                                       svtlimit,
                                                       0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v119);
  if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCard, 0LL, 0LL) )
  {
    *p_facetex = (UIWidget_o *)Manager__loadCommandCard;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.facetex,
      (int64_t)Manager__loadCommandCard,
      v122,
      v123,
      v124,
      v125,
      v126,
      v127);
  }
  v128 = (UnityEngine_Behaviour_o *)this->fields.icon;
  if ( !v128 )
    sub_1BCAA3C(0LL, v121);
  UnityEngine_Behaviour__set_enabled(v128, 1, 0LL);
  v130 = (UnityEngine_Behaviour_o *)this->fields.text;
  if ( !v130 )
    sub_1BCAA3C(0LL, v129);
  UnityEngine_Behaviour__set_enabled(v130, 1, 0LL);
  v132 = (UnityEngine_Object_o *)*p_facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v131);
  v133 = UnityEngine_Object__op_Inequality(v132, 0LL, 0LL);
  if ( v133 )
  {
    v135 = (UnityEngine_Behaviour_o *)*p_facetex;
    if ( isCharaHide )
    {
      if ( !v135 )
        sub_1BCAA3C(0LL, v134);
      UnityEngine_Behaviour__set_enabled(v135, 0, 0LL);
    }
    else
    {
      if ( !v135 )
        sub_1BCAA3C(0LL, v134);
      UnityEngine_Behaviour__set_enabled(v135, 1, 0LL);
    }
  }
  v136 = this->fields.data;
  if ( !v136 )
    sub_1BCAA3C(v133, v134);
  v137 = (UnityEngine_Object_o *)*p_facetex;
  treasureDvc = v136->fields.treasureDvc;
  cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
  if ( treasureDvc < 1 )
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v134);
    if ( UnityEngine_Object__op_Inequality(v137, 0LL, 0LL) )
    {
      if ( !*p_facetex )
        sub_1BCAA3C(0LL, v140);
      UIWidget__set_height(*p_facetex, 191, 0LL);
      if ( !*p_facetex )
        sub_1BCAA3C(0LL, v142);
      UIWidget__set_width(*p_facetex, 191, 0LL);
    }
  }
  else
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v134);
    if ( UnityEngine_Object__op_Inequality(v137, 0LL, 0LL) )
    {
      if ( !*p_facetex )
        sub_1BCAA3C(0LL, v140);
      UIWidget__set_height(*p_facetex, 191, 0LL);
      if ( !*p_facetex )
        sub_1BCAA3C(0LL, v141);
      UIWidget__set_width(*p_facetex, 191, 0LL);
    }
    v47 = (System_String_o *)StringLiteral_17946/*"card_bg_np{0}"*/;
  }
  v143 = this->fields.data;
  if ( !v143 )
    sub_1BCAA3C(0LL, v140);
  if ( BattleCommandData__isBuster(v143, 0LL) )
  {
    v145 = &StringLiteral_17821/*"buster"*/;
  }
  else
  {
    v146 = this->fields.data;
    if ( !v146 )
      sub_1BCAA3C(0LL, v144);
    if ( BattleCommandData__isQuick(v146, 0LL) )
    {
      v145 = &StringLiteral_22975/*"quick"*/;
    }
    else
    {
      v147 = this->fields.data;
      if ( !v147 )
        sub_1BCAA3C(0LL, v144);
      if ( !BattleCommandData__isArts(v147, 0LL) )
      {
        v234 = this->fields.data;
        if ( !v234 )
          sub_1BCAA3C(0LL, v144);
        if ( BattleCommandData__isAddAttack(v234, 0LL) )
          v148 = (Il2CppObject *)StringLiteral_19524/*"extra"*/;
        else
          v148 = (Il2CppObject *)v48;
        goto LABEL_79;
      }
      v145 = &StringLiteral_17087/*"arts"*/;
    }
  }
  v148 = (Il2CppObject *)*v145;
LABEL_79:
  v149 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
  if ( !v149 )
    sub_1BCAA3C(0LL, v144);
  UnityEngine_Behaviour__set_enabled(v149, 0, 0LL);
  v152 = this->fields.data;
  if ( !v152 )
    sub_1BCAA3C(v150, v151);
  if ( v152->fields.follower )
  {
    v153 = this->fields.friendIcon;
    v154 = FileName_TypeInfo;
    if ( !FileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo, v151);
    if ( !v153 )
      sub_1BCAA3C(v154, v151);
    UISprite__set_spriteName(v153, FileName_TypeInfo->static_fields->friendIconName, 0LL);
    v156 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !v156 )
      sub_1BCAA3C(0LL, v155);
    UnityEngine_Behaviour__set_enabled(v156, 1, 0LL);
    v152 = this->fields.data;
    if ( !v152 )
      sub_1BCAA3C(v157, v151);
  }
  if ( v152->fields.flgEventJoin )
  {
    v158 = this->fields.friendIcon;
    v159 = FileName_TypeInfo;
    if ( !FileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo, v151);
    if ( !v158 )
      sub_1BCAA3C(v159, v151);
    UISprite__set_spriteName(v158, FileName_TypeInfo->static_fields->eventJoinIconName, 0LL);
    v161 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !v161 )
      sub_1BCAA3C(0LL, v160);
    UnityEngine_Behaviour__set_enabled(v161, 1, 0LL);
  }
  v162 = this->fields.bg;
  v163 = System_String__Format(v47, v148, 0LL);
  if ( !v162 )
    sub_1BCAA3C(v163, v163);
  UISprite__set_spriteName(v162, v163, 0LL);
  v164 = this->fields.icon;
  v165 = System_String__Format((System_String_o *)StringLiteral_17959/*"card_icon_{0}"*/, v148, 0LL);
  if ( !v164 )
    sub_1BCAA3C(v165, v165);
  UISprite__set_spriteName(v164, v165, 0LL);
  v166 = this->fields.text;
  v167 = System_String__Format((System_String_o *)StringLiteral_17967/*"card_txt_{0}"*/, v148, 0LL);
  if ( !v166 )
    sub_1BCAA3C(v167, v167);
  UISprite__set_spriteName(v166, v167, 0LL);
  v170 = this->fields.text;
  if ( !v170 )
    sub_1BCAA3C(v168, v169);
  AtlasSprite = UISprite__GetAtlasSprite(this->fields.text, 0LL);
  if ( !AtlasSprite )
    sub_1BCAA3C(0LL, v172);
  if ( !this->fields.text )
    sub_1BCAA3C(AtlasSprite, v172);
  width = AtlasSprite->fields.width;
  v174 = UISprite__GetAtlasSprite(this->fields.text, 0LL);
  if ( !v174 )
    sub_1BCAA3C(0LL, v175);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float, float, float, float))v170->klass->vtable._18_SetRect.method)(
    v170,
    v170->klass->vtable._19_ParentHasChanged.methodPtr,
    0.0,
    0.0,
    (float)width,
    (float)v174->fields.height);
  v177 = (UnityEngine_Component_o *)this->fields.text;
  if ( !v177 )
    sub_1BCAA3C(0LL, v176);
  v178 = UnityEngine_Component__get_gameObject(v177, 0LL);
  if ( !v178 )
    sub_1BCAA3C(0LL, v179);
  v180 = (__int64)UnityEngine_GameObject__get_transform(v178, 0LL);
  v183 = (UnityEngine_Transform_o *)v180;
  if ( !byte_4B109C1 )
  {
    v180 = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v181, v182);
    byte_4B109C1 = 1;
  }
  if ( !v183 )
    sub_1BCAA3C(v180, v181);
  UnityEngine_Transform__set_localPosition(v183, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  BattleCommandComponent__UpdateIconChangeTypeByTransform(this, v184);
  v187 = this->fields.data;
  if ( !v187 )
    sub_1BCAA3C(v185, v186);
  if ( v187->fields.treasureDvc >= 1 )
  {
    v188 = (UnityEngine_Behaviour_o *)this->fields.text;
    if ( !v188 )
      sub_1BCAA3C(0LL, v186);
    UnityEngine_Behaviour__set_enabled(v188, 0, 0LL);
    v190 = this->fields.data;
    if ( !v190 )
      sub_1BCAA3C(0LL, v189);
    nobletex = this->fields.nobletex;
    v193 = BattleCommandData__GetImageServantId(v190, 0LL);
    v194 = this->fields.data;
    if ( !v194 )
      sub_1BCAA3C(0LL, v192);
    v195 = BattleCommandData__get_loadSvtLimit(v194, 0LL);
    v197 = this->fields.data;
    if ( !v197 )
      sub_1BCAA3C(v195, v196);
    v198 = v195;
    v199 = v197->fields.treasureDvc;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v196);
    Manager__loadNobleName = ServantAssetLoadManager__loadNobleName(nobletex, v193, v198, v199, 0LL);
    v202 = (UnityEngine_Object_o *)this->fields.nobletex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v200);
    if ( UnityEngine_Object__op_Inequality(v202, 0LL, 0LL) )
    {
      v205 = (UnityEngine_Component_o *)this->fields.nobletex;
      if ( !v205 )
        sub_1BCAA3C(0LL, v203);
      v206 = UnityEngine_Component__get_gameObject(v205, 0LL);
      if ( !v206 )
        sub_1BCAA3C(0LL, v207);
      UnityEngine_GameObject__SetActive(v206, Manager__loadNobleName, 0LL);
    }
    BattleCommandComponent__UpdateTDTypeChange(this, isTDTypeChangeWindow, v204);
  }
  BattleCommandComponent__InitUnusableMarks(this, v186);
  if ( !isTDTypeChangeWindow )
  {
    v222 = BattleCommandComponent__ChoiceUnusableMarkSprite(this, v209);
    BattleCommandComponent__SetActiveComponent(
      (BattleCommandComponent_o *)v222,
      (UnityEngine_Component_o *)v222,
      1,
      v223);
    SealStatus = BattleCommandComponent__get_SealStatus(this, v224);
    if ( !SealStatus )
      sub_1BCAA3C(0LL, v226);
    PrioredStatus = (BattleCommandComponent_o *)BattleCommandSealStatus__get_PrioredStatus(SealStatus, 0LL);
    switch ( (_DWORD)PrioredStatus )
    {
      case 1:
        BattleCommandComponent__SetActiveComponent(
          PrioredStatus,
          (UnityEngine_Component_o *)this->fields.displayRemainingTurn,
          1,
          v227);
        displayRemainingTurn = (UnityEngine_Object_o *)this->fields.displayRemainingTurn;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v235);
        PrioredStatus = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(displayRemainingTurn, 0LL, 0LL);
        if ( ((unsigned __int8)PrioredStatus & 1) != 0 )
        {
          v237 = this->fields.displayRemainingTurn;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v209);
          v238 = LocalizationManager__Get((System_String_o *)StringLiteral_5123/*"DISPLAY_REMAINING_TURN"*/, 0LL);
          v240 = (const MethodInfo *)BattleCommandComponent__get_SealStatus(this, v239);
          if ( !v240 )
            sub_1BCAA3C(0LL, v241);
          invoker_method = v240->invoker_method;
          if ( !invoker_method )
            sub_1BCAA3C(v240, v241);
          v243 = *((_DWORD *)invoker_method + 5);
          if ( v243 + 1 >= 0 )
            v244 = v243 + 1;
          else
            v244 = v243 + 2;
          v247 = BattleUtility__FloorToLong((float)(v244 >> 1), v240);
          v245 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v247);
          v246 = System_String__Format(v238, v245, 0LL);
          if ( !v237 )
            sub_1BCAA3C(v246, v246);
          UILabel__set_text(v237, v246, 0LL);
        }
        break;
      case 8:
        BattleCommandComponent__SetActiveComponent(
          PrioredStatus,
          (UnityEngine_Component_o *)this->fields.donotActCardSprite,
          1,
          v227);
        break;
      case 9:
        BattleCommandComponent__SetActiveComponent(
          PrioredStatus,
          (UnityEngine_Component_o *)this->fields.donotActTypeSprite,
          1,
          v227);
        v229 = this->fields.data;
        if ( !v229 )
          sub_1BCAA3C(0LL, v228);
        donotActTypeSprite = this->fields.donotActTypeSprite;
        type = (BattleCommandComponent_o *)BattleCommandData__get_type(v229, 0LL);
        CardTypeSealSpriteName = BattleCommandComponent__getCardTypeSealSpriteName(type, (int32_t)type, v232);
        if ( !donotActTypeSprite )
          sub_1BCAA3C(CardTypeSealSpriteName, CardTypeSealSpriteName);
        UISprite__set_spriteName(donotActTypeSprite, CardTypeSealSpriteName, 0LL);
        break;
    }
  }
  v211 = this->fields.data;
  if ( !v211 )
    sub_1BCAA3C(PrioredStatus, v209);
  BattleCommandComponent__SetCommandCodeView_43840204(this, v211->fields.commandCodeId, v210);
  v215 = this->fields.data;
  if ( !v215 )
    sub_1BCAA3C(v212, v213);
  BattleCommandComponent__SetCommandAssistView(this, v215->fields.commandAssistId, v214);
  BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, 0, v216);
LABEL_124:
  BattleCommandComponent__setTouchFlg(this, 1, v90);
  svtId_label = (UnityEngine_Object_o *)this->fields.svtId_label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v217);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(svtId_label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v219 = this->fields.data;
    if ( v219 )
    {
      v220 = this->fields.svtId_label;
      svtId = v219->fields.svtId;
      gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&svtId, 0LL);
      if ( v220 )
      {
        if ( gameObject )
          v221 = (System_String_o *)gameObject;
        else
          v221 = (System_String_o *)StringLiteral_1/*""*/;
        UILabel__set_text(v220, v221, 0LL);
        return;
      }
    }
LABEL_158:
    sub_1BCAA3C(gameObject, v62);
  }
}


void __fastcall BattleCommandComponent_CardBuffData___ctor(
        BattleCommandComponent_CardBuffData_o *this,
        int32_t type,
        int32_t turn,
        int32_t order,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.buffType = type;
  this->fields.restTurn = turn;
  this->fields.addOrder = order;
}


void __fastcall BattleCommandComponent__PlayStarSe_d__161___ctor(
        BattleCommandComponent__PlayStarSe_d__161_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__PlayStarSe_d__161__MoveNext(
        BattleCommandComponent__PlayStarSe_d__161_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t _1__state; // w8
  float preDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  bool result; // w0
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0

  if ( (byte_4B18CCA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleCommandComponent__PlayStarSe_d__161_MoveNext__, method, v2);
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v5, v6);
    byte_4B18CCA = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v17 = Method_BattleCommandComponent__PlayStarSe_d__161_MoveNext__;
    if ( (*((_BYTE *)Method_BattleCommandComponent__PlayStarSe_d__161_MoveNext__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1BCA7F8(Method_BattleCommandComponent__PlayStarSe_d__161_MoveNext__);
    v18 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v17, v17[4]);
    OverwriteAssetSoundName__PlayCommonSe(v18, 7, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    preDelayTime = this->fields.preDelayTime;
    v9 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
    UnityEngine_WaitForSeconds___ctor(v9, preDelayTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v9;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v9, v10, v11, v12, v13, v14, v15);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleCommandComponent__PlayStarSe_d__161__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__PlayStarSe_d__161_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__PlayStarSe_d__161__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__PlayStarSe_d__161_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattleCommandComponent__PlayStarSe_d__161_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleCommandComponent__PlayStarSe_d__161__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__PlayStarSe_d__161_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__PlayStarSe_d__161__System_IDisposable_Dispose(
        BattleCommandComponent__PlayStarSe_d__161_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleCommandComponent__WaitForErrorViewFinished_d__244___ctor(
        BattleCommandComponent__WaitForErrorViewFinished_d__244_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__WaitForErrorViewFinished_d__244__MoveNext(
        BattleCommandComponent__WaitForErrorViewFinished_d__244_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BattleCommandComponent__WaitForErrorViewFinished_d__244_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  BattleCommandComponent_o *_4__this; // x20
  float waitSeconds; // s8
  UnityEngine_WaitForSeconds_o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  bool result; // w0
  System_String_o *busyVoiceSe; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  int v25; // w8
  System_String_o *v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Action_o *tdErrorAfterAction; // x8

  v4 = this;
  if ( (byte_4B18CCB & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, method, v2);
    this = (BattleCommandComponent__WaitForErrorViewFinished_d__244_o *)sub_1BCA7E0(
                                                                          &UnityEngine_WaitForSeconds_TypeInfo,
                                                                          v5,
                                                                          v6);
    byte_4B18CCB = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      waitSeconds = v4->fields.waitSeconds;
      v9 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
      UnityEngine_WaitForSeconds___ctor(v9, waitSeconds, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v9;
      sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__2__current, (int64_t)v9, v10, v11, v12, v13, v14, v15);
      result = 1;
      v4->fields.__1__state = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_24;
      BattleCommandComponent__startMoveFloat(_4__this, 0LL);
      if ( System_String__IsNullOrEmpty(v4->fields.busyVoiceSe, 0LL) )
        goto LABEL_20;
LABEL_9:
      busyVoiceSe = v4->fields.busyVoiceSe;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
      if ( SoundManager__isBusyVoice(busyVoiceSe, 0LL) )
      {
        v4->fields.__2__current = 0LL;
        p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
        sub_1BCA784(p__2__current, 0LL, v18, v19, v20, v21, v22, v23);
        v25 = 2;
LABEL_18:
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = v25;
        return 1;
      }
LABEL_14:
      v26 = v4->fields.busyVoiceSe;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
      this = (BattleCommandComponent__WaitForErrorViewFinished_d__244_o *)SoundManager__isBusySe(v26, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v4->fields.__2__current = 0LL;
        p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
        sub_1BCA784(p__2__current, 0LL, v27, v28, v29, v30, v31, v32);
        v25 = 3;
        goto LABEL_18;
      }
      if ( !_4__this )
LABEL_24:
        sub_1BCAA3C(this, method);
LABEL_20:
      tdErrorAfterAction = _4__this->fields.tdErrorAfterAction;
      if ( tdErrorAfterAction )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))tdErrorAfterAction->fields.m_target)(
          tdErrorAfterAction->fields.original_method_info,
          *(_QWORD *)&tdErrorAfterAction->fields.extra_arg);
      return 0;
    case 2:
      v4->fields.__1__state = -1;
      goto LABEL_9;
    case 3:
      v4->fields.__1__state = -1;
      goto LABEL_14;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleCommandComponent__WaitForErrorViewFinished_d__244__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__WaitForErrorViewFinished_d__244_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__WaitForErrorViewFinished_d__244__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__WaitForErrorViewFinished_d__244_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BattleCommandComponent__WaitForErrorViewFinished_d__244_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleCommandComponent__WaitForErrorViewFinished_d__244__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__WaitForErrorViewFinished_d__244_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__WaitForErrorViewFinished_d__244__System_IDisposable_Dispose(
        BattleCommandComponent__WaitForErrorViewFinished_d__244_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleCommandComponent___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B18CC7 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandComponent___c_TypeInfo, v1, v2);
    byte_4B18CC7 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleCommandComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleCommandComponent___c_TypeInfo->static_fields->__9 = (struct BattleCommandComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleCommandComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BattleCommandComponent___c___ctor(BattleCommandComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleCommandComponent___c___SetSpecialCommandCardBuffData_b__225_1(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *a,
        BattleCommandComponent_CardBuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


bool __fastcall BattleCommandComponent___c___UpdateCommandCardTypeChange_b__227_0(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_1BCAA3C(this, 0LL);
  return c->fields.buffType == 156;
}


bool __fastcall BattleCommandComponent___c___UpdateFixedCommandCard_b__211_0(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_1BCAA3C(this, 0LL);
  return c->fields.buffType == 131;
}


int32_t __fastcall BattleCommandComponent___c___selectCard_b__188_0(
        BattleCommandComponent___c_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_4B18CC8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__,
      x.fields.key,
      *(_QWORD *)&x.fields.value);
    byte_4B18CC8 = 1;
  }
  return value;
}


void __fastcall BattleCommandComponent___c__DisplayClass160_0___ctor(
        BattleCommandComponent___c__DisplayClass160_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleCommandComponent___c__DisplayClass160_0___addCriticalBuff_b__0(
        BattleCommandComponent___c__DisplayClass160_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCommandComponent___c__DisplayClass160_0_o *v3; // x19
  struct BattleCommandComponent_o *_4__this; // x8
  UnityEngine_Object_o *spawner; // x20
  struct BattleCommandComponent_o *v6; // x8
  UnityEngine_Object_o *obj; // x19

  v3 = this;
  if ( (byte_4B18CC9 & 1) == 0 )
  {
    this = (BattleCommandComponent___c__DisplayClass160_0_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18CC9 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  spawner = (UnityEngine_Object_o *)_4__this->fields.spawner;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (BattleCommandComponent___c__DisplayClass160_0_o *)UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v3->fields.__4__this;
    if ( v6 )
    {
      this = (BattleCommandComponent___c__DisplayClass160_0_o *)v6->fields.spawner;
      if ( this )
      {
        Spawner__Despawn((Spawner_o *)this, v3->fields.obj, 0, 0LL);
        return;
      }
    }
LABEL_13:
    sub_1BCAA3C(this, method);
  }
  obj = (UnityEngine_Object_o *)v3->fields.obj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__Destroy_70154244(obj, 0LL);
}


void __fastcall BattleCommandComponent___c__DisplayClass225_0___ctor(
        BattleCommandComponent___c__DisplayClass225_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleCommandComponent___c__DisplayClass225_0___SetSpecialCommandCardBuffData_b__0(
        BattleCommandComponent___c__DisplayClass225_0_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_1BCAA3C(this, 0LL);
  return c->fields.buffType == this->fields.buffType;
}


void __fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233___ctor(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233__MoveNext(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *v3; // x19
  int32_t _1__state; // w8
  struct BattleCommandComponent_o *_4__this; // x21
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  bool result; // w0
  struct UISprite_o *v8; // x8
  UnityEngine_Object_o *mAtlas; // x20
  bool v10; // w20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  v3 = this;
  if ( (byte_4B18CCC & 1) == 0 )
  {
    this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *)sub_1BCA7E0(
                                                                                &UnityEngine_Object_TypeInfo,
                                                                                method,
                                                                                v2);
    byte_4B18CCC = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_26;
    this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *)_4__this->fields.specialCardBuffIcon;
    if ( !this )
      goto LABEL_26;
    this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)this,
                                                                                0LL);
    if ( !this )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_26;
      specialCardBuffIcon = (UnityEngine_Object_o *)_4__this->fields.specialCardBuffIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0LL, 0LL) )
      {
        this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *)_4__this->fields.specialCardBuffIcon;
        if ( this )
        {
          this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *)_4__this->fields.specialCardBuffIcon;
            if ( this )
            {
              UISprite__set_atlas((UISprite_o *)this, 0LL, 0LL);
              goto LABEL_20;
            }
          }
        }
LABEL_26:
        sub_1BCAA3C(this, method);
      }
    }
    return 0;
  }
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_26;
LABEL_20:
  v8 = _4__this->fields.specialCardBuffIcon;
  if ( !v8 )
    goto LABEL_26;
  mAtlas = (UnityEngine_Object_o *)v8->fields.mAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v10 = UnityEngine_Object__op_Equality(mAtlas, 0LL, 0LL);
  v3->fields.__2__current = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.__2__current, 0LL, v11, v12, v13, v14, v15, v16);
  if ( v10 )
  {
    result = 1;
    v3->fields.__1__state = 1;
  }
  else
  {
    v3->fields.__1__state = 2;
    return 1;
  }
  return result;
}


Il2CppObject *__fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233__System_IDisposable_Dispose(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleCommandComponent__delayFrame_d__162___ctor(
        BattleCommandComponent__delayFrame_d__162_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__delayFrame_d__162__MoveNext(
        BattleCommandComponent__delayFrame_d__162_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct System_Action_o *action; // x8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    action = this->fields.action;
    this->fields.__1__state = -1;
    if ( !action )
      sub_1BCAA3C(this, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      *(_QWORD *)&action->fields.extra_arg);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleCommandComponent__delayFrame_d__162__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__delayFrame_d__162_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__delayFrame_d__162__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__delayFrame_d__162_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattleCommandComponent__delayFrame_d__162_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleCommandComponent__delayFrame_d__162__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__delayFrame_d__162_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__delayFrame_d__162__System_IDisposable_Dispose(
        BattleCommandComponent__delayFrame_d__162_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleCommandComponent__fadeoutEffect_d__182___ctor(
        BattleCommandComponent__fadeoutEffect_d__182_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__fadeoutEffect_d__182__MoveNext(
        BattleCommandComponent__fadeoutEffect_d__182_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleCommandComponent__fadeoutEffect_d__182_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t _1__state; // w8
  DefCoroutine_c *v12; // x0
  int64_t milliSecSix; // x1
  PartyOrganizationUtility_o *p__2__current; // x20
  bool result; // w0
  struct BattleCommandComponent_o *_4__this; // x19
  struct UnityEngine_GameObject_array *effectobj; // x20
  UnityEngine_Transform_o *transform; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct UnityEngine_GameObject_array *v25; // x8
  UnityEngine_Transform_o *v26; // x20
  struct UnityEngine_GameObject_array *v27; // x8
  __int64 v28; // x2
  BattleCommandComponent__fadeoutEffect_d__182_o *v29; // x20

  v8 = this;
  if ( (byte_4B18CCD & 1) == 0 )
  {
    sub_1BCA7E0(&DefCoroutine_TypeInfo, method, v2);
    this = (BattleCommandComponent__fadeoutEffect_d__182_o *)sub_1BCA7E0(&StringLiteral_19087/*"effect/ef_commandburn_s01"*/, v9, v10);
    byte_4B18CCD = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (BattleCommandComponent__fadeoutEffect_d__182_o *)_4__this->fields.nomalwidget;
      if ( this )
      {
        ((void (__fastcall *)(BattleCommandComponent__fadeoutEffect_d__182_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
          this,
          this->klass[1]._1.image,
          0.0);
        BattleCommandComponent__DestroyEffectObject1(_4__this, 0LL);
        if ( v8->fields.isTresure )
        {
LABEL_27:
          BattleCommandComponent__CardEffectSetActive(_4__this, 0, 0LL);
          return 0;
        }
        effectobj = _4__this->fields.effectobj;
        this = (BattleCommandComponent__fadeoutEffect_d__182_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)_4__this,
                                                                   0LL);
        if ( this )
        {
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          this = (BattleCommandComponent__fadeoutEffect_d__182_o *)BaseMonoBehaviour__createObject_38952608(
                                                                     (BaseMonoBehaviour_o *)_4__this,
                                                                     (System_String_o *)StringLiteral_19087/*"effect/ef_commandburn_s01"*/,
                                                                     transform,
                                                                     0LL,
                                                                     0LL);
          if ( effectobj )
          {
            if ( effectobj->max_length <= 1 )
              goto LABEL_30;
            effectobj->m_Items[1] = (UnityEngine_GameObject_o *)this;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&effectobj->m_Items[1],
              (int64_t)this,
              v19,
              v20,
              v21,
              v22,
              v23,
              v24);
            v25 = _4__this->fields.effectobj;
            if ( !v25 )
              goto LABEL_29;
            if ( v25->max_length <= 1 )
              goto LABEL_30;
            this = (BattleCommandComponent__fadeoutEffect_d__182_o *)v25->m_Items[1];
            if ( !this )
              goto LABEL_29;
            v26 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            this = (BattleCommandComponent__fadeoutEffect_d__182_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)_4__this,
                                                                       0LL);
            if ( !this )
              goto LABEL_29;
            this = (BattleCommandComponent__fadeoutEffect_d__182_o *)UnityEngine_GameObject__get_transform(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       0LL);
            if ( !this )
              goto LABEL_29;
            this = (BattleCommandComponent__fadeoutEffect_d__182_o *)UnityEngine_Transform__get_parent(
                                                                       (UnityEngine_Transform_o *)this,
                                                                       0LL);
            if ( !v26 )
              goto LABEL_29;
            UnityEngine_Transform__set_parent(v26, (UnityEngine_Transform_o *)this, 0LL);
            v27 = _4__this->fields.effectobj;
            if ( !v27 )
              goto LABEL_29;
            if ( v27->max_length <= 1 )
LABEL_30:
              sub_1BCAA44(this, method);
            this = (BattleCommandComponent__fadeoutEffect_d__182_o *)v27->m_Items[1];
            if ( this )
            {
              this = (BattleCommandComponent__fadeoutEffect_d__182_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)this,
                                                                         0LL);
              v29 = this;
              if ( !byte_4B109C6 )
              {
                this = (BattleCommandComponent__fadeoutEffect_d__182_o *)sub_1BCA7E0(
                                                                           &UnityEngine_Vector3_TypeInfo,
                                                                           method,
                                                                           v28);
                byte_4B109C6 = 1;
              }
              if ( v29 )
              {
                UnityEngine_Transform__set_localScale(
                  (UnityEngine_Transform_o *)v29,
                  UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                  0LL);
                goto LABEL_27;
              }
            }
          }
        }
      }
    }
LABEL_29:
    sub_1BCAA3C(this, method);
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  v12 = DefCoroutine_TypeInfo;
  if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, method);
    v12 = DefCoroutine_TypeInfo;
  }
  milliSecSix = (int64_t)v12->static_fields->milliSecSix;
  v8->fields.__2__current = (Il2CppObject *)milliSecSix;
  p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1BCA784(p__2__current, milliSecSix, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return result;
}


Il2CppObject *__fastcall BattleCommandComponent__fadeoutEffect_d__182__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__fadeoutEffect_d__182_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__fadeoutEffect_d__182__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__fadeoutEffect_d__182_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattleCommandComponent__fadeoutEffect_d__182_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleCommandComponent__fadeoutEffect_d__182__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__fadeoutEffect_d__182_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__fadeoutEffect_d__182__System_IDisposable_Dispose(
        BattleCommandComponent__fadeoutEffect_d__182_o *this,
        const MethodInfo *method)
{
  ;
}