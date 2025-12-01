void BattleCommandComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct BattleCommandComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct BattleCommandComponent_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  BattleCommandComponent_c *v23; // x8
  int32_t v29; // w1
  struct BattleCommandComponent_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w1
  struct BattleCommandComponent_StaticFields *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7

  if ( (byte_4CCA28F & 1) == 0 )
  {
    sub_1C713B0(&BattleCommandComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_20211/*"icon_cardsealed_quick"*/);
    sub_1C713B0(&StringLiteral_23352/*"se_"*/);
    sub_1C713B0(&StringLiteral_20208/*"icon_cardsealed_arts"*/);
    sub_1C713B0(&StringLiteral_20210/*"icon_cardsealed_buster"*/);
    sub_1C713B0(&StringLiteral_24755/*"v_"*/);
    byte_4CCA28F = 1;
  }
  BattleCommandComponent_TypeInfo->static_fields->SEALED_CARDTYPE_ICON_ARTS = (struct System_String_o *)StringLiteral_20208/*"icon_cardsealed_arts"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)BattleCommandComponent_TypeInfo->static_fields,
    StringLiteral_20208/*"icon_cardsealed_arts"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_20210/*"icon_cardsealed_buster"*/;
  static_fields = BattleCommandComponent_TypeInfo->static_fields;
  static_fields->SEALED_CARDTYPE_ICON_BUSTER = (struct System_String_o *)StringLiteral_20210/*"icon_cardsealed_buster"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&static_fields->SEALED_CARDTYPE_ICON_BUSTER,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = StringLiteral_20211/*"icon_cardsealed_quick"*/;
  v16 = BattleCommandComponent_TypeInfo->static_fields;
  v16->SEALED_CARDTYPE_ICON_QUICK = (struct System_String_o *)StringLiteral_20211/*"icon_cardsealed_quick"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v16->SEALED_CARDTYPE_ICON_QUICK, v15, v17, v18, v19, v20, v21, v22);
  v23 = BattleCommandComponent_TypeInfo;
  __asm { FMOV            V0.4S, #1.0 }
  BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientTopOnDefault = _Q0;
  v23->static_fields->CriticalLabelGradientBottomOnDefault = (struct UnityEngine_Color_o)xmmword_CF0280;
  v23->static_fields->CriticalNumberLabelGradientTopOnBoosted = (struct UnityEngine_Color_o)xmmword_CEEBA0;
  v23->static_fields->CriticalNumberLabelGradientBottomOnBoosted = (struct UnityEngine_Color_o)xmmword_CF0350;
  v23->static_fields->CriticalPercentLabelGradientTopOnBoosted = (struct UnityEngine_Color_o)xmmword_CEF480;
  v23->static_fields->CriticalPercentLabelGradientBottomOnBoosted = (struct UnityEngine_Color_o)xmmword_CEF6B0;
  v29 = StringLiteral_24755/*"v_"*/;
  v30 = v23->static_fields;
  v30->voiceIdPrefix = (struct System_String_o *)StringLiteral_24755/*"v_"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v30->voiceIdPrefix, v29, v31, v32, v33, v34, v35, v36);
  v37 = StringLiteral_23352/*"se_"*/;
  v38 = BattleCommandComponent_TypeInfo->static_fields;
  v38->seIdPrefix = (struct System_String_o *)StringLiteral_23352/*"se_"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v38->seIdPrefix, v37, v39, v40, v41, v42, v43, v44);
}


void BattleCommandComponent___ctor(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  struct UnityEngine_GameObject_array *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Array_o *v17; // x0
  System_RuntimeFieldHandle_o v18; // x1
  struct BuffList_TYPE_array *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Array_o *v26; // x0
  System_RuntimeFieldHandle_o v27; // x1
  struct BuffList_TYPE_array *v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_Array_o *v35; // x0
  System_RuntimeFieldHandle_o v36; // x1
  struct BuffList_TYPE_array *v37; // x20
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  System_Array_o *v44; // x0
  System_RuntimeFieldHandle_o v45; // x1
  struct BuffList_TYPE_array *v46; // x20
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  System_Collections_Generic_List_object__o *v53; // x20
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  System_Collections_Generic_Dictionary_object__object__o *v60; // x20
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7

  if ( (byte_4CCA28E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
    sub_1C713B0(&UnityEngine_GameObject___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_BattleCommandComponent_CardBuffData__TypeInfo);
    sub_1C713B0(&BuffList_TYPE___TypeInfo);
    sub_1C713B0(&Field__PrivateImplementationDetails__21FCB76AE4B744E8DB6EC42DCC110D91C00FEB92CACE2184F7D86FA8D498CF5D);
    sub_1C713B0(&Field__PrivateImplementationDetails__7FF261A5C35634E350068AE4166549E7E2B263049C77B28D36985A526C7753C9);
    sub_1C713B0(&Field__PrivateImplementationDetails__81E6881EDC288CDA01A3F973C0C8C6DA6E8CCE911E702C19528468EFB3B4B468);
    sub_1C713B0(&Field__PrivateImplementationDetails__A236E7A583166CBBC637A1723D29902A070ADA50655F57CBEDCD6FA90EDD5ADE);
    byte_4CCA28E = 1;
  }
  v3 = (struct UnityEngine_GameObject_array *)sub_1C71458(UnityEngine_GameObject___TypeInfo, 6);
  this->fields.effectobj = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.effectobj, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (struct UnityEngine_GameObject_array *)sub_1C71458(UnityEngine_GameObject___TypeInfo, 2);
  this->fields.addObjectList = v10;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.addObjectList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Array_o *)sub_1C71458(BuffList_TYPE___TypeInfo, 13);
  v18.fields.value = Field__PrivateImplementationDetails__A236E7A583166CBBC637A1723D29902A070ADA50655F57CBEDCD6FA90EDD5ADE;
  v19 = (struct BuffList_TYPE_array *)v17;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64730948(v17, v18, 0);
  this->fields.qabTypes = v19;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.qabTypes, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = (System_Array_o *)sub_1C71458(BuffList_TYPE___TypeInfo, 5);
  v27.fields.value = Field__PrivateImplementationDetails__21FCB76AE4B744E8DB6EC42DCC110D91C00FEB92CACE2184F7D86FA8D498CF5D;
  v28 = (struct BuffList_TYPE_array *)v26;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64730948(v26, v27, 0);
  this->fields.noneTdQabTypes = v28;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.noneTdQabTypes, (int32_t)v28, v29, v30, v31, v32, v33, v34);
  v35 = (System_Array_o *)sub_1C71458(BuffList_TYPE___TypeInfo, 3);
  v36.fields.value = Field__PrivateImplementationDetails__81E6881EDC288CDA01A3F973C0C8C6DA6E8CCE911E702C19528468EFB3B4B468;
  v37 = (struct BuffList_TYPE_array *)v35;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64730948(v35, v36, 0);
  this->fields.tdTypes = v37;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.tdTypes, (int32_t)v37, v38, v39, v40, v41, v42, v43);
  v44 = (System_Array_o *)sub_1C71458(BuffList_TYPE___TypeInfo, 15);
  v45.fields.value = Field__PrivateImplementationDetails__7FF261A5C35634E350068AE4166549E7E2B263049C77B28D36985A526C7753C9;
  v46 = (struct BuffList_TYPE_array *)v44;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64730948(v44, v45, 0);
  this->fields.otherTypes = v46;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.otherTypes, (int32_t)v46, v47, v48, v49, v50, v51, v52);
  v53 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BattleCommandComponent_CardBuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData___ctor__);
  this->fields.specialCardBuffList = (struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *)v53;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.specialCardBuffList,
    (int32_t)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields.cardBuffAlphaFor = 1.0;
  v60 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_string__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v60,
    (const MethodInfo_34CAD30 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.cardEffectDict = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v60;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.cardEffectDict, (int32_t)v60, v61, v62, v63, v64, v65, v66);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__AddBoostedCriticalRate(
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
    CriticalPoint = BattleCommandData__getCriticalPoint(data, 0);
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
void BattleCommandComponent__CardEffectSetActive(BattleCommandComponent_o *this, bool value, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *cardEffectDict; // x0
  bool v6; // w19
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CCA286 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    byte_4CCA286 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict
    || (cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      cardEffectDict,
                                                                                      (const MethodInfo_34CB510 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__)) == 0 )
  {
    sub_1C71608(cardEffectDict, value);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v8,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_3B57114 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  v6 = value;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v8,
            (const MethodInfo_35C9AC0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v8.fields._currentValue )
      sub_1C71608(0, v7);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v8.fields._currentValue, v6, 0);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v8,
    (const MethodInfo_35C9ABC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
}


void BattleCommandComponent__ChangeCardEffectMaskForInside(BattleCommandComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *cardEffectDict; // x0
  __int64 v4; // x1
  System_Object_array *ComponentsInChildren_object__52050676; // x0
  __int64 v6; // x1
  System_Object_array *v7; // x19
  int max_length; // w8
  int i; // w23
  UnityEngine_ParticleSystemRenderer_o *v10; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4CCA288 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    byte_4CCA288 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict
    || (cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                      cardEffectDict,
                                                                                      (const MethodInfo_34CB510 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__)) == 0 )
  {
    sub_1C71608(cardEffectDict, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v11,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_3B57114 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v12,
            (const MethodInfo_35C9AC0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v12.fields._currentValue )
      sub_1C71608(0, v4);
    ComponentsInChildren_object__52050676 = UnityEngine_GameObject__GetComponentsInChildren_object__52050676(
                                              (UnityEngine_GameObject_o *)v12.fields._currentValue,
                                              (const MethodInfo_31A3AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
    v7 = ComponentsInChildren_object__52050676;
    if ( !ComponentsInChildren_object__52050676 )
      sub_1C71608(0, v6);
    max_length = ComponentsInChildren_object__52050676->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1C71610(ComponentsInChildren_object__52050676);
        v10 = (UnityEngine_ParticleSystemRenderer_o *)v7->m_Items[i];
        if ( !v10 )
          sub_1C71608(0, v6);
        UnityEngine_ParticleSystemRenderer__set_maskInteraction(v10, 1, 0);
        max_length = v7->max_length;
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v12,
    (const MethodInfo_35C9ABC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
}


void BattleCommandComponent__ChangeCriticalLabelColor(BattleCommandComponent_o *this, const MethodInfo *method)
{
  void *criticallabel; // x0
  int v4; // w8
  void *v5; // x20
  unsigned int v6; // w23
  UILabel_o *v7; // x21
  UILabel_o *criticalPercentLabel; // x20

  if ( (byte_4CCA241 & 1) == 0 )
  {
    sub_1C713B0(&BattleCommandComponent_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____78659776);
    byte_4CCA241 = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_17;
  criticallabel = UnityEngine_Component__GetComponentsInChildren_object_(
                    (UnityEngine_Component_o *)criticallabel,
                    1,
                    (const MethodInfo_3142600 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____78659776);
  if ( !criticallabel )
    goto LABEL_17;
  v4 = *((_DWORD *)criticallabel + 6);
  v5 = criticallabel;
  if ( v4 >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= v4 )
        sub_1C71610(criticallabel);
      criticallabel = BattleCommandComponent_TypeInfo;
      v7 = (UILabel_o *)*((_QWORD *)v5 + (int)v6 + 4);
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        criticallabel = BattleCommandComponent_TypeInfo;
      }
      if ( !v7 )
        break;
      UILabel__set_gradientTop(v7, *(UnityEngine_Color_o *)(*((_QWORD *)criticallabel + 23) + 56LL), 0);
      UILabel__set_gradientBottom(
        v7,
        BattleCommandComponent_TypeInfo->static_fields->CriticalNumberLabelGradientBottomOnBoosted,
        0);
      v4 = *((_DWORD *)v5 + 6);
      if ( (int)++v6 >= v4 )
        goto LABEL_12;
    }
LABEL_17:
    sub_1C71608(criticallabel, method);
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
  UILabel__set_gradientTop(criticalPercentLabel, *(UnityEngine_Color_o *)(*((_QWORD *)criticallabel + 23) + 88LL), 0);
  criticallabel = this->fields.criticalPercentLabel;
  if ( !criticallabel )
    goto LABEL_17;
  UILabel__set_gradientBottom(
    (UILabel_o *)criticallabel,
    BattleCommandComponent_TypeInfo->static_fields->CriticalPercentLabelGradientBottomOnBoosted,
    0);
}


void BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(BattleCommandComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_List_object__o *specialCardBuffList; // x0
  int32_t cardBuffListIndex; // w1
  int items; // w8

  if ( (byte_4CCA282 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
    byte_4CCA282 = 1;
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
                                                                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
  if ( !specialCardBuffList )
LABEL_11:
    sub_1C71608(specialCardBuffList, method);
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


UISprite_o *BattleCommandComponent__ChoiceUnusableMarkSprite(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v4; // x1
  UISprite_o **p_donotPermanentSleep; // x8
  UISprite_o *result; // x0

  SealStatus = BattleCommandComponent__get_SealStatus(this, method);
  if ( !SealStatus )
    sub_1C71608(0, v4);
  switch ( BattleCommandSealStatus__get_PrioredStatus(SealStatus, 0) )
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
      result = 0;
      break;
  }
  return result;
}


void BattleCommandComponent__ClearCardEffect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *cardEffectDict; // x0
  Il2CppObject *currentValue; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v5; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CCA287 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
    byte_4CCA287 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict )
    goto LABEL_12;
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                cardEffectDict,
                                                                                (const MethodInfo_34CB510 *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
  if ( !cardEffectDict )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v5,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_3B57114 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v5,
            (const MethodInfo_35C9AC0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    currentValue = v5.fields._currentValue;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608((UnityEngine_Object_o *)currentValue, 0);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v5,
    (const MethodInfo_35C9ABC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
  cardEffectDict = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict )
LABEL_12:
    sub_1C71608(cardEffectDict, method);
  System_Collections_Generic_Dictionary_object__object___Clear(
    cardEffectDict,
    (const MethodInfo_34CB868 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
}


void BattleCommandComponent__DestroyEffectObject1(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  UnityEngine_Object_o *v6; // x20
  struct UnityEngine_GameObject_array *v7; // x8
  UnityEngine_Object_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  v2 = this;
  if ( (byte_4CCA268 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
    this = (BattleCommandComponent_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA268 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_24;
  if ( LODWORD(effectobj->max_length) <= 1 )
    goto LABEL_25;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[1];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v2->fields.newMatriarl )
    {
      v5 = v2->fields.effectobj;
      if ( !v5 )
        goto LABEL_24;
      if ( LODWORD(v5->max_length) <= 1 )
        goto LABEL_25;
      this = (BattleCommandComponent_o *)v5->m_Items[1];
      if ( !this )
        goto LABEL_24;
      this = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_31A3134 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
      if ( !this )
        goto LABEL_24;
      v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BattleCommandComponent_o *, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
                                     this,
                                     this->klass[1].vtable._1_Finalize.methodPtr);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71724608(v6, 0);
      v2->fields.newMatriarl = 0;
    }
    v7 = v2->fields.effectobj;
    if ( v7 )
    {
      if ( LODWORD(v7->max_length) <= 1 )
        goto LABEL_25;
      v8 = (UnityEngine_Object_o *)v7->m_Items[1];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71724608(v8, 0);
      this = (BattleCommandComponent_o *)v2->fields.effectobj;
      if ( this )
      {
        if ( LODWORD(this->fields.m_CancellationTokenSource) > 1 )
        {
          this->fields.bg = 0;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.bg, 0, v9, v10, v11, v12, v13, v14);
          return;
        }
LABEL_25:
        sub_1C71610(this);
      }
    }
LABEL_24:
    sub_1C71608(this, method);
  }
}


BattleCommandData_o *BattleCommandComponent__GetCommandData(BattleCommandComponent_o *this, const MethodInfo *method)
{
  return this->fields.data;
}


int32_t BattleCommandComponent__GetCriticalPoint(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( data )
    LODWORD(data) = this->fields.boostedCriticalRate + BattleCommandData__getCriticalPoint(data, 0);
  return (int)data;
}


int32_t BattleCommandComponent__GetPassStarCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1C71608(0, method);
  return BattleCommandData__getPassStarCount(data, 0);
}


UnityEngine_GameObject_o *BattleCommandComponent__GetSpawnerObj(
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
  if ( !byte_4CC0D09 )
  {
    this = (BattleCommandComponent_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v13 = static_fields->zeroVector.fields.x;
  v12 = static_fields->zeroVector.fields.y;
  v14 = static_fields->zeroVector.fields.z;
  if ( !byte_4CC0D0F )
  {
    this = (BattleCommandComponent_o *)sub_1C713B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4CC0D0F = 1;
  }
  if ( !spawner )
    goto LABEL_12;
  v18.fields.x = v13;
  v18.fields.y = v12;
  v18.fields.z = v14;
  v15 = Spawner__Spawn_40996544(
          spawner,
          (UnityEngine_Object_o *)prefab,
          v18,
          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
          0);
  GameObjectExtensions__SetParent(v15, (UnityEngine_Component_o *)parent, 0);
  if ( !v15 )
    goto LABEL_12;
  this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform(v15, 0);
  v16 = this;
  if ( !byte_4CC0D09 )
  {
    this = (BattleCommandComponent_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  if ( !v16
    || (UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v16,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0),
        (this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform(v15, 0)) == 0) )
  {
LABEL_12:
    sub_1C71608(this, prefab);
  }
  v19.fields.x = x;
  v19.fields.y = y;
  v19.fields.z = z;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v19, 0);
  return v15;
}


void BattleCommandComponent__HideAndCancelCountUpFinishEffect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  DrumRollLabel_o *criticallabel; // x0
  UnityEngine_Object_o *countUpFinishEffect; // x20
  UnityEngine_GameObject_o **p_countUpFinishEffect; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CCA240 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA240 = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_10;
  DrumRollLabel__CancelFinishCallback(criticallabel, 0, 0);
  countUpFinishEffect = (UnityEngine_Object_o *)this->fields.countUpFinishEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(countUpFinishEffect, 0, 0) )
  {
    criticallabel = (DrumRollLabel_o *)this->fields.spawner;
    if ( criticallabel )
    {
      p_countUpFinishEffect = &this->fields.countUpFinishEffect;
      Spawner__Despawn((Spawner_o *)criticallabel, *p_countUpFinishEffect, 1, 0);
      *p_countUpFinishEffect = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)p_countUpFinishEffect, 0, v6, v7, v8, v9, v10, v11);
      return;
    }
LABEL_10:
    sub_1C71608(criticallabel, method);
  }
}


void BattleCommandComponent__HidePowerUpValueLabelActive(
        BattleCommandComponent_o *this,
        bool isCommandCardUnderIcon,
        const MethodInfo *method)
{
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *powerUpCardValue; // x0

  if ( (byte_4CCA283 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA283 = 1;
  }
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0, 0) )
  {
    powerUpCardValue = (UnityEngine_Component_o *)this->fields.powerUpCardValue;
    if ( powerUpCardValue )
    {
      powerUpCardValue = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(powerUpCardValue, 0);
      if ( powerUpCardValue )
      {
        if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)powerUpCardValue, 0)
          || !isCommandCardUnderIcon )
        {
          return;
        }
        powerUpCardValue = (UnityEngine_Component_o *)this->fields.powerUpCardValue;
        if ( powerUpCardValue )
        {
          powerUpCardValue = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(powerUpCardValue, 0);
          if ( powerUpCardValue )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)powerUpCardValue, 0, 0);
            return;
          }
        }
      }
    }
    sub_1C71608(powerUpCardValue, v6);
  }
}


void BattleCommandComponent__InitDonotActCardSprite(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *donotActCardSprite; // x20
  BattleDataDefine_c *v4; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v7; // x1
  UISprite_o *v8; // x20

  if ( (byte_4CCA23A & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_GameObject____78636968);
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&BattleDataDefine_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_3101/*"BattleAssetUIAtlas"*/);
    sub_1C713B0(&StringLiteral_20209/*"icon_cardsealed_block"*/);
    byte_4CCA23A = 1;
  }
  donotActCardSprite = (UnityEngine_Object_o *)this->fields.donotActCardSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(donotActCardSprite, 0, 0) )
  {
    v4 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v4 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v4->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
    if ( !AssetStorage
      || (AssetStorage = (AssetData_o *)AssetData__GetObject_object__51560868(
                                          AssetStorage,
                                          (System_String_o *)StringLiteral_3101/*"BattleAssetUIAtlas"*/,
                                          (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_GameObject____78636968)) == 0
      || (v8 = this->fields.donotActCardSprite,
          AssetStorage = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)AssetStorage,
                                          (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !v8)
      || (UISprite__set_atlas(v8, (UIAtlas_o *)AssetStorage, 0),
          (AssetStorage = (AssetData_o *)this->fields.donotActCardSprite) == 0) )
    {
      sub_1C71608(AssetStorage, v7);
    }
    UnityEngine_Object__set_name((UnityEngine_Object_o *)AssetStorage, (System_String_o *)StringLiteral_20209/*"icon_cardsealed_block"*/, 0);
  }
}


void BattleCommandComponent__InitTreasureDeviceErrorAnimation(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleDataDefine_c *v3; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *Object_40783956; // x0
  UnityEngine_Object_o *v8; // x20
  Il2CppObject *Component_object; // x21
  Il2CppObject *v10; // x19

  if ( (byte_4CCA239 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_AnimationClip_TypeInfo);
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&BattleDataDefine_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_16800/*"anim_erroraction"*/);
    byte_4CCA239 = 1;
  }
  v3 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v3 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v3->static_fields->ASSET_BATTLE_COMMON;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
  if ( !AssetStorage )
    goto LABEL_29;
  Object_40783956 = AssetData__GetObject_40783956(AssetStorage, (System_String_o *)StringLiteral_16800/*"anim_erroraction"*/, 0);
  if ( Object_40783956 )
  {
    if ( (UnityEngine_AnimationClip_c *)Object_40783956->klass == UnityEngine_AnimationClip_TypeInfo )
      v8 = Object_40783956;
    else
      v8 = 0;
  }
  else
  {
    v8 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v8, 0, 0) )
  {
    this->fields.isSettedTreasureDeviceErrorAnim = 1;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v10 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)AssetStorage & 1) != 0 )
    {
      if ( v8 )
      {
        AssetStorage = (AssetData_o *)UnityEngine_Object__get_name(v8, 0);
        if ( Component_object )
        {
          SimpleAnimation__AddClip(
            (SimpleAnimation_o *)Component_object,
            (UnityEngine_AnimationClip_o *)v8,
            (System_String_o *)AssetStorage,
            0);
          return;
        }
      }
LABEL_29:
      sub_1C71608(AssetStorage, v6);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
    if ( ((unsigned __int8)AssetStorage & 1) != 0 )
    {
      if ( !v8 )
        goto LABEL_29;
      AssetStorage = (AssetData_o *)UnityEngine_Object__get_name(v8, 0);
      if ( !v10 )
        goto LABEL_29;
      UnityEngine_Animation__AddClip(
        (UnityEngine_Animation_o *)v10,
        (UnityEngine_AnimationClip_o *)v8,
        (System_String_o *)AssetStorage,
        0);
    }
  }
}


void BattleCommandComponent__InitTreasureDeviceErrorSpriteMark(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *treasureDeviceErrorSprite; // x20
  BattleDataDefine_c *v4; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4CCA238 & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_GameObject____78636968);
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&BattleDataDefine_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_3101/*"BattleAssetUIAtlas"*/);
    sub_1C713B0(&StringLiteral_20268/*"icon_error"*/);
    byte_4CCA238 = 1;
  }
  treasureDeviceErrorSprite = (UnityEngine_Object_o *)this->fields.treasureDeviceErrorSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(treasureDeviceErrorSprite, 0, 0) )
  {
    v4 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v4 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v4->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
    if ( !AssetStorage
      || (AssetStorage = (AssetData_o *)AssetData__GetObject_object__51560868(
                                          AssetStorage,
                                          (System_String_o *)StringLiteral_3101/*"BattleAssetUIAtlas"*/,
                                          (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_GameObject____78636968)) == 0
      || (AssetStorage = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)AssetStorage,
                                          (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.treasureDeviceErrorSprite)
      || (UISprite__set_atlas(this->fields.treasureDeviceErrorSprite, (UIAtlas_o *)AssetStorage, 0),
          (AssetStorage = (AssetData_o *)this->fields.treasureDeviceErrorSprite) == 0) )
    {
      sub_1C71608(AssetStorage, v7);
    }
    UISprite__set_spriteName((UISprite_o *)AssetStorage, (System_String_o *)StringLiteral_20268/*"icon_error"*/, 0);
    BattleCommandComponent__SetConfWindowTreasureDeviceErrorMark(this, v8);
  }
}


void BattleCommandComponent__InitUnusableMarks(BattleCommandComponent_o *this, const MethodInfo *method)
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


void BattleCommandComponent__Initialize(BattleCommandComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct Spawner_o **p_spawner; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  UnityEngine_Object_o *spawner; // x21
  const MethodInfo *v12; // x1
  Spawner_o *v13; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_4CCA23B & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_Spawner__get_Instance__);
    byte_4CCA23B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  p_spawner = &this->fields.spawner;
  this->fields.spawner = (struct Spawner_o *)Instance;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.spawner, (int32_t)Instance, v5, v6, v7, v8, v9, v10);
  spawner = (UnityEngine_Object_o *)this->fields.spawner;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(spawner, 0, 0) )
  {
    v13 = *p_spawner;
    if ( !*p_spawner
      || (Spawner__Precache_40994576(v13, (UnityEngine_Object_o *)this->fields.effect_cricomplete, 5, 0),
          (v13 = this->fields.spawner) == 0) )
    {
      sub_1C71608(v13, v12);
    }
    Spawner__Precache_40994576(v13, (UnityEngine_Object_o *)this->fields.effect_fullcricomplete, 5, 0);
  }
  BattleCommandComponent__InitTreasureDeviceErrorSpriteMark(this, v12);
  BattleCommandComponent__InitTreasureDeviceErrorAnimation(this, v14);
  BattleCommandComponent__InitDonotActCardSprite(this, v15);
}


bool BattleCommandComponent__IsAnimationBusy(
        BattleCommandComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x21
  Il2CppObject *v6; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4CCA28C & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA28C = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v6 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v7 )
  {
    if ( Component_object )
      return SimpleAnimation__IsPlaying((SimpleAnimation_o *)Component_object, animationName, 0);
LABEL_14:
    sub_1C71608(v7, v8);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
  if ( !v7 )
    return 0;
  if ( !v6 )
    goto LABEL_14;
  return UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)v6, animationName, 0);
}


bool BattleCommandComponent__IsMaxCritical(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1C71608(0, method);
  return BattleCommandData__checkCriticalMax(data, 0);
}


bool BattleCommandComponent__IsMaxViewCritical(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *criticalObject; // x0
  struct DrumRollLabel_o *criticallabel; // x8

  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    goto LABEL_6;
  criticalObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(criticalObject, 0);
  if ( ((unsigned __int8)criticalObject & 1) != 0 )
  {
    criticallabel = this->fields.criticallabel;
    if ( criticallabel )
      return criticallabel->fields.nowvalue == 100;
LABEL_6:
    sub_1C71608(criticalObject, method);
  }
  return 0;
}


bool BattleCommandComponent__IsValidVoiceType(
        BattleCommandComponent_o *this,
        System_String_o *voiceTypeId,
        const MethodInfo *method)
{
  BattleCommandComponent_o *v4; // x20
  struct BattleServantData_o *svtData; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w21
  struct BattleServantData_o *v9; // x8
  int32_t v10; // w20
  int32_t overwriteSvtVoiceId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v4 = this;
  if ( (byte_4CCA25F & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (BattleCommandComponent_o *)sub_1C713B0(&ServantAssetLoadManager_TypeInfo);
    byte_4CCA25F = 1;
  }
  svtData = v4->fields.svtData;
  if ( !svtData )
    goto LABEL_11;
  v7 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  this = (BattleCommandComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v13, 0);
  if ( !v4->fields.svtData
    || (v8 = (int)this,
        this = (BattleCommandComponent_o *)BattleServantData__getDispLimitCount(v4->fields.svtData, 1, 0),
        (v9 = v4->fields.svtData) == 0) )
  {
LABEL_11:
    sub_1C71608(this, voiceTypeId);
  }
  v10 = (int)this;
  overwriteSvtVoiceId = v9->fields.overwriteSvtVoiceId;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  return ServantAssetLoadManager__checkBattleVoice(v8, v10, overwriteSvtVoiceId, voiceTypeId, 0, 0);
}


void BattleCommandComponent__OnClickEvent(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  struct BattleCommandData_o *data; // x8
  UnityEngine_GameObject_o *v5; // x19
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t markindex; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CCA25C & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_24255/*"touchCommandCard"*/);
    byte_4CCA25C = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
  {
    data = this->fields.data;
    if ( data )
    {
      v5 = this->fields.target;
      markindex = data->fields.markindex;
      v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &markindex);
      if ( !v5 )
        sub_1C71608(v6, v7);
      UnityEngine_GameObject__SendMessage_71705888(v5, (System_String_o *)StringLiteral_24255/*"touchCommandCard"*/, v6, 0);
    }
  }
}


void BattleCommandComponent__OnLongPressEvent(
        BattleCommandComponent_o *this,
        UnityEngine_Object_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x20
  struct BattleCommandData_o *data; // x8
  UnityEngine_GameObject_o *v6; // x19
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  int32_t markindex; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CCA25D & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_8503/*"LongPress"*/);
    byte_4CCA25D = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
  {
    data = this->fields.data;
    if ( data )
    {
      v6 = this->fields.target;
      markindex = data->fields.markindex;
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &markindex);
      if ( !v6 )
        sub_1C71608(v7, v8);
      UnityEngine_GameObject__SendMessage_71705888(v6, (System_String_o *)StringLiteral_8503/*"LongPress"*/, v7, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__PlayAnimation(
        BattleCommandComponent_o *this,
        System_String_o *animationName,
        float simpleAnimationTime,
        const MethodInfo *method)
{
  long double v4; // q8
  Il2CppObject *Component_object; // x20
  Il2CppObject *v8; // x21
  UnityEngine_AnimationState_o *Item; // x0
  __int64 v10; // x1
  UnityEngine_AnimationState_c *klass; // x8
  UnityEngine_AnimationState_o *v12; // x21
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0

  v4 = *(long double *)&simpleAnimationTime;
  if ( (byte_4CCA248 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&SimpleAnimation_State_TypeInfo);
    byte_4CCA248 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v8 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Item = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0,
                                           0);
  if ( ((unsigned __int8)Item & 1) == 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Item = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
    if ( ((unsigned __int8)Item & 1) == 0 )
      return;
    if ( v8 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8, 0, 0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8, 1, 0);
      Item = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v8, animationName, 0);
      if ( Item )
      {
        UnityEngine_AnimationState__set_time(Item, *(float *)&v4, 0);
        UnityEngine_Animation__Play_71468084((UnityEngine_Animation_o *)v8, animationName, 0);
        return;
      }
    }
LABEL_22:
    sub_1C71608(Item, v10);
  }
  if ( !Component_object )
    goto LABEL_22;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
  Item = (UnityEngine_AnimationState_o *)SimpleAnimation__get_Item(
                                           (SimpleAnimation_o *)Component_object,
                                           animationName,
                                           0);
  if ( !Item )
    goto LABEL_22;
  klass = Item->klass;
  v12 = Item;
  v13 = *(unsigned __int16 *)&Item->klass->_2.rank;
  if ( *(_WORD *)&Item->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v13;
      p_offset += 2;
      if ( !v13 )
        goto LABEL_12;
    }
    v15 = (__int64)&klass[1] + 16 * *(_DWORD *)p_offset;
  }
  else
  {
LABEL_12:
    v15 = sub_1C47738(Item, SimpleAnimation_State_TypeInfo, 4);
  }
  (*(void (__fastcall **)(UnityEngine_AnimationState_o *, _QWORD, long double))v15)(v12, *(_QWORD *)(v15 + 8), v4);
  SimpleAnimation__Play_66976788((SimpleAnimation_o *)Component_object, animationName, 0);
}


System_Collections_IEnumerator_o *BattleCommandComponent__PlayStarSe(
        BattleCommandComponent_o *this,
        float preDelayTime,
        const MethodInfo *method)
{
  BattleCommandComponent__PlayStarSe_d__161_o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CCA255 & 1) == 0 )
  {
    sub_1C713B0(&BattleCommandComponent__PlayStarSe_d__161_TypeInfo);
    byte_4CCA255 = 1;
  }
  v4 = (BattleCommandComponent__PlayStarSe_d__161_o *)sub_1C715FC(BattleCommandComponent__PlayStarSe_d__161_TypeInfo);
  BattleCommandComponent__PlayStarSe_d__161___ctor(v4, 0, 0);
  if ( !v4 )
    sub_1C71608(v5, v6);
  v4->fields.preDelayTime = preDelayTime;
  return (System_Collections_IEnumerator_o *)v4;
}


void BattleCommandComponent__PlayTDErrorAnimation(
        BattleCommandComponent_o *this,
        System_Action_o *tdErrorAfterAction,
        const MethodInfo *method)
{
  _BOOL4 IsAnimationBusy; // w22
  struct System_Action_o **p_tdErrorAfterAction; // x20
  System_Delegate_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Delegate_o *v14; // x8
  System_Action_c *v15; // x1
  __int64 v16; // x1
  BattleServantData_o *svtData; // x0
  struct BattleServantData_o *v18; // x8
  System_String_o *TDErrorCardSelectVoiceSe; // x0
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x2

  if ( (byte_4CCA28D & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&StringLiteral_23353/*"se_ba41"*/);
    sub_1C713B0(&StringLiteral_16800/*"anim_erroraction"*/);
    sub_1C713B0(&StringLiteral_16798/*"anim_commandfloat"*/);
    byte_4CCA28D = 1;
  }
  IsAnimationBusy = BattleCommandComponent__IsAnimationBusy(this, (System_String_o *)StringLiteral_16798/*"anim_commandfloat"*/, method);
  p_tdErrorAfterAction = &this->fields.tdErrorAfterAction;
  v7 = System_Delegate__Combine(
         (System_Delegate_o *)this->fields.tdErrorAfterAction,
         (System_Delegate_o *)tdErrorAfterAction,
         0);
  v14 = v7;
  if ( !v7 )
    goto LABEL_7;
  v15 = System_Action_TypeInfo;
  if ( (System_Action_c *)v7->klass != System_Action_TypeInfo
    || (*p_tdErrorAfterAction = (struct System_Action_o *)v7, (System_Action_c *)v7->klass != v15) )
  {
    sub_1C719A4(v7);
LABEL_7:
    *p_tdErrorAfterAction = (struct System_Action_o *)v14;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.tdErrorAfterAction, (int32_t)v14, v8, v9, v10, v11, v12, v13);
  if ( !this->fields.isSettedTreasureDeviceErrorAnim || !IsAnimationBusy )
  {
    if ( *p_tdErrorAfterAction )
      ((void (__fastcall *)(intptr_t, intptr_t))(*p_tdErrorAfterAction)->fields.invoke_impl)(
        (*p_tdErrorAfterAction)->fields.method_code,
        (*p_tdErrorAfterAction)->fields.method);
  }
  else
  {
    svtData = this->fields.svtData;
    if ( !svtData
      || (BattleServantData__AddTDErrorTouchCount(svtData, 0), (v18 = this->fields.svtData) == 0)
      || (svtData = (BattleServantData_o *)v18->fields.deckSvt) == 0 )
    {
      sub_1C71608(svtData, v16);
    }
    TDErrorCardSelectVoiceSe = BattleDeckServantData__GetTDErrorCardSelectVoiceSe(
                                 (BattleDeckServantData_o *)svtData,
                                 (System_String_o *)StringLiteral_23353/*"se_ba41"*/,
                                 0);
    BattleCommandComponent__PlayTDErrorVoiceSe(this, TDErrorCardSelectVoiceSe, -1, v20);
    BattleCommandComponent__PlayAnimation(this, (System_String_o *)StringLiteral_16800/*"anim_erroraction"*/, 0.0, v21);
  }
}


System_String_o *BattleCommandComponent__PlayTDErrorVoiceSe(
        BattleCommandComponent_o *this,
        System_String_o *voiceSeId,
        int32_t voiceUniqueId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *v8; // x22
  BattleServantData_o *svtData; // x0
  int32_t v10; // w22
  int32_t DispLimitCount; // w23
  int32_t VoicePrefix; // w0
  BattleCommandComponent_c *v13; // x8
  int32_t v14; // w24
  struct BattleServantData_o *v15; // x8
  System_String_o *v16; // x19
  int32_t overwriteSvtVoiceId; // w21
  Il2CppObject *v18; // x20
  Il2CppObject *v19; // x0
  BattleCommandComponent_c *v20; // x0
  BattleCommandComponent_c *v21; // x0
  _QWORD *v22; // x8
  System_Reflection_MethodBase_o *v23; // x0
  int32_t v25; // [xsp+8h] [xbp-48h] BYREF
  int32_t v26; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CCA28A & 1) == 0 )
  {
    sub_1C713B0(&Method_BattleCommandComponent_PlayTDErrorVoiceSe__);
    sub_1C713B0(&BattleCommandComponent_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&ServantAssetLoadManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C713B0(&StringLiteral_25326/*"{0}_{1:D0}_{2}"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCA28A = 1;
  }
  v8 = 0;
  if ( !System_String__IsNullOrEmpty(voiceSeId, 0) )
  {
    svtData = (BattleServantData_o *)BattleCommandComponent_TypeInfo;
    if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
    if ( !voiceSeId )
      goto LABEL_27;
    if ( System_String__StartsWith(voiceSeId, BattleCommandComponent_TypeInfo->static_fields->voiceIdPrefix, 0) )
    {
      svtData = this->fields.svtData;
      if ( svtData )
      {
        svtData = (BattleServantData_o *)BattleServantData__getSvtId(svtData, 0);
        if ( this->fields.svtData )
        {
          v10 = (int)svtData;
          DispLimitCount = BattleServantData__getDispLimitCount(this->fields.svtData, 1, 0);
          svtData = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( svtData )
          {
            VoicePrefix = ServantAssetLoadManager__getVoicePrefix(
                            (ServantAssetLoadManager_o *)svtData,
                            v10,
                            DispLimitCount,
                            0);
            v13 = BattleCommandComponent_TypeInfo;
            v14 = VoicePrefix;
            if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
              v13 = BattleCommandComponent_TypeInfo;
            }
            svtData = (BattleServantData_o *)System_String__Replace_64078288(
                                               voiceSeId,
                                               v13->static_fields->voiceIdPrefix,
                                               (System_String_o *)StringLiteral_1/*""*/,
                                               0);
            v15 = this->fields.svtData;
            if ( v15 )
            {
              v16 = (System_String_o *)svtData;
              overwriteSvtVoiceId = v15->fields.overwriteSvtVoiceId;
              if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
              ServantAssetLoadManager__playBattleVoice(
                v10,
                DispLimitCount,
                overwriteSvtVoiceId,
                v16,
                1.0,
                0,
                voiceUniqueId,
                0,
                0);
              v26 = v10;
              v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
              v25 = v14;
              v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
              return System_String__Format_64073100(
                       (System_String_o *)StringLiteral_25326/*"{0}_{1:D0}_{2}"*/,
                       v18,
                       v19,
                       (Il2CppObject *)v16,
                       0);
            }
          }
        }
      }
LABEL_27:
      sub_1C71608(svtData, v7);
    }
    v20 = BattleCommandComponent_TypeInfo;
    if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
      v20 = BattleCommandComponent_TypeInfo;
    }
    if ( System_String__StartsWith(voiceSeId, v20->static_fields->seIdPrefix, 0) )
    {
      v21 = BattleCommandComponent_TypeInfo;
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v21 = BattleCommandComponent_TypeInfo;
      }
      v8 = System_String__Replace_64078288(
             voiceSeId,
             v21->static_fields->seIdPrefix,
             (System_String_o *)StringLiteral_1/*""*/,
             0);
      v22 = Method_BattleCommandComponent_PlayTDErrorVoiceSe__;
      if ( (*((_BYTE *)Method_BattleCommandComponent_PlayTDErrorVoiceSe__ + 83) & 2) != 0 )
        v22 = (_QWORD *)sub_1C713C8(Method_BattleCommandComponent_PlayTDErrorVoiceSe__);
      v23 = (System_Reflection_MethodBase_o *)sub_1C71394(v22, v22[4]);
      OverwriteAssetSoundName__PlaySe(v23, v8, 0, 0);
    }
    else
    {
      return voiceSeId;
    }
  }
  return v8;
}


void BattleCommandComponent__PlayVoiceSe(BattleCommandComponent_o *this, float waitSeconds, const MethodInfo *method)
{
  BattleServantData_o *svtData; // x0
  const MethodInfo *v6; // x3
  struct BattleCommandData_o *data; // x8
  System_String_o *v8; // x0
  const MethodInfo *v9; // x2
  System_Collections_IEnumerator_o *v10; // x1

  svtData = this->fields.svtData;
  if ( !svtData
    || (svtData = (BattleServantData_o *)BattleServantData__GetCurrentTDErrorStatusVoiceSe(svtData, 0),
        (data = this->fields.data) == 0) )
  {
    sub_1C71608(svtData, method);
  }
  v8 = BattleCommandComponent__PlayTDErrorVoiceSe(this, (System_String_o *)svtData, data->fields.uniqueId, v6);
  v10 = BattleCommandComponent__WaitForErrorViewFinished(this, waitSeconds, v8, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v10, 0);
}


void BattleCommandComponent__ReleaseNobleGaugeEffect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *nobleGaugeEffect; // x20
  GrandQuestFolderBoardItem_o *p_nobleGaugeEffect; // x19
  UnityEngine_GameObject_o *klass; // x20
  UnityEngine_Object_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CCA24C & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&iTween_TypeInfo);
    byte_4CCA24C = 1;
  }
  nobleGaugeEffect = (UnityEngine_Object_o *)this->fields.nobleGaugeEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nobleGaugeEffect, 0, 0) )
  {
    p_nobleGaugeEffect = (GrandQuestFolderBoardItem_o *)&this->fields.nobleGaugeEffect;
    klass = (UnityEngine_GameObject_o *)p_nobleGaugeEffect->klass;
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_63779628(klass, 0);
    v6 = (UnityEngine_Object_o *)p_nobleGaugeEffect->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(v6, 0);
    p_nobleGaugeEffect->klass = 0;
    sub_1C71354(p_nobleGaugeEffect, 0, v7, v8, v9, v10, v11, v12);
  }
}


void BattleCommandComponent__ResetBoostedCriticalRate(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *criticalObject; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2

  this->fields.boostedCriticalRate = 0;
  BattleCommandComponent__ResetCriticalLabelColor(this, method);
  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    sub_1C71608(0, v3);
  if ( UnityEngine_GameObject__get_activeInHierarchy(criticalObject, 0) )
    BattleCommandComponent__HideAndCancelCountUpFinishEffect(this, v5);
  BattleCommandComponent__updateCount(this, 1, v6);
}


void BattleCommandComponent__ResetBoostedCriticalRateLocal(BattleCommandComponent_o *this, const MethodInfo *method)
{
  this->fields.boostedCriticalRate = 0;
  BattleCommandComponent__ResetCriticalLabelColor(this, method);
}


void BattleCommandComponent__ResetCardBuffIconAlphaAnim(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  __int64 v4; // x1
  struct UISprite_o *v5; // x0

  if ( (byte_4CCA27F & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA27F = 1;
  }
  this->fields.cardBuffListIndex = 0;
  *(_QWORD *)&this->fields.cardBuffAlphaFor = 1065353216;
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(specialCardBuffIcon, 0, 0) )
  {
    v5 = this->fields.specialCardBuffIcon;
    if ( !v5 )
      sub_1C71608(0, v4);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, float))v5->klass->vtable._8_set_alpha.methodPtr)(
      v5,
      v5->klass->vtable._8_set_alpha.method,
      1.0);
  }
  this->fields.isChangedBuffIcon = 0;
}


void BattleCommandComponent__ResetCriticalLabelColor(BattleCommandComponent_o *this, const MethodInfo *method)
{
  void *criticallabel; // x0
  int v4; // w8
  void *v5; // x20
  unsigned int v6; // w23
  UILabel_o *v7; // x21
  UILabel_o *criticalPercentLabel; // x20

  if ( (byte_4CCA242 & 1) == 0 )
  {
    sub_1C713B0(&BattleCommandComponent_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____78659776);
    byte_4CCA242 = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_17;
  criticallabel = UnityEngine_Component__GetComponentsInChildren_object_(
                    (UnityEngine_Component_o *)criticallabel,
                    1,
                    (const MethodInfo_3142600 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____78659776);
  if ( !criticallabel )
    goto LABEL_17;
  v4 = *((_DWORD *)criticallabel + 6);
  v5 = criticallabel;
  if ( v4 >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= v4 )
        sub_1C71610(criticallabel);
      criticallabel = BattleCommandComponent_TypeInfo;
      v7 = (UILabel_o *)*((_QWORD *)v5 + (int)v6 + 4);
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        criticallabel = BattleCommandComponent_TypeInfo;
      }
      if ( !v7 )
        break;
      UILabel__set_gradientTop(v7, *(UnityEngine_Color_o *)(*((_QWORD *)criticallabel + 23) + 24LL), 0);
      UILabel__set_gradientBottom(
        v7,
        BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientBottomOnDefault,
        0);
      v4 = *((_DWORD *)v5 + 6);
      if ( (int)++v6 >= v4 )
        goto LABEL_12;
    }
LABEL_17:
    sub_1C71608(criticallabel, method);
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
  UILabel__set_gradientTop(criticalPercentLabel, *(UnityEngine_Color_o *)(*((_QWORD *)criticallabel + 23) + 24LL), 0);
  criticallabel = this->fields.criticalPercentLabel;
  if ( !criticallabel )
    goto LABEL_17;
  UILabel__set_gradientBottom(
    (UILabel_o *)criticallabel,
    BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientBottomOnDefault,
    0);
}


void BattleCommandComponent__ResetPassStarCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1C71608(0, method);
  BattleCommandData__ResetPassStar(data, 0);
}


void BattleCommandComponent__SetActiveComponent(
        BattleCommandComponent_o *this,
        UnityEngine_Component_o *component,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4CCA275 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA275 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)component, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !component || (gameObject = UnityEngine_Component__get_gameObject(component, 0)) == 0 )
      sub_1C71608(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, value, 0);
  }
}


void BattleCommandComponent__SetActiveSpecialCardBuffIcon(
        BattleCommandComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4CCA27C & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA27C = 1;
  }
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(specialCardBuffIcon, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_1C71608(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, active, 0);
  }
}


void BattleCommandComponent__SetCardBuffAlphaAnimFlag(
        BattleCommandComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  bool v4; // w21
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  v4 = active;
  if ( (byte_4CCA27B & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA27B = 1;
  }
  this->fields.isCardBuffAlphaAnim = v4;
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(specialCardBuffIcon, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_1C71608(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
}


void BattleCommandComponent__SetCardColor(
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
  if ( (byte_4CCA263 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA263 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.facetex;
    if ( !v10 )
      goto LABEL_29;
    v17.fields.r = r;
    v17.fields.g = g;
    v17.fields.b = b;
    v17.fields.a = a;
    UIWidget__set_color(v10, v17, 0);
  }
  bg = (UnityEngine_Object_o *)this->fields.bg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bg, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.bg;
    if ( !v10 )
      goto LABEL_29;
    v18.fields.r = r;
    v18.fields.g = g;
    v18.fields.b = b;
    v18.fields.a = a;
    UIWidget__set_color(v10, v18, 0);
  }
  codeSprite = (UnityEngine_Object_o *)this->fields.codeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(codeSprite, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.codeSprite;
    if ( !v10 )
      goto LABEL_29;
    v19.fields.r = r;
    v19.fields.g = g;
    v19.fields.b = b;
    v19.fields.a = a;
    UIWidget__set_color(v10, v19, 0);
  }
  codeTexture = (UnityEngine_Object_o *)this->fields.codeTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(codeTexture, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.codeTexture;
    if ( !v10 )
      goto LABEL_29;
    v20.fields.r = r;
    v20.fields.g = g;
    v20.fields.b = b;
    v20.fields.a = a;
    UIWidget__set_color(v10, v20, 0);
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
  if ( UnityEngine_Object__op_Inequality(powerUpCardIcon, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.powerUpCardIcon;
    if ( v10 )
    {
      v23.fields.b = b;
      v23.fields.a = a;
      v23.fields.r = r;
      v23.fields.g = g;
      UIWidget__set_color(v10, v23, 0);
      return;
    }
LABEL_29:
    sub_1C71608(v10, v9);
  }
}


void BattleCommandComponent__SetCommandAssistActive(
        BattleCommandComponent_o *this,
        UnityEngine_Color_o color,
        bool isFirst,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s11
  float r; // s10
  UnityEngine_Object_o *assistChargeTurnLabel; // x21
  UnityEngine_Object_o *assistRemainingTurnLabel; // x21
  __int64 v12; // x1
  void *buffData; // x0
  UnityEngine_Object_o *assistSprite; // x21
  BattleCommandData_o *data; // x0
  struct BattleServantData_o *svtData; // x8
  int v17; // w8
  int v18; // w9
  _DWORD *v19; // x21
  struct BattleCommandData_o *v20; // x10
  int32_t v21; // w21
  int v22; // t1
  UILabel_o *v23; // x22
  UILabel_o *v24; // x21
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4CCA265 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_2709/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/);
    byte_4CCA265 = 1;
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
    if ( !UnityEngine_Object__op_Equality(assistChargeTurnLabel, 0, 0) )
    {
      assistRemainingTurnLabel = (UnityEngine_Object_o *)this->fields.assistRemainingTurnLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(assistRemainingTurnLabel, 0, 0) )
      {
        buffData = this->fields.assistChargeTurnLabel;
        if ( !buffData )
          goto LABEL_48;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0);
        buffData = this->fields.assistRemainingTurnLabel;
        if ( !buffData )
          goto LABEL_48;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0);
        assistSprite = (UnityEngine_Object_o *)this->fields.assistSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(assistSprite, 0, 0) )
        {
          buffData = this->fields.assistSprite;
          if ( !buffData )
            goto LABEL_48;
          v25.fields.r = r;
          v25.fields.g = g;
          v25.fields.b = b;
          v25.fields.a = a;
          UIWidget__set_color((UIWidget_o *)buffData, v25, 0);
          data = this->fields.data;
          if ( data )
          {
            if ( BattleCommandData__IsEnableCommandAssist(data, 0) )
            {
              svtData = this->fields.svtData;
              if ( svtData )
              {
                buffData = svtData->fields.buffData;
                if ( !buffData )
                  goto LABEL_48;
                buffData = BattleBuffData__getPassiveList((BattleBuffData_o *)buffData, 1, 0);
                if ( !buffData )
                  goto LABEL_48;
                v17 = *((_DWORD *)buffData + 6);
                if ( v17 >= 1 )
                {
                  v18 = 0;
                  while ( 1 )
                  {
                    if ( v17 == v18 )
                      sub_1C71610(buffData);
                    v19 = (_DWORD *)*((_QWORD *)buffData + v18 + 4);
                    if ( !v19 )
                      goto LABEL_48;
                    v20 = this->fields.data;
                    if ( !v20 )
                      goto LABEL_48;
                    if ( v19[87] == v20->fields.commandAssistId && v19[88] == v20->fields.servantCardIdsIndex )
                      break;
                    if ( v17 == ++v18 )
                      goto LABEL_41;
                  }
                  v22 = v19[28];
                  v21 = (_DWORD)v19 + 112;
                  if ( v22 >= 1 )
                  {
                    buffData = this->fields.assistSprite;
                    if ( !buffData )
                      goto LABEL_48;
                    v26.fields.r = 0.5;
                    v26.fields.g = 0.5;
                    v26.fields.b = 0.5;
                    v26.fields.a = 1.0;
                    UIWidget__set_color((UIWidget_o *)buffData, v26, 0);
                    buffData = this->fields.assistChargeTurnLabel;
                    if ( !buffData )
                      goto LABEL_48;
                    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0);
                    buffData = this->fields.assistRemainingTurnLabel;
                    if ( !buffData )
                      goto LABEL_48;
                    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0);
                    v23 = this->fields.assistChargeTurnLabel;
                    buffData = System_Int32__ToString(v21, 0);
                    if ( !v23 )
                      goto LABEL_48;
                    UILabel__set_text(v23, (System_String_o *)buffData, 0);
                    v24 = this->fields.assistRemainingTurnLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    buffData = LocalizationManager__Get((System_String_o *)StringLiteral_2709/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, 0);
                    if ( !v24 )
                      goto LABEL_48;
                    UILabel__set_text(v24, (System_String_o *)buffData, 0);
                  }
                }
LABEL_41:
                if ( isFirst )
                {
                  buffData = this->fields.assistChargeTurnLabel;
                  if ( buffData )
                  {
                    buffData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffData, 0);
                    if ( buffData )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffData, 0, 0);
                      buffData = this->fields.assistRemainingTurnLabel;
                      if ( buffData )
                      {
                        buffData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffData, 0);
                        if ( buffData )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffData, 0, 0);
                          return;
                        }
                      }
                    }
                  }
LABEL_48:
                  sub_1C71608(buffData, v12);
                }
              }
            }
          }
        }
      }
    }
  }
}


void BattleCommandComponent__SetCommandAssistView(
        BattleCommandComponent_o *this,
        int32_t commandAssistId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *assistSprite; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *Master_object; // x0
  int32_t EventId; // w21
  UISprite_o *v9; // x20
  System_String_o *v10; // x21

  if ( (byte_4CCA26E & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&BattleData_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA26E = 1;
  }
  assistSprite = (UnityEngine_Object_o *)this->fields.assistSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(assistSprite, 0, 0) )
  {
    Master_object = (UnityEngine_Behaviour_o *)this->fields.assistSprite;
    if ( Master_object )
    {
      if ( commandAssistId <= 0 )
        goto LABEL_19;
      UnityEngine_Behaviour__set_enabled(Master_object, 1, 0);
      if ( !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      EventId = BattleData__GetEventId(0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (UnityEngine_Behaviour_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
      if ( Master_object )
      {
        Master_object = (UnityEngine_Behaviour_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                     (EventCommandAssistMaster_o *)Master_object,
                                                     EventId,
                                                     commandAssistId,
                                                     -1,
                                                     0,
                                                     0);
        if ( Master_object )
        {
          v9 = this->fields.assistSprite;
          v10 = System_Int32__ToString((int)Master_object + 48, 0);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          if ( AtlasManager__SetEventSprite(v9, v10, 0) )
            return;
          Master_object = (UnityEngine_Behaviour_o *)this->fields.assistSprite;
          if ( Master_object )
          {
LABEL_19:
            UnityEngine_Behaviour__set_enabled(Master_object, 0, 0);
            return;
          }
        }
      }
    }
    sub_1C71608(Master_object, v6);
  }
}


void BattleCommandComponent__SetCommandCardTypeChange(
        BattleCommandComponent_o *this,
        bool active,
        int32_t turn,
        int32_t addOrder,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  BattleCommandComponent__SetSpecialCommandCardBuffData(this, 156, active, turn, addOrder, v5);
}


void BattleCommandComponent__SetCommandCodeActive(
        BattleCommandComponent_o *this,
        UnityEngine_Color_o color,
        bool isFirst,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s11
  float r; // s10
  UnityEngine_Object_o *chargeTurnLabel; // x21
  UnityEngine_Object_o *remainingTurnLabel; // x21
  __int64 v12; // x1
  void *buffData; // x0
  UnityEngine_Object_o *codeTexture; // x21
  UnityEngine_Object_o *codeSprite; // x21
  BattleCommandData_o *data; // x0
  struct BattleServantData_o *svtData; // x8
  int v18; // w8
  int v19; // w9
  __int64 v20; // x21
  struct BattleCommandData_o *v21; // x10
  int32_t v22; // w21
  int v23; // t1
  UILabel_o *v24; // x22
  UILabel_o *v25; // x21
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4CCA264 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_2709/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/);
    byte_4CCA264 = 1;
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
    if ( !UnityEngine_Object__op_Equality(chargeTurnLabel, 0, 0) )
    {
      remainingTurnLabel = (UnityEngine_Object_o *)this->fields.remainingTurnLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(remainingTurnLabel, 0, 0) )
      {
        buffData = this->fields.chargeTurnLabel;
        if ( !buffData )
          goto LABEL_56;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0);
        buffData = this->fields.remainingTurnLabel;
        if ( !buffData )
          goto LABEL_56;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0);
        if ( this->fields.isCodeTextureView )
        {
          codeTexture = (UnityEngine_Object_o *)this->fields.codeTexture;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(codeTexture, 0, 0) )
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
          if ( UnityEngine_Object__op_Equality(codeSprite, 0, 0) )
            return;
          buffData = this->fields.codeSprite;
          if ( !buffData )
            goto LABEL_56;
        }
        v26.fields.r = r;
        v26.fields.g = g;
        v26.fields.b = b;
        v26.fields.a = a;
        UIWidget__set_color((UIWidget_o *)buffData, v26, 0);
        data = this->fields.data;
        if ( data )
        {
          if ( BattleCommandData__IsEnableCommandCode(data, 0) )
          {
            svtData = this->fields.svtData;
            if ( svtData )
            {
              buffData = svtData->fields.buffData;
              if ( !buffData )
                goto LABEL_56;
              buffData = BattleBuffData__getPassiveList((BattleBuffData_o *)buffData, 1, 0);
              if ( !buffData )
                goto LABEL_56;
              v18 = *((_DWORD *)buffData + 6);
              if ( v18 >= 1 )
              {
                v19 = 0;
                while ( 1 )
                {
                  if ( v18 == v19 )
                    sub_1C71610(buffData);
                  v20 = *((_QWORD *)buffData + v19 + 4);
                  if ( !v20 )
                    goto LABEL_56;
                  v21 = this->fields.data;
                  if ( !v21 )
                    goto LABEL_56;
                  if ( *(_QWORD *)(v20 + 88) == v21->fields.userCommandCodeId )
                    break;
                  if ( v18 == ++v19 )
                    goto LABEL_49;
                }
                v23 = *(_DWORD *)(v20 + 112);
                v22 = v20 + 112;
                if ( v23 >= 1 )
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
                  v27.fields.r = 0.5;
                  v27.fields.g = 0.5;
                  v27.fields.b = 0.5;
                  v27.fields.a = 1.0;
                  UIWidget__set_color((UIWidget_o *)buffData, v27, 0);
                  buffData = this->fields.chargeTurnLabel;
                  if ( !buffData )
                    goto LABEL_56;
                  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0);
                  buffData = this->fields.remainingTurnLabel;
                  if ( !buffData )
                    goto LABEL_56;
                  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0);
                  v24 = this->fields.chargeTurnLabel;
                  buffData = System_Int32__ToString(v22, 0);
                  if ( !v24 )
                    goto LABEL_56;
                  UILabel__set_text(v24, (System_String_o *)buffData, 0);
                  v25 = this->fields.remainingTurnLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  buffData = LocalizationManager__Get((System_String_o *)StringLiteral_2709/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, 0);
                  if ( !v25 )
                    goto LABEL_56;
                  UILabel__set_text(v25, (System_String_o *)buffData, 0);
                }
              }
LABEL_49:
              if ( isFirst )
              {
                buffData = this->fields.chargeTurnLabel;
                if ( buffData )
                {
                  buffData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffData, 0);
                  if ( buffData )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffData, 0, 0);
                    buffData = this->fields.remainingTurnLabel;
                    if ( buffData )
                    {
                      buffData = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffData, 0);
                      if ( buffData )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffData, 0, 0);
                        return;
                      }
                    }
                  }
                }
LABEL_56:
                sub_1C71608(buffData, v12);
              }
            }
          }
        }
      }
    }
  }
}


void BattleCommandComponent__SetCommandCodeMode(
        BattleCommandComponent_o *this,
        bool isTextureMode,
        const MethodInfo *method)
{
  this->fields.isCodeTextureView = isTextureMode;
}


void BattleCommandComponent__SetCommandCodeView(
        BattleCommandComponent_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *codeTexture; // x0
  GrandQuestFolderBoardItem_o *p_codeTexture; // x19
  UITexture_o *klass; // x21
  UnityEngine_Object_o *Manager__loadCommandCodeTexture; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *Entity; // x0
  void *monitor; // x20
  Il2CppClass *v18; // x21
  int32_t v19; // w20
  UISprite_o *codeSprite; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4CCA26C & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C713B0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&ServantAssetLoadManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCA26C = 1;
  }
  if ( userCommandCodeId < 1 )
  {
    BattleCommandComponent__SwitchChangeObjPos(this, 0, method);
    codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
    if ( codeTexture )
    {
      UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0);
      codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
      if ( codeTexture )
      {
        UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0);
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
    UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0);
    codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
    if ( codeTexture )
    {
      p_codeTexture = (GrandQuestFolderBoardItem_o *)&this->fields.codeTexture;
      UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0);
      klass = (UITexture_o *)p_codeTexture->klass;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadCommandCodeTexture = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCodeTexture(
                                                                  klass,
                                                                  userCommandCodeId,
                                                                  0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCodeTexture, 0, 0) )
      {
        p_codeTexture->klass = (GrandQuestFolderBoardItem_c *)Manager__loadCommandCodeTexture;
        sub_1C71354(p_codeTexture, (int32_t)Manager__loadCommandCodeTexture, v10, v11, v12, v13, v14, v15);
      }
      return;
    }
LABEL_28:
    sub_1C71608(codeTexture, v5);
  }
  UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
  if ( !codeTexture )
    goto LABEL_28;
  UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0);
  codeTexture = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !codeTexture )
    goto LABEL_28;
  codeTexture = (UnityEngine_Behaviour_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)codeTexture,
                                             (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !codeTexture )
    goto LABEL_28;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)codeTexture,
             userCommandCodeId,
             (const MethodInfo_340B3DC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  if ( Entity )
  {
    v18 = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v21.fields.currentCryptoKey = v18;
    *(_QWORD *)&v21.fields.fakeValue = monitor;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v21, 0);
  }
  else
  {
    v19 = -1;
  }
  codeSprite = this->fields.codeSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommandCodeMiniImage(codeSprite, v19, 0);
}


void BattleCommandComponent__SetCommandCodeView_46775620(
        BattleCommandComponent_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *codeTexture; // x0
  GrandQuestFolderBoardItem_o *p_codeTexture; // x20
  UITexture_o *klass; // x21
  UnityEngine_Object_o *Manager__loadCommandCodeTexture_40983628; // x19
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UISprite_o *codeSprite; // x20

  if ( (byte_4CCA26D & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&ServantAssetLoadManager_TypeInfo);
    byte_4CCA26D = 1;
  }
  if ( commandCodeId <= 0 )
  {
    BattleCommandComponent__SwitchChangeObjPos(this, 0, method);
    codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
    if ( codeTexture )
    {
      UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0);
      codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
      if ( codeTexture )
      {
LABEL_21:
        UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0);
        return;
      }
    }
LABEL_22:
    sub_1C71608(codeTexture, v5);
  }
  BattleCommandComponent__SwitchChangeObjPos(this, 1, method);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
  if ( !codeTexture )
    goto LABEL_22;
  if ( this->fields.isCodeTextureView )
  {
    UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0);
    codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
    if ( codeTexture )
    {
      p_codeTexture = (GrandQuestFolderBoardItem_o *)&this->fields.codeTexture;
      UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0);
      klass = (UITexture_o *)p_codeTexture->klass;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadCommandCodeTexture_40983628 = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCodeTexture_40983628(
                                                                           klass,
                                                                           commandCodeId,
                                                                           0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCodeTexture_40983628, 0, 0) )
      {
        p_codeTexture->klass = (GrandQuestFolderBoardItem_c *)Manager__loadCommandCodeTexture_40983628;
        sub_1C71354(p_codeTexture, (int32_t)Manager__loadCommandCodeTexture_40983628, v10, v11, v12, v13, v14, v15);
        return;
      }
      codeTexture = (UnityEngine_Behaviour_o *)p_codeTexture->klass;
      if ( p_codeTexture->klass )
        goto LABEL_21;
    }
    goto LABEL_22;
  }
  UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
  if ( !codeTexture )
    goto LABEL_22;
  UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0);
  codeSprite = this->fields.codeSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommandCodeMiniImage(codeSprite, commandCodeId, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__SetCommandEffectActive(
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
  if ( (byte_4CCA289 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA289 = 1;
  }
  effectobj = v6->fields.effectobj;
  if ( !effectobj )
    goto LABEL_13;
  if ( LODWORD(effectobj->max_length) <= effectType )
LABEL_14:
    sub_1C71610(this);
  v8 = (UnityEngine_Object_o *)effectobj->m_Items[effectType];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v6->fields.effectobj;
    if ( !v9 )
      goto LABEL_13;
    if ( LODWORD(v9->max_length) > effectType )
    {
      this = (BattleCommandComponent_o *)v9->m_Items[effectType];
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, active, 0);
        return;
      }
LABEL_13:
      sub_1C71608(this, *(_QWORD *)&effectType);
    }
    goto LABEL_14;
  }
}


void BattleCommandComponent__SetConfWindowTreasureDeviceErrorMark(
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
    if ( BattleServantData__get_isTreasureDeveiceError(svtData, 0) )
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


void BattleCommandComponent__SetDonotPermanentSleepSprite(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *donotPermanentSleep; // x20
  UISprite_o *v4; // x19

  if ( (byte_4CCA27A & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_20310/*"icon_sleep_2"*/);
    byte_4CCA27A = 1;
  }
  donotPermanentSleep = (UnityEngine_Object_o *)this->fields.donotPermanentSleep;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(donotPermanentSleep, 0, 0) )
  {
    v4 = this->fields.donotPermanentSleep;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v4, (System_String_o *)StringLiteral_20310/*"icon_sleep_2"*/, 0);
  }
}


void BattleCommandComponent__SetDonotSleepSprite(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *donotsleepSprite; // x20
  UISprite_o *v4; // x19

  if ( (byte_4CCA279 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_20309/*"icon_sleep"*/);
    byte_4CCA279 = 1;
  }
  donotsleepSprite = (UnityEngine_Object_o *)this->fields.donotsleepSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(donotsleepSprite, 0, 0) )
  {
    v4 = this->fields.donotsleepSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v4, (System_String_o *)StringLiteral_20309/*"icon_sleep"*/, 0);
  }
}


void BattleCommandComponent__SetDownloadEventSprite(BattleCommandComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  BattleCommandComponent__SetDonotSleepSprite(this, method);
  BattleCommandComponent__SetUnusableShortageStarSprite(this, v3);
  BattleCommandComponent__SetDonotPermanentSleepSprite(this, v4);
}


void BattleCommandComponent__SetFixedCommandCardBuff(
        BattleCommandComponent_o *this,
        bool active,
        int32_t turn,
        int32_t addOrder,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  BattleCommandComponent__SetSpecialCommandCardBuffData(this, 131, active, turn, addOrder, v5);
}


void BattleCommandComponent__SetIsInBattle(BattleCommandComponent_o *this, bool value, const MethodInfo *method)
{
  this->fields.isInBattle = value;
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__SetLabelActive(BattleCommandComponent_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_Component_o *chargeTurnLabel; // x0

  chargeTurnLabel = (UnityEngine_Component_o *)this->fields.chargeTurnLabel;
  if ( !chargeTurnLabel
    || (chargeTurnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(chargeTurnLabel, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)chargeTurnLabel, active, 0),
        (chargeTurnLabel = (UnityEngine_Component_o *)this->fields.remainingTurnLabel) == 0)
    || (chargeTurnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(chargeTurnLabel, 0)) == 0 )
  {
    sub_1C71608(chargeTurnLabel, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)chargeTurnLabel, active, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__SetLabelAssistActive(
        BattleCommandComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Component_o *assistChargeTurnLabel; // x0

  assistChargeTurnLabel = (UnityEngine_Component_o *)this->fields.assistChargeTurnLabel;
  if ( !assistChargeTurnLabel
    || (assistChargeTurnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             assistChargeTurnLabel,
                                                             0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)assistChargeTurnLabel, active, 0),
        (assistChargeTurnLabel = (UnityEngine_Component_o *)this->fields.assistRemainingTurnLabel) == 0)
    || (assistChargeTurnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             assistChargeTurnLabel,
                                                             0)) == 0 )
  {
    sub_1C71608(assistChargeTurnLabel, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)assistChargeTurnLabel, active, 0);
}


void BattleCommandComponent__SetLockInfo(BattleCommandComponent_o *this, bool isLock, const MethodInfo *method)
{
  UnityEngine_Object_o *LockInfo; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4CCA272 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA272 = 1;
  }
  LockInfo = (UnityEngine_Object_o *)this->fields.LockInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(LockInfo, 0, 0) )
  {
    v7 = this->fields.LockInfo;
    if ( !v7 )
      sub_1C71608(0, v6);
    UnityEngine_GameObject__SetActive(v7, isLock, 0);
  }
}


void BattleCommandComponent__SetNobleGaugeEffect(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *effect,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.nobleGaugeEffect = effect;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.nobleGaugeEffect,
    (int32_t)effect,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleCommandComponent__SetPowerUpCardIcon(
        BattleCommandComponent_o *this,
        int32_t powerUpValue,
        int32_t iconType,
        bool isBright,
        const MethodInfo *method)
{
  UnityEngine_Object_o *powerUpCardIcon; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  UISprite_o *v12; // x23
  UnityEngine_Component_o *v13; // x8
  char v14; // w19
  bool v15; // w1

  if ( (byte_4CCA274 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA274 = 1;
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(powerUpCardIcon, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    v12 = this->fields.powerUpCardIcon;
    if ( powerUpValue <= 0 )
    {
      if ( v12 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.powerUpCardIcon, 0);
        if ( gameObject )
        {
          v15 = 0;
          goto LABEL_15;
        }
      }
    }
    else
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetCommandCardIconImage(
                                                 v12,
                                                 powerUpValue,
                                                 iconType,
                                                 isBright,
                                                 0);
      v13 = (UnityEngine_Component_o *)this->fields.powerUpCardIcon;
      if ( v13 )
      {
        v14 = (char)gameObject;
        gameObject = UnityEngine_Component__get_gameObject(v13, 0);
        if ( gameObject )
        {
          v15 = v14 & 1;
LABEL_15:
          UnityEngine_GameObject__SetActive(gameObject, v15, 0);
          return;
        }
      }
    }
    sub_1C71608(gameObject, v11);
  }
}


void BattleCommandComponent__SetPowerUpCardValue(
        BattleCommandComponent_o *this,
        int32_t powerUpValue,
        const MethodInfo *method)
{
  UnityEngine_Object_o *powerUpCardValue; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *v8; // x20
  Il2CppObject *v9; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CCA273 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_805/*"+{0:#,0}"*/);
    byte_4CCA273 = 1;
  }
  powerUpCardValue = (UnityEngine_Object_o *)this->fields.powerUpCardValue;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(powerUpCardValue, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.powerUpCardValue;
    if ( !gameObject )
      goto LABEL_13;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_13;
    if ( powerUpValue <= 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      return;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v8 = this->fields.powerUpCardValue;
    v10 = powerUpValue;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_805/*"+{0:#,0}"*/, v9, 0);
    if ( !v8 )
LABEL_13:
      sub_1C71608(gameObject, v6);
    UILabel__set_text(v8, (System_String_o *)gameObject, 0);
  }
}


void BattleCommandComponent__SetSpecialCommandCardBuffData(
        BattleCommandComponent_o *this,
        int32_t buffType,
        bool active,
        int32_t turn,
        int32_t addOrder,
        const MethodInfo *method)
{
  BattleCommandComponent___c__DisplayClass225_0_o *v11; // x24
  void *Index; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *specialCardBuffList; // x23
  System_Predicate_object__o *v15; // x25
  int32_t v16; // w23
  System_Collections_Generic_List_object__o *v17; // x22
  int32_t v18; // w24
  BattleCommandComponent_CardBuffData_o *v19; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_object__o *v30; // x20
  System_Comparison_T__o *v31; // x21
  Il2CppObject *v32; // x22
  struct BattleCommandComponent___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  const MethodInfo *v40; // x2
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v41; // x8

  if ( (byte_4CCA27D & 1) == 0 )
  {
    sub_1C713B0(&BattleCommandComponent_CardBuffData_TypeInfo);
    sub_1C713B0(&System_Comparison_BattleCommandComponent_CardBuffData__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__RemoveAt__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
    sub_1C713B0(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    sub_1C713B0(&Method_BattleCommandComponent___c__SetSpecialCommandCardBuffData_b__225_1__);
    sub_1C713B0(&Method_BattleCommandComponent___c__DisplayClass225_0__SetSpecialCommandCardBuffData_b__0__);
    sub_1C713B0(&BattleCommandComponent___c__DisplayClass225_0_TypeInfo);
    sub_1C713B0(&BattleCommandComponent___c_TypeInfo);
    byte_4CCA27D = 1;
  }
  v11 = (BattleCommandComponent___c__DisplayClass225_0_o *)sub_1C715FC(BattleCommandComponent___c__DisplayClass225_0_TypeInfo);
  BattleCommandComponent___c__DisplayClass225_0___ctor(v11, 0);
  if ( !v11 )
    goto LABEL_29;
  v11->fields.buffType = buffType;
  specialCardBuffList = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  v15 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
  System_Predicate_object____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_BattleCommandComponent___c__DisplayClass225_0__SetSpecialCommandCardBuffData_b__0__,
    0);
  if ( !specialCardBuffList )
    goto LABEL_29;
  Index = (void *)System_Collections_Generic_List_object___FindIndex(
                    specialCardBuffList,
                    (System_Predicate_T__o *)v15,
                    (const MethodInfo_3810F70 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  v16 = (int)Index;
  if ( active )
  {
    v17 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
    if ( ((unsigned int)Index & 0x80000000) != 0 )
    {
      v18 = v11->fields.buffType;
      v19 = (BattleCommandComponent_CardBuffData_o *)sub_1C715FC(BattleCommandComponent_CardBuffData_TypeInfo);
      BattleCommandComponent_CardBuffData___ctor(v19, v18, turn, addOrder, 0);
      if ( !v17 )
        goto LABEL_29;
      items = v17->fields._items;
      v27 = Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Add__;
      ++v17->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v17->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)v19,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v29 + 4), (int32_t)v19, v20, v21, v22, v23, v24, v25);
      }
    }
    else
    {
      if ( !v17 )
        goto LABEL_29;
      Index = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList,
                (int32_t)Index,
                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
      if ( !Index )
        goto LABEL_29;
      *((_DWORD *)Index + 5) = turn;
      Index = this->fields.specialCardBuffList;
      if ( !Index )
        goto LABEL_29;
      Index = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)Index,
                v16,
                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
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
      v16,
      (const MethodInfo_3811EEC *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__RemoveAt__);
  }
  v30 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  Index = BattleCommandComponent___c_TypeInfo;
  if ( !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
    Index = BattleCommandComponent___c_TypeInfo;
  }
  v31 = *(System_Comparison_T__o **)(*((_QWORD *)Index + 23) + 24LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)Index + 56) )
    {
      j_il2cpp_runtime_class_init_0(Index);
      Index = BattleCommandComponent___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)Index + 23);
    v31 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_BattleCommandComponent_CardBuffData__TypeInfo);
    System_Comparison_object____ctor(
      v31,
      v32,
      Method_BattleCommandComponent___c__SetSpecialCommandCardBuffData_b__225_1__,
      0);
    static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    static_fields->__9__225_1 = (struct System_Comparison_BattleCommandComponent_CardBuffData__o *)v31;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__225_1, (int32_t)v31, v34, v35, v36, v37, v38, v39);
  }
  if ( !v30
    || (System_Collections_Generic_List_object___Sort_58794460(
          v30,
          v31,
          (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Sort__),
        (v41 = this->fields.specialCardBuffList) == 0) )
  {
LABEL_29:
    sub_1C71608(Index, v13);
  }
  BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, v41->fields._size > 0, v40);
}


void BattleCommandComponent__SetTreasureDeviceTypeChange(
        BattleCommandComponent_o *this,
        bool active,
        int32_t turn,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nowTreasureDeviceTypeImage; // x22
  UnityEngine_Object_o *restTreasureDeviceChangeTurnLabel; // x22
  __int64 v9; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *v11; // x20
  System_String_o *v12; // x21
  Il2CppObject *v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CCA271 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_2751/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_REST_TURN"*/);
    byte_4CCA271 = 1;
  }
  nowTreasureDeviceTypeImage = (UnityEngine_Object_o *)this->fields.nowTreasureDeviceTypeImage;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(nowTreasureDeviceTypeImage, 0, 0) )
  {
    restTreasureDeviceChangeTurnLabel = (UnityEngine_Object_o *)this->fields.restTreasureDeviceChangeTurnLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(restTreasureDeviceChangeTurnLabel, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.nowTreasureDeviceTypeImage;
      if ( !gameObject )
        goto LABEL_21;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_21;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, active, 0);
      if ( !active )
        return;
      gameObject = (UnityEngine_Component_o *)this->fields.restTreasureDeviceChangeTurnLabel;
      if ( !gameObject )
        goto LABEL_21;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_21;
      if ( turn < 0 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        return;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v11 = this->fields.restTreasureDeviceChangeTurnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2751/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_REST_TURN"*/, 0);
      v14 = turn;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
      gameObject = (UnityEngine_Component_o *)System_String__Format(v12, v13, 0);
      if ( !v11 )
LABEL_21:
        sub_1C71608(gameObject, v9);
      UILabel__set_text(v11, (System_String_o *)gameObject, 0);
    }
  }
}


bool BattleCommandComponent__SetTreasureDeviceTypeImageDefaultAtlas(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *defaultTdTypeImageAtlas; // x21
  struct UIAtlas_o **p_defaultTdTypeImageAtlas; // x20
  UnityEngine_Object_o *nowTreasureDeviceTypeImage; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UISprite_o *v14; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *v16; // x19

  if ( (byte_4CCA276 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA276 = 1;
  }
  defaultTdTypeImageAtlas = (UnityEngine_Object_o *)this->fields.defaultTdTypeImageAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_defaultTdTypeImageAtlas = &this->fields.defaultTdTypeImageAtlas;
  if ( UnityEngine_Object__op_Equality(defaultTdTypeImageAtlas, 0, 0) )
  {
    nowTreasureDeviceTypeImage = (UnityEngine_Object_o *)this->fields.nowTreasureDeviceTypeImage;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(nowTreasureDeviceTypeImage, 0, 0);
    if ( v6 )
    {
      v14 = this->fields.nowTreasureDeviceTypeImage;
      if ( !v14 )
        sub_1C71608(v6, v7);
      mAtlas = v14->fields.mAtlas;
      *p_defaultTdTypeImageAtlas = mAtlas;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.defaultTdTypeImageAtlas,
        (int32_t)mAtlas,
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
  return UnityEngine_Object__op_Inequality(v16, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__SetUntrueCount(
        BattleCommandComponent_o *this,
        int32_t count,
        bool isInitZero,
        const MethodInfo *method)
{
  DrumRollLabel_o *criticallabel; // x0
  struct DrumRollLabel_o *v8; // x21
  DrumRollLabel_CompleteEventHandler_o *v9; // x22

  if ( (byte_4CCA253 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattleCommandComponent_compCriticallabel__);
    sub_1C713B0(&DrumRollLabel_CompleteEventHandler_TypeInfo);
    byte_4CCA253 = 1;
  }
  if ( isInitZero )
  {
    criticallabel = this->fields.criticallabel;
    if ( !criticallabel )
      goto LABEL_12;
    DrumRollLabel__setParam(criticallabel, 0, 0);
  }
  criticallabel = (DrumRollLabel_o *)this->fields.criticalObject;
  if ( !criticallabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)criticallabel, 1, 0),
        (v8 = this->fields.criticallabel) == 0) )
  {
LABEL_12:
    sub_1C71608(criticallabel, *(_QWORD *)&count);
  }
  if ( v8->fields.nowvalue <= count )
  {
    v9 = (DrumRollLabel_CompleteEventHandler_o *)sub_1C715FC(DrumRollLabel_CompleteEventHandler_TypeInfo);
    DrumRollLabel_CompleteEventHandler___ctor(
      v9,
      (Il2CppObject *)this,
      Method_BattleCommandComponent_compCriticallabel__,
      0);
  }
  else
  {
    v9 = 0;
  }
  DrumRollLabel__changeParam(v8, count, 1, v9, 0.0, 0);
}


void BattleCommandComponent__SetUnusableShortageStarSprite(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *unusableShortageStarSprite; // x20
  UISprite_o *v4; // x19

  if ( (byte_4CCA278 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_20327/*"icon_unusable_star"*/);
    byte_4CCA278 = 1;
  }
  unusableShortageStarSprite = (UnityEngine_Object_o *)this->fields.unusableShortageStarSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(unusableShortageStarSprite, 0, 0) )
  {
    v4 = this->fields.unusableShortageStarSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v4, (System_String_o *)StringLiteral_20327/*"icon_unusable_star"*/, 0);
  }
}


void BattleCommandComponent__SwitchChangeObjPos(BattleCommandComponent_o *this, bool isUp, const MethodInfo *method)
{
  UnityEngine_Object_o *codeObject; // x21
  UnityEngine_Transform_o *friendIcon; // x0
  __int64 v7; // x1
  struct UnityEngine_Transform_array *stateCodePoints; // x8
  il2cpp_array_size_t max_length; // x9
  struct UnityEngine_Transform_array *stateArrowPoints; // x10
  UnityEngine_Transform_o *v11; // x21
  __int64 v12; // x8
  struct UnityEngine_Transform_array *v13; // x8
  UnityEngine_Transform_o *v14; // x20
  struct UnityEngine_Transform_array *v15; // x9
  struct UnityEngine_GameObject_array *addObjectList; // x10
  UnityEngine_Transform_o *v17; // x20
  UnityEngine_Object_o *v18; // x21
  struct UnityEngine_GameObject_array *v19; // x8
  UnityEngine_Transform_o *v20; // x21
  struct UnityEngine_GameObject_array *v21; // x8
  UnityEngine_Object_o *v22; // x21
  struct UnityEngine_GameObject_array *v23; // x8
  UnityEngine_Transform_o *v24; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCA26F & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA26F = 1;
  }
  codeObject = (UnityEngine_Object_o *)this->fields.codeObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  friendIcon = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(codeObject, 0, 0);
  if ( ((unsigned __int8)friendIcon & 1) == 0 )
  {
    stateCodePoints = this->fields.stateCodePoints;
    if ( stateCodePoints )
    {
      max_length = stateCodePoints->max_length;
      if ( max_length )
      {
        stateArrowPoints = this->fields.stateArrowPoints;
        if ( stateArrowPoints )
        {
          if ( stateArrowPoints->max_length )
          {
            if ( !(_DWORD)max_length )
              goto LABEL_49;
            friendIcon = stateCodePoints->m_Items[0];
            if ( !friendIcon )
              goto LABEL_48;
            v11 = this->fields.codeObject;
            position = UnityEngine_Transform__get_position(friendIcon, 0);
            if ( !v11 )
              goto LABEL_48;
            UnityEngine_Transform__set_position(v11, position, 0);
            v12 = 0;
            if ( isUp )
            {
              friendIcon = (UnityEngine_Transform_o *)this->fields.friendIcon;
              if ( !friendIcon )
                goto LABEL_48;
              friendIcon = (UnityEngine_Transform_o *)UnityEngine_Behaviour__get_enabled(
                                                        (UnityEngine_Behaviour_o *)friendIcon,
                                                        0);
              if ( ((unsigned __int8)friendIcon & 1) != 0 )
              {
                v13 = this->fields.stateCodePoints;
                if ( !v13 )
                  goto LABEL_48;
                if ( LODWORD(v13->max_length) <= 1 )
                  goto LABEL_49;
                friendIcon = v13->m_Items[1];
                if ( !friendIcon )
                  goto LABEL_48;
                v14 = this->fields.codeObject;
                v26 = UnityEngine_Transform__get_position(friendIcon, 0);
                if ( !v14 )
                  goto LABEL_48;
                UnityEngine_Transform__set_position(v14, v26, 0);
                v12 = 2;
              }
              else
              {
                friendIcon = (UnityEngine_Transform_o *)this->fields.friendIcon;
                if ( !friendIcon )
                  goto LABEL_48;
                friendIcon = (UnityEngine_Transform_o *)UnityEngine_Behaviour__get_enabled(
                                                          (UnityEngine_Behaviour_o *)friendIcon,
                                                          0);
                v12 = ((unsigned __int8)friendIcon & 1) == 0;
              }
            }
            v15 = this->fields.stateArrowPoints;
            if ( !v15 )
              goto LABEL_48;
            if ( (unsigned int)v12 >= LODWORD(v15->max_length) )
              goto LABEL_49;
            addObjectList = this->fields.addObjectList;
            if ( !addObjectList )
              goto LABEL_48;
            if ( LODWORD(addObjectList->max_length) <= 1 )
              goto LABEL_49;
            v17 = v15->m_Items[v12];
            v18 = (UnityEngine_Object_o *)addObjectList->m_Items[1];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            friendIcon = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v18, 0, 0);
            if ( ((unsigned __int8)friendIcon & 1) != 0 )
            {
              v19 = this->fields.addObjectList;
              if ( !v19 )
                goto LABEL_48;
              if ( LODWORD(v19->max_length) <= 1 )
                goto LABEL_49;
              friendIcon = (UnityEngine_Transform_o *)v19->m_Items[1];
              if ( !friendIcon )
                goto LABEL_48;
              friendIcon = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)friendIcon, 0);
              if ( !v17 )
                goto LABEL_48;
              v20 = friendIcon;
              v27 = UnityEngine_Transform__get_position(v17, 0);
              if ( !v20 )
                goto LABEL_48;
              UnityEngine_Transform__set_position(v20, v27, 0);
            }
            v21 = this->fields.addObjectList;
            if ( !v21 )
              goto LABEL_48;
            if ( !LODWORD(v21->max_length) )
LABEL_49:
              sub_1C71610(friendIcon);
            v22 = (UnityEngine_Object_o *)v21->m_Items[0];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            friendIcon = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v22, 0, 0);
            if ( ((unsigned __int8)friendIcon & 1) != 0 )
            {
              v23 = this->fields.addObjectList;
              if ( !v23 )
                goto LABEL_48;
              if ( LODWORD(v23->max_length) )
              {
                friendIcon = (UnityEngine_Transform_o *)v23->m_Items[0];
                if ( friendIcon )
                {
                  friendIcon = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)friendIcon, 0);
                  if ( v17 )
                  {
                    v24 = friendIcon;
                    v28 = UnityEngine_Transform__get_position(v17, 0);
                    if ( v24 )
                    {
                      UnityEngine_Transform__set_position(v24, v28, 0);
                      return;
                    }
                  }
                }
LABEL_48:
                sub_1C71608(friendIcon, v7);
              }
              goto LABEL_49;
            }
          }
        }
      }
    }
  }
}


void BattleCommandComponent__UpdateCommandCardEffect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0
  BattleBuffData_BuffData_array *CommandCodeBuffArray; // x0
  BattleBuffData_BuffData_array *v5; // x20
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x21
  __int64 v10; // x24
  BattleBuffData_BuffData_o *v11; // x22
  System_String_o *datalist; // x22
  System_String_o *v13; // x22
  Il2CppObject *v14; // x23
  UnityEngine_Object_o *Manager__loadBattleCommonEffect; // x22
  UnityEngine_Transform_o *objectRoot; // x23
  Il2CppObject *v17; // x22
  Il2CppObject *Component_object; // x23
  const MethodInfo *v19; // x3
  struct UISprite_o *text; // x8
  struct UISprite_o *bg; // x9
  struct BattleCommandData_o *v22; // x8
  struct BattleCommandData_o *v23; // x8
  Il2CppObject *key; // [xsp+0h] [xbp-70h] BYREF
  System_String_o *path; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CCA285 & 1) == 0 )
  {
    sub_1C713B0(&BattleEffectUtility_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1C713B0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_CardEffectComponent___);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject____78725064);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&ServantAssetLoadManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCA285 = 1;
  }
  key = 0;
  path = 0;
  BattleCommandComponent__ClearCardEffect(this, method);
  data = this->fields.data;
  if ( data )
  {
    CommandCodeBuffArray = BattleCommandData__GetCommandCodeBuffArray(data, 0);
    if ( CommandCodeBuffArray )
    {
      v5 = CommandCodeBuffArray;
      if ( CommandCodeBuffArray->max_length )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_43;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EffectMaster___);
        max_length = v5->max_length;
        if ( max_length >= 1 )
        {
          v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          v10 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v10 >= max_length )
              sub_1C71610(Instance);
            v11 = v5->m_Items[v10];
            if ( !v11 )
              break;
            if ( v11->fields.cardEffectId >= 1 )
            {
              Instance = (DataManager_o *)BattleBuffData_BuffData__isEnableCommandCardBuff(
                                            v5->m_Items[v10],
                                            this->fields.data,
                                            0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_13;
              Instance = (DataManager_o *)BattleBuffData_BuffData__isCommandCodeBuff(v11, 0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                v22 = this->fields.data;
                if ( !v22 )
                  break;
                if ( v11->fields.userCommandCodeId == v22->fields.userCommandCodeId )
                  goto LABEL_13;
              }
              Instance = (DataManager_o *)BattleBuffData_BuffData__IsCommandAssistBuff(v11, 0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                v23 = this->fields.data;
                if ( !v23 )
                  break;
                if ( v11->fields.commandAssistId == v23->fields.commandAssistId
                  && v11->fields.cardIndex == v23->fields.servantCardIdsIndex )
                {
LABEL_13:
                  if ( !v9 )
                    break;
                  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                v9,
                                                v11->fields.cardEffectId,
                                                (const MethodInfo_3408E80 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
                  if ( Instance )
                  {
                    datalist = (System_String_o *)Instance->fields.datalist;
                    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
                    BattleEffectUtility__GetBattleCommonEffectPathAndName(datalist, &path, (System_String_o **)&key, 0);
                    Instance = (DataManager_o *)this->fields.cardEffectDict;
                    if ( !Instance )
                      break;
                    Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                  (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                                                  key,
                                                  (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
                    if ( ((unsigned __int8)Instance & 1) == 0 )
                    {
                      v14 = key;
                      v13 = path;
                      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                      Manager__loadBattleCommonEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                                  v13,
                                                                                  (System_String_o *)v14,
                                                                                  0);
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      Instance = (DataManager_o *)UnityEngine_Object__op_Equality(Manager__loadBattleCommonEffect, 0, 0);
                      if ( ((unsigned __int8)Instance & 1) == 0 )
                      {
                        objectRoot = this->fields.objectRoot;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object__52264420(
                                                      (Il2CppObject *)Manager__loadBattleCommonEffect,
                                                      objectRoot,
                                                      (const MethodInfo_31D7DE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78725064);
                        if ( !Instance )
                          break;
                        v17 = (Il2CppObject *)Instance;
                        Component_object = UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)Instance,
                                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_CardEffectComponent___);
                        Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(
                                                      (UnityEngine_Object_o *)Component_object,
                                                      0,
                                                      0);
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
                            v19);
                        }
                        Instance = (DataManager_o *)this->fields.cardEffectDict;
                        if ( !Instance )
                          break;
                        System_Collections_Generic_Dictionary_object__object___Add(
                          (System_Collections_Generic_Dictionary_object__object__o *)Instance,
                          key,
                          v17,
                          (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
                      }
                    }
                  }
                }
              }
            }
            max_length = v5->max_length;
            if ( (int)++v10 >= max_length )
              return;
          }
LABEL_43:
          sub_1C71608(Instance, v7);
        }
      }
    }
  }
}


void BattleCommandComponent__UpdateCommandCardTypeChange(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *Item; // x0
  System_Collections_Generic_List_object__o *specialCardBuffList; // x20
  System_Predicate_object__o *data; // x21
  Il2CppObject *image; // x22
  struct BattleCommandComponent___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t Index; // w0
  int32_t v15; // w20
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  UnityEngine_Object_o *specialCardBuffTurn; // x21
  UISprite_o *v18; // x21
  Il2CppObject *v19; // x0
  System_String_o *v20; // x22
  UILabel_o *v21; // x21
  System_Collections_Generic_List_object__o *v22; // x8
  System_String_o *v23; // x19
  Il2CppObject *v24; // x0
  int32_t svtId; // [xsp+8h] [xbp-38h] BYREF
  int32_t type; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CCA27E & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    sub_1C713B0(&Method_BattleCommandComponent___c__UpdateCommandCardTypeChange_b__227_0__);
    sub_1C713B0(&BattleCommandComponent___c_TypeInfo);
    sub_1C713B0(&StringLiteral_5010/*"DISPLAY_REMAINING_TURN"*/);
    sub_1C713B0(&StringLiteral_20249/*"icon_commandchange_{0}"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCA27E = 1;
  }
  Item = (BattleCommandData_o *)BattleCommandComponent___c_TypeInfo;
  specialCardBuffList = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  if ( !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
    Item = (BattleCommandData_o *)BattleCommandComponent___c_TypeInfo;
  }
  data = (System_Predicate_object__o *)Item[1].klass->_1.byval_arg.data;
  if ( !data )
  {
    if ( !Item[1].fields.uniqueId )
    {
      j_il2cpp_runtime_class_init_0(Item);
      Item = (BattleCommandData_o *)BattleCommandComponent___c_TypeInfo;
    }
    image = (Il2CppObject *)Item[1].klass->_1.image;
    data = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    System_Predicate_object____ctor(
      data,
      image,
      Method_BattleCommandComponent___c__UpdateCommandCardTypeChange_b__227_0__,
      0);
    static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    static_fields->__9__227_0 = (struct System_Predicate_BattleCommandComponent_CardBuffData__o *)data;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__227_0, (int32_t)data, v8, v9, v10, v11, v12, v13);
  }
  if ( !specialCardBuffList )
    goto LABEL_30;
  Index = System_Collections_Generic_List_object___FindIndex(
            specialCardBuffList,
            (System_Predicate_T__o *)data,
            (const MethodInfo_3810F70 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  if ( (Index & 0x80000000) == 0 )
  {
    v15 = Index;
    specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0, 0) )
    {
      specialCardBuffTurn = (UnityEngine_Object_o *)this->fields.specialCardBuffTurn;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(specialCardBuffTurn, 0, 0) )
      {
        Item = this->fields.data;
        if ( !Item )
          goto LABEL_30;
        v18 = this->fields.specialCardBuffIcon;
        type = BattleCommandData__get_type(Item, 0);
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &type);
        v20 = System_String__Format((System_String_o *)StringLiteral_20249/*"icon_commandchange_{0}"*/, v19, 0);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( !AtlasManager__SetEventSprite(v18, v20, 0) )
        {
          Item = (BattleCommandData_o *)this->fields.specialCardBuffIcon;
          if ( !Item )
            goto LABEL_30;
          UISprite__set_spriteName((UISprite_o *)Item, (System_String_o *)StringLiteral_1/*""*/, 0);
        }
        v21 = this->fields.specialCardBuffTurn;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Item = (BattleCommandData_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5010/*"DISPLAY_REMAINING_TURN"*/, 0);
        v22 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
        if ( v22 )
        {
          v23 = (System_String_o *)Item;
          Item = (BattleCommandData_o *)System_Collections_Generic_List_object___get_Item(
                                          v22,
                                          v15,
                                          (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
          if ( Item )
          {
            svtId = Item->fields.svtId;
            v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtId);
            Item = (BattleCommandData_o *)System_String__Format(v23, v24, 0);
            if ( v21 )
            {
              UILabel__set_text(v21, (System_String_o *)Item, 0);
              return;
            }
          }
        }
LABEL_30:
        sub_1C71608(Item, method);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__UpdateCommandUpDetailLabel(
        BattleCommandComponent_o *this,
        int32_t targetIndex,
        const MethodInfo *method)
{
  char *data; // x0
  bool isAddAttack; // w0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x21
  Il2CppObject *v9; // x0
  __int64 *v10; // x8
  UnityEngine_Transform_o *transform; // x0
  char *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int v19; // w8
  char *v20; // x21
  unsigned int v21; // w22
  int v22; // [xsp+Ch] [xbp-34h] BYREF
  int v23; // [xsp+18h] [xbp-28h] BYREF
  int v24; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4CCA262 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_16632/*"a"*/);
    sub_1C713B0(&StringLiteral_18946/*"effect/ef_commandup_{0}{1:00}"*/);
    sub_1C713B0(&StringLiteral_22955/*"q"*/);
    sub_1C713B0(&StringLiteral_16989/*"b"*/);
    byte_4CCA262 = 1;
  }
  data = (char *)this->fields.data;
  if ( !data )
    goto LABEL_29;
  isAddAttack = BattleCommandData__isAddAttack((BattleCommandData_o *)data, 0);
  if ( (unsigned int)targetIndex > 2 || isAddAttack || BattleCommandComponent__get_isKindOfDontAction(this, v7) )
    return;
  data = (char *)this->fields.data;
  if ( !data )
LABEL_29:
    sub_1C71608(data, *(_QWORD *)&targetIndex);
  v8 = (System_String_o *)StringLiteral_18946/*"effect/ef_commandup_{0}{1:00}"*/;
  if ( BattleCommandData__isQuick((BattleCommandData_o *)data, 0) )
  {
    v24 = targetIndex + 1;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    v10 = &StringLiteral_22955/*"q"*/;
LABEL_16:
    v8 = System_String__Format_64073032(v8, (Il2CppObject *)*v10, v9, 0);
    goto LABEL_17;
  }
  data = (char *)this->fields.data;
  if ( !data )
    goto LABEL_29;
  if ( BattleCommandData__isArts((BattleCommandData_o *)data, 0) )
  {
    v23 = targetIndex + 1;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v10 = &StringLiteral_16632/*"a"*/;
    goto LABEL_16;
  }
  data = (char *)this->fields.data;
  if ( !data )
    goto LABEL_29;
  if ( BattleCommandData__isBuster((BattleCommandData_o *)data, 0) )
  {
    v22 = targetIndex + 1;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    v10 = &StringLiteral_16989/*"b"*/;
    goto LABEL_16;
  }
LABEL_17:
  data = (char *)this->fields.nomalwidget;
  if ( !data )
    goto LABEL_29;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0);
  data = (char *)BaseMonoBehaviour__createObject_41462284((BaseMonoBehaviour_o *)this, v8, transform, 0, 0);
  if ( !data )
    goto LABEL_29;
  v12 = data;
  data = (char *)UnityEngine_GameObject__GetComponentsInChildren_object__52050676(
                   (UnityEngine_GameObject_o *)data,
                   (const MethodInfo_31A3AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem___);
  if ( !data )
    goto LABEL_29;
  v19 = *((_DWORD *)data + 6);
  v20 = data;
  if ( v19 >= 1 )
  {
    v21 = 0;
    while ( v21 < v19 )
    {
      data = *(char **)&v20[8 * v21 + 32];
      if ( !data )
        goto LABEL_29;
      UnityEngine_ParticleSystem__Stop_72010656((UnityEngine_ParticleSystem_o *)data, 0);
      v19 = *((_DWORD *)v20 + 6);
      if ( (int)++v21 >= v19 )
        goto LABEL_25;
    }
LABEL_30:
    sub_1C71610(data);
  }
LABEL_25:
  data = (char *)this->fields.effectobj;
  if ( !data )
    goto LABEL_29;
  if ( *((_DWORD *)data + 6) <= 3u )
    goto LABEL_30;
  *((_QWORD *)data + 7) = v12;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(data + 56), (int32_t)v12, v13, v14, v15, v16, v17, v18);
}


void BattleCommandComponent__UpdateFixedCommandCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  void *Item; // x0
  System_Collections_Generic_List_object__o *specialCardBuffList; // x20
  System_Predicate_object__o *v5; // x21
  Il2CppObject *v6; // x22
  struct BattleCommandComponent___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t Index; // w0
  int32_t v15; // w20
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  UnityEngine_Object_o *specialCardBuffTurn; // x21
  UILabel_o *v18; // x21
  System_Collections_Generic_List_object__o *v19; // x8
  System_String_o *v20; // x19
  Il2CppObject *v21; // x0
  int v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CCA270 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    sub_1C713B0(&Method_BattleCommandComponent___c__UpdateFixedCommandCard_b__211_0__);
    sub_1C713B0(&BattleCommandComponent___c_TypeInfo);
    sub_1C713B0(&StringLiteral_5010/*"DISPLAY_REMAINING_TURN"*/);
    sub_1C713B0(&StringLiteral_20207/*"icon_cardfixation"*/);
    byte_4CCA270 = 1;
  }
  Item = BattleCommandComponent___c_TypeInfo;
  specialCardBuffList = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
  if ( !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
    Item = BattleCommandComponent___c_TypeInfo;
  }
  v5 = *(System_Predicate_object__o **)(*((_QWORD *)Item + 23) + 16LL);
  if ( !v5 )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      Item = BattleCommandComponent___c_TypeInfo;
    }
    v6 = (Il2CppObject *)**((_QWORD **)Item + 23);
    v5 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo);
    System_Predicate_object____ctor(v5, v6, Method_BattleCommandComponent___c__UpdateFixedCommandCard_b__211_0__, 0);
    static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    static_fields->__9__211_0 = (struct System_Predicate_BattleCommandComponent_CardBuffData__o *)v5;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__211_0, (int32_t)v5, v8, v9, v10, v11, v12, v13);
  }
  if ( !specialCardBuffList )
    goto LABEL_26;
  Index = System_Collections_Generic_List_object___FindIndex(
            specialCardBuffList,
            (System_Predicate_T__o *)v5,
            (const MethodInfo_3810F70 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  if ( (Index & 0x80000000) == 0 )
  {
    v15 = Index;
    specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0, 0) )
    {
      specialCardBuffTurn = (UnityEngine_Object_o *)this->fields.specialCardBuffTurn;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(specialCardBuffTurn, 0, 0) )
      {
        Item = this->fields.specialCardBuffIcon;
        if ( Item )
        {
          UISprite__set_atlas((UISprite_o *)Item, this->fields.commandAtlas, 0);
          Item = this->fields.specialCardBuffIcon;
          if ( Item )
          {
            UISprite__set_spriteName((UISprite_o *)Item, (System_String_o *)StringLiteral_20207/*"icon_cardfixation"*/, 0);
            v18 = this->fields.specialCardBuffTurn;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Item = LocalizationManager__Get((System_String_o *)StringLiteral_5010/*"DISPLAY_REMAINING_TURN"*/, 0);
            v19 = (System_Collections_Generic_List_object__o *)this->fields.specialCardBuffList;
            if ( v19 )
            {
              v20 = (System_String_o *)Item;
              Item = System_Collections_Generic_List_object___get_Item(
                       v19,
                       v15,
                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__);
              if ( Item )
              {
                v22 = *((_DWORD *)Item + 5);
                v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
                Item = System_String__Format(v20, v21, 0);
                if ( v18 )
                {
                  UILabel__set_text(v18, (System_String_o *)Item, 0);
                  return;
                }
              }
            }
          }
        }
LABEL_26:
        sub_1C71608(Item, method);
      }
    }
  }
}


void BattleCommandComponent__UpdateIconChangeTypeByTransform(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *iconChangeTypeByTransform; // x20
  __int64 v4; // x1
  BattleCommandData_o *data; // x0
  int32_t v6; // w20
  BattleCommandComponent_o *v7; // x20
  const MethodInfo *v8; // x3
  UISprite_o *v9; // x19

  if ( (byte_4CCA280 & 1) == 0 )
  {
    sub_1C713B0(&BattleCommand_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_20206/*"icon_cardchange_"*/);
    byte_4CCA280 = 1;
  }
  iconChangeTypeByTransform = (UnityEngine_Object_o *)this->fields.iconChangeTypeByTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(iconChangeTypeByTransform, 0, 0) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_13;
    v6 = BattleCommandData__GetChangeTypeByTransform(data, 0);
    if ( !BattleCommand_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    v7 = (BattleCommandComponent_o *)BattleCommand__GetCardTypeChangeSpriteNameSuffix(v6, 0, 0);
    BattleCommandComponent__SetActiveComponent(
      v7,
      (UnityEngine_Component_o *)this->fields.iconChangeTypeByTransform,
      v7 != 0,
      v8);
    if ( v7 )
    {
      v9 = this->fields.iconChangeTypeByTransform;
      data = (BattleCommandData_o *)System_String__Concat_64031724(
                                      (System_String_o *)StringLiteral_20206/*"icon_cardchange_"*/,
                                      (System_String_o *)v7,
                                      0);
      if ( v9 )
      {
        UISprite__set_spriteName(v9, (System_String_o *)data, 0);
        return;
      }
LABEL_13:
      sub_1C71608(data, v4);
    }
  }
}


void BattleCommandComponent__UpdateSealStatus(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleServantData_o *svtData; // x20
  BattleCommandData_o *data; // x21
  UnityEngine_Object_o *perf; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1
  BattleData_o *v8; // x22
  struct BattlePerformance_o *v9; // x8
  BattleCommandSealStatus_o *v10; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CCA261 & 1) == 0 )
  {
    sub_1C713B0(&BattleCommandSealStatus_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA261 = 1;
  }
  data = this->fields.data;
  svtData = this->fields.svtData;
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Implicit(perf, 0);
  v8 = 0;
  if ( v6 )
  {
    v9 = this->fields.perf;
    if ( !v9 )
      sub_1C71608(v6, v7);
    v8 = v9->fields.data;
  }
  v10 = (BattleCommandSealStatus_o *)sub_1C715FC(BattleCommandSealStatus_TypeInfo);
  BattleCommandSealStatus___ctor_46935108(v10, data, svtData, v8, 0);
  this->fields.sealStatus = v10;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.sealStatus, (int32_t)v10, v11, v12, v13, v14, v15, v16);
}


void BattleCommandComponent__UpdateSpecialCardBuffIconAlpha(
        BattleCommandComponent_o *this,
        float deltaTime,
        const MethodInfo *method)
{
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x8
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  System_Collections_IEnumerator_o *updated; // x0
  const MethodInfo *v11; // x1
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v12; // x8
  float v13; // s0
  float cardBuffAlphaFor; // s1
  float v15; // s2
  float v16; // s0
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v17; // x9
  int32_t v18; // w8
  UnityEngine_Object_o *v19; // x20

  if ( (byte_4CCA281 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA281 = 1;
  }
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_34;
  if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)gameObject, 0) )
  {
    specialCardBuffList = this->fields.specialCardBuffList;
    if ( !specialCardBuffList || specialCardBuffList->fields._size < 1 )
      goto LABEL_32;
    specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(specialCardBuffIcon, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) == 0 && this->fields.isCardBuffAlphaAnim )
    {
      if ( !this->fields.isChangedBuffIcon )
      {
        updated = BattleCommandComponent__coroutineUpdateSpecialBuffIcon(this, v6);
        UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, updated, 0);
        BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(this, v11);
        this->fields.isChangedBuffIcon = 1;
      }
      v12 = this->fields.specialCardBuffList;
      if ( !v12 )
        goto LABEL_34;
      if ( v12->fields._size != 1 )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
        if ( !gameObject )
          goto LABEL_34;
        v13 = ((float (__fastcall *)(UnityEngine_Component_o *, _QWORD))gameObject->klass[1]._1.this_arg.data)(
                gameObject,
                *(_QWORD *)&gameObject->klass[1]._1.this_arg.bits);
        cardBuffAlphaFor = this->fields.cardBuffAlphaFor;
        v15 = this->fields.cardBuffAlphaAnimTime + deltaTime;
        v16 = v13 + (float)((float)(cardBuffAlphaFor - v13) * 0.5);
        this->fields.cardBuffAlphaAnimTime = v15;
        if ( v15 >= 3.0 )
        {
          cardBuffAlphaFor = 0.0;
          *(_QWORD *)&this->fields.cardBuffAlphaFor = 0;
        }
        if ( v16 <= 0.01 && cardBuffAlphaFor <= 0.0 )
        {
          v17 = this->fields.specialCardBuffList;
          v18 = this->fields.cardBuffListIndex + 1;
          *(_QWORD *)&this->fields.cardBuffAlphaFor = 1065353216;
          this->fields.cardBuffListIndex = v18;
          if ( !v17 )
            goto LABEL_34;
          if ( v17->fields._size <= v18 )
            this->fields.cardBuffListIndex = 0;
          this->fields.isChangedBuffIcon = 0;
        }
        gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
        if ( gameObject )
        {
          ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))gameObject->klass[1]._1.element_class)(
            gameObject,
            gameObject->klass[1]._1.castClass);
          return;
        }
LABEL_34:
        sub_1C71608(gameObject, v6);
      }
    }
    else
    {
LABEL_32:
      BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, 0, v7);
    }
  }
  else
  {
    v19 = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
      if ( !gameObject )
        goto LABEL_34;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        goto LABEL_34;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
  }
}


void BattleCommandComponent__UpdateTDTypeChange(
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

  if ( isForceHide || (svtData = this->fields.svtData) == 0 )
  {
    v11 = this;
    v12 = 0;
    v13 = 0;
  }
  else
  {
    v6 = BattleServantData__getTdTypeChangeBuffSingle(svtData, 0);
    if ( v6 )
    {
      turn = v6->fields.turn;
      if ( turn < 0 )
      {
        v10 = -1;
      }
      else
      {
        if ( turn + 1 >= 0 )
          v9 = turn + 1;
        else
          v9 = turn + 2;
        v10 = v9 >> 1;
      }
    }
    else
    {
      v10 = 0;
    }
    data = this->fields.data;
    if ( data )
    {
      treasureDvc = data->fields.treasureDvc;
      LOBYTE(data) = v10 != 0 && treasureDvc > 0;
      if ( v6 )
      {
        if ( v10 && treasureDvc >= 1 )
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
bool BattleCommandComponent__UpdateTreasureDeviceTypeImage(
        BattleCommandComponent_o *this,
        int32_t buffId,
        const MethodInfo *method)
{
  BuffMaster_o *Master_object; // x0
  __int64 v6; // x1
  UISprite_o *nowTreasureDeviceTypeImage; // x20
  System_String_o *v8; // x21
  UnityEngine_Object_o *defaultTdTypeImageAtlas; // x20
  UISpriteData_o *Sprite; // x0
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CCA277 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_20212/*"icon_cardtypechange"*/);
    byte_4CCA277 = 1;
  }
  name = 0;
  if ( !BattleCommandComponent__SetTreasureDeviceTypeImageDefaultAtlas(this, *(const MethodInfo **)&buffId) )
    goto LABEL_20;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (BuffMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_object )
    goto LABEL_22;
  if ( !BuffMaster__TryGetDisplayCardBottomImageName(
          Master_object,
          &name,
          buffId,
          (System_String_o *)StringLiteral_20212/*"icon_cardtypechange"*/,
          0) )
    goto LABEL_20;
  nowTreasureDeviceTypeImage = this->fields.nowTreasureDeviceTypeImage;
  v8 = name;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( AtlasManager__SetEventSprite(nowTreasureDeviceTypeImage, v8, 0) )
    goto LABEL_19;
  defaultTdTypeImageAtlas = (UnityEngine_Object_o *)this->fields.defaultTdTypeImageAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(defaultTdTypeImageAtlas, 0, 0) )
  {
LABEL_20:
    LOBYTE(Sprite) = 0;
    return (char)Sprite;
  }
  Master_object = (BuffMaster_o *)this->fields.defaultTdTypeImageAtlas;
  if ( !Master_object )
    goto LABEL_22;
  Sprite = UIAtlas__GetSprite((UIAtlas_o *)Master_object, name, 0);
  if ( !Sprite )
    return (char)Sprite;
  Master_object = (BuffMaster_o *)this->fields.nowTreasureDeviceTypeImage;
  if ( !Master_object
    || (UISprite__set_atlas((UISprite_o *)Master_object, this->fields.defaultTdTypeImageAtlas, 0),
        (Master_object = (BuffMaster_o *)this->fields.nowTreasureDeviceTypeImage) == 0) )
  {
LABEL_22:
    sub_1C71608(Master_object, v6);
  }
  UISprite__set_spriteName((UISprite_o *)Master_object, name, 0);
LABEL_19:
  LOBYTE(Sprite) = 1;
  return (char)Sprite;
}


System_Collections_IEnumerator_o *BattleCommandComponent__WaitForErrorViewFinished(
        BattleCommandComponent_o *this,
        float waitSeconds,
        System_String_o *busyVoiceSe,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4CCA28B & 1) == 0 )
  {
    sub_1C713B0(&BattleCommandComponent__WaitForErrorViewFinished_d__244_TypeInfo);
    byte_4CCA28B = 1;
  }
  v7 = sub_1C715FC(BattleCommandComponent__WaitForErrorViewFinished_d__244_TypeInfo);
  BattleCommandComponent__WaitForErrorViewFinished_d__244___ctor(
    (BattleCommandComponent__WaitForErrorViewFinished_d__244_o *)v7,
    0,
    0);
  if ( !v7 )
    sub_1C71608(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(float *)(v7 + 32) = waitSeconds;
  *(_QWORD *)(v7 + 48) = busyVoiceSe;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)busyVoiceSe, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v7;
}


void BattleCommandComponent__addCriticalBuff(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Action_o *v20; // x20
  BattleCommandComponent_o *v21; // x0
  const MethodInfo *v22; // x2
  System_Collections_IEnumerator_o *v23; // x0
  System_String_o *CommonSeNameLocal; // x20
  System_String_o *CueSheet; // x21
  float DefaultPreDelayTime; // s0
  BattleCommandComponent_o *v27; // x0
  const MethodInfo *v28; // x1
  System_Collections_IEnumerator_o *v29; // x1

  if ( (byte_4CCA254 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    sub_1C713B0(&Method_BattleCommandComponent___c__DisplayClass160_0__addCriticalBuff_b__0__);
    sub_1C713B0(&BattleCommandComponent___c__DisplayClass160_0_TypeInfo);
    byte_4CCA254 = 1;
  }
  v5 = sub_1C715FC(BattleCommandComponent___c__DisplayClass160_0_TypeInfo);
  BattleCommandComponent___c__DisplayClass160_0___ctor((BattleCommandComponent___c__DisplayClass160_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = obj;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)obj, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_BattleCommandComponent___c__DisplayClass160_0__addCriticalBuff_b__0__,
    0);
  v23 = BattleCommandComponent__delayFrame(v21, v20, v22);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v23, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance
    || (CommonSeNameLocal = SeManager__GetCommonSeNameLocal((SeManager_o *)Instance, 7, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__)) == 0)
    || (CueSheet = SoundManager__GetCueSheet((SoundManager_o *)Instance, CommonSeNameLocal, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__)) == 0) )
  {
LABEL_8:
    sub_1C71608(Instance, v7);
  }
  DefaultPreDelayTime = SeManager__GetDefaultPreDelayTime((SeManager_o *)Instance, CueSheet, CommonSeNameLocal, 0);
  v29 = BattleCommandComponent__PlayStarSe(v27, DefaultPreDelayTime / 1000.0, v28);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v29, 0);
}


void BattleCommandComponent__addFirstAura(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *effect,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *effectobj; // x19
  UnityEngine_GameObject_o *Object; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  BattleCommandComponent__stopFirstAura(this, (const MethodInfo *)effect);
  effectobj = this->fields.effectobj;
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, effect, this->fields.objectRoot, 0, 0);
  if ( !effectobj )
    sub_1C71608(Object, v7);
  if ( LODWORD(effectobj->max_length) <= 4 )
    sub_1C71610(Object);
  effectobj->m_Items[4] = Object;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&effectobj->m_Items[4], (int32_t)Object, v8, v9, v10, v11, v12, v13);
}


void BattleCommandComponent__addObject(
        BattleCommandComponent_o *this,
        System_String_o *name,
        int32_t type,
        const MethodInfo *method)
{
  BattleCommandComponent_o *v6; // x20
  struct UnityEngine_GameObject_array *addObjectList; // x8
  UnityEngine_Object_o *v8; // x22
  struct UnityEngine_GameObject_array *v9; // x8
  UnityEngine_Object_o *v10; // x22
  System_String_o *v11; // x0
  UnityEngine_Object_o *v12; // x21
  BattleCommandComponent_o *v13; // x22
  System_String_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct UnityEngine_GameObject_array *v21; // x8
  Il2CppClass **v22; // x0
  struct UnityEngine_GameObject_array *v23; // x8
  System_Enum_o v24; // [xsp+8h] [xbp-58h] BYREF
  int32_t v25; // [xsp+18h] [xbp-48h]

  v6 = this;
  if ( (byte_4CCA244 & 1) == 0 )
  {
    sub_1C713B0(&BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    this = (BattleCommandComponent_o *)sub_1C713B0(&StringLiteral_18922/*"effect/"*/);
    byte_4CCA244 = 1;
  }
  addObjectList = v6->fields.addObjectList;
  if ( !addObjectList )
    goto LABEL_23;
  if ( LODWORD(addObjectList->max_length) <= type )
    goto LABEL_24;
  v8 = (UnityEngine_Object_o *)addObjectList->m_Items[type];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v6->fields.addObjectList;
    if ( !v9 )
      goto LABEL_23;
    if ( LODWORD(v9->max_length) <= type )
      goto LABEL_24;
    v10 = (UnityEngine_Object_o *)v9->m_Items[type];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(v10, 0);
  }
  v11 = System_String__Concat_64031724((System_String_o *)StringLiteral_18922/*"effect/"*/, name, 0);
  this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject_41462284(
                                       (BaseMonoBehaviour_o *)v6,
                                       v11,
                                       v6->fields.objectRoot,
                                       0,
                                       0);
  if ( !this )
    goto LABEL_23;
  v12 = (UnityEngine_Object_o *)this;
  this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v13 = this;
  if ( !byte_4CC0D0F )
  {
    this = (BattleCommandComponent_o *)sub_1C713B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4CC0D0F = 1;
  }
  if ( !v13
    || (UnityEngine_Transform__set_localRotation(
          (UnityEngine_Transform_o *)v13,
          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
          0),
        v24.klass = (System_Enum_c *)BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo,
        v24.monitor = (void *)-1LL,
        v25 = type,
        v14 = System_Enum__ToString(&v24, 0),
        UnityEngine_Object__set_name(v12, v14, 0),
        (v21 = v6->fields.addObjectList) == 0) )
  {
LABEL_23:
    sub_1C71608(this, name);
  }
  if ( LODWORD(v21->max_length) <= type )
    goto LABEL_24;
  v22 = &v21->obj.klass + type;
  v22[4] = (Il2CppClass *)v12;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)v12, v15, v16, v17, v18, v19, v20);
  v23 = v6->fields.addObjectList;
  if ( !v23 )
    goto LABEL_23;
  if ( LODWORD(v23->max_length) <= type )
LABEL_24:
    sub_1C71610(this);
  this = (BattleCommandComponent_o *)v23->m_Items[type];
  if ( !this )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void BattleCommandComponent__attachEffect(
        BattleCommandComponent_o *this,
        System_String_o *name,
        int32_t index,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  UnityEngine_GameObject_o *Object_41462284; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x21
  UnityEngine_Transform_o *v11; // x22
  UnityEngine_Transform_o *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct UnityEngine_GameObject_array *effectobj; // x8
  int32_t max_length; // w9
  Il2CppClass **v21; // x0

  if ( (byte_4CCA258 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_18922/*"effect/"*/);
    byte_4CCA258 = 1;
  }
  v7 = System_String__Concat_64031724((System_String_o *)StringLiteral_18922/*"effect/"*/, name, 0);
  Object_41462284 = BaseMonoBehaviour__createObject_41462284(
                      (BaseMonoBehaviour_o *)this,
                      v7,
                      this->fields.objectRoot,
                      0,
                      0);
  if ( !Object_41462284 )
    goto LABEL_16;
  v10 = Object_41462284;
  Object_41462284 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Object_41462284, 0);
  v11 = (UnityEngine_Transform_o *)Object_41462284;
  if ( !byte_4CC0D09 )
  {
    Object_41462284 = (UnityEngine_GameObject_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  if ( !v11 )
    goto LABEL_16;
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  Object_41462284 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0);
  v12 = (UnityEngine_Transform_o *)Object_41462284;
  if ( !byte_4CC0D0E )
  {
    Object_41462284 = (UnityEngine_GameObject_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D0E = 1;
  }
  if ( !v12
    || (UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
        (effectobj = this->fields.effectobj) == 0) )
  {
LABEL_16:
    sub_1C71608(Object_41462284, v9);
  }
  max_length = effectobj->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
      sub_1C71610(Object_41462284);
    v21 = &effectobj->obj.klass + index;
    v21[4] = (Il2CppClass *)v10;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v10, v13, v14, v15, v16, v17, v18);
  }
}


bool BattleCommandComponent__checkCriticalPointValid(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *criticalObject; // x0

  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    sub_1C71608(0, method);
  return UnityEngine_GameObject__get_activeSelf(criticalObject, 0);
}


bool BattleCommandComponent__checkMark(BattleCommandComponent_o *this, int32_t mark, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  return data && data->fields.markindex == mark;
}


bool BattleCommandComponent__checkObject(BattleCommandComponent_o *this, const MethodInfo *method)
{
  return this->fields.data != 0;
}


void BattleCommandComponent__compCriticallabel(BattleCommandComponent_o *this, const MethodInfo *method)
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
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_14;
  LODWORD(v5) = (unsigned int)UnityEngine_Transform__get_lossyScale(transform, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_14;
  lossyScale = UnityEngine_Transform__get_lossyScale(transform, 0);
  y = lossyScale.fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_14;
  v27 = UnityEngine_Transform__get_lossyScale(transform, 0);
  z = v27.fields.z;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_14;
  transform = UnityEngine_Transform__get_parent(transform, 0);
  if ( !transform )
    goto LABEL_14;
  v8 = 1.0 / z;
  v9 = COERCE_FLOAT(UnityEngine_Transform__get_localScale(transform, 0));
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
  v17 = UnityEngine_GameObject__get_transform(this->fields.tr_criticaleffect, 0);
  v28.fields.x = v11;
  v28.fields.y = v12;
  v28.fields.z = v13;
  SpawnerObj = BattleCommandComponent__GetSpawnerObj(this, effect_fullcricomplete, v17, v28, v18);
  this->fields.countUpFinishEffect = SpawnerObj;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.countUpFinishEffect,
    (int32_t)SpawnerObj,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  transform = (UnityEngine_Transform_o *)this->fields.countUpFinishEffect;
  if ( !transform
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0),
        (transform = (UnityEngine_Transform_o *)this->fields.countUpFinishEffect) == 0) )
  {
LABEL_14:
    sub_1C71608(transform, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
  this->fields.isCountUp = 0;
}


System_Collections_IEnumerator_o *BattleCommandComponent__coroutineUpdateSpecialBuffIcon(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CCA284 & 1) == 0 )
  {
    sub_1C713B0(&BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_TypeInfo);
    byte_4CCA284 = 1;
  }
  v3 = sub_1C715FC(BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_TypeInfo);
  BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233___ctor(
    (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_1C71608(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *BattleCommandComponent__delayFrame(
        BattleCommandComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CCA256 & 1) == 0 )
  {
    sub_1C713B0(&BattleCommandComponent__delayFrame_d__162_TypeInfo);
    byte_4CCA256 = 1;
  }
  v4 = sub_1C715FC(BattleCommandComponent__delayFrame_d__162_TypeInfo);
  BattleCommandComponent__delayFrame_d__162___ctor((BattleCommandComponent__delayFrame_d__162_o *)v4, 0, 0);
  if ( !v4 )
    sub_1C71608(v5, v6);
  *(_QWORD *)(v4 + 32) = action;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v4 + 32), (int32_t)action, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v4;
}


void BattleCommandComponent__endFashTypeCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  UnityEngine_Object_o *v6; // x19

  v2 = this;
  if ( (byte_4CCA26A & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA26A = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_14;
  if ( !LODWORD(effectobj->max_length) )
    goto LABEL_15;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( v5 )
    {
      if ( LODWORD(v5->max_length) )
      {
        v6 = (UnityEngine_Object_o *)v5->m_Items[0];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71724608(v6, 0);
        return;
      }
LABEL_15:
      sub_1C71610(this);
    }
LABEL_14:
    sub_1C71608(this, method);
  }
}


System_Collections_IEnumerator_o *BattleCommandComponent__fadeoutEffect(
        BattleCommandComponent_o *this,
        bool isTresure,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CCA25A & 1) == 0 )
  {
    sub_1C713B0(&BattleCommandComponent__fadeoutEffect_d__182_TypeInfo);
    byte_4CCA25A = 1;
  }
  v5 = sub_1C715FC(BattleCommandComponent__fadeoutEffect_d__182_TypeInfo);
  BattleCommandComponent__fadeoutEffect_d__182___ctor((BattleCommandComponent__fadeoutEffect_d__182_o *)v5, 0, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 40) = isTresure;
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__flashComboSvt(
        BattleCommandComponent_o *this,
        int32_t index,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  struct System_Boolean_array *sameflg; // x8

  if ( index > 2 )
    goto LABEL_6;
  if ( !combo || (sameflg = combo->fields.sameflg) == 0 )
    sub_1C71608(this, index);
  if ( LODWORD(sameflg->max_length) <= index )
    sub_1C71610(this);
  if ( sameflg->m_Items[index] )
LABEL_6:
    BattleCommandComponent__flashServant(this, *(const MethodInfo **)&index);
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__flashComboType(
        BattleCommandComponent_o *this,
        int32_t index,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  if ( !combo )
    sub_1C71608(this, index);
  if ( combo->fields.flash )
    BattleCommandComponent__flashTypeCard(this, *(const MethodInfo **)&index);
}


void BattleCommandComponent__flashServant(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  struct UnityEngine_GameObject_array *effectobj; // x20
  UnityEngine_GameObject_o *v7; // x21
  UnityEngine_Transform_o *parent; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct UnityEngine_GameObject_array *v15; // x8
  UIWidget_o *v16; // x20
  UnityEngine_Shader_o *v17; // x21
  UnityEngine_Material_o *v18; // x22
  struct UnityEngine_GameObject_array *v19; // x8
  UnityEngine_GameObject_o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Object_array *v27; // x21
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  Il2CppObject *v35; // x22
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  __int64 v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  Il2CppObject *v49; // x22
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  __int64 v56; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  Il2CppObject *v63; // x22
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  __int64 v70; // x1
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  __int64 v77; // x1
  System_Collections_Hashtable_o *v78; // x0
  struct UnityEngine_GameObject_array *v79; // x8
  __int64 v80; // x0
  unsigned __int64 v81; // [xsp+0h] [xbp-40h] BYREF
  int v82; // [xsp+8h] [xbp-38h]
  int v83; // [xsp+1Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v86; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4CCA267 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
    sub_1C713B0(&UnityEngine_Material_TypeInfo);
    sub_1C713B0(&object___TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&float_TypeInfo);
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    sub_1C713B0(&StringLiteral_24189/*"time"*/);
    sub_1C713B0(&StringLiteral_22535/*"oncompletetarget"*/);
    sub_1C713B0(&StringLiteral_19069/*"endFashSvt"*/);
    sub_1C713B0(&StringLiteral_22533/*"oncomplete"*/);
    sub_1C713B0(&StringLiteral_16121/*"_AddColor"*/);
    sub_1C713B0(&StringLiteral_23310/*"scale"*/);
    sub_1C713B0(&iTween_TypeInfo);
    byte_4CCA267 = 1;
  }
  BattleCommandComponent__DestroyEffectObject1(this, method);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(facetex, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !gameObject )
      goto LABEL_62;
    effectobj = this->fields.effectobj;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !this->fields.nomalwidget )
      goto LABEL_62;
    v7 = (UnityEngine_GameObject_o *)gameObject;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)this->fields.nomalwidget,
                                              0);
    if ( !gameObject )
      goto LABEL_62;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              0);
    if ( !gameObject )
      goto LABEL_62;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
    gameObject = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                              (BaseMonoBehaviour_o *)this,
                                              v7,
                                              parent,
                                              0,
                                              0);
    if ( !effectobj )
      goto LABEL_62;
    if ( LODWORD(effectobj->max_length) <= 1 )
      goto LABEL_63;
    effectobj->m_Items[1] = (UnityEngine_GameObject_o *)gameObject;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&effectobj->m_Items[1], (int32_t)gameObject, v9, v10, v11, v12, v13, v14);
    v15 = this->fields.effectobj;
    if ( !v15 )
      goto LABEL_62;
    if ( LODWORD(v15->max_length) <= 1 )
      goto LABEL_63;
    gameObject = (UnityEngine_Component_o *)v15->m_Items[1];
    if ( !gameObject )
      goto LABEL_62;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              (const MethodInfo_31A3134 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
    if ( !gameObject )
      goto LABEL_62;
    v16 = (UIWidget_o *)gameObject;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_62;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              0);
    if ( !gameObject )
      goto LABEL_62;
    v84.fields.x = 0.0;
    v84.fields.y = 0.0;
    v84.fields.z = -5.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v84, 0);
    this->fields.newMatriarl = 1;
    v17 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))v16->klass->vtable._28_get_shader.methodPtr)(
                                    v16,
                                    v16->klass->vtable._28_get_shader.method);
    v18 = (UnityEngine_Material_o *)sub_1C715FC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v18, v17, 0);
    ((void (__fastcall *)(UIWidget_o *, UnityEngine_Material_o *, const MethodInfo *))v16->klass->vtable._25_set_material.methodPtr)(
      v16,
      v18,
      v16->klass->vtable._25_set_material.method);
    gameObject = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))v16->klass->vtable._24_get_material.methodPtr)(
                                              v16,
                                              v16->klass->vtable._24_get_material.method);
    if ( !gameObject )
      goto LABEL_62;
    v85.fields.r = 1.0;
    v85.fields.g = 1.0;
    v85.fields.b = 1.0;
    v85.fields.a = 0.0;
    UnityEngine_Material__SetColor((UnityEngine_Material_o *)gameObject, (System_String_o *)StringLiteral_16121/*"_AddColor"*/, v85, 0);
    UIWidget__set_depth(v16, this->fields.basedepth + 400, 0);
    v19 = this->fields.effectobj;
    if ( !v19 )
      goto LABEL_62;
    if ( LODWORD(v19->max_length) <= 1 )
      goto LABEL_63;
    v20 = v19->m_Items[1];
    gameObject = (UnityEngine_Component_o *)sub_1C71458(object___TypeInfo, 8);
    if ( !gameObject )
      goto LABEL_62;
    v27 = (System_Object_array *)gameObject;
    gameObject = (UnityEngine_Component_o *)StringLiteral_23310/*"scale"*/;
    if ( StringLiteral_23310/*"scale"*/ )
    {
      gameObject = (UnityEngine_Component_o *)sub_1C714EC(StringLiteral_23310/*"scale"*/, v27->obj.klass->_1.element_class);
      if ( !gameObject )
        goto LABEL_64;
      v28 = StringLiteral_23310/*"scale"*/;
    }
    else
    {
      v28 = 0;
    }
    if ( !LODWORD(v27->max_length) )
      goto LABEL_63;
    v27->m_Items[0] = (Il2CppObject *)v28;
    sub_1C71354((GrandQuestFolderBoardItem_o *)v27->m_Items, v28, v21, v22, v23, v24, v25, v26);
    v81 = vdup_n_s32(0x3FE66666u).n64_u64[0];
    v82 = 1065353216;
    gameObject = (UnityEngine_Component_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v81);
    v35 = (Il2CppObject *)gameObject;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)sub_1C714EC(gameObject, v27->obj.klass->_1.element_class)) != 0 )
    {
      if ( LODWORD(v27->max_length) <= 1 )
        goto LABEL_63;
      v27->m_Items[1] = v35;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v27->m_Items[1], (int32_t)v35, v29, v30, v31, v32, v33, v34);
      gameObject = (UnityEngine_Component_o *)StringLiteral_24189/*"time"*/;
      if ( StringLiteral_24189/*"time"*/ )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C714EC(StringLiteral_24189/*"time"*/, v27->obj.klass->_1.element_class);
        if ( !gameObject )
          goto LABEL_64;
        v42 = StringLiteral_24189/*"time"*/;
      }
      else
      {
        v42 = 0;
      }
      if ( LODWORD(v27->max_length) <= 2 )
        goto LABEL_63;
      v27->m_Items[2] = (Il2CppObject *)v42;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v27->m_Items[2], v42, v36, v37, v38, v39, v40, v41);
      v83 = 1065353216;
      gameObject = (UnityEngine_Component_o *)j_il2cpp_value_box_0(float_TypeInfo, &v83);
      v49 = (Il2CppObject *)gameObject;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)sub_1C714EC(gameObject, v27->obj.klass->_1.element_class)) != 0 )
      {
        if ( LODWORD(v27->max_length) <= 3 )
          goto LABEL_63;
        v27->m_Items[3] = v49;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v27->m_Items[3], (int32_t)v49, v43, v44, v45, v46, v47, v48);
        gameObject = (UnityEngine_Component_o *)StringLiteral_22535/*"oncompletetarget"*/;
        if ( StringLiteral_22535/*"oncompletetarget"*/ )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C714EC(StringLiteral_22535/*"oncompletetarget"*/, v27->obj.klass->_1.element_class);
          if ( !gameObject )
            goto LABEL_64;
          v56 = StringLiteral_22535/*"oncompletetarget"*/;
        }
        else
        {
          v56 = 0;
        }
        if ( LODWORD(v27->max_length) <= 4 )
          goto LABEL_63;
        v27->m_Items[4] = (Il2CppObject *)v56;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v27->m_Items[4], v56, v50, v51, v52, v53, v54, v55);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
        v63 = (Il2CppObject *)gameObject;
        if ( !gameObject
          || (gameObject = (UnityEngine_Component_o *)sub_1C714EC(gameObject, v27->obj.klass->_1.element_class)) != 0 )
        {
          if ( LODWORD(v27->max_length) <= 5 )
            goto LABEL_63;
          v27->m_Items[5] = v63;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&v27->m_Items[5], (int32_t)v63, v57, v58, v59, v60, v61, v62);
          gameObject = (UnityEngine_Component_o *)StringLiteral_22533/*"oncomplete"*/;
          if ( StringLiteral_22533/*"oncomplete"*/ )
          {
            gameObject = (UnityEngine_Component_o *)sub_1C714EC(StringLiteral_22533/*"oncomplete"*/, v27->obj.klass->_1.element_class);
            if ( !gameObject )
              goto LABEL_64;
            v70 = StringLiteral_22533/*"oncomplete"*/;
          }
          else
          {
            v70 = 0;
          }
          if ( LODWORD(v27->max_length) <= 6 )
            goto LABEL_63;
          v27->m_Items[6] = (Il2CppObject *)v70;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&v27->m_Items[6], v70, v64, v65, v66, v67, v68, v69);
          gameObject = (UnityEngine_Component_o *)StringLiteral_19069/*"endFashSvt"*/;
          if ( !StringLiteral_19069/*"endFashSvt"*/ )
          {
            v77 = 0;
            goto LABEL_55;
          }
          gameObject = (UnityEngine_Component_o *)sub_1C714EC(StringLiteral_19069/*"endFashSvt"*/, v27->obj.klass->_1.element_class);
          if ( gameObject )
          {
            v77 = StringLiteral_19069/*"endFashSvt"*/;
LABEL_55:
            if ( LODWORD(v27->max_length) <= 7 )
              goto LABEL_63;
            v27->m_Items[7] = (Il2CppObject *)v77;
            sub_1C71354((GrandQuestFolderBoardItem_o *)&v27->m_Items[7], v77, v71, v72, v73, v74, v75, v76);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v78 = iTween__Hash(v27, 0);
            iTween__ScaleTo_63674816(v20, v78, 0);
            v79 = this->fields.effectobj;
            if ( v79 )
            {
              if ( LODWORD(v79->max_length) > 1 )
              {
                v86.fields.r = 0.0;
                v86.fields.g = 0.0;
                v86.fields.b = 0.0;
                v86.fields.a = 0.0;
                TweenColor__Begin(v79->m_Items[1], 1.0, v86, 0);
                return;
              }
LABEL_63:
              sub_1C71610(gameObject);
            }
LABEL_62:
            sub_1C71608(gameObject, v4);
          }
        }
      }
    }
LABEL_64:
    v80 = sub_1C7162C(gameObject);
    sub_1C714D8(v80, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__flashType(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_Collections_IEnumerator_o *v6; // x1

  BattleCommandComponent__flashTypeCard(this, (const MethodInfo *)flg);
  if ( flg )
  {
    v6 = BattleCommandComponent__fadeoutEffect(this, 0, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v6, 0);
  }
}


void BattleCommandComponent__flashTypeCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  UnityEngine_Object_o *v6; // x20
  struct UnityEngine_GameObject_array *v7; // x20
  BattleCommandComponent_o *v8; // x21
  BattleCommandComponent_o *v9; // x22
  UnityEngine_Transform_o *transform; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct UnityEngine_GameObject_array *v17; // x8
  Il2CppObject *ComponentInChildren_object; // x20
  struct UnityEngine_GameObject_array *v19; // x8
  struct UnityEngine_GameObject_array *v20; // x8
  UnityEngine_GameObject_o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  BattleCommandComponent_o *v28; // x21
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  BattleCommandComponent_o *v36; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  __int64 v43; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  BattleCommandComponent_o *v50; // x22
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  __int64 v57; // x1
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  BattleCommandComponent_o *v64; // x19
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  __int64 v71; // x1
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  __int64 v78; // x1
  System_Collections_Hashtable_o *v79; // x0
  __int64 v80; // x0
  int v81; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v82; // [xsp+10h] [xbp-40h] BYREF
  int v83; // [xsp+18h] [xbp-38h]
  UnityEngine_Color_o v84; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v2 = this;
  if ( (byte_4CCA269 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1C713B0(&object___TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&float_TypeInfo);
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    sub_1C713B0(&StringLiteral_19070/*"endFashTypeCard"*/);
    sub_1C713B0(&StringLiteral_24189/*"time"*/);
    sub_1C713B0(&StringLiteral_22535/*"oncompletetarget"*/);
    sub_1C713B0(&StringLiteral_22533/*"oncomplete"*/);
    sub_1C713B0(&StringLiteral_23310/*"scale"*/);
    this = (BattleCommandComponent_o *)sub_1C713B0(&iTween_TypeInfo);
    byte_4CCA269 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_71;
  if ( !LODWORD(effectobj->max_length) )
    goto LABEL_72;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_71;
    if ( !LODWORD(v5->max_length) )
      goto LABEL_72;
    v6 = (UnityEngine_Object_o *)v5->m_Items[0];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(v6, 0);
  }
  this = (BattleCommandComponent_o *)v2->fields.icon;
  if ( !this )
    goto LABEL_71;
  v7 = v2->fields.effectobj;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v2->fields.nomalwidget )
    goto LABEL_71;
  v8 = this;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)v2->fields.nomalwidget,
                                       0);
  if ( !this )
    goto LABEL_71;
  this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_71;
  this = (BattleCommandComponent_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
  if ( !v2->fields.icon )
    goto LABEL_71;
  v9 = this;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)v2->fields.icon,
                                       0);
  if ( !this )
    goto LABEL_71;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject(
                                       (BaseMonoBehaviour_o *)v2,
                                       (UnityEngine_GameObject_o *)v8,
                                       (UnityEngine_Transform_o *)v9,
                                       transform,
                                       0);
  if ( !v7 )
    goto LABEL_71;
  if ( !LODWORD(v7->max_length) )
    goto LABEL_72;
  v7->m_Items[0] = (UnityEngine_GameObject_o *)this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v7->m_Items, (int32_t)this, v11, v12, v13, v14, v15, v16);
  v17 = v2->fields.effectobj;
  if ( !v17 )
    goto LABEL_71;
  if ( !LODWORD(v17->max_length) )
    goto LABEL_72;
  this = (BattleCommandComponent_o *)v17->m_Items[0];
  if ( !this )
    goto LABEL_71;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_31A3134 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)ComponentInChildren_object,
                                       0,
                                       0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !ComponentInChildren_object )
      goto LABEL_71;
    UIWidget__set_depth((UIWidget_o *)ComponentInChildren_object, v2->fields.basedepth + 400, 0);
    v19 = v2->fields.effectobj;
    if ( !v19 )
      goto LABEL_71;
    if ( !LODWORD(v19->max_length) )
      goto LABEL_72;
    v84.fields.r = 0.0;
    v84.fields.g = 0.0;
    v84.fields.b = 0.0;
    v84.fields.a = 0.0;
    this = (BattleCommandComponent_o *)TweenColor__Begin(v19->m_Items[0], 1.0, v84, 0);
  }
  v20 = v2->fields.effectobj;
  if ( !v20 )
    goto LABEL_71;
  if ( !LODWORD(v20->max_length) )
    goto LABEL_72;
  v21 = v20->m_Items[0];
  this = (BattleCommandComponent_o *)sub_1C71458(object___TypeInfo, 8);
  if ( !this )
LABEL_71:
    sub_1C71608(this, method);
  v28 = this;
  this = (BattleCommandComponent_o *)StringLiteral_23310/*"scale"*/;
  if ( StringLiteral_23310/*"scale"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1C714EC(StringLiteral_23310/*"scale"*/, v28->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
    v29 = StringLiteral_23310/*"scale"*/;
  }
  else
  {
    v29 = 0;
  }
  if ( !LODWORD(v28->fields.m_CancellationTokenSource) )
    goto LABEL_72;
  v28->fields.objectRoot = (struct UnityEngine_Transform_o *)v29;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v28->fields.objectRoot, v29, v22, v23, v24, v25, v26, v27);
  v82 = 0x4000000040000000LL;
  v83 = 1065353216;
  this = (BattleCommandComponent_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v82);
  v36 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_1C714EC(this, v28->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
  }
  if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_72;
  v28->fields.bg = (struct UISprite_o *)v36;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v28->fields.bg, (int32_t)v36, v30, v31, v32, v33, v34, v35);
  this = (BattleCommandComponent_o *)StringLiteral_24189/*"time"*/;
  if ( StringLiteral_24189/*"time"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1C714EC(StringLiteral_24189/*"time"*/, v28->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
    v43 = StringLiteral_24189/*"time"*/;
  }
  else
  {
    v43 = 0;
  }
  if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 2 )
    goto LABEL_72;
  v28->fields.icon = (struct UISprite_o *)v43;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v28->fields.icon, v43, v37, v38, v39, v40, v41, v42);
  v81 = 1065353216;
  this = (BattleCommandComponent_o *)j_il2cpp_value_box_0(float_TypeInfo, &v81);
  v50 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_1C714EC(this, v28->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
  }
  if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 3 )
    goto LABEL_72;
  v28->fields.text = (struct UISprite_o *)v50;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v28->fields.text, (int32_t)v50, v44, v45, v46, v47, v48, v49);
  this = (BattleCommandComponent_o *)StringLiteral_22535/*"oncompletetarget"*/;
  if ( StringLiteral_22535/*"oncompletetarget"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1C714EC(StringLiteral_22535/*"oncompletetarget"*/, v28->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
    v57 = StringLiteral_22535/*"oncompletetarget"*/;
  }
  else
  {
    v57 = 0;
  }
  if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 4 )
    goto LABEL_72;
  v28->fields.facetex = (struct UITexture_o *)v57;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v28->fields.facetex, v57, v51, v52, v53, v54, v55, v56);
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
  v64 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_1C714EC(this, v28->klass->_1.element_class);
    if ( !this )
    {
LABEL_73:
      v80 = sub_1C7162C(this);
      sub_1C714D8(v80, 0);
    }
  }
  if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 5 )
    goto LABEL_72;
  v28->fields.nobletex = (struct UITexture_o *)v64;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v28->fields.nobletex, (int32_t)v64, v58, v59, v60, v61, v62, v63);
  this = (BattleCommandComponent_o *)StringLiteral_22533/*"oncomplete"*/;
  if ( StringLiteral_22533/*"oncomplete"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1C714EC(StringLiteral_22533/*"oncomplete"*/, v28->klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
    v71 = StringLiteral_22533/*"oncomplete"*/;
  }
  else
  {
    v71 = 0;
  }
  if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 6 )
    goto LABEL_72;
  v28->fields.friendIcon = (struct UISprite_o *)v71;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v28->fields.friendIcon, v71, v65, v66, v67, v68, v69, v70);
  this = (BattleCommandComponent_o *)StringLiteral_19070/*"endFashTypeCard"*/;
  if ( StringLiteral_19070/*"endFashTypeCard"*/ )
  {
    this = (BattleCommandComponent_o *)sub_1C714EC(StringLiteral_19070/*"endFashTypeCard"*/, v28->klass->_1.element_class);
    if ( this )
    {
      v78 = StringLiteral_19070/*"endFashTypeCard"*/;
      goto LABEL_67;
    }
    goto LABEL_73;
  }
  v78 = 0;
LABEL_67:
  if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 7 )
LABEL_72:
    sub_1C71610(this);
  v28->fields.sealedSprite = (struct UISprite_o *)v78;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v28->fields.sealedSprite, v78, v72, v73, v74, v75, v76, v77);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v79 = iTween__Hash((System_Object_array *)v28, 0);
  iTween__ScaleTo_63674816(v21, v79, 0);
}


System_String_o *BattleCommandComponent__getCardTypeSealSpriteName(
        BattleCommandComponent_o *this,
        int32_t commandType,
        const MethodInfo *method)
{
  BattleCommandComponent_c *v4; // x0
  System_String_o **p_SEALED_CARDTYPE_ICON_QUICK; // x8
  BattleCommandComponent_c *v6; // x0
  BattleCommandComponent_c *v7; // x0

  if ( (byte_4CCA247 & 1) == 0 )
  {
    sub_1C713B0(&BattleCommandComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCA247 = 1;
  }
  switch ( commandType )
  {
    case 3:
      v6 = BattleCommandComponent_TypeInfo;
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v6 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v6->static_fields->SEALED_CARDTYPE_ICON_QUICK;
      break;
    case 2:
      v7 = BattleCommandComponent_TypeInfo;
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v7 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v7->static_fields->SEALED_CARDTYPE_ICON_BUSTER;
      break;
    case 1:
      v4 = BattleCommandComponent_TypeInfo;
      if ( !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v4 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v4->static_fields->SEALED_CARDTYPE_ICON_ARTS;
      break;
    default:
      p_SEALED_CARDTYPE_ICON_QUICK = (System_String_o **)&StringLiteral_1/*""*/;
      break;
  }
  return *p_SEALED_CARDTYPE_ICON_QUICK;
}


int32_t BattleCommandComponent__getCommandType(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1C71608(0, method);
  return BattleCommandData__getCommandType(data, 0);
}


int32_t BattleCommandComponent__getCriticalCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( data )
  {
    LODWORD(data) = this->fields.boostedCriticalRate + BattleCommandData__getCriticalPoint(data, 0);
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


int32_t BattleCommandComponent__getMarkIndex(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( data )
    return data->fields.markindex;
  else
    return -1;
}


int32_t BattleCommandComponent__getPowerUpDepth(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *powerUpCardIcon; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UISprite_o *v6; // x8

  if ( (byte_4CCA23E & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA23E = 1;
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(powerUpCardIcon, 0, 0);
  if ( !v4 )
    return -1;
  v6 = this->fields.powerUpCardIcon;
  if ( !v6 )
    sub_1C71608(v4, v5);
  return v6->fields.mDepth;
}


int32_t BattleCommandComponent__getSvtId(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C71608(this, method);
  return data->fields.svtId;
}


int32_t BattleCommandComponent__getSvtLimitCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C71608(this, method);
  return data->fields.svtlimit;
}


int32_t BattleCommandComponent__getUniqueID(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1C71608(this, method);
  return data->fields.uniqueId;
}


BattleCommandSealStatus_o *BattleCommandComponent__get_SealStatus(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  BattleCommandSealStatus_o *result; // x0
  GrandQuestFolderBoardItem_o *p_sealStatus; // x19
  BattleCommandSealStatus_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CCA237 & 1) == 0 )
  {
    sub_1C713B0(&BattleCommandSealStatus_TypeInfo);
    byte_4CCA237 = 1;
  }
  result = this->fields.sealStatus;
  if ( !result )
  {
    p_sealStatus = (GrandQuestFolderBoardItem_o *)&this->fields.sealStatus;
    v5 = (BattleCommandSealStatus_o *)sub_1C715FC(BattleCommandSealStatus_TypeInfo);
    BattleCommandSealStatus___ctor(v5, 0);
    p_sealStatus->klass = (GrandQuestFolderBoardItem_c *)v5;
    sub_1C71354(p_sealStatus, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    return (BattleCommandSealStatus_o *)p_sealStatus->klass;
  }
  return result;
}


bool BattleCommandComponent__get_isKindOfDontAction(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v3; // x1

  SealStatus = BattleCommandComponent__get_SealStatus(this, method);
  if ( !SealStatus )
    sub_1C71608(0, v3);
  return BattleCommandSealStatus__get_HasKindOfDontAction(SealStatus, 0);
}


bool BattleCommandComponent__get_isSealed(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v3; // x1

  SealStatus = BattleCommandComponent__get_SealStatus(this, method);
  if ( !SealStatus )
    sub_1C71608(0, v3);
  return BattleCommandSealStatus__get_HasKindOfSealed(SealStatus, 0);
}


BattleCommandData_o *BattleCommandComponent__getcommandData(BattleCommandComponent_o *this, const MethodInfo *method)
{
  return this->fields.data;
}


void BattleCommandComponent__hideOutCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct UIWidget_o *nomalwidget; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  struct UnityEngine_GameObject_array *addObjectList; // x8
  __int64 v7; // x22
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v9; // x23
  UnityEngine_Object_o *v10; // x20
  struct UnityEngine_GameObject_array *v11; // x8

  if ( (byte_4CCA25B & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA25B = 1;
  }
  nomalwidget = this->fields.nomalwidget;
  if ( !nomalwidget
    || (((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, float))nomalwidget->klass->vtable._8_set_alpha.methodPtr)(
          nomalwidget,
          nomalwidget->klass->vtable._8_set_alpha.method,
          0.0),
        BattleCommandComponent__DestroyEffectObject1(this, v4),
        (addObjectList = this->fields.addObjectList) == 0) )
  {
LABEL_16:
    sub_1C71608(nomalwidget, method);
  }
  v7 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(addObjectList->max_length);
    v9 = v7 - 4;
    if ( v7 - 4 >= (int)max_length_low )
      break;
    if ( v9 >= max_length_low )
      goto LABEL_18;
    v10 = (UnityEngine_Object_o *)*((_QWORD *)&addObjectList->obj.klass + v7);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    nomalwidget = (struct UIWidget_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
    if ( ((unsigned __int8)nomalwidget & 1) != 0 )
    {
      v11 = this->fields.addObjectList;
      if ( !v11 )
        goto LABEL_16;
      if ( v9 >= LODWORD(v11->max_length) )
LABEL_18:
        sub_1C71610(nomalwidget);
      nomalwidget = (struct UIWidget_o *)*((_QWORD *)&v11->obj.klass + v7);
      if ( !nomalwidget )
        goto LABEL_16;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nomalwidget, 0, 0);
    }
    addObjectList = this->fields.addObjectList;
    ++v7;
    if ( !addObjectList )
      goto LABEL_16;
  }
  BattleCommandComponent__CardEffectSetActive(this, 0, v5);
}


bool BattleCommandComponent__isSelect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  return this->fields.selectflg;
}


bool BattleCommandComponent__isTreasureDvc(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  return data && data->fields.treasureDvc > 0;
}


void BattleCommandComponent__openCard(BattleCommandComponent_o *this, const MethodInfo *method)
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
    sub_1C71608(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__playAddAttackEffect(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_Collections_IEnumerator_o *v6; // x1

  BattleCommandComponent__flashServant(this, (const MethodInfo *)flg);
  if ( flg )
  {
    v6 = BattleCommandComponent__fadeoutEffect(this, 0, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v6, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__playAttackEffect(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x1

  BattleCommandComponent__flashTypeCard(this, (const MethodInfo *)flg);
  BattleCommandComponent__flashServant(this, v5);
  if ( flg )
  {
    v7 = BattleCommandComponent__fadeoutEffect(this, 0, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v7, 0);
  }
}


void BattleCommandComponent__playNpAttackEffect(BattleCommandComponent_o *this, float ftime, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Object_array *v14; // x21
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  Il2CppObject *v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  Il2CppObject *v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  __int64 v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  Il2CppObject *v51; // x22
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  __int64 v58; // x1
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  Il2CppObject *v65; // x22
  System_Collections_Hashtable_o *v66; // x0
  UnityEngine_GameObject_o *v67; // x20
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  System_Object_array *v74; // x21
  __int64 v75; // x1
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  Il2CppObject *v82; // x22
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  __int64 v89; // x1
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  Il2CppObject *v96; // x22
  System_Collections_Hashtable_o *v97; // x0
  const MethodInfo *v98; // x2
  System_Collections_IEnumerator_o *v99; // x0
  __int64 v100; // x0
  float v101; // [xsp+0h] [xbp-70h] BYREF
  int v102; // [xsp+4h] [xbp-6Ch] BYREF
  float v103; // [xsp+8h] [xbp-68h] BYREF
  int v104; // [xsp+Ch] [xbp-64h] BYREF
  int v105; // [xsp+18h] [xbp-58h] BYREF
  int v106; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4CCA259 & 1) == 0 )
  {
    sub_1C713B0(&object___TypeInfo);
    sub_1C713B0(&float_TypeInfo);
    sub_1C713B0(&StringLiteral_24994/*"x"*/);
    sub_1C713B0(&StringLiteral_24189/*"time"*/);
    sub_1C713B0(&StringLiteral_25096/*"y"*/);
    sub_1C713B0(&StringLiteral_25143/*"z"*/);
    sub_1C713B0(&iTween_TypeInfo);
    byte_4CCA259 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = sub_1C71458(object___TypeInfo, 8);
  if ( !v6 )
    goto LABEL_58;
  v14 = (System_Object_array *)v6;
  v15 = (Il2CppObject *)StringLiteral_24994/*"x"*/;
  if ( StringLiteral_24994/*"x"*/ )
  {
    v15 = (Il2CppObject *)sub_1C714EC(StringLiteral_24994/*"x"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_57;
    v16 = (Il2CppObject *)StringLiteral_24994/*"x"*/;
  }
  else
  {
    v16 = 0;
  }
  if ( !LODWORD(v14->max_length) )
    goto LABEL_56;
  v14->m_Items[0] = v16;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v14->m_Items, (int32_t)v16, v8, v9, v10, v11, v12, v13);
  v106 = 0x40000000;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v106);
  v23 = v15;
  if ( v15 )
  {
    v15 = (Il2CppObject *)sub_1C714EC(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_57;
  }
  if ( LODWORD(v14->max_length) <= 1 )
    goto LABEL_56;
  v14->m_Items[1] = v23;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v14->m_Items[1], (int32_t)v23, v17, v18, v19, v20, v21, v22);
  v15 = (Il2CppObject *)StringLiteral_25096/*"y"*/;
  if ( StringLiteral_25096/*"y"*/ )
  {
    v15 = (Il2CppObject *)sub_1C714EC(StringLiteral_25096/*"y"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_57;
    v30 = StringLiteral_25096/*"y"*/;
  }
  else
  {
    v30 = 0;
  }
  if ( LODWORD(v14->max_length) <= 2 )
    goto LABEL_56;
  v14->m_Items[2] = (Il2CppObject *)v30;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v14->m_Items[2], v30, v24, v25, v26, v27, v28, v29);
  v105 = 0x40000000;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v105);
  v37 = v15;
  if ( v15 )
  {
    v15 = (Il2CppObject *)sub_1C714EC(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_57;
  }
  if ( LODWORD(v14->max_length) <= 3 )
    goto LABEL_56;
  v14->m_Items[3] = v37;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v14->m_Items[3], (int32_t)v37, v31, v32, v33, v34, v35, v36);
  v15 = (Il2CppObject *)StringLiteral_25143/*"z"*/;
  if ( StringLiteral_25143/*"z"*/ )
  {
    v15 = (Il2CppObject *)sub_1C714EC(StringLiteral_25143/*"z"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_57;
    v44 = StringLiteral_25143/*"z"*/;
  }
  else
  {
    v44 = 0;
  }
  if ( LODWORD(v14->max_length) <= 4 )
    goto LABEL_56;
  v14->m_Items[4] = (Il2CppObject *)v44;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v14->m_Items[4], v44, v38, v39, v40, v41, v42, v43);
  v104 = 1065353216;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v104);
  v51 = v15;
  if ( v15 )
  {
    v15 = (Il2CppObject *)sub_1C714EC(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_57;
  }
  if ( LODWORD(v14->max_length) <= 5 )
    goto LABEL_56;
  v14->m_Items[5] = v51;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v14->m_Items[5], (int32_t)v51, v45, v46, v47, v48, v49, v50);
  v15 = (Il2CppObject *)StringLiteral_24189/*"time"*/;
  if ( StringLiteral_24189/*"time"*/ )
  {
    v15 = (Il2CppObject *)sub_1C714EC(StringLiteral_24189/*"time"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_57;
    v58 = StringLiteral_24189/*"time"*/;
  }
  else
  {
    v58 = 0;
  }
  if ( LODWORD(v14->max_length) <= 6 )
    goto LABEL_56;
  v14->m_Items[6] = (Il2CppObject *)v58;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v14->m_Items[6], v58, v52, v53, v54, v55, v56, v57);
  v103 = ftime + 0.1;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v103);
  v65 = v15;
  if ( v15 )
  {
    v15 = (Il2CppObject *)sub_1C714EC(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_57;
  }
  if ( LODWORD(v14->max_length) <= 7 )
    goto LABEL_56;
  v14->m_Items[7] = v65;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v14->m_Items[7], (int32_t)v65, v59, v60, v61, v62, v63, v64);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v66 = iTween__Hash(v14, 0);
  iTween__ScaleTo_63674816(gameObject, v66, 0);
  v67 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = sub_1C71458(object___TypeInfo, 4);
  if ( !v6 )
LABEL_58:
    sub_1C71608(v6, v7);
  v74 = (System_Object_array *)v6;
  v15 = (Il2CppObject *)StringLiteral_25143/*"z"*/;
  if ( StringLiteral_25143/*"z"*/ )
  {
    v15 = (Il2CppObject *)sub_1C714EC(StringLiteral_25143/*"z"*/, v74->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_57;
    v75 = StringLiteral_25143/*"z"*/;
  }
  else
  {
    v75 = 0;
  }
  if ( !LODWORD(v74->max_length) )
    goto LABEL_56;
  v74->m_Items[0] = (Il2CppObject *)v75;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v74->m_Items, v75, v68, v69, v70, v71, v72, v73);
  v102 = 1144258560;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v102);
  v82 = v15;
  if ( v15 )
  {
    v15 = (Il2CppObject *)sub_1C714EC(v15, v74->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_57;
  }
  if ( LODWORD(v74->max_length) <= 1 )
    goto LABEL_56;
  v74->m_Items[1] = v82;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v74->m_Items[1], (int32_t)v82, v76, v77, v78, v79, v80, v81);
  v15 = (Il2CppObject *)StringLiteral_24189/*"time"*/;
  if ( StringLiteral_24189/*"time"*/ )
  {
    v15 = (Il2CppObject *)sub_1C714EC(StringLiteral_24189/*"time"*/, v74->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_57;
    v89 = StringLiteral_24189/*"time"*/;
  }
  else
  {
    v89 = 0;
  }
  if ( LODWORD(v74->max_length) <= 2 )
    goto LABEL_56;
  v74->m_Items[2] = (Il2CppObject *)v89;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v74->m_Items[2], v89, v83, v84, v85, v86, v87, v88);
  v101 = ftime;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v101);
  v96 = v15;
  if ( v15 )
  {
    v15 = (Il2CppObject *)sub_1C714EC(v15, v74->obj.klass->_1.element_class);
    if ( !v15 )
    {
LABEL_57:
      v100 = sub_1C7162C(v15);
      sub_1C714D8(v100, 0);
    }
  }
  if ( LODWORD(v74->max_length) <= 3 )
LABEL_56:
    sub_1C71610(v15);
  v74->m_Items[3] = v96;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v74->m_Items[3], (int32_t)v96, v90, v91, v92, v93, v94, v95);
  v97 = iTween__Hash(v74, 0);
  iTween__RotateTo_63679732(v67, v97, 0);
  v99 = BattleCommandComponent__fadeoutEffect(this, 1, v98);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v99, 0);
}


void BattleCommandComponent__playOpenNobleCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  UnityEngine_Object_o *v6; // x20
  struct UnityEngine_GameObject_array *v7; // x20
  UnityEngine_Transform_o *transform; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  v2 = this;
  if ( (byte_4CCA24B & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    this = (BattleCommandComponent_o *)sub_1C713B0(&StringLiteral_18950/*"effect/ef_noblecard"*/);
    byte_4CCA24B = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_17;
  if ( LODWORD(effectobj->max_length) <= 2 )
    goto LABEL_18;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[2];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_17;
    if ( LODWORD(v5->max_length) <= 2 )
      goto LABEL_18;
    v6 = (UnityEngine_Object_o *)v5->m_Items[2];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_71724796(v6, 0);
  }
  this = (BattleCommandComponent_o *)v2->fields.nomalwidget;
  if ( !this
    || (v7 = v2->fields.effectobj,
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0),
        this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject_41462284(
                                             (BaseMonoBehaviour_o *)v2,
                                             (System_String_o *)StringLiteral_18950/*"effect/ef_noblecard"*/,
                                             transform,
                                             0,
                                             0),
        !v7) )
  {
LABEL_17:
    sub_1C71608(this, method);
  }
  if ( LODWORD(v7->max_length) <= 2 )
LABEL_18:
    sub_1C71610(this);
  v7->m_Items[2] = (UnityEngine_GameObject_o *)this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v7->m_Items[2], (int32_t)this, v9, v10, v11, v12, v13, v14);
}


void BattleCommandComponent__resetAddObject(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v6; // x20
  unsigned __int64 v7; // x22
  __int64 v8; // x27
  UnityEngine_Transform_o *objectRoot; // x21
  System_String_o *v10; // x0
  UnityEngine_Object_o *NodeFromName; // x21
  struct UnityEngine_GameObject_array *addObjectList; // x28
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  UnityEngine_GameObject_o *v19; // x1
  Il2CppClass **v20; // x0
  struct UnityEngine_GameObject_array *v21; // x8
  System_Enum_o v22; // [xsp+8h] [xbp-78h] BYREF
  int v23; // [xsp+18h] [xbp-68h]

  if ( (byte_4CCA245 & 1) == 0 )
  {
    sub_1C713B0(&BattleCommandComponent_ADDOBJECT_TYPE___TypeInfo);
    sub_1C713B0(&BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA245 = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)sub_1C71458(BattleCommandComponent_ADDOBJECT_TYPE___TypeInfo, 2);
  if ( !gameObject )
LABEL_21:
    sub_1C71608(gameObject, v4);
  klass = gameObject[1].klass;
  v6 = gameObject;
  if ( (unsigned int)klass <= 1 )
LABEL_20:
    sub_1C71610(gameObject);
  HIDWORD(gameObject[1].monitor) = 1;
  if ( (int)klass >= 1 )
  {
    v7 = 0;
    while ( v7 < (unsigned int)klass )
    {
      v8 = *((int *)&v6[1].monitor + v7);
      objectRoot = this->fields.objectRoot;
      v22.klass = (System_Enum_c *)BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo;
      v22.monitor = (void *)-1LL;
      v23 = v8;
      v10 = System_Enum__ToString(&v22, 0);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(objectRoot, v10, 1, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !NodeFromName )
          goto LABEL_21;
        addObjectList = this->fields.addObjectList;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NodeFromName, 0);
        if ( !addObjectList )
          goto LABEL_21;
        if ( (unsigned int)v8 >= LODWORD(addObjectList->max_length) )
          goto LABEL_20;
        v19 = gameObject;
        v20 = &addObjectList->obj.klass + v8;
        v20[4] = (Il2CppClass *)v19;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v19, v13, v14, v15, v16, v17, v18);
        v21 = this->fields.addObjectList;
        if ( !v21 )
          goto LABEL_21;
        if ( (unsigned int)v8 >= LODWORD(v21->max_length) )
          goto LABEL_20;
        gameObject = v21->m_Items[v8];
        if ( !gameObject )
          goto LABEL_21;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      }
      LODWORD(klass) = v6[1].klass;
      if ( (__int64)++v7 >= (int)klass )
        return;
    }
    goto LABEL_20;
  }
}


void BattleCommandComponent__resetComboData(BattleCommandComponent_o *this, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1
  struct UnityEngine_GameObject_array *effectobj; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x21
  UnityEngine_Object_o *v8; // x19

  if ( (byte_4CCA257 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA257 = 1;
  }
  BattleCommandComponent__DestroyEffectObject1(this, method);
  effectobj = this->fields.effectobj;
  if ( !effectobj )
    sub_1C71608(v3, v4);
  max_length = effectobj->max_length;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C71610(v3);
      v8 = (UnityEngine_Object_o *)effectobj->m_Items[v7];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v3 = UnityEngine_Object__op_Inequality(v8, 0, 0);
      if ( v3 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71724608(v8, 0);
      }
      LODWORD(max_length) = effectobj->max_length;
      ++v7;
    }
    while ( (__int64)v7 < (int)max_length );
  }
}


void BattleCommandComponent__resetCriticalLabel(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DrumRollLabel_o *criticallabel; // x0

  this->fields.boostedCriticalRate = 0;
  BattleCommandComponent__ResetCriticalLabelColor(this, method);
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel
    || (DrumRollLabel__setParam(criticallabel, 0, 0), (criticallabel = this->fields.criticallabel) == 0) )
  {
    sub_1C71608(criticallabel, v3);
  }
  DrumRollLabel__ChangeParamNonAnimation(criticallabel, 0, 1, 0);
}


void BattleCommandComponent__resetSelect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct BattleCommandData_o *data; // x8
  int32_t uniqueId; // w20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v8; // x20
  struct UnityEngine_GameObject_array *v9; // x8
  UnityEngine_Object_o *v10; // x19
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4CCA266 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    this = (BattleCommandComponent_o *)sub_1C713B0(&ServantAssetLoadManager_TypeInfo);
    byte_4CCA266 = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_17;
  uniqueId = data->fields.uniqueId;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__StopVoice(uniqueId, 0.0, 0);
  v11.fields.r = 1.0;
  v11.fields.g = 1.0;
  v11.fields.b = 1.0;
  v11.fields.a = 1.0;
  BattleCommandComponent__SetCardColor(v2, v11, v5);
  BattleCommandComponent__resetSelectStamp(v2, v6);
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_17;
  if ( LODWORD(effectobj->max_length) <= 3 )
    goto LABEL_18;
  v8 = (UnityEngine_Object_o *)effectobj->m_Items[3];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v2->fields.effectobj;
    if ( v9 )
    {
      if ( LODWORD(v9->max_length) > 3 )
      {
        v10 = (UnityEngine_Object_o *)v9->m_Items[3];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71724608(v10, 0);
        return;
      }
LABEL_18:
      sub_1C71610(this);
    }
LABEL_17:
    sub_1C71608(this, method);
  }
}


void BattleCommandComponent__resetSelectStamp(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8

  v2 = this;
  if ( (byte_4CCA24F & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA24F = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_13;
  if ( LODWORD(effectobj->max_length) <= 5 )
LABEL_14:
    sub_1C71610(this);
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[5];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_13;
    if ( LODWORD(v5->max_length) > 5 )
    {
      this = (BattleCommandComponent_o *)v2->fields.spawner;
      if ( this )
      {
        Spawner__Despawn((Spawner_o *)this, v5->m_Items[5], 1, 0);
        return;
      }
LABEL_13:
      sub_1C71608(this, method);
    }
    goto LABEL_14;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__selectCard(BattleCommandComponent_o *this, int32_t targetIndex, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  BattleCommandData_o *data; // x0
  const MethodInfo *v8; // x1
  struct BattleCommandData_o *v9; // x8
  int treasureDvc; // w21
  Voice_BATTLE_array *v11; // x21
  System_String_o *FileName; // x0
  const MethodInfo *v13; // x2
  System_Array_o *v14; // x0
  intptr_t *v15; // x8
  System_RuntimeFieldHandle_o v16; // x1
  System_Collections_Generic_List_KeyValuePair_string__int___o *v17; // x21
  BattleCommandComponent___c_c *v18; // x0
  System_Func_T__TResult__o *_9__188_0; // x22
  Il2CppObject *v20; // x23
  struct BattleCommandComponent___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Int32_array *v29; // x0
  System_Collections_Generic_List_T__o *v30; // x21
  int32_t size; // w25
  int32_t v32; // w22
  System_Collections_Generic_KeyValuePair_object__int__o v33; // kr10_16
  struct BattleCommandData_o *v34; // x8
  Il2CppObject *key; // x21
  int32_t uniqueId; // w23
  System_String_o *LastVoiceType; // x0
  System_Collections_Generic_List_T__o *v38; // x21
  struct BattleCommandData_o *v39; // x8
  int32_t svtId; // w23
  VoiceMaster_o *v41; // x22
  struct BattleServantData_o *svtData; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleCommandData_o *v44; // x8
  int32_t v45; // w2
  struct BattleServantData_o *v46; // x8
  UnityEngine_Object_o *ServantActor; // x22
  int32_t v48; // w22
  struct BattleServantData_o *v49; // x8
  struct BattleCommandData_o *v50; // x9
  int32_t v51; // w23
  int32_t overwriteSvtVoiceId; // w25
  int32_t v53; // w24
  System_String_o *v54; // x21
  Il2CppObject *v55; // x0
  __int64 *v56; // x8
  struct UnityEngine_GameObject_array *effectobj; // x22
  UnityEngine_Transform_o *transform; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  struct BattlePerformance_o *v65; // x8
  bool v66; // w0
  int v67; // [xsp+4h] [xbp-5Ch] BYREF
  System_Collections_Generic_List_KeyValuePair_string__int___o *voiceInfoList; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o Item; // 0:x2.16
  System_Collections_Generic_KeyValuePair_object__int__o v70; // 0:x2.16
  UnityEngine_Color_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CCA260 & 1) == 0 )
  {
    sub_1C713B0(&Voice_BATTLE___TypeInfo);
    sub_1C713B0(&Method_BasicHelper_IndexValue_KeyValuePair_string__int____);
    sub_1C713B0(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&System_Func_KeyValuePair_string__int___int__TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    sub_1C713B0(&Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&ServantAssetLoadManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Field__PrivateImplementationDetails__388AFD0FB77AF6556B184A69B44D84800D854675D6242CF90106726D5CB5F546);
    sub_1C713B0(&Field__PrivateImplementationDetails__465D7DAC1D1469B8AAD4256C55331C9F60FE5E94AD5B4D3AC8992CB164DDDCE3);
    sub_1C713B0(&Field__PrivateImplementationDetails__71A03FE3843FC2331F63AFCE9FB6609CA17FF235B50C9A2A810635482008B1D0);
    sub_1C713B0(&Method_BattleCommandComponent___c__selectCard_b__188_0__);
    sub_1C713B0(&BattleCommandComponent___c_TypeInfo);
    sub_1C713B0(&Voice_TypeInfo);
    sub_1C713B0(&StringLiteral_16632/*"a"*/);
    sub_1C713B0(&StringLiteral_7213/*"HEROINE_CHANGECARDVOICE"*/);
    sub_1C713B0(&StringLiteral_18946/*"effect/ef_commandup_{0}{1:00}"*/);
    sub_1C713B0(&StringLiteral_22955/*"q"*/);
    sub_1C713B0(&StringLiteral_16989/*"b"*/);
    sub_1C713B0(&StringLiteral_16109/*"_"*/);
    byte_4CCA260 = 1;
  }
  v71.fields.r = 0.5;
  v71.fields.g = 0.5;
  v71.fields.b = 0.5;
  v71.fields.a = 1.0;
  voiceInfoList = 0;
  BattleCommandComponent__SetCardColor(this, v71, *(const MethodInfo **)&targetIndex);
  BattleCommandComponent__stopFirstAura(this, v5);
  data = this->fields.data;
  if ( !data )
    goto LABEL_78;
  if ( BattleCommandData__isBlank(data, 0) )
    return;
  data = (BattleCommandData_o *)BattleCommandComponent__get_isKindOfDontAction(this, v8);
  if ( ((unsigned __int8)data & 1) != 0 )
    return;
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_78;
  treasureDvc = v9->fields.treasureDvc;
  if ( treasureDvc <= 0 )
  {
    if ( !Voice_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    FileName = Voice__getFileName(245, 0);
    if ( BattleCommandComponent__IsValidVoiceType(this, FileName, v13) )
    {
      v14 = (System_Array_o *)sub_1C71458(Voice_BATTLE___TypeInfo, 6);
      v15 = &Field__PrivateImplementationDetails__71A03FE3843FC2331F63AFCE9FB6609CA17FF235B50C9A2A810635482008B1D0;
    }
    else
    {
      v14 = (System_Array_o *)sub_1C71458(Voice_BATTLE___TypeInfo, 3);
      v15 = &Field__PrivateImplementationDetails__465D7DAC1D1469B8AAD4256C55331C9F60FE5E94AD5B4D3AC8992CB164DDDCE3;
    }
    goto LABEL_18;
  }
  if ( treasureDvc != ConstantMaster__getValue((System_String_o *)StringLiteral_7213/*"HEROINE_CHANGECARDVOICE"*/, 0) )
  {
    v14 = (System_Array_o *)sub_1C71458(Voice_BATTLE___TypeInfo, 12);
    v15 = &Field__PrivateImplementationDetails__388AFD0FB77AF6556B184A69B44D84800D854675D6242CF90106726D5CB5F546;
LABEL_18:
    v16.fields.value = *v15;
    v11 = (Voice_BATTLE_array *)v14;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64730948(v14, v16, 0);
    goto LABEL_19;
  }
  data = (BattleCommandData_o *)sub_1C71458(Voice_BATTLE___TypeInfo, 1);
  if ( !data )
    goto LABEL_78;
  v11 = (Voice_BATTLE_array *)data;
  if ( !data->fields.svtlimit )
    goto LABEL_79;
  data->fields.follower = 252;
LABEL_19:
  data = (BattleCommandData_o *)this->fields.svtData;
  if ( !data )
    goto LABEL_78;
  if ( BattleServantData__TryGetPlayableVoiceInfoList(
         (BattleServantData_o *)data,
         v11,
         this->fields.data,
         &voiceInfoList,
         0) )
  {
    v17 = voiceInfoList;
    v18 = BattleCommandComponent___c_TypeInfo;
    if ( !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
      v18 = BattleCommandComponent___c_TypeInfo;
    }
    _9__188_0 = (System_Func_T__TResult__o *)v18->static_fields->__9__188_0;
    if ( !_9__188_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = BattleCommandComponent___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__188_0 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_KeyValuePair_string__int___int__TypeInfo);
      System_Func_KeyValuePair_object__int___int____ctor(
        _9__188_0,
        v20,
        Method_BattleCommandComponent___c__selectCard_b__188_0__,
        0);
      static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
      static_fields->__9__188_0 = (struct System_Func_KeyValuePair_string__int___int__o *)_9__188_0;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__188_0,
        (int32_t)_9__188_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__int___int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                                                 (System_Func_TSource__TResult__o *)_9__188_0,
                                                                 (const MethodInfo_317CB0C *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___int___);
    v29 = System_Linq_Enumerable__ToArray_int_(
            v28,
            (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
    data = (BattleCommandData_o *)RandomUtility__GetRandomRangeIndex(v29, 0, 0);
    v30 = (System_Collections_Generic_List_T__o *)voiceInfoList;
    if ( !voiceInfoList )
      goto LABEL_78;
    size = voiceInfoList->fields._size;
    v32 = (int)data;
    Item = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
             (System_Collections_Generic_List_T__o *)voiceInfoList,
             0,
             (const MethodInfo_378DE78 *)Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Item__);
    v33 = BasicHelper__IndexValue_KeyValuePair_object__int__(
            v30,
            v32,
            Item,
            (const MethodInfo_313917C *)Method_BasicHelper_IndexValue_KeyValuePair_string__int____);
    v6 = *(_QWORD *)&v33.fields.value;
    data = (BattleCommandData_o *)v33.fields.key;
    v34 = this->fields.data;
    if ( !v34 )
      goto LABEL_78;
    key = v33.fields.key;
    uniqueId = v34->fields.uniqueId;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    LastVoiceType = ServantAssetLoadManager__GetLastVoiceType(uniqueId, 0);
    data = (BattleCommandData_o *)System_String__op_Equality(LastVoiceType, (System_String_o *)v33.fields.key, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v38 = (System_Collections_Generic_List_T__o *)voiceInfoList;
      if ( !voiceInfoList )
        goto LABEL_78;
      v70 = System_Collections_Generic_List_KeyValuePair_object__int____get_Item(
              (System_Collections_Generic_List_T__o *)voiceInfoList,
              0,
              (const MethodInfo_378DE78 *)Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Item__);
      key = BasicHelper__IndexValue_KeyValuePair_object__int__(
              v38,
              (v32 + 1) % size,
              v70,
              (const MethodInfo_313917C *)Method_BasicHelper_IndexValue_KeyValuePair_string__int____).fields.key;
    }
    data = (BattleCommandData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !data
      || (data = (BattleCommandData_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)data,
                                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_VoiceMaster___),
          (v39 = this->fields.data) == 0)
      || (svtId = v39->fields.svtId,
          v41 = (VoiceMaster_o *)data,
          data = (BattleCommandData_o *)System_String__Concat_64031724(
                                          (System_String_o *)StringLiteral_16109/*"_"*/,
                                          (System_String_o *)key,
                                          0),
          !v41) )
    {
LABEL_78:
      sub_1C71608(data, v6);
    }
    data = (BattleCommandData_o *)VoiceMaster__getFlagRequestNumber(v41, svtId, (System_String_o *)data, 0, 0);
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
        v44 = this->fields.data;
        if ( !v44 )
          goto LABEL_78;
        v45 = (int)data;
        data = (BattleCommandData_o *)perf->fields.data;
        if ( !data )
          goto LABEL_78;
        BattleData__AddServantVoicePlayed_45995648((BattleData_o *)data, v44->fields.svtId, v45, 0, 0);
      }
    }
    v46 = this->fields.svtData;
    if ( !v46 )
      goto LABEL_78;
    data = (BattleCommandData_o *)this->fields.perf;
    if ( !data )
      goto LABEL_78;
    ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                             (BattlePerformance_o *)data,
                                             v46->fields.uniqueId,
                                             0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    data = (BattleCommandData_o *)UnityEngine_Object__op_Inequality(ServantActor, 0, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !ServantActor )
        goto LABEL_78;
      if ( !BattleActorControl__isNoVoice((BattleActorControl_o *)ServantActor, 0) )
      {
        data = (BattleCommandData_o *)this->fields.svtData;
        if ( !data )
          goto LABEL_78;
        data = (BattleCommandData_o *)BattleServantData__getSvtId((BattleServantData_o *)data, 0);
        if ( !this->fields.svtData )
          goto LABEL_78;
        v48 = (int)data;
        data = (BattleCommandData_o *)BattleServantData__getDispLimitCount(this->fields.svtData, 1, 0);
        v49 = this->fields.svtData;
        if ( !v49 )
          goto LABEL_78;
        v50 = this->fields.data;
        if ( !v50 )
          goto LABEL_78;
        v51 = (int)data;
        overwriteSvtVoiceId = v49->fields.overwriteSvtVoiceId;
        v53 = v50->fields.uniqueId;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        ServantAssetLoadManager__playBattleVoice(
          v48,
          v51,
          overwriteSvtVoiceId,
          (System_String_o *)key,
          1.0,
          0,
          v53,
          0,
          0);
      }
    }
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_78;
  v54 = (System_String_o *)StringLiteral_18946/*"effect/ef_commandup_{0}{1:00}"*/;
  if ( BattleCommandData__isQuick(data, 0) )
  {
    v67 = targetIndex + 1;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
    v56 = &StringLiteral_22955/*"q"*/;
LABEL_67:
    v54 = System_String__Format_64073032(v54, (Il2CppObject *)*v56, v55, 0);
    goto LABEL_68;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_78;
  if ( BattleCommandData__isArts(data, 0) )
  {
    v67 = targetIndex + 1;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
    v56 = &StringLiteral_16632/*"a"*/;
    goto LABEL_67;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_78;
  if ( BattleCommandData__isBuster(data, 0) )
  {
    v67 = targetIndex + 1;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
    v56 = &StringLiteral_16989/*"b"*/;
    goto LABEL_67;
  }
LABEL_68:
  data = (BattleCommandData_o *)this->fields.nomalwidget;
  if ( !data )
    goto LABEL_78;
  effectobj = this->fields.effectobj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0);
  data = (BattleCommandData_o *)BaseMonoBehaviour__createObject_41462284(
                                  (BaseMonoBehaviour_o *)this,
                                  v54,
                                  transform,
                                  0,
                                  0);
  if ( !effectobj )
    goto LABEL_78;
  if ( LODWORD(effectobj->max_length) <= 3 )
LABEL_79:
    sub_1C71610(data);
  effectobj->m_Items[3] = (UnityEngine_GameObject_o *)data;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&effectobj->m_Items[3], (int32_t)data, v59, v60, v61, v62, v63, v64);
  v65 = this->fields.perf;
  if ( !v65 )
    goto LABEL_78;
  data = (BattleCommandData_o *)v65->fields.data;
  if ( !data )
    goto LABEL_78;
  v66 = BattleData__checkLimitTurn((BattleData_o *)data, 0);
  if ( !targetIndex && v66 )
  {
    data = (BattleCommandData_o *)this->fields.perf;
    if ( data )
    {
      BattlePerformance__SetLimitTurnEffectFlag((BattlePerformance_o *)data, 0, 0);
      return;
    }
    goto LABEL_78;
  }
}


void BattleCommandComponent__setAttackCommandData(
        BattleCommandComponent_o *this,
        BattleCommandComponent_o *comp,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x7
  struct BattlePerformance_o *perf; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x4
  struct BattleCommandData_o *data; // x8

  if ( !comp
    || (BattleCommandComponent__setData(this, comp->fields.data, comp->fields.svtData, 1, 1, 0, 1, v3),
        perf = comp->fields.perf,
        this->fields.perf = perf,
        sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.perf, (int32_t)perf, v7, v8, v9, v10, v11, v12),
        BattleCommandComponent__SetPowerUpCardValue(this, 0, v13),
        (data = comp->fields.data) == 0) )
  {
    sub_1C71608(this, comp);
  }
  BattleCommandComponent__SetPowerUpCardIcon(this, data->fields.commandCardParam, 2, 0, v14);
}


void BattleCommandComponent__setBuffIconList(BattleCommandComponent_o *this, bool display, const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *buffRoot; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  BattleBuffData_o *BuffData; // x22
  System_Collections_Generic_List_object__o *v15; // x21
  System_Int32_array *Individualities; // x0
  struct System_Int32_array **p_individuality; // x23
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  bool isTreasureDvc; // w0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  TreasureDvcEntity_o *TreasureDevice; // x0
  struct System_Int32_array *v32; // x1
  System_Collections_Generic_IEnumerable_TSource__o *ShowCommandBuffListActive; // x23
  System_Collections_Generic_IEnumerable_TSource__o *ShowCommandBuffListPassive; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x22
  System_Func_object__bool__o *v36; // x23
  System_Predicate_object__o *v37; // x22
  System_Predicate_object__o *v38; // x22
  System_Predicate_object__o *v39; // x22
  System_Collections_Generic_List_int__o *v40; // x20
  Il2CppObject *MasterData_object; // x22
  _BOOL8 v42; // x0
  __int64 v43; // x1
  Il2CppObject *Entity; // x0
  __int64 IconId; // x0
  __int64 v46; // x1
  int32_t v47; // w21
  _BOOL8 v48; // x0
  __int64 v49; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  struct BattleServantBuffIconComponent_array *buffIconList; // x8
  signed __int64 v54; // x21
  unsigned __int64 max_length_low; // x9
  BattleServantBuffIconComponent_o *v56; // x22
  int32_t v57; // w1
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CCA24D & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C713B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Concat_BattleBuffData_BuffData___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_1C713B0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_1C713B0(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_BattleCommandComponent___c__DisplayClass138_0__setBuffIconList_b__0__);
    sub_1C713B0(&Method_BattleCommandComponent___c__DisplayClass138_0__setBuffIconList_b__1__);
    sub_1C713B0(&Method_BattleCommandComponent___c__DisplayClass138_0__setBuffIconList_b__2__);
    sub_1C713B0(&Method_BattleCommandComponent___c__DisplayClass138_0__setBuffIconList_g__BuffFilterByIndividuality_3__);
    sub_1C713B0(&BattleCommandComponent___c__DisplayClass138_0_TypeInfo);
    byte_4CCA24D = 1;
  }
  memset(&v59, 0, sizeof(v59));
  v5 = sub_1C715FC(BattleCommandComponent___c__DisplayClass138_0_TypeInfo);
  BattleCommandComponent___c__DisplayClass138_0___ctor((BattleCommandComponent___c__DisplayClass138_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_46;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( !display || !this->fields.data || !this->fields.svtData )
  {
    buffRoot = (UnityEngine_Component_o *)this->fields.buffRoot;
    if ( buffRoot )
    {
      buffRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(buffRoot, 0);
      if ( buffRoot )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffRoot, 0, 0);
        return;
      }
    }
LABEL_46:
    sub_1C71608(buffRoot, v7);
  }
  buffRoot = (UnityEngine_Component_o *)this->fields.buffRoot;
  if ( !buffRoot )
    goto LABEL_46;
  buffRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(buffRoot, 0);
  if ( !buffRoot )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffRoot, 1, 0);
  buffRoot = (UnityEngine_Component_o *)this->fields.svtData;
  if ( !buffRoot )
    goto LABEL_46;
  BuffData = BattleServantData__get_BuffData((BattleServantData_o *)buffRoot, 0);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_46;
  Individualities = BattleCommandData__getIndividualities((BattleCommandData_o *)buffRoot, 0);
  *(_QWORD *)(v5 + 40) = Individualities;
  p_individuality = (struct System_Int32_array **)(v5 + 40);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)Individualities, v18, v19, v20, v21, v22, v23);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_46;
  isTreasureDvc = BattleCommandData__isTreasureDvc((BattleCommandData_o *)buffRoot, 0);
  *(_BYTE *)(v5 + 24) = isTreasureDvc;
  if ( !isTreasureDvc )
    goto LABEL_16;
  buffRoot = (UnityEngine_Component_o *)this->fields.svtData;
  if ( !buffRoot )
    goto LABEL_46;
  TreasureDevice = BattleServantData__get_TreasureDevice((BattleServantData_o *)buffRoot, 0);
  if ( TreasureDevice )
  {
    p_individuality = &TreasureDevice->fields.individuality;
LABEL_16:
    v32 = *p_individuality;
    goto LABEL_17;
  }
  v32 = 0;
LABEL_17:
  *(_QWORD *)(v5 + 32) = v32;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)v32, v25, v26, v27, v28, v29, v30);
  if ( !BuffData )
    goto LABEL_46;
  ShowCommandBuffListActive = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getShowCommandBuffListActive(
                                                                                     BuffData,
                                                                                     0);
  ShowCommandBuffListPassive = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getShowCommandBuffListPassive(
                                                                                      BuffData,
                                                                                      0);
  v35 = System_Linq_Enumerable__Concat_object_(
          ShowCommandBuffListActive,
          ShowCommandBuffListPassive,
          (const MethodInfo_3167BF0 *)Method_System_Linq_Enumerable_Concat_BattleBuffData_BuffData___);
  v36 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v36,
    (Il2CppObject *)v5,
    Method_BattleCommandComponent___c__DisplayClass138_0__setBuffIconList_g__BuffFilterByIndividuality_3__,
    0);
  buffRoot = (UnityEngine_Component_o *)System_Linq_Enumerable__Where_object_(
                                          v35,
                                          (System_Func_TSource__bool__o *)v36,
                                          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  if ( !v15 )
    goto LABEL_46;
  System_Collections_Generic_List_object___AddRange(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)buffRoot,
    (const MethodInfo_3810924 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v37 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v37,
    (Il2CppObject *)v5,
    Method_BattleCommandComponent___c__DisplayClass138_0__setBuffIconList_b__0__,
    0);
  System_Collections_Generic_List_object___RemoveAll(
    v15,
    (System_Predicate_T__o *)v37,
    (const MethodInfo_3811D74 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v38 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v38,
    (Il2CppObject *)v5,
    Method_BattleCommandComponent___c__DisplayClass138_0__setBuffIconList_b__1__,
    0);
  System_Collections_Generic_List_object___RemoveAll(
    v15,
    (System_Predicate_T__o *)v38,
    (const MethodInfo_3811D74 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v39 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v39,
    (Il2CppObject *)v5,
    Method_BattleCommandComponent___c__DisplayClass138_0__setBuffIconList_b__2__,
    0);
  System_Collections_Generic_List_object___RemoveAll(
    v15,
    (System_Predicate_T__o *)v39,
    (const MethodInfo_3811D74 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v40 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  buffRoot = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !buffRoot )
    goto LABEL_46;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)buffRoot,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_BuffMaster___);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    v15,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v59 = v58;
  while ( 1 )
  {
    v42 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v59,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v42 )
      break;
    if ( !v59.fields._current )
      sub_1C71608(v42, v43);
    if ( !MasterData_object )
      sub_1C71608(v42, v43);
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (int32_t)v59.fields._current[1].klass,
               (const MethodInfo_3408E80 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    if ( Entity )
    {
      IconId = BuffEntity__GetIconId((BuffEntity_o *)Entity, 0);
      if ( !v40 )
        sub_1C71608(IconId, v46);
      v47 = IconId;
      v48 = System_Collections_Generic_List_int___Contains(
              v40,
              IconId,
              (const MethodInfo_37F3A6C *)Method_System_Collections_Generic_List_int__Contains__);
      if ( !v48 )
      {
        items = v40->fields._items;
        v51 = Method_System_Collections_Generic_List_int__Add__;
        ++v40->fields._version;
        if ( !items )
          sub_1C71608(v48, v49);
        size = v40->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v40,
            v47,
            *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v40->fields._size = size + 1;
          items->m_Items[size] = v47;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v59,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  buffIconList = this->fields.buffIconList;
  if ( !buffIconList )
    goto LABEL_46;
  v54 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(buffIconList->max_length);
    if ( v54 >= (int)max_length_low )
      break;
    if ( !v40 )
      goto LABEL_46;
    if ( v54 >= max_length_low )
      sub_1C71610(buffRoot);
    v56 = buffIconList->m_Items[v54];
    if ( v54 >= v40->fields._size )
    {
      if ( !v56 )
        goto LABEL_46;
      v57 = 0;
    }
    else
    {
      buffRoot = (UnityEngine_Component_o *)System_Collections_Generic_List_int___get_Item(
                                              v40,
                                              v54,
                                              (const MethodInfo_37F3404 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v56 )
        goto LABEL_46;
      v57 = (int)buffRoot;
    }
    BattleServantBuffIconComponent__setImageId(v56, v57, 0);
    buffIconList = this->fields.buffIconList;
    ++v54;
    if ( !buffIconList )
      goto LABEL_46;
  }
}


void BattleCommandComponent__setCriticalObject(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *criticalObject; // x0

  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    sub_1C71608(0, flg);
  UnityEngine_GameObject__SetActive(criticalObject, flg, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__setData(
        BattleCommandComponent_o *this,
        BattleCommandData_o *indata,
        BattleServantData_o *insvtData,
        bool isAttack,
        bool isShowBuffIcon,
        bool isTDTypeChangeWindow,
        bool isInit,
        const MethodInfo *method)
{
  BattleCommandData_o **p_data; // x25
  struct BattleServantData_o **p_svtData; // x26
  int32_t v15; // w2
  char v16; // w3
  System_String_o *v17; // x4
  char v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  Spawner_o *spawner; // x0
  const MethodInfo *v22; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  struct UnityEngine_GameObject_array *v24; // x8
  struct UnityEngine_GameObject_array **p_effectobj; // x27
  __int64 v26; // x23
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v28; // x24
  UnityEngine_Object_o *v29; // x28
  struct UnityEngine_GameObject_array *v30; // x8
  struct UnityEngine_GameObject_array *v31; // x8
  UnityEngine_Object_o *v32; // x28
  __int64 v33; // x0
  int32_t v34; // w2
  char v35; // w3
  System_String_o *v36; // x4
  char v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  const MethodInfo *v40; // x6
  BattleServantData_o *v41; // x1
  BattleBuffData_o *buffData; // x0
  BattleCommandData_o *v43; // x22
  const MethodInfo *v44; // x2
  BattleCommandData_o *data; // x0
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x4
  int32_t commandCardParam; // w1
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CCA23F & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_GameObject___TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA23F = 1;
  }
  p_data = &this->fields.data;
  this->fields.data = indata;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.data,
    (int32_t)indata,
    (int32_t)insvtData,
    isAttack,
    (System_String_o *)isShowBuffIcon,
    isTDTypeChangeWindow,
    isInit,
    (System_String_o *)method);
  p_svtData = &this->fields.svtData;
  this->fields.svtData = insvtData;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.svtData, (int32_t)insvtData, v15, v16, v17, v18, v19, v20);
  effectobj = this->fields.effectobj;
  this->fields.selectflg = 0;
  if ( !effectobj )
    goto LABEL_23;
  BattleCommandComponent__DestroyEffectObject1(this, v22);
  v24 = this->fields.effectobj;
  if ( !v24 )
    goto LABEL_23;
  p_effectobj = &this->fields.effectobj;
  v26 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(v24->max_length);
    v28 = v26 - 4;
    if ( v26 - 4 >= (int)max_length_low )
      break;
    if ( v28 >= max_length_low )
      goto LABEL_45;
    v29 = (UnityEngine_Object_o *)*((_QWORD *)&v24->obj.klass + v26);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    spawner = (Spawner_o *)UnityEngine_Object__op_Inequality(v29, 0, 0);
    if ( ((unsigned __int8)spawner & 1) != 0 )
    {
      if ( v28 < 5 )
      {
        v31 = *p_effectobj;
        if ( !*p_effectobj )
          goto LABEL_23;
        if ( v28 >= LODWORD(v31->max_length) )
LABEL_45:
          sub_1C71610(spawner);
        v32 = (UnityEngine_Object_o *)*((_QWORD *)&v31->obj.klass + v26);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71724608(v32, 0);
      }
      else if ( v26 == 9 )
      {
        v30 = this->fields.effectobj;
        if ( !v30 )
          goto LABEL_23;
        if ( (v30->max_length & 0xFFFFFFFE) <= 5 )
          goto LABEL_45;
        spawner = this->fields.spawner;
        if ( !spawner )
          goto LABEL_23;
        Spawner__Despawn(spawner, v30->m_Items[5], 1, 0);
      }
    }
    v24 = *p_effectobj;
    ++v26;
    if ( !*p_effectobj )
      goto LABEL_23;
  }
  v33 = sub_1C71458(UnityEngine_GameObject___TypeInfo, LODWORD(v24->max_length));
  *p_effectobj = (struct UnityEngine_GameObject_array *)v33;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.effectobj, v33, v34, v35, v36, v37, v38, v39);
  if ( *p_data )
  {
    if ( BattleCommandData__isTreasureDvc(*p_data, 0) )
    {
      v41 = *p_svtData;
      if ( *p_svtData )
      {
        buffData = v41->fields.buffData;
        if ( buffData )
        {
          if ( BattleBuffData__isTDTypeChange(buffData, v41, 0, 0) )
          {
            spawner = (Spawner_o *)*p_svtData;
            if ( !*p_svtData )
              goto LABEL_23;
            spawner = (Spawner_o *)BattleServantData__get_TreasureDevice((BattleServantData_o *)spawner, 0);
            if ( !spawner )
              goto LABEL_23;
            if ( TreasureDvcEntity__IsTDTypeChange((TreasureDvcEntity_o *)spawner, 0) && !isTDTypeChangeWindow )
            {
              spawner = (Spawner_o *)*p_svtData;
              if ( !*p_svtData )
                goto LABEL_23;
              v43 = *p_data;
              spawner = (Spawner_o *)BattleServantData__getTreasureDvcCardId((BattleServantData_o *)spawner, 0);
              if ( !v43 )
                goto LABEL_23;
              v43->fields._type = (int)spawner;
            }
          }
        }
      }
    }
  }
  BattleCommandComponent__updateView(this, isInit, isAttack, isShowBuffIcon, isTDTypeChangeWindow, 0, v40);
  data = this->fields.data;
  if ( !data || BattleCommandData__getCriticalPoint(data, 0) < 1 || !this->fields.isCountUp )
    goto LABEL_41;
  spawner = (Spawner_o *)this->fields.criticalObject;
  if ( !spawner )
LABEL_23:
    sub_1C71608(spawner, v22);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spawner, 1, 0);
LABEL_41:
  v52.fields.r = 0.0;
  v52.fields.g = 0.0;
  v52.fields.b = 0.0;
  v52.fields.a = 0.0;
  BattleCommandComponent__SetCommandCodeActive(this, v52, 1, v44);
  v53.fields.r = 0.0;
  v53.fields.g = 0.0;
  v53.fields.b = 0.0;
  v53.fields.a = 0.0;
  BattleCommandComponent__SetCommandAssistActive(this, v53, 1, v46);
  if ( indata )
  {
    BattleCommandComponent__SetPowerUpCardValue(this, indata->fields.commandCardParam, v47);
    commandCardParam = indata->fields.commandCardParam;
  }
  else
  {
    BattleCommandComponent__SetPowerUpCardValue(this, 0, v47);
    commandCardParam = 0;
  }
  BattleCommandComponent__SetPowerUpCardIcon(this, commandCardParam, 2, 1, v48);
}


void BattleCommandComponent__setData_46771524(
        BattleCommandComponent_o *this,
        BattleServantData_o *svtData,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x22
  __int64 v10; // x23
  __int64 v11; // x24
  Il2CppClass *klass; // x8
  int32_t v13; // w22
  __int64 v14; // x23
  __int64 v15; // x24
  int32_t v16; // w24
  int32_t CommandDispLimitCount; // w25
  int32_t CommandImageSvtId; // w26
  __int64 v19; // x23
  struct BattleBuffData_o *buffData; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  const MethodInfo *v27; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4CCA243 & 1) == 0 )
  {
    sub_1C713B0(&BattleCommandData_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCA243 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svtData )
    goto LABEL_16;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v11 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v11;
  *(_QWORD *)&v28.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v28, 0);
  if ( !v9 )
    goto LABEL_16;
  Instance = DataMasterBase_object__object__int___GetEntity(
               v9,
               (int32_t)Instance,
               (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Instance )
  {
    klass = Instance[9].klass;
    if ( klass )
    {
      if ( LODWORD(klass->_1.namespaze) <= index )
        sub_1C71610(Instance);
      v13 = *((_DWORD *)&klass->_1.byval_arg.data + index);
      v15 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v29.fields.currentCryptoKey = v15;
      *(_QWORD *)&v29.fields.fakeValue = v14;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v29, 0);
      CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(svtData, 0);
      CommandImageSvtId = BattleServantData__GetCommandImageSvtId(svtData, 0);
      v19 = sub_1C715FC(BattleCommandData_TypeInfo);
      BattleCommandData___ctor_46927792(
        (BattleCommandData_o *)v19,
        v13,
        v16,
        CommandDispLimitCount,
        CommandImageSvtId,
        -1,
        0);
      if ( v19 )
      {
        BattleCommandData__SetCommandCardParam((BattleCommandData_o *)v19, svtData->fields.commandCardParam, index, 0);
        buffData = svtData->fields.buffData;
        *(_QWORD *)(v19 + 112) = buffData;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 112), (int32_t)buffData, v21, v22, v23, v24, v25, v26);
        *(_DWORD *)(v19 + 88) = index;
        BattleCommandComponent__setData(this, (BattleCommandData_o *)v19, svtData, 0, 1, 0, 1, v27);
        return;
      }
    }
LABEL_16:
    sub_1C71608(Instance, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__setDepth(BattleCommandComponent_o *this, int32_t basedepth, const MethodInfo *method)
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

  if ( (byte_4CCA23D & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA23D = 1;
  }
  bg = (UIWidget_o *)this->fields.bg;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, basedepth + 1, 0);
  bg = (UIWidget_o *)this->fields.facetex;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, basedepth + 2, 0);
  bg = (UIWidget_o *)this->fields.icon;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, basedepth + 3, 0);
  bg = (UIWidget_o *)this->fields.text;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, basedepth + 4, 0);
  bg = (UIWidget_o *)this->fields.nobletex;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, basedepth + 5, 0);
  bg = (UIWidget_o *)this->fields.codeTexture;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, basedepth + 6, 0);
  bg = (UIWidget_o *)this->fields.codeSprite;
  if ( !bg )
    goto LABEL_103;
  v6 = basedepth + 7;
  UIWidget__set_depth(bg, basedepth + 7, 0);
  bg = (UIWidget_o *)this->fields.chargeTurnLabel;
  if ( !bg )
    goto LABEL_103;
  v7 = basedepth + 11;
  UIWidget__set_depth(bg, basedepth + 11, 0);
  bg = (UIWidget_o *)this->fields.remainingTurnLabel;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, v7, 0);
  assistSprite = (UnityEngine_Object_o *)this->fields.assistSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(assistSprite, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.assistSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v6, 0);
  }
  assistChargeTurnLabel = (UnityEngine_Object_o *)this->fields.assistChargeTurnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(assistChargeTurnLabel, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.assistChargeTurnLabel;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v7, 0);
  }
  assistRemainingTurnLabel = (UnityEngine_Object_o *)this->fields.assistRemainingTurnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(assistRemainingTurnLabel, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.assistRemainingTurnLabel;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v7, 0);
  }
  bg = (UIWidget_o *)this->fields.sealedSprite;
  if ( !bg )
    goto LABEL_103;
  v11 = basedepth + 9;
  UIWidget__set_depth(bg, basedepth + 9, 0);
  bg = (UIWidget_o *)this->fields.donotactSprite;
  if ( !bg )
    goto LABEL_103;
  UIWidget__set_depth(bg, v11, 0);
  donotsleepSprite = (UnityEngine_Object_o *)this->fields.donotsleepSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(donotsleepSprite, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.donotsleepSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v11, 0);
  }
  donotPermanentSleep = (UnityEngine_Object_o *)this->fields.donotPermanentSleep;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(donotPermanentSleep, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.donotPermanentSleep;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v11, 0);
  }
  unusableShortageStarSprite = (UnityEngine_Object_o *)this->fields.unusableShortageStarSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(unusableShortageStarSprite, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.unusableShortageStarSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v11, 0);
  }
  unusableNpSprite = (UnityEngine_Object_o *)this->fields.unusableNpSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(unusableNpSprite, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.unusableNpSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v11, 0);
  }
  donotActTypeSprite = (UnityEngine_Object_o *)this->fields.donotActTypeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(donotActTypeSprite, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.donotActTypeSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 10, 0);
  }
  donotActWithTypeSp = (UnityEngine_Object_o *)this->fields.donotActWithTypeSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(donotActWithTypeSp, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.donotActWithTypeSp;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v11, 0);
  }
  donotActCardSprite = (UnityEngine_Object_o *)this->fields.donotActCardSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(donotActCardSprite, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.donotActCardSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 10, 0);
  }
  treasureDeviceErrorSprite = (UnityEngine_Object_o *)this->fields.treasureDeviceErrorSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(treasureDeviceErrorSprite, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.treasureDeviceErrorSprite;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, v11, 0);
  }
  GameObjectHelper__addNguiDepth(this->fields.criticalObject, v6, 1, 0);
  bg = (UIWidget_o *)this->fields.friendIcon;
  if ( !bg || (UIWidget__set_depth(bg, basedepth + 10, 0), (buffIconList = this->fields.buffIconList) == 0) )
LABEL_103:
    sub_1C71608(bg, *(_QWORD *)&basedepth);
  max_length = buffIconList->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    do
    {
      if ( v22 >= max_length )
        sub_1C71610(bg);
      v23 = buffIconList->m_Items[v22];
      if ( !v23 )
        goto LABEL_103;
      bg = (UIWidget_o *)v23->fields.iconSprite;
      if ( !bg )
        goto LABEL_103;
      UIWidget__set_depth(bg, v7, 0);
      max_length = buffIconList->max_length;
    }
    while ( (int)++v22 < max_length );
  }
  powerUpCardValue = (UnityEngine_Object_o *)this->fields.powerUpCardValue;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(powerUpCardValue, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.powerUpCardValue;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 8, 0);
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(powerUpCardIcon, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.powerUpCardIcon;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 8, 0);
  }
  nowTreasureDeviceTypeImage = (UnityEngine_Object_o *)this->fields.nowTreasureDeviceTypeImage;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nowTreasureDeviceTypeImage, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.nowTreasureDeviceTypeImage;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 12, 0);
  }
  restTreasureDeviceChangeTurnLabel = (UnityEngine_Object_o *)this->fields.restTreasureDeviceChangeTurnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restTreasureDeviceChangeTurnLabel, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.restTreasureDeviceChangeTurnLabel;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 13, 0);
  }
  iconChangeTypeByTransform = (UnityEngine_Object_o *)this->fields.iconChangeTypeByTransform;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconChangeTypeByTransform, 0, 0) )
  {
    bg = (UIWidget_o *)this->fields.iconChangeTypeByTransform;
    if ( !bg )
      goto LABEL_103;
    UIWidget__set_depth(bg, basedepth + 12, 0);
  }
  this->fields.basedepth = basedepth;
}


void BattleCommandComponent__setMoveMode(BattleCommandComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BattleCommandComponent__stopFirstAura(this, method);
  BattleCommandComponent__resetSelectStamp(this, v3);
}


void BattleCommandComponent__setPerf(
        BattleCommandComponent_o *this,
        BattlePerformance_o *inPerf,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.perf = inPerf;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.perf, (int32_t)inPerf, (int32_t)method, v3, v4, v5, v6, v7);
}


void BattleCommandComponent__setSelect(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  this->fields.selectflg = flg;
}


void BattleCommandComponent__setSelectStamp(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *stamp,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UnityEngine_GameObject_array *effectobj; // x0

  effectobj = this->fields.effectobj;
  if ( !effectobj )
    sub_1C71608(0, stamp);
  if ( LODWORD(effectobj->max_length) <= 5 )
    sub_1C71610(effectobj);
  effectobj->m_Items[5] = stamp;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&effectobj->m_Items[5],
    (int32_t)stamp,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleCommandComponent__setShader(
        BattleCommandComponent_o *this,
        System_String_o *shaderName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *facetex; // x21
  struct UITexture_o *v6; // x20
  UnityEngine_Shader_o *v7; // x21
  UnityEngine_Material_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4CCA23C & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Material_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA23C = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(facetex, 0, 0) )
  {
    v6 = this->fields.facetex;
    v7 = UnityEngine_Shader__Find(shaderName, 0);
    v8 = (UnityEngine_Material_o *)sub_1C715FC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v8, v7, 0);
    if ( !v6 )
      sub_1C71608(v9, v10);
    ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))v6->klass->vtable._25_set_material.methodPtr)(
      v6,
      v8,
      v6->klass->vtable._25_set_material.method);
  }
}


void BattleCommandComponent__setTarget(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.target = target;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.target, (int32_t)target, (int32_t)method, v3, v4, v5, v6, v7);
}


void BattleCommandComponent__setTouchFlg(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4CCA25E & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA25E = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v6 )
  {
    if ( !Component_object )
      sub_1C71608(v6, v7);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0);
  }
}


void BattleCommandComponent__startComboCard(BattleCommandComponent_o *this, const MethodInfo *method)
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


void BattleCommandComponent__startCountUp(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct BattleCommandData_o *data; // x8
  BattleCommandData_o *v4; // x0
  DrumRollLabel_o *criticallabel; // x20
  int32_t v6; // w21
  DrumRollLabel_CompleteEventHandler_o *v7; // x22

  v2 = this;
  if ( (byte_4CCA251 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattleCommandComponent_compCriticallabel__);
    this = (BattleCommandComponent_o *)sub_1C713B0(&DrumRollLabel_CompleteEventHandler_TypeInfo);
    byte_4CCA251 = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_15;
  this = (BattleCommandComponent_o *)v2->fields.criticalObject;
  if ( data->fields.starcount <= 0 )
  {
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      return;
    }
LABEL_15:
    sub_1C71608(this, method);
  }
  if ( !this )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (BattleCommandComponent_o *)v2->fields.criticallabel;
  v2->fields.isCountUp = 1;
  if ( !this )
    goto LABEL_15;
  DrumRollLabel__setParam((DrumRollLabel_o *)this, 0, 0);
  this = (BattleCommandComponent_o *)v2->fields.criticallabel;
  if ( !this )
    goto LABEL_15;
  DrumRollLabel__ChangeParamNonAnimation((DrumRollLabel_o *)this, 0, 1, 0);
  v4 = v2->fields.data;
  criticallabel = v2->fields.criticallabel;
  v6 = v4 ? v2->fields.boostedCriticalRate + BattleCommandData__getCriticalPoint(v4, 0) : 0;
  v7 = (DrumRollLabel_CompleteEventHandler_o *)sub_1C715FC(DrumRollLabel_CompleteEventHandler_TypeInfo);
  DrumRollLabel_CompleteEventHandler___ctor(
    v7,
    (Il2CppObject *)v2,
    Method_BattleCommandComponent_compCriticallabel__,
    0);
  if ( !criticallabel )
    goto LABEL_15;
  DrumRollLabel__changeParam(criticallabel, v6, 1, v7, 0.0, 0);
}


void BattleCommandComponent__startMoveFloat(BattleCommandComponent_o *this, const MethodInfo *method)
{
  float v3; // s0
  const MethodInfo *v4; // x2

  if ( (byte_4CCA249 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_16798/*"anim_commandfloat"*/);
    byte_4CCA249 = 1;
  }
  v3 = UnityEngine_Random__Range(0.0, 0.2, 0);
  BattleCommandComponent__PlayAnimation(this, (System_String_o *)StringLiteral_16798/*"anim_commandfloat"*/, v3, v4);
}


void BattleCommandComponent__stopAnimation(BattleCommandComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x21
  Il2CppObject *v4; // x20
  __int64 nomalwidget; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *v7; // x20
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_array *v10; // x8
  UnityEngine_Object_o *v11; // x19

  if ( (byte_4CCA24A & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA24A = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v4 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  nomalwidget = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( (nomalwidget & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    SimpleAnimation__Stop((SimpleAnimation_o *)Component_object, 0);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    nomalwidget = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v4, 0, 0);
    if ( (nomalwidget & 1) != 0 )
    {
      if ( !v4 )
        goto LABEL_29;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v4, 0);
    }
  }
  nomalwidget = (__int64)this->fields.nomalwidget;
  if ( !nomalwidget )
    goto LABEL_29;
  nomalwidget = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nomalwidget, 0);
  if ( !nomalwidget )
    goto LABEL_29;
  nomalwidget = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)nomalwidget, 0);
  v7 = (UnityEngine_Transform_o *)nomalwidget;
  if ( !byte_4CC0D09 )
  {
    nomalwidget = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  if ( !v7
    || (UnityEngine_Transform__set_localPosition(v7, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0),
        (effectobj = this->fields.effectobj) == 0) )
  {
LABEL_29:
    sub_1C71608(nomalwidget, v6);
  }
  if ( LODWORD(effectobj->max_length) <= 2 )
    goto LABEL_30;
  v9 = (UnityEngine_Object_o *)effectobj->m_Items[2];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  nomalwidget = UnityEngine_Object__op_Inequality(v9, 0, 0);
  if ( (nomalwidget & 1) != 0 )
  {
    v10 = this->fields.effectobj;
    if ( v10 )
    {
      if ( LODWORD(v10->max_length) > 2 )
      {
        v11 = (UnityEngine_Object_o *)v10->m_Items[2];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__DestroyImmediate_71724796(v11, 0);
        return;
      }
LABEL_30:
      sub_1C71610(nomalwidget);
    }
    goto LABEL_29;
  }
}


void BattleCommandComponent__stopFirstAura(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  UnityEngine_Object_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v2 = this;
  if ( (byte_4CCA24E & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA24E = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_16;
  if ( LODWORD(effectobj->max_length) <= 4 )
    goto LABEL_17;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[4];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( v5 )
    {
      if ( LODWORD(v5->max_length) <= 4 )
        goto LABEL_17;
      v6 = (UnityEngine_Object_o *)v5->m_Items[4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71724608(v6, 0);
      this = (BattleCommandComponent_o *)v2->fields.effectobj;
      if ( this )
      {
        if ( LODWORD(this->fields.m_CancellationTokenSource) > 4 )
        {
          this->fields.facetex = 0;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.facetex, 0, v7, v8, v9, v10, v11, v12);
          return;
        }
LABEL_17:
        sub_1C71610(this);
      }
    }
LABEL_16:
    sub_1C71608(this, method);
  }
}


void BattleCommandComponent__updateClassMag(
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
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v14; // x2
  float ShowClassMagnification; // s0
  struct UnityEngine_GameObject_array *v16; // x8
  struct UnityEngine_GameObject_array *v17; // x8

  v4 = this;
  if ( (byte_4CCA26B & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA26B = 1;
  }
  if ( targetSvt && v4->fields.data )
  {
    addObjectList = v4->fields.addObjectList;
    if ( !addObjectList )
      goto LABEL_37;
    if ( !LODWORD(addObjectList->max_length) )
      goto LABEL_38;
    v6 = (UnityEngine_Object_o *)addObjectList->m_Items[0];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v6, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v7 = v4->fields.addObjectList;
      if ( !v7 )
        goto LABEL_37;
      if ( LODWORD(v7->max_length) <= 1 )
        goto LABEL_38;
      v8 = (UnityEngine_Object_o *)v7->m_Items[1];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = v4->fields.addObjectList;
        if ( !v9 )
          goto LABEL_37;
        if ( !LODWORD(v9->max_length) )
          goto LABEL_38;
        this = (BattleCommandComponent_o *)v9->m_Items[0];
        if ( !this )
          goto LABEL_37;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        v10 = v4->fields.addObjectList;
        if ( !v10 )
          goto LABEL_37;
        if ( LODWORD(v10->max_length) <= 1 )
          goto LABEL_38;
        this = (BattleCommandComponent_o *)v10->m_Items[1];
        if ( !this
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0), (perf = v4->fields.perf) == 0)
          || (data = v4->fields.data) == 0
          || (this = (BattleCommandComponent_o *)perf->fields.data) == 0 )
        {
LABEL_37:
          sub_1C71608(this, targetSvt);
        }
        ServantData = BattleData__getServantData((BattleData_o *)this, data->fields.uniqueId, 0);
        if ( ServantData )
        {
          v14 = ServantData;
          this = (BattleCommandComponent_o *)v4->fields.perf;
          if ( !this )
            goto LABEL_37;
          ShowClassMagnification = BattlePerformance__getShowClassMagnification(
                                     (BattlePerformance_o *)this,
                                     v4->fields.data,
                                     v14,
                                     targetSvt,
                                     0);
          if ( ShowClassMagnification > 1.0 )
          {
            v16 = v4->fields.addObjectList;
            if ( !v16 )
              goto LABEL_37;
            if ( LODWORD(v16->max_length) > 1 )
            {
              this = (BattleCommandComponent_o *)v16->m_Items[1];
              if ( !this )
                goto LABEL_37;
              goto LABEL_35;
            }
            goto LABEL_38;
          }
          if ( ShowClassMagnification < 1.0 )
          {
            v17 = v4->fields.addObjectList;
            if ( !v17 )
              goto LABEL_37;
            if ( LODWORD(v17->max_length) )
            {
              this = (BattleCommandComponent_o *)v17->m_Items[0];
              if ( !this )
                goto LABEL_37;
LABEL_35:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
              return;
            }
LABEL_38:
            sub_1C71610(this);
          }
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandComponent__updateCount(BattleCommandComponent_o *this, bool isNonAnimation, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0
  int32_t v6; // w20
  UnityEngine_GameObject_o *criticalObject; // x0
  struct DrumRollLabel_o *criticallabel; // x22
  DrumRollLabel_o *v9; // x0
  int32_t v10; // w1
  DrumRollLabel_CompleteEventHandler_o *v11; // x3
  DrumRollLabel_CompleteEventHandler_o *v12; // x21

  if ( (byte_4CCA252 & 1) == 0 )
  {
    sub_1C713B0(&Method_BattleCommandComponent_compCriticallabel__);
    sub_1C713B0(&DrumRollLabel_CompleteEventHandler_TypeInfo);
    byte_4CCA252 = 1;
  }
  data = this->fields.data;
  if ( !data || (v6 = this->fields.boostedCriticalRate + BattleCommandData__getCriticalPoint(data, 0), v6 <= 0) )
  {
    criticalObject = this->fields.criticalObject;
    if ( criticalObject )
    {
      UnityEngine_GameObject__SetActive(criticalObject, 0, 0);
      return;
    }
    goto LABEL_19;
  }
  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    goto LABEL_19;
  if ( !UnityEngine_GameObject__get_activeSelf(criticalObject, 0) )
  {
    criticalObject = (UnityEngine_GameObject_o *)this->fields.criticallabel;
    if ( !criticalObject )
      goto LABEL_19;
    DrumRollLabel__ChangeParamNonAnimation((DrumRollLabel_o *)criticalObject, 0, 1, 0);
  }
  criticalObject = this->fields.criticalObject;
  if ( !criticalObject
    || (UnityEngine_GameObject__SetActive(criticalObject, 1, 0), (criticallabel = this->fields.criticallabel) == 0) )
  {
LABEL_19:
    sub_1C71608(criticalObject, isNonAnimation);
  }
  if ( isNonAnimation )
  {
    DrumRollLabel__ChangeParamNonAnimation(this->fields.criticallabel, v6, 0, 0);
  }
  else
  {
    if ( v6 >= criticallabel->fields.nowvalue )
    {
      v12 = (DrumRollLabel_CompleteEventHandler_o *)sub_1C715FC(DrumRollLabel_CompleteEventHandler_TypeInfo);
      DrumRollLabel_CompleteEventHandler___ctor(
        v12,
        (Il2CppObject *)this,
        Method_BattleCommandComponent_compCriticallabel__,
        0);
      v9 = criticallabel;
      v10 = v6;
      v11 = v12;
    }
    else
    {
      v9 = this->fields.criticallabel;
      v10 = v6;
      v11 = 0;
    }
    DrumRollLabel__changeParam(v9, v10, 1, v11, 0.0, 0);
  }
}


void BattleCommandComponent__updateSelectedEffect(BattleCommandComponent_o *this, const MethodInfo *method)
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
  if ( (byte_4CCA250 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA250 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_41;
  if ( LODWORD(effectobj->max_length) <= 3 )
LABEL_42:
    sub_1C71610(this);
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[3];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_41;
    if ( LODWORD(v5->max_length) <= 3 )
      goto LABEL_42;
    this = (BattleCommandComponent_o *)v5->m_Items[3];
    if ( !this )
      goto LABEL_41;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !v2->fields.nomalwidget )
      goto LABEL_41;
    v6 = this;
    this = (BattleCommandComponent_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)v2->fields.nomalwidget,
                                         0);
    if ( !v6 )
      goto LABEL_41;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v6, (UnityEngine_Transform_o *)this, 0);
    v7 = v2->fields.effectobj;
    if ( !v7 )
      goto LABEL_41;
    if ( LODWORD(v7->max_length) <= 3 )
      goto LABEL_42;
    this = (BattleCommandComponent_o *)v7->m_Items[3];
    if ( !this )
      goto LABEL_41;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    v8 = this;
    if ( !byte_4CC0D09 )
    {
      this = (BattleCommandComponent_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D09 = 1;
    }
    if ( !v8 )
      goto LABEL_41;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)v8,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0);
    v9 = v2->fields.effectobj;
    if ( !v9 )
      goto LABEL_41;
    if ( LODWORD(v9->max_length) <= 3 )
      goto LABEL_42;
    this = (BattleCommandComponent_o *)v9->m_Items[3];
    if ( !this )
      goto LABEL_41;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    v10 = this;
    if ( !byte_4CC0D11 )
    {
      this = (BattleCommandComponent_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D11 = 1;
    }
    if ( !v10 )
      goto LABEL_41;
    UnityEngine_Transform__set_eulerAngles(
      (UnityEngine_Transform_o *)v10,
      UnityEngine_Vector3_TypeInfo->static_fields->upVector,
      0);
    v11 = v2->fields.effectobj;
    if ( !v11 )
      goto LABEL_41;
    if ( LODWORD(v11->max_length) <= 3 )
      goto LABEL_42;
    this = (BattleCommandComponent_o *)v11->m_Items[3];
    if ( !this )
      goto LABEL_41;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_41;
    v15.fields.x = 1.0;
    v15.fields.y = 1.0;
    v15.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v15, 0);
  }
  v12 = v2->fields.effectobj;
  if ( !v12 )
    goto LABEL_41;
  if ( LODWORD(v12->max_length) <= 4 )
    goto LABEL_42;
  v13 = (UnityEngine_Object_o *)v12->m_Items[4];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v13, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v14 = v2->fields.effectobj;
    if ( !v14 )
      goto LABEL_41;
    if ( LODWORD(v14->max_length) > 4 )
    {
      this = (BattleCommandComponent_o *)v14->m_Items[4];
      if ( this )
      {
        this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        if ( this )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v2->fields.objectRoot, 0);
          return;
        }
      }
LABEL_41:
      sub_1C71608(this, method);
    }
    goto LABEL_42;
  }
}


void BattleCommandComponent__updateView(
        BattleCommandComponent_o *this,
        bool initFlg,
        bool isAttack,
        bool isShowBuffIcon,
        bool isTDTypeChangeWindow,
        bool isCharaHide,
        const MethodInfo *method)
{
  System_String_o *v13; // x21
  __int64 v14; // x28
  __int64 transform; // x0
  __int64 v16; // x1
  UnityEngine_Transform_o *v17; // x26
  __int64 v18; // x1
  struct UIWidget_o *nomalwidget; // x0
  UnityEngine_GameObject_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  UnityEngine_GameObject_o *criticalObject; // x0
  const MethodInfo *v24; // x2
  BattleCommandData_o *data; // x0
  __int64 v26; // x1
  UnityEngine_Behaviour_o *facetex; // x0
  __int64 v28; // x1
  UnityEngine_Behaviour_o *icon; // x0
  __int64 v30; // x1
  UnityEngine_Behaviour_o *text; // x0
  __int64 v32; // x1
  UISprite_o *bg; // x0
  __int64 v34; // x1
  UIWidget_o *v35; // x0
  __int64 v36; // x1
  UIWidget_o *v37; // x0
  __int64 v38; // x1
  UnityEngine_Behaviour_o *friendIcon; // x0
  BattleCommandSealStatus_o *v40; // x20
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  BattleCommandComponent_o *v47; // x0
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v51; // x1
  BattleServantData_o *svtData; // x23
  BattleCommandData_o *v53; // x24
  UnityEngine_Object_o *perf; // x25
  _BOOL8 v55; // x0
  __int64 v56; // x1
  struct BattlePerformance_o *v57; // x8
  BattleData_o *v58; // x25
  BattleCommandSealStatus_o *v59; // x26
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  __int64 v66; // x1
  UIWidget_o **p_facetex; // x23
  UITexture_o *v68; // x24
  BattleCommandData_o *v69; // x0
  __int64 v70; // x1
  int32_t ImageServantId; // w25
  BattleCommandData_o *v72; // x0
  __int64 loadSvtLimit; // x0
  __int64 v74; // x1
  struct BattleCommandData_o *v75; // x8
  int32_t v76; // w26
  int32_t svtlimit; // w27
  UnityEngine_Object_o *Manager__loadCommandCard; // x24
  __int64 v79; // x1
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  UnityEngine_Behaviour_o *v86; // x0
  __int64 v87; // x1
  UnityEngine_Behaviour_o *v88; // x0
  UnityEngine_Object_o *v89; // x24
  _BOOL8 v90; // x0
  __int64 v91; // x1
  UnityEngine_Behaviour_o *v92; // x0
  struct BattleCommandData_o *v93; // x8
  UnityEngine_Object_o *v94; // x22
  int treasureDvc; // w9
  uint32_t cctor_finished; // w8
  __int64 v97; // x1
  __int64 v98; // x1
  __int64 v99; // x1
  BattleCommandData_o *v100; // x0
  __int64 v101; // x1
  __int64 *v102; // x8
  BattleCommandData_o *v103; // x0
  BattleCommandData_o *v104; // x0
  Il2CppObject *v105; // x22
  UnityEngine_Behaviour_o *v106; // x0
  __int64 v107; // x0
  __int64 v108; // x1
  struct BattleCommandData_o *v109; // x8
  UISprite_o *v110; // x23
  FileName_c *v111; // x0
  __int64 v112; // x1
  UnityEngine_Behaviour_o *v113; // x0
  __int64 v114; // x0
  UISprite_o *v115; // x23
  FileName_c *v116; // x0
  __int64 v117; // x1
  UnityEngine_Behaviour_o *v118; // x0
  UISprite_o *v119; // x23
  System_String_o *v120; // x0
  UISprite_o *v121; // x21
  System_String_o *v122; // x0
  UISprite_o *v123; // x21
  System_String_o *v124; // x0
  __int64 v125; // x0
  __int64 v126; // x1
  struct UISprite_o *v127; // x21
  UISpriteData_o *AtlasSprite; // x0
  __int64 v129; // x1
  int width; // w22
  UISpriteData_o *v131; // x0
  __int64 v132; // x1
  __int64 v133; // x1
  UnityEngine_Component_o *v134; // x0
  UnityEngine_GameObject_o *v135; // x0
  __int64 v136; // x1
  __int64 v137; // x0
  __int64 v138; // x1
  UnityEngine_Transform_o *v139; // x21
  const MethodInfo *v140; // x1
  __int64 v141; // x0
  const MethodInfo *v142; // x1
  struct BattleCommandData_o *v143; // x8
  UnityEngine_Behaviour_o *v144; // x0
  __int64 v145; // x1
  BattleCommandData_o *v146; // x0
  UITexture_o *nobletex; // x21
  __int64 v148; // x1
  int32_t v149; // w22
  BattleCommandData_o *v150; // x0
  __int64 v151; // x0
  __int64 v152; // x1
  struct BattleCommandData_o *v153; // x8
  int32_t v154; // w23
  int32_t v155; // w24
  bool Manager__loadNobleName; // w21
  UnityEngine_Object_o *v157; // x22
  __int64 v158; // x1
  const MethodInfo *v159; // x2
  UnityEngine_Component_o *v160; // x0
  UnityEngine_GameObject_o *v161; // x0
  __int64 v162; // x1
  BattleCommandComponent_o *PrioredStatus; // x0
  const MethodInfo *v164; // x1
  const MethodInfo *v165; // x2
  struct BattleCommandData_o *v166; // x8
  __int64 v167; // x0
  __int64 v168; // x1
  const MethodInfo *v169; // x2
  struct BattleCommandData_o *v170; // x8
  const MethodInfo *v171; // x2
  UnityEngine_Object_o *svtId_label; // x20
  struct BattleCommandData_o *v173; // x8
  UILabel_o *v174; // x19
  System_String_o *v175; // x1
  UISprite_o *v176; // x0
  const MethodInfo *v177; // x3
  const MethodInfo *v178; // x1
  BattleCommandSealStatus_o *SealStatus; // x0
  __int64 v180; // x1
  const MethodInfo *v181; // x3
  __int64 v182; // x1
  BattleCommandData_o *v183; // x0
  UISprite_o *donotActTypeSprite; // x20
  BattleCommandComponent_o *type; // x0
  const MethodInfo *v186; // x2
  System_String_o *CardTypeSealSpriteName; // x0
  BattleCommandData_o *v188; // x0
  UnityEngine_Object_o *displayRemainingTurn; // x20
  UILabel_o *v190; // x20
  System_String_o *v191; // x21
  const MethodInfo *v192; // x1
  const MethodInfo *v193; // x0
  __int64 v194; // x1
  InvokerMethod invoker_method; // x8
  int v196; // w8
  int v197; // w8
  Il2CppObject *v198; // x1
  System_String_o *v199; // x0
  int v200; // [xsp+8h] [xbp-68h] BYREF
  int32_t svtId; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4CCA246 & 1) == 0 )
  {
    sub_1C713B0(&BattleCommandSealStatus_TypeInfo);
    sub_1C713B0(&FileName_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&ServantAssetLoadManager_TypeInfo);
    sub_1C713B0(&StringLiteral_17788/*"card_bg_blank"*/);
    sub_1C713B0(&StringLiteral_5010/*"DISPLAY_REMAINING_TURN"*/);
    sub_1C713B0(&StringLiteral_22371/*"none"*/);
    sub_1C713B0(&StringLiteral_16914/*"arts"*/);
    sub_1C713B0(&StringLiteral_17810/*"card_txt_{0}"*/);
    sub_1C713B0(&StringLiteral_17660/*"buster"*/);
    sub_1C713B0(&StringLiteral_23018/*"quick"*/);
    sub_1C713B0(&StringLiteral_17802/*"card_icon_{0}"*/);
    sub_1C713B0(&StringLiteral_17790/*"card_bg_{0}"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_19406/*"extra"*/);
    sub_1C713B0(&StringLiteral_17789/*"card_bg_np{0}"*/);
    byte_4CCA246 = 1;
  }
  svtId = 0;
  if ( !this->fields.data )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      return;
    }
    goto LABEL_155;
  }
  v13 = (System_String_o *)StringLiteral_17790/*"card_bg_{0}"*/;
  v14 = StringLiteral_22371/*"none"*/;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v17 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4CC0D0E )
  {
    transform = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D0E = 1;
  }
  if ( !v17 )
    sub_1C71608(transform, v16);
  UnityEngine_Transform__set_localScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  if ( initFlg )
  {
    nomalwidget = this->fields.nomalwidget;
    if ( !nomalwidget )
      sub_1C71608(0, v18);
    ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, float))nomalwidget->klass->vtable._8_set_alpha.methodPtr)(
      nomalwidget,
      nomalwidget->klass->vtable._8_set_alpha.method,
      1.0);
  }
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v20 )
    sub_1C71608(0, v21);
  UnityEngine_GameObject__SetActive(v20, 1, 0);
  if ( !isAttack )
  {
    criticalObject = this->fields.criticalObject;
    if ( !criticalObject )
      sub_1C71608(0, v22);
    UnityEngine_GameObject__SetActive(criticalObject, 0, 0);
    BattleCommandComponent__setBuffIconList(this, isShowBuffIcon, v24);
  }
  data = this->fields.data;
  if ( !data )
    sub_1C71608(0, v22);
  if ( BattleCommandData__isBlank(data, 0) )
  {
    facetex = (UnityEngine_Behaviour_o *)this->fields.facetex;
    if ( !facetex )
      sub_1C71608(0, v26);
    UnityEngine_Behaviour__set_enabled(facetex, 0, 0);
    icon = (UnityEngine_Behaviour_o *)this->fields.icon;
    if ( !icon )
      sub_1C71608(0, v28);
    UnityEngine_Behaviour__set_enabled(icon, 0, 0);
    text = (UnityEngine_Behaviour_o *)this->fields.text;
    if ( !text )
      sub_1C71608(0, v30);
    UnityEngine_Behaviour__set_enabled(text, 0, 0);
    bg = this->fields.bg;
    if ( !bg )
      sub_1C71608(0, v32);
    UISprite__set_spriteName(bg, (System_String_o *)StringLiteral_17788/*"card_bg_blank"*/, 0);
    v35 = (UIWidget_o *)this->fields.bg;
    if ( !v35 )
      sub_1C71608(0, v34);
    UIWidget__set_height(v35, 170, 0);
    v37 = (UIWidget_o *)this->fields.bg;
    if ( !v37 )
      sub_1C71608(0, v36);
    UIWidget__set_width(v37, 133, 0);
    friendIcon = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !friendIcon )
      sub_1C71608(0, v38);
    UnityEngine_Behaviour__set_enabled(friendIcon, 0, 0);
    v40 = (BattleCommandSealStatus_o *)sub_1C715FC(BattleCommandSealStatus_TypeInfo);
    BattleCommandSealStatus___ctor(v40, 0);
    this->fields.sealStatus = v40;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.sealStatus, (int32_t)v40, v41, v42, v43, v44, v45, v46);
    BattleCommandComponent__SetActiveComponent(
      v47,
      (UnityEngine_Component_o *)this->fields.iconChangeTypeByTransform,
      0,
      v48);
    goto LABEL_121;
  }
  v53 = this->fields.data;
  svtData = this->fields.svtData;
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v55 = UnityEngine_Object__op_Implicit(perf, 0);
  if ( v55 )
  {
    v57 = this->fields.perf;
    if ( !v57 )
      sub_1C71608(v55, v56);
    v58 = v57->fields.data;
  }
  else
  {
    v58 = 0;
  }
  v59 = (BattleCommandSealStatus_o *)sub_1C715FC(BattleCommandSealStatus_TypeInfo);
  BattleCommandSealStatus___ctor_46935108(v59, v53, svtData, v58, 0);
  this->fields.sealStatus = v59;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.sealStatus, (int32_t)v59, v60, v61, v62, v63, v64, v65);
  p_facetex = (UIWidget_o **)&this->fields.facetex;
  v68 = this->fields.facetex;
  v69 = this->fields.data;
  if ( !v69 )
    sub_1C71608(0, v66);
  ImageServantId = BattleCommandData__GetImageServantId(v69, 0);
  v72 = this->fields.data;
  if ( !v72 )
    sub_1C71608(0, v70);
  loadSvtLimit = BattleCommandData__get_loadSvtLimit(v72, 0);
  v75 = this->fields.data;
  if ( !v75 )
    sub_1C71608(loadSvtLimit, v74);
  v76 = loadSvtLimit;
  svtlimit = v75->fields.svtlimit;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__loadCommandCard = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCard(
                                                       v68,
                                                       ImageServantId,
                                                       v76,
                                                       svtlimit,
                                                       0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCard, 0, 0) )
  {
    *p_facetex = (UIWidget_o *)Manager__loadCommandCard;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.facetex,
      (int32_t)Manager__loadCommandCard,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
  }
  v86 = (UnityEngine_Behaviour_o *)this->fields.icon;
  if ( !v86 )
    sub_1C71608(0, v79);
  UnityEngine_Behaviour__set_enabled(v86, 1, 0);
  v88 = (UnityEngine_Behaviour_o *)this->fields.text;
  if ( !v88 )
    sub_1C71608(0, v87);
  UnityEngine_Behaviour__set_enabled(v88, 1, 0);
  v89 = (UnityEngine_Object_o *)*p_facetex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v90 = UnityEngine_Object__op_Inequality(v89, 0, 0);
  if ( v90 )
  {
    v92 = (UnityEngine_Behaviour_o *)*p_facetex;
    if ( isCharaHide )
    {
      if ( !v92 )
        sub_1C71608(0, v91);
      UnityEngine_Behaviour__set_enabled(v92, 0, 0);
    }
    else
    {
      if ( !v92 )
        sub_1C71608(0, v91);
      UnityEngine_Behaviour__set_enabled(v92, 1, 0);
    }
  }
  v93 = this->fields.data;
  if ( !v93 )
    sub_1C71608(v90, v91);
  v94 = (UnityEngine_Object_o *)*p_facetex;
  treasureDvc = v93->fields.treasureDvc;
  cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
  if ( treasureDvc < 1 )
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v94, 0, 0) )
    {
      if ( !*p_facetex )
        sub_1C71608(0, v97);
      UIWidget__set_height(*p_facetex, 191, 0);
      if ( !*p_facetex )
        sub_1C71608(0, v99);
      UIWidget__set_width(*p_facetex, 191, 0);
    }
  }
  else
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v94, 0, 0) )
    {
      if ( !*p_facetex )
        sub_1C71608(0, v97);
      UIWidget__set_height(*p_facetex, 191, 0);
      if ( !*p_facetex )
        sub_1C71608(0, v98);
      UIWidget__set_width(*p_facetex, 191, 0);
    }
    v13 = (System_String_o *)StringLiteral_17789/*"card_bg_np{0}"*/;
  }
  v100 = this->fields.data;
  if ( !v100 )
    sub_1C71608(0, v97);
  if ( BattleCommandData__isBuster(v100, 0) )
  {
    v102 = &StringLiteral_17660/*"buster"*/;
  }
  else
  {
    v103 = this->fields.data;
    if ( !v103 )
      sub_1C71608(0, v101);
    if ( BattleCommandData__isQuick(v103, 0) )
    {
      v102 = &StringLiteral_23018/*"quick"*/;
    }
    else
    {
      v104 = this->fields.data;
      if ( !v104 )
        sub_1C71608(0, v101);
      if ( !BattleCommandData__isArts(v104, 0) )
      {
        v188 = this->fields.data;
        if ( !v188 )
          sub_1C71608(0, v101);
        if ( BattleCommandData__isAddAttack(v188, 0) )
          v105 = (Il2CppObject *)StringLiteral_19406/*"extra"*/;
        else
          v105 = (Il2CppObject *)v14;
        goto LABEL_76;
      }
      v102 = &StringLiteral_16914/*"arts"*/;
    }
  }
  v105 = (Il2CppObject *)*v102;
LABEL_76:
  v106 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
  if ( !v106 )
    sub_1C71608(0, v101);
  UnityEngine_Behaviour__set_enabled(v106, 0, 0);
  v109 = this->fields.data;
  if ( !v109 )
    sub_1C71608(v107, v108);
  if ( v109->fields.follower )
  {
    v110 = this->fields.friendIcon;
    v111 = FileName_TypeInfo;
    if ( !FileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    if ( !v110 )
      sub_1C71608(v111, v108);
    UISprite__set_spriteName(v110, FileName_TypeInfo->static_fields->friendIconName, 0);
    v113 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !v113 )
      sub_1C71608(0, v112);
    UnityEngine_Behaviour__set_enabled(v113, 1, 0);
    v109 = this->fields.data;
    if ( !v109 )
      sub_1C71608(v114, v108);
  }
  if ( v109->fields.flgEventJoin )
  {
    v115 = this->fields.friendIcon;
    v116 = FileName_TypeInfo;
    if ( !FileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    if ( !v115 )
      sub_1C71608(v116, v108);
    UISprite__set_spriteName(v115, FileName_TypeInfo->static_fields->eventJoinIconName, 0);
    v118 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !v118 )
      sub_1C71608(0, v117);
    UnityEngine_Behaviour__set_enabled(v118, 1, 0);
  }
  v119 = this->fields.bg;
  v120 = System_String__Format(v13, v105, 0);
  if ( !v119 )
    sub_1C71608(v120, v120);
  UISprite__set_spriteName(v119, v120, 0);
  v121 = this->fields.icon;
  v122 = System_String__Format((System_String_o *)StringLiteral_17802/*"card_icon_{0}"*/, v105, 0);
  if ( !v121 )
    sub_1C71608(v122, v122);
  UISprite__set_spriteName(v121, v122, 0);
  v123 = this->fields.text;
  v124 = System_String__Format((System_String_o *)StringLiteral_17810/*"card_txt_{0}"*/, v105, 0);
  if ( !v123 )
    sub_1C71608(v124, v124);
  UISprite__set_spriteName(v123, v124, 0);
  v127 = this->fields.text;
  if ( !v127 )
    sub_1C71608(v125, v126);
  AtlasSprite = UISprite__GetAtlasSprite(this->fields.text, 0);
  if ( !AtlasSprite )
    sub_1C71608(0, v129);
  if ( !this->fields.text )
    sub_1C71608(AtlasSprite, v129);
  width = AtlasSprite->fields.width;
  v131 = UISprite__GetAtlasSprite(this->fields.text, 0);
  if ( !v131 )
    sub_1C71608(0, v132);
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, float, float, float, float))v127->klass->vtable._18_SetRect.methodPtr)(
    v127,
    v127->klass->vtable._18_SetRect.method,
    0.0,
    0.0,
    (float)width,
    (float)v131->fields.height);
  v134 = (UnityEngine_Component_o *)this->fields.text;
  if ( !v134 )
    sub_1C71608(0, v133);
  v135 = UnityEngine_Component__get_gameObject(v134, 0);
  if ( !v135 )
    sub_1C71608(0, v136);
  v137 = (__int64)UnityEngine_GameObject__get_transform(v135, 0);
  v139 = (UnityEngine_Transform_o *)v137;
  if ( !byte_4CC0D09 )
  {
    v137 = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  if ( !v139 )
    sub_1C71608(v137, v138);
  UnityEngine_Transform__set_localPosition(v139, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  BattleCommandComponent__UpdateIconChangeTypeByTransform(this, v140);
  v143 = this->fields.data;
  if ( !v143 )
    sub_1C71608(v141, v142);
  if ( v143->fields.treasureDvc >= 1 )
  {
    v144 = (UnityEngine_Behaviour_o *)this->fields.text;
    if ( !v144 )
      sub_1C71608(0, v142);
    UnityEngine_Behaviour__set_enabled(v144, 0, 0);
    v146 = this->fields.data;
    if ( !v146 )
      sub_1C71608(0, v145);
    nobletex = this->fields.nobletex;
    v149 = BattleCommandData__GetImageServantId(v146, 0);
    v150 = this->fields.data;
    if ( !v150 )
      sub_1C71608(0, v148);
    v151 = BattleCommandData__get_loadSvtLimit(v150, 0);
    v153 = this->fields.data;
    if ( !v153 )
      sub_1C71608(v151, v152);
    v154 = v151;
    v155 = v153->fields.treasureDvc;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    Manager__loadNobleName = ServantAssetLoadManager__loadNobleName(nobletex, v149, v154, v155, 0);
    v157 = (UnityEngine_Object_o *)this->fields.nobletex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v157, 0, 0) )
    {
      v160 = (UnityEngine_Component_o *)this->fields.nobletex;
      if ( !v160 )
        sub_1C71608(0, v158);
      v161 = UnityEngine_Component__get_gameObject(v160, 0);
      if ( !v161 )
        sub_1C71608(0, v162);
      UnityEngine_GameObject__SetActive(v161, Manager__loadNobleName, 0);
    }
    BattleCommandComponent__UpdateTDTypeChange(this, isTDTypeChangeWindow, v159);
  }
  BattleCommandComponent__InitUnusableMarks(this, v142);
  if ( !isTDTypeChangeWindow )
  {
    v176 = BattleCommandComponent__ChoiceUnusableMarkSprite(this, v164);
    BattleCommandComponent__SetActiveComponent(
      (BattleCommandComponent_o *)v176,
      (UnityEngine_Component_o *)v176,
      1,
      v177);
    SealStatus = BattleCommandComponent__get_SealStatus(this, v178);
    if ( !SealStatus )
      sub_1C71608(0, v180);
    PrioredStatus = (BattleCommandComponent_o *)BattleCommandSealStatus__get_PrioredStatus(SealStatus, 0);
    switch ( (_DWORD)PrioredStatus )
    {
      case 1:
        BattleCommandComponent__SetActiveComponent(
          PrioredStatus,
          (UnityEngine_Component_o *)this->fields.displayRemainingTurn,
          1,
          v181);
        displayRemainingTurn = (UnityEngine_Object_o *)this->fields.displayRemainingTurn;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        PrioredStatus = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(displayRemainingTurn, 0, 0);
        if ( ((unsigned __int8)PrioredStatus & 1) != 0 )
        {
          v190 = this->fields.displayRemainingTurn;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v191 = LocalizationManager__Get((System_String_o *)StringLiteral_5010/*"DISPLAY_REMAINING_TURN"*/, 0);
          v193 = (const MethodInfo *)BattleCommandComponent__get_SealStatus(this, v192);
          if ( !v193 )
            sub_1C71608(0, v194);
          invoker_method = v193->invoker_method;
          if ( !invoker_method )
            sub_1C71608(v193, v194);
          v196 = *((_DWORD *)invoker_method + 5);
          if ( v196 + 1 >= 0 )
            v197 = v196 + 1;
          else
            v197 = v196 + 2;
          v200 = BattleUtility__FloorToLong((float)(v197 >> 1), v193);
          v198 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v200);
          v199 = System_String__Format(v191, v198, 0);
          if ( !v190 )
            sub_1C71608(v199, v199);
          UILabel__set_text(v190, v199, 0);
        }
        break;
      case 8:
        BattleCommandComponent__SetActiveComponent(
          PrioredStatus,
          (UnityEngine_Component_o *)this->fields.donotActCardSprite,
          1,
          v181);
        break;
      case 9:
        BattleCommandComponent__SetActiveComponent(
          PrioredStatus,
          (UnityEngine_Component_o *)this->fields.donotActTypeSprite,
          1,
          v181);
        v183 = this->fields.data;
        if ( !v183 )
          sub_1C71608(0, v182);
        donotActTypeSprite = this->fields.donotActTypeSprite;
        type = (BattleCommandComponent_o *)BattleCommandData__get_type(v183, 0);
        CardTypeSealSpriteName = BattleCommandComponent__getCardTypeSealSpriteName(type, (int32_t)type, v186);
        if ( !donotActTypeSprite )
          sub_1C71608(CardTypeSealSpriteName, CardTypeSealSpriteName);
        UISprite__set_spriteName(donotActTypeSprite, CardTypeSealSpriteName, 0);
        break;
    }
  }
  v166 = this->fields.data;
  if ( !v166 )
    sub_1C71608(PrioredStatus, v164);
  BattleCommandComponent__SetCommandCodeView_46775620(this, v166->fields.commandCodeId, v165);
  v170 = this->fields.data;
  if ( !v170 )
    sub_1C71608(v167, v168);
  BattleCommandComponent__SetCommandAssistView(this, v170->fields.commandAssistId, v169);
  BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, 0, v171);
LABEL_121:
  BattleCommandComponent__setTouchFlg(this, 1, v49);
  svtId_label = (UnityEngine_Object_o *)this->fields.svtId_label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(svtId_label, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v173 = this->fields.data;
    if ( v173 )
    {
      v174 = this->fields.svtId_label;
      svtId = v173->fields.svtId;
      gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&svtId, 0);
      if ( v174 )
      {
        if ( gameObject )
          v175 = (System_String_o *)gameObject;
        else
          v175 = (System_String_o *)StringLiteral_1/*""*/;
        UILabel__set_text(v174, v175, 0);
        return;
      }
    }
LABEL_155:
    sub_1C71608(gameObject, v51);
  }
}


void BattleCommandComponent_CardBuffData___ctor(
        BattleCommandComponent_CardBuffData_o *this,
        int32_t type,
        int32_t turn,
        int32_t order,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.buffType = type;
  this->fields.restTurn = turn;
  this->fields.addOrder = order;
}


void BattleCommandComponent__PlayStarSe_d__161___ctor(
        BattleCommandComponent__PlayStarSe_d__161_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleCommandComponent__PlayStarSe_d__161__MoveNext(
        BattleCommandComponent__PlayStarSe_d__161_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  float preDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  bool result; // w0
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  if ( (byte_4CCA37E & 1) == 0 )
  {
    sub_1C713B0(&Method_BattleCommandComponent__PlayStarSe_d__161_MoveNext__);
    sub_1C713B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4CCA37E = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    v13 = Method_BattleCommandComponent__PlayStarSe_d__161_MoveNext__;
    if ( (*((_BYTE *)Method_BattleCommandComponent__PlayStarSe_d__161_MoveNext__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1C713C8(Method_BattleCommandComponent__PlayStarSe_d__161_MoveNext__);
    v14 = (System_Reflection_MethodBase_o *)sub_1C71394(v13, v13[4]);
    OverwriteAssetSoundName__PlayCommonSe(v14, 7, 0, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    preDelayTime = this->fields.preDelayTime;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1C715FC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, preDelayTime, 0);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *BattleCommandComponent__PlayStarSe_d__161__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__PlayStarSe_d__161_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleCommandComponent__PlayStarSe_d__161__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__PlayStarSe_d__161_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_BattleCommandComponent__PlayStarSe_d__161_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *BattleCommandComponent__PlayStarSe_d__161__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__PlayStarSe_d__161_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleCommandComponent__PlayStarSe_d__161__System_IDisposable_Dispose(
        BattleCommandComponent__PlayStarSe_d__161_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleCommandComponent__WaitForErrorViewFinished_d__244___ctor(
        BattleCommandComponent__WaitForErrorViewFinished_d__244_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleCommandComponent__WaitForErrorViewFinished_d__244__MoveNext(
        BattleCommandComponent__WaitForErrorViewFinished_d__244_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent__WaitForErrorViewFinished_d__244_o *v2; // x19
  BattleCommandComponent_o *_4__this; // x20
  float waitSeconds; // s8
  UnityEngine_WaitForSeconds_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  bool result; // w0
  System_String_o *busyVoiceSe; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int v21; // w8
  System_String_o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Action_o *tdErrorAfterAction; // x8

  v2 = this;
  if ( (byte_4CCA37F & 1) == 0 )
  {
    sub_1C713B0(&SoundManager_TypeInfo);
    this = (BattleCommandComponent__WaitForErrorViewFinished_d__244_o *)sub_1C713B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4CCA37F = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      waitSeconds = v2->fields.waitSeconds;
      v5 = (UnityEngine_WaitForSeconds_o *)sub_1C715FC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v5, waitSeconds, 0);
      v2->fields.__2__current = (Il2CppObject *)v5;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.__2__current, (int32_t)v5, v6, v7, v8, v9, v10, v11);
      result = 1;
      v2->fields.__1__state = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_24;
      BattleCommandComponent__startMoveFloat(_4__this, 0);
      if ( System_String__IsNullOrEmpty(v2->fields.busyVoiceSe, 0) )
        goto LABEL_20;
LABEL_9:
      busyVoiceSe = v2->fields.busyVoiceSe;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      if ( SoundManager__isBusyVoice(busyVoiceSe, 0) )
      {
        v2->fields.__2__current = 0;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
        sub_1C71354(p__2__current, 0, v14, v15, v16, v17, v18, v19);
        v21 = 2;
LABEL_18:
        LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = v21;
        return 1;
      }
LABEL_14:
      v22 = v2->fields.busyVoiceSe;
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      this = (BattleCommandComponent__WaitForErrorViewFinished_d__244_o *)SoundManager__isBusySe(v22, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
        sub_1C71354(p__2__current, 0, v23, v24, v25, v26, v27, v28);
        v21 = 3;
        goto LABEL_18;
      }
      if ( !_4__this )
LABEL_24:
        sub_1C71608(this, method);
LABEL_20:
      tdErrorAfterAction = _4__this->fields.tdErrorAfterAction;
      if ( tdErrorAfterAction )
        ((void (__fastcall *)(intptr_t, intptr_t))tdErrorAfterAction->fields.invoke_impl)(
          tdErrorAfterAction->fields.method_code,
          tdErrorAfterAction->fields.method);
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


Il2CppObject *BattleCommandComponent__WaitForErrorViewFinished_d__244__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__WaitForErrorViewFinished_d__244_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleCommandComponent__WaitForErrorViewFinished_d__244__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__WaitForErrorViewFinished_d__244_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_BattleCommandComponent__WaitForErrorViewFinished_d__244_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *BattleCommandComponent__WaitForErrorViewFinished_d__244__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__WaitForErrorViewFinished_d__244_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleCommandComponent__WaitForErrorViewFinished_d__244__System_IDisposable_Dispose(
        BattleCommandComponent__WaitForErrorViewFinished_d__244_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleCommandComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CCA37A & 1) == 0 )
  {
    sub_1C713B0(&BattleCommandComponent___c_TypeInfo);
    byte_4CCA37A = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(BattleCommandComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleCommandComponent___c_TypeInfo->static_fields->__9 = (struct BattleCommandComponent___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)BattleCommandComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleCommandComponent___c___ctor(BattleCommandComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleCommandComponent___c___SetSpecialCommandCardBuffData_b__225_1(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *a,
        BattleCommandComponent_CardBuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C71608(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


bool BattleCommandComponent___c___UpdateCommandCardTypeChange_b__227_0(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_1C71608(this, 0);
  return c->fields.buffType == 156;
}


bool BattleCommandComponent___c___UpdateFixedCommandCard_b__211_0(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_1C71608(this, 0);
  return c->fields.buffType == 131;
}


int32_t BattleCommandComponent___c___selectCard_b__188_0(
        BattleCommandComponent___c_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_4CCA37B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
    byte_4CCA37B = 1;
  }
  return value;
}


void BattleCommandComponent___c__DisplayClass138_0___ctor(
        BattleCommandComponent___c__DisplayClass138_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleCommandComponent___c__DisplayClass138_0___setBuffIconList_b__0(
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
  this = (BattleCommandComponent___c__DisplayClass138_0_o *)BattleBuffData_BuffData__isCommandCodeBuff(buff, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  _4__this = v4->fields.__4__this;
  if ( !_4__this || (data = _4__this->fields.data) == 0 )
LABEL_8:
    sub_1C71608(this, buff);
  return !BattleBuffData_BuffData__IsMineCommandCode(buff, data->fields.userCommandCodeId, 0);
}


bool BattleCommandComponent___c__DisplayClass138_0___setBuffIconList_b__1(
        BattleCommandComponent___c__DisplayClass138_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleCommandComponent___c__DisplayClass138_0_o *v4; // x20
  struct BattleCommandComponent_o *_4__this; // x8

  if ( !buff )
    goto LABEL_7;
  v4 = this;
  this = (BattleCommandComponent___c__DisplayClass138_0_o *)BattleBuffData_BuffData__isCommandCardBuff(buff, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
LABEL_7:
    sub_1C71608(this, buff);
  return !BattleBuffData_BuffData__isEnableCommandCardBuff(buff, _4__this->fields.data, 0);
}


bool BattleCommandComponent___c__DisplayClass138_0___setBuffIconList_b__2(
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
  this = (BattleCommandComponent___c__DisplayClass138_0_o *)BattleBuffData_BuffData__IsCommandAssistBuff(buff, 0);
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
    sub_1C71608(this, buff);
  }
  return 0;
}


bool BattleCommandComponent___c__DisplayClass138_0___setBuffIconList_g__BuffFilterByIndividuality_3(
        BattleCommandComponent___c__DisplayClass138_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BuffEntity_o *BuffType; // x0
  __int64 v8; // x1
  struct BattleCommandComponent_o *_4__this; // x8
  int32_t v10; // w21
  _WORD *v11; // x0
  bool v12; // w1
  struct BattleCommandComponent_o *v13; // x8
  struct BattleCommandComponent_o *v14; // x8
  System_Int32_array *cardOrTreasureDvcIndividualityArray; // x19
  System_Int32_array_array *v16; // x20
  __int16 *v17; // x0
  struct BattleCommandComponent_o *v18; // x8
  System_Int32_array_array *result; // [xsp+8h] [xbp-38h] BYREF
  _WORD v20[2]; // [xsp+18h] [xbp-28h] BYREF
  __int16 v21; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4CCA37C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Contains_BuffList_TYPE___);
    sub_1C713B0(&Individuality_TypeInfo);
    sub_1C713B0(&Method_System_Nullable_bool___ctor__);
    sub_1C713B0(&Method_System_Nullable_bool__get_HasValue__);
    sub_1C713B0(&Method_System_Nullable_bool__get_Value__);
    byte_4CCA37C = 1;
  }
  v21 = 0;
  result = 0;
  if ( !buff || buff->fields._isRemove )
    return 0;
  BuffType = (BuffEntity_o *)BattleBuffData_BuffData__get_BuffType(buff, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_29;
  v10 = (int)BuffType;
  BuffType = (BuffEntity_o *)System_Linq_Enumerable__Contains_Int32Enum_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.qabTypes,
                               (int32_t)BuffType,
                               (const MethodInfo_3168294 *)Method_System_Linq_Enumerable_Contains_BuffList_TYPE___);
  if ( ((unsigned __int8)BuffType & 1) != 0 )
  {
LABEL_9:
    v11 = v20;
    v12 = 1;
    v20[0] = 0;
    goto LABEL_16;
  }
  if ( this->fields.isTreasureDvc )
    goto LABEL_11;
  v18 = this->fields.__4__this;
  if ( !v18 )
LABEL_29:
    sub_1C71608(BuffType, v8);
  BuffType = (BuffEntity_o *)System_Linq_Enumerable__Contains_Int32Enum_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)v18->fields.noneTdQabTypes,
                               v10,
                               (const MethodInfo_3168294 *)Method_System_Linq_Enumerable_Contains_BuffList_TYPE___);
  if ( ((unsigned __int8)BuffType & 1) != 0 )
    goto LABEL_9;
  if ( !this->fields.isTreasureDvc )
    goto LABEL_13;
LABEL_11:
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_29;
  BuffType = (BuffEntity_o *)System_Linq_Enumerable__Contains_Int32Enum_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)v13->fields.tdTypes,
                               v10,
                               (const MethodInfo_3168294 *)Method_System_Linq_Enumerable_Contains_BuffList_TYPE___);
  if ( ((unsigned __int8)BuffType & 1) == 0 )
  {
LABEL_13:
    v14 = this->fields.__4__this;
    if ( !v14 )
      goto LABEL_29;
    if ( !System_Linq_Enumerable__Contains_Int32Enum_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v14->fields.otherTypes,
            v10,
            (const MethodInfo_3168294 *)Method_System_Linq_Enumerable_Contains_BuffList_TYPE___) )
      return 0;
  }
  v20[0] = 0;
  v11 = v20;
  v12 = 0;
LABEL_16:
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v11,
    v12,
    (const MethodInfo_3935100 *)Method_System_Nullable_bool___ctor__);
  v21 = v20[0];
  if ( !LOBYTE(v20[0]) )
    return 0;
  BuffType = BattleBuffData_BuffData__get_Entity(buff, 0);
  if ( !BuffType )
    goto LABEL_29;
  if ( BuffEntity__TryGetIndividualityDisplayOnCard(BuffType, &result, 0) )
  {
    cardOrTreasureDvcIndividualityArray = this->fields.cardOrTreasureDvcIndividualityArray;
    v16 = result;
    if ( !Individuality_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
    return Individuality__CheckSignedMultiIndividuality(cardOrTreasureDvcIndividualityArray, v16, 0);
  }
  else
  {
    v17 = &v21;
    return !System_Nullable_bool___get_Value(
              (System_Nullable_bool__o)v17,
              (const MethodInfo_393511C *)Method_System_Nullable_bool__get_Value__)
        || BattleBuffData_BuffData__IsMatchTValsCond(buff, this->fields.cardIndividualityArray, 0);
  }
}


void BattleCommandComponent___c__DisplayClass160_0___ctor(
        BattleCommandComponent___c__DisplayClass160_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleCommandComponent___c__DisplayClass160_0___addCriticalBuff_b__0(
        BattleCommandComponent___c__DisplayClass160_0_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent___c__DisplayClass160_0_o *v2; // x19
  struct BattleCommandComponent_o *_4__this; // x8
  UnityEngine_Object_o *spawner; // x20
  struct BattleCommandComponent_o *v5; // x8
  UnityEngine_Object_o *obj; // x19

  v2 = this;
  if ( (byte_4CCA37D & 1) == 0 )
  {
    this = (BattleCommandComponent___c__DisplayClass160_0_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA37D = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  spawner = (UnityEngine_Object_o *)_4__this->fields.spawner;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleCommandComponent___c__DisplayClass160_0_o *)UnityEngine_Object__op_Inequality(spawner, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.__4__this;
    if ( v5 )
    {
      this = (BattleCommandComponent___c__DisplayClass160_0_o *)v5->fields.spawner;
      if ( this )
      {
        Spawner__Despawn((Spawner_o *)this, v2->fields.obj, 0, 0);
        return;
      }
    }
LABEL_13:
    sub_1C71608(this, method);
  }
  obj = (UnityEngine_Object_o *)v2->fields.obj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71724608(obj, 0);
}


void BattleCommandComponent___c__DisplayClass225_0___ctor(
        BattleCommandComponent___c__DisplayClass225_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleCommandComponent___c__DisplayClass225_0___SetSpecialCommandCardBuffData_b__0(
        BattleCommandComponent___c__DisplayClass225_0_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_1C71608(this, 0);
  return c->fields.buffType == this->fields.buffType;
}


void BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233___ctor(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233__MoveNext(
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  v2 = this;
  if ( (byte_4CCA380 & 1) == 0 )
  {
    this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCA380 = 1;
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
                                                                                0);
    if ( !this )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
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
      if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0, 0) )
      {
        this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *)_4__this->fields.specialCardBuffIcon;
        if ( this )
        {
          this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *)_4__this->fields.specialCardBuffIcon;
            if ( this )
            {
              UISprite__set_atlas((UISprite_o *)this, 0, 0);
              goto LABEL_20;
            }
          }
        }
LABEL_26:
        sub_1C71608(this, method);
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
  v9 = UnityEngine_Object__op_Equality(mAtlas, 0, 0);
  v2->fields.__2__current = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.__2__current, 0, v10, v11, v12, v13, v14, v15);
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


Il2CppObject *BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233__System_IDisposable_Dispose(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__233_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleCommandComponent__delayFrame_d__162___ctor(
        BattleCommandComponent__delayFrame_d__162_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleCommandComponent__delayFrame_d__162__MoveNext(
        BattleCommandComponent__delayFrame_d__162_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
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
      sub_1C71608(this, method);
    ((void (__fastcall *)(intptr_t, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      action->fields.method);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *BattleCommandComponent__delayFrame_d__162__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__delayFrame_d__162_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleCommandComponent__delayFrame_d__162__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__delayFrame_d__162_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_BattleCommandComponent__delayFrame_d__162_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *BattleCommandComponent__delayFrame_d__162__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__delayFrame_d__162_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleCommandComponent__delayFrame_d__162__System_IDisposable_Dispose(
        BattleCommandComponent__delayFrame_d__162_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleCommandComponent__fadeoutEffect_d__182___ctor(
        BattleCommandComponent__fadeoutEffect_d__182_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleCommandComponent__fadeoutEffect_d__182__MoveNext(
        BattleCommandComponent__fadeoutEffect_d__182_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleCommandComponent__fadeoutEffect_d__182_o *v8; // x20
  int32_t _1__state; // w8
  DefCoroutine_c *v10; // x0
  Il2CppObject *milliSecSix; // x1
  GrandQuestFolderBoardItem_o *p__2__current; // x20
  bool result; // w0
  struct BattleCommandComponent_o *_4__this; // x19
  struct UnityEngine_GameObject_array *effectobj; // x20
  UnityEngine_Transform_o *transform; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct UnityEngine_GameObject_array *v23; // x8
  UnityEngine_Transform_o *v24; // x20
  struct UnityEngine_GameObject_array *v25; // x8
  BattleCommandComponent__fadeoutEffect_d__182_o *v26; // x20

  v8 = this;
  if ( (byte_4CCA381 & 1) == 0 )
  {
    sub_1C713B0(&DefCoroutine_TypeInfo);
    this = (BattleCommandComponent__fadeoutEffect_d__182_o *)sub_1C713B0(&StringLiteral_18945/*"effect/ef_commandburn_s01"*/);
    byte_4CCA381 = 1;
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
        ((void (__fastcall *)(BattleCommandComponent__fadeoutEffect_d__182_o *, const MethodInfo *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
          this,
          this->klass->vtable._8_System_Collections_IEnumerator_Reset.method,
          0.0);
        BattleCommandComponent__DestroyEffectObject1(_4__this, 0);
        if ( v8->fields.isTresure )
        {
LABEL_27:
          BattleCommandComponent__CardEffectSetActive(_4__this, 0, 0);
          return 0;
        }
        effectobj = _4__this->fields.effectobj;
        this = (BattleCommandComponent__fadeoutEffect_d__182_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)_4__this,
                                                                   0);
        if ( this )
        {
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
          this = (BattleCommandComponent__fadeoutEffect_d__182_o *)BaseMonoBehaviour__createObject_41462284(
                                                                     (BaseMonoBehaviour_o *)_4__this,
                                                                     (System_String_o *)StringLiteral_18945/*"effect/ef_commandburn_s01"*/,
                                                                     transform,
                                                                     0,
                                                                     0);
          if ( effectobj )
          {
            if ( LODWORD(effectobj->max_length) <= 1 )
              goto LABEL_30;
            effectobj->m_Items[1] = (UnityEngine_GameObject_o *)this;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)&effectobj->m_Items[1],
              (int32_t)this,
              v17,
              v18,
              v19,
              v20,
              v21,
              v22);
            v23 = _4__this->fields.effectobj;
            if ( !v23 )
              goto LABEL_29;
            if ( LODWORD(v23->max_length) <= 1 )
              goto LABEL_30;
            this = (BattleCommandComponent__fadeoutEffect_d__182_o *)v23->m_Items[1];
            if ( !this )
              goto LABEL_29;
            v24 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
            this = (BattleCommandComponent__fadeoutEffect_d__182_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)_4__this,
                                                                       0);
            if ( !this )
              goto LABEL_29;
            this = (BattleCommandComponent__fadeoutEffect_d__182_o *)UnityEngine_GameObject__get_transform(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       0);
            if ( !this )
              goto LABEL_29;
            this = (BattleCommandComponent__fadeoutEffect_d__182_o *)UnityEngine_Transform__get_parent(
                                                                       (UnityEngine_Transform_o *)this,
                                                                       0);
            if ( !v24 )
              goto LABEL_29;
            UnityEngine_Transform__set_parent(v24, (UnityEngine_Transform_o *)this, 0);
            v25 = _4__this->fields.effectobj;
            if ( !v25 )
              goto LABEL_29;
            if ( LODWORD(v25->max_length) <= 1 )
LABEL_30:
              sub_1C71610(this);
            this = (BattleCommandComponent__fadeoutEffect_d__182_o *)v25->m_Items[1];
            if ( this )
            {
              this = (BattleCommandComponent__fadeoutEffect_d__182_o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)this,
                                                                         0);
              v26 = this;
              if ( !byte_4CC0D0E )
              {
                this = (BattleCommandComponent__fadeoutEffect_d__182_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
                byte_4CC0D0E = 1;
              }
              if ( v26 )
              {
                UnityEngine_Transform__set_localScale(
                  (UnityEngine_Transform_o *)v26,
                  UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                  0);
                goto LABEL_27;
              }
            }
          }
        }
      }
    }
LABEL_29:
    sub_1C71608(this, method);
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  v10 = DefCoroutine_TypeInfo;
  if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
    v10 = DefCoroutine_TypeInfo;
  }
  milliSecSix = (Il2CppObject *)v10->static_fields->milliSecSix;
  v8->fields.__2__current = milliSecSix;
  p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
  sub_1C71354(p__2__current, (int32_t)milliSecSix, v2, v3, v4, v5, v6, v7);
  result = 1;
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
  return result;
}


Il2CppObject *BattleCommandComponent__fadeoutEffect_d__182__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__fadeoutEffect_d__182_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleCommandComponent__fadeoutEffect_d__182__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__fadeoutEffect_d__182_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_BattleCommandComponent__fadeoutEffect_d__182_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *BattleCommandComponent__fadeoutEffect_d__182__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__fadeoutEffect_d__182_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleCommandComponent__fadeoutEffect_d__182__System_IDisposable_Dispose(
        BattleCommandComponent__fadeoutEffect_d__182_o *this,
        const MethodInfo *method)
{
  ;
}