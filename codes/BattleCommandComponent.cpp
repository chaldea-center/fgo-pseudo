void __fastcall BattleCommandComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleCommandComponent_StaticFields *static_fields; // x0
  __int64 v8; // x1
  struct BattleCommandComponent_StaticFields *v9; // x0
  __int64 v10; // x1
  struct BattleCommandComponent_StaticFields *v11; // x0
  __int64 v12; // x1
  float v13; // s4
  float v14; // s5
  float v15; // s6
  float v16; // s4
  float v17; // s5
  float v18; // s6
  float v19; // s4
  float v20; // s5
  float v21; // s6
  float v22; // s4
  float v23; // s5
  float v24; // s6
  float v25; // s4
  float v26; // s5
  float v27; // s6
  float v28; // s4
  float v29; // s5
  float v30; // s6
  BattleCommandComponent_c *v31; // x8
  struct BattleCommandComponent_StaticFields *v32; // x0
  __int64 v33; // x1
  struct BattleCommandComponent_StaticFields *v34; // x0
  __int64 v35; // x1
  struct UnityEngine_Color_o v36; // [xsp+0h] [xbp-70h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_421149F & 1) == 0 )
  {
    sub_B0D8A4(&BattleCommandComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_19343/*"icon_cardsealed_quick"*/, v2);
    sub_B0D8A4(&StringLiteral_22011/*"se_"*/, v3);
    sub_B0D8A4(&StringLiteral_19341/*"icon_cardsealed_arts"*/, v4);
    sub_B0D8A4(&StringLiteral_19342/*"icon_cardsealed_buster"*/, v5);
    sub_B0D8A4(&StringLiteral_23189/*"v_"*/, v6);
    byte_421149F = 1;
  }
  static_fields = BattleCommandComponent_TypeInfo->static_fields;
  v8 = StringLiteral_19341/*"icon_cardsealed_arts"*/;
  static_fields->SEALED_CARDTYPE_ICON_ARTS = (struct System_String_o *)StringLiteral_19341/*"icon_cardsealed_arts"*/;
  sub_B0D840(static_fields, v8);
  v9 = BattleCommandComponent_TypeInfo->static_fields;
  v10 = StringLiteral_19342/*"icon_cardsealed_buster"*/;
  v9->SEALED_CARDTYPE_ICON_BUSTER = (struct System_String_o *)StringLiteral_19342/*"icon_cardsealed_buster"*/;
  sub_B0D840(&v9->SEALED_CARDTYPE_ICON_BUSTER, v10);
  v11 = BattleCommandComponent_TypeInfo->static_fields;
  v12 = StringLiteral_19343/*"icon_cardsealed_quick"*/;
  v11->SEALED_CARDTYPE_ICON_QUICK = (struct System_String_o *)StringLiteral_19343/*"icon_cardsealed_quick"*/;
  sub_B0D840(&v11->SEALED_CARDTYPE_ICON_QUICK, v12);
  v38.fields.r = 1.0;
  v38.fields.g = 1.0;
  v38.fields.b = 1.0;
  *(_QWORD *)&methoda.token = 0LL;
  *(_QWORD *)&methoda.slot = 0LL;
  UnityEngine_Color___ctor_40757524(v38, v13, v14, v15, (const MethodInfo *)&methoda.token);
  BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientTopOnDefault = *(struct UnityEngine_Color_o *)&methoda.token;
  v39.fields.r = 0.69804;
  methoda.rgctx_data = 0LL;
  methoda.genericMethod = 0LL;
  v39.fields.g = 0.69804;
  v39.fields.b = 0.69804;
  UnityEngine_Color___ctor_40757524(v39, v16, v17, v18, (const MethodInfo *)&methoda.rgctx_data);
  v40.fields.b = 0.58824;
  BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientBottomOnDefault = *(struct UnityEngine_Color_o *)&methoda.rgctx_data;
  v40.fields.g = 0.93333;
  v40.fields.r = 1.0;
  methoda.return_type = 0LL;
  methoda.parameters = 0LL;
  UnityEngine_Color___ctor_40757524(v40, v19, v20, v21, (const MethodInfo *)&methoda.return_type);
  v41.fields.b = 0.070588;
  BattleCommandComponent_TypeInfo->static_fields->CriticalNumberLabelGradientTopOnBoosted = *(struct UnityEngine_Color_o *)&methoda.return_type;
  v41.fields.g = 0.63529;
  v41.fields.r = 1.0;
  methoda.name = 0LL;
  methoda.klass = 0LL;
  UnityEngine_Color___ctor_40757524(v41, v22, v23, v24, (const MethodInfo *)&methoda.name);
  v42.fields.b = 0.52549;
  BattleCommandComponent_TypeInfo->static_fields->CriticalNumberLabelGradientBottomOnBoosted = *(struct UnityEngine_Color_o *)&methoda.name;
  v42.fields.g = 0.88627;
  v42.fields.r = 1.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Color___ctor_40757524(v42, v25, v26, v27, &methoda);
  v43.fields.g = 0.53725;
  v43.fields.b = 0.0;
  BattleCommandComponent_TypeInfo->static_fields->CriticalPercentLabelGradientTopOnBoosted = *(struct UnityEngine_Color_o *)&methoda.methodPointer;
  v43.fields.r = 0.83137;
  v36 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_40757524(v43, v28, v29, v30, (const MethodInfo *)&v36);
  v31 = BattleCommandComponent_TypeInfo;
  BattleCommandComponent_TypeInfo->static_fields->CriticalPercentLabelGradientBottomOnBoosted = v36;
  v32 = v31->static_fields;
  v33 = StringLiteral_23189/*"v_"*/;
  v32->voiceIdPrefix = (struct System_String_o *)StringLiteral_23189/*"v_"*/;
  sub_B0D840(&v32->voiceIdPrefix, v33);
  v34 = BattleCommandComponent_TypeInfo->static_fields;
  v35 = StringLiteral_22011/*"se_"*/;
  v34->seIdPrefix = (struct System_String_o *)StringLiteral_22011/*"se_"*/;
  sub_B0D840(&v34->seIdPrefix, v35);
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
  struct UnityEngine_GameObject_array *v13; // x0
  System_Array_o *v14; // x20
  System_Array_o *v15; // x20
  System_Array_o *v16; // x20
  System_Array_o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v23; // x20
  System_RuntimeFieldHandle_o v24; // 0:w1.4
  System_RuntimeFieldHandle_o v25; // 0:w1.4
  System_RuntimeFieldHandle_o v26; // 0:w1.4
  System_RuntimeFieldHandle_o v27; // 0:w1.4

  if ( (byte_421149E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_BattleCommandComponent_CardBuffData__TypeInfo, v6);
    sub_B0D8A4(&BuffList_TYPE___TypeInfo, v7);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__2798D0F53EF571A9EA2B1242325EF118911DCE9160ED6DF6A7ABD71F4BE53437,
      v8);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__4962172457F75B1A722121B5C4C6A8C6778DDBA77FB677DDE7A5BBE546867870,
      v9);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__7FF261A5C35634E350068AE4166549E7E2B263049C77B28D36985A526C7753C9,
      v10);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__81E6881EDC288CDA01A3F973C0C8C6DA6E8CCE911E702C19528468EFB3B4B468,
      v11);
    byte_421149E = 1;
  }
  v12 = (struct UnityEngine_GameObject_array *)sub_B0D8BC(UnityEngine_GameObject___TypeInfo, 6LL);
  this->fields.effectobj = v12;
  sub_B0D840(&this->fields.effectobj, v12);
  v13 = (struct UnityEngine_GameObject_array *)sub_B0D8BC(UnityEngine_GameObject___TypeInfo, 2LL);
  this->fields.addObjectList = v13;
  sub_B0D840(&this->fields.addObjectList, v13);
  v14 = (System_Array_o *)sub_B0D8BC(BuffList_TYPE___TypeInfo, 13LL);
  v24.fields.value = Field__PrivateImplementationDetails__4962172457F75B1A722121B5C4C6A8C6778DDBA77FB677DDE7A5BBE546867870;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v14, v24, 0LL);
  this->fields.qabTypes = (struct BuffList_TYPE_array *)v14;
  sub_B0D840(&this->fields.qabTypes, v14);
  v15 = (System_Array_o *)sub_B0D8BC(BuffList_TYPE___TypeInfo, 4LL);
  v25.fields.value = Field__PrivateImplementationDetails__2798D0F53EF571A9EA2B1242325EF118911DCE9160ED6DF6A7ABD71F4BE53437;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v15, v25, 0LL);
  this->fields.noneTdQabTypes = (struct BuffList_TYPE_array *)v15;
  sub_B0D840(&this->fields.noneTdQabTypes, v15);
  v16 = (System_Array_o *)sub_B0D8BC(BuffList_TYPE___TypeInfo, 3LL);
  v26.fields.value = Field__PrivateImplementationDetails__81E6881EDC288CDA01A3F973C0C8C6DA6E8CCE911E702C19528468EFB3B4B468;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v16, v26, 0LL);
  this->fields.tdTypes = (struct BuffList_TYPE_array *)v16;
  sub_B0D840(&this->fields.tdTypes, v16);
  v17 = (System_Array_o *)sub_B0D8BC(BuffList_TYPE___TypeInfo, 15LL);
  v27.fields.value = Field__PrivateImplementationDetails__7FF261A5C35634E350068AE4166549E7E2B263049C77B28D36985A526C7753C9;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v17, v27, 0LL);
  this->fields.otherTypes = (struct BuffList_TYPE_array *)v17;
  sub_B0D840(&this->fields.otherTypes, v17);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleCommandComponent_CardBuffData__TypeInfo,
                                                                                                  v18,
                                                                                                  v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData___ctor__);
  this->fields.specialCardBuffList = (struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *)v20;
  sub_B0D840(&this->fields.specialCardBuffList, v20);
  this->fields.cardBuffAlphaFor = 1.0;
  v23 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                        System_Collections_Generic_Dictionary_string__GameObject__TypeInfo,
                                                                                        v21,
                                                                                        v22);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v23,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.cardEffectDict = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v23;
  sub_B0D840(&this->fields.cardEffectDict, v23);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleCommandComponent__AddBoostedCriticalRate(
        BattleCommandComponent_o *this,
        int32_t toAdd,
        const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8
  int32_t v5; // w0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2

  data = this->fields.data;
  if ( data )
    v5 = data->fields.starcount / -10 + 100 - this->fields.boostedCriticalRate;
  else
    v5 = 100;
  this->fields.boostedCriticalRate += UnityEngine_Mathf__Clamp_40762168(v5, 0, toAdd, 0LL);
  BattleCommandComponent__ChangeCriticalLabelColor(this, v6);
  BattleCommandComponent__updateCount(this, 0, v7);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *cardEffectDict; // x0
  bool v10; // w19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4211496 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__, value);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__,
      v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__,
      v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__,
      v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__, v8);
    byte_4211496 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  cardEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict
    || (cardEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(cardEffectDict, (const MethodInfo_2E4AA0C *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__)) == 0LL )
  {
    sub_B0D97C(cardEffectDict);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v11,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_22D9A80 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  v10 = value;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v11,
            (const MethodInfo_26CA940 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v11.fields.currentValue )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v11.fields.currentValue, v10, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v11,
    (const MethodInfo_26CA93C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *cardEffectDict; // x0
  changeVColor_array *v9; // x0
  changeVColor_array *v10; // x19
  int max_length; // w8
  int i; // w22
  UnityEngine_ParticleSystemRenderer_o *v13; // x0
  __int64 v14; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v15; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v16; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4211498 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__, method);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__,
      v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__,
      v4);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__,
      v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__, v7);
    byte_4211498 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  cardEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict
    || (cardEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(cardEffectDict, (const MethodInfo_2E4AA0C *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__)) == 0LL )
  {
    sub_B0D97C(cardEffectDict);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v15,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_22D9A80 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v16,
            (const MethodInfo_26CA940 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v16.fields.currentValue )
      sub_B0D97C(0LL);
    v9 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
           (UnityEngine_GameObject_o *)v16.fields.currentValue,
           (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
    v10 = v9;
    if ( !v9 )
      sub_B0D97C(0LL);
    max_length = v9->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
        {
          v14 = sub_B0D9A8(v9);
          sub_B0D948(v14, 0LL);
        }
        v13 = (UnityEngine_ParticleSystemRenderer_o *)v10->m_Items[i];
        if ( !v13 )
          sub_B0D97C(0LL);
        UnityEngine_ParticleSystemRenderer__set_maskInteraction(v13, 1, 0LL);
        max_length = v10->max_length;
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v16,
    (const MethodInfo_26CA93C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
}


void __fastcall BattleCommandComponent__ChangeCriticalLabelColor(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  void *criticallabel; // x0
  int v5; // w8
  void *v6; // x20
  unsigned int v7; // w22
  UILabel_o *v8; // x21
  UILabel_o *criticalPercentLabel; // x20
  __int64 v10; // x0

  if ( (byte_4211453 & 1) == 0 )
  {
    sub_B0D8A4(&BattleCommandComponent_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____67969368, v3);
    byte_4211453 = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_19;
  criticallabel = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                    (UnityEngine_Component_o *)criticallabel,
                    1,
                    (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____67969368);
  if ( !criticallabel )
    goto LABEL_19;
  v5 = *((_DWORD *)criticallabel + 6);
  v6 = criticallabel;
  if ( v5 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= v5 )
      {
        v10 = sub_B0D9A8(criticallabel);
        sub_B0D948(v10, 0LL);
      }
      criticallabel = BattleCommandComponent_TypeInfo;
      v8 = (UILabel_o *)*((_QWORD *)v6 + (int)v7 + 4);
      if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
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
        goto LABEL_13;
    }
LABEL_19:
    sub_B0D97C(criticallabel);
  }
LABEL_13:
  criticalPercentLabel = this->fields.criticalPercentLabel;
  criticallabel = BattleCommandComponent_TypeInfo;
  if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
    criticallabel = BattleCommandComponent_TypeInfo;
  }
  if ( !criticalPercentLabel )
    goto LABEL_19;
  UILabel__set_gradientTop(criticalPercentLabel, *(UnityEngine_Color_o *)(*((_QWORD *)criticallabel + 23) + 88LL), 0LL);
  criticallabel = this->fields.criticalPercentLabel;
  if ( !criticallabel )
    goto LABEL_19;
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
  BattleCommandComponent_o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x20
  int size; // w8
  __int64 cardBuffListIndex; // x21
  BattleCommandComponent_CardBuffData_o *v8; // x8
  int32_t buffType; // w8

  v3 = this;
  if ( (byte_4211492 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__, method);
    this = (BattleCommandComponent_o *)sub_B0D8A4(
                                         &Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__,
                                         v4);
    byte_4211492 = 1;
  }
  specialCardBuffList = v3->fields.specialCardBuffList;
  if ( !specialCardBuffList )
    goto LABEL_13;
  size = specialCardBuffList->fields._size;
  cardBuffListIndex = v3->fields.cardBuffListIndex;
  if ( size <= (int)cardBuffListIndex )
  {
LABEL_11:
    BattleCommandComponent__SetCardBuffAlphaAnimFlag(v3, 0, v2);
    return;
  }
  if ( size <= (unsigned int)cardBuffListIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v8 = specialCardBuffList->fields._items->m_Items[cardBuffListIndex];
  if ( !v8 )
LABEL_13:
    sub_B0D97C(this);
  buffType = v8->fields.buffType;
  if ( buffType != 156 )
  {
    if ( buffType == 131 )
    {
      BattleCommandComponent__UpdateFixedCommandCard(v3, method);
      return;
    }
    goto LABEL_11;
  }
  BattleCommandComponent__UpdateCommandCardTypeChange(v3, method);
}


UISprite_o *__fastcall BattleCommandComponent__ChoiceUnusableMarkSprite(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  BattleCommandSealStatus_o *SealStatus; // x0
  const MethodInfo *v4; // x1
  UISprite_o **p_donotPermanentSleep; // x8
  UISprite_o *result; // x0

  SealStatus = BattleCommandComponent__get_SealStatus(this, method);
  if ( !SealStatus )
    sub_B0D97C(0LL);
  switch ( BattleCommandSealStatus__get_PrioredStatus(SealStatus, v4) )
  {
    case 0:
      p_donotPermanentSleep = &this->fields.donotPermanentSleep;
      goto LABEL_13;
    case 1:
      p_donotPermanentSleep = &this->fields.donotsleepSprite;
      goto LABEL_13;
    case 2:
      p_donotPermanentSleep = &this->fields.donotactSprite;
      goto LABEL_13;
    case 3:
    case 5:
      p_donotPermanentSleep = &this->fields.sealedSprite;
      goto LABEL_13;
    case 4:
      p_donotPermanentSleep = &this->fields.dontuseSprite;
      goto LABEL_13;
    case 6:
      p_donotPermanentSleep = &this->fields.unusableShortageStarSprite;
      goto LABEL_13;
    case 7:
      p_donotPermanentSleep = &this->fields.unusableNpSprite;
      goto LABEL_13;
    case 8:
      p_donotPermanentSleep = &this->fields.donotActWithTypeSp;
      goto LABEL_13;
    case 9:
      p_donotPermanentSleep = &this->fields.treasureDeviceErrorSprite;
LABEL_13:
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *cardEffectDict; // x0
  Il2CppObject *currentValue; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4211497 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__, v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__,
      v4);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__,
      v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__,
      v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__, v8);
    byte_4211497 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  cardEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict )
    goto LABEL_13;
  cardEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                                cardEffectDict,
                                                                                                (const MethodInfo_2E4AA0C *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
  if ( !cardEffectDict )
    goto LABEL_13;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v11,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)cardEffectDict,
    (const MethodInfo_22D9A80 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v11,
            (const MethodInfo_26CA940 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    currentValue = v11.fields.currentValue;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)currentValue, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v11,
    (const MethodInfo_26CA93C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
  cardEffectDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.cardEffectDict;
  if ( !cardEffectDict )
LABEL_13:
    sub_B0D97C(cardEffectDict);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)cardEffectDict,
    (const MethodInfo_2E4AE44 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
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
  __int64 v10; // x0

  v2 = this;
  if ( (byte_4211479 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___, method);
    this = (BattleCommandComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4211479 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_27;
  if ( effectobj->max_length <= 1 )
    goto LABEL_28;
  v5 = (UnityEngine_Object_o *)effectobj->m_Items[1];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v2->fields.newMatriarl )
    {
      v6 = v2->fields.effectobj;
      if ( !v6 )
        goto LABEL_27;
      if ( v6->max_length <= 1 )
        goto LABEL_28;
      this = (BattleCommandComponent_o *)v6->m_Items[1];
      if ( !this )
        goto LABEL_27;
      this = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_1B62C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
      if ( !this )
        goto LABEL_27;
      v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BattleCommandComponent_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                                     this,
                                     this->klass[1].vtable._2_GetHashCode.methodPtr);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v7, 0LL);
      v2->fields.newMatriarl = 0;
    }
    v8 = v2->fields.effectobj;
    if ( v8 )
    {
      if ( v8->max_length <= 1 )
        goto LABEL_28;
      v9 = (UnityEngine_Object_o *)v8->m_Items[1];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v9, 0LL);
      this = (BattleCommandComponent_o *)v2->fields.effectobj;
      if ( this )
      {
        if ( LODWORD(this->fields.objectRoot) > 1 )
        {
          this->fields.icon = 0LL;
          sub_B0D840(&this->fields.icon, 0LL);
          return;
        }
LABEL_28:
        v10 = sub_B0D9A8(this);
        sub_B0D948(v10, 0LL);
      }
    }
LABEL_27:
    sub_B0D97C(this);
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
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( data )
    return this->fields.boostedCriticalRate + data->fields.starcount / 10;
  else
    return 0;
}


int32_t __fastcall BattleCommandComponent__GetPassStarCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_B0D97C(0LL);
  return BattleCommandData__getPassStarCount(data, method);
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
  float v11; // s11
  float v12; // s12
  float v13; // s13
  UnityEngine_Transform_o *v14; // x0
  float v15; // s0
  float v16; // s1
  float v17; // s2
  float v18; // s3
  float v19; // s4
  float v20; // s5
  float v21; // s6
  float v22; // s7
  UnityEngine_GameObject_o *v23; // x19
  UnityEngine_Transform_o *transform; // x20
  int v25; // s0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v32; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  spawner = this->fields.spawner;
  z = scale.fields.z;
  y = scale.fields.y;
  x = scale.fields.x;
  zero = UnityEngine_Vector3__get_zero(0LL);
  v11 = zero.fields.x;
  v12 = zero.fields.y;
  v13 = zero.fields.z;
  *(UnityEngine_Quaternion_o *)&v15 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !spawner )
    goto LABEL_6;
  v19 = v15;
  v20 = v16;
  v21 = v17;
  v22 = v18;
  v30.fields.x = v11;
  v30.fields.y = v12;
  v30.fields.z = v13;
  v32.fields.x = v19;
  v32.fields.y = v20;
  v32.fields.z = v21;
  v32.fields.w = v22;
  v23 = Spawner__Spawn_25900428(spawner, (UnityEngine_Object_o *)prefab, v30, v32, 0LL);
  GameObjectExtensions__SetParent(v23, (UnityEngine_Component_o *)parent, 0LL);
  if ( !v23
    || (transform = UnityEngine_GameObject__get_transform(v23, 0LL),
        *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v25, 0LL),
        (v14 = UnityEngine_GameObject__get_transform(v23, 0LL)) == 0LL) )
  {
LABEL_6:
    sub_B0D97C(v14);
  }
  v31.fields.x = x;
  v31.fields.y = y;
  v31.fields.z = z;
  UnityEngine_Transform__set_localScale(v14, v31, 0LL);
  return v23;
}


void __fastcall BattleCommandComponent__HideAndCancelCountUpFinishEffect(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  DrumRollLabel_o *criticallabel; // x0
  UnityEngine_Object_o *countUpFinishEffect; // x20
  UnityEngine_GameObject_o **p_countUpFinishEffect; // x19

  if ( (byte_4211452 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4211452 = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_11;
  DrumRollLabel__CancelFinishCallback(criticallabel, 0LL, 0LL);
  countUpFinishEffect = (UnityEngine_Object_o *)this->fields.countUpFinishEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(countUpFinishEffect, 0LL, 0LL) )
  {
    criticallabel = (DrumRollLabel_o *)this->fields.spawner;
    if ( criticallabel )
    {
      p_countUpFinishEffect = &this->fields.countUpFinishEffect;
      Spawner__Despawn((Spawner_o *)criticallabel, *p_countUpFinishEffect, 1, 0LL);
      *p_countUpFinishEffect = 0LL;
      sub_B0D840(p_countUpFinishEffect, 0LL);
      return;
    }
LABEL_11:
    sub_B0D97C(criticallabel);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__HidePowerUpValueLabelActive(
        BattleCommandComponent_o *this,
        bool isCommandCardUnderIcon,
        const MethodInfo *method)
{
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  UnityEngine_Component_o *powerUpCardValue; // x0

  if ( (byte_4211493 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isCommandCardUnderIcon);
    byte_4211493 = 1;
  }
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
    sub_B0D97C(powerUpCardValue);
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
  UnityEngine_Object_o *Object_29501436; // x0
  UnityEngine_Object_o *v13; // x20
  UnityEngine_Object_o *Component_WebViewObject; // x21
  UnityEngine_Object_o *v15; // x19

  if ( (byte_421144C & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_AnimationClip_TypeInfo, method);
    sub_B0D8A4(&AssetManager_TypeInfo, v3);
    sub_B0D8A4(&BattleDataDefine_TypeInfo, v4);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Animation___, v5);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_16393/*"anim_erroraction"*/, v8);
    byte_421144C = 1;
  }
  v9 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v9 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v9->static_fields->ASSET_BATTLE_COMMON;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
  if ( !AssetStorage )
    goto LABEL_34;
  Object_29501436 = AssetData__GetObject_29501436(AssetStorage, (System_String_o *)StringLiteral_16393/*"anim_erroraction"*/, 0LL);
  if ( Object_29501436 )
  {
    if ( (UnityEngine_AnimationClip_c *)Object_29501436->klass == UnityEngine_AnimationClip_TypeInfo )
      v13 = Object_29501436;
    else
      v13 = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v13, 0LL, 0LL) )
  {
    this->fields.isSettedTreasureDeviceErrorAnim = 1;
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v15 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
    if ( ((unsigned __int8)AssetStorage & 1) != 0 )
    {
      if ( v13 )
      {
        AssetStorage = (AssetData_o *)UnityEngine_Object__get_name(v13, 0LL);
        if ( Component_WebViewObject )
        {
          SimpleAnimation__AddClip(
            (SimpleAnimation_o *)Component_WebViewObject,
            (UnityEngine_AnimationClip_o *)v13,
            (System_String_o *)AssetStorage,
            0LL);
          return;
        }
      }
    }
    else
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
      if ( ((unsigned __int8)AssetStorage & 1) == 0 )
        return;
      if ( v13 )
      {
        AssetStorage = (AssetData_o *)UnityEngine_Object__get_name(v13, 0LL);
        if ( v15 )
        {
          UnityEngine_Animation__AddClip(
            (UnityEngine_Animation_o *)v15,
            (UnityEngine_AnimationClip_o *)v13,
            (System_String_o *)AssetStorage,
            0LL);
          return;
        }
      }
    }
LABEL_34:
    sub_B0D97C(AssetStorage);
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
  const MethodInfo *v13; // x1

  if ( (byte_421144B & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, method);
    sub_B0D8A4(&AssetManager_TypeInfo, v3);
    sub_B0D8A4(&BattleDataDefine_TypeInfo, v4);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_2781/*"BattleAssetUIAtlas"*/, v7);
    sub_B0D8A4(&StringLiteral_19394/*"icon_error"*/, v8);
    byte_421144B = 1;
  }
  treasureDeviceErrorSprite = (UnityEngine_Object_o *)this->fields.treasureDeviceErrorSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(treasureDeviceErrorSprite, 0LL, 0LL) )
  {
    v10 = BattleDataDefine_TypeInfo;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v10 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v10->static_fields->ASSET_BATTLE_COMMON;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
    if ( !AssetStorage
      || (AssetStorage = (AssetData_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                          AssetStorage,
                                          (System_String_o *)StringLiteral_2781/*"BattleAssetUIAtlas"*/,
                                          (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440)) == 0LL
      || (AssetStorage = (AssetData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          (UnityEngine_GameObject_o *)AssetStorage,
                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.treasureDeviceErrorSprite)
      || (UISprite__set_atlas(this->fields.treasureDeviceErrorSprite, (UIAtlas_o *)AssetStorage, 0LL),
          (AssetStorage = (AssetData_o *)this->fields.treasureDeviceErrorSprite) == 0LL) )
    {
      sub_B0D97C(AssetStorage);
    }
    UISprite__set_spriteName((UISprite_o *)AssetStorage, (System_String_o *)StringLiteral_19394/*"icon_error"*/, 0LL);
    BattleCommandComponent__SetConfWindowTreasureDeviceErrorMark(this, v13);
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
}


void __fastcall BattleCommandComponent__Initialize(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct Spawner_o *Instance; // x0
  struct Spawner_o **p_spawner; // x20
  UnityEngine_Object_o *spawner; // x21
  const MethodInfo *v7; // x1
  Spawner_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_421144D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_Spawner__get_Instance__, v3);
    byte_421144D = 1;
  }
  Instance = (struct Spawner_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  p_spawner = &this->fields.spawner;
  this->fields.spawner = Instance;
  sub_B0D840(&this->fields.spawner, Instance);
  spawner = (UnityEngine_Object_o *)this->fields.spawner;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL) )
  {
    v8 = *p_spawner;
    if ( !*p_spawner
      || (Spawner__Precache_25899780(v8, (UnityEngine_Object_o *)this->fields.effect_cricomplete, 5, 0LL),
          (v8 = this->fields.spawner) == 0LL) )
    {
      sub_B0D97C(v8);
    }
    Spawner__Precache_25899780(v8, (UnityEngine_Object_o *)this->fields.effect_fullcricomplete, 5, 0LL);
  }
  BattleCommandComponent__InitTreasureDeviceErrorSpriteMark(this, v7);
  BattleCommandComponent__InitTreasureDeviceErrorAnimation(this, v9);
}


bool __fastcall BattleCommandComponent__IsAnimationBusy(
        BattleCommandComponent_o *this,
        System_String_o *animationName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *Component_WebViewObject; // x21
  UnityEngine_Object_o *v8; // x20
  _BOOL8 v9; // x0

  if ( (byte_421149C & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Animation___, animationName);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_421149C = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v8 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v9 )
  {
    if ( Component_WebViewObject )
      return SimpleAnimation__IsPlaying((SimpleAnimation_o *)Component_WebViewObject, animationName, 0LL);
LABEL_16:
    sub_B0D97C(v9);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( !v9 )
    return 0;
  if ( !v8 )
    goto LABEL_16;
  return UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)v8, animationName, 0LL);
}


bool __fastcall BattleCommandComponent__IsMaxCritical(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B0D97C(this);
  return data->fields.starcount > 999;
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
    sub_B0D97C(criticalObject);
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
  if ( (byte_4211472 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, voiceTypeId);
    this = (BattleCommandComponent_o *)sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v5);
    byte_4211472 = 1;
  }
  svtData = v4->fields.svtData;
  if ( !svtData )
    goto LABEL_13;
  v8 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v8;
  *(_QWORD *)&v14.fields.fakeValue = v7;
  this = (BattleCommandComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v14, 0LL);
  if ( !v4->fields.svtData
    || (v9 = (int)this,
        this = (BattleCommandComponent_o *)BattleServantData__getDispLimitCount(v4->fields.svtData, 1, 0LL),
        (v10 = v4->fields.svtData) == 0LL) )
  {
LABEL_13:
    sub_B0D97C(this);
  }
  v11 = (int)this;
  overwriteSvtVoiceId = v10->fields.overwriteSvtVoiceId;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  return ServantAssetLoadManager__checkBattleVoice(v9, v11, overwriteSvtVoiceId, voiceTypeId, 0, 0LL);
}


void __fastcall BattleCommandComponent__OnClickEvent(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *target; // x20
  struct BattleCommandData_o *data; // x8
  UnityEngine_GameObject_o *v7; // x19
  Il2CppObject *v8; // x0
  int32_t markindex; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_421146F & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_22815/*"touchCommandCard"*/, v4);
    byte_421146F = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( data )
    {
      v7 = this->fields.target;
      markindex = data->fields.markindex;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &markindex);
      if ( !v7 )
        sub_B0D97C(v8);
      UnityEngine_GameObject__SendMessage_40784812(v7, (System_String_o *)StringLiteral_22815/*"touchCommandCard"*/, v8, 0LL);
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
  struct BattleCommandData_o *data; // x8
  UnityEngine_GameObject_o *v8; // x19
  Il2CppObject *v9; // x0
  int32_t markindex; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4211470 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, obj);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_8614/*"LongPress"*/, v5);
    byte_4211470 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(target, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( data )
    {
      v8 = this->fields.target;
      markindex = data->fields.markindex;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &markindex);
      if ( !v8 )
        sub_B0D97C(v9);
      UnityEngine_GameObject__SendMessage_40784812(v8, (System_String_o *)StringLiteral_8614/*"LongPress"*/, v9, 0LL);
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
  UnityEngine_Object_o *Component_WebViewObject; // x20
  UnityEngine_Object_o *v11; // x21
  UnityEngine_AnimationState_o *Item; // x0
  UnityEngine_AnimationState_c *klass; // x8
  UnityEngine_AnimationState_o *v14; // x21
  unsigned __int64 v15; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v17; // x0

  v4 = *(long double *)&simpleAnimationTime;
  if ( (byte_421145B & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Animation___, animationName);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v9);
    byte_421145B = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v11 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Item = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)Item & 1) == 0 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Item = (UnityEngine_AnimationState_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
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
        UnityEngine_Animation__Play_50564840((UnityEngine_Animation_o *)v11, animationName, 0LL);
        return;
      }
    }
LABEL_24:
    sub_B0D97C(Item);
  }
  if ( !Component_WebViewObject )
    goto LABEL_24;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 1, 0LL);
  Item = (UnityEngine_AnimationState_o *)SimpleAnimation__get_Item(
                                           (SimpleAnimation_o *)Component_WebViewObject,
                                           animationName,
                                           0LL);
  if ( !Item )
    goto LABEL_24;
  klass = Item->klass;
  v14 = Item;
  if ( *(_WORD *)&Item->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v15;
      p_offset += 2;
      if ( v15 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    v17 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_13:
    v17 = sub_AA67A0(Item, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_AnimationState_o *, _QWORD, long double))v17)(v14, *(_QWORD *)(v17 + 8), v4);
  SimpleAnimation__Play_50482404((SimpleAnimation_o *)Component_WebViewObject, animationName, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__PlayStarSe(
        BattleCommandComponent_o *this,
        float preDelayTime,
        const MethodInfo *method)
{
  __int64 v3; // x2
  BattleCommandComponent__PlayStarSe_d__159_o *v5; // x19
  __int64 v6; // x0

  if ( (byte_4211468 & 1) == 0 )
  {
    sub_B0D8A4(&BattleCommandComponent__PlayStarSe_d__159_TypeInfo, method);
    byte_4211468 = 1;
  }
  v5 = (BattleCommandComponent__PlayStarSe_d__159_o *)sub_B0D974(
                                                        BattleCommandComponent__PlayStarSe_d__159_TypeInfo,
                                                        method,
                                                        v3);
  BattleCommandComponent__PlayStarSe_d__159___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  v5->fields.preDelayTime = preDelayTime;
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleCommandComponent__PlayTDErrorAnimation(
        BattleCommandComponent_o *this,
        System_Action_o *tdErrorAfterAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _BOOL4 IsAnimationBusy; // w21
  System_Delegate_o *v9; // x0
  System_Action_o **p_tdErrorAfterAction; // x20
  BattleServantData_o *svtData; // x0
  struct BattleServantData_o *v12; // x8
  System_String_o *TDErrorCardSelectVoiceSe; // x0
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  BattleCommandComponent_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_421149D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, tdErrorAfterAction);
    sub_B0D8A4(&StringLiteral_22012/*"se_ba41"*/, v5);
    sub_B0D8A4(&StringLiteral_16393/*"anim_erroraction"*/, v6);
    sub_B0D8A4(&StringLiteral_16391/*"anim_commandfloat"*/, v7);
    byte_421149D = 1;
  }
  IsAnimationBusy = BattleCommandComponent__IsAnimationBusy(this, (System_String_o *)StringLiteral_16391/*"anim_commandfloat"*/, method);
  v9 = System_Delegate__Combine(
         (System_Delegate_o *)this->fields.tdErrorAfterAction,
         (System_Delegate_o *)tdErrorAfterAction,
         0LL);
  if ( v9 && (System_Action_c *)v9->klass != System_Action_TypeInfo )
  {
    v16 = (BattleCommandComponent_o *)sub_B0DC70(v9);
    BattleCommandComponent___ctor(v16, v17);
  }
  else
  {
    p_tdErrorAfterAction = &this->fields.tdErrorAfterAction;
    this->fields.tdErrorAfterAction = (struct System_Action_o *)v9;
    sub_B0D840(&this->fields.tdErrorAfterAction, v9);
    if ( !this->fields.isSettedTreasureDeviceErrorAnim || !IsAnimationBusy )
    {
      if ( *p_tdErrorAfterAction )
        System_Action__Invoke(*p_tdErrorAfterAction, 0LL);
    }
    else
    {
      svtData = this->fields.svtData;
      if ( !svtData
        || (BattleServantData__AddTDErrorTouchCount(svtData, 0LL), (v12 = this->fields.svtData) == 0LL)
        || (svtData = (BattleServantData_o *)v12->fields.deckSvt) == 0LL )
      {
        sub_B0D97C(svtData);
      }
      TDErrorCardSelectVoiceSe = BattleDeckServantData__GetTDErrorCardSelectVoiceSe(
                                   (BattleDeckServantData_o *)svtData,
                                   (System_String_o *)StringLiteral_22012/*"se_ba41"*/,
                                   0LL);
      BattleCommandComponent__PlayTDErrorVoiceSe(this, TDErrorCardSelectVoiceSe, -1, v14);
      BattleCommandComponent__PlayAnimation(this, (System_String_o *)StringLiteral_16393/*"anim_erroraction"*/, 0.0, v15);
    }
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
  System_String_o *v13; // x22
  BattleServantData_o *svtData; // x0
  int32_t v15; // w22
  int32_t DispLimitCount; // w23
  int32_t VoicePrefix; // w0
  BattleCommandComponent_c *v18; // x8
  int v19; // w24
  struct BattleServantData_o *v20; // x8
  System_String_o *v21; // x19
  int32_t overwriteSvtVoiceId; // w21
  Il2CppObject *v23; // x20
  Il2CppObject *v24; // x0
  BattleCommandComponent_c *v25; // x0
  BattleCommandComponent_c *v26; // x0
  _QWORD *v27; // x8
  System_Reflection_MethodBase_o *v28; // x0
  int v30; // [xsp+8h] [xbp-38h] BYREF
  int32_t v31; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_421149A & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleCommandComponent_PlayTDErrorVoiceSe__, voiceSeId);
    sub_B0D8A4(&BattleCommandComponent_TypeInfo, v7);
    sub_B0D8A4(&int_TypeInfo, v8);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v10);
    sub_B0D8A4(&StringLiteral_23720/*"{0}_{1:D0}_{2}"*/, v11);
    sub_B0D8A4(&StringLiteral_1/*""*/, v12);
    byte_421149A = 1;
  }
  v13 = 0LL;
  if ( !System_String__IsNullOrEmpty(voiceSeId, 0LL) )
  {
    svtData = (BattleServantData_o *)BattleCommandComponent_TypeInfo;
    if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
    }
    if ( !voiceSeId )
      goto LABEL_32;
    if ( System_String__StartsWith(voiceSeId, BattleCommandComponent_TypeInfo->static_fields->voiceIdPrefix, 0LL) )
    {
      svtData = this->fields.svtData;
      if ( svtData )
      {
        svtData = (BattleServantData_o *)BattleServantData__getSvtId(svtData, 0LL);
        if ( this->fields.svtData )
        {
          v15 = (int)svtData;
          DispLimitCount = BattleServantData__getDispLimitCount(this->fields.svtData, 1, 0LL);
          svtData = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( svtData )
          {
            VoicePrefix = ServantAssetLoadManager__getVoicePrefix(
                            (ServantAssetLoadManager_o *)svtData,
                            v15,
                            DispLimitCount,
                            0LL);
            v18 = BattleCommandComponent_TypeInfo;
            v19 = VoicePrefix;
            if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
              v18 = BattleCommandComponent_TypeInfo;
            }
            svtData = (BattleServantData_o *)System_String__Replace_43857140(
                                               voiceSeId,
                                               v18->static_fields->voiceIdPrefix,
                                               (System_String_o *)StringLiteral_1/*""*/,
                                               0LL);
            v20 = this->fields.svtData;
            if ( v20 )
            {
              v21 = (System_String_o *)svtData;
              overwriteSvtVoiceId = v20->fields.overwriteSvtVoiceId;
              if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
              }
              ServantAssetLoadManager__playBattleVoice(
                v15,
                DispLimitCount,
                overwriteSvtVoiceId,
                v21,
                1.0,
                0LL,
                voiceUniqueId,
                0,
                0LL);
              v31 = v15;
              v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
              v30 = v19;
              v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
              return System_String__Format_43850968(
                       (System_String_o *)StringLiteral_23720/*"{0}_{1:D0}_{2}"*/,
                       v23,
                       v24,
                       (Il2CppObject *)v21,
                       0LL);
            }
          }
        }
      }
LABEL_32:
      sub_B0D97C(svtData);
    }
    v25 = BattleCommandComponent_TypeInfo;
    if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
      v25 = BattleCommandComponent_TypeInfo;
    }
    if ( System_String__StartsWith(voiceSeId, v25->static_fields->seIdPrefix, 0LL) )
    {
      v26 = BattleCommandComponent_TypeInfo;
      if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v26 = BattleCommandComponent_TypeInfo;
      }
      v13 = System_String__Replace_43857140(
              voiceSeId,
              v26->static_fields->seIdPrefix,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      v27 = Method_BattleCommandComponent_PlayTDErrorVoiceSe__;
      if ( (*((_BYTE *)Method_BattleCommandComponent_PlayTDErrorVoiceSe__ + 75) & 2) != 0 )
        v27 = (_QWORD *)sub_B0D8AC(Method_BattleCommandComponent_PlayTDErrorVoiceSe__);
      v28 = (System_Reflection_MethodBase_o *)sub_B0D888(v27, v27[3]);
      OverwriteAssetSoundName__PlaySe(v28, v13, 0LL);
    }
    else
    {
      return voiceSeId;
    }
  }
  return v13;
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
    sub_B0D97C(svtData);
  }
  v8 = BattleCommandComponent__PlayTDErrorVoiceSe(this, (System_String_o *)svtData, data->fields.uniqueId, v6);
  v10 = BattleCommandComponent__WaitForErrorViewFinished(this, waitSeconds, v8, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
}


void __fastcall BattleCommandComponent__ReleaseNobleGaugeEffect(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *nobleGaugeEffect; // x20
  struct UnityEngine_GameObject_o **p_nobleGaugeEffect; // x19
  UnityEngine_GameObject_o *v6; // x20
  UnityEngine_Object_o *v7; // x20

  if ( (byte_421145F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&iTween_TypeInfo, v3);
    byte_421145F = 1;
  }
  nobleGaugeEffect = (UnityEngine_Object_o *)this->fields.nobleGaugeEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nobleGaugeEffect, 0LL, 0LL) )
  {
    p_nobleGaugeEffect = &this->fields.nobleGaugeEffect;
    v6 = *p_nobleGaugeEffect;
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_42502584(v6, 0LL);
    v7 = (UnityEngine_Object_o *)*p_nobleGaugeEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v7, 0LL);
    *p_nobleGaugeEffect = 0LL;
    sub_B0D840(p_nobleGaugeEffect, 0LL);
  }
}


void __fastcall BattleCommandComponent__ResetBoostedCriticalRate(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *criticalObject; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2

  this->fields.boostedCriticalRate = 0;
  BattleCommandComponent__ResetCriticalLabelColor(this, method);
  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    sub_B0D97C(0LL);
  if ( UnityEngine_GameObject__get_activeInHierarchy(criticalObject, 0LL) )
    BattleCommandComponent__HideAndCancelCountUpFinishEffect(this, v4);
  BattleCommandComponent__updateCount(this, 1, v5);
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
  struct UISprite_o *v4; // x0

  if ( (byte_4211490 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4211490 = 1;
  }
  this->fields.cardBuffListIndex = 0;
  *(_QWORD *)&this->fields.cardBuffAlphaFor = 1065353216LL;
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(specialCardBuffIcon, 0LL, 0LL) )
  {
    v4 = this->fields.specialCardBuffIcon;
    if ( !v4 )
      sub_B0D97C(0LL);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))v4->klass->vtable._8_set_alpha.method)(
      v4,
      v4->klass->vtable._9_CalculateFinalAlpha.methodPtr,
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
  unsigned int v7; // w22
  UILabel_o *v8; // x21
  UILabel_o *criticalPercentLabel; // x20
  __int64 v10; // x0

  if ( (byte_4211454 & 1) == 0 )
  {
    sub_B0D8A4(&BattleCommandComponent_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____67969368, v3);
    byte_4211454 = 1;
  }
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_19;
  criticallabel = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                    (UnityEngine_Component_o *)criticallabel,
                    1,
                    (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____67969368);
  if ( !criticallabel )
    goto LABEL_19;
  v5 = *((_DWORD *)criticallabel + 6);
  v6 = criticallabel;
  if ( v5 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= v5 )
      {
        v10 = sub_B0D9A8(criticallabel);
        sub_B0D948(v10, 0LL);
      }
      criticallabel = BattleCommandComponent_TypeInfo;
      v8 = (UILabel_o *)*((_QWORD *)v6 + (int)v7 + 4);
      if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
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
        goto LABEL_13;
    }
LABEL_19:
    sub_B0D97C(criticallabel);
  }
LABEL_13:
  criticalPercentLabel = this->fields.criticalPercentLabel;
  criticallabel = BattleCommandComponent_TypeInfo;
  if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
    criticallabel = BattleCommandComponent_TypeInfo;
  }
  if ( !criticalPercentLabel )
    goto LABEL_19;
  UILabel__set_gradientTop(criticalPercentLabel, *(UnityEngine_Color_o *)(*((_QWORD *)criticallabel + 23) + 24LL), 0LL);
  criticallabel = this->fields.criticalPercentLabel;
  if ( !criticallabel )
    goto LABEL_19;
  UILabel__set_gradientBottom(
    (UILabel_o *)criticallabel,
    BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientBottomOnDefault,
    0LL);
}


void __fastcall BattleCommandComponent__ResetPassStarCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B0D97C(this);
  data->fields.passStarCount = 0;
}


void __fastcall BattleCommandComponent__SetActiveComponent(
        BattleCommandComponent_o *this,
        UnityEngine_Component_o *component,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4211486 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, component);
    byte_4211486 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)component,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !component || (gameObject = UnityEngine_Component__get_gameObject(component, 0LL)) == 0LL )
      sub_B0D97C(gameObject);
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
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_421148D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, active);
    byte_421148D = 1;
  }
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(specialCardBuffIcon, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B0D97C(gameObject);
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
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_421148C & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, active);
    byte_421148C = 1;
  }
  this->fields.isCardBuffAlphaAnim = active;
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(specialCardBuffIcon, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B0D97C(gameObject);
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
  UIWidget_o *v9; // x0
  UnityEngine_Object_o *bg; // x20
  UnityEngine_Object_o *codeSprite; // x20
  UnityEngine_Object_o *codeTexture; // x20
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *powerUpCardIcon; // x20
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4211474 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4211474 = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v9 = (UIWidget_o *)this->fields.facetex;
    if ( !v9 )
      goto LABEL_34;
    v16.fields.r = r;
    v16.fields.g = g;
    v16.fields.b = b;
    v16.fields.a = a;
    UIWidget__set_color(v9, v16, 0LL);
  }
  bg = (UnityEngine_Object_o *)this->fields.bg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bg, 0LL, 0LL) )
  {
    v9 = (UIWidget_o *)this->fields.bg;
    if ( !v9 )
      goto LABEL_34;
    v17.fields.r = r;
    v17.fields.g = g;
    v17.fields.b = b;
    v17.fields.a = a;
    UIWidget__set_color(v9, v17, 0LL);
  }
  codeSprite = (UnityEngine_Object_o *)this->fields.codeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(codeSprite, 0LL, 0LL) )
  {
    v9 = (UIWidget_o *)this->fields.codeSprite;
    if ( !v9 )
      goto LABEL_34;
    v18.fields.r = r;
    v18.fields.g = g;
    v18.fields.b = b;
    v18.fields.a = a;
    UIWidget__set_color(v9, v18, 0LL);
  }
  codeTexture = (UnityEngine_Object_o *)this->fields.codeTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(codeTexture, 0LL, 0LL) )
  {
    v9 = (UIWidget_o *)this->fields.codeTexture;
    if ( !v9 )
      goto LABEL_34;
    v19.fields.r = r;
    v19.fields.g = g;
    v19.fields.b = b;
    v19.fields.a = a;
    UIWidget__set_color(v9, v19, 0LL);
  }
  v20.fields.r = r;
  v20.fields.g = g;
  v20.fields.b = b;
  v20.fields.a = a;
  BattleCommandComponent__SetCommandCodeActive(this, v20, 0, v13);
  v21.fields.r = r;
  v21.fields.g = g;
  v21.fields.b = b;
  v21.fields.a = a;
  BattleCommandComponent__SetCommandAssistActive(this, v21, 0, v14);
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(powerUpCardIcon, 0LL, 0LL) )
  {
    v9 = (UIWidget_o *)this->fields.powerUpCardIcon;
    if ( v9 )
    {
      v22.fields.b = b;
      v22.fields.a = a;
      v22.fields.r = r;
      v22.fields.g = g;
      UIWidget__set_color(v9, v22, 0LL);
      return;
    }
LABEL_34:
    sub_B0D97C(v9);
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
  float g; // s10
  float r; // s11
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *assistChargeTurnLabel; // x21
  UnityEngine_Object_o *assistRemainingTurnLabel; // x21
  void *buffData; // x0
  UnityEngine_Object_o *assistSprite; // x21
  struct BattleCommandData_o *data; // x8
  struct BattleServantData_o *svtData; // x8
  int v18; // w8
  unsigned int v19; // w9
  _DWORD *v20; // x21
  struct BattleCommandData_o *v21; // x10
  int32_t v22; // w21
  int v23; // t1
  UIWidget_o *v24; // x22
  int v25; // s0
  UILabel_o *v29; // x22
  UILabel_o *v30; // x21
  __int64 v31; // x0
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v35; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4211476 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, isFirst);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_2401/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, v11);
    byte_4211476 = 1;
  }
  if ( this->fields.isInBattle )
  {
    v35.fields.r = 0.0;
    v35.fields.g = 0.0;
    v35.fields.b = 0.0;
    v35.fields.a = 0.0;
    v32.fields.r = r;
    v32.fields.g = g;
    v32.fields.b = b;
    v32.fields.a = a;
    if ( UnityEngine_Color__op_Equality(v32, v35, 0LL) )
    {
      white = UnityEngine_Color__get_white(0LL);
      r = white.fields.r;
      g = white.fields.g;
      b = white.fields.b;
      a = white.fields.a;
    }
    assistChargeTurnLabel = (UnityEngine_Object_o *)this->fields.assistChargeTurnLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(assistChargeTurnLabel, 0LL, 0LL) )
    {
      assistRemainingTurnLabel = (UnityEngine_Object_o *)this->fields.assistRemainingTurnLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(assistRemainingTurnLabel, 0LL, 0LL) )
      {
        buffData = this->fields.assistChargeTurnLabel;
        if ( !buffData )
          goto LABEL_52;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0LL);
        buffData = this->fields.assistRemainingTurnLabel;
        if ( !buffData )
          goto LABEL_52;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0LL);
        assistSprite = (UnityEngine_Object_o *)this->fields.assistSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(assistSprite, 0LL, 0LL) )
        {
          buffData = this->fields.assistSprite;
          if ( !buffData )
            goto LABEL_52;
          v34.fields.r = r;
          v34.fields.g = g;
          v34.fields.b = b;
          v34.fields.a = a;
          UIWidget__set_color((UIWidget_o *)buffData, v34, 0LL);
          data = this->fields.data;
          if ( data )
          {
            if ( data->fields.commandAssistId >= 1 )
            {
              svtData = this->fields.svtData;
              if ( svtData )
              {
                buffData = svtData->fields.buffData;
                if ( !buffData )
                  goto LABEL_52;
                buffData = BattleBuffData__getPassiveList((BattleBuffData_o *)buffData, 1, 0LL);
                if ( !buffData )
                  goto LABEL_52;
                v18 = *((_DWORD *)buffData + 6);
                if ( v18 >= 1 )
                {
                  v19 = 0;
                  while ( 1 )
                  {
                    if ( v19 >= v18 )
                    {
                      v31 = sub_B0D9A8(buffData);
                      sub_B0D948(v31, 0LL);
                    }
                    v20 = (_DWORD *)*((_QWORD *)buffData + (int)v19 + 4);
                    if ( !v20 )
                      goto LABEL_52;
                    v21 = this->fields.data;
                    if ( !v21 )
                      goto LABEL_52;
                    if ( v20[87] == v21->fields.commandAssistId && v20[88] == v21->fields.servantCardIdsIndex )
                      break;
                    if ( (int)++v19 >= v18 )
                      goto LABEL_45;
                  }
                  v23 = v20[28];
                  v22 = (_DWORD)v20 + 112;
                  if ( v23 >= 1 )
                  {
                    v24 = (UIWidget_o *)this->fields.assistSprite;
                    *(UnityEngine_Color_o *)&v25 = UnityEngine_Color__get_gray(0LL);
                    if ( !v24 )
                      goto LABEL_52;
                    UIWidget__set_color(v24, *(UnityEngine_Color_o *)&v25, 0LL);
                    buffData = this->fields.assistChargeTurnLabel;
                    if ( !buffData )
                      goto LABEL_52;
                    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                    buffData = this->fields.assistRemainingTurnLabel;
                    if ( !buffData )
                      goto LABEL_52;
                    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                    v29 = this->fields.assistChargeTurnLabel;
                    buffData = System_Int32__ToString(v22, 0LL);
                    if ( !v29 )
                      goto LABEL_52;
                    UILabel__set_text(v29, (System_String_o *)buffData, 0LL);
                    v30 = this->fields.assistRemainingTurnLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    buffData = LocalizationManager__Get((System_String_o *)StringLiteral_2401/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, 0LL);
                    if ( !v30 )
                      goto LABEL_52;
                    UILabel__set_text(v30, (System_String_o *)buffData, 0LL);
                  }
                }
LABEL_45:
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
LABEL_52:
                  sub_B0D97C(buffData);
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
  UnityEngine_Behaviour_o *Master_WarQuestSelectionMaster; // x0
  BattleData_c *v11; // x0
  int32_t EventId; // w21
  UISprite_o *v13; // x20
  System_String_o *v14; // x21

  if ( (byte_421147F & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&commandAssistId);
    sub_B0D8A4(&BattleData_TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    byte_421147F = 1;
  }
  assistSprite = (UnityEngine_Object_o *)this->fields.assistSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(assistSprite, 0LL, 0LL) )
  {
    Master_WarQuestSelectionMaster = (UnityEngine_Behaviour_o *)this->fields.assistSprite;
    if ( Master_WarQuestSelectionMaster )
    {
      if ( commandAssistId <= 0 )
        goto LABEL_23;
      UnityEngine_Behaviour__set_enabled(Master_WarQuestSelectionMaster, 1, 0LL);
      v11 = BattleData_TypeInfo;
      if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      EventId = BattleData__GetEventId((const MethodInfo *)v11);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (UnityEngine_Behaviour_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (UnityEngine_Behaviour_o *)EventCommandAssistMaster__GetCurrentEntity(
                                                                      (EventCommandAssistMaster_o *)Master_WarQuestSelectionMaster,
                                                                      EventId,
                                                                      commandAssistId,
                                                                      -1,
                                                                      0,
                                                                      0LL);
        if ( Master_WarQuestSelectionMaster )
        {
          v13 = this->fields.assistSprite;
          v14 = System_Int32__ToString((int)Master_WarQuestSelectionMaster + 48, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          if ( AtlasManager__SetEventSprite(v13, v14, 0LL) )
            return;
          Master_WarQuestSelectionMaster = (UnityEngine_Behaviour_o *)this->fields.assistSprite;
          if ( Master_WarQuestSelectionMaster )
          {
LABEL_23:
            UnityEngine_Behaviour__set_enabled(Master_WarQuestSelectionMaster, 0, 0LL);
            return;
          }
        }
      }
    }
    sub_B0D97C(Master_WarQuestSelectionMaster);
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
  float g; // s10
  float r; // s11
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *chargeTurnLabel; // x21
  UnityEngine_Object_o *remainingTurnLabel; // x21
  void *buffData; // x0
  UnityEngine_Object_o *codeTexture; // x21
  UnityEngine_Object_o *codeSprite; // x21
  struct BattleCommandData_o *data; // x8
  struct BattleServantData_o *svtData; // x8
  int v19; // w8
  unsigned int v20; // w9
  __int64 v21; // x21
  struct BattleCommandData_o *v22; // x10
  int32_t v23; // w21
  int v24; // t1
  UIWidget_o *v25; // x22
  int v26; // s0
  UILabel_o *v30; // x22
  UILabel_o *v31; // x21
  __int64 v32; // x0
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4211475 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, isFirst);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_2401/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, v11);
    byte_4211475 = 1;
  }
  if ( this->fields.isInBattle )
  {
    v36.fields.r = 0.0;
    v36.fields.g = 0.0;
    v36.fields.b = 0.0;
    v36.fields.a = 0.0;
    v33.fields.r = r;
    v33.fields.g = g;
    v33.fields.b = b;
    v33.fields.a = a;
    if ( UnityEngine_Color__op_Equality(v33, v36, 0LL) )
    {
      white = UnityEngine_Color__get_white(0LL);
      r = white.fields.r;
      g = white.fields.g;
      b = white.fields.b;
      a = white.fields.a;
    }
    chargeTurnLabel = (UnityEngine_Object_o *)this->fields.chargeTurnLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(chargeTurnLabel, 0LL, 0LL) )
    {
      remainingTurnLabel = (UnityEngine_Object_o *)this->fields.remainingTurnLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(remainingTurnLabel, 0LL, 0LL) )
      {
        buffData = this->fields.chargeTurnLabel;
        if ( !buffData )
          goto LABEL_61;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0LL);
        buffData = this->fields.remainingTurnLabel;
        if ( !buffData )
          goto LABEL_61;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 0, 0LL);
        if ( this->fields.isCodeTextureView )
        {
          codeTexture = (UnityEngine_Object_o *)this->fields.codeTexture;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(codeTexture, 0LL, 0LL) )
            return;
          buffData = this->fields.codeTexture;
          if ( !buffData )
            goto LABEL_61;
        }
        else
        {
          codeSprite = (UnityEngine_Object_o *)this->fields.codeSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(codeSprite, 0LL, 0LL) )
            return;
          buffData = this->fields.codeSprite;
          if ( !buffData )
            goto LABEL_61;
        }
        v35.fields.r = r;
        v35.fields.g = g;
        v35.fields.b = b;
        v35.fields.a = a;
        UIWidget__set_color((UIWidget_o *)buffData, v35, 0LL);
        data = this->fields.data;
        if ( data )
        {
          if ( data->fields.userCommandCodeId >= 1 )
          {
            svtData = this->fields.svtData;
            if ( svtData )
            {
              buffData = svtData->fields.buffData;
              if ( !buffData )
                goto LABEL_61;
              buffData = BattleBuffData__getPassiveList((BattleBuffData_o *)buffData, 1, 0LL);
              if ( !buffData )
                goto LABEL_61;
              v19 = *((_DWORD *)buffData + 6);
              if ( v19 >= 1 )
              {
                v20 = 0;
                while ( 1 )
                {
                  if ( v20 >= v19 )
                  {
                    v32 = sub_B0D9A8(buffData);
                    sub_B0D948(v32, 0LL);
                  }
                  v21 = *((_QWORD *)buffData + (int)v20 + 4);
                  if ( !v21 )
                    goto LABEL_61;
                  v22 = this->fields.data;
                  if ( !v22 )
                    goto LABEL_61;
                  if ( *(_QWORD *)(v21 + 88) == v22->fields.userCommandCodeId )
                    break;
                  if ( (int)++v20 >= v19 )
                    goto LABEL_54;
                }
                v24 = *(_DWORD *)(v21 + 112);
                v23 = v21 + 112;
                if ( v24 >= 1 )
                {
                  if ( this->fields.isCodeTextureView )
                    v25 = (UIWidget_o *)this->fields.codeTexture;
                  else
                    v25 = (UIWidget_o *)this->fields.codeSprite;
                  *(UnityEngine_Color_o *)&v26 = UnityEngine_Color__get_gray(0LL);
                  if ( !v25 )
                    goto LABEL_61;
                  UIWidget__set_color(v25, *(UnityEngine_Color_o *)&v26, 0LL);
                  buffData = this->fields.chargeTurnLabel;
                  if ( !buffData )
                    goto LABEL_61;
                  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                  buffData = this->fields.remainingTurnLabel;
                  if ( !buffData )
                    goto LABEL_61;
                  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)buffData, 1, 0LL);
                  v30 = this->fields.chargeTurnLabel;
                  buffData = System_Int32__ToString(v23, 0LL);
                  if ( !v30 )
                    goto LABEL_61;
                  UILabel__set_text(v30, (System_String_o *)buffData, 0LL);
                  v31 = this->fields.remainingTurnLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  buffData = LocalizationManager__Get((System_String_o *)StringLiteral_2401/*"BATTLE_COMMAND_CODE_RECHARGE_TURN"*/, 0LL);
                  if ( !v31 )
                    goto LABEL_61;
                  UILabel__set_text(v31, (System_String_o *)buffData, 0LL);
                }
              }
LABEL_54:
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
LABEL_61:
                sub_B0D97C(buffData);
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
  UnityEngine_Behaviour_o *codeTexture; // x0
  struct UITexture_o **p_codeTexture; // x19
  UITexture_o *v13; // x21
  UnityEngine_Object_o *Manager__loadCommandCodeTexture; // x20
  UserServantEntity_o *Entity; // x0
  __int64 v16; // x20
  __int64 v17; // x21
  int32_t v18; // w20
  UISprite_o *codeSprite; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_421147D & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, userCommandCodeId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_421147D = 1;
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
    goto LABEL_32;
  }
  BattleCommandComponent__SwitchChangeObjPos(this, 1, method);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
  if ( !codeTexture )
    goto LABEL_32;
  if ( this->fields.isCodeTextureView )
  {
    UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0LL);
    codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
    if ( codeTexture )
    {
      p_codeTexture = &this->fields.codeTexture;
      UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
      v13 = *p_codeTexture;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadCommandCodeTexture = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCodeTexture(
                                                                  v13,
                                                                  userCommandCodeId,
                                                                  0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCodeTexture, 0LL, 0LL) )
      {
        *p_codeTexture = (struct UITexture_o *)Manager__loadCommandCodeTexture;
        sub_B0D840(p_codeTexture, Manager__loadCommandCodeTexture);
      }
      return;
    }
LABEL_32:
    sub_B0D97C(codeTexture);
  }
  UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
  if ( !codeTexture )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0LL);
  codeTexture = (UnityEngine_Behaviour_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !codeTexture )
    goto LABEL_32;
  codeTexture = (UnityEngine_Behaviour_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)codeTexture,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !codeTexture )
    goto LABEL_32;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)codeTexture,
             userCommandCodeId,
             (const MethodInfo_2669DFC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  if ( Entity )
  {
    v17 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v20.fields.currentCryptoKey = v17;
    *(_QWORD *)&v20.fields.fakeValue = v16;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v20, 0LL);
  }
  else
  {
    v18 = -1;
  }
  codeSprite = this->fields.codeSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommandCodeMiniImage(codeSprite, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetCommandCodeView_18478040(
        BattleCommandComponent_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Behaviour_o *codeTexture; // x0
  struct UITexture_o **p_codeTexture; // x20
  UITexture_o *v9; // x21
  UnityEngine_Object_o *Manager__loadCommandCodeTexture_26508140; // x19
  UISprite_o *codeSprite; // x20

  if ( (byte_421147E & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v6);
    byte_421147E = 1;
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
LABEL_24:
        UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
        return;
      }
    }
LABEL_25:
    sub_B0D97C(codeTexture);
  }
  BattleCommandComponent__SwitchChangeObjPos(this, 1, method);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
  if ( !codeTexture )
    goto LABEL_25;
  if ( this->fields.isCodeTextureView )
  {
    UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0LL);
    codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
    if ( codeTexture )
    {
      p_codeTexture = &this->fields.codeTexture;
      UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
      v9 = *p_codeTexture;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadCommandCodeTexture_26508140 = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCodeTexture_26508140(
                                                                           v9,
                                                                           commandCodeId,
                                                                           0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCodeTexture_26508140, 0LL, 0LL) )
      {
        *p_codeTexture = (struct UITexture_o *)Manager__loadCommandCodeTexture_26508140;
        sub_B0D840(p_codeTexture, Manager__loadCommandCodeTexture_26508140);
        return;
      }
      codeTexture = (UnityEngine_Behaviour_o *)*p_codeTexture;
      if ( *p_codeTexture )
        goto LABEL_24;
    }
    goto LABEL_25;
  }
  UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
  codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
  if ( !codeTexture )
    goto LABEL_25;
  UnityEngine_Behaviour__set_enabled(codeTexture, 1, 0LL);
  codeSprite = this->fields.codeSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
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
  __int64 v10; // x0

  v6 = this;
  if ( (byte_4211499 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&effectType);
    byte_4211499 = 1;
  }
  effectobj = v6->fields.effectobj;
  if ( !effectobj )
    goto LABEL_14;
  if ( effectobj->max_length <= effectType )
  {
LABEL_15:
    v10 = sub_B0D9A8(this);
    sub_B0D948(v10, 0LL);
  }
  v8 = (UnityEngine_Object_o *)effectobj->m_Items[effectType];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v6->fields.effectobj;
    if ( !v9 )
      goto LABEL_14;
    if ( v9->max_length > effectType )
    {
      this = (BattleCommandComponent_o *)v9->m_Items[effectType];
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, active, 0LL);
        return;
      }
LABEL_14:
      sub_B0D97C(this);
    }
    goto LABEL_15;
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

  if ( (byte_421148B & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_19429/*"icon_sleep_2"*/, v4);
    byte_421148B = 1;
  }
  donotPermanentSleep = (UnityEngine_Object_o *)this->fields.donotPermanentSleep;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(donotPermanentSleep, 0LL, 0LL) )
  {
    v6 = this->fields.donotPermanentSleep;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v6, (System_String_o *)StringLiteral_19429/*"icon_sleep_2"*/, 0LL);
  }
}


void __fastcall BattleCommandComponent__SetDonotSleepSprite(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *donotsleepSprite; // x20
  UISprite_o *v6; // x19

  if ( (byte_421148A & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_19428/*"icon_sleep"*/, v4);
    byte_421148A = 1;
  }
  donotsleepSprite = (UnityEngine_Object_o *)this->fields.donotsleepSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(donotsleepSprite, 0LL, 0LL) )
  {
    v6 = this->fields.donotsleepSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v6, (System_String_o *)StringLiteral_19428/*"icon_sleep"*/, 0LL);
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
    sub_B0D97C(chargeTurnLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)chargeTurnLabel, active, 0LL);
}


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
    sub_B0D97C(assistChargeTurnLabel);
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
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4211483 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isLock);
    byte_4211483 = 1;
  }
  LockInfo = (UnityEngine_Object_o *)this->fields.LockInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(LockInfo, 0LL, 0LL) )
  {
    v6 = this->fields.LockInfo;
    if ( !v6 )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(v6, isLock, 0LL);
  }
}


void __fastcall BattleCommandComponent__SetNobleGaugeEffect(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *effect,
        const MethodInfo *method)
{
  this->fields.nobleGaugeEffect = effect;
  sub_B0D840(&this->fields.nobleGaugeEffect, effect);
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
  UISprite_o *v12; // x23
  UnityEngine_Component_o *v13; // x8
  char v14; // w19
  bool v15; // w1

  if ( (byte_4211485 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&powerUpValue);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_4211485 = 1;
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(powerUpCardIcon, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    v12 = this->fields.powerUpCardIcon;
    if ( powerUpValue <= 0 )
    {
      if ( v12 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.powerUpCardIcon, 0LL);
        if ( gameObject )
        {
          v15 = 0;
          goto LABEL_17;
        }
      }
    }
    else
    {
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetCommandCardIconImage(
                                                 v12,
                                                 powerUpValue,
                                                 iconType,
                                                 isBright,
                                                 0LL);
      v13 = (UnityEngine_Component_o *)this->fields.powerUpCardIcon;
      if ( v13 )
      {
        v14 = (char)gameObject;
        gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
        if ( gameObject )
        {
          v15 = v14 & 1;
LABEL_17:
          UnityEngine_GameObject__SetActive(gameObject, v15, 0LL);
          return;
        }
      }
    }
    sub_B0D97C(gameObject);
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
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *v9; // x20
  Il2CppObject *v10; // x0
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4211484 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&powerUpValue);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_702/*"+{0:#,0}"*/, v6);
    byte_4211484 = 1;
  }
  powerUpCardValue = (UnityEngine_Object_o *)this->fields.powerUpCardValue;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(powerUpCardValue, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.powerUpCardValue;
    if ( !gameObject )
      goto LABEL_14;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_14;
    if ( powerUpValue <= 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      return;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v9 = this->fields.powerUpCardValue;
    v11 = powerUpValue;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
    gameObject = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_702/*"+{0:#,0}"*/, v10, 0LL);
    if ( !v9 )
LABEL_14:
      sub_B0D97C(gameObject);
    UILabel__set_text(v9, (System_String_o *)gameObject, 0LL);
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
  __int64 v23; // x1
  __int64 v24; // x1
  BattleCommandComponent___c__DisplayClass221_0_o *v25; // x24
  void *Index; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v30; // x25
  __int64 v31; // x1
  __int64 v32; // x2
  int32_t v33; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x8
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v36; // x21
  BattleCommandComponent_CardBuffData_o *v37; // x8
  int32_t v38; // w24
  BattleCommandComponent_CardBuffData_o *v39; // x23
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v40; // x20
  struct BattleCommandComponent___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__221_1; // x21
  Il2CppObject *v43; // x22
  struct BattleCommandComponent___c_StaticFields *v44; // x0
  const MethodInfo *v45; // x2
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v46; // x8

  if ( (byte_421148E & 1) == 0 )
  {
    sub_B0D8A4(&BattleCommandComponent_CardBuffData_TypeInfo, *(_QWORD *)&buffType);
    sub_B0D8A4(&Method_System_Comparison_BattleCommandComponent_CardBuffData___ctor__, v11);
    sub_B0D8A4(&System_Comparison_BattleCommandComponent_CardBuffData__TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__RemoveAt__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Sort__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__, v18);
    sub_B0D8A4(&Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__, v19);
    sub_B0D8A4(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo, v20);
    sub_B0D8A4(&Method_BattleCommandComponent___c__SetSpecialCommandCardBuffData_b__221_1__, v21);
    sub_B0D8A4(&Method_BattleCommandComponent___c__DisplayClass221_0__SetSpecialCommandCardBuffData_b__0__, v22);
    sub_B0D8A4(&BattleCommandComponent___c__DisplayClass221_0_TypeInfo, v23);
    sub_B0D8A4(&BattleCommandComponent___c_TypeInfo, v24);
    byte_421148E = 1;
  }
  v25 = (BattleCommandComponent___c__DisplayClass221_0_o *)sub_B0D974(
                                                             BattleCommandComponent___c__DisplayClass221_0_TypeInfo,
                                                             *(_QWORD *)&buffType,
                                                             active);
  BattleCommandComponent___c__DisplayClass221_0___ctor(v25, 0LL);
  if ( !v25 )
    goto LABEL_32;
  v25->fields.buffType = buffType;
  specialCardBuffList = this->fields.specialCardBuffList;
  v30 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo,
                                                                   v27,
                                                                   v28);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v30,
    (Il2CppObject *)v25,
    Method_BattleCommandComponent___c__DisplayClass221_0__SetSpecialCommandCardBuffData_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__);
  if ( !specialCardBuffList )
    goto LABEL_32;
  Index = (void *)System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                    (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)specialCardBuffList,
                    (System_Predicate_T__o *)v30,
                    (const MethodInfo_2FC6194 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  v33 = (int)Index;
  if ( active )
  {
    v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.specialCardBuffList;
    if ( ((unsigned int)Index & 0x80000000) == 0 )
    {
      if ( v34 )
      {
        if ( v34->fields._size <= (unsigned int)Index )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v35 = v34->fields._items->m_Items[(int)Index];
        if ( v35 )
        {
          v35->fields.missionConditionDetailId = turn;
          v36 = this->fields.specialCardBuffList;
          if ( v36 )
          {
            if ( v36->fields._size <= (unsigned int)Index )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v37 = v36->fields._items->m_Items[(int)Index];
            if ( v37 )
            {
              v37->fields.addOrder = addOrder;
              goto LABEL_21;
            }
          }
        }
      }
LABEL_32:
      sub_B0D97C(Index);
    }
    v38 = v25->fields.buffType;
    v39 = (BattleCommandComponent_CardBuffData_o *)sub_B0D974(BattleCommandComponent_CardBuffData_TypeInfo, v31, v32);
    BattleCommandComponent_CardBuffData___ctor(v39, v38, turn, addOrder, 0LL);
    if ( !v34 )
      goto LABEL_32;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v34,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Add__);
  }
  else if ( ((unsigned int)Index & 0x80000000) == 0 )
  {
    Index = this->fields.specialCardBuffList;
    if ( !Index )
      goto LABEL_32;
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)Index,
      v33,
      (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__RemoveAt__);
  }
LABEL_21:
  v40 = this->fields.specialCardBuffList;
  Index = BattleCommandComponent___c_TypeInfo;
  if ( (BYTE3(BattleCommandComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
    Index = BattleCommandComponent___c_TypeInfo;
  }
  static_fields = (struct BattleCommandComponent___c_StaticFields *)*((_QWORD *)Index + 23);
  _9__221_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__221_1;
  if ( !_9__221_1 )
  {
    if ( (*((_BYTE *)Index + 307) & 4) != 0 && !*((_DWORD *)Index + 56) )
    {
      j_il2cpp_runtime_class_init_0(Index);
      static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    }
    v43 = (Il2CppObject *)static_fields->__9;
    _9__221_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                            System_Comparison_BattleCommandComponent_CardBuffData__TypeInfo,
                                                                            v31,
                                                                            v32);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__221_1,
      v43,
      Method_BattleCommandComponent___c__SetSpecialCommandCardBuffData_b__221_1__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_BattleCommandComponent_CardBuffData___ctor__);
    v44 = BattleCommandComponent___c_TypeInfo->static_fields;
    v44->__9__221_1 = (struct System_Comparison_BattleCommandComponent_CardBuffData__o *)_9__221_1;
    sub_B0D840(&v44->__9__221_1, _9__221_1);
  }
  if ( !v40 )
    goto LABEL_32;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v40,
    (System_Comparison_T__o *)_9__221_1,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Sort__);
  v46 = this->fields.specialCardBuffList;
  if ( !v46 )
    goto LABEL_32;
  BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, v46->fields._size > 0, v45);
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
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *v13; // x20
  System_String_o *v14; // x21
  Il2CppObject *v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4211482 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, active);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_2440/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_REST_TURN"*/, v9);
    byte_4211482 = 1;
  }
  nowTreasureDeviceTypeImage = (UnityEngine_Object_o *)this->fields.nowTreasureDeviceTypeImage;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(nowTreasureDeviceTypeImage, 0LL, 0LL) )
  {
    restTreasureDeviceChangeTurnLabel = (UnityEngine_Object_o *)this->fields.restTreasureDeviceChangeTurnLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(restTreasureDeviceChangeTurnLabel, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.nowTreasureDeviceTypeImage;
      if ( !gameObject )
        goto LABEL_20;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_20;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, active, 0LL);
      if ( !active )
        return;
      v13 = this->fields.restTreasureDeviceChangeTurnLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2440/*"BATTLE_DIALOG_TREASURE_DEVICE_TYPE_CHANGE_REST_TURN"*/, 0LL);
      v16 = turn;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
      gameObject = (UnityEngine_Component_o *)System_String__Format(v14, v15, 0LL);
      if ( !v13 )
LABEL_20:
        sub_B0D97C(gameObject);
      UILabel__set_text(v13, (System_String_o *)gameObject, 0LL);
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
  struct UISprite_o *v7; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *v9; // x19

  if ( (byte_4211487 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4211487 = 1;
  }
  defaultTdTypeImageAtlas = (UnityEngine_Object_o *)this->fields.defaultTdTypeImageAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_defaultTdTypeImageAtlas = &this->fields.defaultTdTypeImageAtlas;
  if ( UnityEngine_Object__op_Equality(defaultTdTypeImageAtlas, 0LL, 0LL) )
  {
    nowTreasureDeviceTypeImage = (UnityEngine_Object_o *)this->fields.nowTreasureDeviceTypeImage;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v6 = UnityEngine_Object__op_Inequality(nowTreasureDeviceTypeImage, 0LL, 0LL);
    if ( v6 )
    {
      v7 = this->fields.nowTreasureDeviceTypeImage;
      if ( !v7 )
        sub_B0D97C(v6);
      mAtlas = v7->fields.mAtlas;
      *p_defaultTdTypeImageAtlas = mAtlas;
      sub_B0D840(&this->fields.defaultTdTypeImageAtlas, mAtlas);
    }
  }
  v9 = (UnityEngine_Object_o *)*p_defaultTdTypeImageAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x2
  struct DrumRollLabel_o *v11; // x21
  DrumRollLabel_o *v12; // x0
  int32_t v13; // w1
  DrumRollLabel_CompleteEventHandler_o *v14; // x3
  DrumRollLabel_CompleteEventHandler_o *v15; // x22

  if ( (byte_4211466 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleCommandComponent_compCriticallabel__, *(_QWORD *)&count);
    sub_B0D8A4(&DrumRollLabel_CompleteEventHandler_TypeInfo, v7);
    byte_4211466 = 1;
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
        (v11 = this->fields.criticallabel) == 0LL) )
  {
LABEL_12:
    sub_B0D97C(criticallabel);
  }
  if ( v11->fields.nowvalue <= count )
  {
    v15 = (DrumRollLabel_CompleteEventHandler_o *)sub_B0D974(DrumRollLabel_CompleteEventHandler_TypeInfo, v9, v10);
    DrumRollLabel_CompleteEventHandler___ctor(
      v15,
      (Il2CppObject *)this,
      Method_BattleCommandComponent_compCriticallabel__,
      0LL);
    v12 = v11;
    v13 = count;
    v14 = v15;
  }
  else
  {
    v12 = this->fields.criticallabel;
    v13 = count;
    v14 = 0LL;
  }
  DrumRollLabel__changeParam(v12, v13, 1, v14, 0.0, 0LL);
}


void __fastcall BattleCommandComponent__SetUnusableShortageStarSprite(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *unusableShortageStarSprite; // x20
  UISprite_o *v6; // x19

  if ( (byte_4211489 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_19439/*"icon_unusable_star"*/, v4);
    byte_4211489 = 1;
  }
  unusableShortageStarSprite = (UnityEngine_Object_o *)this->fields.unusableShortageStarSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(unusableShortageStarSprite, 0LL, 0LL) )
  {
    v6 = this->fields.unusableShortageStarSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v6, (System_String_o *)StringLiteral_19439/*"icon_unusable_star"*/, 0LL);
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
  struct UnityEngine_Transform_array *stateCodePoints; // x8
  __int64 v8; // x9
  struct UnityEngine_Transform_array *stateArrowPoints; // x10
  UnityEngine_Transform_o *v10; // x21
  int v11; // s0
  __int64 v14; // x8
  struct UnityEngine_Transform_array *v15; // x8
  UnityEngine_Transform_o *v16; // x20
  int v17; // s0
  struct UnityEngine_Transform_array *v20; // x9
  struct UnityEngine_GameObject_array *addObjectList; // x10
  UnityEngine_Transform_o *v22; // x20
  UnityEngine_Object_o *v23; // x21
  struct UnityEngine_GameObject_array *v24; // x8
  UnityEngine_Transform_o *v25; // x21
  int v26; // s0
  struct UnityEngine_GameObject_array *v29; // x8
  UnityEngine_Object_o *v30; // x21
  struct UnityEngine_GameObject_array *v31; // x8
  UnityEngine_Transform_o *v32; // x19
  int v33; // s0
  __int64 v36; // x0

  if ( (byte_4211480 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isUp);
    byte_4211480 = 1;
  }
  codeObject = (UnityEngine_Object_o *)this->fields.codeObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  friendIcon = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(codeObject, 0LL, 0LL);
  if ( ((unsigned __int8)friendIcon & 1) == 0 )
  {
    stateCodePoints = this->fields.stateCodePoints;
    if ( stateCodePoints )
    {
      v8 = *(_QWORD *)&stateCodePoints->max_length;
      if ( v8 )
      {
        stateArrowPoints = this->fields.stateArrowPoints;
        if ( stateArrowPoints )
        {
          if ( *(_QWORD *)&stateArrowPoints->max_length )
          {
            if ( !(_DWORD)v8 )
              goto LABEL_52;
            friendIcon = stateCodePoints->m_Items[0];
            if ( !friendIcon )
              goto LABEL_51;
            v10 = this->fields.codeObject;
            *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_position(friendIcon, 0LL);
            if ( !v10 )
              goto LABEL_51;
            UnityEngine_Transform__set_position(v10, *(UnityEngine_Vector3_o *)&v11, 0LL);
            v14 = 0LL;
            if ( isUp )
            {
              friendIcon = (UnityEngine_Transform_o *)this->fields.friendIcon;
              if ( !friendIcon )
                goto LABEL_51;
              friendIcon = (UnityEngine_Transform_o *)UnityEngine_Behaviour__get_enabled(
                                                        (UnityEngine_Behaviour_o *)friendIcon,
                                                        0LL);
              if ( ((unsigned __int8)friendIcon & 1) != 0 )
              {
                v15 = this->fields.stateCodePoints;
                if ( !v15 )
                  goto LABEL_51;
                if ( v15->max_length <= 1 )
                  goto LABEL_52;
                friendIcon = v15->m_Items[1];
                if ( !friendIcon )
                  goto LABEL_51;
                v16 = this->fields.codeObject;
                *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__get_position(friendIcon, 0LL);
                if ( !v16 )
                  goto LABEL_51;
                UnityEngine_Transform__set_position(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
                v14 = 2LL;
              }
              else
              {
                friendIcon = (UnityEngine_Transform_o *)this->fields.friendIcon;
                if ( !friendIcon )
                  goto LABEL_51;
                friendIcon = (UnityEngine_Transform_o *)UnityEngine_Behaviour__get_enabled(
                                                          (UnityEngine_Behaviour_o *)friendIcon,
                                                          0LL);
                v14 = ((unsigned __int8)friendIcon & 1) == 0;
              }
            }
            v20 = this->fields.stateArrowPoints;
            if ( !v20 )
              goto LABEL_51;
            if ( (unsigned int)v14 >= v20->max_length )
              goto LABEL_52;
            addObjectList = this->fields.addObjectList;
            if ( !addObjectList )
              goto LABEL_51;
            if ( addObjectList->max_length <= 1 )
              goto LABEL_52;
            v22 = v20->m_Items[v14];
            v23 = (UnityEngine_Object_o *)addObjectList->m_Items[1];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            friendIcon = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
            if ( ((unsigned __int8)friendIcon & 1) != 0 )
            {
              v24 = this->fields.addObjectList;
              if ( !v24 )
                goto LABEL_51;
              if ( v24->max_length <= 1 )
                goto LABEL_52;
              friendIcon = (UnityEngine_Transform_o *)v24->m_Items[1];
              if ( !friendIcon )
                goto LABEL_51;
              friendIcon = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)friendIcon, 0LL);
              if ( !v22 )
                goto LABEL_51;
              v25 = friendIcon;
              *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_position(v22, 0LL);
              if ( !v25 )
                goto LABEL_51;
              UnityEngine_Transform__set_position(v25, *(UnityEngine_Vector3_o *)&v26, 0LL);
            }
            v29 = this->fields.addObjectList;
            if ( !v29 )
              goto LABEL_51;
            if ( !v29->max_length )
            {
LABEL_52:
              v36 = sub_B0D9A8(friendIcon);
              sub_B0D948(v36, 0LL);
            }
            v30 = (UnityEngine_Object_o *)v29->m_Items[0];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            friendIcon = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
            if ( ((unsigned __int8)friendIcon & 1) != 0 )
            {
              v31 = this->fields.addObjectList;
              if ( !v31 )
                goto LABEL_51;
              if ( v31->max_length )
              {
                friendIcon = (UnityEngine_Transform_o *)v31->m_Items[0];
                if ( friendIcon )
                {
                  friendIcon = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)friendIcon, 0LL);
                  if ( v22 )
                  {
                    v32 = friendIcon;
                    *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Transform__get_position(v22, 0LL);
                    if ( v32 )
                    {
                      UnityEngine_Transform__set_position(v32, *(UnityEngine_Vector3_o *)&v33, 0LL);
                      return;
                    }
                  }
                }
LABEL_51:
                sub_B0D97C(friendIcon);
              }
              goto LABEL_52;
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
  struct BattleCommandData_o *data; // x8
  BattleBuffData_o *battleBuffData; // x0
  BattleBuffData_BuffData_array *AllConnectedCommandCardBuff; // x0
  BattleBuffData_BuffData_array *v15; // x20
  DataManager_o *Instance; // x0
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x21
  __int64 v19; // x24
  BattleBuffData_BuffData_o *v20; // x22
  System_String_o *masterDataBytes; // x22
  System_String_o *v22; // x22
  System_String_o *v23; // x23
  UnityEngine_Object_o *Manager__loadBattleCommonEffect; // x22
  UnityEngine_Transform_o *objectRoot; // x23
  System_Xml_Schema_XmlSchemaObject_o *v26; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x23
  struct UISprite_o *text; // x8
  struct UISprite_o *bg; // x9
  struct BattleCommandData_o *v30; // x8
  struct BattleCommandData_o *v31; // x8
  __int64 v32; // x0
  System_Xml_XmlQualifiedName_o *key; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *path; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4211495 & 1) == 0 )
  {
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EffectMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CardEffectComponent___, v7);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4211495 = 1;
  }
  key = 0LL;
  path = 0LL;
  BattleCommandComponent__ClearCardEffect(this, method);
  data = this->fields.data;
  if ( data )
  {
    battleBuffData = data->fields.battleBuffData;
    if ( battleBuffData )
    {
      AllConnectedCommandCardBuff = BattleBuffData__GetAllConnectedCommandCardBuff(battleBuffData, 0LL);
      if ( AllConnectedCommandCardBuff )
      {
        v15 = AllConnectedCommandCardBuff;
        if ( *(_QWORD *)&AllConnectedCommandCardBuff->max_length )
        {
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_48;
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EffectMaster___);
          max_length = v15->max_length;
          if ( max_length >= 1 )
          {
            v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
            v19 = 0LL;
            while ( 1 )
            {
              if ( (unsigned int)v19 >= max_length )
              {
                v32 = sub_B0D9A8(Instance);
                sub_B0D948(v32, 0LL);
              }
              v20 = v15->m_Items[v19];
              if ( !v20 )
                break;
              if ( v20->fields.cardEffectId >= 1 )
              {
                Instance = (DataManager_o *)BattleBuffData_BuffData__isEnableCommandCardBuff(
                                              v15->m_Items[v19],
                                              this->fields.data,
                                              0LL);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                  goto LABEL_14;
                Instance = (DataManager_o *)BattleBuffData_BuffData__isCommandCodeBuff(v20, 0LL);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  v30 = this->fields.data;
                  if ( !v30 )
                    break;
                  if ( v20->fields.userCommandCodeId == v30->fields.userCommandCodeId )
                    goto LABEL_14;
                }
                Instance = (DataManager_o *)BattleBuffData_BuffData__IsCommandAssistBuff(v20, 0LL);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  v31 = this->fields.data;
                  if ( !v31 )
                    break;
                  if ( v20->fields.commandAssistId == v31->fields.commandAssistId
                    && v20->fields.cardIndex == v31->fields.servantCardIdsIndex )
                  {
LABEL_14:
                    if ( !v18 )
                      break;
                    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  v18,
                                                  v20->fields.cardEffectId,
                                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
                    if ( Instance )
                    {
                      masterDataBytes = (System_String_o *)Instance->fields.masterDataBytes;
                      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
                      }
                      BattleEffectUtility__GetBattleCommonEffectPathAndName(
                        masterDataBytes,
                        &path,
                        (System_String_o **)&key,
                        0LL);
                      Instance = (DataManager_o *)this->fields.cardEffectDict;
                      if ( !Instance )
                        break;
                      Instance = (DataManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Instance,
                                                    key,
                                                    (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
                      if ( ((unsigned __int8)Instance & 1) == 0 )
                      {
                        v23 = (System_String_o *)key;
                        v22 = path;
                        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                        }
                        Manager__loadBattleCommonEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                                    v22,
                                                                                    v23,
                                                                                    0LL);
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        Instance = (DataManager_o *)UnityEngine_Object__op_Equality(
                                                      Manager__loadBattleCommonEffect,
                                                      0LL,
                                                      0LL);
                        if ( ((unsigned __int8)Instance & 1) == 0 )
                        {
                          objectRoot = this->fields.objectRoot;
                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          }
                          Instance = (DataManager_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                        (UILabel_o *)Manager__loadBattleCommonEffect,
                                                        objectRoot,
                                                        (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
                          if ( !Instance )
                            break;
                          v26 = (System_Xml_Schema_XmlSchemaObject_o *)Instance;
                          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                              (UnityEngine_GameObject_o *)Instance,
                                                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CardEffectComponent___);
                          Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(
                                                        Component_srcLineSprite,
                                                        0LL,
                                                        0LL);
                          if ( ((unsigned __int8)Instance & 1) != 0 )
                          {
                            text = this->fields.text;
                            if ( !text )
                              break;
                            bg = this->fields.bg;
                            if ( !bg || !Component_srcLineSprite )
                              break;
                            CardEffectComponent__SetCardEffectDepth(
                              (CardEffectComponent_o *)Component_srcLineSprite,
                              text->fields.mDepth,
                              bg->fields.mDepth,
                              0LL);
                          }
                          Instance = (DataManager_o *)this->fields.cardEffectDict;
                          if ( !Instance )
                            break;
                          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Instance,
                            key,
                            v26,
                            (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
                        }
                      }
                    }
                  }
                }
              }
              max_length = v15->max_length;
              if ( (int)++v19 >= max_length )
                return;
            }
LABEL_48:
            sub_B0D97C(Instance);
          }
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
  __int64 v15; // x1
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x20
  void *data; // x0
  struct BattleCommandComponent___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__223_0; // x21
  Il2CppObject *v20; // x22
  struct BattleCommandComponent___c_StaticFields *v21; // x0
  int32_t Index; // w0
  unsigned int v23; // w20
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  UnityEngine_Object_o *specialCardBuffTurn; // x21
  const MethodInfo *v26; // x1
  UISprite_o *v27; // x21
  Il2CppObject *v28; // x0
  System_String_o *v29; // x22
  UILabel_o *v30; // x21
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v31; // x22
  System_String_o *v32; // x19
  BattleCommandComponent_CardBuffData_o *v33; // x8
  Il2CppObject *v34; // x0
  int32_t restTurn; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_421148F & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&int_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__, v9);
    sub_B0D8A4(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo, v10);
    sub_B0D8A4(&Method_BattleCommandComponent___c__UpdateCommandCardTypeChange_b__223_0__, v11);
    sub_B0D8A4(&BattleCommandComponent___c_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_4616/*"DISPLAY_REMAINING_TURN"*/, v13);
    sub_B0D8A4(&StringLiteral_19380/*"icon_commandchange_{0}"*/, v14);
    sub_B0D8A4(&StringLiteral_1/*""*/, v15);
    byte_421148F = 1;
  }
  specialCardBuffList = this->fields.specialCardBuffList;
  data = BattleCommandComponent___c_TypeInfo;
  if ( (BYTE3(BattleCommandComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
    data = BattleCommandComponent___c_TypeInfo;
  }
  static_fields = (struct BattleCommandComponent___c_StaticFields *)*((_QWORD *)data + 23);
  _9__223_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__223_0;
  if ( !_9__223_0 )
  {
    if ( (*((_BYTE *)data + 307) & 4) != 0 && !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data);
      static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__223_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo,
                                                                           method,
                                                                           v2);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__223_0,
      v20,
      Method_BattleCommandComponent___c__UpdateCommandCardTypeChange_b__223_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__);
    v21 = BattleCommandComponent___c_TypeInfo->static_fields;
    v21->__9__223_0 = (struct System_Predicate_BattleCommandComponent_CardBuffData__o *)_9__223_0;
    sub_B0D840(&v21->__9__223_0, _9__223_0);
  }
  if ( !specialCardBuffList )
    goto LABEL_38;
  Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
            (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)specialCardBuffList,
            (System_Predicate_T__o *)_9__223_0,
            (const MethodInfo_2FC6194 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  if ( Index >= 0 )
  {
    v23 = Index;
    specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0LL, 0LL) )
    {
      specialCardBuffTurn = (UnityEngine_Object_o *)this->fields.specialCardBuffTurn;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(specialCardBuffTurn, 0LL, 0LL) )
      {
        data = this->fields.data;
        if ( !data )
          goto LABEL_38;
        v27 = this->fields.specialCardBuffIcon;
        type = BattleCommandData__get_type((BattleCommandData_o *)data, v26);
        v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &type);
        v29 = System_String__Format((System_String_o *)StringLiteral_19380/*"icon_commandchange_{0}"*/, v28, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        if ( !AtlasManager__SetEventSprite(v27, v29, 0LL) )
        {
          data = this->fields.specialCardBuffIcon;
          if ( !data )
            goto LABEL_38;
          UISprite__set_spriteName((UISprite_o *)data, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
        v30 = this->fields.specialCardBuffTurn;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        data = LocalizationManager__Get((System_String_o *)StringLiteral_4616/*"DISPLAY_REMAINING_TURN"*/, 0LL);
        v31 = this->fields.specialCardBuffList;
        if ( v31 )
        {
          v32 = (System_String_o *)data;
          if ( v31->fields._size <= v23 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v33 = v31->fields._items->m_Items[v23];
          if ( v33 )
          {
            restTurn = v33->fields.restTurn;
            v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &restTurn);
            data = System_String__Format(v32, v34, 0LL);
            if ( v30 )
            {
              UILabel__set_text(v30, (System_String_o *)data, 0LL);
              return;
            }
          }
        }
LABEL_38:
        sub_B0D97C(data);
      }
    }
  }
}


void __fastcall BattleCommandComponent__UpdateFixedCommandCard(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x20
  void *v15; // x0
  struct BattleCommandComponent___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__207_0; // x21
  Il2CppObject *v18; // x22
  struct BattleCommandComponent___c_StaticFields *v19; // x0
  int32_t Index; // w0
  unsigned int v21; // w20
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  UnityEngine_Object_o *specialCardBuffTurn; // x21
  UILabel_o *v24; // x21
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v25; // x22
  System_String_o *v26; // x19
  BattleCommandComponent_CardBuffData_o *v27; // x8
  Il2CppObject *v28; // x0
  int32_t restTurn; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4211481 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__, v8);
    sub_B0D8A4(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleCommandComponent___c__UpdateFixedCommandCard_b__207_0__, v10);
    sub_B0D8A4(&BattleCommandComponent___c_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_4616/*"DISPLAY_REMAINING_TURN"*/, v12);
    sub_B0D8A4(&StringLiteral_19340/*"icon_cardfixation"*/, v13);
    byte_4211481 = 1;
  }
  specialCardBuffList = this->fields.specialCardBuffList;
  v15 = BattleCommandComponent___c_TypeInfo;
  if ( (BYTE3(BattleCommandComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
    v15 = BattleCommandComponent___c_TypeInfo;
  }
  static_fields = (struct BattleCommandComponent___c_StaticFields *)*((_QWORD *)v15 + 23);
  _9__207_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__207_0;
  if ( !_9__207_0 )
  {
    if ( (*((_BYTE *)v15 + 307) & 4) != 0 && !*((_DWORD *)v15 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__207_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo,
                                                                           method,
                                                                           v2);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__207_0,
      v18,
      Method_BattleCommandComponent___c__UpdateFixedCommandCard_b__207_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__);
    v19 = BattleCommandComponent___c_TypeInfo->static_fields;
    v19->__9__207_0 = (struct System_Predicate_BattleCommandComponent_CardBuffData__o *)_9__207_0;
    sub_B0D840(&v19->__9__207_0, _9__207_0);
  }
  if ( !specialCardBuffList )
    goto LABEL_33;
  Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
            (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)specialCardBuffList,
            (System_Predicate_T__o *)_9__207_0,
            (const MethodInfo_2FC6194 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  if ( Index >= 0 )
  {
    v21 = Index;
    specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0LL, 0LL) )
    {
      specialCardBuffTurn = (UnityEngine_Object_o *)this->fields.specialCardBuffTurn;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(specialCardBuffTurn, 0LL, 0LL) )
      {
        v15 = this->fields.specialCardBuffIcon;
        if ( v15 )
        {
          UISprite__set_atlas((UISprite_o *)v15, this->fields.commandAtlas, 0LL);
          v15 = this->fields.specialCardBuffIcon;
          if ( v15 )
          {
            UISprite__set_spriteName((UISprite_o *)v15, (System_String_o *)StringLiteral_19340/*"icon_cardfixation"*/, 0LL);
            v24 = this->fields.specialCardBuffTurn;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v15 = LocalizationManager__Get((System_String_o *)StringLiteral_4616/*"DISPLAY_REMAINING_TURN"*/, 0LL);
            v25 = this->fields.specialCardBuffList;
            if ( v25 )
            {
              v26 = (System_String_o *)v15;
              if ( v25->fields._size <= v21 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              v27 = v25->fields._items->m_Items[v21];
              if ( v27 )
              {
                restTurn = v27->fields.restTurn;
                v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &restTurn);
                v15 = System_String__Format(v26, v28, 0LL);
                if ( v24 )
                {
                  UILabel__set_text(v24, (System_String_o *)v15, 0LL);
                  return;
                }
              }
            }
          }
        }
LABEL_33:
        sub_B0D97C(v15);
      }
    }
  }
}


void __fastcall BattleCommandComponent__UpdateSpecialCardBuffIconAlpha(
        BattleCommandComponent_o *this,
        float deltaTime,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v7; // x2
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x8
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  const MethodInfo *v10; // x1
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

  if ( (byte_4211491 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4211491 = 1;
  }
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    specialCardBuffList = this->fields.specialCardBuffList;
    if ( !specialCardBuffList || specialCardBuffList->fields._size < 1 )
      goto LABEL_34;
    specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(specialCardBuffIcon, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 && this->fields.isCardBuffAlphaAnim )
    {
      if ( !this->fields.isChangedBuffIcon )
      {
        updated = BattleCommandComponent__coroutineUpdateSpecialBuffIcon(this, v10);
        UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
        BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(this, v12);
        this->fields.isChangedBuffIcon = 1;
      }
      v13 = this->fields.specialCardBuffList;
      if ( !v13 )
        goto LABEL_36;
      if ( v13->fields._size != 1 )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
        if ( !gameObject )
          goto LABEL_36;
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
            goto LABEL_36;
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
LABEL_36:
        sub_B0D97C(gameObject);
      }
    }
    else
    {
LABEL_34:
      BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, 0, v7);
    }
  }
  else
  {
    v20 = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
      if ( !gameObject )
        goto LABEL_36;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_36;
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
      LODWORD(data) = v10 > 0 && data->fields.treasureDvc > 0;
      if ( v6 )
      {
        if ( (_DWORD)data )
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
  BuffMaster_o *Master_WarQuestSelectionMaster; // x0
  UISprite_o *nowTreasureDeviceTypeImage; // x20
  System_String_o *v11; // x21
  UnityEngine_Object_o *defaultTdTypeImageAtlas; // x20
  UISpriteData_o *Sprite; // x0
  System_String_o *name; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4211488 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&buffId);
    sub_B0D8A4(&Method_DataManager_GetMaster_BuffMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_19344/*"icon_cardtypechange"*/, v8);
    byte_4211488 = 1;
  }
  name = 0LL;
  if ( !BattleCommandComponent__SetTreasureDeviceTypeImageDefaultAtlas(this, *(const MethodInfo **)&buffId) )
    goto LABEL_23;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BuffMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_25;
  if ( !BuffMaster__TryGetDisplayCardBottomImageName(
          Master_WarQuestSelectionMaster,
          &name,
          buffId,
          (System_String_o *)StringLiteral_19344/*"icon_cardtypechange"*/,
          0LL) )
    goto LABEL_23;
  nowTreasureDeviceTypeImage = this->fields.nowTreasureDeviceTypeImage;
  v11 = name;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( AtlasManager__SetEventSprite(nowTreasureDeviceTypeImage, v11, 0LL) )
    goto LABEL_22;
  defaultTdTypeImageAtlas = (UnityEngine_Object_o *)this->fields.defaultTdTypeImageAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(defaultTdTypeImageAtlas, 0LL, 0LL) )
  {
LABEL_23:
    LOBYTE(Sprite) = 0;
    return (char)Sprite;
  }
  Master_WarQuestSelectionMaster = (BuffMaster_o *)this->fields.defaultTdTypeImageAtlas;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_25;
  Sprite = UIAtlas__GetSprite((UIAtlas_o *)Master_WarQuestSelectionMaster, name, 0LL);
  if ( !Sprite )
    return (char)Sprite;
  Master_WarQuestSelectionMaster = (BuffMaster_o *)this->fields.nowTreasureDeviceTypeImage;
  if ( !Master_WarQuestSelectionMaster
    || (UISprite__set_atlas((UISprite_o *)Master_WarQuestSelectionMaster, this->fields.defaultTdTypeImageAtlas, 0LL),
        (Master_WarQuestSelectionMaster = (BuffMaster_o *)this->fields.nowTreasureDeviceTypeImage) == 0LL) )
  {
LABEL_25:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  UISprite__set_spriteName((UISprite_o *)Master_WarQuestSelectionMaster, name, 0LL);
LABEL_22:
  LOBYTE(Sprite) = 1;
  return (char)Sprite;
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__WaitForErrorViewFinished(
        BattleCommandComponent_o *this,
        float waitSeconds,
        System_String_o *busyVoiceSe,
        const MethodInfo *method)
{
  BattleCommandComponent__WaitForErrorViewFinished_d__239_o *v7; // x21
  __int64 v8; // x0

  if ( (byte_421149B & 1) == 0 )
  {
    sub_B0D8A4(&BattleCommandComponent__WaitForErrorViewFinished_d__239_TypeInfo, busyVoiceSe);
    byte_421149B = 1;
  }
  v7 = (BattleCommandComponent__WaitForErrorViewFinished_d__239_o *)sub_B0D974(
                                                                      BattleCommandComponent__WaitForErrorViewFinished_d__239_TypeInfo,
                                                                      busyVoiceSe,
                                                                      method);
  BattleCommandComponent__WaitForErrorViewFinished_d__239___ctor(v7, 0, 0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  v7->fields.__4__this = this;
  sub_B0D840(&v7->fields.__4__this, this);
  v7->fields.waitSeconds = waitSeconds;
  v7->fields.busyVoiceSe = busyVoiceSe;
  sub_B0D840(&v7->fields.busyVoiceSe, busyVoiceSe);
  return (System_Collections_IEnumerator_o *)v7;
}


bool __fastcall BattleCommandComponent___setBuffIconList_b__136_0(
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
    sub_B0D97C(this);
  return !BattleBuffData_BuffData__IsMineCommandCode(buff, data->fields.userCommandCodeId, 0LL);
}


bool __fastcall BattleCommandComponent___setBuffIconList_b__136_1(
        BattleCommandComponent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B0D97C(this);
  return BattleBuffData_BuffData__isCommandCardBuff(buff, 0LL)
      && !BattleBuffData_BuffData__isEnableCommandCardBuff(buff, this->fields.data, 0LL);
}


bool __fastcall BattleCommandComponent___setBuffIconList_b__136_2(
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
    sub_B0D97C(this);
  }
  return 0;
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
  BattleCommandComponent___c__DisplayClass158_0_o *v9; // x21
  SeManager_o *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x20
  BattleCommandComponent_o *v14; // x0
  const MethodInfo *v15; // x2
  System_Collections_IEnumerator_o *v16; // x0
  System_String_o *CommonSeNameLocal; // x20
  System_String_o *CueSheet; // x21
  float DefaultPreDelayTime; // s0
  BattleCommandComponent_o *v20; // x0
  const MethodInfo *v21; // x1
  System_Collections_IEnumerator_o *v22; // x1

  if ( (byte_4211467 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, obj);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v6);
    sub_B0D8A4(&Method_BattleCommandComponent___c__DisplayClass158_0__addCriticalBuff_b__0__, v7);
    sub_B0D8A4(&BattleCommandComponent___c__DisplayClass158_0_TypeInfo, v8);
    byte_4211467 = 1;
  }
  v9 = (BattleCommandComponent___c__DisplayClass158_0_o *)sub_B0D974(
                                                            BattleCommandComponent___c__DisplayClass158_0_TypeInfo,
                                                            obj,
                                                            method);
  BattleCommandComponent___c__DisplayClass158_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  v9->fields.__4__this = this;
  sub_B0D840(&v9->fields, this);
  v9->fields.obj = obj;
  sub_B0D840(&v9->fields.obj, obj);
  v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
  System_Action___ctor(
    v13,
    (Il2CppObject *)v9,
    Method_BattleCommandComponent___c__DisplayClass158_0__addCriticalBuff_b__0__,
    0LL);
  v16 = BattleCommandComponent__delayFrame(v14, v13, v15);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v16, 0LL);
  Instance = (SeManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance
    || (CommonSeNameLocal = SeManager__GetCommonSeNameLocal(Instance, 7, 0LL),
        (Instance = (SeManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__)) == 0LL)
    || (CueSheet = SoundManager__GetCueSheet((SoundManager_o *)Instance, CommonSeNameLocal, 0LL),
        (Instance = (SeManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__)) == 0LL) )
  {
LABEL_8:
    sub_B0D97C(Instance);
  }
  DefaultPreDelayTime = SeManager__GetDefaultPreDelayTime(Instance, CueSheet, CommonSeNameLocal, 0LL);
  v22 = BattleCommandComponent__PlayStarSe(v20, DefaultPreDelayTime / 1000.0, v21);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v22, 0LL);
}


void __fastcall BattleCommandComponent__addFirstAura(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *effect,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *effectobj; // x19
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x0

  BattleCommandComponent__stopFirstAura(this, (const MethodInfo *)effect);
  effectobj = this->fields.effectobj;
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, effect, this->fields.objectRoot, 0LL, 0LL);
  if ( !effectobj )
    sub_B0D97C(Object);
  v7 = Object;
  if ( Object )
  {
    Object = (UnityEngine_GameObject_o *)sub_B0D964(Object, effectobj->obj.klass->_1.element_class);
    if ( !Object )
    {
      v9 = sub_B0D99C();
      sub_B0D948(v9, 0LL);
    }
  }
  if ( effectobj->max_length <= 4 )
  {
    v8 = sub_B0D9A8(Object);
    sub_B0D948(v8, 0LL);
  }
  effectobj->m_Items[4] = v7;
  sub_B0D840(&effectobj->m_Items[4], v7);
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
  __int64 v8; // x1
  struct UnityEngine_GameObject_array *addObjectList; // x8
  UnityEngine_Object_o *v10; // x22
  struct UnityEngine_GameObject_array *v11; // x8
  UnityEngine_Object_o *v12; // x22
  System_String_o *v13; // x0
  UnityEngine_Object_o *v14; // x21
  UnityEngine_Transform_o *transform; // x22
  int v16; // s0
  BattleCommandComponent_o *v20; // x22
  System_String_o *v21; // x23
  struct UnityEngine_GameObject_array *v22; // x22
  Il2CppClass **v23; // x0
  struct UnityEngine_GameObject_array *v24; // x8
  __int64 v25; // x0
  __int64 v26; // x0
  int32_t v27; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  v27 = type;
  if ( (byte_4211456 & 1) == 0 )
  {
    sub_B0D8A4(&BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo, name);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    this = (BattleCommandComponent_o *)sub_B0D8A4(&StringLiteral_18280/*"effect/"*/, v8);
    byte_4211456 = 1;
  }
  addObjectList = v6->fields.addObjectList;
  if ( !addObjectList )
    goto LABEL_25;
  if ( addObjectList->max_length <= type )
    goto LABEL_26;
  v10 = (UnityEngine_Object_o *)addObjectList->m_Items[type];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v11 = v6->fields.addObjectList;
    if ( !v11 )
      goto LABEL_25;
    if ( v11->max_length <= type )
      goto LABEL_26;
    v12 = (UnityEngine_Object_o *)v11->m_Items[type];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v12, 0LL);
  }
  v13 = System_String__Concat_43849904((System_String_o *)StringLiteral_18280/*"effect/"*/, name, 0LL);
  this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject_18711800(
                                       (BaseMonoBehaviour_o *)v6,
                                       v13,
                                       v6->fields.objectRoot,
                                       0LL,
                                       0LL);
  if ( !this )
    goto LABEL_25;
  v14 = (UnityEngine_Object_o *)this;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Quaternion_o *)&v16 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v16, 0LL),
        (this = (BattleCommandComponent_o *)j_il2cpp_value_box_0(BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo, &v27)) == 0LL)
    || (v20 = this,
        v21 = (System_String_o *)((__int64 (__fastcall *)(BattleCommandComponent_o *, void *))this->klass->vtable._3_ToString.method)(
                                   this,
                                   this->klass[1]._1.image),
        v27 = *(_DWORD *)j_il2cpp_object_unbox_0(v20),
        UnityEngine_Object__set_name(v14, v21, 0LL),
        (v22 = v6->fields.addObjectList) == 0LL) )
  {
LABEL_25:
    sub_B0D97C(this);
  }
  this = (BattleCommandComponent_o *)sub_B0D964(v14, v22->obj.klass->_1.element_class);
  if ( !this )
  {
    v26 = sub_B0D99C();
    sub_B0D948(v26, 0LL);
  }
  if ( v22->max_length <= type )
    goto LABEL_26;
  v23 = &v22->obj.klass + type;
  v23[4] = (Il2CppClass *)v14;
  sub_B0D840(v23 + 4, v14);
  v24 = v6->fields.addObjectList;
  if ( !v24 )
    goto LABEL_25;
  if ( v24->max_length <= type )
  {
LABEL_26:
    v25 = sub_B0D9A8(this);
    sub_B0D948(v25, 0LL);
  }
  this = (BattleCommandComponent_o *)v24->m_Items[type];
  if ( !this )
    goto LABEL_25;
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
  UnityEngine_GameObject_o *Object_18711800; // x0
  UnityEngine_GameObject_o *v9; // x21
  UnityEngine_Transform_o *transform; // x22
  int v11; // s0
  UnityEngine_Transform_o *v14; // x22
  int v15; // s0
  struct UnityEngine_GameObject_array *effectobj; // x20
  __int64 v19; // x0
  Il2CppClass **v20; // x0
  __int64 v21; // x0
  __int64 v22; // x0

  if ( (byte_421146B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18280/*"effect/"*/, name);
    byte_421146B = 1;
  }
  v7 = System_String__Concat_43849904((System_String_o *)StringLiteral_18280/*"effect/"*/, name, 0LL);
  Object_18711800 = BaseMonoBehaviour__createObject_18711800(
                      (BaseMonoBehaviour_o *)this,
                      v7,
                      this->fields.objectRoot,
                      0LL,
                      0LL);
  if ( !Object_18711800 )
    goto LABEL_12;
  v9 = Object_18711800;
  transform = UnityEngine_GameObject__get_transform(Object_18711800, 0LL);
  *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v11, 0LL),
        v14 = UnityEngine_GameObject__get_transform(v9, 0LL),
        *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_one(0LL),
        !v14)
    || (UnityEngine_Transform__set_localScale(v14, *(UnityEngine_Vector3_o *)&v15, 0LL),
        (effectobj = this->fields.effectobj) == 0LL) )
  {
LABEL_12:
    sub_B0D97C(Object_18711800);
  }
  if ( (signed int)effectobj->max_length > index )
  {
    v19 = sub_B0D964(v9, effectobj->obj.klass->_1.element_class);
    if ( !v19 )
    {
      v21 = sub_B0D99C();
      sub_B0D948(v21, 0LL);
    }
    if ( effectobj->max_length <= index )
    {
      v22 = sub_B0D9A8(v19);
      sub_B0D948(v22, 0LL);
    }
    v20 = &effectobj->obj.klass + index;
    v20[4] = (Il2CppClass *)v9;
    sub_B0D840(v20 + 4, v9);
  }
}


bool __fastcall BattleCommandComponent__checkCriticalPointValid(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *criticalObject; // x0

  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    sub_B0D97C(0LL);
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
  float v4; // s8
  float y; // s9
  float z; // s10
  float v7; // s11
  float v8; // s0
  float v9; // s0
  float v10; // s10
  float v11; // s9
  float v12; // s8
  const MethodInfo *v13; // x1
  struct UnityEngine_GameObject_o *tr_criticaleffect; // x8
  UnityEngine_GameObject_o *effect_fullcricomplete; // x20
  UnityEngine_Transform_o *v16; // x0
  const MethodInfo *v17; // x3
  struct UnityEngine_GameObject_o *SpawnerObj; // x0
  struct UnityEngine_GameObject_o **p_countUpFinishEffect; // x20
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_14;
  LODWORD(v4) = (unsigned int)UnityEngine_Transform__get_lossyScale(transform, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_14;
  lossyScale = UnityEngine_Transform__get_lossyScale(transform, 0LL);
  y = lossyScale.fields.y;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_14;
  v21 = UnityEngine_Transform__get_lossyScale(transform, 0LL);
  z = v21.fields.z;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_14;
  transform = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !transform )
    goto LABEL_14;
  v7 = 1.0 / z;
  v8 = COERCE_FLOAT(UnityEngine_Transform__get_localScale(transform, 0LL));
  v9 = v8 + v8;
  v10 = (float)(1.0 / v4) * v9;
  v11 = (float)(1.0 / y) * v9;
  v12 = v7 * v9;
  transform = (UnityEngine_Transform_o *)BattleCommandComponent__IsMaxViewCritical(this, v13);
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
  v16 = UnityEngine_GameObject__get_transform(this->fields.tr_criticaleffect, 0LL);
  v22.fields.x = v10;
  v22.fields.y = v11;
  v22.fields.z = v12;
  SpawnerObj = BattleCommandComponent__GetSpawnerObj(this, effect_fullcricomplete, v16, v22, v17);
  p_countUpFinishEffect = &this->fields.countUpFinishEffect;
  this->fields.countUpFinishEffect = SpawnerObj;
  sub_B0D840(&this->fields.countUpFinishEffect, SpawnerObj);
  transform = (UnityEngine_Transform_o *)this->fields.countUpFinishEffect;
  if ( !transform
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL),
        (transform = (UnityEngine_Transform_o *)*p_countUpFinishEffect) == 0LL) )
  {
LABEL_14:
    sub_B0D97C(transform);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
  this->fields.isCountUp = 0;
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_4211494 & 1) == 0 )
  {
    sub_B0D8A4(&BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_TypeInfo, method);
    byte_4211494 = 1;
  }
  v4 = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *)sub_B0D974(
                                                                            BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_TypeInfo,
                                                                            method,
                                                                            v2);
  BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  v4->fields.__4__this = this;
  sub_B0D840(&v4->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__delayFrame(
        BattleCommandComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  BattleCommandComponent__delayFrame_d__160_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_4211469 & 1) == 0 )
  {
    sub_B0D8A4(&BattleCommandComponent__delayFrame_d__160_TypeInfo, action);
    byte_4211469 = 1;
  }
  v4 = (BattleCommandComponent__delayFrame_d__160_o *)sub_B0D974(
                                                        BattleCommandComponent__delayFrame_d__160_TypeInfo,
                                                        action,
                                                        method);
  BattleCommandComponent__delayFrame_d__160___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  v4->fields.action = action;
  sub_B0D840(&v4->fields.action, action);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall BattleCommandComponent__endFashTypeCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  UnityEngine_Object_o *v6; // x19
  __int64 v7; // x0

  v2 = this;
  if ( (byte_421147B & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421147B = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_16;
  if ( !effectobj->max_length )
    goto LABEL_17;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( v5 )
    {
      if ( v5->max_length )
      {
        v6 = (UnityEngine_Object_o *)v5->m_Items[0];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34935276(v6, 0LL);
        return;
      }
LABEL_17:
      v7 = sub_B0D9A8(this);
      sub_B0D948(v7, 0LL);
    }
LABEL_16:
    sub_B0D97C(this);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__fadeoutEffect(
        BattleCommandComponent_o *this,
        bool isTresure,
        const MethodInfo *method)
{
  BattleCommandComponent__fadeoutEffect_d__180_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_421146D & 1) == 0 )
  {
    sub_B0D8A4(&BattleCommandComponent__fadeoutEffect_d__180_TypeInfo, isTresure);
    byte_421146D = 1;
  }
  v5 = (BattleCommandComponent__fadeoutEffect_d__180_o *)sub_B0D974(
                                                           BattleCommandComponent__fadeoutEffect_d__180_TypeInfo,
                                                           isTresure,
                                                           method);
  BattleCommandComponent__fadeoutEffect_d__180___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  v5->fields.__4__this = this;
  sub_B0D840(&v5->fields.__4__this, this);
  v5->fields.isTresure = isTresure;
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
  __int64 v5; // x0

  if ( index >= 3 )
    goto LABEL_6;
  if ( !combo || (sameflg = combo->fields.sameflg) == 0LL )
    sub_B0D97C(this);
  if ( sameflg->max_length <= index )
  {
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
  }
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
    sub_B0D97C(this);
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
  UnityEngine_Component_o *gameObject; // x0
  struct UnityEngine_GameObject_array *effectobj; // x20
  UnityEngine_GameObject_o *v18; // x21
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Component_o *v20; // x21
  struct UnityEngine_GameObject_array *v21; // x8
  UIWidget_o *v22; // x20
  UnityEngine_Shader_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_Material_o *v26; // x22
  __int64 v27; // x0
  UnityEngine_Material_o *v28; // x21
  float v29; // s4
  float v30; // s5
  float v31; // s6
  float v32; // s7
  struct UnityEngine_GameObject_array *v33; // x8
  UnityEngine_GameObject_o *v34; // x20
  System_Object_array *v35; // x21
  __int64 v36; // x1
  Il2CppObject *v37; // x22
  __int64 v38; // x1
  Il2CppObject *v39; // x22
  __int64 v40; // x1
  Il2CppObject *v41; // x22
  __int64 v42; // x1
  __int64 v43; // x1
  System_Collections_Hashtable_o *v44; // x0
  float v45; // s4
  float v46; // s5
  float v47; // s6
  float v48; // s7
  struct UnityEngine_GameObject_array *v49; // x8
  UnityEngine_GameObject_o *v50; // x19
  __int64 v51; // x0
  __int64 v52; // x0
  MethodInfo methoda; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v57; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4211478 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___, method);
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, v3);
    sub_B0D8A4(&object___TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&float_TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_Vector3_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v8);
    sub_B0D8A4(&StringLiteral_21334/*"oncompletetarget"*/, v9);
    sub_B0D8A4(&StringLiteral_18404/*"endFashSvt"*/, v10);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v11);
    sub_B0D8A4(&StringLiteral_15963/*"_AddColor"*/, v12);
    sub_B0D8A4(&StringLiteral_21968/*"scale"*/, v13);
    sub_B0D8A4(&iTween_TypeInfo, v14);
    byte_4211478 = 1;
  }
  BattleCommandComponent__DestroyEffectObject1(this, method);
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(facetex, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !gameObject )
      goto LABEL_66;
    effectobj = this->fields.effectobj;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !this->fields.nomalwidget )
      goto LABEL_66;
    v18 = (UnityEngine_GameObject_o *)gameObject;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)this->fields.nomalwidget,
                                              0LL);
    if ( !gameObject )
      goto LABEL_66;
    gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              0LL);
    if ( !gameObject )
      goto LABEL_66;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                              (BaseMonoBehaviour_o *)this,
                                              v18,
                                              parent,
                                              0LL,
                                              0LL);
    if ( !effectobj )
      goto LABEL_66;
    v20 = gameObject;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)sub_B0D964(gameObject, effectobj->obj.klass->_1.element_class)) != 0LL )
    {
      if ( effectobj->max_length <= 1 )
        goto LABEL_67;
      effectobj->m_Items[1] = (UnityEngine_GameObject_o *)v20;
      sub_B0D840(&effectobj->m_Items[1], v20);
      v21 = this->fields.effectobj;
      if ( !v21 )
        goto LABEL_66;
      if ( v21->max_length <= 1 )
        goto LABEL_67;
      gameObject = (UnityEngine_Component_o *)v21->m_Items[1];
      if ( !gameObject )
        goto LABEL_66;
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                (const MethodInfo_1B62C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
      if ( !gameObject )
        goto LABEL_66;
      v22 = (UIWidget_o *)gameObject;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_66;
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( !gameObject )
        goto LABEL_66;
      v54.fields.z = -5.0;
      v54.fields.x = 0.0;
      v54.fields.y = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v54, 0LL);
      this->fields.newMatriarl = 1;
      v23 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))v22->klass->vtable._28_get_shader.method)(
                                      v22,
                                      v22->klass->vtable._29_set_shader.methodPtr);
      v26 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v24, v25);
      UnityEngine_Material___ctor(v26, v23, 0LL);
      ((void (__fastcall *)(UIWidget_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v22->klass->vtable._25_set_material.method)(
        v22,
        v26,
        v22->klass->vtable._26_get_mainTexture.methodPtr);
      v27 = ((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))v22->klass->vtable._24_get_material.method)(
              v22,
              v22->klass->vtable._25_set_material.methodPtr);
      v55.fields.r = 1.0;
      v28 = (UnityEngine_Material_o *)v27;
      v55.fields.a = 0.0;
      v55.fields.g = 1.0;
      v55.fields.b = 1.0;
      methoda.parameters = 0LL;
      methoda.rgctx_data = 0LL;
      UnityEngine_Color___ctor(v55, v29, v30, v31, v32, (const MethodInfo *)&methoda.parameters);
      if ( !v28 )
        goto LABEL_66;
      UnityEngine_Material__SetColor(
        v28,
        (System_String_o *)StringLiteral_15963/*"_AddColor"*/,
        *(UnityEngine_Color_o *)&methoda.parameters,
        0LL);
      UIWidget__set_depth(v22, this->fields.basedepth + 400, 0LL);
      v33 = this->fields.effectobj;
      if ( !v33 )
        goto LABEL_66;
      if ( v33->max_length <= 1 )
        goto LABEL_67;
      v34 = v33->m_Items[1];
      gameObject = (UnityEngine_Component_o *)sub_B0D8BC(object___TypeInfo, 8LL);
      if ( !gameObject )
        goto LABEL_66;
      v35 = (System_Object_array *)gameObject;
      gameObject = (UnityEngine_Component_o *)StringLiteral_21968/*"scale"*/;
      if ( StringLiteral_21968/*"scale"*/ )
      {
        gameObject = (UnityEngine_Component_o *)sub_B0D964(StringLiteral_21968/*"scale"*/, v35->obj.klass->_1.element_class);
        if ( !gameObject )
          goto LABEL_68;
        v36 = StringLiteral_21968/*"scale"*/;
      }
      else
      {
        v36 = 0LL;
      }
      if ( !v35->max_length )
        goto LABEL_67;
      v35->m_Items[0] = (Il2CppObject *)v36;
      sub_B0D840(v35->m_Items, v36);
      methoda.klass = (Il2CppClass *)vdup_n_s32(0x3FE66666u).n64_u64[0];
      LODWORD(methoda.return_type) = 1065353216;
      gameObject = (UnityEngine_Component_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &methoda.klass);
      v37 = (Il2CppObject *)gameObject;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)sub_B0D964(gameObject, v35->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v35->max_length <= 1 )
          goto LABEL_67;
        v35->m_Items[1] = v37;
        sub_B0D840(&v35->m_Items[1], v37);
        gameObject = (UnityEngine_Component_o *)StringLiteral_22753/*"time"*/;
        if ( StringLiteral_22753/*"time"*/ )
        {
          gameObject = (UnityEngine_Component_o *)sub_B0D964(StringLiteral_22753/*"time"*/, v35->obj.klass->_1.element_class);
          if ( !gameObject )
            goto LABEL_68;
          v38 = StringLiteral_22753/*"time"*/;
        }
        else
        {
          v38 = 0LL;
        }
        if ( v35->max_length <= 2 )
          goto LABEL_67;
        v35->m_Items[2] = (Il2CppObject *)v38;
        sub_B0D840(&v35->m_Items[2], v38);
        HIDWORD(methoda.name) = 1065353216;
        gameObject = (UnityEngine_Component_o *)j_il2cpp_value_box_0(float_TypeInfo, (char *)&methoda.name + 4);
        v39 = (Il2CppObject *)gameObject;
        if ( !gameObject
          || (gameObject = (UnityEngine_Component_o *)sub_B0D964(gameObject, v35->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v35->max_length <= 3 )
            goto LABEL_67;
          v35->m_Items[3] = v39;
          sub_B0D840(&v35->m_Items[3], v39);
          gameObject = (UnityEngine_Component_o *)StringLiteral_21334/*"oncompletetarget"*/;
          if ( StringLiteral_21334/*"oncompletetarget"*/ )
          {
            gameObject = (UnityEngine_Component_o *)sub_B0D964(StringLiteral_21334/*"oncompletetarget"*/, v35->obj.klass->_1.element_class);
            if ( !gameObject )
              goto LABEL_68;
            v40 = StringLiteral_21334/*"oncompletetarget"*/;
          }
          else
          {
            v40 = 0LL;
          }
          if ( v35->max_length <= 4 )
            goto LABEL_67;
          v35->m_Items[4] = (Il2CppObject *)v40;
          sub_B0D840(&v35->m_Items[4], v40);
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
          v41 = (Il2CppObject *)gameObject;
          if ( !gameObject
            || (gameObject = (UnityEngine_Component_o *)sub_B0D964(gameObject, v35->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v35->max_length <= 5 )
              goto LABEL_67;
            v35->m_Items[5] = v41;
            sub_B0D840(&v35->m_Items[5], v41);
            gameObject = (UnityEngine_Component_o *)StringLiteral_21332/*"oncomplete"*/;
            if ( StringLiteral_21332/*"oncomplete"*/ )
            {
              gameObject = (UnityEngine_Component_o *)sub_B0D964(StringLiteral_21332/*"oncomplete"*/, v35->obj.klass->_1.element_class);
              if ( !gameObject )
                goto LABEL_68;
              v42 = StringLiteral_21332/*"oncomplete"*/;
            }
            else
            {
              v42 = 0LL;
            }
            if ( v35->max_length <= 6 )
              goto LABEL_67;
            v35->m_Items[6] = (Il2CppObject *)v42;
            sub_B0D840(&v35->m_Items[6], v42);
            gameObject = (UnityEngine_Component_o *)StringLiteral_18404/*"endFashSvt"*/;
            if ( !StringLiteral_18404/*"endFashSvt"*/ )
            {
              v43 = 0LL;
              goto LABEL_58;
            }
            gameObject = (UnityEngine_Component_o *)sub_B0D964(StringLiteral_18404/*"endFashSvt"*/, v35->obj.klass->_1.element_class);
            if ( gameObject )
            {
              v43 = StringLiteral_18404/*"endFashSvt"*/;
LABEL_58:
              if ( v35->max_length <= 7 )
                goto LABEL_67;
              v35->m_Items[7] = (Il2CppObject *)v43;
              sub_B0D840(&v35->m_Items[7], v43);
              if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
              v44 = iTween__Hash(v35, 0LL);
              iTween__ScaleTo_42390420(v34, v44, 0LL);
              v49 = this->fields.effectobj;
              if ( v49 )
              {
                if ( v49->max_length > 1 )
                {
                  v50 = v49->m_Items[1];
                  v56.fields.r = 0.0;
                  v56.fields.g = 0.0;
                  v56.fields.b = 0.0;
                  v56.fields.a = 0.0;
                  methoda.methodPointer = 0LL;
                  methoda.invoker_method = 0LL;
                  UnityEngine_Color___ctor(v56, v45, v46, v47, v48, &methoda);
                  *(_QWORD *)&v57.fields.r = methoda.methodPointer;
                  *(_QWORD *)&v57.fields.b = methoda.invoker_method;
                  TweenColor__Begin(v50, 1.0, v57, 0LL);
                  return;
                }
LABEL_67:
                v51 = sub_B0D9A8(gameObject);
                sub_B0D948(v51, 0LL);
              }
LABEL_66:
              sub_B0D97C(gameObject);
            }
          }
        }
      }
    }
LABEL_68:
    v52 = sub_B0D99C();
    sub_B0D948(v52, 0LL);
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
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
  UnityEngine_GameObject_o *v18; // x21
  UnityEngine_Transform_o *v19; // x22
  UnityEngine_Transform_o *transform; // x0
  BattleCommandComponent_o *v21; // x21
  struct UnityEngine_GameObject_array *v22; // x8
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x20
  float v24; // s4
  float v25; // s5
  float v26; // s6
  float v27; // s7
  struct UnityEngine_GameObject_array *v28; // x8
  UnityEngine_GameObject_o *v29; // x20
  struct UnityEngine_GameObject_array *v30; // x8
  UnityEngine_GameObject_o *v31; // x20
  BattleCommandComponent_o *v32; // x21
  __int64 v33; // x1
  BattleCommandComponent_o *v34; // x22
  __int64 v35; // x1
  BattleCommandComponent_o *v36; // x22
  __int64 v37; // x1
  BattleCommandComponent_o *v38; // x19
  __int64 v39; // x1
  __int64 v40; // x1
  System_Collections_Hashtable_o *v41; // x0
  __int64 v42; // x0
  __int64 v43; // x0
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v46; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v2 = this;
  if ( (byte_421147A & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, method);
    sub_B0D8A4(&object___TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&float_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Vector3_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_18405/*"endFashTypeCard"*/, v7);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v8);
    sub_B0D8A4(&StringLiteral_21334/*"oncompletetarget"*/, v9);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v10);
    sub_B0D8A4(&StringLiteral_21968/*"scale"*/, v11);
    this = (BattleCommandComponent_o *)sub_B0D8A4(&iTween_TypeInfo, v12);
    byte_421147A = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_77;
  if ( !effectobj->max_length )
    goto LABEL_78;
  v14 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v15 = v2->fields.effectobj;
    if ( !v15 )
      goto LABEL_77;
    if ( !v15->max_length )
      goto LABEL_78;
    v16 = (UnityEngine_Object_o *)v15->m_Items[0];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v16, 0LL);
  }
  this = (BattleCommandComponent_o *)v2->fields.icon;
  if ( !this )
    goto LABEL_77;
  v17 = v2->fields.effectobj;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v2->fields.nomalwidget )
    goto LABEL_77;
  v18 = (UnityEngine_GameObject_o *)this;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)v2->fields.nomalwidget,
                                       0LL);
  if ( !this )
    goto LABEL_77;
  this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_77;
  this = (BattleCommandComponent_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !v2->fields.icon )
    goto LABEL_77;
  v19 = (UnityEngine_Transform_o *)this;
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)v2->fields.icon,
                                       0LL);
  if ( !this )
    goto LABEL_77;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject(
                                       (BaseMonoBehaviour_o *)v2,
                                       v18,
                                       v19,
                                       transform,
                                       0LL);
  if ( !v17 )
    goto LABEL_77;
  v21 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_B0D964(this, v17->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
  }
  if ( !v17->max_length )
    goto LABEL_78;
  v17->m_Items[0] = (UnityEngine_GameObject_o *)v21;
  sub_B0D840(v17->m_Items, v21);
  v22 = v2->fields.effectobj;
  if ( !v22 )
    goto LABEL_77;
  if ( !v22->max_length )
    goto LABEL_78;
  this = (BattleCommandComponent_o *)v22->m_Items[0];
  if ( !this )
    goto LABEL_77;
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        (UnityEngine_GameObject_o *)this,
                                                                        (const MethodInfo_1B62C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(
                                       ComponentInChildren_Dropdown_DropdownItem,
                                       0LL,
                                       0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !ComponentInChildren_Dropdown_DropdownItem )
      goto LABEL_77;
    UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, v2->fields.basedepth + 400, 0LL);
    v28 = v2->fields.effectobj;
    if ( !v28 )
      goto LABEL_77;
    if ( !v28->max_length )
      goto LABEL_78;
    v29 = v28->m_Items[0];
    v45.fields.r = 0.0;
    v45.fields.g = 0.0;
    v45.fields.b = 0.0;
    v45.fields.a = 0.0;
    var40.methodPointer = 0LL;
    var40.invoker_method = 0LL;
    UnityEngine_Color___ctor(v45, v24, v25, v26, v27, &var40);
    *(_QWORD *)&v46.fields.r = var40.methodPointer;
    *(_QWORD *)&v46.fields.b = var40.invoker_method;
    this = (BattleCommandComponent_o *)TweenColor__Begin(v29, 1.0, v46, 0LL);
  }
  v30 = v2->fields.effectobj;
  if ( !v30 )
    goto LABEL_77;
  if ( !v30->max_length )
    goto LABEL_78;
  v31 = v30->m_Items[0];
  this = (BattleCommandComponent_o *)sub_B0D8BC(object___TypeInfo, 8LL);
  if ( !this )
LABEL_77:
    sub_B0D97C(this);
  v32 = this;
  this = (BattleCommandComponent_o *)StringLiteral_21968/*"scale"*/;
  if ( StringLiteral_21968/*"scale"*/ )
  {
    this = (BattleCommandComponent_o *)sub_B0D964(StringLiteral_21968/*"scale"*/, v32->klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
    v33 = StringLiteral_21968/*"scale"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( !LODWORD(v32->fields.objectRoot) )
    goto LABEL_78;
  v32->fields.bg = (struct UISprite_o *)v33;
  sub_B0D840(&v32->fields.bg, v33);
  var40.methodPointer = (Il2CppMethodPointer)0x4000000040000000LL;
  LODWORD(var40.invoker_method) = 1065353216;
  this = (BattleCommandComponent_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &var40);
  v34 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_B0D964(this, v32->klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
  }
  if ( LODWORD(v32->fields.objectRoot) <= 1 )
    goto LABEL_78;
  v32->fields.icon = (struct UISprite_o *)v34;
  sub_B0D840(&v32->fields.icon, v34);
  this = (BattleCommandComponent_o *)StringLiteral_22753/*"time"*/;
  if ( StringLiteral_22753/*"time"*/ )
  {
    this = (BattleCommandComponent_o *)sub_B0D964(StringLiteral_22753/*"time"*/, v32->klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
    v35 = StringLiteral_22753/*"time"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( LODWORD(v32->fields.objectRoot) <= 2 )
    goto LABEL_78;
  v32->fields.text = (struct UISprite_o *)v35;
  sub_B0D840(&v32->fields.text, v35);
  HIDWORD(var40.klass) = 1065353216;
  this = (BattleCommandComponent_o *)j_il2cpp_value_box_0(float_TypeInfo, (char *)&var40.klass + 4);
  v36 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_B0D964(this, v32->klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
  }
  if ( LODWORD(v32->fields.objectRoot) <= 3 )
    goto LABEL_78;
  v32->fields.facetex = (struct UITexture_o *)v36;
  sub_B0D840(&v32->fields.facetex, v36);
  this = (BattleCommandComponent_o *)StringLiteral_21334/*"oncompletetarget"*/;
  if ( StringLiteral_21334/*"oncompletetarget"*/ )
  {
    this = (BattleCommandComponent_o *)sub_B0D964(StringLiteral_21334/*"oncompletetarget"*/, v32->klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
    v37 = StringLiteral_21334/*"oncompletetarget"*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( LODWORD(v32->fields.objectRoot) <= 4 )
    goto LABEL_78;
  v32->fields.nobletex = (struct UITexture_o *)v37;
  sub_B0D840(&v32->fields.nobletex, v37);
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
  v38 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_B0D964(this, v32->klass->_1.element_class);
    if ( !this )
    {
LABEL_79:
      v43 = sub_B0D99C();
      sub_B0D948(v43, 0LL);
    }
  }
  if ( LODWORD(v32->fields.objectRoot) <= 5 )
    goto LABEL_78;
  v32->fields.friendIcon = (struct UISprite_o *)v38;
  sub_B0D840(&v32->fields.friendIcon, v38);
  this = (BattleCommandComponent_o *)StringLiteral_21332/*"oncomplete"*/;
  if ( StringLiteral_21332/*"oncomplete"*/ )
  {
    this = (BattleCommandComponent_o *)sub_B0D964(StringLiteral_21332/*"oncomplete"*/, v32->klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
    v39 = StringLiteral_21332/*"oncomplete"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( LODWORD(v32->fields.objectRoot) <= 6 )
    goto LABEL_78;
  v32->fields.sealedSprite = (struct UISprite_o *)v39;
  sub_B0D840(&v32->fields.sealedSprite, v39);
  this = (BattleCommandComponent_o *)StringLiteral_18405/*"endFashTypeCard"*/;
  if ( StringLiteral_18405/*"endFashTypeCard"*/ )
  {
    this = (BattleCommandComponent_o *)sub_B0D964(StringLiteral_18405/*"endFashTypeCard"*/, v32->klass->_1.element_class);
    if ( this )
    {
      v40 = StringLiteral_18405/*"endFashTypeCard"*/;
      goto LABEL_72;
    }
    goto LABEL_79;
  }
  v40 = 0LL;
LABEL_72:
  if ( LODWORD(v32->fields.objectRoot) <= 7 )
  {
LABEL_78:
    v42 = sub_B0D9A8(this);
    sub_B0D948(v42, 0LL);
  }
  v32->fields.unusableNpSprite = (struct UISprite_o *)v40;
  sub_B0D840(&v32->fields.unusableNpSprite, v40);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v41 = iTween__Hash((System_Object_array *)v32, 0LL);
  iTween__ScaleTo_42390420(v31, v41, 0LL);
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

  if ( (byte_421145A & 1) == 0 )
  {
    sub_B0D8A4(&BattleCommandComponent_TypeInfo, *(_QWORD *)&commandType);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_421145A = 1;
  }
  switch ( commandType )
  {
    case 3:
      v7 = BattleCommandComponent_TypeInfo;
      if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v7 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v7->static_fields->SEALED_CARDTYPE_ICON_QUICK;
      break;
    case 2:
      v8 = BattleCommandComponent_TypeInfo;
      if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v8 = BattleCommandComponent_TypeInfo;
      }
      p_SEALED_CARDTYPE_ICON_QUICK = &v8->static_fields->SEALED_CARDTYPE_ICON_BUSTER;
      break;
    case 1:
      v5 = BattleCommandComponent_TypeInfo;
      if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
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
    sub_B0D97C(0LL);
  return BattleCommandData__get_type(data, method);
}


int32_t __fastcall BattleCommandComponent__getCriticalCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8
  int32_t result; // w0

  data = this->fields.data;
  if ( !data )
    return 0;
  result = this->fields.boostedCriticalRate + data->fields.starcount / 10;
  if ( result >= 1 )
  {
    if ( result < 10 )
      return 1;
    else
      return result / 0xAu;
  }
  return result;
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
  struct UISprite_o *v5; // x8

  if ( (byte_4211450 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4211450 = 1;
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(powerUpCardIcon, 0LL, 0LL);
  if ( !v4 )
    return -1;
  v5 = this->fields.powerUpCardIcon;
  if ( !v5 )
    sub_B0D97C(v4);
  return v5->fields.mDepth;
}


int32_t __fastcall BattleCommandComponent__getSvtId(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B0D97C(this);
  return data->fields.svtId;
}


int32_t __fastcall BattleCommandComponent__getSvtLimitCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B0D97C(this);
  return data->fields.svtlimit;
}


int32_t __fastcall BattleCommandComponent__getUniqueID(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B0D97C(this);
  return data->fields.uniqueId;
}


BattleCommandSealStatus_o *__fastcall BattleCommandComponent__get_SealStatus(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCommandSealStatus_o *result; // x0
  BattleCommandSealStatus_o **p_sealStatus; // x19
  BattleCommandSealStatus_o *sealStatus; // t1
  BattleCommandSealStatus_o *v7; // x20
  const MethodInfo *v8; // x1

  if ( (byte_421144A & 1) == 0 )
  {
    sub_B0D8A4(&BattleCommandSealStatus_TypeInfo, method);
    byte_421144A = 1;
  }
  sealStatus = this->fields.sealStatus;
  p_sealStatus = &this->fields.sealStatus;
  result = sealStatus;
  if ( !sealStatus )
  {
    v7 = (BattleCommandSealStatus_o *)sub_B0D974(BattleCommandSealStatus_TypeInfo, method, v2);
    BattleCommandSealStatus___ctor(v7, v8);
    *p_sealStatus = v7;
    sub_B0D840(p_sealStatus, v7);
    return *p_sealStatus;
  }
  return result;
}


bool __fastcall BattleCommandComponent__get_isKindOfDontAction(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  BattleCommandSealStatus_o *SealStatus; // x0
  const MethodInfo *v3; // x1

  SealStatus = BattleCommandComponent__get_SealStatus(this, method);
  if ( !SealStatus )
    sub_B0D97C(0LL);
  return BattleCommandSealStatus__get_HasKindOfDontAction(SealStatus, v3);
}


bool __fastcall BattleCommandComponent__get_isSealed(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandSealStatus_o *SealStatus; // x0
  const MethodInfo *v3; // x1

  SealStatus = BattleCommandComponent__get_SealStatus(this, method);
  if ( !SealStatus )
    sub_B0D97C(0LL);
  return BattleCommandSealStatus__get_HasKindOfSealed(SealStatus, v3);
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
  __int64 v7; // x21
  unsigned __int64 max_length; // x9
  unsigned __int64 v9; // x23
  UnityEngine_Object_o *v10; // x20
  struct UnityEngine_GameObject_array *v11; // x8
  __int64 v12; // x0

  if ( (byte_421146E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421146E = 1;
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
LABEL_17:
    sub_B0D97C(nomalwidget);
  }
  v7 = 4LL;
  while ( 1 )
  {
    max_length = addObjectList->max_length;
    v9 = v7 - 4;
    if ( v7 - 4 >= (int)max_length )
      break;
    if ( v9 >= max_length )
      goto LABEL_19;
    v10 = (UnityEngine_Object_o *)*((_QWORD *)&addObjectList->obj.klass + v7);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    nomalwidget = (struct UIWidget_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
    if ( ((unsigned __int8)nomalwidget & 1) != 0 )
    {
      v11 = this->fields.addObjectList;
      if ( !v11 )
        goto LABEL_17;
      if ( v9 >= v11->max_length )
      {
LABEL_19:
        v12 = sub_B0D9A8(nomalwidget);
        sub_B0D948(v12, 0LL);
      }
      nomalwidget = (struct UIWidget_o *)*((_QWORD *)&v11->obj.klass + v7);
      if ( !nomalwidget )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nomalwidget, 0, 0LL);
    }
    addObjectList = this->fields.addObjectList;
    ++v7;
    if ( !addObjectList )
      goto LABEL_17;
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
    sub_B0D97C(this);
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
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
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
  System_Object_array *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // x22
  __int64 v17; // x1
  Il2CppObject *v18; // x22
  __int64 v19; // x1
  Il2CppObject *v20; // x22
  __int64 v21; // x1
  Il2CppObject *v22; // x22
  System_Collections_Hashtable_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x20
  System_Object_array *v25; // x21
  __int64 v26; // x1
  Il2CppObject *v27; // x22
  __int64 v28; // x1
  Il2CppObject *v29; // x22
  System_Collections_Hashtable_o *v30; // x0
  const MethodInfo *v31; // x2
  System_Collections_IEnumerator_o *v32; // x0
  __int64 v33; // x0
  __int64 v34; // x0
  float v35; // [xsp+0h] [xbp-60h] BYREF
  int v36; // [xsp+4h] [xbp-5Ch] BYREF
  float v37; // [xsp+8h] [xbp-58h] BYREF
  int v38; // [xsp+Ch] [xbp-54h] BYREF
  int v39; // [xsp+18h] [xbp-48h] BYREF
  int v40; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_421146C & 1) == 0 )
  {
    sub_B0D8A4(&object___TypeInfo, method);
    sub_B0D8A4(&float_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_23394/*"x"*/, v6);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v7);
    sub_B0D8A4(&StringLiteral_23486/*"y"*/, v8);
    sub_B0D8A4(&StringLiteral_23530/*"z"*/, v9);
    sub_B0D8A4(&iTween_TypeInfo, v10);
    byte_421146C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12 = sub_B0D8BC(object___TypeInfo, 8LL);
  if ( !v12 )
    goto LABEL_59;
  v13 = (System_Object_array *)v12;
  v14 = StringLiteral_23394/*"x"*/;
  if ( StringLiteral_23394/*"x"*/ )
  {
    v14 = sub_B0D964(StringLiteral_23394/*"x"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_58;
    v15 = StringLiteral_23394/*"x"*/;
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v13->max_length )
    goto LABEL_57;
  v13->m_Items[0] = (Il2CppObject *)v15;
  sub_B0D840(v13->m_Items, v15);
  v40 = 0x40000000;
  v14 = j_il2cpp_value_box_0(float_TypeInfo, &v40);
  v16 = (Il2CppObject *)v14;
  if ( v14 )
  {
    v14 = sub_B0D964(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_58;
  }
  if ( v13->max_length <= 1 )
    goto LABEL_57;
  v13->m_Items[1] = v16;
  sub_B0D840(&v13->m_Items[1], v16);
  v14 = StringLiteral_23486/*"y"*/;
  if ( StringLiteral_23486/*"y"*/ )
  {
    v14 = sub_B0D964(StringLiteral_23486/*"y"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_58;
    v17 = StringLiteral_23486/*"y"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v13->max_length <= 2 )
    goto LABEL_57;
  v13->m_Items[2] = (Il2CppObject *)v17;
  sub_B0D840(&v13->m_Items[2], v17);
  v39 = 0x40000000;
  v14 = j_il2cpp_value_box_0(float_TypeInfo, &v39);
  v18 = (Il2CppObject *)v14;
  if ( v14 )
  {
    v14 = sub_B0D964(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_58;
  }
  if ( v13->max_length <= 3 )
    goto LABEL_57;
  v13->m_Items[3] = v18;
  sub_B0D840(&v13->m_Items[3], v18);
  v14 = StringLiteral_23530/*"z"*/;
  if ( StringLiteral_23530/*"z"*/ )
  {
    v14 = sub_B0D964(StringLiteral_23530/*"z"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_58;
    v19 = StringLiteral_23530/*"z"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v13->max_length <= 4 )
    goto LABEL_57;
  v13->m_Items[4] = (Il2CppObject *)v19;
  sub_B0D840(&v13->m_Items[4], v19);
  v38 = 1065353216;
  v14 = j_il2cpp_value_box_0(float_TypeInfo, &v38);
  v20 = (Il2CppObject *)v14;
  if ( v14 )
  {
    v14 = sub_B0D964(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_58;
  }
  if ( v13->max_length <= 5 )
    goto LABEL_57;
  v13->m_Items[5] = v20;
  sub_B0D840(&v13->m_Items[5], v20);
  v14 = StringLiteral_22753/*"time"*/;
  if ( StringLiteral_22753/*"time"*/ )
  {
    v14 = sub_B0D964(StringLiteral_22753/*"time"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_58;
    v21 = StringLiteral_22753/*"time"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v13->max_length <= 6 )
    goto LABEL_57;
  v13->m_Items[6] = (Il2CppObject *)v21;
  sub_B0D840(&v13->m_Items[6], v21);
  v37 = ftime + 0.1;
  v14 = j_il2cpp_value_box_0(float_TypeInfo, &v37);
  v22 = (Il2CppObject *)v14;
  if ( v14 )
  {
    v14 = sub_B0D964(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_58;
  }
  if ( v13->max_length <= 7 )
    goto LABEL_57;
  v13->m_Items[7] = v22;
  sub_B0D840(&v13->m_Items[7], v22);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v23 = iTween__Hash(v13, 0LL);
  iTween__ScaleTo_42390420(gameObject, v23, 0LL);
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12 = sub_B0D8BC(object___TypeInfo, 4LL);
  if ( !v12 )
LABEL_59:
    sub_B0D97C(v12);
  v25 = (System_Object_array *)v12;
  v14 = StringLiteral_23530/*"z"*/;
  if ( StringLiteral_23530/*"z"*/ )
  {
    v14 = sub_B0D964(StringLiteral_23530/*"z"*/, v25->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_58;
    v26 = StringLiteral_23530/*"z"*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( !v25->max_length )
    goto LABEL_57;
  v25->m_Items[0] = (Il2CppObject *)v26;
  sub_B0D840(v25->m_Items, v26);
  v36 = 1144258560;
  v14 = j_il2cpp_value_box_0(float_TypeInfo, &v36);
  v27 = (Il2CppObject *)v14;
  if ( v14 )
  {
    v14 = sub_B0D964(v14, v25->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_58;
  }
  if ( v25->max_length <= 1 )
    goto LABEL_57;
  v25->m_Items[1] = v27;
  sub_B0D840(&v25->m_Items[1], v27);
  v14 = StringLiteral_22753/*"time"*/;
  if ( StringLiteral_22753/*"time"*/ )
  {
    v14 = sub_B0D964(StringLiteral_22753/*"time"*/, v25->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_58;
    v28 = StringLiteral_22753/*"time"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( v25->max_length <= 2 )
    goto LABEL_57;
  v25->m_Items[2] = (Il2CppObject *)v28;
  sub_B0D840(&v25->m_Items[2], v28);
  v35 = ftime;
  v14 = j_il2cpp_value_box_0(float_TypeInfo, &v35);
  v29 = (Il2CppObject *)v14;
  if ( v14 )
  {
    v14 = sub_B0D964(v14, v25->obj.klass->_1.element_class);
    if ( !v14 )
    {
LABEL_58:
      v34 = sub_B0D99C();
      sub_B0D948(v34, 0LL);
    }
  }
  if ( v25->max_length <= 3 )
  {
LABEL_57:
    v33 = sub_B0D9A8(v14);
    sub_B0D948(v33, 0LL);
  }
  v25->m_Items[3] = v29;
  sub_B0D840(&v25->m_Items[3], v29);
  v30 = iTween__Hash(v25, 0LL);
  iTween__RotateTo_42395512(v24, v30, 0LL);
  v32 = BattleCommandComponent__fadeoutEffect(this, 1, v31);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v32, 0LL);
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
  BattleCommandComponent_o *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x0

  v2 = this;
  if ( (byte_421145E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    this = (BattleCommandComponent_o *)sub_B0D8A4(&StringLiteral_18309/*"effect/ef_noblecard"*/, v3);
    byte_421145E = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_21;
  if ( effectobj->max_length <= 2 )
    goto LABEL_22;
  v5 = (UnityEngine_Object_o *)effectobj->m_Items[2];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v2->fields.effectobj;
    if ( !v6 )
      goto LABEL_21;
    if ( v6->max_length <= 2 )
      goto LABEL_22;
    v7 = (UnityEngine_Object_o *)v6->m_Items[2];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__DestroyImmediate_34935488(v7, 0LL);
  }
  this = (BattleCommandComponent_o *)v2->fields.nomalwidget;
  if ( !this
    || (v8 = v2->fields.effectobj,
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject_18711800(
                                             (BaseMonoBehaviour_o *)v2,
                                             (System_String_o *)StringLiteral_18309/*"effect/ef_noblecard"*/,
                                             transform,
                                             0LL,
                                             0LL),
        !v8) )
  {
LABEL_21:
    sub_B0D97C(this);
  }
  v10 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_B0D964(this, v8->obj.klass->_1.element_class);
    if ( !this )
    {
      v12 = sub_B0D99C();
      sub_B0D948(v12, 0LL);
    }
  }
  if ( v8->max_length <= 2 )
  {
LABEL_22:
    v11 = sub_B0D9A8(this);
    sub_B0D948(v11, 0LL);
  }
  v8->m_Items[2] = (UnityEngine_GameObject_o *)v10;
  sub_B0D840(&v8->m_Items[2], v10);
}


void __fastcall BattleCommandComponent__resetAddObject(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 gameObject; // x0
  __int64 v6; // x8
  __int64 v7; // x20
  unsigned __int64 v8; // x24
  __int64 v9; // x25
  UnityEngine_Transform_o *objectRoot; // x21
  __int64 v11; // x22
  System_String_o *v12; // x23
  UnityEngine_Object_o *NodeFromName; // x21
  struct UnityEngine_GameObject_array *addObjectList; // x22
  __int64 v15; // x23
  __int64 v16; // x21
  Il2CppClass **v17; // x0
  struct UnityEngine_GameObject_array *v18; // x8
  __int64 v19; // x0
  __int64 v20; // x0
  unsigned int v21; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4211457 & 1) == 0 )
  {
    sub_B0D8A4(&BattleCommandComponent_ADDOBJECT_TYPE___TypeInfo, method);
    sub_B0D8A4(&BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_4211457 = 1;
  }
  v21 = 0;
  gameObject = sub_B0D8BC(BattleCommandComponent_ADDOBJECT_TYPE___TypeInfo, 2LL);
  if ( !gameObject )
LABEL_24:
    sub_B0D97C(gameObject);
  v6 = *(_QWORD *)(gameObject + 24);
  v7 = gameObject;
  if ( (unsigned int)v6 <= 1 )
    goto LABEL_25;
  *(_DWORD *)(gameObject + 36) = 1;
  if ( (int)v6 >= 1 )
  {
    v8 = 0LL;
    v9 = gameObject + 32;
    while ( v8 < (unsigned int)v6 )
    {
      v21 = *(_DWORD *)(v9 + 4 * v8);
      objectRoot = this->fields.objectRoot;
      gameObject = j_il2cpp_value_box_0(BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo, &v21);
      if ( !gameObject )
        goto LABEL_24;
      v11 = gameObject;
      v12 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 360LL))(
                                 gameObject,
                                 *(_QWORD *)(*(_QWORD *)gameObject + 368LL));
      v21 = *(_DWORD *)j_il2cpp_object_unbox_0(v11);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(objectRoot, v12, 1, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
      if ( (gameObject & 1) != 0 )
      {
        if ( !NodeFromName )
          goto LABEL_24;
        addObjectList = this->fields.addObjectList;
        v15 = (int)v21;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NodeFromName, 0LL);
        if ( !addObjectList )
          goto LABEL_24;
        v16 = gameObject;
        if ( gameObject )
        {
          gameObject = sub_B0D964(gameObject, addObjectList->obj.klass->_1.element_class);
          if ( !gameObject )
          {
            v20 = sub_B0D99C();
            sub_B0D948(v20, 0LL);
          }
        }
        if ( (unsigned int)v15 >= addObjectList->max_length )
          break;
        v17 = &addObjectList->obj.klass + v15;
        v17[4] = (Il2CppClass *)v16;
        sub_B0D840(v17 + 4, v16);
        v18 = this->fields.addObjectList;
        if ( !v18 )
          goto LABEL_24;
        if ( v21 >= v18->max_length )
          break;
        gameObject = (__int64)v18->m_Items[v21];
        if ( !gameObject )
          goto LABEL_24;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      LODWORD(v6) = *(_DWORD *)(v7 + 24);
      if ( (__int64)++v8 >= (int)v6 )
        return;
    }
LABEL_25:
    v19 = sub_B0D9A8(gameObject);
    sub_B0D948(v19, 0LL);
  }
}


void __fastcall BattleCommandComponent__resetComboData(BattleCommandComponent_o *this, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  struct UnityEngine_GameObject_array *effectobj; // x20
  __int64 v5; // x8
  unsigned __int64 v6; // x21
  UnityEngine_Object_o *v7; // x19
  __int64 v8; // x0

  if ( (byte_421146A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421146A = 1;
  }
  BattleCommandComponent__DestroyEffectObject1(this, method);
  effectobj = this->fields.effectobj;
  if ( !effectobj )
    sub_B0D97C(v3);
  v5 = *(_QWORD *)&effectobj->max_length;
  if ( (int)v5 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v5 )
      {
        v8 = sub_B0D9A8(v3);
        sub_B0D948(v8, 0LL);
      }
      v7 = (UnityEngine_Object_o *)effectobj->m_Items[v6];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v3 = UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
      if ( v3 )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34935276(v7, 0LL);
      }
      LODWORD(v5) = effectobj->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v5 );
  }
}


void __fastcall BattleCommandComponent__resetCriticalLabel(BattleCommandComponent_o *this, const MethodInfo *method)
{
  DrumRollLabel_o *criticallabel; // x0

  this->fields.boostedCriticalRate = 0;
  BattleCommandComponent__ResetCriticalLabelColor(this, method);
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel
    || (DrumRollLabel__setParam(criticallabel, 0, 0LL), (criticallabel = this->fields.criticallabel) == 0LL) )
  {
    sub_B0D97C(criticallabel);
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
  __int64 v12; // x0
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4211477 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    this = (BattleCommandComponent_o *)sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v3);
    byte_4211477 = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_20;
  uniqueId = data->fields.uniqueId;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__StopVoice(uniqueId, 0.0, 0LL);
  white = UnityEngine_Color__get_white(0LL);
  BattleCommandComponent__SetCardColor(v2, white, v6);
  BattleCommandComponent__resetSelectStamp(v2, v7);
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_20;
  if ( effectobj->max_length <= 3 )
    goto LABEL_21;
  v9 = (UnityEngine_Object_o *)effectobj->m_Items[3];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = v2->fields.effectobj;
    if ( v10 )
    {
      if ( v10->max_length > 3 )
      {
        v11 = (UnityEngine_Object_o *)v10->m_Items[3];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34935276(v11, 0LL);
        return;
      }
LABEL_21:
      v12 = sub_B0D9A8(this);
      sub_B0D948(v12, 0LL);
    }
LABEL_20:
    sub_B0D97C(this);
  }
}


void __fastcall BattleCommandComponent__resetSelectStamp(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  __int64 v6; // x0

  v2 = this;
  if ( (byte_4211462 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4211462 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_14;
  if ( effectobj->max_length <= 5 )
  {
LABEL_15:
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
  }
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[5];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_14;
    if ( v5->max_length > 5 )
    {
      this = (BattleCommandComponent_o *)v2->fields.spawner;
      if ( this )
      {
        Spawner__Despawn((Spawner_o *)this, v5->m_Items[5], 1, 0LL);
        return;
      }
LABEL_14:
      sub_B0D97C(this);
    }
    goto LABEL_15;
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
  __int64 v29; // x1
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  unsigned __int64 data; // x0
  const MethodInfo *v34; // x1
  struct BattleCommandData_o *v35; // x8
  int treasureDvc; // w21
  Voice_BATTLE_array *v37; // x21
  System_String_o *FileName; // x0
  const MethodInfo *v39; // x2
  System_Array_o *v40; // x0
  __int64 *v41; // x8
  __int64 v42; // x1
  const MethodInfo *v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_KeyValuePair_string__int___o *v45; // x21
  BattleCommandComponent___c_c *v46; // x0
  struct BattleCommandComponent___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_string__int___int__o *_9__186_0; // x22
  Il2CppObject *v49; // x23
  struct BattleCommandComponent___c_StaticFields *v50; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Int32_array *v52; // x0
  int32_t size; // w25
  int v54; // w22
  struct BattleCommandData_o *v55; // x8
  System_String_o *key; // x21
  int32_t uniqueId; // w23
  System_String_o *LastVoiceType; // x0
  int v59; // w22
  struct BattleCommandData_o *v60; // x8
  int32_t svtId; // w23
  VoiceMaster_o *v62; // x22
  const MethodInfo *v63; // x4
  struct BattleServantData_o *svtData; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleCommandData_o *v66; // x8
  int32_t v67; // w2
  struct BattleServantData_o *v68; // x8
  UnityEngine_Object_o *ServantActor; // x22
  int32_t v70; // w22
  struct BattleServantData_o *v71; // x8
  struct BattleCommandData_o *v72; // x9
  int32_t v73; // w23
  int32_t overwriteSvtVoiceId; // w25
  int32_t v75; // w24
  System_String_o *v76; // x21
  const MethodInfo *v77; // x1
  Il2CppObject *v78; // x0
  __int64 *v79; // x8
  const MethodInfo *v80; // x1
  struct UnityEngine_GameObject_array *effectobj; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v83; // x21
  __int64 v84; // x8
  __int64 v85; // x0
  __int64 v86; // x0
  int v87; // [xsp+4h] [xbp-4Ch] BYREF
  System_Collections_Generic_List_KeyValuePair_string__int___o *voiceInfoList; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Color_o grey; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4211473 & 1) == 0 )
  {
    sub_B0D8A4(&Voice_BATTLE___TypeInfo, *(_QWORD *)&targetIndex);
    sub_B0D8A4(&Method_BasicHelper_IndexValue_KeyValuePair_string__int____, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoiceMaster___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___int___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_B0D8A4(&Method_System_Func_KeyValuePair_string__int___int___ctor__, v9);
    sub_B0D8A4(&System_Func_KeyValuePair_string__int___int__TypeInfo, v10);
    sub_B0D8A4(&int_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Count__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Item__, v14);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v15);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__388AFD0FB77AF6556B184A69B44D84800D854675D6242CF90106726D5CB5F546,
      v18);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__465D7DAC1D1469B8AAD4256C55331C9F60FE5E94AD5B4D3AC8992CB164DDDCE3,
      v19);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__71A03FE3843FC2331F63AFCE9FB6609CA17FF235B50C9A2A810635482008B1D0,
      v20);
    sub_B0D8A4(&Method_BattleCommandComponent___c__selectCard_b__186_0__, v21);
    sub_B0D8A4(&BattleCommandComponent___c_TypeInfo, v22);
    sub_B0D8A4(&Voice_TypeInfo, v23);
    sub_B0D8A4(&StringLiteral_16268/*"a"*/, v24);
    sub_B0D8A4(&StringLiteral_7066/*"HEROINE_CHANGECARDVOICE"*/, v25);
    sub_B0D8A4(&StringLiteral_18304/*"effect/ef_commandup_{0}{1:00}"*/, v26);
    sub_B0D8A4(&StringLiteral_21666/*"q"*/, v27);
    sub_B0D8A4(&StringLiteral_16596/*"b"*/, v28);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v29);
    byte_4211473 = 1;
  }
  voiceInfoList = 0LL;
  grey = UnityEngine_Color__get_grey(0LL);
  BattleCommandComponent__SetCardColor(this, grey, v30);
  BattleCommandComponent__stopFirstAura(this, v31);
  data = (unsigned __int64)this->fields.data;
  if ( !data )
    goto LABEL_89;
  if ( BattleCommandData__get_type((BattleCommandData_o *)data, v32) == 5 )
    return;
  data = BattleCommandComponent__get_isKindOfDontAction(this, v34);
  if ( (data & 1) != 0 )
    return;
  v35 = this->fields.data;
  if ( !v35 )
    goto LABEL_89;
  treasureDvc = v35->fields.treasureDvc;
  if ( treasureDvc <= 0 )
  {
    if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    FileName = Voice__getFileName(245, 0LL);
    if ( BattleCommandComponent__IsValidVoiceType(this, FileName, v39) )
    {
      v40 = (System_Array_o *)sub_B0D8BC(Voice_BATTLE___TypeInfo, 6LL);
      v41 = &Field__PrivateImplementationDetails__71A03FE3843FC2331F63AFCE9FB6609CA17FF235B50C9A2A810635482008B1D0;
    }
    else
    {
      v40 = (System_Array_o *)sub_B0D8BC(Voice_BATTLE___TypeInfo, 3LL);
      v41 = &Field__PrivateImplementationDetails__465D7DAC1D1469B8AAD4256C55331C9F60FE5E94AD5B4D3AC8992CB164DDDCE3;
    }
    goto LABEL_19;
  }
  if ( treasureDvc != ConstantMaster__getValue((System_String_o *)StringLiteral_7066/*"HEROINE_CHANGECARDVOICE"*/, 0LL) )
  {
    v40 = (System_Array_o *)sub_B0D8BC(Voice_BATTLE___TypeInfo, 12LL);
    v41 = &Field__PrivateImplementationDetails__388AFD0FB77AF6556B184A69B44D84800D854675D6242CF90106726D5CB5F546;
LABEL_19:
    v42 = *v41;
    v37 = (Voice_BATTLE_array *)v40;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v40, (System_RuntimeFieldHandle_o)v42, 0LL);
    goto LABEL_20;
  }
  data = sub_B0D8BC(Voice_BATTLE___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_89;
  v37 = (Voice_BATTLE_array *)data;
  if ( !*(_DWORD *)(data + 24) )
  {
LABEL_90:
    v85 = sub_B0D9A8(data);
    sub_B0D948(v85, 0LL);
  }
  *(_DWORD *)(data + 32) = 252;
LABEL_20:
  data = (unsigned __int64)this->fields.svtData;
  if ( !data )
    goto LABEL_89;
  if ( BattleServantData__TryGetPlayableVoiceInfoList((BattleServantData_o *)data, &voiceInfoList, v37, 0LL) )
  {
    v45 = voiceInfoList;
    v46 = BattleCommandComponent___c_TypeInfo;
    if ( (BYTE3(BattleCommandComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
      v46 = BattleCommandComponent___c_TypeInfo;
    }
    static_fields = v46->static_fields;
    _9__186_0 = static_fields->__9__186_0;
    if ( !_9__186_0 )
    {
      if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v46);
        static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
      }
      v49 = (Il2CppObject *)static_fields->__9;
      _9__186_0 = (System_Func_KeyValuePair_string__int___int__o *)sub_B0D974(
                                                                     System_Func_KeyValuePair_string__int___int__TypeInfo,
                                                                     v43,
                                                                     v44);
      System_Func_KeyValuePair_string__int___int____ctor(
        _9__186_0,
        v49,
        Method_BattleCommandComponent___c__selectCard_b__186_0__,
        (const MethodInfo_260C9E0 *)Method_System_Func_KeyValuePair_string__int___int___ctor__);
      v50 = BattleCommandComponent___c_TypeInfo->static_fields;
      v50->__9__186_0 = _9__186_0;
      sub_B0D840(&v50->__9__186_0, _9__186_0);
    }
    v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_string__int___int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v45,
                                                                 (System_Func_TSource__TResult__o *)_9__186_0,
                                                                 (const MethodInfo_1B4F7F8 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__int___int___);
    v52 = System_Linq_Enumerable__ToArray_int_(
            v51,
            (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    data = RandomUtility__GetRandomRangeIndex(v52, 0, 0LL);
    if ( !voiceInfoList )
      goto LABEL_89;
    size = voiceInfoList->fields._size;
    v54 = data;
    if ( !size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    data = (unsigned __int64)BasicHelper__IndexValue_KeyValuePair_string__int__(
                               (System_Collections_Generic_List_T__o *)voiceInfoList,
                               data,
                               voiceInfoList->fields._items->m_Items[0],
                               (const MethodInfo_1709268 *)Method_BasicHelper_IndexValue_KeyValuePair_string__int____).fields.key;
    v55 = this->fields.data;
    if ( !v55 )
      goto LABEL_89;
    key = (System_String_o *)data;
    uniqueId = v55->fields.uniqueId;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    LastVoiceType = ServantAssetLoadManager__GetLastVoiceType(uniqueId, 0LL);
    data = System_String__op_Equality(LastVoiceType, key, 0LL);
    if ( (data & 1) != 0 )
    {
      if ( !voiceInfoList )
        goto LABEL_89;
      v59 = (v54 + 1) % size;
      if ( !voiceInfoList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      key = BasicHelper__IndexValue_KeyValuePair_string__int__(
              (System_Collections_Generic_List_T__o *)voiceInfoList,
              v59,
              voiceInfoList->fields._items->m_Items[0],
              (const MethodInfo_1709268 *)Method_BasicHelper_IndexValue_KeyValuePair_string__int____).fields.key;
    }
    data = (unsigned __int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !data )
      goto LABEL_89;
    data = (unsigned __int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)data,
                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoiceMaster___);
    v60 = this->fields.data;
    if ( !v60 )
      goto LABEL_89;
    svtId = v60->fields.svtId;
    v62 = (VoiceMaster_o *)data;
    data = (unsigned __int64)System_String__Concat_43849904((System_String_o *)StringLiteral_15952/*"_"*/, key, 0LL);
    if ( !v62 )
      goto LABEL_89;
    data = VoiceMaster__getFlagRequestNumber(v62, svtId, (System_String_o *)data, 0, 0LL);
    if ( (_DWORD)data )
    {
      svtData = this->fields.svtData;
      if ( !svtData )
        goto LABEL_89;
      if ( !svtData->fields.followerType )
      {
        perf = this->fields.perf;
        if ( !perf )
          goto LABEL_89;
        v66 = this->fields.data;
        if ( !v66 )
          goto LABEL_89;
        v67 = data;
        data = (unsigned __int64)perf->fields.data;
        if ( !data )
          goto LABEL_89;
        BattleData__AddServantVoicePlayed_18494184((BattleData_o *)data, v66->fields.svtId, v67, 0, v63);
      }
    }
    v68 = this->fields.svtData;
    if ( !v68 )
      goto LABEL_89;
    data = (unsigned __int64)this->fields.perf;
    if ( !data )
      goto LABEL_89;
    ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                             (BattlePerformance_o *)data,
                                             v68->fields.uniqueId,
                                             0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    data = UnityEngine_Object__op_Inequality(ServantActor, 0LL, 0LL);
    if ( (data & 1) != 0 )
    {
      if ( !ServantActor )
        goto LABEL_89;
      if ( !BattleActorControl__isNoVoice((BattleActorControl_o *)ServantActor, 0LL) )
      {
        data = (unsigned __int64)this->fields.svtData;
        if ( data )
        {
          data = BattleServantData__getSvtId((BattleServantData_o *)data, 0LL);
          if ( this->fields.svtData )
          {
            v70 = data;
            data = BattleServantData__getDispLimitCount(this->fields.svtData, 1, 0LL);
            v71 = this->fields.svtData;
            if ( v71 )
            {
              v72 = this->fields.data;
              if ( v72 )
              {
                v73 = data;
                overwriteSvtVoiceId = v71->fields.overwriteSvtVoiceId;
                v75 = v72->fields.uniqueId;
                if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                }
                ServantAssetLoadManager__playBattleVoice(v70, v73, overwriteSvtVoiceId, key, 1.0, 0LL, v75, 0, 0LL);
                goto LABEL_68;
              }
            }
          }
        }
LABEL_89:
        sub_B0D97C(data);
      }
    }
  }
LABEL_68:
  data = (unsigned __int64)this->fields.data;
  if ( !data )
    goto LABEL_89;
  v76 = (System_String_o *)StringLiteral_18304/*"effect/ef_commandup_{0}{1:00}"*/;
  if ( BattleCommandData__get_type((BattleCommandData_o *)data, v43) == 3 )
  {
    v87 = targetIndex + 1;
    v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87);
    v79 = &StringLiteral_21666/*"q"*/;
LABEL_77:
    v76 = System_String__Format_43845440(v76, (Il2CppObject *)*v79, v78, 0LL);
    goto LABEL_78;
  }
  data = (unsigned __int64)this->fields.data;
  if ( !data )
    goto LABEL_89;
  if ( BattleCommandData__get_type((BattleCommandData_o *)data, v77) == 1 )
  {
    v87 = targetIndex + 1;
    v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87);
    v79 = &StringLiteral_16268/*"a"*/;
    goto LABEL_77;
  }
  data = (unsigned __int64)this->fields.data;
  if ( !data )
    goto LABEL_89;
  if ( BattleCommandData__get_type((BattleCommandData_o *)data, v80) == 2 )
  {
    v87 = targetIndex + 1;
    v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87);
    v79 = &StringLiteral_16596/*"b"*/;
    goto LABEL_77;
  }
LABEL_78:
  data = (unsigned __int64)this->fields.nomalwidget;
  if ( !data )
    goto LABEL_89;
  effectobj = this->fields.effectobj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
  data = (unsigned __int64)BaseMonoBehaviour__createObject_18711800(
                             (BaseMonoBehaviour_o *)this,
                             v76,
                             transform,
                             0LL,
                             0LL);
  if ( !effectobj )
    goto LABEL_89;
  v83 = (UnityEngine_GameObject_o *)data;
  if ( data )
  {
    data = sub_B0D964(data, effectobj->obj.klass->_1.element_class);
    if ( !data )
    {
      v86 = sub_B0D99C();
      sub_B0D948(v86, 0LL);
    }
  }
  if ( effectobj->max_length <= 3 )
    goto LABEL_90;
  effectobj->m_Items[3] = v83;
  sub_B0D840(&effectobj->m_Items[3], v83);
  data = (unsigned __int64)this->fields.perf;
  if ( !data )
    goto LABEL_89;
  v84 = *(_QWORD *)(data + 32);
  if ( !v84 )
    goto LABEL_89;
  if ( !targetIndex && *(int *)(v84 + 200) >= 1 )
    BattlePerformance__SetLimitTurnEffectFlag((BattlePerformance_o *)data, 0, 0LL);
}


void __fastcall BattleCommandComponent__setAttackCommandData(
        BattleCommandComponent_o *this,
        BattleCommandComponent_o *comp,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6
  struct BattlePerformance_o *perf; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x4
  struct BattleCommandData_o *data; // x8

  if ( !comp
    || (BattleCommandComponent__setData(this, comp->fields.data, comp->fields.svtData, 1, 1, 0, v3),
        perf = comp->fields.perf,
        this->fields.perf = perf,
        sub_B0D840(&this->fields.perf, perf),
        BattleCommandComponent__SetPowerUpCardValue(this, 0, v7),
        (data = comp->fields.data) == 0LL) )
  {
    sub_B0D97C(this);
  }
  BattleCommandComponent__SetPowerUpCardIcon(this, data->fields.commandCardParam, 2, 0, v8);
}


void __fastcall BattleCommandComponent__setBuffIconList(
        BattleCommandComponent_o *this,
        BattleBuffData_o *buffData,
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
  UnityEngine_Component_o *buffRoot; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x21
  const MethodInfo *v30; // x1
  BuffList_TYPE_array *qabTypes; // x22
  int32_t type; // w0
  System_Int32_array *Individualities; // x23
  BattleBuffData_BuffData_array *ShowCommandBuffListActive; // x0
  const MethodInfo *v35; // x1
  BuffList_TYPE_array *v36; // x22
  int32_t v37; // w0
  System_Int32_array *v38; // x23
  BattleBuffData_BuffData_array *ShowCommandBuffListPassive; // x0
  System_Collections_Generic_IEnumerable_T__o *BuffList_30786564; // x0
  const MethodInfo *v41; // x1
  BuffList_TYPE_array *tdTypes; // x22
  BattleBuffData_BuffData_array *v43; // x0
  System_Collections_Generic_IEnumerable_T__o *v44; // x0
  struct BuffList_TYPE_array *v45; // x22
  BattleBuffData_BuffData_array *v46; // x3
  BattleBuffData_o *v47; // x0
  BuffList_TYPE_array *v48; // x1
  System_Int32_array *v49; // x2
  BuffList_TYPE_array *noneTdQabTypes; // x22
  int32_t v51; // w0
  System_Int32_array *v52; // x23
  BattleBuffData_BuffData_array *v53; // x0
  System_Collections_Generic_IEnumerable_T__o *v54; // x0
  const MethodInfo *v55; // x1
  struct BuffList_TYPE_array *v56; // x22
  int32_t v57; // w0
  System_Int32_array *v58; // x23
  System_Collections_Generic_IEnumerable_T__o *v59; // x0
  BuffList_TYPE_array *otherTypes; // x22
  BattleBuffData_BuffData_array *v61; // x0
  System_Collections_Generic_IEnumerable_T__o *v62; // x0
  BuffList_TYPE_array *v63; // x22
  BattleBuffData_BuffData_array *v64; // x0
  System_Collections_Generic_IEnumerable_T__o *v65; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v68; // x20
  __int64 v69; // x1
  __int64 v70; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v71; // x20
  __int64 v72; // x1
  __int64 v73; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v74; // x20
  __int64 v75; // x1
  __int64 v76; // x2
  System_Collections_Generic_List_int__o *v77; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  _BOOL8 v79; // x0
  WarEntity_o *Entity; // x0
  WarEntity_o *v81; // x21
  struct BattleServantBuffIconComponent_array *buffIconList; // x8
  unsigned __int64 v83; // x22
  unsigned __int64 max_length; // x9
  signed __int64 size; // x9
  Il2CppClass **v86; // x8
  Il2CppClass *v87; // x21
  BattleServantBuffIconComponent_o *v88; // x0
  int32_t v89; // w1
  __int64 v90; // x0
  System_Collections_Generic_List_Enumerator_T__o v91; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v92; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4211460 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleCommandComponent__setBuffIconList_b__136_0__, buffData);
    sub_B0D8A4(&Method_BattleCommandComponent__setBuffIconList_b__136_1__, v5);
    sub_B0D8A4(&Method_BattleCommandComponent__setBuffIconList_b__136_2__, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BuffMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v22);
    sub_B0D8A4(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v23);
    sub_B0D8A4(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v24);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    byte_4211460 = 1;
  }
  memset(&v92, 0, sizeof(v92));
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
    goto LABEL_40;
  }
  buffRoot = (UnityEngine_Component_o *)this->fields.buffRoot;
  if ( !buffRoot )
    goto LABEL_40;
  buffRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(buffRoot, 0LL);
  if ( !buffRoot )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffRoot, 1, 0LL);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v27,
                                                                                                  v28);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_40;
  qabTypes = this->fields.qabTypes;
  type = BattleCommandData__get_type((BattleCommandData_o *)buffRoot, v30);
  Individualities = CardMaster__getIndividualities(type, 1, 0LL);
  ShowCommandBuffListActive = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
  buffRoot = (UnityEngine_Component_o *)BattleBuffData__getBuffList_30786564(
                                          buffData,
                                          qabTypes,
                                          Individualities,
                                          ShowCommandBuffListActive,
                                          0LL);
  if ( !v29 )
    goto LABEL_40;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v29,
    (System_Collections_Generic_IEnumerable_T__o *)buffRoot,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_40;
  v36 = this->fields.qabTypes;
  v37 = BattleCommandData__get_type((BattleCommandData_o *)buffRoot, v35);
  v38 = CardMaster__getIndividualities(v37, 1, 0LL);
  ShowCommandBuffListPassive = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
  BuffList_30786564 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_30786564(
                                                                       buffData,
                                                                       v36,
                                                                       v38,
                                                                       ShowCommandBuffListPassive,
                                                                       0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v29,
    BuffList_30786564,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  buffRoot = (UnityEngine_Component_o *)this->fields.data;
  if ( !buffRoot )
    goto LABEL_40;
  if ( SLODWORD(buffRoot[2].klass) < 1 )
  {
    noneTdQabTypes = this->fields.noneTdQabTypes;
    v51 = BattleCommandData__get_type((BattleCommandData_o *)buffRoot, v41);
    v52 = CardMaster__getIndividualities(v51, 1, 0LL);
    v53 = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
    v54 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_30786564(
                                                           buffData,
                                                           noneTdQabTypes,
                                                           v52,
                                                           v53,
                                                           0LL);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v29,
      v54,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    buffRoot = (UnityEngine_Component_o *)this->fields.data;
    if ( !buffRoot )
      goto LABEL_40;
    v56 = this->fields.noneTdQabTypes;
    v57 = BattleCommandData__get_type((BattleCommandData_o *)buffRoot, v55);
    v58 = CardMaster__getIndividualities(v57, 1, 0LL);
    v46 = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
    v47 = buffData;
    v48 = v56;
    v49 = v58;
  }
  else
  {
    tdTypes = this->fields.tdTypes;
    v43 = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
    v44 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_30786564(
                                                           buffData,
                                                           tdTypes,
                                                           0LL,
                                                           v43,
                                                           0LL);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v29,
      v44,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    v45 = this->fields.tdTypes;
    v46 = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
    v47 = buffData;
    v48 = v45;
    v49 = 0LL;
  }
  v59 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_30786564(v47, v48, v49, v46, 0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v29,
    v59,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  otherTypes = this->fields.otherTypes;
  v61 = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
  v62 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_30786564(
                                                         buffData,
                                                         otherTypes,
                                                         0LL,
                                                         v61,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v29,
    v62,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v63 = this->fields.otherTypes;
  v64 = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
  v65 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_30786564(
                                                         buffData,
                                                         v63,
                                                         0LL,
                                                         v64,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v29,
    v65,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v68 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                   v66,
                                                                   v67);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v68,
    (Il2CppObject *)this,
    Method_BattleCommandComponent__setBuffIconList_b__136_0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v29,
    (System_Predicate_T__o *)v68,
    (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v71 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                   v69,
                                                                   v70);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v71,
    (Il2CppObject *)this,
    Method_BattleCommandComponent__setBuffIconList_b__136_1__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v29,
    (System_Predicate_T__o *)v71,
    (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v74 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                   v72,
                                                                   v73);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v74,
    (Il2CppObject *)this,
    Method_BattleCommandComponent__setBuffIconList_b__136_2__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v29,
    (System_Predicate_T__o *)v74,
    (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v77 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v75, v76);
  System_Collections_Generic_List_int____ctor(
    v77,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  buffRoot = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !buffRoot )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)buffRoot,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BuffMaster___);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v91,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v29,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v92 = v91;
  while ( 1 )
  {
    v79 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v92,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v79 )
      break;
    if ( !v92.fields.current )
      sub_B0D97C(v79);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B0D97C(v79);
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int32_t)v92.fields.current[1].klass,
               (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    v81 = Entity;
    if ( !Entity )
      sub_B0D97C(0LL);
    if ( !v77 )
      sub_B0D97C(Entity);
    if ( !System_Collections_Generic_List_int___Contains(
            v77,
            (int32_t)Entity->fields.longName,
            (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
      System_Collections_Generic_List_int___Add(
        v77,
        (int32_t)v81->fields.longName,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v92,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  buffIconList = this->fields.buffIconList;
  if ( !buffIconList )
LABEL_40:
    sub_B0D97C(buffRoot);
  v83 = 0LL;
  while ( 1 )
  {
    max_length = buffIconList->max_length;
    if ( (__int64)v83 >= (int)max_length )
      break;
    if ( !v77 )
      goto LABEL_40;
    if ( v83 >= max_length )
    {
      v90 = sub_B0D9A8(buffRoot);
      sub_B0D948(v90, 0LL);
    }
    size = v77->fields._size;
    v86 = &buffIconList->obj.klass + v83;
    v87 = v86[4];
    if ( (__int64)v83 >= size )
    {
      if ( !v87 )
        goto LABEL_40;
      v88 = (BattleServantBuffIconComponent_o *)v86[4];
      v89 = 0;
    }
    else
    {
      if ( v83 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !v87 )
        goto LABEL_40;
      v88 = (BattleServantBuffIconComponent_o *)v86[4];
      v89 = v77->fields._items->m_Items[v83 + 1];
    }
    BattleServantBuffIconComponent__setImageId(v88, v89, 0LL);
    buffIconList = this->fields.buffIconList;
    ++v83;
    if ( !buffIconList )
      goto LABEL_40;
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
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(criticalObject, flg, 0LL);
}


void __fastcall BattleCommandComponent__setData(
        BattleCommandComponent_o *this,
        BattleCommandData_o *indata,
        BattleServantData_o *insvtData,
        bool isAttack,
        bool isShowBuffIcon,
        bool isTDTypeChangeWindow,
        const MethodInfo *method)
{
  __int64 v13; // x1
  struct BattleCommandData_o **p_data; // x24
  Spawner_o *spawner; // x0
  const MethodInfo *v16; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  bool v18; // w25
  bool v19; // w21
  struct UnityEngine_GameObject_array *v20; // x8
  struct UnityEngine_GameObject_array **p_effectobj; // x26
  __int64 v22; // x28
  unsigned __int64 max_length; // x9
  unsigned __int64 v24; // x23
  UnityEngine_Object_o *v25; // x27
  struct UnityEngine_GameObject_array *v26; // x8
  struct UnityEngine_GameObject_array *v27; // x8
  UnityEngine_Object_o *v28; // x27
  __int64 v29; // x0
  const MethodInfo *v30; // x6
  BattleServantData_o *v31; // x1
  BattleBuffData_o *buffData; // x0
  BattleServantData_o *v33; // x1
  struct BattleCommandData_o *v34; // x22
  const MethodInfo *v35; // x2
  struct BattleCommandData_o *data; // x8
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x4
  int32_t commandCardParam; // w1
  BattleCommandComponent_o *v41; // x0
  __int64 v42; // x0
  struct BattleServantData_o **p_svtData; // [xsp+0h] [xbp-60h]
  bool v44; // [xsp+Ch] [xbp-54h]
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4211451 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, indata);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    byte_4211451 = 1;
  }
  p_data = &this->fields.data;
  this->fields.data = indata;
  sub_B0D840(&this->fields.data, indata);
  this->fields.svtData = insvtData;
  p_svtData = &this->fields.svtData;
  sub_B0D840(&this->fields.svtData, insvtData);
  effectobj = this->fields.effectobj;
  this->fields.selectflg = 0;
  if ( !effectobj )
    goto LABEL_25;
  v44 = isAttack;
  v18 = isTDTypeChangeWindow;
  v19 = isShowBuffIcon;
  BattleCommandComponent__DestroyEffectObject1(this, v16);
  v20 = this->fields.effectobj;
  if ( !v20 )
    goto LABEL_25;
  p_effectobj = &this->fields.effectobj;
  v22 = 4LL;
  while ( 1 )
  {
    max_length = v20->max_length;
    v24 = v22 - 4;
    if ( v22 - 4 >= (int)max_length )
      break;
    if ( v24 >= max_length )
      goto LABEL_49;
    v25 = (UnityEngine_Object_o *)*((_QWORD *)&v20->obj.klass + v22);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    spawner = (Spawner_o *)UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
    if ( ((unsigned __int8)spawner & 1) != 0 )
    {
      if ( v24 < 5 )
      {
        v27 = *p_effectobj;
        if ( !*p_effectobj )
          goto LABEL_25;
        if ( v24 >= v27->max_length )
        {
LABEL_49:
          v42 = sub_B0D9A8(spawner);
          sub_B0D948(v42, 0LL);
        }
        v28 = (UnityEngine_Object_o *)*((_QWORD *)&v27->obj.klass + v22);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34935276(v28, 0LL);
      }
      else if ( v22 == 9 )
      {
        v26 = this->fields.effectobj;
        if ( !v26 )
          goto LABEL_25;
        if ( (*(_QWORD *)&v26->max_length & 0xFFFFFFFEuLL) <= 5 )
          goto LABEL_49;
        spawner = this->fields.spawner;
        if ( !spawner )
          goto LABEL_25;
        Spawner__Despawn(spawner, v26->m_Items[5], 1, 0LL);
      }
    }
    v20 = *p_effectobj;
    ++v22;
    if ( !*p_effectobj )
      goto LABEL_25;
  }
  v29 = sub_B0D8BC(UnityEngine_GameObject___TypeInfo, v20->max_length);
  *p_effectobj = (struct UnityEngine_GameObject_array *)v29;
  sub_B0D840(&this->fields.effectobj, v29);
  if ( *p_data )
  {
    if ( (*p_data)->fields.treasureDvc >= 1 )
    {
      v31 = *p_svtData;
      if ( *p_svtData )
      {
        buffData = v31->fields.buffData;
        if ( buffData )
        {
          if ( BattleBuffData__isTDTypeChange(buffData, v31, 0LL) )
          {
            spawner = (Spawner_o *)*p_svtData;
            if ( !*p_svtData )
              goto LABEL_25;
            spawner = (Spawner_o *)BattleServantData__get_TreasureDevice((BattleServantData_o *)spawner, 0LL);
            if ( !spawner )
              goto LABEL_25;
            spawner = (Spawner_o *)TreasureDvcEntity__IsTDTypeChange((TreasureDvcEntity_o *)spawner, 0LL);
            if ( ((unsigned __int8)spawner & 1) != 0 && !v18 )
            {
              v33 = *p_svtData;
              if ( !*p_svtData )
                goto LABEL_25;
              spawner = (Spawner_o *)v33->fields.buffData;
              if ( !spawner )
                goto LABEL_25;
              v34 = *p_data;
              spawner = (Spawner_o *)BattleBuffData__getTDTypeChangeBuffData((BattleBuffData_o *)spawner, v33, 0LL);
              if ( !spawner || !v34 )
                goto LABEL_25;
              v34->fields._type = HIDWORD(spawner->fields.resourcePrecacher);
            }
          }
        }
      }
    }
  }
  BattleCommandComponent__updateView(this, 1, v44, v19, v18, 0, v30);
  data = this->fields.data;
  if ( !data || data->fields.starcount < 10 || !this->fields.isCountUp )
    goto LABEL_45;
  spawner = (Spawner_o *)this->fields.criticalObject;
  if ( !spawner )
LABEL_25:
    sub_B0D97C(spawner);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)spawner, 1, 0LL);
LABEL_45:
  v45.fields.r = 0.0;
  v45.fields.g = 0.0;
  v45.fields.b = 0.0;
  v45.fields.a = 0.0;
  BattleCommandComponent__SetCommandCodeActive(this, v45, 1, v35);
  v46.fields.r = 0.0;
  v46.fields.g = 0.0;
  v46.fields.b = 0.0;
  v46.fields.a = 0.0;
  BattleCommandComponent__SetCommandAssistActive(this, v46, 1, v37);
  if ( indata )
  {
    BattleCommandComponent__SetPowerUpCardValue(this, indata->fields.commandCardParam, v38);
    commandCardParam = indata->fields.commandCardParam;
    v41 = this;
  }
  else
  {
    BattleCommandComponent__SetPowerUpCardValue(this, 0, v38);
    v41 = this;
    commandCardParam = 0;
  }
  BattleCommandComponent__SetPowerUpCardIcon(v41, commandCardParam, 2, 1, v39);
}


void __fastcall BattleCommandComponent__setData_18472464(
        BattleCommandComponent_o *this,
        BattleServantData_o *svtData,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x22
  __int64 v13; // x23
  __int64 v14; // x24
  _DWORD *monitor; // x8
  int32_t v16; // w22
  __int64 v17; // x23
  __int64 v18; // x24
  int32_t v19; // w24
  int32_t CommandDispLimitCount; // w25
  int32_t CommandImageSvtId; // w26
  __int64 v22; // x1
  __int64 v23; // x2
  BattleCommandData_o *v24; // x23
  const MethodInfo *v25; // x5
  const MethodInfo *v26; // x3
  struct BattleBuffData_o *buffData; // x1
  const MethodInfo *v28; // x6
  __int64 v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4211455 & 1) == 0 )
  {
    sub_B0D8A4(&BattleCommandData_TypeInfo, svtData);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4211455 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svtData )
    goto LABEL_18;
  v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v14 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v14;
  *(_QWORD *)&v30.fields.fakeValue = v13;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v30, 0LL);
  if ( !v12 )
    goto LABEL_18;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v12,
                                (int32_t)Instance,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Instance )
  {
    monitor = Instance[1].monitor;
    if ( monitor )
    {
      if ( monitor[6] <= (unsigned int)index )
      {
        v29 = sub_B0D9A8(Instance);
        sub_B0D948(v29, 0LL);
      }
      v16 = monitor[index + 8];
      v18 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v31.fields.currentCryptoKey = v18;
      *(_QWORD *)&v31.fields.fakeValue = v17;
      v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v31, 0LL);
      CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(svtData, 0LL);
      CommandImageSvtId = BattleServantData__GetCommandImageSvtId(svtData, 0LL);
      v24 = (BattleCommandData_o *)sub_B0D974(BattleCommandData_TypeInfo, v22, v23);
      BattleCommandData___ctor_18472988(v24, v16, v19, CommandDispLimitCount, CommandImageSvtId, v25);
      if ( v24 )
      {
        BattleCommandData__SetCommandCardParam(v24, svtData->fields.commandCardParam, index, v26);
        buffData = svtData->fields.buffData;
        v24->fields.battleBuffData = buffData;
        sub_B0D840(&v24->fields.battleBuffData, buffData);
        v24->fields.servantCardIdsIndex = index;
        BattleCommandComponent__setData(this, v24, svtData, 0, 1, 0, v28);
        return;
      }
    }
LABEL_18:
    sub_B0D97C(Instance);
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
  UnityEngine_Object_o *treasureDeviceErrorSprite; // x24
  struct BattleServantBuffIconComponent_array *buffIconList; // x22
  int max_length; // w8
  unsigned int v21; // w23
  BattleServantBuffIconComponent_o *v22; // x8
  UnityEngine_Object_o *powerUpCardValue; // x21
  UnityEngine_Object_o *powerUpCardIcon; // x21
  UnityEngine_Object_o *nowTreasureDeviceTypeImage; // x21
  UnityEngine_Object_o *restTreasureDeviceChangeTurnLabel; // x21
  __int64 v27; // x0

  if ( (byte_421144F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
    byte_421144F = 1;
  }
  bg = (UIWidget_o *)this->fields.bg;
  if ( !bg )
    goto LABEL_107;
  UIWidget__set_depth(bg, basedepth + 1, 0LL);
  bg = (UIWidget_o *)this->fields.facetex;
  if ( !bg )
    goto LABEL_107;
  UIWidget__set_depth(bg, basedepth + 2, 0LL);
  bg = (UIWidget_o *)this->fields.icon;
  if ( !bg )
    goto LABEL_107;
  UIWidget__set_depth(bg, basedepth + 3, 0LL);
  bg = (UIWidget_o *)this->fields.text;
  if ( !bg )
    goto LABEL_107;
  UIWidget__set_depth(bg, basedepth + 4, 0LL);
  bg = (UIWidget_o *)this->fields.nobletex;
  if ( !bg )
    goto LABEL_107;
  UIWidget__set_depth(bg, basedepth + 5, 0LL);
  bg = (UIWidget_o *)this->fields.codeTexture;
  if ( !bg )
    goto LABEL_107;
  UIWidget__set_depth(bg, basedepth + 6, 0LL);
  bg = (UIWidget_o *)this->fields.codeSprite;
  if ( !bg )
    goto LABEL_107;
  v6 = basedepth + 7;
  UIWidget__set_depth(bg, basedepth + 7, 0LL);
  bg = (UIWidget_o *)this->fields.chargeTurnLabel;
  if ( !bg )
    goto LABEL_107;
  v7 = basedepth + 11;
  UIWidget__set_depth(bg, basedepth + 11, 0LL);
  bg = (UIWidget_o *)this->fields.remainingTurnLabel;
  if ( !bg )
    goto LABEL_107;
  UIWidget__set_depth(bg, v7, 0LL);
  assistSprite = (UnityEngine_Object_o *)this->fields.assistSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(assistSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.assistSprite;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, v6, 0LL);
  }
  assistChargeTurnLabel = (UnityEngine_Object_o *)this->fields.assistChargeTurnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(assistChargeTurnLabel, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.assistChargeTurnLabel;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, v7, 0LL);
  }
  assistRemainingTurnLabel = (UnityEngine_Object_o *)this->fields.assistRemainingTurnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(assistRemainingTurnLabel, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.assistRemainingTurnLabel;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, v7, 0LL);
  }
  bg = (UIWidget_o *)this->fields.sealedSprite;
  if ( !bg )
    goto LABEL_107;
  v11 = basedepth + 9;
  UIWidget__set_depth(bg, basedepth + 9, 0LL);
  bg = (UIWidget_o *)this->fields.donotactSprite;
  if ( !bg )
    goto LABEL_107;
  UIWidget__set_depth(bg, v11, 0LL);
  donotsleepSprite = (UnityEngine_Object_o *)this->fields.donotsleepSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(donotsleepSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotsleepSprite;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  donotPermanentSleep = (UnityEngine_Object_o *)this->fields.donotPermanentSleep;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(donotPermanentSleep, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotPermanentSleep;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  unusableShortageStarSprite = (UnityEngine_Object_o *)this->fields.unusableShortageStarSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(unusableShortageStarSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.unusableShortageStarSprite;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  unusableNpSprite = (UnityEngine_Object_o *)this->fields.unusableNpSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(unusableNpSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.unusableNpSprite;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  donotActTypeSprite = (UnityEngine_Object_o *)this->fields.donotActTypeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(donotActTypeSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotActTypeSprite;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, basedepth + 10, 0LL);
  }
  donotActWithTypeSp = (UnityEngine_Object_o *)this->fields.donotActWithTypeSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(donotActWithTypeSp, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.donotActWithTypeSp;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  treasureDeviceErrorSprite = (UnityEngine_Object_o *)this->fields.treasureDeviceErrorSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(treasureDeviceErrorSprite, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.treasureDeviceErrorSprite;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, v11, 0LL);
  }
  GameObjectHelper__addNguiDepth(this->fields.criticalObject, v6, 1, 0LL);
  bg = (UIWidget_o *)this->fields.friendIcon;
  if ( !bg || (UIWidget__set_depth(bg, basedepth + 10, 0LL), (buffIconList = this->fields.buffIconList) == 0LL) )
LABEL_107:
    sub_B0D97C(bg);
  max_length = buffIconList->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    do
    {
      if ( v21 >= max_length )
      {
        v27 = sub_B0D9A8(bg);
        sub_B0D948(v27, 0LL);
      }
      v22 = buffIconList->m_Items[v21];
      if ( !v22 )
        goto LABEL_107;
      bg = (UIWidget_o *)v22->fields.iconSprite;
      if ( !bg )
        goto LABEL_107;
      UIWidget__set_depth(bg, v7, 0LL);
      max_length = buffIconList->max_length;
    }
    while ( (int)++v21 < max_length );
  }
  powerUpCardValue = (UnityEngine_Object_o *)this->fields.powerUpCardValue;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(powerUpCardValue, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.powerUpCardValue;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, basedepth + 8, 0LL);
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(powerUpCardIcon, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.powerUpCardIcon;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, basedepth + 8, 0LL);
  }
  nowTreasureDeviceTypeImage = (UnityEngine_Object_o *)this->fields.nowTreasureDeviceTypeImage;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nowTreasureDeviceTypeImage, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.nowTreasureDeviceTypeImage;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, basedepth + 12, 0LL);
  }
  restTreasureDeviceChangeTurnLabel = (UnityEngine_Object_o *)this->fields.restTreasureDeviceChangeTurnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restTreasureDeviceChangeTurnLabel, 0LL, 0LL) )
  {
    bg = (UIWidget_o *)this->fields.restTreasureDeviceChangeTurnLabel;
    if ( !bg )
      goto LABEL_107;
    UIWidget__set_depth(bg, basedepth + 13, 0LL);
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
  this->fields.perf = inPerf;
  sub_B0D840(&this->fields.perf, inPerf);
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
  struct UnityEngine_GameObject_array *effectobj; // x20
  __int64 v5; // x0
  __int64 v6; // x0

  effectobj = this->fields.effectobj;
  if ( !effectobj )
    sub_B0D97C(this);
  if ( stamp )
  {
    this = (BattleCommandComponent_o *)sub_B0D964(stamp, effectobj->obj.klass->_1.element_class);
    if ( !this )
    {
      v6 = sub_B0D99C();
      sub_B0D948(v6, 0LL);
    }
  }
  if ( effectobj->max_length <= 5 )
  {
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
  }
  effectobj->m_Items[5] = stamp;
  sub_B0D840(&effectobj->m_Items[5], stamp);
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
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Material_o *v11; // x19
  __int64 v12; // x0

  if ( (byte_421144E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, shaderName);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_421144E = 1;
  }
  facetex = (UnityEngine_Object_o *)this->fields.facetex;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(facetex, 0LL, 0LL) )
  {
    v7 = this->fields.facetex;
    v8 = UnityEngine_Shader__Find(shaderName, 0LL);
    v11 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v9, v10);
    UnityEngine_Material___ctor(v11, v8, 0LL);
    if ( !v7 )
      sub_B0D97C(v12);
    ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v7->klass->vtable._25_set_material.method)(
      v7,
      v11,
      v7->klass->vtable._26_get_mainTexture.methodPtr);
  }
}


void __fastcall BattleCommandComponent__setTarget(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  this->fields.target = target;
  sub_B0D840(&this->fields.target, target);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__setTouchFlg(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *Component_WebViewObject; // x20
  _BOOL8 v7; // x0

  if ( (byte_4211471 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Collider___, flg);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4211471 = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v7 )
  {
    if ( !Component_WebViewObject )
      sub_B0D97C(v7);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, flg, 0LL);
  }
}


void __fastcall BattleCommandComponent__startComboCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  white = UnityEngine_Color__get_white(0LL);
  BattleCommandComponent__SetCardColor(this, white, v3);
  BattleCommandComponent__resetSelectStamp(this, v4);
}


void __fastcall BattleCommandComponent__startCountUp(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  __int64 v3; // x1
  struct BattleCommandData_o *data; // x8
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleCommandData_o *v7; // x8
  DrumRollLabel_o *criticallabel; // x20
  int32_t v9; // w21
  DrumRollLabel_CompleteEventHandler_o *v10; // x22

  v2 = this;
  if ( (byte_4211464 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleCommandComponent_compCriticallabel__, method);
    this = (BattleCommandComponent_o *)sub_B0D8A4(&DrumRollLabel_CompleteEventHandler_TypeInfo, v3);
    byte_4211464 = 1;
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
    sub_B0D97C(this);
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
  v7 = v2->fields.data;
  criticallabel = v2->fields.criticallabel;
  v9 = v7 ? v2->fields.boostedCriticalRate + v7->fields.starcount / 10 : 0;
  v10 = (DrumRollLabel_CompleteEventHandler_o *)sub_B0D974(DrumRollLabel_CompleteEventHandler_TypeInfo, v5, v6);
  DrumRollLabel_CompleteEventHandler___ctor(
    v10,
    (Il2CppObject *)v2,
    Method_BattleCommandComponent_compCriticallabel__,
    0LL);
  if ( !criticallabel )
    goto LABEL_15;
  DrumRollLabel__changeParam(criticallabel, v9, 1, v10, 0.0, 0LL);
}


void __fastcall BattleCommandComponent__startMoveFloat(BattleCommandComponent_o *this, const MethodInfo *method)
{
  float v3; // s0
  const MethodInfo *v4; // x2

  if ( (byte_421145C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16391/*"anim_commandfloat"*/, method);
    byte_421145C = 1;
  }
  v3 = UnityEngine_Random__Range(0.0, 0.2, 0LL);
  BattleCommandComponent__PlayAnimation(this, (System_String_o *)StringLiteral_16391/*"anim_commandfloat"*/, v3, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__stopAnimation(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *Component_WebViewObject; // x21
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Component_o *nomalwidget; // x0
  UnityEngine_Transform_o *transform; // x20
  int v9; // s0
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v13; // x20
  struct UnityEngine_GameObject_array *v14; // x8
  UnityEngine_Object_o *v15; // x19
  __int64 v16; // x0

  if ( (byte_421145D & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_421145D = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v6 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  nomalwidget = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)nomalwidget & 1) != 0 )
  {
    if ( !Component_WebViewObject )
      goto LABEL_31;
    SimpleAnimation__Stop((SimpleAnimation_o *)Component_WebViewObject, 0LL);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    nomalwidget = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
    if ( ((unsigned __int8)nomalwidget & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_31;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v6, 0LL);
    }
  }
  nomalwidget = (UnityEngine_Component_o *)this->fields.nomalwidget;
  if ( !nomalwidget
    || (nomalwidget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nomalwidget, 0LL)) == 0LL
    || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)nomalwidget, 0LL),
        *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v9, 0LL),
        (effectobj = this->fields.effectobj) == 0LL) )
  {
LABEL_31:
    sub_B0D97C(nomalwidget);
  }
  if ( effectobj->max_length <= 2 )
    goto LABEL_32;
  v13 = (UnityEngine_Object_o *)effectobj->m_Items[2];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  nomalwidget = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)nomalwidget & 1) != 0 )
  {
    v14 = this->fields.effectobj;
    if ( v14 )
    {
      if ( v14->max_length > 2 )
      {
        v15 = (UnityEngine_Object_o *)v14->m_Items[2];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__DestroyImmediate_34935488(v15, 0LL);
        return;
      }
LABEL_32:
      v16 = sub_B0D9A8(nomalwidget);
      sub_B0D948(v16, 0LL);
    }
    goto LABEL_31;
  }
}


void __fastcall BattleCommandComponent__stopFirstAura(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x0

  v2 = this;
  if ( (byte_4211461 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4211461 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_18;
  if ( effectobj->max_length <= 4 )
    goto LABEL_19;
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[4];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( v5 )
    {
      if ( v5->max_length <= 4 )
        goto LABEL_19;
      v6 = (UnityEngine_Object_o *)v5->m_Items[4];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v6, 0LL);
      this = (BattleCommandComponent_o *)v2->fields.effectobj;
      if ( this )
      {
        if ( LODWORD(this->fields.objectRoot) > 4 )
        {
          this->fields.nobletex = 0LL;
          sub_B0D840(&this->fields.nobletex, 0LL);
          return;
        }
LABEL_19:
        v7 = sub_B0D9A8(this);
        sub_B0D948(v7, 0LL);
      }
    }
LABEL_18:
    sub_B0D97C(this);
  }
}


void __fastcall BattleCommandComponent__transformSvtFace(
        BattleCommandComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleCommandComponent_o *v4; // x20
  __int64 v5; // x1
  struct BattleCommandData_o *data; // x21
  struct BattleCommandData_o *v7; // x21
  struct BattleCommandData_o *v8; // x21
  struct BattleCommandData_o *v9; // x21
  const MethodInfo *v10; // x1
  BattleCommandComponent_o **p_facetex; // x19
  UITexture_o *facetex; // x21
  struct BattleCommandData_o *v13; // x8
  int32_t imageSvtId; // w20
  int32_t svtlimit; // w22
  int32_t loadsvtLimit; // w23
  UITexture_o *Manager__loadCommandCard; // x0
  UnityEngine_Object_o *v18; // x20

  v4 = this;
  if ( (byte_4211458 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, svtData);
    this = (BattleCommandComponent_o *)sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v5);
    byte_4211458 = 1;
  }
  data = v4->fields.data;
  if ( data )
  {
    if ( !svtData )
      goto LABEL_31;
    if ( svtData->fields.uniqueId == data->fields.uniqueId )
    {
      data->fields.svtId = BattleServantData__getSvtId(svtData, 0LL);
      v7 = v4->fields.data;
      this = (BattleCommandComponent_o *)BattleServantData__GetCommandImageSvtId(svtData, 0LL);
      if ( !v7 )
        goto LABEL_31;
      v7->fields.imageSvtId = (int)this;
      v8 = v4->fields.data;
      this = (BattleCommandComponent_o *)BattleServantData__getCommandDispLimitCount(svtData, 0LL);
      if ( !v8 )
        goto LABEL_31;
      v8->fields.svtlimit = (int)this;
      v9 = v4->fields.data;
      this = (BattleCommandComponent_o *)BattleServantData__getDispLimitCount(svtData, 1, 0LL);
      if ( !v9 )
        goto LABEL_31;
      v9->fields._loadsvtLimit = (int)this;
      this = (BattleCommandComponent_o *)v4->fields.data;
      if ( !this )
        goto LABEL_31;
      this = (BattleCommandComponent_o *)BattleCommandData__get_type((BattleCommandData_o *)this, v10);
      p_facetex = (BattleCommandComponent_o **)&v4->fields.facetex;
      facetex = v4->fields.facetex;
      if ( (_DWORD)this == 5 )
      {
        if ( facetex )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v4->fields.facetex, 0, 0LL);
          return;
        }
LABEL_31:
        sub_B0D97C(this);
      }
      v13 = v4->fields.data;
      if ( !v13 )
        goto LABEL_31;
      imageSvtId = v13->fields.imageSvtId;
      if ( imageSvtId <= 0 )
        imageSvtId = v13->fields.svtId;
      svtlimit = v13->fields.svtlimit;
      if ( v13->fields._loadsvtLimit == -1 )
        loadsvtLimit = v13->fields.svtlimit;
      else
        loadsvtLimit = v13->fields._loadsvtLimit;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(
                                   facetex,
                                   imageSvtId,
                                   loadsvtLimit,
                                   svtlimit,
                                   0LL);
      *p_facetex = (BattleCommandComponent_o *)Manager__loadCommandCard;
      sub_B0D840(p_facetex, Manager__loadCommandCard);
      v18 = (UnityEngine_Object_o *)*p_facetex;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
      {
        this = *p_facetex;
        if ( !*p_facetex )
          goto LABEL_31;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
        this = *p_facetex;
        if ( !*p_facetex )
          goto LABEL_31;
        UIWidget__set_height((UIWidget_o *)this, 191, 0LL);
        this = *p_facetex;
        if ( !*p_facetex )
          goto LABEL_31;
        UIWidget__set_width((UIWidget_o *)this, 191, 0LL);
      }
    }
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
  const MethodInfo *v11; // x2
  struct BattlePerformance_o *perf; // x9
  struct BattleCommandData_o *data; // x8
  float ShowClassMagnification; // s0
  struct UnityEngine_GameObject_array *v15; // x8
  struct UnityEngine_GameObject_array *v16; // x8
  __int64 v17; // x0

  v4 = this;
  if ( (byte_421147C & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, targetSvt);
    byte_421147C = 1;
  }
  if ( targetSvt && v4->fields.data )
  {
    addObjectList = v4->fields.addObjectList;
    if ( !addObjectList )
      goto LABEL_38;
    if ( !addObjectList->max_length )
      goto LABEL_39;
    v6 = (UnityEngine_Object_o *)addObjectList->m_Items[0];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v7 = v4->fields.addObjectList;
      if ( !v7 )
        goto LABEL_38;
      if ( v7->max_length <= 1 )
        goto LABEL_39;
      v8 = (UnityEngine_Object_o *)v7->m_Items[1];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = v4->fields.addObjectList;
        if ( !v9 )
          goto LABEL_38;
        if ( !v9->max_length )
          goto LABEL_39;
        this = (BattleCommandComponent_o *)v9->m_Items[0];
        if ( !this )
          goto LABEL_38;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        v10 = v4->fields.addObjectList;
        if ( !v10 )
          goto LABEL_38;
        if ( v10->max_length <= 1 )
          goto LABEL_39;
        this = (BattleCommandComponent_o *)v10->m_Items[1];
        if ( !this
          || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
              (perf = v4->fields.perf) == 0LL)
          || (data = v4->fields.data) == 0LL
          || (this = (BattleCommandComponent_o *)perf->fields.data) == 0LL
          || (this = (BattleCommandComponent_o *)BattleData__getServantData(
                                                   (BattleData_o *)this,
                                                   data->fields.uniqueId,
                                                   v11),
              !v4->fields.perf) )
        {
LABEL_38:
          sub_B0D97C(this);
        }
        ShowClassMagnification = BattlePerformance__getShowClassMagnification(
                                   v4->fields.perf,
                                   v4->fields.data,
                                   (BattleServantData_o *)this,
                                   targetSvt,
                                   0LL);
        if ( ShowClassMagnification > 1.0 )
        {
          v15 = v4->fields.addObjectList;
          if ( !v15 )
            goto LABEL_38;
          if ( v15->max_length > 1 )
          {
            this = (BattleCommandComponent_o *)v15->m_Items[1];
            if ( !this )
              goto LABEL_38;
            goto LABEL_36;
          }
          goto LABEL_39;
        }
        if ( ShowClassMagnification < 1.0 )
        {
          v16 = v4->fields.addObjectList;
          if ( !v16 )
            goto LABEL_38;
          if ( v16->max_length )
          {
            this = (BattleCommandComponent_o *)v16->m_Items[0];
            if ( !this )
              goto LABEL_38;
LABEL_36:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            return;
          }
LABEL_39:
          v17 = sub_B0D9A8(this);
          sub_B0D948(v17, 0LL);
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
  struct BattleCommandData_o *data; // x8
  int32_t v7; // w20
  UnityEngine_GameObject_o *criticalObject; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct DrumRollLabel_o *criticallabel; // x22
  DrumRollLabel_o *v12; // x0
  int32_t v13; // w1
  DrumRollLabel_CompleteEventHandler_o *v14; // x3
  DrumRollLabel_CompleteEventHandler_o *v15; // x21

  if ( (byte_4211465 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleCommandComponent_compCriticallabel__, isNonAnimation);
    sub_B0D8A4(&DrumRollLabel_CompleteEventHandler_TypeInfo, v5);
    byte_4211465 = 1;
  }
  data = this->fields.data;
  if ( !data || (v7 = this->fields.boostedCriticalRate + data->fields.starcount / 10, v7 <= 0) )
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
    sub_B0D97C(criticalObject);
  }
  if ( isNonAnimation )
  {
    DrumRollLabel__ChangeParamNonAnimation(criticallabel, v7, 0, 0LL);
  }
  else
  {
    if ( v7 >= criticallabel->fields.nowvalue )
    {
      v15 = (DrumRollLabel_CompleteEventHandler_o *)sub_B0D974(DrumRollLabel_CompleteEventHandler_TypeInfo, v9, v10);
      DrumRollLabel_CompleteEventHandler___ctor(
        v15,
        (Il2CppObject *)this,
        Method_BattleCommandComponent_compCriticallabel__,
        0LL);
      v12 = criticallabel;
      v13 = v7;
      v14 = v15;
    }
    else
    {
      v12 = this->fields.criticallabel;
      v13 = v7;
      v14 = 0LL;
    }
    DrumRollLabel__changeParam(v12, v13, 1, v14, 0.0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__updateSelectedEffect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_array *v5; // x8
  UnityEngine_Transform_o *v6; // x20
  struct UnityEngine_GameObject_array *v7; // x8
  UnityEngine_Transform_o *transform; // x20
  int v9; // s0
  struct UnityEngine_GameObject_array *v12; // x8
  UnityEngine_Transform_o *v13; // x20
  int v14; // s0
  struct UnityEngine_GameObject_array *v17; // x8
  struct UnityEngine_GameObject_array *v18; // x8
  UnityEngine_Object_o *v19; // x20
  struct UnityEngine_GameObject_array *v20; // x8
  __int64 v21; // x0
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4211463 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4211463 = 1;
  }
  effectobj = v2->fields.effectobj;
  if ( !effectobj )
    goto LABEL_39;
  if ( effectobj->max_length <= 3 )
  {
LABEL_40:
    v21 = sub_B0D9A8(this);
    sub_B0D948(v21, 0LL);
  }
  v4 = (UnityEngine_Object_o *)effectobj->m_Items[3];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.effectobj;
    if ( !v5 )
      goto LABEL_39;
    if ( v5->max_length <= 3 )
      goto LABEL_40;
    this = (BattleCommandComponent_o *)v5->m_Items[3];
    if ( !this )
      goto LABEL_39;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !v2->fields.nomalwidget )
      goto LABEL_39;
    v6 = (UnityEngine_Transform_o *)this;
    this = (BattleCommandComponent_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)v2->fields.nomalwidget,
                                         0LL);
    if ( !v6 )
      goto LABEL_39;
    UnityEngine_Transform__set_parent(v6, (UnityEngine_Transform_o *)this, 0LL);
    v7 = v2->fields.effectobj;
    if ( !v7 )
      goto LABEL_39;
    if ( v7->max_length <= 3 )
      goto LABEL_40;
    this = (BattleCommandComponent_o *)v7->m_Items[3];
    if ( !this )
      goto LABEL_39;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_39;
    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v9, 0LL);
    v12 = v2->fields.effectobj;
    if ( !v12 )
      goto LABEL_39;
    if ( v12->max_length <= 3 )
      goto LABEL_40;
    this = (BattleCommandComponent_o *)v12->m_Items[3];
    if ( !this )
      goto LABEL_39;
    v13 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_up(0LL);
    if ( !v13 )
      goto LABEL_39;
    UnityEngine_Transform__set_eulerAngles(v13, *(UnityEngine_Vector3_o *)&v14, 0LL);
    v17 = v2->fields.effectobj;
    if ( !v17 )
      goto LABEL_39;
    if ( v17->max_length <= 3 )
      goto LABEL_40;
    this = (BattleCommandComponent_o *)v17->m_Items[3];
    if ( !this )
      goto LABEL_39;
    this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_39;
    v22.fields.x = 1.0;
    v22.fields.y = 1.0;
    v22.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v22, 0LL);
  }
  v18 = v2->fields.effectobj;
  if ( !v18 )
    goto LABEL_39;
  if ( v18->max_length <= 4 )
    goto LABEL_40;
  v19 = (UnityEngine_Object_o *)v18->m_Items[4];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v20 = v2->fields.effectobj;
    if ( !v20 )
      goto LABEL_39;
    if ( v20->max_length > 4 )
    {
      this = (BattleCommandComponent_o *)v20->m_Items[4];
      if ( this )
      {
        this = (BattleCommandComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( this )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v2->fields.objectRoot, 0LL);
          return;
        }
      }
LABEL_39:
      sub_B0D97C(this);
    }
    goto LABEL_40;
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
  UnityEngine_Transform_o *transform; // x26
  __int64 v33; // x0
  int v34; // s0
  struct UIWidget_o *nomalwidget; // x0
  UnityEngine_GameObject_o *v38; // x0
  const MethodInfo *v39; // x1
  UnityEngine_GameObject_o *criticalObject; // x0
  const MethodInfo *v41; // x2
  struct BattleServantData_o *svtData; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  BattleCommandData_o *data; // x0
  UnityEngine_Behaviour_o *facetex; // x0
  UnityEngine_Behaviour_o *icon; // x0
  UnityEngine_Behaviour_o *text; // x0
  UISprite_o *bg; // x0
  UIWidget_o *v49; // x0
  UIWidget_o *v50; // x0
  UnityEngine_Behaviour_o *friendIcon; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  BattleCommandSealStatus_o *v54; // x20
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x2
  BattleCommandData_o *v57; // x23
  UnityEngine_Object_o *perf; // x25
  BattleServantData_o *v59; // x24
  _BOOL8 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  struct BattlePerformance_o *v63; // x8
  BattleData_o *v64; // x25
  BattleCommandSealStatus_o *v65; // x26
  const MethodInfo *v66; // x4
  __int64 v67; // x0
  UIWidget_o **p_facetex; // x23
  UITexture_o *v69; // x24
  struct BattleCommandData_o *v70; // x8
  int32_t imageSvtId; // w25
  int32_t svtlimit; // w26
  int32_t loadsvtLimit; // w27
  UnityEngine_Object_o *Manager__loadCommandCard; // x24
  UnityEngine_Behaviour_o *v75; // x0
  UnityEngine_Behaviour_o *v76; // x0
  UnityEngine_Object_o *v77; // x24
  _BOOL8 v78; // x0
  UnityEngine_Behaviour_o *v79; // x0
  struct BattleCommandData_o *v80; // x8
  UnityEngine_Object_o *v81; // x22
  const MethodInfo *v82; // x1
  BattleCommandData_o *v83; // x0
  const MethodInfo *v84; // x1
  __int64 *v85; // x8
  BattleCommandData_o *v86; // x0
  const MethodInfo *v87; // x1
  BattleCommandData_o *v88; // x0
  const MethodInfo *v89; // x1
  Il2CppObject *v90; // x22
  UnityEngine_Behaviour_o *v91; // x0
  __int64 v92; // x0
  struct BattleCommandData_o *v93; // x8
  UISprite_o *v94; // x23
  FileName_c *v95; // x0
  UnityEngine_Behaviour_o *v96; // x0
  __int64 v97; // x0
  UISprite_o *v98; // x23
  FileName_c *v99; // x0
  UnityEngine_Behaviour_o *v100; // x0
  UISprite_o *v101; // x23
  System_String_o *v102; // x0
  UISprite_o *v103; // x21
  System_String_o *v104; // x0
  UISprite_o *v105; // x21
  System_String_o *v106; // x0
  __int64 v107; // x0
  struct UISprite_o *v108; // x21
  UISpriteData_o *AtlasSprite; // x0
  int width; // w22
  UISpriteData_o *v111; // x0
  UnityEngine_Component_o *v112; // x0
  UnityEngine_GameObject_o *v113; // x0
  UnityEngine_Transform_o *v114; // x21
  __int64 v115; // x0
  int v116; // s0
  __int64 v119; // x0
  const MethodInfo *v120; // x1
  struct BattleCommandData_o *v121; // x8
  UnityEngine_Behaviour_o *v122; // x0
  __int64 v123; // x0
  struct BattleCommandData_o *v124; // x8
  int32_t svtId; // w21
  UITexture_o *nobletex; // x22
  int32_t v127; // w23
  int32_t treasureDvc; // w24
  bool Manager__loadNobleName; // w21
  UnityEngine_Object_o *v130; // x22
  const MethodInfo *v131; // x2
  UnityEngine_Component_o *v132; // x0
  UnityEngine_GameObject_o *v133; // x0
  BattleCommandComponent_o *PrioredStatus; // x0
  const MethodInfo *v135; // x1
  const MethodInfo *v136; // x2
  UISprite_o *v137; // x0
  const MethodInfo *v138; // x3
  const MethodInfo *v139; // x1
  BattleCommandSealStatus_o *SealStatus; // x0
  const MethodInfo *v141; // x1
  const MethodInfo *v142; // x1
  const MethodInfo *v143; // x3
  BattleCommandData_o *v144; // x0
  UISprite_o *donotActTypeSprite; // x20
  BattleCommandComponent_o *type; // x0
  const MethodInfo *v147; // x2
  System_String_o *CardTypeSealSpriteName; // x0
  UnityEngine_Object_o *displayRemainingTurn; // x20
  UILabel_o *v150; // x20
  System_String_o *v151; // x21
  const MethodInfo *v152; // x1
  BattleCommandSealStatus_o *v153; // x0
  struct BattleBuffData_BuffData_o *SleepBuff_k__BackingField; // x8
  int32_t turn; // w8
  int v156; // w8
  Il2CppObject *v157; // x1
  System_String_o *v158; // x0
  struct BattleCommandData_o *v159; // x8
  __int64 v160; // x0
  const MethodInfo *v161; // x2
  struct BattleCommandData_o *v162; // x8
  const MethodInfo *v163; // x2
  UnityEngine_Object_o *svtId_label; // x20
  struct BattleCommandData_o *v165; // x8
  UILabel_o *v166; // x19
  System_String_o *v167; // x1
  BattleCommandData_o *v168; // x0
  int32_t v169; // [xsp+8h] [xbp-58h] BYREF
  int32_t v170; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4211459 & 1) == 0 )
  {
    sub_B0D8A4(&BattleCommandSealStatus_TypeInfo, initFlg);
    sub_B0D8A4(&FileName_TypeInfo, v13);
    sub_B0D8A4(&int_TypeInfo, v14);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_17283/*"card_bg_blank"*/, v18);
    sub_B0D8A4(&StringLiteral_4616/*"DISPLAY_REMAINING_TURN"*/, v19);
    sub_B0D8A4(&StringLiteral_21188/*"none"*/, v20);
    sub_B0D8A4(&StringLiteral_16526/*"arts"*/, v21);
    sub_B0D8A4(&StringLiteral_17303/*"card_txt_{0}"*/, v22);
    sub_B0D8A4(&StringLiteral_17172/*"buster"*/, v23);
    sub_B0D8A4(&StringLiteral_21721/*"quick"*/, v24);
    sub_B0D8A4(&StringLiteral_17296/*"card_icon_{0}"*/, v25);
    sub_B0D8A4(&StringLiteral_17285/*"card_bg_{0}"*/, v26);
    sub_B0D8A4(&StringLiteral_1/*""*/, v27);
    sub_B0D8A4(&StringLiteral_18700/*"extra"*/, v28);
    sub_B0D8A4(&StringLiteral_17284/*"card_bg_np{0}"*/, v29);
    byte_4211459 = 1;
  }
  v170 = 0;
  if ( !this->fields.data )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      return;
    }
    goto LABEL_170;
  }
  v30 = (System_String_o *)StringLiteral_17285/*"card_bg_{0}"*/;
  v31 = StringLiteral_21188/*"none"*/;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform )
    sub_B0D97C(v33);
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v34, 0LL);
  if ( initFlg )
  {
    nomalwidget = this->fields.nomalwidget;
    if ( !nomalwidget )
      sub_B0D97C(0LL);
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))nomalwidget->klass->vtable._8_set_alpha.method)(
      nomalwidget,
      nomalwidget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
  }
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v38 )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(v38, 1, 0LL);
  if ( !isAttack )
  {
    criticalObject = this->fields.criticalObject;
    if ( !criticalObject )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(criticalObject, 0, 0LL);
    svtData = this->fields.svtData;
    if ( svtData && isShowBuffIcon )
      BattleCommandComponent__setBuffIconList(this, svtData->fields.buffData, v41);
    else
      BattleCommandComponent__setBuffIconList(this, 0LL, v41);
  }
  data = this->fields.data;
  if ( !data )
    sub_B0D97C(0LL);
  if ( BattleCommandData__get_type(data, v39) == 5 )
  {
    facetex = (UnityEngine_Behaviour_o *)this->fields.facetex;
    if ( !facetex )
      sub_B0D97C(0LL);
    UnityEngine_Behaviour__set_enabled(facetex, 0, 0LL);
    icon = (UnityEngine_Behaviour_o *)this->fields.icon;
    if ( !icon )
      sub_B0D97C(0LL);
    UnityEngine_Behaviour__set_enabled(icon, 0, 0LL);
    text = (UnityEngine_Behaviour_o *)this->fields.text;
    if ( !text )
      sub_B0D97C(0LL);
    UnityEngine_Behaviour__set_enabled(text, 0, 0LL);
    bg = this->fields.bg;
    if ( !bg )
      sub_B0D97C(0LL);
    UISprite__set_spriteName(bg, (System_String_o *)StringLiteral_17283/*"card_bg_blank"*/, 0LL);
    v49 = (UIWidget_o *)this->fields.bg;
    if ( !v49 )
      sub_B0D97C(0LL);
    UIWidget__set_height(v49, 170, 0LL);
    v50 = (UIWidget_o *)this->fields.bg;
    if ( !v50 )
      sub_B0D97C(0LL);
    UIWidget__set_width(v50, 133, 0LL);
    friendIcon = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !friendIcon )
      sub_B0D97C(0LL);
    UnityEngine_Behaviour__set_enabled(friendIcon, 0, 0LL);
    v54 = (BattleCommandSealStatus_o *)sub_B0D974(BattleCommandSealStatus_TypeInfo, v52, v53);
    BattleCommandSealStatus___ctor(v54, v55);
    this->fields.sealStatus = v54;
    sub_B0D840(&this->fields.sealStatus, v54);
    goto LABEL_155;
  }
  perf = (UnityEngine_Object_o *)this->fields.perf;
  v57 = this->fields.data;
  v59 = this->fields.svtData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v60 = UnityEngine_Object__op_Implicit(perf, 0LL);
  if ( v60 )
  {
    v63 = this->fields.perf;
    if ( !v63 )
      sub_B0D97C(v60);
    v64 = v63->fields.data;
  }
  else
  {
    v64 = 0LL;
  }
  v65 = (BattleCommandSealStatus_o *)sub_B0D974(BattleCommandSealStatus_TypeInfo, v61, v62);
  BattleCommandSealStatus___ctor_18476908(v65, v57, v59, v64, v66);
  this->fields.sealStatus = v65;
  sub_B0D840(&this->fields.sealStatus, v65);
  p_facetex = (UIWidget_o **)&this->fields.facetex;
  v69 = this->fields.facetex;
  v70 = this->fields.data;
  if ( !v70 )
    sub_B0D97C(v67);
  imageSvtId = v70->fields.imageSvtId;
  if ( imageSvtId <= 0 )
    imageSvtId = v70->fields.svtId;
  svtlimit = v70->fields.svtlimit;
  if ( v70->fields._loadsvtLimit == -1 )
    loadsvtLimit = v70->fields.svtlimit;
  else
    loadsvtLimit = v70->fields._loadsvtLimit;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  Manager__loadCommandCard = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCard(
                                                       v69,
                                                       imageSvtId,
                                                       loadsvtLimit,
                                                       svtlimit,
                                                       0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCard, 0LL, 0LL) )
  {
    *p_facetex = (UIWidget_o *)Manager__loadCommandCard;
    sub_B0D840(&this->fields.facetex, Manager__loadCommandCard);
  }
  v75 = (UnityEngine_Behaviour_o *)this->fields.icon;
  if ( !v75 )
    sub_B0D97C(0LL);
  UnityEngine_Behaviour__set_enabled(v75, 1, 0LL);
  v76 = (UnityEngine_Behaviour_o *)this->fields.text;
  if ( !v76 )
    sub_B0D97C(0LL);
  UnityEngine_Behaviour__set_enabled(v76, 1, 0LL);
  v77 = (UnityEngine_Object_o *)*p_facetex;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v78 = UnityEngine_Object__op_Inequality(v77, 0LL, 0LL);
  if ( v78 )
  {
    v79 = (UnityEngine_Behaviour_o *)*p_facetex;
    if ( isCharaHide )
    {
      if ( !v79 )
        sub_B0D97C(0LL);
      UnityEngine_Behaviour__set_enabled(v79, 0, 0LL);
    }
    else
    {
      if ( !v79 )
        sub_B0D97C(0LL);
      UnityEngine_Behaviour__set_enabled(v79, 1, 0LL);
    }
  }
  v80 = this->fields.data;
  if ( !v80 )
    sub_B0D97C(v78);
  v81 = (UnityEngine_Object_o *)*p_facetex;
  if ( v80->fields.treasureDvc < 1 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v81, 0LL, 0LL) )
    {
      if ( !*p_facetex )
        sub_B0D97C(0LL);
      UIWidget__set_height(*p_facetex, 191, 0LL);
      if ( !*p_facetex )
        sub_B0D97C(0LL);
      UIWidget__set_width(*p_facetex, 191, 0LL);
    }
  }
  else
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v81, 0LL, 0LL) )
    {
      if ( !*p_facetex )
        sub_B0D97C(0LL);
      UIWidget__set_height(*p_facetex, 191, 0LL);
      if ( !*p_facetex )
        sub_B0D97C(0LL);
      UIWidget__set_width(*p_facetex, 191, 0LL);
    }
    v30 = (System_String_o *)StringLiteral_17284/*"card_bg_np{0}"*/;
  }
  v83 = this->fields.data;
  if ( !v83 )
    sub_B0D97C(0LL);
  if ( BattleCommandData__get_type(v83, v82) == 2 )
  {
    v85 = &StringLiteral_17172/*"buster"*/;
  }
  else
  {
    v86 = this->fields.data;
    if ( !v86 )
      sub_B0D97C(0LL);
    if ( BattleCommandData__get_type(v86, v84) == 3 )
    {
      v85 = &StringLiteral_21721/*"quick"*/;
    }
    else
    {
      v88 = this->fields.data;
      if ( !v88 )
        sub_B0D97C(0LL);
      if ( BattleCommandData__get_type(v88, v87) != 1 )
      {
        v168 = this->fields.data;
        if ( !v168 )
          sub_B0D97C(0LL);
        if ( BattleCommandData__get_type(v168, v89) == 4 )
          v90 = (Il2CppObject *)StringLiteral_18700/*"extra"*/;
        else
          v90 = (Il2CppObject *)v31;
        goto LABEL_86;
      }
      v85 = &StringLiteral_16526/*"arts"*/;
    }
  }
  v90 = (Il2CppObject *)*v85;
LABEL_86:
  v91 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
  if ( !v91 )
    sub_B0D97C(0LL);
  UnityEngine_Behaviour__set_enabled(v91, 0, 0LL);
  v93 = this->fields.data;
  if ( !v93 )
    sub_B0D97C(v92);
  if ( v93->fields.follower )
  {
    v94 = this->fields.friendIcon;
    v95 = FileName_TypeInfo;
    if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    if ( !v94 )
      sub_B0D97C(v95);
    UISprite__set_spriteName(v94, FileName_TypeInfo->static_fields->friendIconName, 0LL);
    v96 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !v96 )
      sub_B0D97C(0LL);
    UnityEngine_Behaviour__set_enabled(v96, 1, 0LL);
    v93 = this->fields.data;
    if ( !v93 )
      sub_B0D97C(v97);
  }
  if ( v93->fields.flgEventJoin )
  {
    v98 = this->fields.friendIcon;
    v99 = FileName_TypeInfo;
    if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    if ( !v98 )
      sub_B0D97C(v99);
    UISprite__set_spriteName(v98, FileName_TypeInfo->static_fields->eventJoinIconName, 0LL);
    v100 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !v100 )
      sub_B0D97C(0LL);
    UnityEngine_Behaviour__set_enabled(v100, 1, 0LL);
  }
  v101 = this->fields.bg;
  v102 = System_String__Format(v30, v90, 0LL);
  if ( !v101 )
    sub_B0D97C(v102);
  UISprite__set_spriteName(v101, v102, 0LL);
  v103 = this->fields.icon;
  v104 = System_String__Format((System_String_o *)StringLiteral_17296/*"card_icon_{0}"*/, v90, 0LL);
  if ( !v103 )
    sub_B0D97C(v104);
  UISprite__set_spriteName(v103, v104, 0LL);
  v105 = this->fields.text;
  v106 = System_String__Format((System_String_o *)StringLiteral_17303/*"card_txt_{0}"*/, v90, 0LL);
  if ( !v105 )
    sub_B0D97C(v106);
  UISprite__set_spriteName(v105, v106, 0LL);
  v108 = this->fields.text;
  if ( !v108 )
    sub_B0D97C(v107);
  AtlasSprite = UISprite__GetAtlasSprite(this->fields.text, 0LL);
  if ( !AtlasSprite )
    sub_B0D97C(0LL);
  if ( !this->fields.text )
    sub_B0D97C(AtlasSprite);
  width = AtlasSprite->fields.width;
  v111 = UISprite__GetAtlasSprite(this->fields.text, 0LL);
  if ( !v111 )
    sub_B0D97C(0LL);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float, float, float, float))v108->klass->vtable._18_SetRect.method)(
    v108,
    v108->klass->vtable._19_ParentHasChanged.methodPtr,
    0.0,
    0.0,
    (float)width,
    (float)v111->fields.height);
  v112 = (UnityEngine_Component_o *)this->fields.text;
  if ( !v112 )
    sub_B0D97C(0LL);
  v113 = UnityEngine_Component__get_gameObject(v112, 0LL);
  if ( !v113 )
    sub_B0D97C(0LL);
  v114 = UnityEngine_GameObject__get_transform(v113, 0LL);
  *(UnityEngine_Vector3_o *)&v116 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v114 )
    sub_B0D97C(v115);
  UnityEngine_Transform__set_localPosition(v114, *(UnityEngine_Vector3_o *)&v116, 0LL);
  v121 = this->fields.data;
  if ( !v121 )
    sub_B0D97C(v119);
  if ( v121->fields.treasureDvc >= 1 )
  {
    v122 = (UnityEngine_Behaviour_o *)this->fields.text;
    if ( !v122 )
      sub_B0D97C(0LL);
    UnityEngine_Behaviour__set_enabled(v122, 0, 0LL);
    v124 = this->fields.data;
    if ( !v124 )
      sub_B0D97C(v123);
    svtId = v124->fields.imageSvtId;
    nobletex = this->fields.nobletex;
    if ( svtId <= 0 )
      svtId = v124->fields.svtId;
    v127 = v124->fields._loadsvtLimit;
    if ( v127 == -1 )
      v127 = v124->fields.svtlimit;
    treasureDvc = v124->fields.treasureDvc;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    Manager__loadNobleName = ServantAssetLoadManager__loadNobleName(nobletex, svtId, v127, treasureDvc, 0LL);
    v130 = (UnityEngine_Object_o *)this->fields.nobletex;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v130, 0LL, 0LL) )
    {
      v132 = (UnityEngine_Component_o *)this->fields.nobletex;
      if ( !v132 )
        sub_B0D97C(0LL);
      v133 = UnityEngine_Component__get_gameObject(v132, 0LL);
      if ( !v133 )
        sub_B0D97C(0LL);
      UnityEngine_GameObject__SetActive(v133, Manager__loadNobleName, 0LL);
    }
    BattleCommandComponent__UpdateTDTypeChange(this, isTDTypeChangeWindow, v131);
  }
  BattleCommandComponent__InitUnusableMarks(this, v120);
  if ( !isTDTypeChangeWindow )
  {
    v137 = BattleCommandComponent__ChoiceUnusableMarkSprite(this, v135);
    BattleCommandComponent__SetActiveComponent(
      (BattleCommandComponent_o *)v137,
      (UnityEngine_Component_o *)v137,
      1,
      v138);
    SealStatus = BattleCommandComponent__get_SealStatus(this, v139);
    if ( !SealStatus )
      sub_B0D97C(0LL);
    PrioredStatus = (BattleCommandComponent_o *)BattleCommandSealStatus__get_PrioredStatus(SealStatus, v141);
    if ( (_DWORD)PrioredStatus == 1 )
    {
      BattleCommandComponent__SetActiveComponent(
        PrioredStatus,
        (UnityEngine_Component_o *)this->fields.displayRemainingTurn,
        1,
        v143);
      displayRemainingTurn = (UnityEngine_Object_o *)this->fields.displayRemainingTurn;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      PrioredStatus = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(displayRemainingTurn, 0LL, 0LL);
      if ( ((unsigned __int8)PrioredStatus & 1) != 0 )
      {
        v150 = this->fields.displayRemainingTurn;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v151 = LocalizationManager__Get((System_String_o *)StringLiteral_4616/*"DISPLAY_REMAINING_TURN"*/, 0LL);
        v153 = BattleCommandComponent__get_SealStatus(this, v152);
        if ( !v153 )
          sub_B0D97C(0LL);
        SleepBuff_k__BackingField = v153->fields._SleepBuff_k__BackingField;
        if ( !SleepBuff_k__BackingField )
          sub_B0D97C(v153);
        turn = SleepBuff_k__BackingField->fields.turn;
        if ( turn + 1 >= 0 )
          v156 = turn + 1;
        else
          v156 = turn + 2;
        v169 = BattleUtility__FloorToInt((float)(v156 >> 1), 0LL);
        v157 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v169);
        v158 = System_String__Format(v151, v157, 0LL);
        if ( !v150 )
          sub_B0D97C(v158);
        UILabel__set_text(v150, v158, 0LL);
      }
    }
    else if ( (_DWORD)PrioredStatus == 8 )
    {
      v144 = this->fields.data;
      if ( !v144 )
        sub_B0D97C(0LL);
      donotActTypeSprite = this->fields.donotActTypeSprite;
      type = (BattleCommandComponent_o *)BattleCommandData__get_type(v144, v142);
      CardTypeSealSpriteName = BattleCommandComponent__getCardTypeSealSpriteName(type, (int32_t)type, v147);
      if ( !donotActTypeSprite )
        sub_B0D97C(CardTypeSealSpriteName);
      UISprite__set_spriteName(donotActTypeSprite, CardTypeSealSpriteName, 0LL);
    }
  }
  v159 = this->fields.data;
  if ( !v159 )
    sub_B0D97C(PrioredStatus);
  BattleCommandComponent__SetCommandCodeView_18478040(this, v159->fields.commandCodeId, v136);
  v162 = this->fields.data;
  if ( !v162 )
    sub_B0D97C(v160);
  BattleCommandComponent__SetCommandAssistView(this, v162->fields.commandAssistId, v161);
  BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, 0, v163);
LABEL_155:
  BattleCommandComponent__setTouchFlg(this, 1, v56);
  svtId_label = (UnityEngine_Object_o *)this->fields.svtId_label;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(svtId_label, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v165 = this->fields.data;
    if ( v165 )
    {
      v166 = this->fields.svtId_label;
      v170 = v165->fields.svtId;
      gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v170, 0LL);
      if ( v166 )
      {
        if ( gameObject )
          v167 = (System_String_o *)gameObject;
        else
          v167 = (System_String_o *)StringLiteral_1/*""*/;
        UILabel__set_text(v166, v167, 0LL);
        return;
      }
    }
LABEL_170:
    sub_B0D97C(gameObject);
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


void __fastcall BattleCommandComponent__PlayStarSe_d__159___ctor(
        BattleCommandComponent__PlayStarSe_d__159_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__PlayStarSe_d__159__MoveNext(
        BattleCommandComponent__PlayStarSe_d__159_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  int32_t _1__state; // w8
  float preDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  bool result; // w0

  if ( (byte_42138DB & 1) == 0 )
  {
    sub_B0D8A4(&SeManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_WaitForSeconds_TypeInfo, v4);
    byte_42138DB = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(7, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    preDelayTime = this->fields.preDelayTime;
    v7 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
    UnityEngine_WaitForSeconds___ctor(v7, preDelayTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleCommandComponent__PlayStarSe_d__159__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__PlayStarSe_d__159_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__PlayStarSe_d__159__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__PlayStarSe_d__159_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleCommandComponent__PlayStarSe_d__159_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall BattleCommandComponent__PlayStarSe_d__159__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__PlayStarSe_d__159_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__PlayStarSe_d__159__System_IDisposable_Dispose(
        BattleCommandComponent__PlayStarSe_d__159_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleCommandComponent__WaitForErrorViewFinished_d__239___ctor(
        BattleCommandComponent__WaitForErrorViewFinished_d__239_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__WaitForErrorViewFinished_d__239__MoveNext(
        BattleCommandComponent__WaitForErrorViewFinished_d__239_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCommandComponent__WaitForErrorViewFinished_d__239_o *v3; // x19
  __int64 v4; // x1
  BattleCommandComponent_o *_4__this; // x20
  float waitSeconds; // s8
  UnityEngine_WaitForSeconds_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Action_o *tdErrorAfterAction; // x0
  System_String_o **p_busyVoiceSe; // x22
  System_String_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  BattleServantConfConponent_o *p__2__current; // x19
  int v24; // w8
  System_String_o *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  v3 = this;
  if ( (byte_42138DC & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    this = (BattleCommandComponent__WaitForErrorViewFinished_d__239_o *)sub_B0D8A4(
                                                                          &UnityEngine_WaitForSeconds_TypeInfo,
                                                                          v4);
    byte_42138DC = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      waitSeconds = v3->fields.waitSeconds;
      v7 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
      UnityEngine_WaitForSeconds___ctor(v7, waitSeconds, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v7;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v3->fields.__2__current,
        (System_Int32_array **)v7,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      LOBYTE(tdErrorAfterAction) = 1;
      v3->fields.__1__state = 1;
      return (char)tdErrorAfterAction;
    case 1:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_25;
      BattleCommandComponent__startMoveFloat(_4__this, 0LL);
      p_busyVoiceSe = &v3->fields.busyVoiceSe;
      if ( System_String__IsNullOrEmpty(v3->fields.busyVoiceSe, 0LL) )
        goto LABEL_21;
LABEL_9:
      v16 = *p_busyVoiceSe;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      if ( SoundManager__isBusyVoice(v16, 0LL) )
      {
        v3->fields.__2__current = 0LL;
        p__2__current = (BattleServantConfConponent_o *)&v3->fields.__2__current;
        sub_B0D840(p__2__current, 0LL, v17, v18, v19, v20, v21, v22);
        v24 = 2;
LABEL_19:
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v24;
        LOBYTE(tdErrorAfterAction) = 1;
        return (char)tdErrorAfterAction;
      }
LABEL_14:
      v25 = *p_busyVoiceSe;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      this = (BattleCommandComponent__WaitForErrorViewFinished_d__239_o *)SoundManager__isBusySe(v25, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v3->fields.__2__current = 0LL;
        p__2__current = (BattleServantConfConponent_o *)&v3->fields.__2__current;
        sub_B0D840(p__2__current, 0LL, v26, v27, v28, v29, v30, v31);
        v24 = 3;
        goto LABEL_19;
      }
      if ( !_4__this )
LABEL_25:
        sub_B0D97C(this);
LABEL_21:
      tdErrorAfterAction = _4__this->fields.tdErrorAfterAction;
      if ( tdErrorAfterAction )
      {
        System_Action__Invoke(tdErrorAfterAction, 0LL);
LABEL_23:
        LOBYTE(tdErrorAfterAction) = 0;
      }
      return (char)tdErrorAfterAction;
    case 2:
      p_busyVoiceSe = &v3->fields.busyVoiceSe;
      v3->fields.__1__state = -1;
      goto LABEL_9;
    case 3:
      p_busyVoiceSe = &v3->fields.busyVoiceSe;
      v3->fields.__1__state = -1;
      goto LABEL_14;
    default:
      goto LABEL_23;
  }
}


Il2CppObject *__fastcall BattleCommandComponent__WaitForErrorViewFinished_d__239__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__WaitForErrorViewFinished_d__239_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__WaitForErrorViewFinished_d__239__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__WaitForErrorViewFinished_d__239_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleCommandComponent__WaitForErrorViewFinished_d__239_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall BattleCommandComponent__WaitForErrorViewFinished_d__239__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__WaitForErrorViewFinished_d__239_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__WaitForErrorViewFinished_d__239__System_IDisposable_Dispose(
        BattleCommandComponent__WaitForErrorViewFinished_d__239_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleCommandComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42138D8 & 1) == 0 )
  {
    sub_B0D8A4(&BattleCommandComponent___c_TypeInfo, v1);
    byte_42138D8 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleCommandComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleCommandComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
}


void __fastcall BattleCommandComponent___c___ctor(BattleCommandComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleCommandComponent___c___SetSpecialCommandCardBuffData_b__221_1(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *a,
        BattleCommandComponent_CardBuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return a->fields.addOrder - b->fields.addOrder;
}


bool __fastcall BattleCommandComponent___c___UpdateCommandCardTypeChange_b__223_0(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_B0D97C(this);
  return c->fields.buffType == 156;
}


bool __fastcall BattleCommandComponent___c___UpdateFixedCommandCard_b__207_0(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_B0D97C(this);
  return c->fields.buffType == 131;
}


int32_t __fastcall BattleCommandComponent___c___selectCard_b__186_0(
        BattleCommandComponent___c_o *this,
        System_Collections_Generic_KeyValuePair_string__int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19

  value = x.fields.value;
  if ( (byte_42138D9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__, x.fields.key);
    byte_42138D9 = 1;
  }
  return value;
}


void __fastcall BattleCommandComponent___c__DisplayClass158_0___ctor(
        BattleCommandComponent___c__DisplayClass158_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleCommandComponent___c__DisplayClass158_0___addCriticalBuff_b__0(
        BattleCommandComponent___c__DisplayClass158_0_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent___c__DisplayClass158_0_o *v2; // x19
  struct BattleCommandComponent_o *_4__this; // x8
  UnityEngine_Object_o *spawner; // x20
  struct BattleCommandComponent_o *v5; // x8
  UnityEngine_Object_o *obj; // x19

  v2 = this;
  if ( (byte_42138DA & 1) == 0 )
  {
    this = (BattleCommandComponent___c__DisplayClass158_0_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42138DA = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  spawner = (UnityEngine_Object_o *)_4__this->fields.spawner;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent___c__DisplayClass158_0_o *)UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.__4__this;
    if ( v5 )
    {
      this = (BattleCommandComponent___c__DisplayClass158_0_o *)v5->fields.spawner;
      if ( this )
      {
        Spawner__Despawn((Spawner_o *)this, v2->fields.obj, 0, 0LL);
        return;
      }
    }
LABEL_15:
    sub_B0D97C(this);
  }
  obj = (UnityEngine_Object_o *)v2->fields.obj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(obj, 0LL);
}


void __fastcall BattleCommandComponent___c__DisplayClass221_0___ctor(
        BattleCommandComponent___c__DisplayClass221_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleCommandComponent___c__DisplayClass221_0___SetSpecialCommandCardBuffData_b__0(
        BattleCommandComponent___c__DisplayClass221_0_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_B0D97C(this);
  return c->fields.buffType == this->fields.buffType;
}


void __fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228___ctor(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228__MoveNext(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *this,
        const MethodInfo *method)
{
  BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *v2; // x19
  int32_t _1__state; // w8
  struct BattleCommandComponent_o *_4__this; // x21
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  struct UISprite_o *v6; // x8
  UnityEngine_Object_o *mAtlas; // x20
  bool v8; // w20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  bool result; // w0

  v2 = this;
  if ( (byte_42138DD & 1) == 0 )
  {
    this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *)sub_B0D8A4(
                                                                                &UnityEngine_Object_TypeInfo,
                                                                                method);
    byte_42138DD = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_28;
    this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *)_4__this->fields.specialCardBuffIcon;
    if ( !this )
      goto LABEL_28;
    this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)this,
                                                                                0LL);
    if ( !this )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_28;
      specialCardBuffIcon = (UnityEngine_Object_o *)_4__this->fields.specialCardBuffIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0LL, 0LL) )
      {
        this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *)_4__this->fields.specialCardBuffIcon;
        if ( this )
        {
          this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *)_4__this->fields.specialCardBuffIcon;
            if ( this )
            {
              UISprite__set_atlas((UISprite_o *)this, 0LL, 0LL);
              goto LABEL_16;
            }
          }
        }
LABEL_28:
        sub_B0D97C(this);
      }
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_28;
LABEL_16:
  v6 = _4__this->fields.specialCardBuffIcon;
  if ( !v6 )
    goto LABEL_28;
  mAtlas = (UnityEngine_Object_o *)v6->fields.mAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(mAtlas, 0LL, 0LL);
  v2->fields.__2__current = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v2->fields.__2__current, 0LL, v9, v10, v11, v12, v13, v14);
  if ( v8 )
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


Il2CppObject *__fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228__System_IDisposable_Dispose(
        BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleCommandComponent__delayFrame_d__160___ctor(
        BattleCommandComponent__delayFrame_d__160_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleCommandComponent__delayFrame_d__160__MoveNext(
        BattleCommandComponent__delayFrame_d__160_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *action; // x0

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    action = this->fields.action;
    this->fields.__1__state = -1;
    if ( !action )
      sub_B0D97C(0LL);
    System_Action__Invoke(action, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleCommandComponent__delayFrame_d__160__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__delayFrame_d__160_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__delayFrame_d__160__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__delayFrame_d__160_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleCommandComponent__delayFrame_d__160_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall BattleCommandComponent__delayFrame_d__160__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__delayFrame_d__160_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__delayFrame_d__160__System_IDisposable_Dispose(
        BattleCommandComponent__delayFrame_d__160_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleCommandComponent__fadeoutEffect_d__180___ctor(
        BattleCommandComponent__fadeoutEffect_d__180_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleCommandComponent__fadeoutEffect_d__180__MoveNext(
        BattleCommandComponent__fadeoutEffect_d__180_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleCommandComponent__fadeoutEffect_d__180_o *v8; // x20
  __int64 v9; // x1
  int32_t _1__state; // w8
  DefCoroutine_c *v11; // x0
  System_Int32_array **milliSecSix; // x1
  BattleServantConfConponent_o *p__2__current; // x20
  bool result; // w0
  struct BattleCommandComponent_o *_4__this; // x19
  struct UnityEngine_GameObject_array *effectobj; // x20
  UnityEngine_Transform_o *transform; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x21
  struct UnityEngine_GameObject_array *v25; // x8
  UnityEngine_Transform_o *v26; // x20
  struct UnityEngine_GameObject_array *v27; // x8
  UnityEngine_Transform_o *v28; // x20
  int v29; // s0
  __int64 v32; // x0
  __int64 v33; // x0

  v8 = this;
  if ( (byte_42138DE & 1) == 0 )
  {
    sub_B0D8A4(&DefCoroutine_TypeInfo, method);
    this = (BattleCommandComponent__fadeoutEffect_d__180_o *)sub_B0D8A4(&StringLiteral_18303/*"effect/ef_commandburn_s01"*/, v9);
    byte_42138DE = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (BattleCommandComponent__fadeoutEffect_d__180_o *)_4__this->fields.nomalwidget;
      if ( this )
      {
        ((void (__fastcall *)(BattleCommandComponent__fadeoutEffect_d__180_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
          this,
          this->klass[1]._1.image,
          0.0);
        BattleCommandComponent__DestroyEffectObject1(_4__this, 0LL);
        if ( v8->fields.isTresure )
        {
LABEL_28:
          BattleCommandComponent__CardEffectSetActive(_4__this, 0, 0LL);
          return 0;
        }
        effectobj = _4__this->fields.effectobj;
        this = (BattleCommandComponent__fadeoutEffect_d__180_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)_4__this,
                                                                   0LL);
        if ( this )
        {
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          this = (BattleCommandComponent__fadeoutEffect_d__180_o *)BaseMonoBehaviour__createObject_18711800(
                                                                     (BaseMonoBehaviour_o *)_4__this,
                                                                     (System_String_o *)StringLiteral_18303/*"effect/ef_commandburn_s01"*/,
                                                                     transform,
                                                                     0LL,
                                                                     0LL);
          if ( effectobj )
          {
            v24 = (System_Int32_array **)this;
            if ( this )
            {
              this = (BattleCommandComponent__fadeoutEffect_d__180_o *)sub_B0D964(
                                                                         this,
                                                                         effectobj->obj.klass->_1.element_class);
              if ( !this )
              {
                v33 = sub_B0D99C();
                sub_B0D948(v33, 0LL);
              }
            }
            if ( effectobj->max_length <= 1 )
              goto LABEL_31;
            effectobj->m_Items[1] = (UnityEngine_GameObject_o *)v24;
            sub_B0D840((BattleServantConfConponent_o *)&effectobj->m_Items[1], v24, v18, v19, v20, v21, v22, v23);
            v25 = _4__this->fields.effectobj;
            if ( !v25 )
              goto LABEL_30;
            if ( v25->max_length <= 1 )
              goto LABEL_31;
            this = (BattleCommandComponent__fadeoutEffect_d__180_o *)v25->m_Items[1];
            if ( !this )
              goto LABEL_30;
            v26 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            this = (BattleCommandComponent__fadeoutEffect_d__180_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)_4__this,
                                                                       0LL);
            if ( !this )
              goto LABEL_30;
            this = (BattleCommandComponent__fadeoutEffect_d__180_o *)UnityEngine_GameObject__get_transform(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       0LL);
            if ( !this )
              goto LABEL_30;
            this = (BattleCommandComponent__fadeoutEffect_d__180_o *)UnityEngine_Transform__get_parent(
                                                                       (UnityEngine_Transform_o *)this,
                                                                       0LL);
            if ( !v26 )
              goto LABEL_30;
            UnityEngine_Transform__set_parent(v26, (UnityEngine_Transform_o *)this, 0LL);
            v27 = _4__this->fields.effectobj;
            if ( !v27 )
              goto LABEL_30;
            if ( v27->max_length <= 1 )
            {
LABEL_31:
              v32 = sub_B0D9A8(this);
              sub_B0D948(v32, 0LL);
            }
            this = (BattleCommandComponent__fadeoutEffect_d__180_o *)v27->m_Items[1];
            if ( this )
            {
              v28 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
              *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_one(0LL);
              if ( v28 )
              {
                UnityEngine_Transform__set_localScale(v28, *(UnityEngine_Vector3_o *)&v29, 0LL);
                goto LABEL_28;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_B0D97C(this);
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  v11 = DefCoroutine_TypeInfo;
  if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
    v11 = DefCoroutine_TypeInfo;
  }
  milliSecSix = (System_Int32_array **)v11->static_fields->milliSecSix;
  v8->fields.__2__current = (Il2CppObject *)milliSecSix;
  p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B0D840(p__2__current, milliSecSix, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
  return result;
}


Il2CppObject *__fastcall BattleCommandComponent__fadeoutEffect_d__180__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleCommandComponent__fadeoutEffect_d__180_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleCommandComponent__fadeoutEffect_d__180__System_Collections_IEnumerator_Reset(
        BattleCommandComponent__fadeoutEffect_d__180_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleCommandComponent__fadeoutEffect_d__180_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall BattleCommandComponent__fadeoutEffect_d__180__System_Collections_IEnumerator_get_Current(
        BattleCommandComponent__fadeoutEffect_d__180_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleCommandComponent__fadeoutEffect_d__180__System_IDisposable_Dispose(
        BattleCommandComponent__fadeoutEffect_d__180_o *this,
        const MethodInfo *method)
{
  ;
}