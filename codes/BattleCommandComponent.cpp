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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int64_t v13; // x1
  struct BattleCommandComponent_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  struct BattleCommandComponent_StaticFields *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  BattleCommandComponent_c *v29; // x8
  int64_t v35; // x1
  struct BattleCommandComponent_StaticFields *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x1
  struct BattleCommandComponent_StaticFields *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7

  if ( (byte_4C001B1 & 1) == 0 )
  {
    sub_1C2E12C(&BattleCommandComponent_TypeInfo, v1);
    sub_1C2E12C(&StringLiteral_20452/*"icon_cardsealed_quick"*/, v8);
    sub_1C2E12C(&StringLiteral_23505/*"se_"*/, v9);
    sub_1C2E12C(&StringLiteral_20449/*"icon_cardsealed_arts"*/, v10);
    sub_1C2E12C(&StringLiteral_20451/*"icon_cardsealed_buster"*/, v11);
    sub_1C2E12C(&StringLiteral_24965/*"v_"*/, v12);
    byte_4C001B1 = 1;
  }
  BattleCommandComponent_TypeInfo->static_fields->SEALED_CARDTYPE_ICON_ARTS = (struct System_String_o *)StringLiteral_20449/*"icon_cardsealed_arts"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)BattleCommandComponent_TypeInfo->static_fields,
    StringLiteral_20449/*"icon_cardsealed_arts"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = StringLiteral_20451/*"icon_cardsealed_buster"*/;
  static_fields = BattleCommandComponent_TypeInfo->static_fields;
  static_fields->SEALED_CARDTYPE_ICON_BUSTER = (struct System_String_o *)StringLiteral_20451/*"icon_cardsealed_buster"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&static_fields->SEALED_CARDTYPE_ICON_BUSTER,
    v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = StringLiteral_20452/*"icon_cardsealed_quick"*/;
  v22 = BattleCommandComponent_TypeInfo->static_fields;
  v22->SEALED_CARDTYPE_ICON_QUICK = (struct System_String_o *)StringLiteral_20452/*"icon_cardsealed_quick"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v22->SEALED_CARDTYPE_ICON_QUICK, v21, v23, v24, v25, v26, v27, v28);
  v29 = BattleCommandComponent_TypeInfo;
  __asm { FMOV            V0.4S, #1.0 }
  BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientTopOnDefault = _Q0;
  v29->static_fields->CriticalLabelGradientBottomOnDefault = (struct UnityEngine_Color_o)xmmword_C073F0;
  v29->static_fields->CriticalNumberLabelGradientTopOnBoosted = (struct UnityEngine_Color_o)xmmword_C05EC0;
  v29->static_fields->CriticalNumberLabelGradientBottomOnBoosted = (struct UnityEngine_Color_o)xmmword_C074C0;
  v29->static_fields->CriticalPercentLabelGradientTopOnBoosted = (struct UnityEngine_Color_o)xmmword_C066C0;
  v29->static_fields->CriticalPercentLabelGradientBottomOnBoosted = (struct UnityEngine_Color_o)xmmword_C068D0;
  v35 = StringLiteral_24965/*"v_"*/;
  v36 = v29->static_fields;
  v36->voiceIdPrefix = (struct System_String_o *)StringLiteral_24965/*"v_"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v36->voiceIdPrefix, v35, v37, v38, v39, v40, v41, v42);
  v43 = StringLiteral_23505/*"se_"*/;
  v44 = BattleCommandComponent_TypeInfo->static_fields;
  v44->seIdPrefix = (struct System_String_o *)StringLiteral_23505/*"se_"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v44->seIdPrefix, v43, v45, v46, v47, v48, v49, v50);
}


void __fastcall BattleCommandComponent___ctor(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct UnityEngine_GameObject_array *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct UnityEngine_GameObject_array *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Array_o *v26; // x0
  struct BuffList_TYPE_array *v27; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Array_o *v34; // x0
  struct BuffList_TYPE_array *v35; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Array_o *v42; // x0
  struct BuffList_TYPE_array *v43; // x20
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_Array_o *v50; // x0
  struct BuffList_TYPE_array *v51; // x20
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Collections_Generic_List_object__o *v58; // x20
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_Collections_Generic_Dictionary_object__object__o *v65; // x20
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  System_RuntimeFieldHandle_o v72; // 0:w1.4
  System_RuntimeFieldHandle_o v73; // 0:w1.4
  System_RuntimeFieldHandle_o v74; // 0:w1.4
  System_RuntimeFieldHandle_o v75; // 0:w1.4

  if ( (byte_4C001B0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__, method);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo, v3);
    sub_1C2E12C(&UnityEngine_GameObject___TypeInfo, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData___ctor__, v5);
    sub_1C2E12C(&System_Collections_Generic_List_BattleCommandComponent_CardBuffData__TypeInfo, v6);
    sub_1C2E12C(&BuffList_TYPE___TypeInfo, v7);
    sub_1C2E12C(
      &Field__PrivateImplementationDetails__21FCB76AE4B744E8DB6EC42DCC110D91C00FEB92CACE2184F7D86FA8D498CF5D,
      v8);
    sub_1C2E12C(
      &Field__PrivateImplementationDetails__7FF261A5C35634E350068AE4166549E7E2B263049C77B28D36985A526C7753C9,
      v9);
    sub_1C2E12C(
      &Field__PrivateImplementationDetails__81E6881EDC288CDA01A3F973C0C8C6DA6E8CCE911E702C19528468EFB3B4B468,
      v10);
    sub_1C2E12C(
      &Field__PrivateImplementationDetails__A236E7A583166CBBC637A1723D29902A070ADA50655F57CBEDCD6FA90EDD5ADE,
      v11);
    byte_4C001B0 = 1;
  }
  v12 = (struct UnityEngine_GameObject_array *)sub_1C2E1D4(UnityEngine_GameObject___TypeInfo, 6LL);
  this->fields.effectobj = v12;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.effectobj, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = (struct UnityEngine_GameObject_array *)sub_1C2E1D4(UnityEngine_GameObject___TypeInfo, 2LL);
  this->fields.addObjectList = v19;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.addObjectList, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = (System_Array_o *)sub_1C2E1D4(BuffList_TYPE___TypeInfo, 13LL);
  v72.fields.value = Field__PrivateImplementationDetails__A236E7A583166CBBC637A1723D29902A070ADA50655F57CBEDCD6FA90EDD5ADE;
  v27 = (struct BuffList_TYPE_array *)v26;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63142920(v26, v72, 0LL);
  this->fields.qabTypes = v27;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.qabTypes, (int64_t)v27, v28, v29, v30, v31, v32, v33);
  v34 = (System_Array_o *)sub_1C2E1D4(BuffList_TYPE___TypeInfo, 5LL);
  v73.fields.value = Field__PrivateImplementationDetails__21FCB76AE4B744E8DB6EC42DCC110D91C00FEB92CACE2184F7D86FA8D498CF5D;
  v35 = (struct BuffList_TYPE_array *)v34;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63142920(v34, v73, 0LL);
  this->fields.noneTdQabTypes = v35;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.noneTdQabTypes, (int64_t)v35, v36, v37, v38, v39, v40, v41);
  v42 = (System_Array_o *)sub_1C2E1D4(BuffList_TYPE___TypeInfo, 3LL);
  v74.fields.value = Field__PrivateImplementationDetails__81E6881EDC288CDA01A3F973C0C8C6DA6E8CCE911E702C19528468EFB3B4B468;
  v43 = (struct BuffList_TYPE_array *)v42;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63142920(v42, v74, 0LL);
  this->fields.tdTypes = v43;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.tdTypes, (int64_t)v43, v44, v45, v46, v47, v48, v49);
  v50 = (System_Array_o *)sub_1C2E1D4(BuffList_TYPE___TypeInfo, 15LL);
  v75.fields.value = Field__PrivateImplementationDetails__7FF261A5C35634E350068AE4166549E7E2B263049C77B28D36985A526C7753C9;
  v51 = (struct BuffList_TYPE_array *)v50;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63142920(v50, v75, 0LL);
  this->fields.otherTypes = v51;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.otherTypes, (int64_t)v51, v52, v53, v54, v55, v56, v57);
  v58 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_BattleCommandComponent_CardBuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData___ctor__);
  this->fields.specialCardBuffList = (struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *)v58;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.specialCardBuffList,
    (int64_t)v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields.cardBuffAlphaFor = 1.0;
  v65 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2E378(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v65,
    (const MethodInfo_33351C4 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.cardEffectDict = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v65;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.cardEffectDict, (int64_t)v65, v66, v67, v68, v69, v70, v71);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *cardEffectDict; // x0
  bool v10; // w19
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C001A8 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__, value);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__,
      v5);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__,
      v6);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__,
      v7);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__, v8);
    byte_4C001A8 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict
    || (cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      cardEffectDict,
                                                                                      (const MethodInfo_33359A4 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__)) == 0LL )
  {
    sub_1C2E388(cardEffectDict, value);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v12,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_39A2CA8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  v10 = value;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v12,
            (const MethodInfo_343268C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v12.fields._currentValue )
      sub_1C2E388(0LL, v11);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v12.fields._currentValue, v10, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v12,
    (const MethodInfo_3432688 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
}


void __fastcall BattleCommandComponent__ChangeCardEffectMaskForInside(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *cardEffectDict; // x0
  __int64 v9; // x1
  System_Object_array *ComponentsInChildren_object__50476848; // x0
  __int64 v11; // x1
  System_Object_array *v12; // x19
  int max_length; // w8
  int i; // w23
  UnityEngine_ParticleSystemRenderer_o *v15; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C001AA & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__, method);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__,
      v3);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__,
      v4);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__,
      v5);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__, v7);
    byte_4C001AA = 1;
  }
  memset(&v17, 0, sizeof(v17));
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict
    || (cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      cardEffectDict,
                                                                                      (const MethodInfo_33359A4 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__)) == 0LL )
  {
    sub_1C2E388(cardEffectDict, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v16,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_39A2CA8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v17,
            (const MethodInfo_343268C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v17.fields._currentValue )
      sub_1C2E388(0LL, v9);
    ComponentsInChildren_object__50476848 = UnityEngine_GameObject__GetComponentsInChildren_object__50476848(
                                              (UnityEngine_GameObject_o *)v17.fields._currentValue,
                                              (const MethodInfo_3023730 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
    v12 = ComponentsInChildren_object__50476848;
    if ( !ComponentsInChildren_object__50476848 )
      sub_1C2E388(0LL, v11);
    max_length = ComponentsInChildren_object__50476848->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1C2E390(ComponentsInChildren_object__50476848, v11);
        v15 = (UnityEngine_ParticleSystemRenderer_o *)v12->m_Items[i];
        if ( !v15 )
          sub_1C2E388(0LL, v11);
        UnityEngine_ParticleSystemRenderer__set_maskInteraction(v15, 1, 0LL);
        max_length = v12->max_length;
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v17,
    (const MethodInfo_3432688 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
}


void __fastcall BattleCommandComponent__ChangeCriticalLabelColor(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  void *criticallabel; // x0
  int v5; // w8
  void *v6; // x20
  unsigned int v7; // w23
  UILabel_o *v8; // x21
  UILabel_o *criticalPercentLabel; // x20

  if ( (byte_4C00163 & 1) == 0 )
  {
    sub_1C2E12C(&BattleCommandComponent_TypeInfo, method);
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____77780216, v3);
    byte_4C00163 = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_17;
  criticallabel = UnityEngine_Component__GetComponentsInChildren_object_(
                    (UnityEngine_Component_o *)criticallabel,
                    1,
                    (const MethodInfo_2FC8DC0 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____77780216);
  if ( !criticallabel )
    goto LABEL_17;
  v5 = *((_DWORD *)criticallabel + 6);
  v6 = criticallabel;
  if ( v5 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= v5 )
        sub_1C2E390(criticallabel, method);
      criticallabel = BattleCommandComponent_TypeInfo;
      v8 = (UILabel_o *)*((_QWORD *)v6 + (int)v7 + 4);
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        criticallabel = BattleCommandComponent_TypeInfo;
      }
      if ( !v8 )
        break;
      UILabel__set_gradientTop(v8, *(UnityEngine_Color_o *)(*((_QWORD *)criticallabel + 23) + 56LL), 0LL);
      UILabel__set_gradientBottom(
        v8,
        BattleCommandComponent_TypeInfo->static_fields->CriticalNumberLabelGradientBottomOnBoosted,
        0LL);
      v5 = *((_DWORD *)v6 + 6);
      if ( (int)++v7 >= v5 )
        goto LABEL_12;
    }
LABEL_17:
    sub_1C2E388(criticallabel, method);
  }
LABEL_12:
  criticallabel = BattleCommandComponent_TypeInfo;
  criticalPercentLabel = this->fields.criticalPercentLabel;
  if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
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
  System_Collections_Generic_List_object__o *specialCardBuffList; // x0
  int32_t cardBuffListIndex; // w1
  int items; // w8

  if ( (byte_4C001A4 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__, v4);
    byte_4C001A4 = 1;
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
                                                                       (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
  if ( !specialCardBuffList )
LABEL_11:
    sub_1C2E388(specialCardBuffList, method);
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
    sub_1C2E388(0LL, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *cardEffectDict; // x0
  Il2CppObject *currentValue; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v11; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C001A9 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__, v3);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__,
      v4);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__,
      v5);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__,
      v6);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__, v8);
    byte_4C001A9 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict )
    goto LABEL_12;
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                cardEffectDict,
                                                                                (const MethodInfo_33359A4 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
  if ( !cardEffectDict )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v11,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_39A2CA8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v11,
            (const MethodInfo_343268C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    currentValue = v11.fields._currentValue;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70989720((UnityEngine_Object_o *)currentValue, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v11,
    (const MethodInfo_3432688 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict )
LABEL_12:
    sub_1C2E388(cardEffectDict, method);
  System_Collections_Generic_Dictionary_object__object___Clear(
    cardEffectDict,
    (const MethodInfo_3335CFC *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
}


void __fastcall BattleCommandComponent__DestroyEffectObject1(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  __int64 v3; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_array *v6; // x8
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_GameObject_array *v8; // x8
  UnityEngine_Object_o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v2 = this;
  if ( (byte_4C0018A & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___, method);
    this = (BattleCommandComponent_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    byte_4C0018A = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_24;
  if ( effectobj->max_length <= 1 )
    goto LABEL_25;
  v5 = (UnityEngine_Object_o *)effectobj->m_Items[1];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v2->fields.newMatriarl )
    {
      v6 = v2->fields.effectobj;
      if ( !v6 )
        goto LABEL_24;
      if ( v6->max_length <= 1 )
        goto LABEL_25;
      this = (BattleCommandComponent_o *)v6->m_Items[1];
      if ( !this )
        goto LABEL_24;
      this = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_3022D70 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
      if ( !this )
        goto LABEL_24;
      v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BattleCommandComponent_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                                     this,
                                     this->klass[1].vtable._2_GetHashCode.methodPtr);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70989720(v7, 0LL);
      v2->fields.newMatriarl = 0;
    }
    v8 = v2->fields.effectobj;
    if ( v8 )
    {
      if ( v8->max_length <= 1 )
        goto LABEL_25;
      v9 = (UnityEngine_Object_o *)v8->m_Items[1];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70989720(v9, 0LL);
      this = (BattleCommandComponent_o *)v2->fields.effectobj;
      if ( this )
      {
        if ( LODWORD(this->fields.m_CancellationTokenSource) > 1 )
        {
          this->fields.bg = 0LL;
          sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.bg, 0LL, v10, v11, v12, v13, v14, v15);
          return;
        }
LABEL_25:
        sub_1C2E390(this, method);
      }
    }
LABEL_24:
    sub_1C2E388(this, method);
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
    sub_1C2E388(0LL, method);
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
  BattleCommandComponent_o *v16; // x20
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  spawner = this->fields.spawner;
  z = scale.fields.z;
  y = scale.fields.y;
  x = scale.fields.x;
  if ( !byte_4BF7D91 )
  {
    this = (BattleCommandComponent_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, prefab);
    byte_4BF7D91 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v13 = static_fields->zeroVector.fields.x;
  v12 = static_fields->zeroVector.fields.y;
  v14 = static_fields->zeroVector.fields.z;
  if ( !byte_4BF7D97 )
  {
    this = (BattleCommandComponent_o *)sub_1C2E12C(&UnityEngine_Quaternion_TypeInfo, prefab);
    byte_4BF7D97 = 1;
  }
  if ( !spawner )
    goto LABEL_12;
  v18.fields.x = v13;
  v18.fields.y = v12;
  v18.fields.z = v14;
  v15 = Spawner__Spawn_39282564(
          spawner,
          (UnityEngine_Object_o *)prefab,
          v18,
          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
          0LL);
  GameObjectExtensions__SetParent(v15, (UnityEngine_Component_o *)parent, 0LL);
  if ( !v15 )
    goto LABEL_12;
  this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform(v15, 0LL);
  v16 = this;
  if ( !byte_4BF7D91 )
  {
    this = (BattleCommandComponent_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, prefab);
    byte_4BF7D91 = 1;
  }
  if ( !v16
    || (UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v16,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL),
        (this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform(v15, 0LL)) == 0LL) )
  {
LABEL_12:
    sub_1C2E388(this, prefab);
  }
  v19.fields.x = x;
  v19.fields.y = y;
  v19.fields.z = z;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v19, 0LL);
  return v15;
}


void __fastcall BattleCommandComponent__HideAndCancelCountUpFinishEffect(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  DrumRollLabel_o *criticallabel; // x0
  UnityEngine_Object_o *countUpFinishEffect; // x20
  UnityEngine_GameObject_o **p_countUpFinishEffect; // x19
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4C00162 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C00162 = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_10;
  DrumRollLabel__CancelFinishCallback(criticallabel, 0LL, 0LL);
  countUpFinishEffect = (UnityEngine_Object_o *)this->fields.countUpFinishEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(countUpFinishEffect, 0LL, 0LL) )
  {
    criticallabel = (DrumRollLabel_o *)this->fields.spawner;
    if ( criticallabel )
    {
      p_countUpFinishEffect = &this->fields.countUpFinishEffect;
      Spawner__Despawn((Spawner_o *)criticallabel, *p_countUpFinishEffect, 1, 0LL);
      *p_countUpFinishEffect = 0LL;
      sub_1C2E0D0((PartyOrganizationUtility_o *)p_countUpFinishEffect, 0LL, v6, v7, v8, v9, v10, v11);
      return;
    }
LABEL_10:
    sub_1C2E388(criticallabel, method);
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

  if ( (byte_4C001A5 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, isCommandCardUnderIcon);
    byte_4C001A5 = 1;
  }
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C2E388(powerUpCardValue, v6);
  }
}


void __fastcall BattleCommandComponent__InitDonotActCardSprite(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *donotActCardSprite; // x20
  BattleDataDefine_c *v10; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v13; // x1
  UISprite_o *v14; // x20

  if ( (byte_4C0015C & 1) == 0 )
  {
    sub_1C2E12C(&Method_AssetData_GetObject_GameObject____77757312, method);
    sub_1C2E12C(&AssetManager_TypeInfo, v3);
    sub_1C2E12C(&BattleDataDefine_TypeInfo, v4);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_3261/*"BattleAssetUIAtlas"*/, v7);
    sub_1C2E12C(&StringLiteral_20450/*"icon_cardsealed_block"*/, v8);
    byte_4C0015C = 1;
  }
  donotActCardSprite = (UnityEngine_Object_o *)this->fields.donotActCardSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(donotActCardSprite, 0LL, 0LL) )
  {
    v10 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v10 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v10->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
    if ( !AssetStorage
      || (AssetStorage = (AssetData_o *)AssetData__GetObject_object__50017172(
                                          AssetStorage,
                                          (System_String_o *)StringLiteral_3261/*"BattleAssetUIAtlas"*/,
                                          (const MethodInfo_2FB3394 *)Method_AssetData_GetObject_GameObject____77757312)) == 0LL
      || (v14 = this->fields.donotActCardSprite,
          AssetStorage = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)AssetStorage,
                                          (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !v14)
      || (UISprite__set_atlas(v14, (UIAtlas_o *)AssetStorage, 0LL),
          (AssetStorage = (AssetData_o *)this->fields.donotActCardSprite) == 0LL) )
    {
      sub_1C2E388(AssetStorage, v13);
    }
    UnityEngine_Object__set_name((UnityEngine_Object_o *)AssetStorage, (System_String_o *)StringLiteral_20450/*"icon_cardsealed_block"*/, 0LL);
  }
}


void __fastcall BattleCommandComponent__InitTreasureDeviceErrorAnimation(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleDataDefine_c *v9; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *Object_39082244; // x0
  UnityEngine_Object_o *v14; // x20
  Il2CppObject *Component_object; // x21
  Il2CppObject *v16; // x19

  if ( (byte_4C0015B & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_AnimationClip_TypeInfo, method);
    sub_1C2E12C(&AssetManager_TypeInfo, v3);
    sub_1C2E12C(&BattleDataDefine_TypeInfo, v4);
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_Animation___, v5);
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v6);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    sub_1C2E12C(&StringLiteral_17074/*"anim_erroraction"*/, v8);
    byte_4C0015B = 1;
  }
  v9 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v9 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v9->static_fields->ASSET_BATTLE_COMMON;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
  if ( !AssetStorage )
    goto LABEL_29;
  Object_39082244 = AssetData__GetObject_39082244(AssetStorage, (System_String_o *)StringLiteral_17074/*"anim_erroraction"*/, 0LL);
  if ( Object_39082244 )
  {
    if ( (UnityEngine_AnimationClip_c *)Object_39082244->klass == UnityEngine_AnimationClip_TypeInfo )
      v14 = Object_39082244;
    else
      v14 = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v14, 0LL, 0LL) )
  {
    this->fields.isSettedTreasureDeviceErrorAnim = 1;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v16 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)AssetStorage & 1) != 0 )
    {
      if ( v14 )
      {
        AssetStorage = (AssetData_o *)UnityEngine_Object__get_name(v14, 0LL);
        if ( Component_object )
        {
          SimpleAnimation__AddClip(
            (SimpleAnimation_o *)Component_object,
            (UnityEngine_AnimationClip_o *)v14,
            (System_String_o *)AssetStorage,
            0LL);
          return;
        }
      }
LABEL_29:
      sub_1C2E388(AssetStorage, v12);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
    if ( ((unsigned __int8)AssetStorage & 1) != 0 )
    {
      if ( !v14 )
        goto LABEL_29;
      AssetStorage = (AssetData_o *)UnityEngine_Object__get_name(v14, 0LL);
      if ( !v16 )
        goto LABEL_29;
      UnityEngine_Animation__AddClip(
        (UnityEngine_Animation_o *)v16,
        (UnityEngine_AnimationClip_o *)v14,
        (System_String_o *)AssetStorage,
        0LL);
    }
  }
}


void __fastcall BattleCommandComponent__InitTreasureDeviceErrorSpriteMark(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *treasureDeviceErrorSprite; // x20
  BattleDataDefine_c *v10; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x1

  if ( (byte_4C0015A & 1) == 0 )
  {
    sub_1C2E12C(&Method_AssetData_GetObject_GameObject____77757312, method);
    sub_1C2E12C(&AssetManager_TypeInfo, v3);
    sub_1C2E12C(&BattleDataDefine_TypeInfo, v4);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_3261/*"BattleAssetUIAtlas"*/, v7);
    sub_1C2E12C(&StringLiteral_20508/*"icon_error"*/, v8);
    byte_4C0015A = 1;
  }
  treasureDeviceErrorSprite = (UnityEngine_Object_o *)this->fields.treasureDeviceErrorSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(treasureDeviceErrorSprite, 0LL, 0LL) )
  {
    v10 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v10 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v10->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
    if ( !AssetStorage
      || (AssetStorage = (AssetData_o *)AssetData__GetObject_object__50017172(
                                          AssetStorage,
                                          (System_String_o *)StringLiteral_3261/*"BattleAssetUIAtlas"*/,
                                          (const MethodInfo_2FB3394 *)Method_AssetData_GetObject_GameObject____77757312)) == 0LL
      || (AssetStorage = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)AssetStorage,
                                          (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.treasureDeviceErrorSprite)
      || (UISprite__set_atlas(this->fields.treasureDeviceErrorSprite, (UIAtlas_o *)AssetStorage, 0LL),
          (AssetStorage = (AssetData_o *)this->fields.treasureDeviceErrorSprite) == 0LL) )
    {
      sub_1C2E388(AssetStorage, v13);
    }
    UISprite__set_spriteName((UISprite_o *)AssetStorage, (System_String_o *)StringLiteral_20508/*"icon_error"*/, 0LL);
    BattleCommandComponent__SetConfWindowTreasureDeviceErrorMark(this, v14);
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
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  struct Spawner_o **p_spawner; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  UnityEngine_Object_o *spawner; // x21
  const MethodInfo *v13; // x1
  Spawner_o *v14; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1

  if ( (byte_4C0015D & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_Spawner__get_Instance__, v3);
    byte_4C0015D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  p_spawner = &this->fields.spawner;
  this->fields.spawner = (struct Spawner_o *)Instance;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.spawner, (int64_t)Instance, v6, v7, v8, v9, v10, v11);
  spawner = (UnityEngine_Object_o *)this->fields.spawner;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL) )
  {
    v14 = *p_spawner;
    if ( !*p_spawner
      || (Spawner__Precache_39280596(v14, (UnityEngine_Object_o *)this->fields.effect_cricomplete, 5, 0LL),
          (v14 = this->fields.spawner) == 0LL) )
    {
      sub_1C2E388(v14, v13);
    }
    Spawner__Precache_39280596(v14, (UnityEngine_Object_o *)this->fields.effect_fullcricomplete, 5, 0LL);
  }
  BattleCommandComponent__InitTreasureDeviceErrorSpriteMark(this, v13);
  BattleCommandComponent__InitTreasureDeviceErrorAnimation(this, v15);
  BattleCommandComponent__InitDonotActCardSprite(this, v16);
}


bool __fastcall BattleCommandComponent__IsAnimationBusy(
        BattleCommandComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Component_object; // x21
  Il2CppObject *v8; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_4C001AE & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_Animation___, animationName);
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v5);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v6);
    byte_4C001AE = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v8 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v9 )
  {
    if ( Component_object )
      return SimpleAnimation__IsPlaying((SimpleAnimation_o *)Component_object, animationName, 0LL);
LABEL_14:
    sub_1C2E388(v9, v10);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
  if ( !v9 )
    return 0;
  if ( !v8 )
    goto LABEL_14;
  return UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)v8, animationName, 0LL);
}


bool __fastcall BattleCommandComponent__IsMaxCritical(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1C2E388(0LL, method);
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
    sub_1C2E388(criticalObject, method);
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
  struct BattleServantData_o *svtData; // x8
  __int64 v7; // x21
  __int64 v8; // x22
  int32_t v9; // w21
  struct BattleServantData_o *v10; // x8
  int32_t v11; // w20
  int32_t overwriteSvtVoiceId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v4 = this;
  if ( (byte_4C00181 & 1) == 0 )
  {
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, voiceTypeId);
    this = (BattleCommandComponent_o *)sub_1C2E12C(&ServantAssetLoadManager_TypeInfo, v5);
    byte_4C00181 = 1;
  }
  svtData = v4->fields.svtData;
  if ( !svtData )
    goto LABEL_11;
  v8 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v8;
  *(_QWORD *)&v14.fields.fakeValue = v7;
  this = (BattleCommandComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v14, 0LL);
  if ( !v4->fields.svtData
    || (v9 = (int)this,
        this = (BattleCommandComponent_o *)BattleServantData__getDispLimitCount(v4->fields.svtData, 1, 0LL),
        (v10 = v4->fields.svtData) == 0LL) )
  {
LABEL_11:
    sub_1C2E388(this, voiceTypeId);
  }
  v11 = (int)this;
  overwriteSvtVoiceId = v10->fields.overwriteSvtVoiceId;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  return ServantAssetLoadManager__checkBattleVoice(v9, v11, overwriteSvtVoiceId, voiceTypeId, 0, 0LL);
}


void __fastcall BattleCommandComponent__OnClickEvent(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *target; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  struct BattleCommandData_o *data; // x8
  UnityEngine_GameObject_o *v10; // x19
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  int32_t markindex; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C0017E & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    sub_1C2E12C(&StringLiteral_24455/*"touchCommandCard"*/, v4);
    byte_4C0017E = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( data )
    {
      v10 = this->fields.target;
      markindex = data->fields.markindex;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &markindex, v6, v7, v8);
      if ( !v10 )
        sub_1C2E388(v11, v12);
      UnityEngine_GameObject__SendMessage_70971092(v10, (System_String_o *)StringLiteral_24455/*"touchCommandCard"*/, v11, 0LL);
    }
  }
}


void __fastcall BattleCommandComponent__OnLongPressEvent(
        BattleCommandComponent_o *this,
        UnityEngine_Object_o *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *target; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  struct BattleCommandData_o *data; // x8
  UnityEngine_GameObject_o *v11; // x19
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  int32_t markindex; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C0017F & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, obj);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    sub_1C2E12C(&StringLiteral_8649/*"LongPress"*/, v5);
    byte_4C0017F = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( data )
    {
      v11 = this->fields.target;
      markindex = data->fields.markindex;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &markindex, v7, v8, v9);
      if ( !v11 )
        sub_1C2E388(v12, v13);
      UnityEngine_GameObject__SendMessage_70971092(v11, (System_String_o *)StringLiteral_8649/*"LongPress"*/, v12, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v11; // x21
  UnityEngine_AnimationState_o *Item; // x0
  __int64 v13; // x1
  UnityEngine_AnimationState_c *klass; // x8
  UnityEngine_AnimationState_o *v15; // x21
  __int64 v16; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v18; // x0

  v4 = *(long double *)&simpleAnimationTime;
  if ( (byte_4C0016A & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_Animation___, animationName);
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v7);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v8);
    sub_1C2E12C(&SimpleAnimation_State_TypeInfo, v9);
    byte_4C0016A = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v11 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Item = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)Item & 1) == 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Item = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
    if ( ((unsigned __int8)Item & 1) == 0 )
      return;
    if ( v11 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11, 0, 0LL);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11, 1, 0LL);
      Item = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v11, animationName, 0LL);
      if ( Item )
      {
        UnityEngine_AnimationState__set_time(Item, *(float *)&v4, 0LL);
        UnityEngine_Animation__Play_70734128((UnityEngine_Animation_o *)v11, animationName, 0LL);
        return;
      }
    }
LABEL_22:
    sub_1C2E388(Item, v13);
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
  v15 = Item;
  v16 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v16;
      p_offset += 2;
      if ( !v16 )
        goto LABEL_12;
    }
    v18 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_12:
    v18 = sub_1C8010C(Item, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_AnimationState_o *, _QWORD, long double))v18)(v15, *(_QWORD *)(v18 + 8), v4);
  SimpleAnimation__Play_65373960((SimpleAnimation_o *)Component_object, animationName, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__PlayStarSe(
        BattleCommandComponent_o *this,
        float preDelayTime,
        const MethodInfo *method)
{
  BattleCommandComponent__PlayStarSe_d__161_o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C00177 & 1) == 0 )
  {
    sub_1C2E12C(&BattleCommandComponent__PlayStarSe_d__161_TypeInfo, method);
    byte_4C00177 = 1;
  }
  v4 = (BattleCommandComponent__PlayStarSe_d__161_o *)sub_1C2E378(BattleCommandComponent__PlayStarSe_d__161_TypeInfo);
  BattleCommandComponent__PlayStarSe_d__161___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_1C2E388(v5, v6);
  v4->fields.preDelayTime = preDelayTime;
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall BattleCommandComponent__PlayTDErrorAnimation(
        BattleCommandComponent_o *this,
        System_Action_o *tdErrorAfterAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _BOOL4 IsAnimationBusy; // w22
  struct System_Action_o **p_tdErrorAfterAction; // x20
  System_Delegate_o *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x8
  System_Action_c *v18; // x1
  __int64 v19; // x1
  BattleServantData_o *svtData; // x0
  struct BattleServantData_o *v21; // x8
  System_String_o *TDErrorCardSelectVoiceSe; // x0
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2

  if ( (byte_4C001AF & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, tdErrorAfterAction);
    sub_1C2E12C(&StringLiteral_23506/*"se_ba41"*/, v5);
    sub_1C2E12C(&StringLiteral_17074/*"anim_erroraction"*/, v6);
    sub_1C2E12C(&StringLiteral_17072/*"anim_commandfloat"*/, v7);
    byte_4C001AF = 1;
  }
  IsAnimationBusy = BattleCommandComponent__IsAnimationBusy(this, (System_String_o *)StringLiteral_17072/*"anim_commandfloat"*/, method);
  p_tdErrorAfterAction = &this->fields.tdErrorAfterAction;
  v10 = System_Delegate__Combine(
          (System_Delegate_o *)this->fields.tdErrorAfterAction,
          (System_Delegate_o *)tdErrorAfterAction,
          0LL);
  v17 = (int64_t)v10;
  if ( !v10 )
    goto LABEL_7;
  v18 = System_Action_TypeInfo;
  if ( (System_Action_c *)v10->klass != System_Action_TypeInfo
    || (*p_tdErrorAfterAction = (struct System_Action_o *)v10, (System_Action_c *)v10->klass != v18) )
  {
    sub_1C2E648(v10);
LABEL_7:
    *p_tdErrorAfterAction = (struct System_Action_o *)v17;
  }
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.tdErrorAfterAction, v17, v11, v12, v13, v14, v15, v16);
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
      || (BattleServantData__AddTDErrorTouchCount(svtData, 0LL), (v21 = this->fields.svtData) == 0LL)
      || (svtData = (BattleServantData_o *)v21->fields.deckSvt) == 0LL )
    {
      sub_1C2E388(svtData, v19);
    }
    TDErrorCardSelectVoiceSe = BattleDeckServantData__GetTDErrorCardSelectVoiceSe(
                                 (BattleDeckServantData_o *)svtData,
                                 (System_String_o *)StringLiteral_23506/*"se_ba41"*/,
                                 0LL);
    BattleCommandComponent__PlayTDErrorVoiceSe(this, TDErrorCardSelectVoiceSe, -1, v23);
    BattleCommandComponent__PlayAnimation(this, (System_String_o *)StringLiteral_17074/*"anim_erroraction"*/, 0.0, v24);
  }
}


System_String_o *__fastcall BattleCommandComponent__PlayTDErrorVoiceSe(
        BattleCommandComponent_o *this,
        System_String_o *voiceSeId,
        int32_t voiceUniqueId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_o *v14; // x22
  BattleServantData_o *svtData; // x0
  int32_t v16; // w22
  int32_t DispLimitCount; // w23
  int32_t VoicePrefix; // w0
  BattleCommandComponent_c *v19; // x8
  int v20; // w24
  struct BattleServantData_o *v21; // x8
  System_String_o *v22; // x19
  int32_t overwriteSvtVoiceId; // w21
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x20
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  BattleCommandComponent_c *v32; // x0
  BattleCommandComponent_c *v33; // x0
  _QWORD *v34; // x8
  System_Reflection_MethodBase_o *v35; // x0
  int v37; // [xsp+8h] [xbp-48h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C001AC & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattleCommandComponent_PlayTDErrorVoiceSe__, voiceSeId);
    sub_1C2E12C(&BattleCommandComponent_TypeInfo, v7);
    sub_1C2E12C(&int_TypeInfo, v8);
    sub_1C2E12C(&ServantAssetLoadManager_TypeInfo, v9);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v10);
    sub_1C2E12C(&StringLiteral_25568/*"{0}_{1:D0}_{2}"*/, v11);
    sub_1C2E12C(&StringLiteral_1/*""*/, v12);
    byte_4C001AC = 1;
  }
  v14 = 0LL;
  if ( !System_String__IsNullOrEmpty(voiceSeId, 0LL) )
  {
    svtData = (BattleServantData_o *)BattleCommandComponent_TypeInfo;
    if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
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
          v16 = (int)svtData;
          DispLimitCount = BattleServantData__getDispLimitCount(this->fields.svtData, 1, 0LL);
          svtData = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( svtData )
          {
            VoicePrefix = ServantAssetLoadManager__getVoicePrefix(
                            (ServantAssetLoadManager_o *)svtData,
                            v16,
                            DispLimitCount,
                            0LL);
            v19 = BattleCommandComponent_TypeInfo;
            v20 = VoicePrefix;
            if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
              v19 = BattleCommandComponent_TypeInfo;
            }
            svtData = (BattleServantData_o *)System_String__Replace_63255212(
                                               voiceSeId,
                                               v19->static_fields->voiceIdPrefix,
                                               (System_String_o *)StringLiteral_1/*""*/,
                                               0LL);
            v21 = this->fields.svtData;
            if ( v21 )
            {
              v22 = (System_String_o *)svtData;
              overwriteSvtVoiceId = v21->fields.overwriteSvtVoiceId;
              if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
              ServantAssetLoadManager__playBattleVoice(
                v16,
                DispLimitCount,
                overwriteSvtVoiceId,
                v22,
                1.0,
                0LL,
                voiceUniqueId,
                0,
                0LL);
              v38 = v16;
              v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v24, v25, v26);
              v37 = v20;
              v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v28, v29, v30);
              return System_String__Format_63250024(
                       (System_String_o *)StringLiteral_25568/*"{0}_{1:D0}_{2}"*/,
                       v27,
                       v31,
                       (Il2CppObject *)v22,
                       0LL);
            }
          }
        }
      }
LABEL_27:
      sub_1C2E388(svtData, v13);
    }
    v32 = BattleCommandComponent_TypeInfo;
    if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
      v32 = BattleCommandComponent_TypeInfo;
    }
    if ( System_String__StartsWith(voiceSeId, v32->static_fields->seIdPrefix, 0LL) )
    {
      v33 = BattleCommandComponent_TypeInfo;
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v33 = BattleCommandComponent_TypeInfo;
      }
      v14 = System_String__Replace_63255212(
              voiceSeId,
              v33->static_fields->seIdPrefix,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      v34 = Method_BattleCommandComponent_PlayTDErrorVoiceSe__;
      if ( (*((_BYTE *)Method_BattleCommandComponent_PlayTDErrorVoiceSe__ + 83) & 2) != 0 )
        v34 = (_QWORD *)sub_1C2E144(Method_BattleCommandComponent_PlayTDErrorVoiceSe__);
      v35 = (System_Reflection_MethodBase_o *)sub_1C2E110(v34, v34[4]);
      OverwriteAssetSoundName__PlaySe(v35, v14, 0, 0LL);
    }
    else
    {
      return voiceSeId;
    }
  }
  return v14;
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
    sub_1C2E388(svtData, method);
  }
  v8 = BattleCommandComponent__PlayTDErrorVoiceSe(this, (System_String_o *)svtData, data->fields.uniqueId, v6);
  v10 = BattleCommandComponent__WaitForErrorViewFinished(this, waitSeconds, v8, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_70974992((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
}


void __fastcall BattleCommandComponent__ReleaseNobleGaugeEffect(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *nobleGaugeEffect; // x20
  PartyOrganizationUtility_o *p_nobleGaugeEffect; // x19
  UnityEngine_GameObject_o *klass; // x20
  UnityEngine_Object_o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4C0016E & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    sub_1C2E12C(&iTween_TypeInfo, v3);
    byte_4C0016E = 1;
  }
  nobleGaugeEffect = (UnityEngine_Object_o *)this->fields.nobleGaugeEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nobleGaugeEffect, 0LL, 0LL) )
  {
    p_nobleGaugeEffect = (PartyOrganizationUtility_o *)&this->fields.nobleGaugeEffect;
    klass = (UnityEngine_GameObject_o *)p_nobleGaugeEffect->klass;
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_61883512(klass, 0LL);
    v7 = (UnityEngine_Object_o *)p_nobleGaugeEffect->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70989720(v7, 0LL);
    p_nobleGaugeEffect->klass = 0LL;
    sub_1C2E0D0(p_nobleGaugeEffect, 0LL, v8, v9, v10, v11, v12, v13);
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
    sub_1C2E388(0LL, v3);
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
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  __int64 v4; // x1
  struct UISprite_o *v5; // x0

  if ( (byte_4C001A1 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C001A1 = 1;
  }
  this->fields.cardBuffListIndex = 0;
  *(_QWORD *)&this->fields.cardBuffAlphaFor = 1065353216LL;
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(specialCardBuffIcon, 0LL, 0LL) )
  {
    v5 = this->fields.specialCardBuffIcon;
    if ( !v5 )
      sub_1C2E388(0LL, v4);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))v5->klass->vtable._8_set_alpha.method)(
      v5,
      v5->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
  }
  this->fields.isChangedBuffIcon = 0;
}


void __fastcall BattleCommandComponent__ResetCriticalLabelColor(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  void *criticallabel; // x0
  int v5; // w8
  void *v6; // x20
  unsigned int v7; // w23
  UILabel_o *v8; // x21
  UILabel_o *criticalPercentLabel; // x20

  if ( (byte_4C00164 & 1) == 0 )
  {
    sub_1C2E12C(&BattleCommandComponent_TypeInfo, method);
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____77780216, v3);
    byte_4C00164 = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_17;
  criticallabel = UnityEngine_Component__GetComponentsInChildren_object_(
                    (UnityEngine_Component_o *)criticallabel,
                    1,
                    (const MethodInfo_2FC8DC0 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____77780216);
  if ( !criticallabel )
    goto LABEL_17;
  v5 = *((_DWORD *)criticallabel + 6);
  v6 = criticallabel;
  if ( v5 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= v5 )
        sub_1C2E390(criticallabel, method);
      criticallabel = BattleCommandComponent_TypeInfo;
      v8 = (UILabel_o *)*((_QWORD *)v6 + (int)v7 + 4);
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        criticallabel = BattleCommandComponent_TypeInfo;
      }
      if ( !v8 )
        break;
      UILabel__set_gradientTop(v8, *(UnityEngine_Color_o *)(*((_QWORD *)criticallabel + 23) + 24LL), 0LL);
      UILabel__set_gradientBottom(
        v8,
        BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientBottomOnDefault,
        0LL);
      v5 = *((_DWORD *)v6 + 6);
      if ( (int)++v7 >= v5 )
        goto LABEL_12;
    }
LABEL_17:
    sub_1C2E388(criticallabel, method);
  }
LABEL_12:
  criticallabel = BattleCommandComponent_TypeInfo;
  criticalPercentLabel = this->fields.criticalPercentLabel;
  if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
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
    sub_1C2E388(0LL, method);
  BattleCommandData__ResetPassStar(data, 0LL);
}


void __fastcall BattleCommandComponent__SetActiveComponent(
        BattleCommandComponent_o *this,
        UnityEngine_Component_o *component,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4C00197 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, component);
    byte_4C00197 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)component,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !component || (gameObject = UnityEngine_Component__get_gameObject(component, 0LL)) == 0LL )
      sub_1C2E388(gameObject, v7);
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

  if ( (byte_4C0019E & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, active);
    byte_4C0019E = 1;
  }
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(specialCardBuffIcon, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1C2E388(gameObject, v6);
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
  if ( (byte_4C0019D & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, active);
    byte_4C0019D = 1;
  }
  this->fields.isCardBuffAlphaAnim = v4;
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(specialCardBuffIcon, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1C2E388(gameObject, v6);
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
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *facetex; // x20
  __int64 v9; // x1
  UIWidget_o *v10; // x0
  UnityEngine_Object_o *bg; // x20
  UnityEngine_Object_o *codeSprite; // x20
  UnityEngine_Object_o *codeTexture; // x20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *powerUpCardIcon; // x20
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4C00185 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C00185 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.facetex;
    if ( !v10 )
      goto LABEL_29;
    v17.fields.r = r;
    v17.fields.g = g;
    v17.fields.b = b;
    v17.fields.a = a;
    UIWidget__set_color(v10, v17, 0LL);
  }
  bg = (UnityEngine_Object_o *)this->fields.bg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bg, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.bg;
    if ( !v10 )
      goto LABEL_29;
    v18.fields.r = r;
    v18.fields.g = g;
    v18.fields.b = b;
    v18.fields.a = a;
    UIWidget__set_color(v10, v18, 0LL);
  }
  codeSprite = (UnityEngine_Object_o *)this->fields.codeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(codeSprite, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.codeSprite;
    if ( !v10 )
      goto LABEL_29;
    v19.fields.r = r;
    v19.fields.g = g;
    v19.fields.b = b;
    v19.fields.a = a;
    UIWidget__set_color(v10, v19, 0LL);
  }
  codeTexture = (UnityEngine_Object_o *)this->fields.codeTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(codeTexture, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.codeTexture;
    if ( !v10 )
      goto LABEL_29;
    v20.fields.r = r;
    v20.fields.g = g;
    v20.fields.b = b;
    v20.fields.a = a;
    UIWidget__set_color(v10, v20, 0LL);
  }
  v21.fields.r = r;
  v21.fields.g = g;
  v21.fields.b = b;
  v21.fields.a = a;
  BattleCommandComponent__SetCommandCodeActive(this, v21, 0, v14);
  v22.fields.r = r;
  v22.fields.g = g;
  v22.fields.b = b;
  v22.fields.a = a;
  BattleCommandComponent__SetCommandAssistActive(this, v22, 0, v15);
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(powerUpCardIcon, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.powerUpCardIcon;
    if ( v10 )
    {
      v23.fields.b = b;
      v23.fields.a = a;
      v23.fields.r = r;
      v23.fields.g = g;
      UIWidget__set_color(v10, v23, 0LL);
      return;
    }
LABEL_29:
    sub_1C2E388(v10, v9);
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
  __int64 v11; // x1
  UnityEngine_Object_o *assistChargeTurnLabel; // x21
  UnityEngine_Object_o *assistRemainingTurnLabel; // x21
  __int64 v14; // x1
  void *buffData; // x0
  UnityEngine_Object_o *assistSprite; // x21
  BattleCommandData_o *data; // x0
  struct BattleServantData_o *svtData; // x8
  int v19; // w8
  int v20; // w9
  _DWORD *v21; // x21
  struct BattleCommandData_o *v22; // x10
  int32_t v23; // w21
  int v24; // t1
  UILabel_o *v25; // x22
  UILabel_o *v26; // x21
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4C00187 & 1) == 0 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, isFirst);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v10);
    sub_1C2E12C(&StringLiteral_2858/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, v11);
    byte_4C00187 = 1;
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(assistChargeTurnLabel, 0LL, 0LL) )
    {
      assistRemainingTurnLabel = (UnityEngine_Object_o *)this->fields.assistRemainingTurnLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(assistSprite, 0LL, 0LL) )
        {
          buffData = this->fields.assistSprite;
          if ( !buffData )
            goto LABEL_48;
          v27.fields.r = r;
          v27.fields.g = g;
          v27.fields.b = b;
          v27.fields.a = a;
          UIWidget__set_color((UIWidget_o *)buffData, v27, 0LL);
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
                v19 = *((_DWORD *)buffData + 6);
                if ( v19 >= 1 )
                {
                  v20 = 0;
                  while ( 1 )
                  {
                    if ( v19 == v20 )
                      sub_1C2E390(buffData, v14);
                    v21 = (_DWORD *)*((_QWORD *)buffData + v20 + 4);
                    if ( !v21 )
                      goto LABEL_48;
                    v22 = this->fields.data;
                    if ( !v22 )
                      goto LABEL_48;
                    if ( v21[87] == v22->fields.commandAssistId && v21[88] == v22->fields.servantCardIdsIndex )
                      break;
                    if ( v19 == ++v20 )
                      goto LABEL_41;
                  }
                  v24 = v21[28];
                  v23 = (_DWORD)v21 + 112;
                  if ( v24 >= 1 )
                  {
                    buffData = this->fields.assistSprite;
                    if ( !buffData )
                      goto LABEL_48;
                    v28.fields.r = 0.5;
                    v28.fields.g = 0.5;
                    v28.fields.b = 0.5;
                    v28.fields.a = 1.0;
                    UIWidget__set_color((UIWidget_o *)buffData, v28, 0LL);
                    buffData = this->fields.assistChargeTurnLabel;
                    if ( !buffData )
                      goto LABEL_48;
                    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                    buffData = this->fields.assistRemainingTurnLabel;
                    if ( !buffData )
                      goto LABEL_48;
                    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                    v25 = this->fields.assistChargeTurnLabel;
                    buffData = System_Int32__ToString(v23, 0LL);
                    if ( !v25 )
                      goto LABEL_48;
                    UILabel__set_text(v25, (System_String_o *)buffData, 0LL);
                    v26 = this->fields.assistRemainingTurnLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    buffData = LocalizationManager__Get((System_String_o *)StringLiteral_2858/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, 0LL);
                    if ( !v26 )
                      goto LABEL_48;
                    UILabel__set_text(v26, (System_String_o *)buffData, 0LL);
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
                  sub_1C2E388(buffData, v14);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *assistSprite; // x21
  __int64 v10; // x1
  UnityEngine_Behaviour_o *Master_object; // x0
  int32_t EventId; // w21
  UISprite_o *v13; // x20
  System_String_o *v14; // x21

  if ( (byte_4C00190 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, *(_QWORD *)&commandAssistId);
    sub_1C2E12C(&BattleData_TypeInfo, v5);
    sub_1C2E12C(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v6);
    sub_1C2E12C(&DataManager_TypeInfo, v7);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v8);
    byte_4C00190 = 1;
  }
  assistSprite = (UnityEngine_Object_o *)this->fields.assistSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(assistSprite, 0LL, 0LL) )
  {
    Master_object = (UnityEngine_Behaviour_o *)this->fields.assistSprite;
    if ( Master_object )
    {
      if ( commandAssistId <= 0 )
        goto LABEL_19;
      UnityEngine_Behaviour__set_enabled(Master_object, 1, 0LL);
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      EventId = BattleData__GetEventId(0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (UnityEngine_Behaviour_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
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
          v13 = this->fields.assistSprite;
          v14 = System_Int32__ToString((int)Master_object + 48, 0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          if ( AtlasManager__SetEventSprite(v13, v14, 0LL) )
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
    sub_1C2E388(Master_object, v10);
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
  __int64 v11; // x1
  UnityEngine_Object_o *chargeTurnLabel; // x21
  UnityEngine_Object_o *remainingTurnLabel; // x21
  __int64 v14; // x1
  void *buffData; // x0
  UnityEngine_Object_o *codeTexture; // x21
  UnityEngine_Object_o *codeSprite; // x21
  BattleCommandData_o *data; // x0
  struct BattleServantData_o *svtData; // x8
  int v20; // w8
  int v21; // w9
  __int64 v22; // x21
  struct BattleCommandData_o *v23; // x10
  int32_t v24; // w21
  int v25; // t1
  UILabel_o *v26; // x22
  UILabel_o *v27; // x21
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4C00186 & 1) == 0 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, isFirst);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v10);
    sub_1C2E12C(&StringLiteral_2858/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, v11);
    byte_4C00186 = 1;
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(chargeTurnLabel, 0LL, 0LL) )
    {
      remainingTurnLabel = (UnityEngine_Object_o *)this->fields.remainingTurnLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(codeSprite, 0LL, 0LL) )
            return;
          buffData = this->fields.codeSprite;
          if ( !buffData )
            goto LABEL_56;
        }
        v28.fields.r = r;
        v28.fields.g = g;
        v28.fields.b = b;
        v28.fields.a = a;
        UIWidget__set_color((UIWidget_o *)buffData, v28, 0LL);
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
              v20 = *((_DWORD *)buffData + 6);
              if ( v20 >= 1 )
              {
                v21 = 0;
                while ( 1 )
                {
                  if ( v20 == v21 )
                    sub_1C2E390(buffData, v14);
                  v22 = *((_QWORD *)buffData + v21 + 4);
                  if ( !v22 )
                    goto LABEL_56;
                  v23 = this->fields.data;
                  if ( !v23 )
                    goto LABEL_56;
                  if ( *(_QWORD *)(v22 + 88) == v23->fields.userCommandCodeId )
                    break;
                  if ( v20 == ++v21 )
                    goto LABEL_49;
                }
                v25 = *(_DWORD *)(v22 + 112);
                v24 = v22 + 112;
                if ( v25 >= 1 )
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
                  v29.fields.r = 0.5;
                  v29.fields.g = 0.5;
                  v29.fields.b = 0.5;
                  v29.fields.a = 1.0;
                  UIWidget__set_color((UIWidget_o *)buffData, v29, 0LL);
                  buffData = this->fields.chargeTurnLabel;
                  if ( !buffData )
                    goto LABEL_56;
                  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                  buffData = this->fields.remainingTurnLabel;
                  if ( !buffData )
                    goto LABEL_56;
                  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                  v26 = this->fields.chargeTurnLabel;
                  buffData = System_Int32__ToString(v24, 0LL);
                  if ( !v26 )
                    goto LABEL_56;
                  UILabel__set_text(v26, (System_String_o *)buffData, 0LL);
                  v27 = this->fields.remainingTurnLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  buffData = LocalizationManager__Get((System_String_o *)StringLiteral_2858/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, 0LL);
                  if ( !v27 )
                    goto LABEL_56;
                  UILabel__set_text(v27, (System_String_o *)buffData, 0LL);
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
                sub_1C2E388(buffData, v14);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Behaviour_o *codeTexture; // x0
  PartyOrganizationUtility_o *p_codeTexture; // x19
  UITexture_o *klass; // x21
  UnityEngine_Object_o *Manager__loadCommandCodeTexture; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  Il2CppObject *Entity; // x0
  void *monitor; // x20
  Il2CppClass *v24; // x21
  int32_t v25; // w20
  UISprite_o *codeSprite; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4C0018E & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, userCommandCodeId);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_1C2E12C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v6);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C2E12C(&ServantAssetLoadManager_TypeInfo, v9);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4C0018E = 1;
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
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadCommandCodeTexture = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCodeTexture(
                                                                  klass,
                                                                  userCommandCodeId,
                                                                  0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCodeTexture, 0LL, 0LL) )
      {
        p_codeTexture->klass = (PartyOrganizationUtility_c *)Manager__loadCommandCodeTexture;
        sub_1C2E0D0(p_codeTexture, (int64_t)Manager__loadCommandCodeTexture, v16, v17, v18, v19, v20, v21);
      }
      return;
    }
LABEL_28:
    sub_1C2E388(codeTexture, v11);
  }
  UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
  if ( !codeTexture )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0LL);
  codeTexture = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !codeTexture )
    goto LABEL_28;
  codeTexture = (UnityEngine_Behaviour_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)codeTexture,
                                             (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !codeTexture )
    goto LABEL_28;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)codeTexture,
             userCommandCodeId,
             (const MethodInfo_327D6DC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  if ( Entity )
  {
    v24 = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v27.fields.currentCryptoKey = v24;
    *(_QWORD *)&v27.fields.fakeValue = monitor;
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v27, 0LL);
  }
  else
  {
    v25 = -1;
  }
  codeSprite = this->fields.codeSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommandCodeMiniImage(codeSprite, v25, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetCommandCodeView_44532928(
        BattleCommandComponent_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Behaviour_o *codeTexture; // x0
  PartyOrganizationUtility_o *p_codeTexture; // x20
  UITexture_o *klass; // x21
  UnityEngine_Object_o *Manager__loadCommandCodeTexture_39270836; // x19
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UISprite_o *codeSprite; // x20

  if ( (byte_4C0018F & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    sub_1C2E12C(&ServantAssetLoadManager_TypeInfo, v6);
    byte_4C0018F = 1;
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
    sub_1C2E388(codeTexture, v7);
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
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadCommandCodeTexture_39270836 = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCodeTexture_39270836(
                                                                           klass,
                                                                           commandCodeId,
                                                                           0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCodeTexture_39270836, 0LL, 0LL) )
      {
        p_codeTexture->klass = (PartyOrganizationUtility_c *)Manager__loadCommandCodeTexture_39270836;
        sub_1C2E0D0(p_codeTexture, (int64_t)Manager__loadCommandCodeTexture_39270836, v12, v13, v14, v15, v16, v17);
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
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
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
  if ( (byte_4C001AB & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&effectType);
    byte_4C001AB = 1;
  }
  effectobj = v6->fields.effectobj;
  if ( !effectobj )
    goto LABEL_13;
  if ( effectobj->max_length <= effectType )
LABEL_14:
    sub_1C2E390(this, *(_QWORD *)&effectType);
  v8 = (UnityEngine_Object_o *)effectobj->m_Items[effectType];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1C2E388(this, *(_QWORD *)&effectType);
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
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *donotPermanentSleep; // x20
  UISprite_o *v6; // x19

  if ( (byte_4C0019C & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    sub_1C2E12C(&StringLiteral_20548/*"icon_sleep_2"*/, v4);
    byte_4C0019C = 1;
  }
  donotPermanentSleep = (UnityEngine_Object_o *)this->fields.donotPermanentSleep;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(donotPermanentSleep, 0LL, 0LL) )
  {
    v6 = this->fields.donotPermanentSleep;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v6, (System_String_o *)StringLiteral_20548/*"icon_sleep_2"*/, 0LL);
  }
}


void __fastcall BattleCommandComponent__SetDonotSleepSprite(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *donotsleepSprite; // x20
  UISprite_o *v6; // x19

  if ( (byte_4C0019B & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    sub_1C2E12C(&StringLiteral_20547/*"icon_sleep"*/, v4);
    byte_4C0019B = 1;
  }
  donotsleepSprite = (UnityEngine_Object_o *)this->fields.donotsleepSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(donotsleepSprite, 0LL, 0LL) )
  {
    v6 = this->fields.donotsleepSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v6, (System_String_o *)StringLiteral_20547/*"icon_sleep"*/, 0LL);
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
    sub_1C2E388(chargeTurnLabel, active);
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
    sub_1C2E388(assistChargeTurnLabel, active);
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

  if ( (byte_4C00194 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, isLock);
    byte_4C00194 = 1;
  }
  LockInfo = (UnityEngine_Object_o *)this->fields.LockInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(LockInfo, 0LL, 0LL) )
  {
    v7 = this->fields.LockInfo;
    if ( !v7 )
      sub_1C2E388(0LL, v6);
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
  sub_1C2E0D0(
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
  UnityEngine_Object_o *powerUpCardIcon; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  UISprite_o *v13; // x23
  UnityEngine_Component_o *v14; // x8
  char v15; // w19
  bool v16; // w1

  if ( (byte_4C00196 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, *(_QWORD *)&powerUpValue);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v9);
    byte_4C00196 = 1;
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(powerUpCardIcon, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    v13 = this->fields.powerUpCardIcon;
    if ( powerUpValue <= 0 )
    {
      if ( v13 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.powerUpCardIcon, 0LL);
        if ( gameObject )
        {
          v16 = 0;
          goto LABEL_15;
        }
      }
    }
    else
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetCommandCardIconImage(
                                                 v13,
                                                 powerUpValue,
                                                 iconType,
                                                 isBright,
                                                 0LL);
      v14 = (UnityEngine_Component_o *)this->fields.powerUpCardIcon;
      if ( v14 )
      {
        v15 = (char)gameObject;
        gameObject = UnityEngine_Component__get_gameObject(v14, 0LL);
        if ( gameObject )
        {
          v16 = v15 & 1;
LABEL_15:
          UnityEngine_GameObject__SetActive(gameObject, v16, 0LL);
          return;
        }
      }
    }
    sub_1C2E388(gameObject, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetPowerUpCardValue(
        BattleCommandComponent_o *this,
        int32_t powerUpValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *powerUpCardValue; // x21
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *v10; // x20
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C00195 & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, *(_QWORD *)&powerUpValue);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_842/*"+{0:#,0}"*/, v6);
    byte_4C00195 = 1;
  }
  powerUpCardValue = (UnityEngine_Object_o *)this->fields.powerUpCardValue;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    v10 = this->fields.powerUpCardValue;
    v15 = powerUpValue;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v11, v12, v13);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_842/*"+{0:#,0}"*/, v14, 0LL);
    if ( !v10 )
LABEL_13:
      sub_1C2E388(gameObject, v8);
    UILabel__set_text(v10, (System_String_o *)gameObject, 0LL);
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
  BattleCommandComponent___c__DisplayClass225_0_o *v23; // x24
  void *Index; // x0
  __int64 v25; // x1
  System_Collections_Generic_List_object__o *specialCardBuffList; // x23
  System_Predicate_object__o *v27; // x25
  int32_t v28; // w23
  System_Collections_Generic_List_object__o *v29; // x22
  int32_t v30; // w24
  BattleCommandComponent_CardBuffData_o *v31; // x23
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Collections_Generic_List_object__o *v42; // x20
  System_Comparison_T__o *v43; // x21
  Il2CppObject *v44; // x22
  struct BattleCommandComponent___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  const MethodInfo *v52; // x2
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v53; // x8

  if ( (byte_4C0019F & 1) == 0 )
  {
    sub_1C2E12C(&BattleCommandComponent_CardBuffData_TypeInfo, *(_QWORD *)&buffType);
    sub_1C2E12C(&System_Comparison_BattleCommandComponent_CardBuffData__TypeInfo, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Add__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__RemoveAt__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Sort__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__, v16);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__, v17);
    sub_1C2E12C(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo, v18);
    sub_1C2E12C(&Method_BattleCommandComponent___c__SetSpecialCommandCardBuffData_b__225_1__, v19);
    sub_1C2E12C(&Method_BattleCommandComponent___c__DisplayClass225_0__SetSpecialCommandCardBuffData_b__0__, v20);
    sub_1C2E12C(&BattleCommandComponent___c__DisplayClass225_0_TypeInfo, v21);
    sub_1C2E12C(&BattleCommandComponent___c_TypeInfo, v22);
    byte_4C0019F = 1;
  }
  v23 = (BattleCommandComponent___c__DisplayClass225_0_o *)sub_1C2E378(BattleCommandComponent___c__DisplayClass225_0_TypeInfo);
  BattleCommandComponent___c__DisplayClass225_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_29;
  v23->fields.buffType = buffType;
  specialCardBuffList = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  v27 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
  System_Predicate_object____ctor(
    v27,
    (Il2CppObject *)v23,
    Method_BattleCommandComponent___c__DisplayClass225_0__SetSpecialCommandCardBuffData_b__0__,
    0LL);
  if ( !specialCardBuffList )
    goto LABEL_29;
  Index = (void *)System_Collections_Generic_List_object___FindIndex(
                    specialCardBuffList,
                    (System_Predicate_T__o *)v27,
                    (const MethodInfo_366C104 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  v28 = (int)Index;
  if ( active )
  {
    v29 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
    if ( ((unsigned int)Index & 0x80000000) != 0 )
    {
      v30 = v23->fields.buffType;
      v31 = (BattleCommandComponent_CardBuffData_o *)sub_1C2E378(BattleCommandComponent_CardBuffData_TypeInfo);
      BattleCommandComponent_CardBuffData___ctor(v31, v30, turn, addOrder, 0LL);
      if ( !v29 )
        goto LABEL_29;
      items = v29->fields._items;
      v39 = Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Add__;
      ++v29->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v29->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v29,
          (Il2CppObject *)v31,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v29->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v31;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)v31, v32, v33, v34, v35, v36, v37);
      }
    }
    else
    {
      if ( !v29 )
        goto LABEL_29;
      Index = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList,
                (int32_t)Index,
                (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
      if ( !Index )
        goto LABEL_29;
      *((_DWORD *)Index + 5) = turn;
      Index = this->fields.specialCardBuffList;
      if ( !Index )
        goto LABEL_29;
      Index = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Index,
                v28,
                (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
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
      v28,
      (const MethodInfo_366D080 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__RemoveAt__);
  }
  v42 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  Index = BattleCommandComponent___c_TypeInfo;
  if ( !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
    Index = BattleCommandComponent___c_TypeInfo;
  }
  v43 = *(System_Comparison_T__o **)(*((_QWORD *)Index + 23) + 24LL);
  if ( !v43 )
  {
    if ( !*((_DWORD *)Index + 56) )
    {
      j_il2cpp_runtime_class_init_0(Index);
      Index = BattleCommandComponent___c_TypeInfo;
    }
    v44 = (Il2CppObject *)**((_QWORD **)Index + 23);
    v43 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_BattleCommandComponent_CardBuffData__TypeInfo);
    System_Comparison_object____ctor(
      v43,
      v44,
      Method_BattleCommandComponent___c__SetSpecialCommandCardBuffData_b__225_1__,
      0LL);
    static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    static_fields->__9__225_1 = (struct System_Comparison_BattleCommandComponent_CardBuffData__o *)v43;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__225_1, (int64_t)v43, v46, v47, v48, v49, v50, v51);
  }
  if ( !v42
    || (System_Collections_Generic_List_object___Sort_57070448(
          v42,
          v43,
          (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Sort__),
        (v53 = this->fields.specialCardBuffList) == 0LL) )
  {
LABEL_29:
    sub_1C2E388(Index, v25);
  }
  BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, v53->fields._size > 0, v52);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetTreasureDeviceTypeChange(
        BattleCommandComponent_o *this,
        bool active,
        int32_t turn,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *nowTreasureDeviceTypeImage; // x22
  UnityEngine_Object_o *restTreasureDeviceChangeTurnLabel; // x22
  __int64 v12; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *v14; // x20
  System_String_o *v15; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C00193 & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, active);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v7);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v8);
    sub_1C2E12C(&StringLiteral_2900/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_REST_TURN"*/, v9);
    byte_4C00193 = 1;
  }
  nowTreasureDeviceTypeImage = (UnityEngine_Object_o *)this->fields.nowTreasureDeviceTypeImage;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(nowTreasureDeviceTypeImage, 0LL, 0LL) )
  {
    restTreasureDeviceChangeTurnLabel = (UnityEngine_Object_o *)this->fields.restTreasureDeviceChangeTurnLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      v14 = this->fields.restTreasureDeviceChangeTurnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_2900/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_REST_TURN"*/, 0LL);
      v20 = turn;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v16, v17, v18);
      gameObject = (UnityEngine_Component_o *)System_String__Format(v15, v19, 0LL);
      if ( !v14 )
LABEL_17:
        sub_1C2E388(gameObject, v12);
      UILabel__set_text(v14, (System_String_o *)gameObject, 0LL);
    }
  }
}


bool __fastcall BattleCommandComponent__SetTreasureDeviceTypeImageDefaultAtlas(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *defaultTdTypeImageAtlas; // x21
  struct UIAtlas_o **p_defaultTdTypeImageAtlas; // x20
  UnityEngine_Object_o *nowTreasureDeviceTypeImage; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct UISprite_o *v14; // x8
  int64_t mAtlas; // x1
  UnityEngine_Object_o *v16; // x19

  if ( (byte_4C00198 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C00198 = 1;
  }
  defaultTdTypeImageAtlas = (UnityEngine_Object_o *)this->fields.defaultTdTypeImageAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_defaultTdTypeImageAtlas = &this->fields.defaultTdTypeImageAtlas;
  if ( UnityEngine_Object__op_Equality(defaultTdTypeImageAtlas, 0LL, 0LL) )
  {
    nowTreasureDeviceTypeImage = (UnityEngine_Object_o *)this->fields.nowTreasureDeviceTypeImage;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(nowTreasureDeviceTypeImage, 0LL, 0LL);
    if ( v6 )
    {
      v14 = this->fields.nowTreasureDeviceTypeImage;
      if ( !v14 )
        sub_1C2E388(v6, v7);
      mAtlas = (int64_t)v14->fields.mAtlas;
      *p_defaultTdTypeImageAtlas = (struct UIAtlas_o *)mAtlas;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&this->fields.defaultTdTypeImageAtlas,
        mAtlas,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
    }
  }
  v16 = (UnityEngine_Object_o *)*p_defaultTdTypeImageAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetUntrueCount(
        BattleCommandComponent_o *this,
        int32_t count,
        bool isInitZero,
        const MethodInfo *method)
{
  __int64 v7; // x1
  DrumRollLabel_o *criticallabel; // x0
  struct DrumRollLabel_o *v9; // x21
  DrumRollLabel_CompleteEventHandler_o *v10; // x22

  if ( (byte_4C00175 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattleCommandComponent_compCriticallabel__, *(_QWORD *)&count);
    sub_1C2E12C(&DrumRollLabel_CompleteEventHandler_TypeInfo, v7);
    byte_4C00175 = 1;
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
        (v9 = this->fields.criticallabel) == 0LL) )
  {
LABEL_12:
    sub_1C2E388(criticallabel, *(_QWORD *)&count);
  }
  if ( v9->fields.nowvalue <= count )
  {
    v10 = (DrumRollLabel_CompleteEventHandler_o *)sub_1C2E378(DrumRollLabel_CompleteEventHandler_TypeInfo);
    DrumRollLabel_CompleteEventHandler___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BattleCommandComponent_compCriticallabel__,
      0LL);
  }
  else
  {
    v10 = 0LL;
  }
  DrumRollLabel__changeParam(v9, count, 1, v10, 0.0, 0LL);
}


void __fastcall BattleCommandComponent__SetUnusableShortageStarSprite(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *unusableShortageStarSprite; // x20
  UISprite_o *v6; // x19

  if ( (byte_4C0019A & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    sub_1C2E12C(&StringLiteral_20563/*"icon_unusable_star"*/, v4);
    byte_4C0019A = 1;
  }
  unusableShortageStarSprite = (UnityEngine_Object_o *)this->fields.unusableShortageStarSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(unusableShortageStarSprite, 0LL, 0LL) )
  {
    v6 = this->fields.unusableShortageStarSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v6, (System_String_o *)StringLiteral_20563/*"icon_unusable_star"*/, 0LL);
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

  if ( (byte_4C00191 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, isUp);
    byte_4C00191 = 1;
  }
  codeObject = (UnityEngine_Object_o *)this->fields.codeObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
              sub_1C2E390(friendIcon, v7);
            v31 = (UnityEngine_Object_o *)v30->m_Items[0];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                sub_1C2E388(friendIcon, v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleCommandData_o *data; // x0
  BattleBuffData_BuffData_array *CommandCodeBuffArray; // x0
  BattleBuffData_BuffData_array *v14; // x20
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x21
  __int64 v19; // x24
  BattleBuffData_BuffData_o *v20; // x22
  System_String_o *datalist; // x22
  System_String_o *v22; // x22
  Il2CppObject *v23; // x23
  UnityEngine_Object_o *Manager__loadBattleCommonEffect; // x22
  UnityEngine_Transform_o *objectRoot; // x23
  Il2CppObject *v26; // x22
  Il2CppObject *Component_object; // x23
  const MethodInfo *v28; // x3
  struct UISprite_o *text; // x8
  struct UISprite_o *bg; // x9
  struct BattleCommandData_o *v31; // x8
  struct BattleCommandData_o *v32; // x8
  Il2CppObject *key; // [xsp+0h] [xbp-70h] BYREF
  System_String_o *path; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C001A7 & 1) == 0 )
  {
    sub_1C2E12C(&BattleEffectUtility_TypeInfo, method);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EffectMaster___, v3);
    sub_1C2E12C(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__, v6);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_CardEffectComponent___, v7);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject____77847040, v8);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v9);
    sub_1C2E12C(&ServantAssetLoadManager_TypeInfo, v10);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4C001A7 = 1;
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
      v14 = CommandCodeBuffArray;
      if ( *(_QWORD *)&CommandCodeBuffArray->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_43;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EffectMaster___);
        max_length = v14->max_length;
        if ( max_length >= 1 )
        {
          v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v19 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v19 >= max_length )
              sub_1C2E390(Instance, v16);
            v20 = v14->m_Items[v19];
            if ( !v20 )
              break;
            if ( v20->fields.cardEffectId >= 1 )
            {
              Instance = (DataManager_o *)BattleBuffData_BuffData__isEnableCommandCardBuff(
                                            v14->m_Items[v19],
                                            this->fields.data,
                                            0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_13;
              Instance = (DataManager_o *)BattleBuffData_BuffData__isCommandCodeBuff(v20, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                v31 = this->fields.data;
                if ( !v31 )
                  break;
                if ( v20->fields.userCommandCodeId == v31->fields.userCommandCodeId )
                  goto LABEL_13;
              }
              Instance = (DataManager_o *)BattleBuffData_BuffData__IsCommandAssistBuff(v20, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                v32 = this->fields.data;
                if ( !v32 )
                  break;
                if ( v20->fields.commandAssistId == v32->fields.commandAssistId
                  && v20->fields.cardIndex == v32->fields.servantCardIdsIndex )
                {
LABEL_13:
                  if ( !v18 )
                    break;
                  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                v18,
                                                v20->fields.cardEffectId,
                                                (const MethodInfo_327B180 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
                  if ( Instance )
                  {
                    datalist = (System_String_o *)Instance->fields.datalist;
                    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
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
                                                  (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
                    if ( ((unsigned __int8)Instance & 1) == 0 )
                    {
                      v23 = key;
                      v22 = path;
                      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                      Manager__loadBattleCommonEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                                  v22,
                                                                                  (System_String_o *)v23,
                                                                                  0LL);
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      Instance = (DataManager_o *)UnityEngine_Object__op_Equality(
                                                    Manager__loadBattleCommonEffect,
                                                    0LL,
                                                    0LL);
                      if ( ((unsigned __int8)Instance & 1) == 0 )
                      {
                        objectRoot = this->fields.objectRoot;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object__50692032(
                                                      (Il2CppObject *)Manager__loadBattleCommonEffect,
                                                      objectRoot,
                                                      (const MethodInfo_3057FC0 *)Method_UnityEngine_Object_Instantiate_GameObject____77847040);
                        if ( !Instance )
                          break;
                        v26 = (Il2CppObject *)Instance;
                        Component_object = UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)Instance,
                                             (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_CardEffectComponent___);
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
                            v28);
                        }
                        Instance = (DataManager_o *)this->fields.cardEffectDict;
                        if ( !Instance )
                          break;
                        System_Collections_Generic_Dictionary_object__object___Add(
                          (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                          key,
                          v26,
                          (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
                      }
                    }
                  }
                }
              }
            }
            max_length = v14->max_length;
            if ( (int)++v19 >= max_length )
              return;
          }
LABEL_43:
          sub_1C2E388(Instance, v16);
        }
      }
    }
  }
}


void __fastcall BattleCommandComponent__UpdateCommandCardTypeChange(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  void *data; // x0
  System_Collections_Generic_List_object__o *specialCardBuffList; // x20
  System_Predicate_object__o *v16; // x21
  Il2CppObject *v17; // x22
  struct BattleCommandComponent___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int32_t Index; // w0
  int32_t v26; // w20
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  UnityEngine_Object_o *specialCardBuffTurn; // x21
  UISprite_o *v29; // x21
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  System_String_o *v34; // x22
  UILabel_o *v35; // x21
  System_Collections_Generic_List_object__o *v36; // x8
  System_String_o *v37; // x19
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  int v42; // [xsp+8h] [xbp-38h] BYREF
  int32_t type; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C001A0 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, method);
    sub_1C2E12C(&int_TypeInfo, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__, v5);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v6);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    sub_1C2E12C(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo, v8);
    sub_1C2E12C(&Method_BattleCommandComponent___c__UpdateCommandCardTypeChange_b__227_0__, v9);
    sub_1C2E12C(&BattleCommandComponent___c_TypeInfo, v10);
    sub_1C2E12C(&StringLiteral_5146/*"DISPLAY_REMAINING_TURN"*/, v11);
    sub_1C2E12C(&StringLiteral_20489/*"icon_commandchange_{0}"*/, v12);
    sub_1C2E12C(&StringLiteral_1/*""*/, v13);
    byte_4C001A0 = 1;
  }
  data = BattleCommandComponent___c_TypeInfo;
  specialCardBuffList = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  if ( !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
    data = BattleCommandComponent___c_TypeInfo;
  }
  v16 = *(System_Predicate_object__o **)(*((_QWORD *)data + 23) + 32LL);
  if ( !v16 )
  {
    if ( !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data);
      data = BattleCommandComponent___c_TypeInfo;
    }
    v17 = (Il2CppObject *)**((_QWORD **)data + 23);
    v16 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    System_Predicate_object____ctor(
      v16,
      v17,
      Method_BattleCommandComponent___c__UpdateCommandCardTypeChange_b__227_0__,
      0LL);
    static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    static_fields->__9__227_0 = (struct System_Predicate_BattleCommandComponent_CardBuffData__o *)v16;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__227_0, (int64_t)v16, v19, v20, v21, v22, v23, v24);
  }
  if ( !specialCardBuffList )
    goto LABEL_30;
  Index = System_Collections_Generic_List_object___FindIndex(
            specialCardBuffList,
            (System_Predicate_T__o *)v16,
            (const MethodInfo_366C104 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  if ( (Index & 0x80000000) == 0 )
  {
    v26 = Index;
    specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0LL, 0LL) )
    {
      specialCardBuffTurn = (UnityEngine_Object_o *)this->fields.specialCardBuffTurn;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(specialCardBuffTurn, 0LL, 0LL) )
      {
        data = this->fields.data;
        if ( !data )
          goto LABEL_30;
        v29 = this->fields.specialCardBuffIcon;
        type = BattleCommandData__get_type((BattleCommandData_o *)data, 0LL);
        v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &type, v30, v31, v32);
        v34 = System_String__Format((System_String_o *)StringLiteral_20489/*"icon_commandchange_{0}"*/, v33, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( !AtlasManager__SetEventSprite(v29, v34, 0LL) )
        {
          data = this->fields.specialCardBuffIcon;
          if ( !data )
            goto LABEL_30;
          UISprite__set_spriteName((UISprite_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v35 = this->fields.specialCardBuffTurn;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        data = LocalizationManager__Get((System_String_o *)StringLiteral_5146/*"DISPLAY_REMAINING_TURN"*/, 0LL);
        v36 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
        if ( v36 )
        {
          v37 = (System_String_o *)data;
          data = System_Collections_Generic_List_object___get_Item(
                   v36,
                   v26,
                   (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
          if ( data )
          {
            v42 = *((_DWORD *)data + 5);
            v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v38, v39, v40);
            data = System_String__Format(v37, v41, 0LL);
            if ( v35 )
            {
              UILabel__set_text(v35, (System_String_o *)data, 0LL);
              return;
            }
          }
        }
LABEL_30:
        sub_1C2E388(data, method);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  char *data; // x0
  bool isAddAttack; // w0
  const MethodInfo *v12; // x1
  System_String_o *v13; // x21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  __int64 *v18; // x8
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  UnityEngine_Transform_o *transform; // x0
  int64_t v26; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int v33; // w8
  char *v34; // x21
  unsigned int v35; // w22
  int v36; // [xsp+Ch] [xbp-34h] BYREF
  int v37; // [xsp+18h] [xbp-28h] BYREF
  int v38; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4C00184 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___, *(_QWORD *)&targetIndex);
    sub_1C2E12C(&int_TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_16912/*"a"*/, v6);
    sub_1C2E12C(&StringLiteral_19228/*"effect/ef_commandup_{0}{1:00}"*/, v7);
    sub_1C2E12C(&StringLiteral_23101/*"q"*/, v8);
    sub_1C2E12C(&StringLiteral_17297/*"b"*/, v9);
    byte_4C00184 = 1;
  }
  data = (char *)this->fields.data;
  if ( !data )
    goto LABEL_29;
  isAddAttack = BattleCommandData__isAddAttack((BattleCommandData_o *)data, 0LL);
  if ( (unsigned int)targetIndex > 2 || isAddAttack || BattleCommandComponent__get_isKindOfDontAction(this, v12) )
    return;
  data = (char *)this->fields.data;
  if ( !data )
LABEL_29:
    sub_1C2E388(data, *(_QWORD *)&targetIndex);
  v13 = (System_String_o *)StringLiteral_19228/*"effect/ef_commandup_{0}{1:00}"*/;
  if ( BattleCommandData__isQuick((BattleCommandData_o *)data, 0LL) )
  {
    v38 = targetIndex + 1;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v14, v15, v16);
    v18 = &StringLiteral_23101/*"q"*/;
LABEL_16:
    v13 = System_String__Format_63249956(v13, (Il2CppObject *)*v18, v17, 0LL);
    goto LABEL_17;
  }
  data = (char *)this->fields.data;
  if ( !data )
    goto LABEL_29;
  if ( BattleCommandData__isArts((BattleCommandData_o *)data, 0LL) )
  {
    v37 = targetIndex + 1;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v19, v20, v21);
    v18 = &StringLiteral_16912/*"a"*/;
    goto LABEL_16;
  }
  data = (char *)this->fields.data;
  if ( !data )
    goto LABEL_29;
  if ( BattleCommandData__isBuster((BattleCommandData_o *)data, 0LL) )
  {
    v36 = targetIndex + 1;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v22, v23, v24);
    v18 = &StringLiteral_17297/*"b"*/;
    goto LABEL_16;
  }
LABEL_17:
  data = (char *)this->fields.nomalwidget;
  if ( !data )
    goto LABEL_29;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
  data = (char *)BaseMonoBehaviour__createObject_39556320((BaseMonoBehaviour_o *)this, v13, transform, 0LL, 0LL);
  if ( !data )
    goto LABEL_29;
  v26 = (int64_t)data;
  data = (char *)UnityEngine_GameObject__GetComponentsInChildren_object__50476848(
                   (UnityEngine_GameObject_o *)data,
                   (const MethodInfo_3023730 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( !data )
    goto LABEL_29;
  v33 = *((_DWORD *)data + 6);
  v34 = data;
  if ( v33 >= 1 )
  {
    v35 = 0;
    while ( v35 < v33 )
    {
      data = *(char **)&v34[8 * v35 + 32];
      if ( !data )
        goto LABEL_29;
      UnityEngine_ParticleSystem__Stop_71270336((UnityEngine_ParticleSystem_o *)data, 0LL);
      v33 = *((_DWORD *)v34 + 6);
      if ( (int)++v35 >= v33 )
        goto LABEL_25;
    }
LABEL_30:
    sub_1C2E390(data, *(_QWORD *)&targetIndex);
  }
LABEL_25:
  data = (char *)this->fields.effectobj;
  if ( !data )
    goto LABEL_29;
  if ( *((_DWORD *)data + 6) <= 3u )
    goto LABEL_30;
  *((_QWORD *)data + 7) = v26;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(data + 56), v26, v27, v28, v29, v30, v31, v32);
}


void __fastcall BattleCommandComponent__UpdateFixedCommandCard(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  void *Item; // x0
  System_Collections_Generic_List_object__o *specialCardBuffList; // x20
  System_Predicate_object__o *v14; // x21
  Il2CppObject *v15; // x22
  struct BattleCommandComponent___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int32_t Index; // w0
  int32_t v24; // w20
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  UnityEngine_Object_o *specialCardBuffTurn; // x21
  UILabel_o *v27; // x21
  System_Collections_Generic_List_object__o *v28; // x8
  System_String_o *v29; // x19
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  int v34; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C00192 & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__, v4);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v5);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v6);
    sub_1C2E12C(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo, v7);
    sub_1C2E12C(&Method_BattleCommandComponent___c__UpdateFixedCommandCard_b__211_0__, v8);
    sub_1C2E12C(&BattleCommandComponent___c_TypeInfo, v9);
    sub_1C2E12C(&StringLiteral_5146/*"DISPLAY_REMAINING_TURN"*/, v10);
    sub_1C2E12C(&StringLiteral_20448/*"icon_cardfixation"*/, v11);
    byte_4C00192 = 1;
  }
  Item = BattleCommandComponent___c_TypeInfo;
  specialCardBuffList = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  if ( !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
    Item = BattleCommandComponent___c_TypeInfo;
  }
  v14 = *(System_Predicate_object__o **)(*((_QWORD *)Item + 23) + 16LL);
  if ( !v14 )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      Item = BattleCommandComponent___c_TypeInfo;
    }
    v15 = (Il2CppObject *)**((_QWORD **)Item + 23);
    v14 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    System_Predicate_object____ctor(v14, v15, Method_BattleCommandComponent___c__UpdateFixedCommandCard_b__211_0__, 0LL);
    static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    static_fields->__9__211_0 = (struct System_Predicate_BattleCommandComponent_CardBuffData__o *)v14;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__211_0, (int64_t)v14, v17, v18, v19, v20, v21, v22);
  }
  if ( !specialCardBuffList )
    goto LABEL_26;
  Index = System_Collections_Generic_List_object___FindIndex(
            specialCardBuffList,
            (System_Predicate_T__o *)v14,
            (const MethodInfo_366C104 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  if ( (Index & 0x80000000) == 0 )
  {
    v24 = Index;
    specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0LL, 0LL) )
    {
      specialCardBuffTurn = (UnityEngine_Object_o *)this->fields.specialCardBuffTurn;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(specialCardBuffTurn, 0LL, 0LL) )
      {
        Item = this->fields.specialCardBuffIcon;
        if ( Item )
        {
          UISprite__set_atlas((UISprite_o *)Item, this->fields.commandAtlas, 0LL);
          Item = this->fields.specialCardBuffIcon;
          if ( Item )
          {
            UISprite__set_spriteName((UISprite_o *)Item, (System_String_o *)StringLiteral_20448/*"icon_cardfixation"*/, 0LL);
            v27 = this->fields.specialCardBuffTurn;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Item = LocalizationManager__Get((System_String_o *)StringLiteral_5146/*"DISPLAY_REMAINING_TURN"*/, 0LL);
            v28 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
            if ( v28 )
            {
              v29 = (System_String_o *)Item;
              Item = System_Collections_Generic_List_object___get_Item(
                       v28,
                       v24,
                       (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
              if ( Item )
              {
                v34 = *((_DWORD *)Item + 5);
                v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v30, v31, v32);
                Item = System_String__Format(v29, v33, 0LL);
                if ( v27 )
                {
                  UILabel__set_text(v27, (System_String_o *)Item, 0LL);
                  return;
                }
              }
            }
          }
        }
LABEL_26:
        sub_1C2E388(Item, method);
      }
    }
  }
}


void __fastcall BattleCommandComponent__UpdateIconChangeTypeByTransform(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *iconChangeTypeByTransform; // x20
  __int64 v6; // x1
  BattleCommandData_o *data; // x0
  int32_t v8; // w20
  BattleCommandComponent_o *v9; // x20
  const MethodInfo *v10; // x3
  UISprite_o *v11; // x19

  if ( (byte_4C001A2 & 1) == 0 )
  {
    sub_1C2E12C(&BattleCommand_TypeInfo, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    sub_1C2E12C(&StringLiteral_20447/*"icon_cardchange_"*/, v4);
    byte_4C001A2 = 1;
  }
  iconChangeTypeByTransform = (UnityEngine_Object_o *)this->fields.iconChangeTypeByTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(iconChangeTypeByTransform, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_13;
    v8 = BattleCommandData__GetChangeTypeByTransform(data, 0LL);
    if ( !BattleCommand_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    v9 = (BattleCommandComponent_o *)BattleCommand__GetCardTypeChangeSpriteNameSuffix(v8, 0LL, 0LL);
    BattleCommandComponent__SetActiveComponent(
      v9,
      (UnityEngine_Component_o *)this->fields.iconChangeTypeByTransform,
      v9 != 0LL,
      v10);
    if ( v9 )
    {
      v11 = this->fields.iconChangeTypeByTransform;
      data = (BattleCommandData_o *)System_String__Concat_63235584(
                                      (System_String_o *)StringLiteral_20447/*"icon_cardchange_"*/,
                                      (System_String_o *)v9,
                                      0LL);
      if ( v11 )
      {
        UISprite__set_spriteName(v11, (System_String_o *)data, 0LL);
        return;
      }
LABEL_13:
      sub_1C2E388(data, v6);
    }
  }
}


void __fastcall BattleCommandComponent__UpdateSealStatus(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantData_o *svtData; // x20
  BattleCommandData_o *data; // x21
  UnityEngine_Object_o *perf; // x22
  _BOOL8 v7; // x0
  __int64 v8; // x1
  BattleData_o *v9; // x22
  struct BattlePerformance_o *v10; // x8
  BattleCommandSealStatus_o *v11; // x23
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C00183 & 1) == 0 )
  {
    sub_1C2E12C(&BattleCommandSealStatus_TypeInfo, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    byte_4C00183 = 1;
  }
  data = this->fields.data;
  svtData = this->fields.svtData;
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Implicit(perf, 0LL);
  v9 = 0LL;
  if ( v7 )
  {
    v10 = this->fields.perf;
    if ( !v10 )
      sub_1C2E388(v7, v8);
    v9 = v10->fields.data;
  }
  v11 = (BattleCommandSealStatus_o *)sub_1C2E378(BattleCommandSealStatus_TypeInfo);
  BattleCommandSealStatus___ctor_44769988(v11, data, svtData, v9, 0LL);
  this->fields.sealStatus = v11;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.sealStatus, (int64_t)v11, v12, v13, v14, v15, v16, v17);
}


void __fastcall BattleCommandComponent__UpdateSpecialCardBuffIconAlpha(
        BattleCommandComponent_o *this,
        float deltaTime,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x8
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  System_Collections_IEnumerator_o *updated; // x0
  const MethodInfo *v12; // x1
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v13; // x8
  float v14; // s0
  float cardBuffAlphaFor; // s1
  float v16; // s2
  float v17; // s0
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v18; // x9
  int32_t v19; // w8
  UnityEngine_Object_o *v20; // x20

  if ( (byte_4C001A3 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    byte_4C001A3 = 1;
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(specialCardBuffIcon, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 && this->fields.isCardBuffAlphaAnim )
    {
      if ( !this->fields.isChangedBuffIcon )
      {
        updated = BattleCommandComponent__coroutineUpdateSpecialBuffIcon(this, v7);
        UnityEngine_MonoBehaviour__StartCoroutine_70974992((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
        BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(this, v12);
        this->fields.isChangedBuffIcon = 1;
      }
      v13 = this->fields.specialCardBuffList;
      if ( !v13 )
        goto LABEL_34;
      if ( v13->fields._size != 1 )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
        if ( !gameObject )
          goto LABEL_34;
        v14 = (*(float (__fastcall **)(UnityEngine_Component_o *, Il2CppClass *))&gameObject->klass[1]._1.this_arg.bits)(
                gameObject,
                gameObject->klass[1]._1.element_class);
        cardBuffAlphaFor = this->fields.cardBuffAlphaFor;
        v16 = this->fields.cardBuffAlphaAnimTime + deltaTime;
        v17 = v14 + (float)((float)(cardBuffAlphaFor - v14) * 0.5);
        this->fields.cardBuffAlphaAnimTime = v16;
        if ( v16 >= 3.0 )
        {
          cardBuffAlphaFor = 0.0;
          *(_QWORD *)&this->fields.cardBuffAlphaFor = 0LL;
        }
        if ( v17 <= 0.01 && cardBuffAlphaFor <= 0.0 )
        {
          v18 = this->fields.specialCardBuffList;
          v19 = this->fields.cardBuffListIndex + 1;
          *(_QWORD *)&this->fields.cardBuffAlphaFor = 1065353216LL;
          this->fields.cardBuffListIndex = v19;
          if ( !v18 )
            goto LABEL_34;
          if ( v18->fields._size <= v19 )
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
        sub_1C2E388(gameObject, v7);
      }
    }
    else
    {
LABEL_32:
      BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, 0, v8);
    }
  }
  else
  {
    v20 = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BuffMaster_o *Master_object; // x0
  __int64 v10; // x1
  UISprite_o *nowTreasureDeviceTypeImage; // x20
  System_String_o *v12; // x21
  UnityEngine_Object_o *defaultTdTypeImageAtlas; // x20
  UISpriteData_o *Sprite; // x0
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C00199 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, *(_QWORD *)&buffId);
    sub_1C2E12C(&Method_DataManager_GetMaster_BuffMaster___, v5);
    sub_1C2E12C(&DataManager_TypeInfo, v6);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    sub_1C2E12C(&StringLiteral_20453/*"icon_cardtypechange"*/, v8);
    byte_4C00199 = 1;
  }
  name = 0LL;
  if ( !BattleCommandComponent__SetTreasureDeviceTypeImageDefaultAtlas(this, *(const MethodInfo **)&buffId) )
    goto LABEL_20;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BuffMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_object )
    goto LABEL_22;
  if ( !BuffMaster__TryGetDisplayCardBottomImageName(
          Master_object,
          &name,
          buffId,
          (System_String_o *)StringLiteral_20453/*"icon_cardtypechange"*/,
          0LL) )
    goto LABEL_20;
  nowTreasureDeviceTypeImage = this->fields.nowTreasureDeviceTypeImage;
  v12 = name;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( AtlasManager__SetEventSprite(nowTreasureDeviceTypeImage, v12, 0LL) )
    goto LABEL_19;
  defaultTdTypeImageAtlas = (UnityEngine_Object_o *)this->fields.defaultTdTypeImageAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C2E388(Master_object, v10);
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
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4C001AD & 1) == 0 )
  {
    sub_1C2E12C(&BattleCommandComponent__WaitForErrorViewFinished_d__244_TypeInfo, busyVoiceSe);
    byte_4C001AD = 1;
  }
  v7 = sub_1C2E378(BattleCommandComponent__WaitForErrorViewFinished_d__244_TypeInfo);
  BattleCommandComponent__WaitForErrorViewFinished_d__244___ctor(
    (BattleCommandComponent__WaitForErrorViewFinished_d__244_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_1C2E388(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(float *)(v7 + 32) = waitSeconds;
  *(_QWORD *)(v7 + 48) = busyVoiceSe;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)busyVoiceSe, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BattleCommandComponent__addCriticalBuff(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Action_o *v24; // x20
  BattleCommandComponent_o *v25; // x0
  const MethodInfo *v26; // x2
  System_Collections_IEnumerator_o *v27; // x0
  System_String_o *CommonSeNameLocal; // x20
  System_String_o *CueSheet; // x21
  float DefaultPreDelayTime; // s0
  BattleCommandComponent_o *v31; // x0
  const MethodInfo *v32; // x1
  System_Collections_IEnumerator_o *v33; // x1

  if ( (byte_4C00176 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, obj);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_SeManager__get_Instance__, v6);
    sub_1C2E12C(&Method_BattleCommandComponent___c__DisplayClass160_0__addCriticalBuff_b__0__, v7);
    sub_1C2E12C(&BattleCommandComponent___c__DisplayClass160_0_TypeInfo, v8);
    byte_4C00176 = 1;
  }
  v9 = sub_1C2E378(BattleCommandComponent___c__DisplayClass160_0_TypeInfo);
  BattleCommandComponent___c__DisplayClass160_0___ctor((BattleCommandComponent___c__DisplayClass160_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = obj;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)obj, v18, v19, v20, v21, v22, v23);
  v24 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v9,
    Method_BattleCommandComponent___c__DisplayClass160_0__addCriticalBuff_b__0__,
    0LL);
  v27 = BattleCommandComponent__delayFrame(v25, v24, v26);
  UnityEngine_MonoBehaviour__StartCoroutine_70974992((UnityEngine_MonoBehaviour_o *)this, v27, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance
    || (CommonSeNameLocal = SeManager__GetCommonSeNameLocal((SeManager_o *)Instance, 7, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__)) == 0LL)
    || (CueSheet = SoundManager__GetCueSheet((SoundManager_o *)Instance, CommonSeNameLocal, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__)) == 0LL) )
  {
LABEL_8:
    sub_1C2E388(Instance, v11);
  }
  DefaultPreDelayTime = SeManager__GetDefaultPreDelayTime((SeManager_o *)Instance, CueSheet, CommonSeNameLocal, 0LL);
  v33 = BattleCommandComponent__PlayStarSe(v31, DefaultPreDelayTime / 1000.0, v32);
  UnityEngine_MonoBehaviour__StartCoroutine_70974992((UnityEngine_MonoBehaviour_o *)this, v33, 0LL);
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
    sub_1C2E388(Object, v7);
  if ( effectobj->max_length <= 4 )
    sub_1C2E390(Object, v7);
  effectobj->m_Items[4] = Object;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&effectobj->m_Items[4], (int64_t)Object, v8, v9, v10, v11, v12, v13);
}


void __fastcall BattleCommandComponent__addObject(
        BattleCommandComponent_o *this,
        System_String_o *name,
        int32_t type,
        const MethodInfo *method)
{
  BattleCommandComponent_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  struct UnityEngine_GameObject_array *addObjectList; // x8
  UnityEngine_Object_o *v10; // x22
  struct UnityEngine_GameObject_array *v11; // x8
  UnityEngine_Object_o *v12; // x22
  System_String_o *v13; // x0
  UnityEngine_Object_o *v14; // x21
  BattleCommandComponent_o *v15; // x22
  System_String_o *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct UnityEngine_GameObject_array *v23; // x8
  Il2CppClass **v24; // x0
  struct UnityEngine_GameObject_array *v25; // x8
  System_Enum_o v26; // [xsp+8h] [xbp-58h] BYREF
  int32_t v27; // [xsp+18h] [xbp-48h]

  v6 = this;
  if ( (byte_4C00166 & 1) == 0 )
  {
    sub_1C2E12C(&BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo, name);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    this = (BattleCommandComponent_o *)sub_1C2E12C(&StringLiteral_19204/*"effect/"*/, v8);
    byte_4C00166 = 1;
  }
  addObjectList = v6->fields.addObjectList;
  if ( !addObjectList )
    goto LABEL_23;
  if ( addObjectList->max_length <= type )
    goto LABEL_24;
  v10 = (UnityEngine_Object_o *)addObjectList->m_Items[type];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v11 = v6->fields.addObjectList;
    if ( !v11 )
      goto LABEL_23;
    if ( v11->max_length <= type )
      goto LABEL_24;
    v12 = (UnityEngine_Object_o *)v11->m_Items[type];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70989720(v12, 0LL);
  }
  v13 = System_String__Concat_63235584((System_String_o *)StringLiteral_19204/*"effect/"*/, name, 0LL);
  this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject_39556320(
                                       (BaseMonoBehaviour_o *)v6,
                                       v13,
                                       v6->fields.objectRoot,
                                       0LL,
                                       0LL);
  if ( !this )
    goto LABEL_23;
  v14 = (UnityEngine_Object_o *)this;
  this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v15 = this;
  if ( !byte_4BF7D97 )
  {
    this = (BattleCommandComponent_o *)sub_1C2E12C(&UnityEngine_Quaternion_TypeInfo, name);
    byte_4BF7D97 = 1;
  }
  if ( !v15
    || (UnityEngine_Transform__set_localRotation(
          (UnityEngine_Transform_o *)v15,
          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
          0LL),
        v26.klass = (System_Enum_c *)BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo,
        v26.monitor = (void *)-1LL,
        v27 = type,
        v16 = System_Enum__ToString(&v26, 0LL),
        UnityEngine_Object__set_name(v14, v16, 0LL),
        (v23 = v6->fields.addObjectList) == 0LL) )
  {
LABEL_23:
    sub_1C2E388(this, name);
  }
  if ( v23->max_length <= type )
    goto LABEL_24;
  v24 = &v23->obj.klass + type;
  v24[4] = (Il2CppClass *)v14;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v24 + 4), (int64_t)v14, v17, v18, v19, v20, v21, v22);
  v25 = v6->fields.addObjectList;
  if ( !v25 )
    goto LABEL_23;
  if ( v25->max_length <= type )
LABEL_24:
    sub_1C2E390(this, name);
  this = (BattleCommandComponent_o *)v25->m_Items[type];
  if ( !this )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall BattleCommandComponent__attachEffect(
        BattleCommandComponent_o *this,
        System_String_o *name,
        int32_t index,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  UnityEngine_GameObject_o *Object_39556320; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x21
  UnityEngine_Transform_o *v11; // x22
  UnityEngine_Transform_o *v12; // x22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct UnityEngine_GameObject_array *effectobj; // x8
  int32_t max_length; // w9
  Il2CppClass **v21; // x0

  if ( (byte_4C0017A & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_19204/*"effect/"*/, name);
    byte_4C0017A = 1;
  }
  v7 = System_String__Concat_63235584((System_String_o *)StringLiteral_19204/*"effect/"*/, name, 0LL);
  Object_39556320 = BaseMonoBehaviour__createObject_39556320(
                      (BaseMonoBehaviour_o *)this,
                      v7,
                      this->fields.objectRoot,
                      0LL,
                      0LL);
  if ( !Object_39556320 )
    goto LABEL_16;
  v10 = Object_39556320;
  Object_39556320 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Object_39556320, 0LL);
  v11 = (UnityEngine_Transform_o *)Object_39556320;
  if ( !byte_4BF7D91 )
  {
    Object_39556320 = (UnityEngine_GameObject_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v9);
    byte_4BF7D91 = 1;
  }
  if ( !v11 )
    goto LABEL_16;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Object_39556320 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  v12 = (UnityEngine_Transform_o *)Object_39556320;
  if ( !byte_4BF7D96 )
  {
    Object_39556320 = (UnityEngine_GameObject_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v9);
    byte_4BF7D96 = 1;
  }
  if ( !v12
    || (UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (effectobj = this->fields.effectobj) == 0LL) )
  {
LABEL_16:
    sub_1C2E388(Object_39556320, v9);
  }
  max_length = effectobj->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
      sub_1C2E390(Object_39556320, v9);
    v21 = &effectobj->obj.klass + index;
    v21[4] = (Il2CppClass *)v10;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v21 + 4), (int64_t)v10, v13, v14, v15, v16, v17, v18);
  }
}


bool __fastcall BattleCommandComponent__checkCriticalPointValid(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *criticalObject; // x0

  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    sub_1C2E388(0LL, method);
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
  sub_1C2E0D0(
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
    sub_1C2E388(transform, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  this->fields.isCountUp = 0;
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4C001A6 & 1) == 0 )
  {
    sub_1C2E12C(&BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_TypeInfo, method);
    byte_4C001A6 = 1;
  }
  v3 = sub_1C2E378(BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_TypeInfo);
  BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233___ctor(
    (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1C2E388(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__delayFrame(
        BattleCommandComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4C00178 & 1) == 0 )
  {
    sub_1C2E12C(&BattleCommandComponent__delayFrame_d__162_TypeInfo, action);
    byte_4C00178 = 1;
  }
  v4 = sub_1C2E378(BattleCommandComponent__delayFrame_d__162_TypeInfo);
  BattleCommandComponent__delayFrame_d__162___ctor((BattleCommandComponent__delayFrame_d__162_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_1C2E388(v5, v6);
  *(_QWORD *)(v4 + 32) = action;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v4 + 32), (int64_t)action, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall BattleCommandComponent__endFashTypeCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  UnityEngine_Object_o *v6; // x19

  v2 = this;
  if ( (byte_4C0018C & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C0018C = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_14;
  if ( !effectobj->max_length )
    goto LABEL_15;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( v5 )
    {
      if ( v5->max_length )
      {
        v6 = (UnityEngine_Object_o *)v5->m_Items[0];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70989720(v6, 0LL);
        return;
      }
LABEL_15:
      sub_1C2E390(this, method);
    }
LABEL_14:
    sub_1C2E388(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__fadeoutEffect(
        BattleCommandComponent_o *this,
        bool isTresure,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4C0017C & 1) == 0 )
  {
    sub_1C2E12C(&BattleCommandComponent__fadeoutEffect_d__182_TypeInfo, isTresure);
    byte_4C0017C = 1;
  }
  v5 = sub_1C2E378(BattleCommandComponent__fadeoutEffect_d__182_TypeInfo);
  BattleCommandComponent__fadeoutEffect_d__182___ctor((BattleCommandComponent__fadeoutEffect_d__182_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1C2E388(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 40) = isTresure;
  return (System_Collections_IEnumerator_o *)v5;
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
    sub_1C2E388(this, index);
  if ( sameflg->max_length <= index )
    sub_1C2E390(this, *(_QWORD *)&index);
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
    sub_1C2E388(this, index);
  if ( combo->fields.flash )
    BattleCommandComponent__flashTypeCard(this, *(const MethodInfo **)&index);
}


void __fastcall BattleCommandComponent__flashServant(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  UnityEngine_Object_o *facetex; // x20
  int64_t v16; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct UnityEngine_GameObject_array *effectobj; // x20
  UnityEngine_GameObject_o *v19; // x21
  UnityEngine_Transform_o *parent; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct UnityEngine_GameObject_array *v27; // x8
  UIWidget_o *v28; // x20
  UnityEngine_Shader_o *v29; // x21
  UnityEngine_Material_o *v30; // x22
  struct UnityEngine_GameObject_array *v31; // x8
  UnityEngine_GameObject_o *v32; // x20
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Object_array *v39; // x21
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
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
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x22
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int64_t v78; // x22
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  System_Collections_Hashtable_o *v91; // x0
  struct UnityEngine_GameObject_array *v92; // x8
  __int64 v93; // x0
  __int64 v94; // [xsp+0h] [xbp-40h] BYREF
  int v95; // [xsp+8h] [xbp-38h]
  int v96; // [xsp+1Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v99; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4C00189 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___, method);
    sub_1C2E12C(&UnityEngine_Material_TypeInfo, v3);
    sub_1C2E12C(&object___TypeInfo, v4);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    sub_1C2E12C(&float_TypeInfo, v6);
    sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v7);
    sub_1C2E12C(&StringLiteral_24383/*"time"*/, v8);
    sub_1C2E12C(&StringLiteral_22694/*"oncompletetarget"*/, v9);
    sub_1C2E12C(&StringLiteral_19339/*"endFashSvt"*/, v10);
    sub_1C2E12C(&StringLiteral_22692/*"oncomplete"*/, v11);
    sub_1C2E12C(&StringLiteral_16422/*"_AddColor"*/, v12);
    sub_1C2E12C(&StringLiteral_23456/*"scale"*/, v13);
    sub_1C2E12C(&iTween_TypeInfo, v14);
    byte_4C00189 = 1;
  }
  BattleCommandComponent__DestroyEffectObject1(this, method);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(facetex, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !gameObject )
      goto LABEL_62;
    effectobj = this->fields.effectobj;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !this->fields.nomalwidget )
      goto LABEL_62;
    v19 = (UnityEngine_GameObject_o *)gameObject;
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
                                              v19,
                                              parent,
                                              0LL,
                                              0LL);
    if ( !effectobj )
      goto LABEL_62;
    if ( effectobj->max_length <= 1 )
      goto LABEL_63;
    effectobj->m_Items[1] = (UnityEngine_GameObject_o *)gameObject;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&effectobj->m_Items[1], (int64_t)gameObject, v21, v22, v23, v24, v25, v26);
    v27 = this->fields.effectobj;
    if ( !v27 )
      goto LABEL_62;
    if ( v27->max_length <= 1 )
      goto LABEL_63;
    gameObject = (UnityEngine_Component_o *)v27->m_Items[1];
    if ( !gameObject )
      goto LABEL_62;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              (const MethodInfo_3022D70 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
    if ( !gameObject )
      goto LABEL_62;
    v28 = (UIWidget_o *)gameObject;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_62;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              0LL);
    if ( !gameObject )
      goto LABEL_62;
    v97.fields.x = 0.0;
    v97.fields.y = 0.0;
    v97.fields.z = -5.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v97, 0LL);
    this->fields.newMatriarl = 1;
    v29 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))v28->klass->vtable._28_get_shader.method)(
                                    v28,
                                    v28->klass->vtable._29_set_shader.methodPtr);
    v30 = (UnityEngine_Material_o *)sub_1C2E378(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v30, v29, 0LL);
    ((void (__fastcall *)(UIWidget_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v28->klass->vtable._25_set_material.method)(
      v28,
      v30,
      v28->klass->vtable._26_get_mainTexture.methodPtr);
    gameObject = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))v28->klass->vtable._24_get_material.method)(
                                              v28,
                                              v28->klass->vtable._25_set_material.methodPtr);
    if ( !gameObject )
      goto LABEL_62;
    v98.fields.r = 1.0;
    v98.fields.g = 1.0;
    v98.fields.b = 1.0;
    v98.fields.a = 0.0;
    UnityEngine_Material__SetColor(
      (UnityEngine_Material_o *)gameObject,
      (System_String_o *)StringLiteral_16422/*"_AddColor"*/,
      v98,
      0LL);
    UIWidget__set_depth(v28, this->fields.basedepth + 400, 0LL);
    v31 = this->fields.effectobj;
    if ( !v31 )
      goto LABEL_62;
    if ( v31->max_length <= 1 )
      goto LABEL_63;
    v32 = v31->m_Items[1];
    gameObject = (UnityEngine_Component_o *)sub_1C2E1D4(object___TypeInfo, 8LL);
    if ( !gameObject )
      goto LABEL_62;
    v39 = (System_Object_array *)gameObject;
    gameObject = (UnityEngine_Component_o *)StringLiteral_23456/*"scale"*/;
    if ( StringLiteral_23456/*"scale"*/ )
    {
      gameObject = (UnityEngine_Component_o *)sub_1C2E268(StringLiteral_23456/*"scale"*/, v39->obj.klass->_1.element_class);
      if ( !gameObject )
        goto LABEL_64;
      v16 = StringLiteral_23456/*"scale"*/;
    }
    else
    {
      v16 = 0LL;
    }
    if ( !v39->max_length )
      goto LABEL_63;
    v39->m_Items[0] = (Il2CppObject *)v16;
    sub_1C2E0D0((PartyOrganizationUtility_o *)v39->m_Items, v16, v33, v34, v35, v36, v37, v38);
    v94 = vdup_n_s32(0x3FE66666u).n64_i64[0];
    v95 = 1065353216;
    gameObject = (UnityEngine_Component_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v94, v40, v41, v42);
    v49 = (int64_t)gameObject;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)sub_1C2E268(gameObject, v39->obj.klass->_1.element_class)) != 0LL )
    {
      if ( v39->max_length <= 1 )
        goto LABEL_63;
      v39->m_Items[1] = (Il2CppObject *)v49;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v39->m_Items[1], v49, v43, v44, v45, v46, v47, v48);
      gameObject = (UnityEngine_Component_o *)StringLiteral_24383/*"time"*/;
      if ( StringLiteral_24383/*"time"*/ )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C2E268(StringLiteral_24383/*"time"*/, v39->obj.klass->_1.element_class);
        if ( !gameObject )
          goto LABEL_64;
        v16 = StringLiteral_24383/*"time"*/;
      }
      else
      {
        v16 = 0LL;
      }
      if ( v39->max_length <= 2 )
        goto LABEL_63;
      v39->m_Items[2] = (Il2CppObject *)v16;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v39->m_Items[2], v16, v50, v51, v52, v53, v54, v55);
      v96 = 1065353216;
      gameObject = (UnityEngine_Component_o *)j_il2cpp_value_box_0(float_TypeInfo, &v96, v56, v57, v58);
      v65 = (int64_t)gameObject;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)sub_1C2E268(gameObject, v39->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v39->max_length <= 3 )
          goto LABEL_63;
        v39->m_Items[3] = (Il2CppObject *)v65;
        sub_1C2E0D0((PartyOrganizationUtility_o *)&v39->m_Items[3], v65, v59, v60, v61, v62, v63, v64);
        gameObject = (UnityEngine_Component_o *)StringLiteral_22694/*"oncompletetarget"*/;
        if ( StringLiteral_22694/*"oncompletetarget"*/ )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C2E268(StringLiteral_22694/*"oncompletetarget"*/, v39->obj.klass->_1.element_class);
          if ( !gameObject )
            goto LABEL_64;
          v16 = StringLiteral_22694/*"oncompletetarget"*/;
        }
        else
        {
          v16 = 0LL;
        }
        if ( v39->max_length <= 4 )
          goto LABEL_63;
        v39->m_Items[4] = (Il2CppObject *)v16;
        sub_1C2E0D0((PartyOrganizationUtility_o *)&v39->m_Items[4], v16, v66, v67, v68, v69, v70, v71);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
        v78 = (int64_t)gameObject;
        if ( !gameObject
          || (gameObject = (UnityEngine_Component_o *)sub_1C2E268(gameObject, v39->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v39->max_length <= 5 )
            goto LABEL_63;
          v39->m_Items[5] = (Il2CppObject *)v78;
          sub_1C2E0D0((PartyOrganizationUtility_o *)&v39->m_Items[5], v78, v72, v73, v74, v75, v76, v77);
          gameObject = (UnityEngine_Component_o *)StringLiteral_22692/*"oncomplete"*/;
          if ( StringLiteral_22692/*"oncomplete"*/ )
          {
            gameObject = (UnityEngine_Component_o *)sub_1C2E268(StringLiteral_22692/*"oncomplete"*/, v39->obj.klass->_1.element_class);
            if ( !gameObject )
              goto LABEL_64;
            v16 = StringLiteral_22692/*"oncomplete"*/;
          }
          else
          {
            v16 = 0LL;
          }
          if ( v39->max_length <= 6 )
            goto LABEL_63;
          v39->m_Items[6] = (Il2CppObject *)v16;
          sub_1C2E0D0((PartyOrganizationUtility_o *)&v39->m_Items[6], v16, v79, v80, v81, v82, v83, v84);
          gameObject = (UnityEngine_Component_o *)StringLiteral_19339/*"endFashSvt"*/;
          if ( !StringLiteral_19339/*"endFashSvt"*/ )
          {
            v16 = 0LL;
            goto LABEL_55;
          }
          gameObject = (UnityEngine_Component_o *)sub_1C2E268(StringLiteral_19339/*"endFashSvt"*/, v39->obj.klass->_1.element_class);
          if ( gameObject )
          {
            v16 = StringLiteral_19339/*"endFashSvt"*/;
LABEL_55:
            if ( v39->max_length <= 7 )
              goto LABEL_63;
            v39->m_Items[7] = (Il2CppObject *)v16;
            sub_1C2E0D0((PartyOrganizationUtility_o *)&v39->m_Items[7], v16, v85, v86, v87, v88, v89, v90);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v91 = iTween__Hash(v39, 0LL);
            iTween__ScaleTo_61778700(v32, v91, 0LL);
            v92 = this->fields.effectobj;
            if ( v92 )
            {
              if ( v92->max_length > 1 )
              {
                v99.fields.r = 0.0;
                v99.fields.g = 0.0;
                v99.fields.b = 0.0;
                v99.fields.a = 0.0;
                TweenColor__Begin(v92->m_Items[1], 1.0, v99, 0LL);
                return;
              }
LABEL_63:
              sub_1C2E390(gameObject, v16);
            }
LABEL_62:
            sub_1C2E388(gameObject, v16);
          }
        }
      }
    }
LABEL_64:
    v93 = sub_1C2E3AC(gameObject);
    sub_1C2E254(v93, 0LL);
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
    UnityEngine_MonoBehaviour__StartCoroutine_70974992((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
  }
}


void __fastcall BattleCommandComponent__flashTypeCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v14; // x20
  struct UnityEngine_GameObject_array *v15; // x8
  UnityEngine_Object_o *v16; // x20
  struct UnityEngine_GameObject_array *v17; // x20
  BattleCommandComponent_o *v18; // x21
  BattleCommandComponent_o *v19; // x22
  UnityEngine_Transform_o *transform; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct UnityEngine_GameObject_array *v27; // x8
  Il2CppObject *ComponentInChildren_object; // x20
  struct UnityEngine_GameObject_array *v29; // x8
  struct UnityEngine_GameObject_array *v30; // x8
  UnityEngine_GameObject_o *v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  BattleCommandComponent_o *v38; // x21
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  BattleCommandComponent_o *v48; // x22
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  BattleCommandComponent_o *v64; // x22
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  BattleCommandComponent_o *v77; // x19
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  System_Collections_Hashtable_o *v90; // x0
  __int64 v91; // x0
  int v92; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v93; // [xsp+10h] [xbp-40h] BYREF
  int v94; // [xsp+18h] [xbp-38h]
  UnityEngine_Color_o v95; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v2 = this;
  if ( (byte_4C0018B & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, method);
    sub_1C2E12C(&object___TypeInfo, v3);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    sub_1C2E12C(&float_TypeInfo, v5);
    sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_19340/*"endFashTypeCard"*/, v7);
    sub_1C2E12C(&StringLiteral_24383/*"time"*/, v8);
    sub_1C2E12C(&StringLiteral_22694/*"oncompletetarget"*/, v9);
    sub_1C2E12C(&StringLiteral_22692/*"oncomplete"*/, v10);
    sub_1C2E12C(&StringLiteral_23456/*"scale"*/, v11);
    this = (BattleCommandComponent_o *)sub_1C2E12C(&iTween_TypeInfo, v12);
    byte_4C0018B = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_71;
  if ( !effectobj->max_length )
    goto LABEL_72;
  v14 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v15 = v2->fields.effectobj;
    if ( !v15 )
      goto LABEL_71;
    if ( !v15->max_length )
      goto LABEL_72;
    v16 = (UnityEngine_Object_o *)v15->m_Items[0];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70989720(v16, 0LL);
  }
  this = (BattleCommandComponent_o *)v2->fields.icon;
  if ( !this )
    goto LABEL_71;
  v17 = v2->fields.effectobj;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v2->fields.nomalwidget )
    goto LABEL_71;
  v18 = this;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)v2->fields.nomalwidget,
                                       0LL);
  if ( !this )
    goto LABEL_71;
  this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_71;
  this = (BattleCommandComponent_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !v2->fields.icon )
    goto LABEL_71;
  v19 = this;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)v2->fields.icon,
                                       0LL);
  if ( !this )
    goto LABEL_71;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject(
                                       (BaseMonoBehaviour_o *)v2,
                                       (UnityEngine_GameObject_o *)v18,
                                       (UnityEngine_Transform_o *)v19,
                                       transform,
                                       0LL);
  if ( !v17 )
    goto LABEL_71;
  if ( !v17->max_length )
    goto LABEL_72;
  v17->m_Items[0] = (UnityEngine_GameObject_o *)this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)v17->m_Items, (int64_t)this, v21, v22, v23, v24, v25, v26);
  v27 = v2->fields.effectobj;
  if ( !v27 )
    goto LABEL_71;
  if ( !v27->max_length )
    goto LABEL_72;
  this = (BattleCommandComponent_o *)v27->m_Items[0];
  if ( !this )
    goto LABEL_71;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_3022D70 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)ComponentInChildren_object,
                                       0LL,
                                       0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !ComponentInChildren_object )
      goto LABEL_71;
    UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, v2->fields.basedepth + 400, 0LL);
    v29 = v2->fields.effectobj;
    if ( !v29 )
      goto LABEL_71;
    if ( !v29->max_length )
      goto LABEL_72;
    v95.fields.r = 0.0;
    v95.fields.g = 0.0;
    v95.fields.b = 0.0;
    v95.fields.a = 0.0;
    this = (BattleCommandComponent_o *)TweenColor__Begin(v29->m_Items[0], 1.0, v95, 0LL);
  }
  v30 = v2->fields.effectobj;
  if ( !v30 )
    goto LABEL_71;
  if ( !v30->max_length )
    goto LABEL_72;
  v31 = v30->m_Items[0];
  this = (BattleCommandComponent_o *)sub_1C2E1D4(object___TypeInfo, 8LL);
  if ( !this )
LABEL_71:
    sub_1C2E388(this, method);
  v38 = this;
  this = (BattleCommandComponent_o *)StringLiteral_23456/*"scale"*/;
  if ( StringLiteral_23456/*"scale"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1C2E268(StringLiteral_23456/*"scale"*/, v38->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
    method = (const MethodInfo *)StringLiteral_23456/*"scale"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( !LODWORD(v38->fields.m_CancellationTokenSource) )
    goto LABEL_72;
  v38->fields.objectRoot = (struct UnityEngine_Transform_o *)method;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v38->fields.objectRoot, (int64_t)method, v32, v33, v34, v35, v36, v37);
  v93 = 0x4000000040000000LL;
  v94 = 1065353216;
  this = (BattleCommandComponent_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v93, v39, v40, v41);
  v48 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_1C2E268(this, v38->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
  }
  if ( LODWORD(v38->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_72;
  v38->fields.bg = (struct UISprite_o *)v48;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v38->fields.bg, (int64_t)v48, v42, v43, v44, v45, v46, v47);
  this = (BattleCommandComponent_o *)StringLiteral_24383/*"time"*/;
  if ( StringLiteral_24383/*"time"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1C2E268(StringLiteral_24383/*"time"*/, v38->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
    method = (const MethodInfo *)StringLiteral_24383/*"time"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v38->fields.m_CancellationTokenSource) <= 2 )
    goto LABEL_72;
  v38->fields.icon = (struct UISprite_o *)method;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v38->fields.icon, (int64_t)method, v49, v50, v51, v52, v53, v54);
  v92 = 1065353216;
  this = (BattleCommandComponent_o *)j_il2cpp_value_box_0(float_TypeInfo, &v92, v55, v56, v57);
  v64 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_1C2E268(this, v38->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
  }
  if ( LODWORD(v38->fields.m_CancellationTokenSource) <= 3 )
    goto LABEL_72;
  v38->fields.text = (struct UISprite_o *)v64;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v38->fields.text, (int64_t)v64, v58, v59, v60, v61, v62, v63);
  this = (BattleCommandComponent_o *)StringLiteral_22694/*"oncompletetarget"*/;
  if ( StringLiteral_22694/*"oncompletetarget"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1C2E268(StringLiteral_22694/*"oncompletetarget"*/, v38->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
    method = (const MethodInfo *)StringLiteral_22694/*"oncompletetarget"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v38->fields.m_CancellationTokenSource) <= 4 )
    goto LABEL_72;
  v38->fields.facetex = (struct UITexture_o *)method;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v38->fields.facetex, (int64_t)method, v65, v66, v67, v68, v69, v70);
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
  v77 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_1C2E268(this, v38->klass->_1.element_class);
    if ( !this )
    {
LABEL_73:
      v91 = sub_1C2E3AC(this);
      sub_1C2E254(v91, 0LL);
    }
  }
  if ( LODWORD(v38->fields.m_CancellationTokenSource) <= 5 )
    goto LABEL_72;
  v38->fields.nobletex = (struct UITexture_o *)v77;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v38->fields.nobletex, (int64_t)v77, v71, v72, v73, v74, v75, v76);
  this = (BattleCommandComponent_o *)StringLiteral_22692/*"oncomplete"*/;
  if ( StringLiteral_22692/*"oncomplete"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1C2E268(StringLiteral_22692/*"oncomplete"*/, v38->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
    method = (const MethodInfo *)StringLiteral_22692/*"oncomplete"*/;
  }
  else
  {
    method = 0LL;
  }
  if ( LODWORD(v38->fields.m_CancellationTokenSource) <= 6 )
    goto LABEL_72;
  v38->fields.friendIcon = (struct UISprite_o *)method;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v38->fields.friendIcon, (int64_t)method, v78, v79, v80, v81, v82, v83);
  this = (BattleCommandComponent_o *)StringLiteral_19340/*"endFashTypeCard"*/;
  if ( StringLiteral_19340/*"endFashTypeCard"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1C2E268(StringLiteral_19340/*"endFashTypeCard"*/, v38->klass->_1.element_class);
    if ( this )
    {
      method = (const MethodInfo *)StringLiteral_19340/*"endFashTypeCard"*/;
      goto LABEL_67;
    }
    goto LABEL_73;
  }
  method = 0LL;
LABEL_67:
  if ( LODWORD(v38->fields.m_CancellationTokenSource) <= 7 )
LABEL_72:
    sub_1C2E390(this, method);
  v38->fields.sealedSprite = (struct UISprite_o *)method;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v38->fields.sealedSprite, (int64_t)method, v84, v85, v86, v87, v88, v89);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v90 = iTween__Hash((System_Object_array *)v38, 0LL);
  iTween__ScaleTo_61778700(v31, v90, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleCommandComponent__getCardTypeSealSpriteName(
        BattleCommandComponent_o *this,
        int32_t commandType,
        const MethodInfo *method)
{
  __int64 v4; // x1
  BattleCommandComponent_c *v5; // x0
  System_String_o **p_SEALED_CARDTYPE_ICON_QUICK; // x8
  BattleCommandComponent_c *v7; // x0
  BattleCommandComponent_c *v8; // x0

  if ( (byte_4C00169 & 1) == 0 )
  {
    sub_1C2E12C(&BattleCommandComponent_TypeInfo, *(_QWORD *)&commandType);
    sub_1C2E12C(&StringLiteral_1/*""*/, v4);
    byte_4C00169 = 1;
  }
  switch ( commandType )
  {
    case 3:
      v7 = BattleCommandComponent_TypeInfo;
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v7 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v7->static_fields->SEALED_CARDTYPE_ICON_QUICK;
      break;
    case 2:
      v8 = BattleCommandComponent_TypeInfo;
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v8 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v8->static_fields->SEALED_CARDTYPE_ICON_BUSTER;
      break;
    case 1:
      v5 = BattleCommandComponent_TypeInfo;
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v5 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v5->static_fields->SEALED_CARDTYPE_ICON_ARTS;
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
    sub_1C2E388(0LL, method);
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
  UnityEngine_Object_o *powerUpCardIcon; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UISprite_o *v6; // x8

  if ( (byte_4C00160 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C00160 = 1;
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(powerUpCardIcon, 0LL, 0LL);
  if ( !v4 )
    return -1;
  v6 = this->fields.powerUpCardIcon;
  if ( !v6 )
    sub_1C2E388(v4, v5);
  return v6->fields.mDepth;
}


int32_t __fastcall BattleCommandComponent__getSvtId(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C2E388(this, method);
  return data->fields.svtId;
}


int32_t __fastcall BattleCommandComponent__getSvtLimitCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C2E388(this, method);
  return data->fields.svtlimit;
}


int32_t __fastcall BattleCommandComponent__getUniqueID(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C2E388(this, method);
  return data->fields.uniqueId;
}


BattleCommandSealStatus_o *__fastcall BattleCommandComponent__get_SealStatus(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  BattleCommandSealStatus_o *result; // x0
  PartyOrganizationUtility_o *p_sealStatus; // x19
  BattleCommandSealStatus_o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4C00159 & 1) == 0 )
  {
    sub_1C2E12C(&BattleCommandSealStatus_TypeInfo, method);
    byte_4C00159 = 1;
  }
  result = this->fields.sealStatus;
  if ( !result )
  {
    p_sealStatus = (PartyOrganizationUtility_o *)&this->fields.sealStatus;
    v5 = (BattleCommandSealStatus_o *)sub_1C2E378(BattleCommandSealStatus_TypeInfo);
    BattleCommandSealStatus___ctor(v5, 0LL);
    p_sealStatus->klass = (PartyOrganizationUtility_c *)v5;
    sub_1C2E0D0(p_sealStatus, (int64_t)v5, v6, v7, v8, v9, v10, v11);
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
    sub_1C2E388(0LL, v3);
  return BattleCommandSealStatus__get_HasKindOfDontAction(SealStatus, 0LL);
}


bool __fastcall BattleCommandComponent__get_isSealed(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v3; // x1

  SealStatus = BattleCommandComponent__get_SealStatus(this, method);
  if ( !SealStatus )
    sub_1C2E388(0LL, v3);
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
  struct UIWidget_o *nomalwidget; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  struct UnityEngine_GameObject_array *addObjectList; // x8
  __int64 v7; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v9; // x23
  UnityEngine_Object_o *v10; // x20
  struct UnityEngine_GameObject_array *v11; // x8

  if ( (byte_4C0017D & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C0017D = 1;
  }
  nomalwidget = this->fields.nomalwidget;
  if ( !nomalwidget
    || (((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))nomalwidget->klass->vtable._8_set_alpha.method)(
          nomalwidget,
          nomalwidget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          0.0),
        BattleCommandComponent__DestroyEffectObject1(this, v4),
        (addObjectList = this->fields.addObjectList) == 0LL) )
  {
LABEL_16:
    sub_1C2E388(nomalwidget, method);
  }
  v7 = 4LL;
  while ( 1 )
  {
    max_length = addObjectList->max_length;
    v9 = v7 - 4;
    if ( v7 - 4 >= (int)max_length )
      break;
    if ( v9 >= max_length )
      goto LABEL_18;
    v10 = (UnityEngine_Object_o *)*((_QWORD *)&addObjectList->obj.klass + v7);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    nomalwidget = (struct UIWidget_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
    if ( ((unsigned __int8)nomalwidget & 1) != 0 )
    {
      v11 = this->fields.addObjectList;
      if ( !v11 )
        goto LABEL_16;
      if ( v9 >= v11->max_length )
LABEL_18:
        sub_1C2E390(nomalwidget, method);
      nomalwidget = (struct UIWidget_o *)*((_QWORD *)&v11->obj.klass + v7);
      if ( !nomalwidget )
        goto LABEL_16;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nomalwidget, 0, 0LL);
    }
    addObjectList = this->fields.addObjectList;
    ++v7;
    if ( !addObjectList )
      goto LABEL_16;
  }
  BattleCommandComponent__CardEffectSetActive(this, 0, v5);
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
    sub_1C2E388(this, method);
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
    UnityEngine_MonoBehaviour__StartCoroutine_70974992((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
    UnityEngine_MonoBehaviour__StartCoroutine_70974992((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


void __fastcall BattleCommandComponent__playNpAttackEffect(
        BattleCommandComponent_o *this,
        float ftime,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Object_array *v20; // x21
  void *v21; // x0
  Il2CppObject *v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x22
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x22
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x22
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x22
  System_Collections_Hashtable_o *v81; // x0
  UnityEngine_GameObject_o *v82; // x20
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  System_Object_array *v89; // x21
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int64_t v99; // x22
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x4
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  int64_t v115; // x22
  System_Collections_Hashtable_o *v116; // x0
  const MethodInfo *v117; // x2
  System_Collections_IEnumerator_o *v118; // x0
  __int64 v119; // x0
  float v120; // [xsp+0h] [xbp-70h] BYREF
  int v121; // [xsp+4h] [xbp-6Ch] BYREF
  float v122; // [xsp+8h] [xbp-68h] BYREF
  int v123; // [xsp+Ch] [xbp-64h] BYREF
  int v124; // [xsp+18h] [xbp-58h] BYREF
  int v125; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4C0017B & 1) == 0 )
  {
    sub_1C2E12C(&object___TypeInfo, method);
    sub_1C2E12C(&float_TypeInfo, v5);
    sub_1C2E12C(&StringLiteral_25211/*"x"*/, v6);
    sub_1C2E12C(&StringLiteral_24383/*"time"*/, v7);
    sub_1C2E12C(&StringLiteral_25315/*"y"*/, v8);
    sub_1C2E12C(&StringLiteral_25364/*"z"*/, v9);
    sub_1C2E12C(&iTween_TypeInfo, v10);
    byte_4C0017B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12 = sub_1C2E1D4(object___TypeInfo, 8LL);
  if ( !v12 )
    goto LABEL_58;
  v20 = (System_Object_array *)v12;
  v21 = StringLiteral_25211/*"x"*/;
  if ( StringLiteral_25211/*"x"*/ )
  {
    v21 = (void *)sub_1C2E268(StringLiteral_25211/*"x"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_57;
    v22 = (Il2CppObject *)StringLiteral_25211/*"x"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v20->max_length )
    goto LABEL_56;
  v20->m_Items[0] = v22;
  sub_1C2E0D0((PartyOrganizationUtility_o *)v20->m_Items, (int64_t)v22, v14, v15, v16, v17, v18, v19);
  v125 = 0x40000000;
  v21 = (void *)j_il2cpp_value_box_0(float_TypeInfo, &v125, v23, v24, v25);
  v32 = (int64_t)v21;
  if ( v21 )
  {
    v21 = (void *)sub_1C2E268(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_57;
  }
  if ( v20->max_length <= 1 )
    goto LABEL_56;
  v20->m_Items[1] = (Il2CppObject *)v32;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v20->m_Items[1], v32, v26, v27, v28, v29, v30, v31);
  v21 = (void *)StringLiteral_25315/*"y"*/;
  if ( StringLiteral_25315/*"y"*/ )
  {
    v21 = (void *)sub_1C2E268(StringLiteral_25315/*"y"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_57;
    v22 = (Il2CppObject *)StringLiteral_25315/*"y"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 2 )
    goto LABEL_56;
  v20->m_Items[2] = v22;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v20->m_Items[2], (int64_t)v22, v33, v34, v35, v36, v37, v38);
  v124 = 0x40000000;
  v21 = (void *)j_il2cpp_value_box_0(float_TypeInfo, &v124, v39, v40, v41);
  v48 = (int64_t)v21;
  if ( v21 )
  {
    v21 = (void *)sub_1C2E268(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_57;
  }
  if ( v20->max_length <= 3 )
    goto LABEL_56;
  v20->m_Items[3] = (Il2CppObject *)v48;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v20->m_Items[3], v48, v42, v43, v44, v45, v46, v47);
  v21 = (void *)StringLiteral_25364/*"z"*/;
  if ( StringLiteral_25364/*"z"*/ )
  {
    v21 = (void *)sub_1C2E268(StringLiteral_25364/*"z"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_57;
    v22 = (Il2CppObject *)StringLiteral_25364/*"z"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 4 )
    goto LABEL_56;
  v20->m_Items[4] = v22;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v20->m_Items[4], (int64_t)v22, v49, v50, v51, v52, v53, v54);
  v123 = 1065353216;
  v21 = (void *)j_il2cpp_value_box_0(float_TypeInfo, &v123, v55, v56, v57);
  v64 = (int64_t)v21;
  if ( v21 )
  {
    v21 = (void *)sub_1C2E268(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_57;
  }
  if ( v20->max_length <= 5 )
    goto LABEL_56;
  v20->m_Items[5] = (Il2CppObject *)v64;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v20->m_Items[5], v64, v58, v59, v60, v61, v62, v63);
  v21 = (void *)StringLiteral_24383/*"time"*/;
  if ( StringLiteral_24383/*"time"*/ )
  {
    v21 = (void *)sub_1C2E268(StringLiteral_24383/*"time"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_57;
    v22 = (Il2CppObject *)StringLiteral_24383/*"time"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 6 )
    goto LABEL_56;
  v20->m_Items[6] = v22;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v20->m_Items[6], (int64_t)v22, v65, v66, v67, v68, v69, v70);
  v122 = ftime + 0.1;
  v21 = (void *)j_il2cpp_value_box_0(float_TypeInfo, &v122, v71, v72, v73);
  v80 = (int64_t)v21;
  if ( v21 )
  {
    v21 = (void *)sub_1C2E268(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_57;
  }
  if ( v20->max_length <= 7 )
    goto LABEL_56;
  v20->m_Items[7] = (Il2CppObject *)v80;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v20->m_Items[7], v80, v74, v75, v76, v77, v78, v79);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v81 = iTween__Hash(v20, 0LL);
  iTween__ScaleTo_61778700(gameObject, v81, 0LL);
  v82 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12 = sub_1C2E1D4(object___TypeInfo, 4LL);
  if ( !v12 )
LABEL_58:
    sub_1C2E388(v12, v13);
  v89 = (System_Object_array *)v12;
  v21 = (void *)StringLiteral_25364/*"z"*/;
  if ( StringLiteral_25364/*"z"*/ )
  {
    v21 = (void *)sub_1C2E268(StringLiteral_25364/*"z"*/, v89->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_57;
    v22 = (Il2CppObject *)StringLiteral_25364/*"z"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v89->max_length )
    goto LABEL_56;
  v89->m_Items[0] = v22;
  sub_1C2E0D0((PartyOrganizationUtility_o *)v89->m_Items, (int64_t)v22, v83, v84, v85, v86, v87, v88);
  v121 = 1144258560;
  v21 = (void *)j_il2cpp_value_box_0(float_TypeInfo, &v121, v90, v91, v92);
  v99 = (int64_t)v21;
  if ( v21 )
  {
    v21 = (void *)sub_1C2E268(v21, v89->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_57;
  }
  if ( v89->max_length <= 1 )
    goto LABEL_56;
  v89->m_Items[1] = (Il2CppObject *)v99;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v89->m_Items[1], v99, v93, v94, v95, v96, v97, v98);
  v21 = (void *)StringLiteral_24383/*"time"*/;
  if ( StringLiteral_24383/*"time"*/ )
  {
    v21 = (void *)sub_1C2E268(StringLiteral_24383/*"time"*/, v89->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_57;
    v22 = (Il2CppObject *)StringLiteral_24383/*"time"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v89->max_length <= 2 )
    goto LABEL_56;
  v89->m_Items[2] = v22;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v89->m_Items[2], (int64_t)v22, v100, v101, v102, v103, v104, v105);
  v120 = ftime;
  v21 = (void *)j_il2cpp_value_box_0(float_TypeInfo, &v120, v106, v107, v108);
  v115 = (int64_t)v21;
  if ( v21 )
  {
    v21 = (void *)sub_1C2E268(v21, v89->obj.klass->_1.element_class);
    if ( !v21 )
    {
LABEL_57:
      v119 = sub_1C2E3AC(v21);
      sub_1C2E254(v119, 0LL);
    }
  }
  if ( v89->max_length <= 3 )
LABEL_56:
    sub_1C2E390(v21, v22);
  v89->m_Items[3] = (Il2CppObject *)v115;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v89->m_Items[3], v115, v109, v110, v111, v112, v113, v114);
  v116 = iTween__Hash(v89, 0LL);
  iTween__RotateTo_61783616(v82, v116, 0LL);
  v118 = BattleCommandComponent__fadeoutEffect(this, 1, v117);
  UnityEngine_MonoBehaviour__StartCoroutine_70974992((UnityEngine_MonoBehaviour_o *)this, v118, 0LL);
}


void __fastcall BattleCommandComponent__playOpenNobleCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  __int64 v3; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_array *v6; // x8
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_GameObject_array *v8; // x20
  UnityEngine_Transform_o *transform; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v2 = this;
  if ( (byte_4C0016D & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    this = (BattleCommandComponent_o *)sub_1C2E12C(&StringLiteral_19232/*"effect/ef_noblecard"*/, v3);
    byte_4C0016D = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_17;
  if ( effectobj->max_length <= 2 )
    goto LABEL_18;
  v5 = (UnityEngine_Object_o *)effectobj->m_Items[2];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v2->fields.effectobj;
    if ( !v6 )
      goto LABEL_17;
    if ( v6->max_length <= 2 )
      goto LABEL_18;
    v7 = (UnityEngine_Object_o *)v6->m_Items[2];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_70989908(v7, 0LL);
  }
  this = (BattleCommandComponent_o *)v2->fields.nomalwidget;
  if ( !this
    || (v8 = v2->fields.effectobj,
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject_39556320(
                                             (BaseMonoBehaviour_o *)v2,
                                             (System_String_o *)StringLiteral_19232/*"effect/ef_noblecard"*/,
                                             transform,
                                             0LL,
                                             0LL),
        !v8) )
  {
LABEL_17:
    sub_1C2E388(this, method);
  }
  if ( v8->max_length <= 2 )
LABEL_18:
    sub_1C2E390(this, method);
  v8->m_Items[2] = (UnityEngine_GameObject_o *)this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v8->m_Items[2], (int64_t)this, v10, v11, v12, v13, v14, v15);
}


void __fastcall BattleCommandComponent__resetAddObject(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v8; // x20
  unsigned __int64 v9; // x22
  __int64 v10; // x27
  UnityEngine_Transform_o *objectRoot; // x21
  System_String_o *v12; // x0
  UnityEngine_Object_o *NodeFromName; // x21
  struct UnityEngine_GameObject_array *addObjectList; // x28
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  Il2CppClass **v22; // x0
  struct UnityEngine_GameObject_array *v23; // x8
  System_Enum_o v24; // [xsp+8h] [xbp-78h] BYREF
  int v25; // [xsp+18h] [xbp-68h]

  if ( (byte_4C00167 & 1) == 0 )
  {
    sub_1C2E12C(&BattleCommandComponent_ADDOBJECT_TYPE___TypeInfo, method);
    sub_1C2E12C(&BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo, v3);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    byte_4C00167 = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)sub_1C2E1D4(BattleCommandComponent_ADDOBJECT_TYPE___TypeInfo, 2LL);
  if ( !gameObject )
LABEL_21:
    sub_1C2E388(gameObject, v6);
  klass = gameObject[1].klass;
  v8 = gameObject;
  if ( (unsigned int)klass <= 1 )
LABEL_20:
    sub_1C2E390(gameObject, v6);
  HIDWORD(gameObject[1].monitor) = 1;
  if ( (int)klass >= 1 )
  {
    v9 = 0LL;
    while ( v9 < (unsigned int)klass )
    {
      v10 = *((int *)&v8[1].monitor + v9);
      objectRoot = this->fields.objectRoot;
      v24.klass = (System_Enum_c *)BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo;
      v24.monitor = (void *)-1LL;
      v25 = v10;
      v12 = System_Enum__ToString(&v24, 0LL);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(objectRoot, v12, 1, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !NodeFromName )
          goto LABEL_21;
        addObjectList = this->fields.addObjectList;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NodeFromName, 0LL);
        if ( !addObjectList )
          goto LABEL_21;
        if ( (unsigned int)v10 >= addObjectList->max_length )
          goto LABEL_20;
        v21 = (int64_t)gameObject;
        v22 = &addObjectList->obj.klass + v10;
        v22[4] = (Il2CppClass *)v21;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v22 + 4), v21, v15, v16, v17, v18, v19, v20);
        v23 = this->fields.addObjectList;
        if ( !v23 )
          goto LABEL_21;
        if ( (unsigned int)v10 >= v23->max_length )
          goto LABEL_20;
        gameObject = v23->m_Items[v10];
        if ( !gameObject )
          goto LABEL_21;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      LODWORD(klass) = v8[1].klass;
      if ( (__int64)++v9 >= (int)klass )
        return;
    }
    goto LABEL_20;
  }
}


void __fastcall BattleCommandComponent__resetComboData(BattleCommandComponent_o *this, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1
  struct UnityEngine_GameObject_array *effectobj; // x20
  __int64 v6; // x8
  unsigned __int64 v7; // x21
  UnityEngine_Object_o *v8; // x19

  if ( (byte_4C00179 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C00179 = 1;
  }
  BattleCommandComponent__DestroyEffectObject1(this, method);
  effectobj = this->fields.effectobj;
  if ( !effectobj )
    sub_1C2E388(v3, v4);
  v6 = *(_QWORD *)&effectobj->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v6 )
        sub_1C2E390(v3, v4);
      v8 = (UnityEngine_Object_o *)effectobj->m_Items[v7];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v3 = UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
      if ( v3 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70989720(v8, 0LL);
      }
      LODWORD(v6) = effectobj->max_length;
      ++v7;
    }
    while ( (__int64)v7 < (int)v6 );
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
    sub_1C2E388(criticallabel, v3);
  }
  DrumRollLabel__ChangeParamNonAnimation(criticallabel, 0, 1, 0LL);
}


void __fastcall BattleCommandComponent__resetSelect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  __int64 v3; // x1
  struct BattleCommandData_o *data; // x8
  int32_t uniqueId; // w20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_array *v10; // x8
  UnityEngine_Object_o *v11; // x19
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4C00188 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    this = (BattleCommandComponent_o *)sub_1C2E12C(&ServantAssetLoadManager_TypeInfo, v3);
    byte_4C00188 = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_17;
  uniqueId = data->fields.uniqueId;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__StopVoice(uniqueId, 0.0, 0LL);
  v12.fields.r = 1.0;
  v12.fields.g = 1.0;
  v12.fields.b = 1.0;
  v12.fields.a = 1.0;
  BattleCommandComponent__SetCardColor(v2, v12, v6);
  BattleCommandComponent__resetSelectStamp(v2, v7);
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_17;
  if ( effectobj->max_length <= 3 )
    goto LABEL_18;
  v9 = (UnityEngine_Object_o *)effectobj->m_Items[3];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = v2->fields.effectobj;
    if ( v10 )
    {
      if ( v10->max_length > 3 )
      {
        v11 = (UnityEngine_Object_o *)v10->m_Items[3];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70989720(v11, 0LL);
        return;
      }
LABEL_18:
      sub_1C2E390(this, method);
    }
LABEL_17:
    sub_1C2E388(this, method);
  }
}


void __fastcall BattleCommandComponent__resetSelectStamp(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8

  v2 = this;
  if ( (byte_4C00171 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C00171 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_13;
  if ( effectobj->max_length <= 5 )
LABEL_14:
    sub_1C2E390(this, method);
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[5];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_13;
    if ( v5->max_length > 5 )
    {
      this = (BattleCommandComponent_o *)v2->fields.spawner;
      if ( this )
      {
        Spawner__Despawn((Spawner_o *)this, v5->m_Items[5], 1, 0LL);
        return;
      }
LABEL_13:
      sub_1C2E388(this, method);
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
  __int64 v28; // x1
  const MethodInfo *v29; // x1
  __int64 v30; // x1
  int64_t data; // x0
  const MethodInfo *v32; // x1
  struct BattleCommandData_o *v33; // x8
  int treasureDvc; // w21
  Voice_BATTLE_array *v35; // x21
  System_String_o *FileName; // x0
  const MethodInfo *v37; // x2
  System_Array_o *v38; // x0
  __int64 *v39; // x8
  __int64 v40; // x1
  System_Collections_Generic_List_KeyValuePair_string__int___o *v41; // x21
  BattleCommandComponent___c_c *v42; // x0
  System_Func_T__TResult__o *_9__188_0; // x22
  Il2CppObject *v44; // x23
  struct BattleCommandComponent___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_Int32_array *v53; // x0
  System_Collections_Generic_List_T__o *v54; // x21
  int32_t size; // w25
  int32_t v56; // w22
  System_Collections_Generic_KeyValuePair_object__int__o v57; // kr10_16
  struct BattleCommandData_o *v58; // x8
  Il2CppObject *key; // x21
  int32_t uniqueId; // w23
  System_String_o *LastVoiceType; // x0
  System_Collections_Generic_List_T__o *v62; // x21
  struct BattleCommandData_o *v63; // x8
  int32_t svtId; // w23
  VoiceMaster_o *v65; // x22
  struct BattleServantData_o *svtData; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleCommandData_o *v68; // x8
  int32_t v69; // w2
  struct BattleServantData_o *v70; // x8
  UnityEngine_Object_o *ServantActor; // x22
  int32_t v72; // w22
  struct BattleServantData_o *v73; // x8
  struct BattleCommandData_o *v74; // x9
  int32_t v75; // w23
  int32_t overwriteSvtVoiceId; // w25
  int32_t v77; // w24
  System_String_o *v78; // x21
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  Il2CppObject *v82; // x0
  __int64 *v83; // x8
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  struct UnityEngine_GameObject_array *effectobj; // x22
  UnityEngine_Transform_o *transform; // x0
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  struct BattlePerformance_o *v98; // x8
  bool v99; // w0
  int v100; // [xsp+4h] [xbp-5Ch] BYREF
  System_Collections_Generic_List_KeyValuePair_string__int___o *voiceInfoList; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o Item; // 0:x2.16
  System_Collections_Generic_KeyValuePair_object__int__o v103; // 0:x2.16
  UnityEngine_Color_o v104; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C00182 & 1) == 0 )
  {
    sub_1C2E12C(&Voice_BATTLE___TypeInfo, *(_QWORD *)&targetIndex);
    sub_1C2E12C(&Method_BasicHelper_IndexValue_KeyValuePair_string__int____, v5);
    sub_1C2E12C(&Method_DataManager_GetMasterData_VoiceMaster___, v6);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___int___, v7);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1C2E12C(&System_Func_KeyValuePair_string__int___int__TypeInfo, v9);
    sub_1C2E12C(&int_TypeInfo, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Count__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Item__, v13);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v14);
    sub_1C2E12C(&ServantAssetLoadManager_TypeInfo, v15);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1C2E12C(
      &Field__PrivateImplementationDetails__388AFD0FB77AF6556B184A69B44D84800D854675D6242CF90106726D5CB5F546,
      v17);
    sub_1C2E12C(
      &Field__PrivateImplementationDetails__465D7DAC1D1469B8AAD4256C55331C9F60FE5E94AD5B4D3AC8992CB164DDDCE3,
      v18);
    sub_1C2E12C(
      &Field__PrivateImplementationDetails__71A03FE3843FC2331F63AFCE9FB6609CA17FF235B50C9A2A810635482008B1D0,
      v19);
    sub_1C2E12C(&Method_BattleCommandComponent___c__selectCard_b__188_0__, v20);
    sub_1C2E12C(&BattleCommandComponent___c_TypeInfo, v21);
    sub_1C2E12C(&Voice_TypeInfo, v22);
    sub_1C2E12C(&StringLiteral_16912/*"a"*/, v23);
    sub_1C2E12C(&StringLiteral_7284/*"HEROINE_CHANGECARDVOICE"*/, v24);
    sub_1C2E12C(&StringLiteral_19228/*"effect/ef_commandup_{0}{1:00}"*/, v25);
    sub_1C2E12C(&StringLiteral_23101/*"q"*/, v26);
    sub_1C2E12C(&StringLiteral_17297/*"b"*/, v27);
    sub_1C2E12C(&StringLiteral_16410/*"_"*/, v28);
    byte_4C00182 = 1;
  }
  v104.fields.r = 0.5;
  v104.fields.g = 0.5;
  v104.fields.b = 0.5;
  v104.fields.a = 1.0;
  voiceInfoList = 0LL;
  BattleCommandComponent__SetCardColor(this, v104, *(const MethodInfo **)&targetIndex);
  BattleCommandComponent__stopFirstAura(this, v29);
  data = (int64_t)this->fields.data;
  if ( !data )
    goto LABEL_78;
  if ( BattleCommandData__isBlank((BattleCommandData_o *)data, 0LL) )
    return;
  data = BattleCommandComponent__get_isKindOfDontAction(this, v32);
  if ( (data & 1) != 0 )
    return;
  v33 = this->fields.data;
  if ( !v33 )
    goto LABEL_78;
  treasureDvc = v33->fields.treasureDvc;
  if ( treasureDvc <= 0 )
  {
    if ( !Voice_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    FileName = Voice__getFileName(245, 0LL);
    if ( BattleCommandComponent__IsValidVoiceType(this, FileName, v37) )
    {
      v38 = (System_Array_o *)sub_1C2E1D4(Voice_BATTLE___TypeInfo, 6LL);
      v39 = &Field__PrivateImplementationDetails__71A03FE3843FC2331F63AFCE9FB6609CA17FF235B50C9A2A810635482008B1D0;
    }
    else
    {
      v38 = (System_Array_o *)sub_1C2E1D4(Voice_BATTLE___TypeInfo, 3LL);
      v39 = &Field__PrivateImplementationDetails__465D7DAC1D1469B8AAD4256C55331C9F60FE5E94AD5B4D3AC8992CB164DDDCE3;
    }
    goto LABEL_18;
  }
  if ( treasureDvc != ConstantMaster__getValue((System_String_o *)StringLiteral_7284/*"HEROINE_CHANGECARDVOICE"*/, 0LL) )
  {
    v38 = (System_Array_o *)sub_1C2E1D4(Voice_BATTLE___TypeInfo, 12LL);
    v39 = &Field__PrivateImplementationDetails__388AFD0FB77AF6556B184A69B44D84800D854675D6242CF90106726D5CB5F546;
LABEL_18:
    v40 = *v39;
    v35 = (Voice_BATTLE_array *)v38;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63142920(v38, (System_RuntimeFieldHandle_o)v40, 0LL);
    goto LABEL_19;
  }
  data = sub_1C2E1D4(Voice_BATTLE___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_78;
  v35 = (Voice_BATTLE_array *)data;
  if ( !*(_DWORD *)(data + 24) )
    goto LABEL_79;
  *(_DWORD *)(data + 32) = 252;
LABEL_19:
  data = (int64_t)this->fields.svtData;
  if ( !data )
    goto LABEL_78;
  if ( BattleServantData__TryGetPlayableVoiceInfoList((BattleServantData_o *)data, &voiceInfoList, v35, 0LL) )
  {
    v41 = voiceInfoList;
    v42 = BattleCommandComponent___c_TypeInfo;
    if ( !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
      v42 = BattleCommandComponent___c_TypeInfo;
    }
    _9__188_0 = (System_Func_T__TResult__o *)v42->static_fields->__9__188_0;
    if ( !_9__188_0 )
    {
      if ( !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v42 = BattleCommandComponent___c_TypeInfo;
      }
      v44 = (Il2CppObject *)v42->static_fields->__9;
      _9__188_0 = (System_Func_T__TResult__o *)sub_1C2E378(System_Func_KeyValuePair_string__int___int__TypeInfo);
      System_Func_KeyValuePair_object__int___int____ctor(
        _9__188_0,
        v44,
        Method_BattleCommandComponent___c__selectCard_b__188_0__,
        0LL);
      static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
      static_fields->__9__188_0 = (struct System_Func_KeyValuePair_string__int___int__o *)_9__188_0;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&static_fields->__9__188_0,
        (int64_t)_9__188_0,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
    }
    v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v41,
                                                                 (System_Func_TSource__TResult__o *)_9__188_0,
                                                                 (const MethodInfo_2FFD340 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___int___);
    v53 = System_Linq_Enumerable__ToArray_int_(
            v52,
            (const MethodInfo_300BC24 *)Method_System_Linq_Enumerable_ToArray_int___);
    data = RandomUtility__GetRandomRangeIndex(v53, 0, 0LL);
    v54 = (System_Collections_Generic_List_T__o *)voiceInfoList;
    if ( !voiceInfoList )
      goto LABEL_78;
    size = voiceInfoList->fields._size;
    v56 = data;
    Item = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
             (System_Collections_Generic_List_T__o *)voiceInfoList,
             0,
             (const MethodInfo_35C3978 *)Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Item__);
    v57 = BasicHelper__IndexValue_KeyValuePair_object__int__(
            v54,
            v56,
            Item,
            (const MethodInfo_2FBFF4C *)Method_BasicHelper_IndexValue_KeyValuePair_string__int____);
    v30 = *(_QWORD *)&v57.fields.value;
    data = (int64_t)v57.fields.key;
    v58 = this->fields.data;
    if ( !v58 )
      goto LABEL_78;
    key = v57.fields.key;
    uniqueId = v58->fields.uniqueId;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    LastVoiceType = ServantAssetLoadManager__GetLastVoiceType(uniqueId, 0LL);
    data = System_String__op_Equality(LastVoiceType, (System_String_o *)v57.fields.key, 0LL);
    if ( (data & 1) != 0 )
    {
      v62 = (System_Collections_Generic_List_T__o *)voiceInfoList;
      if ( !voiceInfoList )
        goto LABEL_78;
      v103 = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
               (System_Collections_Generic_List_T__o *)voiceInfoList,
               0,
               (const MethodInfo_35C3978 *)Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Item__);
      key = BasicHelper__IndexValue_KeyValuePair_object__int__(
              v62,
              (v56 + 1) % size,
              v103,
              (const MethodInfo_2FBFF4C *)Method_BasicHelper_IndexValue_KeyValuePair_string__int____).fields.key;
    }
    data = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !data
      || (data = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)data,
                            (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_VoiceMaster___),
          (v63 = this->fields.data) == 0LL)
      || (svtId = v63->fields.svtId,
          v65 = (VoiceMaster_o *)data,
          data = (int64_t)System_String__Concat_63235584(
                            (System_String_o *)StringLiteral_16410/*"_"*/,
                            (System_String_o *)key,
                            0LL),
          !v65) )
    {
LABEL_78:
      sub_1C2E388(data, v30);
    }
    data = VoiceMaster__getFlagRequestNumber(v65, svtId, (System_String_o *)data, 0, 0LL);
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
        v68 = this->fields.data;
        if ( !v68 )
          goto LABEL_78;
        v69 = data;
        data = (int64_t)perf->fields.data;
        if ( !data )
          goto LABEL_78;
        BattleData__AddServantVoicePlayed_43928712((BattleData_o *)data, v68->fields.svtId, v69, 0, 0LL);
      }
    }
    v70 = this->fields.svtData;
    if ( !v70 )
      goto LABEL_78;
    data = (int64_t)this->fields.perf;
    if ( !data )
      goto LABEL_78;
    ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                             (BattlePerformance_o *)data,
                                             v70->fields.uniqueId,
                                             0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        v72 = data;
        data = BattleServantData__getDispLimitCount(this->fields.svtData, 1, 0LL);
        v73 = this->fields.svtData;
        if ( !v73 )
          goto LABEL_78;
        v74 = this->fields.data;
        if ( !v74 )
          goto LABEL_78;
        v75 = data;
        overwriteSvtVoiceId = v73->fields.overwriteSvtVoiceId;
        v77 = v74->fields.uniqueId;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        ServantAssetLoadManager__playBattleVoice(
          v72,
          v75,
          overwriteSvtVoiceId,
          (System_String_o *)key,
          1.0,
          0LL,
          v77,
          0,
          0LL);
      }
    }
  }
  data = (int64_t)this->fields.data;
  if ( !data )
    goto LABEL_78;
  v78 = (System_String_o *)StringLiteral_19228/*"effect/ef_commandup_{0}{1:00}"*/;
  if ( BattleCommandData__isQuick((BattleCommandData_o *)data, 0LL) )
  {
    v100 = targetIndex + 1;
    v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v100, v79, v80, v81);
    v83 = &StringLiteral_23101/*"q"*/;
LABEL_67:
    v78 = System_String__Format_63249956(v78, (Il2CppObject *)*v83, v82, 0LL);
    goto LABEL_68;
  }
  data = (int64_t)this->fields.data;
  if ( !data )
    goto LABEL_78;
  if ( BattleCommandData__isArts((BattleCommandData_o *)data, 0LL) )
  {
    v100 = targetIndex + 1;
    v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v100, v84, v85, v86);
    v83 = &StringLiteral_16912/*"a"*/;
    goto LABEL_67;
  }
  data = (int64_t)this->fields.data;
  if ( !data )
    goto LABEL_78;
  if ( BattleCommandData__isBuster((BattleCommandData_o *)data, 0LL) )
  {
    v100 = targetIndex + 1;
    v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v100, v87, v88, v89);
    v83 = &StringLiteral_17297/*"b"*/;
    goto LABEL_67;
  }
LABEL_68:
  data = (int64_t)this->fields.nomalwidget;
  if ( !data )
    goto LABEL_78;
  effectobj = this->fields.effectobj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
  data = (int64_t)BaseMonoBehaviour__createObject_39556320((BaseMonoBehaviour_o *)this, v78, transform, 0LL, 0LL);
  if ( !effectobj )
    goto LABEL_78;
  if ( effectobj->max_length <= 3 )
LABEL_79:
    sub_1C2E390(data, v30);
  effectobj->m_Items[3] = (UnityEngine_GameObject_o *)data;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&effectobj->m_Items[3], data, v92, v93, v94, v95, v96, v97);
  v98 = this->fields.perf;
  if ( !v98 )
    goto LABEL_78;
  data = (int64_t)v98->fields.data;
  if ( !data )
    goto LABEL_78;
  v99 = BattleData__checkLimitTurn((BattleData_o *)data, 0LL);
  if ( !targetIndex && v99 )
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
        sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.perf, (int64_t)perf, v7, v8, v9, v10, v11, v12),
        BattleCommandComponent__SetPowerUpCardValue(this, 0, v13),
        (data = comp->fields.data) == 0LL) )
  {
    sub_1C2E388(this, comp);
  }
  BattleCommandComponent__SetPowerUpCardIcon(this, data->fields.commandCardParam, 2, 0, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__setBuffIconList(
        BattleCommandComponent_o *this,
        bool display,
        const MethodInfo *method)
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
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x20
  UnityEngine_Component_o *buffRoot; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  BattleBuffData_o *BuffData; // x22
  System_Collections_Generic_List_object__o *v40; // x21
  System_Int32_array *Individualities; // x0
  int64_t *p_individuality; // x23
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  bool isTreasureDvc; // w0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  TreasureDvcEntity_o *TreasureDevice; // x0
  int64_t v57; // x1
  System_Collections_Generic_IEnumerable_TSource__o *ShowCommandBuffListActive; // x23
  System_Collections_Generic_IEnumerable_TSource__o *ShowCommandBuffListPassive; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x22
  System_Func_object__bool__o *v61; // x23
  System_Predicate_object__o *v62; // x22
  System_Predicate_object__o *v63; // x22
  System_Predicate_object__o *v64; // x22
  System_Collections_Generic_List_int__o *v65; // x20
  Il2CppObject *MasterData_object; // x22
  _BOOL8 v67; // x0
  __int64 v68; // x1
  Il2CppObject *Entity; // x0
  __int64 v70; // x1
  Il2CppObject *v71; // x21
  _BOOL8 v72; // x0
  __int64 monitor_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  struct BattleServantBuffIconComponent_array *buffIconList; // x8
  signed __int64 v78; // x21
  unsigned __int64 max_length; // x9
  BattleServantBuffIconComponent_o *v80; // x22
  int32_t v81; // w1
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C0016F & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_BuffMaster___, display);
    sub_1C2E12C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Concat_BattleBuffData_BuffData___, v6);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v10);
    sub_1C2E12C(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v16);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v18);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1C2E12C(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v22);
    sub_1C2E12C(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v23);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1C2E12C(&Method_BattleCommandComponent___c__DisplayClass138_0__setBuffIconList_b__0__, v25);
    sub_1C2E12C(&Method_BattleCommandComponent___c__DisplayClass138_0__setBuffIconList_b__1__, v26);
    sub_1C2E12C(&Method_BattleCommandComponent___c__DisplayClass138_0__setBuffIconList_b__2__, v27);
    sub_1C2E12C(
      &Method_BattleCommandComponent___c__DisplayClass138_0__setBuffIconList_g__BuffFilterByIndividuality_3__,
      v28);
    sub_1C2E12C(&BattleCommandComponent___c__DisplayClass138_0_TypeInfo, v29);
    byte_4C0016F = 1;
  }
  memset(&v83, 0, sizeof(v83));
  v30 = sub_1C2E378(BattleCommandComponent___c__DisplayClass138_0_TypeInfo);
  BattleCommandComponent___c__DisplayClass138_0___ctor((BattleCommandComponent___c__DisplayClass138_0_o *)v30, 0LL);
  if ( !v30 )
    goto LABEL_46;
  *(_QWORD *)(v30 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v30 + 16), (int64_t)this, v33, v34, v35, v36, v37, v38);
  if ( !display || !this->fields.data || !this->fields.svtData )
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
LABEL_46:
    sub_1C2E388(buffRoot, v32);
  }
  buffRoot = (UnityEngine_Component_o *)this->fields.buffRoot;
  if ( !buffRoot )
    goto LABEL_46;
  buffRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(buffRoot, 0LL);
  if ( !buffRoot )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffRoot, 1, 0LL);
  buffRoot = (UnityEngine_Component_o *)this->fields.svtData;
  if ( !buffRoot )
    goto LABEL_46;
  BuffData = BattleServantData__get_BuffData((BattleServantData_o *)buffRoot, 0LL);
  v40 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_46;
  Individualities = BattleCommandData__getIndividualities((BattleCommandData_o *)buffRoot, 0LL);
  *(_QWORD *)(v30 + 40) = Individualities;
  p_individuality = (int64_t *)(v30 + 40);
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v30 + 40), (int64_t)Individualities, v43, v44, v45, v46, v47, v48);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_46;
  isTreasureDvc = BattleCommandData__isTreasureDvc((BattleCommandData_o *)buffRoot, 0LL);
  *(_BYTE *)(v30 + 24) = isTreasureDvc;
  if ( !isTreasureDvc )
    goto LABEL_16;
  buffRoot = (UnityEngine_Component_o *)this->fields.svtData;
  if ( !buffRoot )
    goto LABEL_46;
  TreasureDevice = BattleServantData__get_TreasureDevice((BattleServantData_o *)buffRoot, 0LL);
  if ( TreasureDevice )
  {
    p_individuality = (int64_t *)&TreasureDevice->fields.individuality;
LABEL_16:
    v57 = *p_individuality;
    goto LABEL_17;
  }
  v57 = 0LL;
LABEL_17:
  *(_QWORD *)(v30 + 32) = v57;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v30 + 32), v57, v50, v51, v52, v53, v54, v55);
  if ( !BuffData )
    goto LABEL_46;
  ShowCommandBuffListActive = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getShowCommandBuffListActive(
                                                                                     BuffData,
                                                                                     0LL);
  ShowCommandBuffListPassive = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getShowCommandBuffListPassive(
                                                                                      BuffData,
                                                                                      0LL);
  v60 = System_Linq_Enumerable__Concat_object_(
          ShowCommandBuffListActive,
          ShowCommandBuffListPassive,
          (const MethodInfo_2FE9868 *)Method_System_Linq_Enumerable_Concat_BattleBuffData_BuffData___);
  v61 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v61,
    (Il2CppObject *)v30,
    Method_BattleCommandComponent___c__DisplayClass138_0__setBuffIconList_g__BuffFilterByIndividuality_3__,
    0LL);
  buffRoot = (UnityEngine_Component_o *)System_Linq_Enumerable__Where_object_(
                                          v60,
                                          (System_Func_TSource__bool__o *)v61,
                                          (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  if ( !v40 )
    goto LABEL_46;
  System_Collections_Generic_List_object___AddRange(
    v40,
    (System_Collections_Generic_IEnumerable_T__o *)buffRoot,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v62 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v62,
    (Il2CppObject *)v30,
    Method_BattleCommandComponent___c__DisplayClass138_0__setBuffIconList_b__0__,
    0LL);
  System_Collections_Generic_List_object___RemoveAll(
    v40,
    (System_Predicate_T__o *)v62,
    (const MethodInfo_366CF08 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v63 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v63,
    (Il2CppObject *)v30,
    Method_BattleCommandComponent___c__DisplayClass138_0__setBuffIconList_b__1__,
    0LL);
  System_Collections_Generic_List_object___RemoveAll(
    v40,
    (System_Predicate_T__o *)v63,
    (const MethodInfo_366CF08 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v64 = (System_Predicate_object__o *)sub_1C2E378(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v64,
    (Il2CppObject *)v30,
    Method_BattleCommandComponent___c__DisplayClass138_0__setBuffIconList_b__2__,
    0LL);
  System_Collections_Generic_List_object___RemoveAll(
    v40,
    (System_Predicate_T__o *)v64,
    (const MethodInfo_366CF08 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v65 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v65,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  buffRoot = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !buffRoot )
    goto LABEL_46;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)buffRoot,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_BuffMaster___);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v82,
    v40,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v83 = v82;
  while ( 1 )
  {
    v67 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v83,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v67 )
      break;
    if ( !v83.fields._current )
      sub_1C2E388(v67, v68);
    if ( !MasterData_object )
      sub_1C2E388(v67, v68);
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int32_t)v83.fields._current[1].klass,
               (const MethodInfo_327B180 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    v71 = Entity;
    if ( !Entity )
      sub_1C2E388(0LL, v70);
    if ( !v65 )
      sub_1C2E388(Entity, v70);
    v72 = System_Collections_Generic_List_int___Contains(
            v65,
            (int32_t)Entity[2].monitor,
            (const MethodInfo_364EC00 *)Method_System_Collections_Generic_List_int__Contains__);
    if ( !v72 )
    {
      monitor_low = LODWORD(v71[2].monitor);
      items = v65->fields._items;
      v75 = Method_System_Collections_Generic_List_int__Add__;
      ++v65->fields._version;
      if ( !items )
        sub_1C2E388(v72, monitor_low);
      size = v65->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v65,
          monitor_low,
          *(const MethodInfo_364E888 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
      }
      else
      {
        v65->fields._size = size + 1;
        items->m_Items[size + 1] = monitor_low;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v83,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  buffIconList = this->fields.buffIconList;
  if ( !buffIconList )
    goto LABEL_46;
  v78 = 0LL;
  while ( 1 )
  {
    max_length = buffIconList->max_length;
    if ( v78 >= (int)max_length )
      break;
    if ( !v65 )
      goto LABEL_46;
    if ( v78 >= max_length )
      sub_1C2E390(buffRoot, v32);
    v80 = buffIconList->m_Items[v78];
    if ( v78 >= v65->fields._size )
    {
      if ( !v80 )
        goto LABEL_46;
      v81 = 0;
    }
    else
    {
      buffRoot = (UnityEngine_Component_o *)System_Collections_Generic_List_int___get_Item(
                                              v65,
                                              v78,
                                              (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v80 )
        goto LABEL_46;
      v81 = (int)buffRoot;
    }
    BattleServantBuffIconComponent__setImageId(v80, v81, 0LL);
    buffIconList = this->fields.buffIconList;
    ++v78;
    if ( !buffIconList )
      goto LABEL_46;
  }
}


void __fastcall BattleCommandComponent__setCriticalObject(
        BattleCommandComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *criticalObject; // x0

  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    sub_1C2E388(0LL, flg);
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
  BattleCommandData_o **p_data; // x25
  struct BattleServantData_o **p_svtData; // x26
  int64_t v16; // x2
  char v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  Spawner_o *spawner; // x0
  const MethodInfo *v23; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  struct UnityEngine_GameObject_array *v25; // x8
  struct UnityEngine_GameObject_array **p_effectobj; // x27
  __int64 v27; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 v29; // x24
  UnityEngine_Object_o *v30; // x28
  struct UnityEngine_GameObject_array *v31; // x8
  struct UnityEngine_GameObject_array *v32; // x8
  UnityEngine_Object_o *v33; // x28
  int64_t v34; // x0
  int64_t v35; // x2
  char v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  const MethodInfo *v41; // x6
  BattleServantData_o *v42; // x1
  BattleBuffData_o *buffData; // x0
  BattleCommandData_o *v44; // x22
  const MethodInfo *v45; // x2
  BattleCommandData_o *data; // x0
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x4
  int32_t commandCardParam; // w1
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C00161 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_GameObject___TypeInfo, indata);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v13);
    byte_4C00161 = 1;
  }
  p_data = &this->fields.data;
  this->fields.data = indata;
  sub_1C2E0D0(
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
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.svtData, (int64_t)insvtData, v16, v17, v18, v19, v20, v21);
  effectobj = this->fields.effectobj;
  this->fields.selectflg = 0;
  if ( !effectobj )
    goto LABEL_23;
  BattleCommandComponent__DestroyEffectObject1(this, v23);
  v25 = this->fields.effectobj;
  if ( !v25 )
    goto LABEL_23;
  p_effectobj = &this->fields.effectobj;
  v27 = 4LL;
  while ( 1 )
  {
    max_length = v25->max_length;
    v29 = v27 - 4;
    if ( v27 - 4 >= (int)max_length )
      break;
    if ( v29 >= max_length )
      goto LABEL_45;
    v30 = (UnityEngine_Object_o *)*((_QWORD *)&v25->obj.klass + v27);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    spawner = (Spawner_o *)UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
    if ( ((unsigned __int8)spawner & 1) != 0 )
    {
      if ( v29 < 5 )
      {
        v32 = *p_effectobj;
        if ( !*p_effectobj )
          goto LABEL_23;
        if ( v29 >= v32->max_length )
LABEL_45:
          sub_1C2E390(spawner, v23);
        v33 = (UnityEngine_Object_o *)*((_QWORD *)&v32->obj.klass + v27);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70989720(v33, 0LL);
      }
      else if ( v27 == 9 )
      {
        v31 = this->fields.effectobj;
        if ( !v31 )
          goto LABEL_23;
        if ( (*(_QWORD *)&v31->max_length & 0xFFFFFFFEuLL) <= 5 )
          goto LABEL_45;
        spawner = this->fields.spawner;
        if ( !spawner )
          goto LABEL_23;
        Spawner__Despawn(spawner, v31->m_Items[5], 1, 0LL);
      }
    }
    v25 = *p_effectobj;
    ++v27;
    if ( !*p_effectobj )
      goto LABEL_23;
  }
  v34 = sub_1C2E1D4(UnityEngine_GameObject___TypeInfo, v25->max_length);
  *p_effectobj = (struct UnityEngine_GameObject_array *)v34;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.effectobj, v34, v35, v36, v37, v38, v39, v40);
  if ( *p_data )
  {
    if ( BattleCommandData__isTreasureDvc(*p_data, 0LL) )
    {
      v42 = *p_svtData;
      if ( *p_svtData )
      {
        buffData = v42->fields.buffData;
        if ( buffData )
        {
          if ( BattleBuffData__isTDTypeChange(buffData, v42, 0LL, 0LL) )
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
              v44 = *p_data;
              spawner = (Spawner_o *)BattleServantData__getTreasureDvcCardId((BattleServantData_o *)spawner, 0LL);
              if ( !v44 )
                goto LABEL_23;
              v44->fields._type = (int)spawner;
            }
          }
        }
      }
    }
  }
  BattleCommandComponent__updateView(this, isInit, isAttack, isShowBuffIcon, isTDTypeChangeWindow, 0, v41);
  data = this->fields.data;
  if ( !data || BattleCommandData__getCriticalPoint(data, 0LL) < 1 || !this->fields.isCountUp )
    goto LABEL_41;
  spawner = (Spawner_o *)this->fields.criticalObject;
  if ( !spawner )
LABEL_23:
    sub_1C2E388(spawner, v23);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spawner, 1, 0LL);
LABEL_41:
  v53.fields.r = 0.0;
  v53.fields.g = 0.0;
  v53.fields.b = 0.0;
  v53.fields.a = 0.0;
  BattleCommandComponent__SetCommandCodeActive(this, v53, 1, v45);
  v54.fields.r = 0.0;
  v54.fields.g = 0.0;
  v54.fields.b = 0.0;
  v54.fields.a = 0.0;
  BattleCommandComponent__SetCommandAssistActive(this, v54, 1, v47);
  if ( indata )
  {
    BattleCommandComponent__SetPowerUpCardValue(this, indata->fields.commandCardParam, v48);
    commandCardParam = indata->fields.commandCardParam;
  }
  else
  {
    BattleCommandComponent__SetPowerUpCardValue(this, 0, v48);
    commandCardParam = 0;
  }
  BattleCommandComponent__SetPowerUpCardIcon(this, commandCardParam, 2, 1, v49);
}


void __fastcall BattleCommandComponent__setData_44528844(
        BattleCommandComponent_o *this,
        BattleServantData_o *svtData,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x22
  __int64 v14; // x23
  __int64 v15; // x24
  Il2CppClass *klass; // x8
  int32_t v17; // w22
  __int64 v18; // x23
  __int64 v19; // x24
  int32_t v20; // w24
  int32_t CommandDispLimitCount; // w25
  int32_t CommandImageSvtId; // w26
  __int64 v23; // x23
  struct BattleBuffData_o *buffData; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4C00165 & 1) == 0 )
  {
    sub_1C2E12C(&BattleCommandData_TypeInfo, svtData);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1C2E12C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4C00165 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svtData )
    goto LABEL_16;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v15 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v32.fields.currentCryptoKey = v15;
  *(_QWORD *)&v32.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v32, 0LL);
  if ( !v13 )
    goto LABEL_16;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v13,
               (int32_t)Instance,
               (const MethodInfo_327B180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Instance )
  {
    klass = Instance[9].klass;
    if ( klass )
    {
      if ( LODWORD(klass->_1.namespaze) <= index )
        sub_1C2E390(Instance, v12);
      v17 = *((_DWORD *)&klass->_1.byval_arg.data + index);
      v19 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
      v18 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v33.fields.currentCryptoKey = v19;
      *(_QWORD *)&v33.fields.fakeValue = v18;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v33, 0LL);
      CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(svtData, 0LL);
      CommandImageSvtId = BattleServantData__GetCommandImageSvtId(svtData, 0LL);
      v23 = sub_1C2E378(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_44763152(
        (BattleCommandData_o *)v23,
        v17,
        v20,
        CommandDispLimitCount,
        CommandImageSvtId,
        -1,
        0LL);
      if ( v23 )
      {
        BattleCommandData__SetCommandCardParam((BattleCommandData_o *)v23, svtData->fields.commandCardParam, index, 0LL);
        buffData = svtData->fields.buffData;
        *(_QWORD *)(v23 + 112) = buffData;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v23 + 112), (int64_t)buffData, v25, v26, v27, v28, v29, v30);
        *(_DWORD *)(v23 + 88) = index;
        BattleCommandComponent__setData(this, (BattleCommandData_o *)v23, svtData, 0, 1, 0, 1, v31);
        return;
      }
    }
LABEL_16:
    sub_1C2E388(Instance, v12);
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
  UnityEngine_Object_o *assistSprite; // x23
  UnityEngine_Object_o *assistChargeTurnLabel; // x23
  UnityEngine_Object_o *assistRemainingTurnLabel; // x23
  int32_t v11; // w23
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
  unsigned int v22; // w23
  BattleServantBuffIconComponent_o *v23; // x8
  UnityEngine_Object_o *powerUpCardValue; // x21
  UnityEngine_Object_o *powerUpCardIcon; // x21
  UnityEngine_Object_o *nowTreasureDeviceTypeImage; // x21
  UnityEngine_Object_o *restTreasureDeviceChangeTurnLabel; // x21
  UnityEngine_Object_o *iconChangeTypeByTransform; // x21

  if ( (byte_4C0015F & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
    byte_4C0015F = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(assistSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.assistSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v6, 0LL);
  }
  assistChargeTurnLabel = (UnityEngine_Object_o *)this->fields.assistChargeTurnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(assistChargeTurnLabel, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.assistChargeTurnLabel;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v7, 0LL);
  }
  assistRemainingTurnLabel = (UnityEngine_Object_o *)this->fields.assistRemainingTurnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  v11 = basedepth + 9;
  UIWidget__set_depth(bg, basedepth + 9, 0LL);
  bg = (UIWidget_o *)this->fields.donotactSprite;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, v11, 0LL);
  donotsleepSprite = (UnityEngine_Object_o *)this->fields.donotsleepSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(donotsleepSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotsleepSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  donotPermanentSleep = (UnityEngine_Object_o *)this->fields.donotPermanentSleep;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(donotPermanentSleep, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotPermanentSleep;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  unusableShortageStarSprite = (UnityEngine_Object_o *)this->fields.unusableShortageStarSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(unusableShortageStarSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.unusableShortageStarSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  unusableNpSprite = (UnityEngine_Object_o *)this->fields.unusableNpSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(unusableNpSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.unusableNpSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  donotActTypeSprite = (UnityEngine_Object_o *)this->fields.donotActTypeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(donotActTypeSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotActTypeSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 10, 0LL);
  }
  donotActWithTypeSp = (UnityEngine_Object_o *)this->fields.donotActWithTypeSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(donotActWithTypeSp, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotActWithTypeSp;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  donotActCardSprite = (UnityEngine_Object_o *)this->fields.donotActCardSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(donotActCardSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotActCardSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 10, 0LL);
  }
  treasureDeviceErrorSprite = (UnityEngine_Object_o *)this->fields.treasureDeviceErrorSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(treasureDeviceErrorSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.treasureDeviceErrorSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  GameObjectHelper__addNguiDepth(this->fields.criticalObject, v6, 1, 0LL);
  bg = (UIWidget_o *)this->fields.friendIcon;
  if ( !bg || (UIWidget__set_depth(bg, basedepth + 10, 0LL), (buffIconList = this->fields.buffIconList) == 0LL) )
LABEL_103:
    sub_1C2E388(bg, *(_QWORD *)&basedepth);
  max_length = buffIconList->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    do
    {
      if ( v22 >= max_length )
        sub_1C2E390(bg, *(_QWORD *)&basedepth);
      v23 = buffIconList->m_Items[v22];
      if ( !v23 )
        goto LABEL_103;
      bg = (UIWidget_o *)v23->fields.iconSprite;
      if ( !bg )
        goto LABEL_103;
      UIWidget__set_depth(bg, v7, 0LL);
      max_length = buffIconList->max_length;
    }
    while ( (int)++v22 < max_length );
  }
  powerUpCardValue = (UnityEngine_Object_o *)this->fields.powerUpCardValue;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(powerUpCardValue, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.powerUpCardValue;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 8, 0LL);
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(powerUpCardIcon, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.powerUpCardIcon;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 8, 0LL);
  }
  nowTreasureDeviceTypeImage = (UnityEngine_Object_o *)this->fields.nowTreasureDeviceTypeImage;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nowTreasureDeviceTypeImage, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.nowTreasureDeviceTypeImage;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 12, 0LL);
  }
  restTreasureDeviceChangeTurnLabel = (UnityEngine_Object_o *)this->fields.restTreasureDeviceChangeTurnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restTreasureDeviceChangeTurnLabel, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.restTreasureDeviceChangeTurnLabel;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 13, 0LL);
  }
  iconChangeTypeByTransform = (UnityEngine_Object_o *)this->fields.iconChangeTypeByTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.perf, (int64_t)inPerf, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1C2E388(0LL, stamp);
  if ( effectobj->max_length <= 5 )
    sub_1C2E390(effectobj, stamp);
  effectobj->m_Items[5] = stamp;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&effectobj->m_Items[5], (int64_t)stamp, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall BattleCommandComponent__setShader(
        BattleCommandComponent_o *this,
        System_String_o *shaderName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *facetex; // x21
  struct UITexture_o *v7; // x20
  UnityEngine_Shader_o *v8; // x21
  UnityEngine_Material_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4C0015E & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Material_TypeInfo, shaderName);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    byte_4C0015E = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v7 = this->fields.facetex;
    v8 = UnityEngine_Shader__Find(shaderName, 0LL);
    v9 = (UnityEngine_Material_o *)sub_1C2E378(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v9, v8, 0LL);
    if ( !v7 )
      sub_1C2E388(v10, v11);
    ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v7->klass->vtable._25_set_material.method)(
      v7,
      v9,
      v7->klass->vtable._26_get_mainTexture.methodPtr);
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
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.target, (int64_t)target, (int64_t)method, v3, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__setTouchFlg(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4C00180 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_Collider___, flg);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    byte_4C00180 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v7 )
  {
    if ( !Component_object )
      sub_1C2E388(v7, v8);
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
  BattleCommandComponent_o *v2; // x19
  __int64 v3; // x1
  struct BattleCommandData_o *data; // x8
  BattleCommandData_o *v5; // x0
  DrumRollLabel_o *criticallabel; // x20
  int32_t v7; // w21
  DrumRollLabel_CompleteEventHandler_o *v8; // x22

  v2 = this;
  if ( (byte_4C00173 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattleCommandComponent_compCriticallabel__, method);
    this = (BattleCommandComponent_o *)sub_1C2E12C(&DrumRollLabel_CompleteEventHandler_TypeInfo, v3);
    byte_4C00173 = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_15;
  this = (BattleCommandComponent_o *)v2->fields.criticalObject;
  if ( data->fields.starcount <= 0 )
  {
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
LABEL_15:
    sub_1C2E388(this, method);
  }
  if ( !this )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (BattleCommandComponent_o *)v2->fields.criticallabel;
  v2->fields.isCountUp = 1;
  if ( !this )
    goto LABEL_15;
  DrumRollLabel__setParam((DrumRollLabel_o *)this, 0, 0LL);
  this = (BattleCommandComponent_o *)v2->fields.criticallabel;
  if ( !this )
    goto LABEL_15;
  DrumRollLabel__ChangeParamNonAnimation((DrumRollLabel_o *)this, 0, 1, 0LL);
  v5 = v2->fields.data;
  criticallabel = v2->fields.criticallabel;
  v7 = v5 ? v2->fields.boostedCriticalRate + BattleCommandData__getCriticalPoint(v5, 0LL) : 0;
  v8 = (DrumRollLabel_CompleteEventHandler_o *)sub_1C2E378(DrumRollLabel_CompleteEventHandler_TypeInfo);
  DrumRollLabel_CompleteEventHandler___ctor(
    v8,
    (Il2CppObject *)v2,
    Method_BattleCommandComponent_compCriticallabel__,
    0LL);
  if ( !criticallabel )
    goto LABEL_15;
  DrumRollLabel__changeParam(criticallabel, v7, 1, v8, 0.0, 0LL);
}


void __fastcall BattleCommandComponent__startMoveFloat(BattleCommandComponent_o *this, const MethodInfo *method)
{
  float v3; // s0
  const MethodInfo *v4; // x2

  if ( (byte_4C0016B & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_17072/*"anim_commandfloat"*/, method);
    byte_4C0016B = 1;
  }
  v3 = UnityEngine_Random__Range(0.0, 0.2, 0LL);
  BattleCommandComponent__PlayAnimation(this, (System_String_o *)StringLiteral_17072/*"anim_commandfloat"*/, v3, v4);
}


void __fastcall BattleCommandComponent__stopAnimation(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Component_object; // x21
  Il2CppObject *v6; // x20
  __int64 nomalwidget; // x0
  __int64 v8; // x1
  UnityEngine_Transform_o *v9; // x20
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v11; // x20
  struct UnityEngine_GameObject_array *v12; // x8
  UnityEngine_Object_o *v13; // x19

  if ( (byte_4C0016C & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v3);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    byte_4C0016C = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v6 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    nomalwidget = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
    if ( (nomalwidget & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_29;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v6, 0LL);
    }
  }
  nomalwidget = (__int64)this->fields.nomalwidget;
  if ( !nomalwidget )
    goto LABEL_29;
  nomalwidget = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nomalwidget, 0LL);
  if ( !nomalwidget )
    goto LABEL_29;
  nomalwidget = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)nomalwidget, 0LL);
  v9 = (UnityEngine_Transform_o *)nomalwidget;
  if ( !byte_4BF7D91 )
  {
    nomalwidget = sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v8);
    byte_4BF7D91 = 1;
  }
  if ( !v9
    || (UnityEngine_Transform__set_localPosition(v9, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL),
        (effectobj = this->fields.effectobj) == 0LL) )
  {
LABEL_29:
    sub_1C2E388(nomalwidget, v8);
  }
  if ( effectobj->max_length <= 2 )
    goto LABEL_30;
  v11 = (UnityEngine_Object_o *)effectobj->m_Items[2];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  nomalwidget = UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  if ( (nomalwidget & 1) != 0 )
  {
    v12 = this->fields.effectobj;
    if ( v12 )
    {
      if ( v12->max_length > 2 )
      {
        v13 = (UnityEngine_Object_o *)v12->m_Items[2];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__DestroyImmediate_70989908(v13, 0LL);
        return;
      }
LABEL_30:
      sub_1C2E390(nomalwidget, v8);
    }
    goto LABEL_29;
  }
}


void __fastcall BattleCommandComponent__stopFirstAura(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  UnityEngine_Object_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v2 = this;
  if ( (byte_4C00170 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C00170 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_16;
  if ( effectobj->max_length <= 4 )
    goto LABEL_17;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[4];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( v5 )
    {
      if ( v5->max_length <= 4 )
        goto LABEL_17;
      v6 = (UnityEngine_Object_o *)v5->m_Items[4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70989720(v6, 0LL);
      this = (BattleCommandComponent_o *)v2->fields.effectobj;
      if ( this )
      {
        if ( LODWORD(this->fields.m_CancellationTokenSource) > 4 )
        {
          this->fields.facetex = 0LL;
          sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.facetex, 0LL, v7, v8, v9, v10, v11, v12);
          return;
        }
LABEL_17:
        sub_1C2E390(this, method);
      }
    }
LABEL_16:
    sub_1C2E388(this, method);
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
  if ( (byte_4C0018D & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, targetSvt);
    byte_4C0018D = 1;
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          sub_1C2E388(this, targetSvt);
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
          sub_1C2E390(this, targetSvt);
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
  BattleCommandData_o *data; // x0
  int32_t v7; // w20
  UnityEngine_GameObject_o *criticalObject; // x0
  struct DrumRollLabel_o *criticallabel; // x22
  DrumRollLabel_o *v10; // x0
  int32_t v11; // w1
  DrumRollLabel_CompleteEventHandler_o *v12; // x3
  DrumRollLabel_CompleteEventHandler_o *v13; // x21

  if ( (byte_4C00174 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattleCommandComponent_compCriticallabel__, isNonAnimation);
    sub_1C2E12C(&DrumRollLabel_CompleteEventHandler_TypeInfo, v5);
    byte_4C00174 = 1;
  }
  data = this->fields.data;
  if ( !data || (v7 = this->fields.boostedCriticalRate + BattleCommandData__getCriticalPoint(data, 0LL), v7 <= 0) )
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
    sub_1C2E388(criticalObject, isNonAnimation);
  }
  if ( isNonAnimation )
  {
    DrumRollLabel__ChangeParamNonAnimation(this->fields.criticallabel, v7, 0, 0LL);
  }
  else
  {
    if ( v7 >= criticallabel->fields.nowvalue )
    {
      v13 = (DrumRollLabel_CompleteEventHandler_o *)sub_1C2E378(DrumRollLabel_CompleteEventHandler_TypeInfo);
      DrumRollLabel_CompleteEventHandler___ctor(
        v13,
        (Il2CppObject *)this,
        Method_BattleCommandComponent_compCriticallabel__,
        0LL);
      v10 = criticallabel;
      v11 = v7;
      v12 = v13;
    }
    else
    {
      v10 = this->fields.criticallabel;
      v11 = v7;
      v12 = 0LL;
    }
    DrumRollLabel__changeParam(v10, v11, 1, v12, 0.0, 0LL);
  }
}


void __fastcall BattleCommandComponent__updateSelectedEffect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  BattleCommandComponent_o *v6; // x20
  struct UnityEngine_GameObject_array *v7; // x8
  BattleCommandComponent_o *v8; // x20
  struct UnityEngine_GameObject_array *v9; // x8
  BattleCommandComponent_o *v10; // x20
  struct UnityEngine_GameObject_array *v11; // x8
  struct UnityEngine_GameObject_array *v12; // x8
  UnityEngine_Object_o *v13; // x20
  struct UnityEngine_GameObject_array *v14; // x8
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C00172 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C00172 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_41;
  if ( effectobj->max_length <= 3 )
LABEL_42:
    sub_1C2E390(this, method);
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[3];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_41;
    if ( v5->max_length <= 3 )
      goto LABEL_42;
    this = (BattleCommandComponent_o *)v5->m_Items[3];
    if ( !this )
      goto LABEL_41;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !v2->fields.nomalwidget )
      goto LABEL_41;
    v6 = this;
    this = (BattleCommandComponent_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)v2->fields.nomalwidget,
                                         0LL);
    if ( !v6 )
      goto LABEL_41;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v6, (UnityEngine_Transform_o *)this, 0LL);
    v7 = v2->fields.effectobj;
    if ( !v7 )
      goto LABEL_41;
    if ( v7->max_length <= 3 )
      goto LABEL_42;
    this = (BattleCommandComponent_o *)v7->m_Items[3];
    if ( !this )
      goto LABEL_41;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    v8 = this;
    if ( !byte_4BF7D91 )
    {
      this = (BattleCommandComponent_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, method);
      byte_4BF7D91 = 1;
    }
    if ( !v8 )
      goto LABEL_41;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)v8,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0LL);
    v9 = v2->fields.effectobj;
    if ( !v9 )
      goto LABEL_41;
    if ( v9->max_length <= 3 )
      goto LABEL_42;
    this = (BattleCommandComponent_o *)v9->m_Items[3];
    if ( !this )
      goto LABEL_41;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    v10 = this;
    if ( !byte_4BF7D99 )
    {
      this = (BattleCommandComponent_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, method);
      byte_4BF7D99 = 1;
    }
    if ( !v10 )
      goto LABEL_41;
    UnityEngine_Transform__set_eulerAngles(
      (UnityEngine_Transform_o *)v10,
      UnityEngine_Vector3_TypeInfo->static_fields->upVector,
      0LL);
    v11 = v2->fields.effectobj;
    if ( !v11 )
      goto LABEL_41;
    if ( v11->max_length <= 3 )
      goto LABEL_42;
    this = (BattleCommandComponent_o *)v11->m_Items[3];
    if ( !this )
      goto LABEL_41;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_41;
    v15.fields.x = 1.0;
    v15.fields.y = 1.0;
    v15.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v15, 0LL);
  }
  v12 = v2->fields.effectobj;
  if ( !v12 )
    goto LABEL_41;
  if ( v12->max_length <= 4 )
    goto LABEL_42;
  v13 = (UnityEngine_Object_o *)v12->m_Items[4];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v14 = v2->fields.effectobj;
    if ( !v14 )
      goto LABEL_41;
    if ( v14->max_length > 4 )
    {
      this = (BattleCommandComponent_o *)v14->m_Items[4];
      if ( this )
      {
        this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( this )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v2->fields.objectRoot, 0LL);
          return;
        }
      }
LABEL_41:
      sub_1C2E388(this, method);
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
  __int64 v28; // x1
  __int64 v29; // x1
  System_String_o *v30; // x21
  __int64 v31; // x28
  __int64 transform; // x0
  __int64 v33; // x1
  UnityEngine_Transform_o *v34; // x26
  __int64 v35; // x1
  struct UIWidget_o *nomalwidget; // x0
  UnityEngine_GameObject_o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x1
  UnityEngine_GameObject_o *criticalObject; // x0
  const MethodInfo *v41; // x2
  BattleCommandData_o *data; // x0
  __int64 v43; // x1
  UnityEngine_Behaviour_o *facetex; // x0
  __int64 v45; // x1
  UnityEngine_Behaviour_o *icon; // x0
  __int64 v47; // x1
  UnityEngine_Behaviour_o *text; // x0
  __int64 v49; // x1
  UISprite_o *bg; // x0
  __int64 v51; // x1
  UIWidget_o *v52; // x0
  __int64 v53; // x1
  UIWidget_o *v54; // x0
  __int64 v55; // x1
  UnityEngine_Behaviour_o *friendIcon; // x0
  BattleCommandSealStatus_o *v57; // x20
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  BattleCommandComponent_o *v64; // x0
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v68; // x1
  BattleServantData_o *svtData; // x23
  BattleCommandData_o *v70; // x24
  UnityEngine_Object_o *perf; // x25
  _BOOL8 v72; // x0
  __int64 v73; // x1
  struct BattlePerformance_o *v74; // x8
  BattleData_o *v75; // x25
  BattleCommandSealStatus_o *v76; // x26
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  __int64 v83; // x1
  UIWidget_o **p_facetex; // x23
  UITexture_o *v85; // x24
  BattleCommandData_o *v86; // x0
  __int64 v87; // x1
  int32_t ImageServantId; // w25
  BattleCommandData_o *v89; // x0
  __int64 loadSvtLimit; // x0
  __int64 v91; // x1
  struct BattleCommandData_o *v92; // x8
  int32_t v93; // w26
  int32_t svtlimit; // w27
  UnityEngine_Object_o *Manager__loadCommandCard; // x24
  __int64 v96; // x1
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  UnityEngine_Behaviour_o *v103; // x0
  __int64 v104; // x1
  UnityEngine_Behaviour_o *v105; // x0
  UnityEngine_Object_o *v106; // x24
  _BOOL8 v107; // x0
  __int64 v108; // x1
  UnityEngine_Behaviour_o *v109; // x0
  struct BattleCommandData_o *v110; // x8
  UnityEngine_Object_o *v111; // x22
  int treasureDvc; // w9
  uint32_t cctor_finished; // w8
  __int64 v114; // x1
  __int64 v115; // x1
  __int64 v116; // x1
  BattleCommandData_o *v117; // x0
  __int64 v118; // x1
  __int64 *v119; // x8
  BattleCommandData_o *v120; // x0
  BattleCommandData_o *v121; // x0
  Il2CppObject *v122; // x22
  UnityEngine_Behaviour_o *v123; // x0
  __int64 v124; // x0
  __int64 v125; // x1
  struct BattleCommandData_o *v126; // x8
  UISprite_o *v127; // x23
  FileName_c *v128; // x0
  __int64 v129; // x1
  UnityEngine_Behaviour_o *v130; // x0
  __int64 v131; // x0
  UISprite_o *v132; // x23
  FileName_c *v133; // x0
  __int64 v134; // x1
  UnityEngine_Behaviour_o *v135; // x0
  UISprite_o *v136; // x23
  System_String_o *v137; // x0
  UISprite_o *v138; // x21
  System_String_o *v139; // x0
  UISprite_o *v140; // x21
  System_String_o *v141; // x0
  __int64 v142; // x0
  __int64 v143; // x1
  struct UISprite_o *v144; // x21
  UISpriteData_o *AtlasSprite; // x0
  __int64 v146; // x1
  int width; // w22
  UISpriteData_o *v148; // x0
  __int64 v149; // x1
  __int64 v150; // x1
  UnityEngine_Component_o *v151; // x0
  UnityEngine_GameObject_o *v152; // x0
  __int64 v153; // x1
  __int64 v154; // x0
  __int64 v155; // x1
  UnityEngine_Transform_o *v156; // x21
  const MethodInfo *v157; // x1
  __int64 v158; // x0
  const MethodInfo *v159; // x1
  struct BattleCommandData_o *v160; // x8
  UnityEngine_Behaviour_o *v161; // x0
  __int64 v162; // x1
  BattleCommandData_o *v163; // x0
  UITexture_o *nobletex; // x21
  __int64 v165; // x1
  int32_t v166; // w22
  BattleCommandData_o *v167; // x0
  __int64 v168; // x0
  __int64 v169; // x1
  struct BattleCommandData_o *v170; // x8
  int32_t v171; // w23
  int32_t v172; // w24
  bool Manager__loadNobleName; // w21
  UnityEngine_Object_o *v174; // x22
  __int64 v175; // x1
  const MethodInfo *v176; // x2
  UnityEngine_Component_o *v177; // x0
  UnityEngine_GameObject_o *v178; // x0
  __int64 v179; // x1
  BattleCommandComponent_o *PrioredStatus; // x0
  const MethodInfo *v181; // x1
  const MethodInfo *v182; // x2
  struct BattleCommandData_o *v183; // x8
  __int64 v184; // x0
  __int64 v185; // x1
  const MethodInfo *v186; // x2
  struct BattleCommandData_o *v187; // x8
  const MethodInfo *v188; // x2
  UnityEngine_Object_o *svtId_label; // x20
  struct BattleCommandData_o *v190; // x8
  UILabel_o *v191; // x19
  System_String_o *v192; // x1
  UISprite_o *v193; // x0
  const MethodInfo *v194; // x3
  const MethodInfo *v195; // x1
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v197; // x1
  const MethodInfo *v198; // x3
  __int64 v199; // x1
  BattleCommandData_o *v200; // x0
  UISprite_o *donotActTypeSprite; // x20
  BattleCommandComponent_o *type; // x0
  const MethodInfo *v203; // x2
  System_String_o *CardTypeSealSpriteName; // x0
  BattleCommandData_o *v205; // x0
  UnityEngine_Object_o *displayRemainingTurn; // x20
  UILabel_o *v207; // x20
  System_String_o *v208; // x21
  const MethodInfo *v209; // x1
  const MethodInfo *v210; // x0
  __int64 v211; // x1
  InvokerMethod invoker_method; // x8
  int v213; // w8
  int v214; // w8
  __int64 v215; // x2
  __int64 v216; // x3
  __int64 v217; // x4
  Il2CppObject *v218; // x1
  System_String_o *v219; // x0
  int v220; // [xsp+8h] [xbp-68h] BYREF
  int32_t svtId; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C00168 & 1) == 0 )
  {
    sub_1C2E12C(&BattleCommandSealStatus_TypeInfo, initFlg);
    sub_1C2E12C(&FileName_TypeInfo, v13);
    sub_1C2E12C(&int_TypeInfo, v14);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v15);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v16);
    sub_1C2E12C(&ServantAssetLoadManager_TypeInfo, v17);
    sub_1C2E12C(&StringLiteral_18080/*"card_bg_blank"*/, v18);
    sub_1C2E12C(&StringLiteral_5146/*"DISPLAY_REMAINING_TURN"*/, v19);
    sub_1C2E12C(&StringLiteral_22527/*"none"*/, v20);
    sub_1C2E12C(&StringLiteral_17215/*"arts"*/, v21);
    sub_1C2E12C(&StringLiteral_18102/*"card_txt_{0}"*/, v22);
    sub_1C2E12C(&StringLiteral_17955/*"buster"*/, v23);
    sub_1C2E12C(&StringLiteral_23161/*"quick"*/, v24);
    sub_1C2E12C(&StringLiteral_18094/*"card_icon_{0}"*/, v25);
    sub_1C2E12C(&StringLiteral_18082/*"card_bg_{0}"*/, v26);
    sub_1C2E12C(&StringLiteral_1/*""*/, v27);
    sub_1C2E12C(&StringLiteral_19669/*"extra"*/, v28);
    sub_1C2E12C(&StringLiteral_18081/*"card_bg_np{0}"*/, v29);
    byte_4C00168 = 1;
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
    goto LABEL_155;
  }
  v30 = (System_String_o *)StringLiteral_18082/*"card_bg_{0}"*/;
  v31 = StringLiteral_22527/*"none"*/;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v34 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4BF7D96 )
  {
    transform = sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v33);
    byte_4BF7D96 = 1;
  }
  if ( !v34 )
    sub_1C2E388(transform, v33);
  UnityEngine_Transform__set_localScale(v34, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  if ( initFlg )
  {
    nomalwidget = this->fields.nomalwidget;
    if ( !nomalwidget )
      sub_1C2E388(0LL, v35);
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))nomalwidget->klass->vtable._8_set_alpha.method)(
      nomalwidget,
      nomalwidget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
  }
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v37 )
    sub_1C2E388(0LL, v38);
  UnityEngine_GameObject__SetActive(v37, 1, 0LL);
  if ( !isAttack )
  {
    criticalObject = this->fields.criticalObject;
    if ( !criticalObject )
      sub_1C2E388(0LL, v39);
    UnityEngine_GameObject__SetActive(criticalObject, 0, 0LL);
    BattleCommandComponent__setBuffIconList(this, isShowBuffIcon, v41);
  }
  data = this->fields.data;
  if ( !data )
    sub_1C2E388(0LL, v39);
  if ( BattleCommandData__isBlank(data, 0LL) )
  {
    facetex = (UnityEngine_Behaviour_o *)this->fields.facetex;
    if ( !facetex )
      sub_1C2E388(0LL, v43);
    UnityEngine_Behaviour__set_enabled(facetex, 0, 0LL);
    icon = (UnityEngine_Behaviour_o *)this->fields.icon;
    if ( !icon )
      sub_1C2E388(0LL, v45);
    UnityEngine_Behaviour__set_enabled(icon, 0, 0LL);
    text = (UnityEngine_Behaviour_o *)this->fields.text;
    if ( !text )
      sub_1C2E388(0LL, v47);
    UnityEngine_Behaviour__set_enabled(text, 0, 0LL);
    bg = this->fields.bg;
    if ( !bg )
      sub_1C2E388(0LL, v49);
    UISprite__set_spriteName(bg, (System_String_o *)StringLiteral_18080/*"card_bg_blank"*/, 0LL);
    v52 = (UIWidget_o *)this->fields.bg;
    if ( !v52 )
      sub_1C2E388(0LL, v51);
    UIWidget__set_height(v52, 170, 0LL);
    v54 = (UIWidget_o *)this->fields.bg;
    if ( !v54 )
      sub_1C2E388(0LL, v53);
    UIWidget__set_width(v54, 133, 0LL);
    friendIcon = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !friendIcon )
      sub_1C2E388(0LL, v55);
    UnityEngine_Behaviour__set_enabled(friendIcon, 0, 0LL);
    v57 = (BattleCommandSealStatus_o *)sub_1C2E378(BattleCommandSealStatus_TypeInfo);
    BattleCommandSealStatus___ctor(v57, 0LL);
    this->fields.sealStatus = v57;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.sealStatus, (int64_t)v57, v58, v59, v60, v61, v62, v63);
    BattleCommandComponent__SetActiveComponent(
      v64,
      (UnityEngine_Component_o *)this->fields.iconChangeTypeByTransform,
      0,
      v65);
    goto LABEL_121;
  }
  v70 = this->fields.data;
  svtData = this->fields.svtData;
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v72 = UnityEngine_Object__op_Implicit(perf, 0LL);
  if ( v72 )
  {
    v74 = this->fields.perf;
    if ( !v74 )
      sub_1C2E388(v72, v73);
    v75 = v74->fields.data;
  }
  else
  {
    v75 = 0LL;
  }
  v76 = (BattleCommandSealStatus_o *)sub_1C2E378(BattleCommandSealStatus_TypeInfo);
  BattleCommandSealStatus___ctor_44769988(v76, v70, svtData, v75, 0LL);
  this->fields.sealStatus = v76;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.sealStatus, (int64_t)v76, v77, v78, v79, v80, v81, v82);
  p_facetex = (UIWidget_o **)&this->fields.facetex;
  v85 = this->fields.facetex;
  v86 = this->fields.data;
  if ( !v86 )
    sub_1C2E388(0LL, v83);
  ImageServantId = BattleCommandData__GetImageServantId(v86, 0LL);
  v89 = this->fields.data;
  if ( !v89 )
    sub_1C2E388(0LL, v87);
  loadSvtLimit = BattleCommandData__get_loadSvtLimit(v89, 0LL);
  v92 = this->fields.data;
  if ( !v92 )
    sub_1C2E388(loadSvtLimit, v91);
  v93 = loadSvtLimit;
  svtlimit = v92->fields.svtlimit;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__loadCommandCard = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCard(
                                                       v85,
                                                       ImageServantId,
                                                       v93,
                                                       svtlimit,
                                                       0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCard, 0LL, 0LL) )
  {
    *p_facetex = (UIWidget_o *)Manager__loadCommandCard;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.facetex,
      (int64_t)Manager__loadCommandCard,
      v97,
      v98,
      v99,
      v100,
      v101,
      v102);
  }
  v103 = (UnityEngine_Behaviour_o *)this->fields.icon;
  if ( !v103 )
    sub_1C2E388(0LL, v96);
  UnityEngine_Behaviour__set_enabled(v103, 1, 0LL);
  v105 = (UnityEngine_Behaviour_o *)this->fields.text;
  if ( !v105 )
    sub_1C2E388(0LL, v104);
  UnityEngine_Behaviour__set_enabled(v105, 1, 0LL);
  v106 = (UnityEngine_Object_o *)*p_facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v107 = UnityEngine_Object__op_Inequality(v106, 0LL, 0LL);
  if ( v107 )
  {
    v109 = (UnityEngine_Behaviour_o *)*p_facetex;
    if ( isCharaHide )
    {
      if ( !v109 )
        sub_1C2E388(0LL, v108);
      UnityEngine_Behaviour__set_enabled(v109, 0, 0LL);
    }
    else
    {
      if ( !v109 )
        sub_1C2E388(0LL, v108);
      UnityEngine_Behaviour__set_enabled(v109, 1, 0LL);
    }
  }
  v110 = this->fields.data;
  if ( !v110 )
    sub_1C2E388(v107, v108);
  v111 = (UnityEngine_Object_o *)*p_facetex;
  treasureDvc = v110->fields.treasureDvc;
  cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
  if ( treasureDvc < 1 )
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v111, 0LL, 0LL) )
    {
      if ( !*p_facetex )
        sub_1C2E388(0LL, v114);
      UIWidget__set_height(*p_facetex, 191, 0LL);
      if ( !*p_facetex )
        sub_1C2E388(0LL, v116);
      UIWidget__set_width(*p_facetex, 191, 0LL);
    }
  }
  else
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v111, 0LL, 0LL) )
    {
      if ( !*p_facetex )
        sub_1C2E388(0LL, v114);
      UIWidget__set_height(*p_facetex, 191, 0LL);
      if ( !*p_facetex )
        sub_1C2E388(0LL, v115);
      UIWidget__set_width(*p_facetex, 191, 0LL);
    }
    v30 = (System_String_o *)StringLiteral_18081/*"card_bg_np{0}"*/;
  }
  v117 = this->fields.data;
  if ( !v117 )
    sub_1C2E388(0LL, v114);
  if ( BattleCommandData__isBuster(v117, 0LL) )
  {
    v119 = &StringLiteral_17955/*"buster"*/;
  }
  else
  {
    v120 = this->fields.data;
    if ( !v120 )
      sub_1C2E388(0LL, v118);
    if ( BattleCommandData__isQuick(v120, 0LL) )
    {
      v119 = &StringLiteral_23161/*"quick"*/;
    }
    else
    {
      v121 = this->fields.data;
      if ( !v121 )
        sub_1C2E388(0LL, v118);
      if ( !BattleCommandData__isArts(v121, 0LL) )
      {
        v205 = this->fields.data;
        if ( !v205 )
          sub_1C2E388(0LL, v118);
        if ( BattleCommandData__isAddAttack(v205, 0LL) )
          v122 = (Il2CppObject *)StringLiteral_19669/*"extra"*/;
        else
          v122 = (Il2CppObject *)v31;
        goto LABEL_76;
      }
      v119 = &StringLiteral_17215/*"arts"*/;
    }
  }
  v122 = (Il2CppObject *)*v119;
LABEL_76:
  v123 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
  if ( !v123 )
    sub_1C2E388(0LL, v118);
  UnityEngine_Behaviour__set_enabled(v123, 0, 0LL);
  v126 = this->fields.data;
  if ( !v126 )
    sub_1C2E388(v124, v125);
  if ( v126->fields.follower )
  {
    v127 = this->fields.friendIcon;
    v128 = FileName_TypeInfo;
    if ( !FileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    if ( !v127 )
      sub_1C2E388(v128, v125);
    UISprite__set_spriteName(v127, FileName_TypeInfo->static_fields->friendIconName, 0LL);
    v130 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !v130 )
      sub_1C2E388(0LL, v129);
    UnityEngine_Behaviour__set_enabled(v130, 1, 0LL);
    v126 = this->fields.data;
    if ( !v126 )
      sub_1C2E388(v131, v125);
  }
  if ( v126->fields.flgEventJoin )
  {
    v132 = this->fields.friendIcon;
    v133 = FileName_TypeInfo;
    if ( !FileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    if ( !v132 )
      sub_1C2E388(v133, v125);
    UISprite__set_spriteName(v132, FileName_TypeInfo->static_fields->eventJoinIconName, 0LL);
    v135 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !v135 )
      sub_1C2E388(0LL, v134);
    UnityEngine_Behaviour__set_enabled(v135, 1, 0LL);
  }
  v136 = this->fields.bg;
  v137 = System_String__Format(v30, v122, 0LL);
  if ( !v136 )
    sub_1C2E388(v137, v137);
  UISprite__set_spriteName(v136, v137, 0LL);
  v138 = this->fields.icon;
  v139 = System_String__Format((System_String_o *)StringLiteral_18094/*"card_icon_{0}"*/, v122, 0LL);
  if ( !v138 )
    sub_1C2E388(v139, v139);
  UISprite__set_spriteName(v138, v139, 0LL);
  v140 = this->fields.text;
  v141 = System_String__Format((System_String_o *)StringLiteral_18102/*"card_txt_{0}"*/, v122, 0LL);
  if ( !v140 )
    sub_1C2E388(v141, v141);
  UISprite__set_spriteName(v140, v141, 0LL);
  v144 = this->fields.text;
  if ( !v144 )
    sub_1C2E388(v142, v143);
  AtlasSprite = UISprite__GetAtlasSprite(this->fields.text, 0LL);
  if ( !AtlasSprite )
    sub_1C2E388(0LL, v146);
  if ( !this->fields.text )
    sub_1C2E388(AtlasSprite, v146);
  width = AtlasSprite->fields.width;
  v148 = UISprite__GetAtlasSprite(this->fields.text, 0LL);
  if ( !v148 )
    sub_1C2E388(0LL, v149);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float, float, float, float))v144->klass->vtable._18_SetRect.method)(
    v144,
    v144->klass->vtable._19_ParentHasChanged.methodPtr,
    0.0,
    0.0,
    (float)width,
    (float)v148->fields.height);
  v151 = (UnityEngine_Component_o *)this->fields.text;
  if ( !v151 )
    sub_1C2E388(0LL, v150);
  v152 = UnityEngine_Component__get_gameObject(v151, 0LL);
  if ( !v152 )
    sub_1C2E388(0LL, v153);
  v154 = (__int64)UnityEngine_GameObject__get_transform(v152, 0LL);
  v156 = (UnityEngine_Transform_o *)v154;
  if ( !byte_4BF7D91 )
  {
    v154 = sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v155);
    byte_4BF7D91 = 1;
  }
  if ( !v156 )
    sub_1C2E388(v154, v155);
  UnityEngine_Transform__set_localPosition(v156, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  BattleCommandComponent__UpdateIconChangeTypeByTransform(this, v157);
  v160 = this->fields.data;
  if ( !v160 )
    sub_1C2E388(v158, v159);
  if ( v160->fields.treasureDvc >= 1 )
  {
    v161 = (UnityEngine_Behaviour_o *)this->fields.text;
    if ( !v161 )
      sub_1C2E388(0LL, v159);
    UnityEngine_Behaviour__set_enabled(v161, 0, 0LL);
    v163 = this->fields.data;
    if ( !v163 )
      sub_1C2E388(0LL, v162);
    nobletex = this->fields.nobletex;
    v166 = BattleCommandData__GetImageServantId(v163, 0LL);
    v167 = this->fields.data;
    if ( !v167 )
      sub_1C2E388(0LL, v165);
    v168 = BattleCommandData__get_loadSvtLimit(v167, 0LL);
    v170 = this->fields.data;
    if ( !v170 )
      sub_1C2E388(v168, v169);
    v171 = v168;
    v172 = v170->fields.treasureDvc;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    Manager__loadNobleName = ServantAssetLoadManager__loadNobleName(nobletex, v166, v171, v172, 0LL);
    v174 = (UnityEngine_Object_o *)this->fields.nobletex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v174, 0LL, 0LL) )
    {
      v177 = (UnityEngine_Component_o *)this->fields.nobletex;
      if ( !v177 )
        sub_1C2E388(0LL, v175);
      v178 = UnityEngine_Component__get_gameObject(v177, 0LL);
      if ( !v178 )
        sub_1C2E388(0LL, v179);
      UnityEngine_GameObject__SetActive(v178, Manager__loadNobleName, 0LL);
    }
    BattleCommandComponent__UpdateTDTypeChange(this, isTDTypeChangeWindow, v176);
  }
  BattleCommandComponent__InitUnusableMarks(this, v159);
  if ( !isTDTypeChangeWindow )
  {
    v193 = BattleCommandComponent__ChoiceUnusableMarkSprite(this, v181);
    BattleCommandComponent__SetActiveComponent(
      (BattleCommandComponent_o *)v193,
      (UnityEngine_Component_o *)v193,
      1,
      v194);
    SealStatus = BattleCommandComponent__get_SealStatus(this, v195);
    if ( !SealStatus )
      sub_1C2E388(0LL, v197);
    PrioredStatus = (BattleCommandComponent_o *)BattleCommandSealStatus__get_PrioredStatus(SealStatus, 0LL);
    switch ( (_DWORD)PrioredStatus )
    {
      case 1:
        BattleCommandComponent__SetActiveComponent(
          PrioredStatus,
          (UnityEngine_Component_o *)this->fields.displayRemainingTurn,
          1,
          v198);
        displayRemainingTurn = (UnityEngine_Object_o *)this->fields.displayRemainingTurn;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        PrioredStatus = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(displayRemainingTurn, 0LL, 0LL);
        if ( ((unsigned __int8)PrioredStatus & 1) != 0 )
        {
          v207 = this->fields.displayRemainingTurn;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v208 = LocalizationManager__Get((System_String_o *)StringLiteral_5146/*"DISPLAY_REMAINING_TURN"*/, 0LL);
          v210 = (const MethodInfo *)BattleCommandComponent__get_SealStatus(this, v209);
          if ( !v210 )
            sub_1C2E388(0LL, v211);
          invoker_method = v210->invoker_method;
          if ( !invoker_method )
            sub_1C2E388(v210, v211);
          v213 = *((_DWORD *)invoker_method + 5);
          if ( v213 + 1 >= 0 )
            v214 = v213 + 1;
          else
            v214 = v213 + 2;
          v220 = BattleUtility__FloorToLong((float)(v214 >> 1), v210);
          v218 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v220, v215, v216, v217);
          v219 = System_String__Format(v208, v218, 0LL);
          if ( !v207 )
            sub_1C2E388(v219, v219);
          UILabel__set_text(v207, v219, 0LL);
        }
        break;
      case 8:
        BattleCommandComponent__SetActiveComponent(
          PrioredStatus,
          (UnityEngine_Component_o *)this->fields.donotActCardSprite,
          1,
          v198);
        break;
      case 9:
        BattleCommandComponent__SetActiveComponent(
          PrioredStatus,
          (UnityEngine_Component_o *)this->fields.donotActTypeSprite,
          1,
          v198);
        v200 = this->fields.data;
        if ( !v200 )
          sub_1C2E388(0LL, v199);
        donotActTypeSprite = this->fields.donotActTypeSprite;
        type = (BattleCommandComponent_o *)BattleCommandData__get_type(v200, 0LL);
        CardTypeSealSpriteName = BattleCommandComponent__getCardTypeSealSpriteName(type, (int32_t)type, v203);
        if ( !donotActTypeSprite )
          sub_1C2E388(CardTypeSealSpriteName, CardTypeSealSpriteName);
        UISprite__set_spriteName(donotActTypeSprite, CardTypeSealSpriteName, 0LL);
        break;
    }
  }
  v183 = this->fields.data;
  if ( !v183 )
    sub_1C2E388(PrioredStatus, v181);
  BattleCommandComponent__SetCommandCodeView_44532928(this, v183->fields.commandCodeId, v182);
  v187 = this->fields.data;
  if ( !v187 )
    sub_1C2E388(v184, v185);
  BattleCommandComponent__SetCommandAssistView(this, v187->fields.commandAssistId, v186);
  BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, 0, v188);
LABEL_121:
  BattleCommandComponent__setTouchFlg(this, 1, v66);
  svtId_label = (UnityEngine_Object_o *)this->fields.svtId_label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(svtId_label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v190 = this->fields.data;
    if ( v190 )
    {
      v191 = this->fields.svtId_label;
      svtId = v190->fields.svtId;
      gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&svtId, 0LL);
      if ( v191 )
      {
        if ( gameObject )
          v192 = (System_String_o *)gameObject;
        else
          v192 = (System_String_o *)StringLiteral_1/*""*/;
        UILabel__set_text(v191, v192, 0LL);
        return;
      }
    }
LABEL_155:
    sub_1C2E388(gameObject, v68);
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
  __int64 v3; // x1
  int32_t _1__state; // w8
  float preDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  bool result; // w0
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0

  if ( (byte_4C00356 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattleCommandComponent__PlayStarSe_d__161_MoveNext__, method);
    sub_1C2E12C(&UnityEngine_WaitForSeconds_TypeInfo, v3);
    byte_4C00356 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v14 = Method_BattleCommandComponent__PlayStarSe_d__161_MoveNext__;
    if ( (*((_BYTE *)Method_BattleCommandComponent__PlayStarSe_d__161_MoveNext__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1C2E144(Method_BattleCommandComponent__PlayStarSe_d__161_MoveNext__);
    v15 = (System_Reflection_MethodBase_o *)sub_1C2E110(v14, v14[4]);
    OverwriteAssetSoundName__PlayCommonSe(v15, 7, 0, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    preDelayTime = this->fields.preDelayTime;
    v6 = (UnityEngine_WaitForSeconds_o *)sub_1C2E378(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v6, preDelayTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v6, v7, v8, v9, v10, v11, v12);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_BattleCommandComponent__PlayStarSe_d__161_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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
  BattleCommandComponent__WaitForErrorViewFinished_d__244_o *v2; // x19
  __int64 v3; // x1
  BattleCommandComponent_o *_4__this; // x20
  float waitSeconds; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  bool result; // w0
  System_String_o *busyVoiceSe; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  int v22; // w8
  System_String_o *v23; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Action_o *tdErrorAfterAction; // x8

  v2 = this;
  if ( (byte_4C00357 & 1) == 0 )
  {
    sub_1C2E12C(&SoundManager_TypeInfo, method);
    this = (BattleCommandComponent__WaitForErrorViewFinished_d__244_o *)sub_1C2E12C(
                                                                          &UnityEngine_WaitForSeconds_TypeInfo,
                                                                          v3);
    byte_4C00357 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      waitSeconds = v2->fields.waitSeconds;
      v6 = (UnityEngine_WaitForSeconds_o *)sub_1C2E378(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v6, waitSeconds, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v6;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v2->fields.__2__current, (int64_t)v6, v7, v8, v9, v10, v11, v12);
      result = 1;
      v2->fields.__1__state = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_24;
      BattleCommandComponent__startMoveFloat(_4__this, 0LL);
      if ( System_String__IsNullOrEmpty(v2->fields.busyVoiceSe, 0LL) )
        goto LABEL_20;
LABEL_9:
      busyVoiceSe = v2->fields.busyVoiceSe;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      if ( SoundManager__isBusyVoice(busyVoiceSe, 0LL) )
      {
        v2->fields.__2__current = 0LL;
        p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C2E0D0(p__2__current, 0LL, v15, v16, v17, v18, v19, v20);
        v22 = 2;
LABEL_18:
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = v22;
        return 1;
      }
LABEL_14:
      v23 = v2->fields.busyVoiceSe;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      this = (BattleCommandComponent__WaitForErrorViewFinished_d__244_o *)SoundManager__isBusySe(v23, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C2E0D0(p__2__current, 0LL, v24, v25, v26, v27, v28, v29);
        v22 = 3;
        goto LABEL_18;
      }
      if ( !_4__this )
LABEL_24:
        sub_1C2E388(this, method);
LABEL_20:
      tdErrorAfterAction = _4__this->fields.tdErrorAfterAction;
      if ( tdErrorAfterAction )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))tdErrorAfterAction->fields.m_target)(
          tdErrorAfterAction->fields.original_method_info,
          *(_QWORD *)&tdErrorAfterAction->fields.extra_arg);
      return 0;
    case 2:
      v2->fields.__1__state = -1;
      goto LABEL_9;
    case 3:
      v2->fields.__1__state = -1;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_BattleCommandComponent__WaitForErrorViewFinished_d__244_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C00352 & 1) == 0 )
  {
    sub_1C2E12C(&BattleCommandComponent___c_TypeInfo, v1);
    byte_4C00352 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(BattleCommandComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleCommandComponent___c_TypeInfo->static_fields->__9 = (struct BattleCommandComponent___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)BattleCommandComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C2E388(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


bool __fastcall BattleCommandComponent___c___UpdateCommandCardTypeChange_b__227_0(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_1C2E388(this, 0LL);
  return c->fields.buffType == 156;
}


bool __fastcall BattleCommandComponent___c___UpdateFixedCommandCard_b__211_0(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_1C2E388(this, 0LL);
  return c->fields.buffType == 131;
}


int32_t __fastcall BattleCommandComponent___c___selectCard_b__188_0(
        BattleCommandComponent___c_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_4C00353 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__, x.fields.key);
    byte_4C00353 = 1;
  }
  return value;
}


void __fastcall BattleCommandComponent___c__DisplayClass138_0___ctor(
        BattleCommandComponent___c__DisplayClass138_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleCommandComponent___c__DisplayClass138_0___setBuffIconList_b__0(
        BattleCommandComponent___c__DisplayClass138_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleCommandComponent___c__DisplayClass138_0_o *v4; // x20
  struct BattleCommandComponent_o *_4__this; // x8
  struct BattleCommandData_o *data; // x8

  if ( !buff )
    goto LABEL_8;
  v4 = this;
  this = (BattleCommandComponent___c__DisplayClass138_0_o *)BattleBuffData_BuffData__isCommandCodeBuff(buff, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  _4__this = v4->fields.__4__this;
  if ( !_4__this || (data = _4__this->fields.data) == 0LL )
LABEL_8:
    sub_1C2E388(this, buff);
  return !BattleBuffData_BuffData__IsMineCommandCode(buff, data->fields.userCommandCodeId, 0LL);
}


bool __fastcall BattleCommandComponent___c__DisplayClass138_0___setBuffIconList_b__1(
        BattleCommandComponent___c__DisplayClass138_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleCommandComponent___c__DisplayClass138_0_o *v4; // x20
  struct BattleCommandComponent_o *_4__this; // x8

  if ( !buff )
    goto LABEL_7;
  v4 = this;
  this = (BattleCommandComponent___c__DisplayClass138_0_o *)BattleBuffData_BuffData__isCommandCardBuff(buff, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
LABEL_7:
    sub_1C2E388(this, buff);
  return !BattleBuffData_BuffData__isEnableCommandCardBuff(buff, _4__this->fields.data, 0LL);
}


bool __fastcall BattleCommandComponent___c__DisplayClass138_0___setBuffIconList_b__2(
        BattleCommandComponent___c__DisplayClass138_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleCommandComponent___c__DisplayClass138_0_o *v4; // x20
  struct BattleCommandComponent_o *_4__this; // x8
  struct BattleCommandData_o *data; // x8

  if ( !buff )
    goto LABEL_7;
  v4 = this;
  this = (BattleCommandComponent___c__DisplayClass138_0_o *)BattleBuffData_BuffData__IsCommandAssistBuff(buff, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    _4__this = v4->fields.__4__this;
    if ( _4__this )
    {
      data = _4__this->fields.data;
      if ( data )
        return buff->fields.commandAssistId != data->fields.commandAssistId;
    }
LABEL_7:
    sub_1C2E388(this, buff);
  }
  return 0;
}


bool __fastcall BattleCommandComponent___c__DisplayClass138_0___setBuffIconList_g__BuffFilterByIndividuality_3(
        BattleCommandComponent___c__DisplayClass138_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleCommandComponent___c__DisplayClass138_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleCommandComponent_o *_4__this; // x8
  int32_t v10; // w21
  __int16 *v11; // x0
  bool v12; // w1
  struct BattleCommandComponent_o *v13; // x8
  struct BattleCommandComponent_o *v14; // x8
  System_Int32_array *cardOrTreasureDvcIndividualityArray; // x19
  System_Int32_array_array *v16; // x20
  __int16 *v18; // x0
  struct BattleCommandComponent_o *v19; // x8
  System_Int32_array_array *result; // [xsp+8h] [xbp-38h] BYREF
  __int16 v22[2]; // [xsp+18h] [xbp-28h] BYREF
  __int16 v23; // [xsp+1Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4C00354 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Contains_BuffList_TYPE___, buff);
    sub_1C2E12C(&Individuality_TypeInfo, v5);
    sub_1C2E12C(&Method_System_Nullable_bool___ctor__, v6);
    sub_1C2E12C(&Method_System_Nullable_bool__get_HasValue__, v7);
    this = (BattleCommandComponent___c__DisplayClass138_0_o *)sub_1C2E12C(&Method_System_Nullable_bool__get_Value__, v8);
    byte_4C00354 = 1;
  }
  v23 = 0;
  result = 0LL;
  if ( !buff )
    goto LABEL_28;
  this = (BattleCommandComponent___c__DisplayClass138_0_o *)BattleBuffData_BuffData__get_BuffType(buff, 0LL);
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_28;
  v10 = (int)this;
  this = (BattleCommandComponent___c__DisplayClass138_0_o *)System_Linq_Enumerable__Contains_Int32Enum_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.qabTypes,
                                                              (int32_t)this,
                                                              (const MethodInfo_2FE9E84 *)Method_System_Linq_Enumerable_Contains_BuffList_TYPE___);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
LABEL_6:
    v11 = v22;
    v12 = 1;
    v22[0] = 0;
    goto LABEL_13;
  }
  if ( v4->fields.isTreasureDvc )
    goto LABEL_8;
  v19 = v4->fields.__4__this;
  if ( !v19 )
LABEL_28:
    sub_1C2E388(this, buff);
  this = (BattleCommandComponent___c__DisplayClass138_0_o *)System_Linq_Enumerable__Contains_Int32Enum_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v19->fields.noneTdQabTypes,
                                                              v10,
                                                              (const MethodInfo_2FE9E84 *)Method_System_Linq_Enumerable_Contains_BuffList_TYPE___);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_6;
  if ( !v4->fields.isTreasureDvc )
    goto LABEL_10;
LABEL_8:
  v13 = v4->fields.__4__this;
  if ( !v13 )
    goto LABEL_28;
  this = (BattleCommandComponent___c__DisplayClass138_0_o *)System_Linq_Enumerable__Contains_Int32Enum_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v13->fields.tdTypes,
                                                              v10,
                                                              (const MethodInfo_2FE9E84 *)Method_System_Linq_Enumerable_Contains_BuffList_TYPE___);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_10:
    v14 = v4->fields.__4__this;
    if ( !v14 )
      goto LABEL_28;
    if ( !System_Linq_Enumerable__Contains_Int32Enum_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v14->fields.otherTypes,
            v10,
            (const MethodInfo_2FE9E84 *)Method_System_Linq_Enumerable_Contains_BuffList_TYPE___) )
      return 0;
  }
  v22[0] = 0;
  v11 = v22;
  v12 = 0;
LABEL_13:
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v11,
    v12,
    (const MethodInfo_3783F30 *)Method_System_Nullable_bool___ctor__);
  v23 = v22[0];
  if ( !LOBYTE(v22[0]) )
    return 0;
  this = (BattleCommandComponent___c__DisplayClass138_0_o *)BattleBuffData_BuffData__get_Entity(buff, 0LL);
  if ( !this )
    goto LABEL_28;
  if ( BuffEntity__TryGetIndividualityDisplayOnCard((BuffEntity_o *)this, &result, 0LL) )
  {
    cardOrTreasureDvcIndividualityArray = v4->fields.cardOrTreasureDvcIndividualityArray;
    v16 = result;
    if ( !Individuality_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
    return Individuality__CheckSignedMultiIndividuality(cardOrTreasureDvcIndividualityArray, v16, 0LL);
  }
  else
  {
    v18 = &v23;
    return !System_Nullable_bool___get_Value(
              (System_Nullable_bool__o)v18,
              (const MethodInfo_3783F4C *)Method_System_Nullable_bool__get_Value__)
        || BattleBuffData_BuffData__IsMatchTValsCond(buff, v4->fields.cardIndividualityArray, 0LL);
  }
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
  BattleCommandComponent___c__DisplayClass160_0_o *v2; // x19
  struct BattleCommandComponent_o *_4__this; // x8
  UnityEngine_Object_o *spawner; // x20
  struct BattleCommandComponent_o *v5; // x8
  UnityEngine_Object_o *obj; // x19

  v2 = this;
  if ( (byte_4C00355 & 1) == 0 )
  {
    this = (BattleCommandComponent___c__DisplayClass160_0_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C00355 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  spawner = (UnityEngine_Object_o *)_4__this->fields.spawner;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent___c__DisplayClass160_0_o *)UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.__4__this;
    if ( v5 )
    {
      this = (BattleCommandComponent___c__DisplayClass160_0_o *)v5->fields.spawner;
      if ( this )
      {
        Spawner__Despawn((Spawner_o *)this, v2->fields.obj, 0, 0LL);
        return;
      }
    }
LABEL_13:
    sub_1C2E388(this, method);
  }
  obj = (UnityEngine_Object_o *)v2->fields.obj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70989720(obj, 0LL);
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
    sub_1C2E388(this, 0LL);
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
  BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *v2; // x19
  int32_t _1__state; // w8
  struct BattleCommandComponent_o *_4__this; // x21
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  bool result; // w0
  struct UISprite_o *v7; // x8
  UnityEngine_Object_o *mAtlas; // x20
  bool v9; // w20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v2 = this;
  if ( (byte_4C00358 & 1) == 0 )
  {
    this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *)sub_1C2E12C(
                                                                                &UnityEngine_Object_TypeInfo,
                                                                                method);
    byte_4C00358 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
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
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_26;
      specialCardBuffIcon = (UnityEngine_Object_o *)_4__this->fields.specialCardBuffIcon;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        sub_1C2E388(this, method);
      }
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_26;
LABEL_20:
  v7 = _4__this->fields.specialCardBuffIcon;
  if ( !v7 )
    goto LABEL_26;
  mAtlas = (UnityEngine_Object_o *)v7->fields.mAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality(mAtlas, 0LL, 0LL);
  v2->fields.__2__current = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v2->fields.__2__current, 0LL, v10, v11, v12, v13, v14, v15);
  if ( v9 )
  {
    result = 1;
    v2->fields.__1__state = 1;
  }
  else
  {
    v2->fields.__1__state = 2;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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
      sub_1C2E388(this, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      *(_QWORD *)&action->fields.extra_arg);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_BattleCommandComponent__delayFrame_d__162_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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
  int32_t _1__state; // w8
  DefCoroutine_c *v11; // x0
  int64_t milliSecSix; // x1
  PartyOrganizationUtility_o *p__2__current; // x20
  bool result; // w0
  struct BattleCommandComponent_o *_4__this; // x19
  struct UnityEngine_GameObject_array *effectobj; // x20
  UnityEngine_Transform_o *transform; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct UnityEngine_GameObject_array *v24; // x8
  UnityEngine_Transform_o *v25; // x20
  struct UnityEngine_GameObject_array *v26; // x8
  BattleCommandComponent__fadeoutEffect_d__182_o *v27; // x20

  v8 = this;
  if ( (byte_4C00359 & 1) == 0 )
  {
    sub_1C2E12C(&DefCoroutine_TypeInfo, method);
    this = (BattleCommandComponent__fadeoutEffect_d__182_o *)sub_1C2E12C(&StringLiteral_19227/*"effect/ef_commandburn_s01"*/, v9);
    byte_4C00359 = 1;
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
          this = (BattleCommandComponent__fadeoutEffect_d__182_o *)BaseMonoBehaviour__createObject_39556320(
                                                                     (BaseMonoBehaviour_o *)_4__this,
                                                                     (System_String_o *)StringLiteral_19227/*"effect/ef_commandburn_s01"*/,
                                                                     transform,
                                                                     0LL,
                                                                     0LL);
          if ( effectobj )
          {
            if ( effectobj->max_length <= 1 )
              goto LABEL_30;
            effectobj->m_Items[1] = (UnityEngine_GameObject_o *)this;
            sub_1C2E0D0(
              (PartyOrganizationUtility_o *)&effectobj->m_Items[1],
              (int64_t)this,
              v18,
              v19,
              v20,
              v21,
              v22,
              v23);
            v24 = _4__this->fields.effectobj;
            if ( !v24 )
              goto LABEL_29;
            if ( v24->max_length <= 1 )
              goto LABEL_30;
            this = (BattleCommandComponent__fadeoutEffect_d__182_o *)v24->m_Items[1];
            if ( !this )
              goto LABEL_29;
            v25 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
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
            if ( !v25 )
              goto LABEL_29;
            UnityEngine_Transform__set_parent(v25, (UnityEngine_Transform_o *)this, 0LL);
            v26 = _4__this->fields.effectobj;
            if ( !v26 )
              goto LABEL_29;
            if ( v26->max_length <= 1 )
LABEL_30:
              sub_1C2E390(this, method);
            this = (BattleCommandComponent__fadeoutEffect_d__182_o *)v26->m_Items[1];
            if ( this )
            {
              this = (BattleCommandComponent__fadeoutEffect_d__182_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)this,
                                                                         0LL);
              v27 = this;
              if ( !byte_4BF7D96 )
              {
                this = (BattleCommandComponent__fadeoutEffect_d__182_o *)sub_1C2E12C(
                                                                           &UnityEngine_Vector3_TypeInfo,
                                                                           method);
                byte_4BF7D96 = 1;
              }
              if ( v27 )
              {
                UnityEngine_Transform__set_localScale(
                  (UnityEngine_Transform_o *)v27,
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
    sub_1C2E388(this, method);
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  v11 = DefCoroutine_TypeInfo;
  if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
    v11 = DefCoroutine_TypeInfo;
  }
  milliSecSix = (int64_t)v11->static_fields->milliSecSix;
  v8->fields.__2__current = (Il2CppObject *)milliSecSix;
  p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1C2E0D0(p__2__current, milliSecSix, v2, v3, v4, v5, v6, v7);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_BattleCommandComponent__fadeoutEffect_d__182_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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