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

  if ( (byte_40F69D2 & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_19208, v2);
    sub_B16FFC(&StringLiteral_21846, v3);
    sub_B16FFC(&StringLiteral_19206, v4);
    sub_B16FFC(&StringLiteral_19207, v5);
    sub_B16FFC(&StringLiteral_23019, v6);
    byte_40F69D2 = 1;
  }
  static_fields = BattleCommandComponent_TypeInfo->static_fields;
  v8 = StringLiteral_19206;
  static_fields->SEALED_CARDTYPE_ICON_ARTS = (struct System_String_o *)StringLiteral_19206;
  sub_B16F98(static_fields, v8);
  v9 = BattleCommandComponent_TypeInfo->static_fields;
  v10 = StringLiteral_19207;
  v9->SEALED_CARDTYPE_ICON_BUSTER = (struct System_String_o *)StringLiteral_19207;
  sub_B16F98(&v9->SEALED_CARDTYPE_ICON_BUSTER, v10);
  v11 = BattleCommandComponent_TypeInfo->static_fields;
  v12 = StringLiteral_19208;
  v11->SEALED_CARDTYPE_ICON_QUICK = (struct System_String_o *)StringLiteral_19208;
  sub_B16F98(&v11->SEALED_CARDTYPE_ICON_QUICK, v12);
  v38.fields.r = 1.0;
  v38.fields.g = 1.0;
  v38.fields.b = 1.0;
  *(_QWORD *)&methoda.token = 0LL;
  *(_QWORD *)&methoda.slot = 0LL;
  UnityEngine_Color___ctor_40666012(v38, v13, v14, v15, (const MethodInfo *)&methoda.token);
  BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientTopOnDefault = *(struct UnityEngine_Color_o *)&methoda.token;
  v39.fields.r = 0.69804;
  methoda.rgctx_data = 0LL;
  methoda.genericMethod = 0LL;
  v39.fields.g = 0.69804;
  v39.fields.b = 0.69804;
  UnityEngine_Color___ctor_40666012(v39, v16, v17, v18, (const MethodInfo *)&methoda.rgctx_data);
  v40.fields.b = 0.58824;
  BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientBottomOnDefault = *(struct UnityEngine_Color_o *)&methoda.rgctx_data;
  v40.fields.g = 0.93333;
  v40.fields.r = 1.0;
  methoda.return_type = 0LL;
  methoda.parameters = 0LL;
  UnityEngine_Color___ctor_40666012(v40, v19, v20, v21, (const MethodInfo *)&methoda.return_type);
  v41.fields.b = 0.070588;
  BattleCommandComponent_TypeInfo->static_fields->CriticalNumberLabelGradientTopOnBoosted = *(struct UnityEngine_Color_o *)&methoda.return_type;
  v41.fields.g = 0.63529;
  v41.fields.r = 1.0;
  methoda.name = 0LL;
  methoda.klass = 0LL;
  UnityEngine_Color___ctor_40666012(v41, v22, v23, v24, (const MethodInfo *)&methoda.name);
  v42.fields.b = 0.52549;
  BattleCommandComponent_TypeInfo->static_fields->CriticalNumberLabelGradientBottomOnBoosted = *(struct UnityEngine_Color_o *)&methoda.name;
  v42.fields.g = 0.88627;
  v42.fields.r = 1.0;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Color___ctor_40666012(v42, v25, v26, v27, &methoda);
  v43.fields.g = 0.53725;
  v43.fields.b = 0.0;
  BattleCommandComponent_TypeInfo->static_fields->CriticalPercentLabelGradientTopOnBoosted = *(struct UnityEngine_Color_o *)&methoda.methodPointer;
  v43.fields.r = 0.83137;
  v36 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_40666012(v43, v28, v29, v30, (const MethodInfo *)&v36);
  v31 = BattleCommandComponent_TypeInfo;
  BattleCommandComponent_TypeInfo->static_fields->CriticalPercentLabelGradientBottomOnBoosted = v36;
  v32 = v31->static_fields;
  v33 = StringLiteral_23019;
  v32->voiceIdPrefix = (struct System_String_o *)StringLiteral_23019;
  sub_B16F98(&v32->voiceIdPrefix, v33);
  v34 = BattleCommandComponent_TypeInfo->static_fields;
  v35 = StringLiteral_21846;
  v34->seIdPrefix = (struct System_String_o *)StringLiteral_21846;
  sub_B16F98(&v34->seIdPrefix, v35);
}


void __fastcall BattleCommandComponent___ctor(BattleCommandComponent_o *this, const MethodInfo *method)
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
  struct UnityEngine_GameObject_array *v13; // x0
  __int64 v14; // x2
  struct UnityEngine_GameObject_array *v15; // x0
  __int64 v16; // x2
  System_Array_o *v17; // x20
  __int64 v18; // x2
  System_Array_o *v19; // x20
  __int64 v20; // x2
  System_Array_o *v21; // x20
  __int64 v22; // x2
  System_Array_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v33; // x20
  System_RuntimeFieldHandle_o v34; // 0:w1.4
  System_RuntimeFieldHandle_o v35; // 0:w1.4
  System_RuntimeFieldHandle_o v36; // 0:w1.4
  System_RuntimeFieldHandle_o v37; // 0:w1.4

  if ( (byte_40F69D1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo, v4);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_BattleCommandComponent_CardBuffData__TypeInfo, v7);
    sub_B16FFC(&BuffList_TYPE___TypeInfo, v8);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__2798D0F53EF571A9EA2B1242325EF118911DCE9160ED6DF6A7ABD71F4BE53437,
      v9);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__4962172457F75B1A722121B5C4C6A8C6778DDBA77FB677DDE7A5BBE546867870,
      v10);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__7FF261A5C35634E350068AE4166549E7E2B263049C77B28D36985A526C7753C9,
      v11);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__81E6881EDC288CDA01A3F973C0C8C6DA6E8CCE911E702C19528468EFB3B4B468,
      v12);
    byte_40F69D1 = 1;
  }
  v13 = (struct UnityEngine_GameObject_array *)sub_B17014(UnityEngine_GameObject___TypeInfo, 6LL, v2);
  this->fields.effectobj = v13;
  sub_B16F98(&this->fields.effectobj, v13);
  v15 = (struct UnityEngine_GameObject_array *)sub_B17014(UnityEngine_GameObject___TypeInfo, 2LL, v14);
  this->fields.addObjectList = v15;
  sub_B16F98(&this->fields.addObjectList, v15);
  v17 = (System_Array_o *)sub_B17014(BuffList_TYPE___TypeInfo, 13LL, v16);
  v34.fields.value = Field__PrivateImplementationDetails__4962172457F75B1A722121B5C4C6A8C6778DDBA77FB677DDE7A5BBE546867870;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v17, v34, 0LL);
  this->fields.qabTypes = (struct BuffList_TYPE_array *)v17;
  sub_B16F98(&this->fields.qabTypes, v17);
  v19 = (System_Array_o *)sub_B17014(BuffList_TYPE___TypeInfo, 4LL, v18);
  v35.fields.value = Field__PrivateImplementationDetails__2798D0F53EF571A9EA2B1242325EF118911DCE9160ED6DF6A7ABD71F4BE53437;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v19, v35, 0LL);
  this->fields.noneTdQabTypes = (struct BuffList_TYPE_array *)v19;
  sub_B16F98(&this->fields.noneTdQabTypes, v19);
  v21 = (System_Array_o *)sub_B17014(BuffList_TYPE___TypeInfo, 3LL, v20);
  v36.fields.value = Field__PrivateImplementationDetails__81E6881EDC288CDA01A3F973C0C8C6DA6E8CCE911E702C19528468EFB3B4B468;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v21, v36, 0LL);
  this->fields.tdTypes = (struct BuffList_TYPE_array *)v21;
  sub_B16F98(&this->fields.tdTypes, v21);
  v23 = (System_Array_o *)sub_B17014(BuffList_TYPE___TypeInfo, 15LL, v22);
  v37.fields.value = Field__PrivateImplementationDetails__7FF261A5C35634E350068AE4166549E7E2B263049C77B28D36985A526C7753C9;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v23, v37, 0LL);
  this->fields.otherTypes = (struct BuffList_TYPE_array *)v23;
  sub_B16F98(&this->fields.otherTypes, v23);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleCommandComponent_CardBuffData__TypeInfo,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData___ctor__);
  this->fields.specialCardBuffList = (struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *)v28;
  sub_B16F98(&this->fields.specialCardBuffList, v28);
  this->fields.cardBuffAlphaFor = 1.0;
  v33 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__GameObject__TypeInfo,
                                                                                        v29,
                                                                                        v30,
                                                                                        v31,
                                                                                        v32);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v33,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.cardEffectDict = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v33;
  sub_B16F98(&this->fields.cardEffectDict, v33);
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
  this->fields.boostedCriticalRate += UnityEngine_Mathf__Clamp_40670656(v5, 0, toAdd, 0LL);
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
  struct System_Collections_Generic_Dictionary_string__GameObject__o *cardEffectDict; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  bool v11; // w19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F69C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__, value);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__,
      v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__,
      v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__, v8);
    byte_40F69C9 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  cardEffectDict = this->fields.cardEffectDict;
  if ( !cardEffectDict
    || (Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                   (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)cardEffectDict,
                   (const MethodInfo_2DA39BC *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__)) == 0LL )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v12,
    Values,
    (const MethodInfo_22866D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  v11 = value;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v12,
            (const MethodInfo_26BE610 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v12.fields.currentValue )
      sub_B170D4();
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v12.fields.currentValue, v11, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v12,
    (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
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
  struct System_Collections_Generic_Dictionary_string__GameObject__o *cardEffectDict; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  changeVColor_array *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  changeVColor_array *v13; // x19
  int max_length; // w8
  int i; // w22
  UnityEngine_ParticleSystemRenderer_o *v16; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v17; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v18; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F69CB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__, method);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__,
      v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__,
      v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__,
      v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__, v7);
    byte_40F69CB = 1;
  }
  memset(&v18, 0, sizeof(v18));
  cardEffectDict = this->fields.cardEffectDict;
  if ( !cardEffectDict
    || (Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                   (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)cardEffectDict,
                   (const MethodInfo_2DA39BC *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__)) == 0LL )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v17,
    Values,
    (const MethodInfo_22866D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v18,
            (const MethodInfo_26BE610 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    if ( !v18.fields.currentValue )
      sub_B170D4();
    v10 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
            (UnityEngine_GameObject_o *)v18.fields.currentValue,
            (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer___);
    v13 = v10;
    if ( !v10 )
      sub_B170D4();
    max_length = v10->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
        {
          sub_B17100(v10, v11, v12);
          sub_B170A0();
        }
        v16 = (UnityEngine_ParticleSystemRenderer_o *)v13->m_Items[i];
        if ( !v16 )
          sub_B170D4();
        UnityEngine_ParticleSystemRenderer__set_maskInteraction(v16, 1, 0LL);
        max_length = v13->max_length;
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v18,
    (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
}


void __fastcall BattleCommandComponent__ChangeCriticalLabelColor(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *criticallabel; // x0
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int max_length; // w8
  WarBoardControlPlayTalkUiComponent_array *v9; // x20
  unsigned int v10; // w22
  BattleCommandComponent_c *v11; // x0
  UILabel_o *v12; // x21
  UILabel_o *criticalPercentLabel; // x20
  BattleCommandComponent_c *v14; // x0
  UILabel_o *v15; // x0

  if ( (byte_40F6986 & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandComponent_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____66819928, v3);
    byte_40F6986 = 1;
  }
  criticallabel = (UnityEngine_Component_o *)this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_19;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              criticallabel,
                                                              1,
                                                              (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____66819928);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_19;
  max_length = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v9 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        sub_B17100(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v6, v7);
        sub_B170A0();
      }
      v11 = BattleCommandComponent_TypeInfo;
      v12 = (UILabel_o *)v9->m_Items[v10];
      if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v11 = BattleCommandComponent_TypeInfo;
      }
      if ( !v12 )
        break;
      UILabel__set_gradientTop(v12, v11->static_fields->CriticalNumberLabelGradientTopOnBoosted, 0LL);
      UILabel__set_gradientBottom(
        v12,
        BattleCommandComponent_TypeInfo->static_fields->CriticalNumberLabelGradientBottomOnBoosted,
        0LL);
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_13;
    }
LABEL_19:
    sub_B170D4();
  }
LABEL_13:
  criticalPercentLabel = this->fields.criticalPercentLabel;
  v14 = BattleCommandComponent_TypeInfo;
  if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
    v14 = BattleCommandComponent_TypeInfo;
  }
  if ( !criticalPercentLabel )
    goto LABEL_19;
  UILabel__set_gradientTop(criticalPercentLabel, v14->static_fields->CriticalPercentLabelGradientTopOnBoosted, 0LL);
  v15 = this->fields.criticalPercentLabel;
  if ( !v15 )
    goto LABEL_19;
  UILabel__set_gradientBottom(
    v15,
    BattleCommandComponent_TypeInfo->static_fields->CriticalPercentLabelGradientBottomOnBoosted,
    0LL);
}


void __fastcall BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x20
  int size; // w8
  __int64 cardBuffListIndex; // x21
  BattleCommandComponent_CardBuffData_o *v8; // x8
  int32_t buffType; // w8

  if ( (byte_40F69C5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__, v4);
    byte_40F69C5 = 1;
  }
  specialCardBuffList = this->fields.specialCardBuffList;
  if ( !specialCardBuffList )
    goto LABEL_13;
  size = specialCardBuffList->fields._size;
  cardBuffListIndex = this->fields.cardBuffListIndex;
  if ( size <= (int)cardBuffListIndex )
  {
LABEL_11:
    BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, 0, v2);
    return;
  }
  if ( size <= (unsigned int)cardBuffListIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v8 = specialCardBuffList->fields._items->m_Items[cardBuffListIndex];
  if ( !v8 )
LABEL_13:
    sub_B170D4();
  buffType = v8->fields.buffType;
  if ( buffType != 156 )
  {
    if ( buffType == 131 )
    {
      BattleCommandComponent__UpdateFixedCommandCard(this, method);
      return;
    }
    goto LABEL_11;
  }
  BattleCommandComponent__UpdateCommandCardTypeChange(this, method);
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
    sub_B170D4();
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
  struct System_Collections_Generic_Dictionary_string__GameObject__o *cardEffectDict; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  Il2CppObject *currentValue; // x20
  struct System_Collections_Generic_Dictionary_string__GameObject__o *v12; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F69CA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__, v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__,
      v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__get_Current__,
      v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__, v8);
    byte_40F69CA = 1;
  }
  memset(&v13, 0, sizeof(v13));
  cardEffectDict = this->fields.cardEffectDict;
  if ( !cardEffectDict )
    goto LABEL_13;
  Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)cardEffectDict,
             (const MethodInfo_2DA39BC *)Method_System_Collections_Generic_Dictionary_string__GameObject__get_Values__);
  if ( !Values )
    goto LABEL_13;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v13,
    Values,
    (const MethodInfo_22866D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__GameObject__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v13,
            (const MethodInfo_26BE610 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__MoveNext__) )
  {
    currentValue = v13.fields.currentValue;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)currentValue, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v13,
    (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__GameObject__Dispose__);
  v12 = this->fields.cardEffectDict;
  if ( !v12 )
LABEL_13:
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v12,
    (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Clear__);
}


void __fastcall BattleCommandComponent__DestroyEffectObject1(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCommandComponent_o *v3; // x19
  __int64 v4; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v6; // x20
  struct UnityEngine_GameObject_array *v7; // x8
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  UnityEngine_Object_o *v10; // x20
  struct UnityEngine_GameObject_array *v11; // x8
  UnityEngine_Object_o *v12; // x20

  v3 = this;
  if ( (byte_40F69AC & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___, method);
    this = (BattleCommandComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F69AC = 1;
  }
  effectobj = v3->fields.effectobj;
  if ( !effectobj )
    goto LABEL_27;
  if ( effectobj->max_length <= 1 )
    goto LABEL_28;
  v6 = (UnityEngine_Object_o *)effectobj->m_Items[1];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v3->fields.newMatriarl )
    {
      v7 = v3->fields.effectobj;
      if ( !v7 )
        goto LABEL_27;
      if ( v7->max_length <= 1 )
        goto LABEL_28;
      v8 = v7->m_Items[1];
      if ( !v8 )
        goto LABEL_27;
      ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                    v8,
                                                    (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
      if ( !ComponentInChildren_Dropdown_DropdownItem )
        goto LABEL_27;
      v10 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(UnityEngine_UI_Dropdown_DropdownItem_o *, _QWORD))&ComponentInChildren_Dropdown_DropdownItem->klass[1]._2.thread_static_fields_offset)(
                                      ComponentInChildren_Dropdown_DropdownItem,
                                      *(_QWORD *)&ComponentInChildren_Dropdown_DropdownItem->klass[1]._2.token);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v10, 0LL);
      v3->fields.newMatriarl = 0;
    }
    v11 = v3->fields.effectobj;
    if ( v11 )
    {
      if ( v11->max_length <= 1 )
        goto LABEL_28;
      v12 = (UnityEngine_Object_o *)v11->m_Items[1];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v12, 0LL);
      this = (BattleCommandComponent_o *)v3->fields.effectobj;
      if ( this )
      {
        if ( LODWORD(this->fields.objectRoot) > 1 )
        {
          this->fields.icon = 0LL;
          sub_B16F98(&this->fields.icon, 0LL);
          return;
        }
LABEL_28:
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
    }
LABEL_27:
    sub_B170D4();
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
    sub_B170D4();
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
  float v14; // s0
  float v15; // s1
  float v16; // s2
  float v17; // s3
  float v18; // s4
  float v19; // s5
  float v20; // s6
  float v21; // s7
  UnityEngine_GameObject_o *v22; // x19
  UnityEngine_Transform_o *transform; // x20
  int v24; // s0
  UnityEngine_Transform_o *v27; // x0
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
  *(UnityEngine_Quaternion_o *)&v14 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !spawner )
    goto LABEL_6;
  v18 = v14;
  v19 = v15;
  v20 = v16;
  v21 = v17;
  v30.fields.x = v11;
  v30.fields.y = v12;
  v30.fields.z = v13;
  v32.fields.x = v18;
  v32.fields.y = v19;
  v32.fields.z = v20;
  v32.fields.w = v21;
  v22 = Spawner__Spawn_24902380(spawner, (UnityEngine_Object_o *)prefab, v30, v32, 0LL);
  GameObjectExtensions__SetParent(v22, (UnityEngine_Component_o *)parent, 0LL);
  if ( !v22
    || (transform = UnityEngine_GameObject__get_transform(v22, 0LL),
        *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v24, 0LL),
        (v27 = UnityEngine_GameObject__get_transform(v22, 0LL)) == 0LL) )
  {
LABEL_6:
    sub_B170D4();
  }
  v31.fields.x = x;
  v31.fields.y = y;
  v31.fields.z = z;
  UnityEngine_Transform__set_localScale(v27, v31, 0LL);
  return v22;
}


void __fastcall BattleCommandComponent__HideAndCancelCountUpFinishEffect(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  DrumRollLabel_o *criticallabel; // x0
  UnityEngine_Object_o *countUpFinishEffect; // x20
  Spawner_o *spawner; // x0
  UnityEngine_GameObject_o **p_countUpFinishEffect; // x19

  if ( (byte_40F6985 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F6985 = 1;
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
    spawner = this->fields.spawner;
    if ( spawner )
    {
      p_countUpFinishEffect = &this->fields.countUpFinishEffect;
      Spawner__Despawn(spawner, *p_countUpFinishEffect, 1, 0LL);
      *p_countUpFinishEffect = 0LL;
      sub_B16F98(p_countUpFinishEffect, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *v9; // x0

  if ( (byte_40F69C6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isCommandCardUnderIcon);
    byte_40F69C6 = 1;
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
      gameObject = UnityEngine_Component__get_gameObject(powerUpCardValue, 0LL);
      if ( gameObject )
      {
        if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) || !isCommandCardUnderIcon )
          return;
        v8 = (UnityEngine_Component_o *)this->fields.powerUpCardValue;
        if ( v8 )
        {
          v9 = UnityEngine_Component__get_gameObject(v8, 0LL);
          if ( v9 )
          {
            UnityEngine_GameObject__SetActive(v9, 0, 0LL);
            return;
          }
        }
      }
    }
    sub_B170D4();
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
  UnityEngine_Object_o *Object_29932412; // x0
  UnityEngine_Object_o *v13; // x20
  SimpleAnimation_o *Component_WebViewObject; // x21
  UnityEngine_Object_o *v15; // x19
  System_String_o *name; // x0
  System_String_o *v17; // x0

  if ( (byte_40F697F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_AnimationClip_TypeInfo, method);
    sub_B16FFC(&AssetManager_TypeInfo, v3);
    sub_B16FFC(&BattleDataDefine_TypeInfo, v4);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Animation___, v5);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_16280, v8);
    byte_40F697F = 1;
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
  Object_29932412 = AssetData__GetObject_29932412(AssetStorage, (System_String_o *)StringLiteral_16280, 0LL);
  if ( Object_29932412 )
  {
    if ( (UnityEngine_AnimationClip_c *)Object_29932412->klass == UnityEngine_AnimationClip_TypeInfo )
      v13 = Object_29932412;
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
    Component_WebViewObject = (SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                     (UnityEngine_Component_o *)this,
                                                     (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    v15 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Animation___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
    {
      if ( v13 )
      {
        name = UnityEngine_Object__get_name(v13, 0LL);
        if ( Component_WebViewObject )
        {
          SimpleAnimation__AddClip(Component_WebViewObject, (UnityEngine_AnimationClip_o *)v13, name, 0LL);
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
      if ( !UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
        return;
      if ( v13 )
      {
        v17 = UnityEngine_Object__get_name(v13, 0LL);
        if ( v15 )
        {
          UnityEngine_Animation__AddClip((UnityEngine_Animation_o *)v15, (UnityEngine_AnimationClip_o *)v13, v17, 0LL);
          return;
        }
      }
    }
LABEL_34:
    sub_B170D4();
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
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UISprite_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_40F697E & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, method);
    sub_B16FFC(&AssetManager_TypeInfo, v3);
    sub_B16FFC(&BattleDataDefine_TypeInfo, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_2758, v7);
    sub_B16FFC(&StringLiteral_19259, v8);
    byte_40F697E = 1;
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
      || (Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                         AssetStorage,
                                                                         (System_String_o *)StringLiteral_2758,
                                                                         (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784)) == 0LL
      || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      Object_WarBoardWaitTimeSetting,
                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.treasureDeviceErrorSprite)
      || (UISprite__set_atlas(this->fields.treasureDeviceErrorSprite, (UIAtlas_o *)Component_srcLineSprite, 0LL),
          (v15 = this->fields.treasureDeviceErrorSprite) == 0LL) )
    {
      sub_B170D4();
    }
    UISprite__set_spriteName(v15, (System_String_o *)StringLiteral_19259, 0LL);
    BattleCommandComponent__SetConfWindowTreasureDeviceErrorMark(this, v16);
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
  Spawner_o **p_spawner; // x20
  UnityEngine_Object_o *spawner; // x21
  const MethodInfo *v7; // x1
  Spawner_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_40F6980 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_Spawner__get_Instance__, v3);
    byte_40F6980 = 1;
  }
  Instance = (struct Spawner_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_Spawner__get_Instance__);
  p_spawner = &this->fields.spawner;
  this->fields.spawner = Instance;
  sub_B16F98(&this->fields.spawner, Instance);
  spawner = (UnityEngine_Object_o *)this->fields.spawner;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL) )
  {
    if ( !*p_spawner
      || (Spawner__Precache_24901732(*p_spawner, (UnityEngine_Object_o *)this->fields.effect_cricomplete, 5, 0LL),
          (v8 = this->fields.spawner) == 0LL) )
    {
      sub_B170D4();
    }
    Spawner__Precache_24901732(v8, (UnityEngine_Object_o *)this->fields.effect_fullcricomplete, 5, 0LL);
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
  SimpleAnimation_o *Component_WebViewObject; // x21
  UnityEngine_Object_o *v8; // x20

  if ( (byte_40F69CF & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Animation___, animationName);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40F69CF = 1;
  }
  Component_WebViewObject = (SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v8 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    if ( Component_WebViewObject )
      return SimpleAnimation__IsPlaying(Component_WebViewObject, animationName, 0LL);
LABEL_16:
    sub_B170D4();
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
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
    sub_B170D4();
  return data->fields.starcount > 999;
}


bool __fastcall BattleCommandComponent__IsMaxViewCritical(BattleCommandComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *criticalObject; // x0
  struct DrumRollLabel_o *criticallabel; // x8

  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    goto LABEL_6;
  if ( UnityEngine_GameObject__get_activeSelf(criticalObject, 0LL) )
  {
    criticallabel = this->fields.criticallabel;
    if ( criticallabel )
      return criticallabel->fields.nowvalue == 100;
LABEL_6:
    sub_B170D4();
  }
  return 0;
}


bool __fastcall BattleCommandComponent__IsValidVoiceType(
        BattleCommandComponent_o *this,
        System_String_o *voiceTypeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct BattleServantData_o *svtData; // x8
  __int64 v7; // x21
  __int64 v8; // x22
  int32_t v9; // w0
  int32_t v10; // w21
  int32_t DispLimitCount; // w0
  struct BattleServantData_o *v12; // x8
  int32_t v13; // w20
  int32_t overwriteSvtVoiceId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_40F69A5 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, voiceTypeId);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v5);
    byte_40F69A5 = 1;
  }
  svtData = this->fields.svtData;
  if ( !svtData )
    goto LABEL_13;
  v8 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v8;
  *(_QWORD *)&v16.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v16, 0LL);
  if ( !this->fields.svtData
    || (v10 = v9,
        DispLimitCount = BattleServantData__getDispLimitCount(this->fields.svtData, 1, 0LL),
        (v12 = this->fields.svtData) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  v13 = DispLimitCount;
  overwriteSvtVoiceId = v12->fields.overwriteSvtVoiceId;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  return ServantAssetLoadManager__checkBattleVoice(v10, v13, overwriteSvtVoiceId, voiceTypeId, 0, 0LL);
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

  if ( (byte_40F69A2 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_22646, v4);
    byte_40F69A2 = 1;
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
        sub_B170D4();
      UnityEngine_GameObject__SendMessage_40693300(v7, (System_String_o *)StringLiteral_22646, v8, 0LL);
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

  if ( (byte_40F69A3 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, obj);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_8563, v5);
    byte_40F69A3 = 1;
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
        sub_B170D4();
      UnityEngine_GameObject__SendMessage_40693300(v8, (System_String_o *)StringLiteral_8563, v9, 0LL);
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
  SimpleAnimation_State_o *v12; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v14; // x21
  unsigned __int64 v15; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_AnimationState_o *Item; // x0

  v4 = *(long double *)&simpleAnimationTime;
  if ( (byte_40F698E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Animation___, animationName);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v9);
    byte_40F698E = 1;
  }
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v11 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
      return;
    if ( v11 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11, 0, 0LL);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11, 1, 0LL);
      Item = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v11, animationName, 0LL);
      if ( Item )
      {
        UnityEngine_AnimationState__set_time(Item, *(float *)&v4, 0LL);
        UnityEngine_Animation__Play_49744236((UnityEngine_Animation_o *)v11, animationName, 0LL);
        return;
      }
    }
LABEL_24:
    sub_B170D4();
  }
  if ( !Component_WebViewObject )
    goto LABEL_24;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 1, 0LL);
  v12 = SimpleAnimation__get_Item((SimpleAnimation_o *)Component_WebViewObject, animationName, 0LL);
  if ( !v12 )
    goto LABEL_24;
  klass = v12->klass;
  v14 = v12;
  if ( *(_WORD *)&v12->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v15;
      p_offset += 2;
      if ( v15 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
  }
  else
  {
LABEL_13:
    p_method = sub_AAFEF8(v12, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))p_method)(v14, *(_QWORD *)(p_method + 8), v4);
  SimpleAnimation__Play_16380456((SimpleAnimation_o *)Component_WebViewObject, animationName, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__PlayStarSe(
        BattleCommandComponent_o *this,
        float preDelayTime,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  BattleCommandComponent__PlayStarSe_d__159_o *v7; // x19

  if ( (byte_40F699B & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandComponent__PlayStarSe_d__159_TypeInfo, method);
    byte_40F699B = 1;
  }
  v7 = (BattleCommandComponent__PlayStarSe_d__159_o *)sub_B170CC(
                                                        BattleCommandComponent__PlayStarSe_d__159_TypeInfo,
                                                        method,
                                                        v3,
                                                        v4,
                                                        v5);
  BattleCommandComponent__PlayStarSe_d__159___ctor(v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  v7->fields.preDelayTime = preDelayTime;
  return (System_Collections_IEnumerator_o *)v7;
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
  BattleDeckServantData_o *deckSvt; // x0
  System_String_o *TDErrorCardSelectVoiceSe; // x0
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  BattleCommandComponent_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_40F69D0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, tdErrorAfterAction);
    sub_B16FFC(&StringLiteral_21847, v5);
    sub_B16FFC(&StringLiteral_16280, v6);
    sub_B16FFC(&StringLiteral_16278, v7);
    byte_40F69D0 = 1;
  }
  IsAnimationBusy = BattleCommandComponent__IsAnimationBusy(this, (System_String_o *)StringLiteral_16278, method);
  v9 = System_Delegate__Combine(
         (System_Delegate_o *)this->fields.tdErrorAfterAction,
         (System_Delegate_o *)tdErrorAfterAction,
         0LL);
  if ( v9 && (System_Action_c *)v9->klass != System_Action_TypeInfo )
  {
    v17 = (BattleCommandComponent_o *)sub_B173C8(v9);
    BattleCommandComponent___ctor(v17, v18);
  }
  else
  {
    p_tdErrorAfterAction = &this->fields.tdErrorAfterAction;
    this->fields.tdErrorAfterAction = (struct System_Action_o *)v9;
    sub_B16F98(&this->fields.tdErrorAfterAction, v9);
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
        || (deckSvt = v12->fields.deckSvt) == 0LL )
      {
        sub_B170D4();
      }
      TDErrorCardSelectVoiceSe = BattleDeckServantData__GetTDErrorCardSelectVoiceSe(
                                   deckSvt,
                                   (System_String_o *)StringLiteral_21847,
                                   0LL);
      BattleCommandComponent__PlayTDErrorVoiceSe(this, TDErrorCardSelectVoiceSe, -1, v15);
      BattleCommandComponent__PlayAnimation(this, (System_String_o *)StringLiteral_16280, 0.0, v16);
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
  int32_t SvtId; // w0
  int32_t v16; // w22
  int32_t DispLimitCount; // w23
  ServantAssetLoadManager_o *Instance; // x0
  int32_t VoicePrefix; // w0
  BattleCommandComponent_c *v20; // x8
  int v21; // w24
  System_String_o *v22; // x0
  struct BattleServantData_o *v23; // x8
  System_String_o *v24; // x19
  int32_t overwriteSvtVoiceId; // w21
  Il2CppObject *v26; // x20
  Il2CppObject *v27; // x0
  BattleCommandComponent_c *v28; // x0
  BattleCommandComponent_c *v29; // x0
  _QWORD *v30; // x8
  System_Reflection_MethodBase_o *v31; // x0
  int v33; // [xsp+8h] [xbp-38h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F69CD & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleCommandComponent_PlayTDErrorVoiceSe__, voiceSeId);
    sub_B16FFC(&BattleCommandComponent_TypeInfo, v7);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v10);
    sub_B16FFC(&StringLiteral_23548, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    byte_40F69CD = 1;
  }
  v13 = 0LL;
  if ( !System_String__IsNullOrEmpty(voiceSeId, 0LL) )
  {
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
        SvtId = BattleServantData__getSvtId(svtData, 0LL);
        if ( this->fields.svtData )
        {
          v16 = SvtId;
          DispLimitCount = BattleServantData__getDispLimitCount(this->fields.svtData, 1, 0LL);
          Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( Instance )
          {
            VoicePrefix = ServantAssetLoadManager__getVoicePrefix(Instance, v16, DispLimitCount, 0LL);
            v20 = BattleCommandComponent_TypeInfo;
            v21 = VoicePrefix;
            if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
              v20 = BattleCommandComponent_TypeInfo;
            }
            v22 = System_String__Replace_43750968(
                    voiceSeId,
                    v20->static_fields->voiceIdPrefix,
                    (System_String_o *)StringLiteral_1,
                    0LL);
            v23 = this->fields.svtData;
            if ( v23 )
            {
              v24 = v22;
              overwriteSvtVoiceId = v23->fields.overwriteSvtVoiceId;
              if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
              }
              ServantAssetLoadManager__playBattleVoice(
                v16,
                DispLimitCount,
                overwriteSvtVoiceId,
                v24,
                1.0,
                0LL,
                voiceUniqueId,
                0,
                0LL);
              v34 = v16;
              v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
              v33 = v21;
              v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
              return System_String__Format_43744796(
                       (System_String_o *)StringLiteral_23548,
                       v26,
                       v27,
                       (Il2CppObject *)v24,
                       0LL);
            }
          }
        }
      }
LABEL_32:
      sub_B170D4();
    }
    v28 = BattleCommandComponent_TypeInfo;
    if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
      v28 = BattleCommandComponent_TypeInfo;
    }
    if ( System_String__StartsWith(voiceSeId, v28->static_fields->seIdPrefix, 0LL) )
    {
      v29 = BattleCommandComponent_TypeInfo;
      if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v29 = BattleCommandComponent_TypeInfo;
      }
      v13 = System_String__Replace_43750968(
              voiceSeId,
              v29->static_fields->seIdPrefix,
              (System_String_o *)StringLiteral_1,
              0LL);
      v30 = Method_BattleCommandComponent_PlayTDErrorVoiceSe__;
      if ( (*((_BYTE *)Method_BattleCommandComponent_PlayTDErrorVoiceSe__ + 75) & 2) != 0 )
        v30 = (_QWORD *)sub_B17004(Method_BattleCommandComponent_PlayTDErrorVoiceSe__);
      v31 = (System_Reflection_MethodBase_o *)sub_B16FE0(v30, v30[3]);
      OverwriteAssetSoundName__PlaySe(v31, v13, 0LL);
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
  System_String_o *CurrentTDErrorStatusVoiceSe; // x0
  const MethodInfo *v7; // x3
  struct BattleCommandData_o *data; // x8
  System_String_o *v9; // x0
  const MethodInfo *v10; // x2
  System_Collections_IEnumerator_o *v11; // x1

  svtData = this->fields.svtData;
  if ( !svtData
    || (CurrentTDErrorStatusVoiceSe = BattleServantData__GetCurrentTDErrorStatusVoiceSe(svtData, 0LL),
        (data = this->fields.data) == 0LL) )
  {
    sub_B170D4();
  }
  v9 = BattleCommandComponent__PlayTDErrorVoiceSe(this, CurrentTDErrorStatusVoiceSe, data->fields.uniqueId, v7);
  v11 = BattleCommandComponent__WaitForErrorViewFinished(this, waitSeconds, v9, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
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

  if ( (byte_40F6992 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&iTween_TypeInfo, v3);
    byte_40F6992 = 1;
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
    iTween__Stop_18552136(v6, 0LL);
    v7 = (UnityEngine_Object_o *)*p_nobleGaugeEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v7, 0LL);
    *p_nobleGaugeEffect = 0LL;
    sub_B16F98(p_nobleGaugeEffect, 0LL);
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
    sub_B170D4();
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

  if ( (byte_40F69C3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F69C3 = 1;
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
      sub_B170D4();
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
  UnityEngine_Component_o *criticallabel; // x0
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int max_length; // w8
  WarBoardControlPlayTalkUiComponent_array *v9; // x20
  unsigned int v10; // w22
  BattleCommandComponent_c *v11; // x0
  UILabel_o *v12; // x21
  UILabel_o *criticalPercentLabel; // x20
  BattleCommandComponent_c *v14; // x0
  UILabel_o *v15; // x0

  if ( (byte_40F6987 & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandComponent_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_UILabel____66819928, v3);
    byte_40F6987 = 1;
  }
  criticallabel = (UnityEngine_Component_o *)this->fields.criticallabel;
  if ( !criticallabel )
    goto LABEL_19;
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                              criticallabel,
                                                              1,
                                                              (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UILabel____66819928);
  if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
    goto LABEL_19;
  max_length = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v9 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        sub_B17100(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v6, v7);
        sub_B170A0();
      }
      v11 = BattleCommandComponent_TypeInfo;
      v12 = (UILabel_o *)v9->m_Items[v10];
      if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
        v11 = BattleCommandComponent_TypeInfo;
      }
      if ( !v12 )
        break;
      UILabel__set_gradientTop(v12, v11->static_fields->CriticalLabelGradientTopOnDefault, 0LL);
      UILabel__set_gradientBottom(
        v12,
        BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientBottomOnDefault,
        0LL);
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_13;
    }
LABEL_19:
    sub_B170D4();
  }
LABEL_13:
  criticalPercentLabel = this->fields.criticalPercentLabel;
  v14 = BattleCommandComponent_TypeInfo;
  if ( (BYTE3(BattleCommandComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent_TypeInfo);
    v14 = BattleCommandComponent_TypeInfo;
  }
  if ( !criticalPercentLabel )
    goto LABEL_19;
  UILabel__set_gradientTop(criticalPercentLabel, v14->static_fields->CriticalLabelGradientTopOnDefault, 0LL);
  v15 = this->fields.criticalPercentLabel;
  if ( !v15 )
    goto LABEL_19;
  UILabel__set_gradientBottom(
    v15,
    BattleCommandComponent_TypeInfo->static_fields->CriticalLabelGradientBottomOnDefault,
    0LL);
}


void __fastcall BattleCommandComponent__ResetPassStarCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B170D4();
  data->fields.passStarCount = 0;
}


void __fastcall BattleCommandComponent__SetActiveComponent(
        BattleCommandComponent_o *this,
        UnityEngine_Component_o *component,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F69B9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, component);
    byte_40F69B9 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)component, 0LL, 0LL) )
  {
    if ( !component || (gameObject = UnityEngine_Component__get_gameObject(component, 0LL)) == 0LL )
      sub_B170D4();
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
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F69C0 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, active);
    byte_40F69C0 = 1;
  }
  specialCardBuffIcon = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(specialCardBuffIcon, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
    if ( !v6 || (gameObject = UnityEngine_Component__get_gameObject(v6, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, active, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetCardBuffAlphaAnimFlag(
        BattleCommandComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F69BF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, active);
    byte_40F69BF = 1;
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
    v6 = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
    if ( !v6 || (gameObject = UnityEngine_Component__get_gameObject(v6, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
  UIWidget_o *v11; // x0
  UnityEngine_Object_o *codeSprite; // x20
  UIWidget_o *v13; // x0
  UnityEngine_Object_o *codeTexture; // x20
  const MethodInfo *v15; // x2
  UIWidget_o *v16; // x0
  const MethodInfo *v17; // x2
  UnityEngine_Object_o *powerUpCardIcon; // x20
  UIWidget_o *v19; // x0
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_40F69A7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F69A7 = 1;
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
    v20.fields.r = r;
    v20.fields.g = g;
    v20.fields.b = b;
    v20.fields.a = a;
    UIWidget__set_color(v9, v20, 0LL);
  }
  bg = (UnityEngine_Object_o *)this->fields.bg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bg, 0LL, 0LL) )
  {
    v11 = (UIWidget_o *)this->fields.bg;
    if ( !v11 )
      goto LABEL_34;
    v21.fields.r = r;
    v21.fields.g = g;
    v21.fields.b = b;
    v21.fields.a = a;
    UIWidget__set_color(v11, v21, 0LL);
  }
  codeSprite = (UnityEngine_Object_o *)this->fields.codeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(codeSprite, 0LL, 0LL) )
  {
    v13 = (UIWidget_o *)this->fields.codeSprite;
    if ( !v13 )
      goto LABEL_34;
    v22.fields.r = r;
    v22.fields.g = g;
    v22.fields.b = b;
    v22.fields.a = a;
    UIWidget__set_color(v13, v22, 0LL);
  }
  codeTexture = (UnityEngine_Object_o *)this->fields.codeTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(codeTexture, 0LL, 0LL) )
  {
    v16 = (UIWidget_o *)this->fields.codeTexture;
    if ( !v16 )
      goto LABEL_34;
    v23.fields.r = r;
    v23.fields.g = g;
    v23.fields.b = b;
    v23.fields.a = a;
    UIWidget__set_color(v16, v23, 0LL);
  }
  v24.fields.r = r;
  v24.fields.g = g;
  v24.fields.b = b;
  v24.fields.a = a;
  BattleCommandComponent__SetCommandCodeActive(this, v24, 0, v15);
  v25.fields.r = r;
  v25.fields.g = g;
  v25.fields.b = b;
  v25.fields.a = a;
  BattleCommandComponent__SetCommandAssistActive(this, v25, 0, v17);
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(powerUpCardIcon, 0LL, 0LL) )
  {
    v19 = (UIWidget_o *)this->fields.powerUpCardIcon;
    if ( v19 )
    {
      v26.fields.b = b;
      v26.fields.a = a;
      v26.fields.r = r;
      v26.fields.g = g;
      UIWidget__set_color(v19, v26, 0LL);
      return;
    }
LABEL_34:
    sub_B170D4();
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
  UnityEngine_Behaviour_o *v14; // x0
  UnityEngine_Behaviour_o *v15; // x0
  UnityEngine_Object_o *assistSprite; // x21
  UIWidget_o *v17; // x0
  struct BattleCommandData_o *data; // x8
  struct BattleServantData_o *svtData; // x8
  BattleBuffData_o *buffData; // x0
  BattleBuffData_BuffData_array *PassiveList; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  int max_length; // w8
  unsigned int v25; // w9
  BattleBuffData_BuffData_o *v26; // x21
  struct BattleCommandData_o *v27; // x10
  int32_t v28; // w21
  int reCharge; // t1
  UIWidget_o *v30; // x22
  int v31; // s0
  UnityEngine_Behaviour_o *v35; // x0
  UnityEngine_Behaviour_o *v36; // x0
  UILabel_o *v37; // x22
  System_String_o *v38; // x0
  UILabel_o *v39; // x21
  System_String_o *v40; // x0
  UnityEngine_Component_o *v41; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v48; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_40F69A9 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, isFirst);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_2381, v11);
    byte_40F69A9 = 1;
  }
  if ( this->fields.isInBattle )
  {
    v48.fields.r = 0.0;
    v48.fields.g = 0.0;
    v48.fields.b = 0.0;
    v48.fields.a = 0.0;
    v45.fields.r = r;
    v45.fields.g = g;
    v45.fields.b = b;
    v45.fields.a = a;
    if ( UnityEngine_Color__op_Equality(v45, v48, 0LL) )
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
        v14 = (UnityEngine_Behaviour_o *)this->fields.assistChargeTurnLabel;
        if ( !v14 )
          goto LABEL_52;
        UnityEngine_Behaviour__set_enabled(v14, 0, 0LL);
        v15 = (UnityEngine_Behaviour_o *)this->fields.assistRemainingTurnLabel;
        if ( !v15 )
          goto LABEL_52;
        UnityEngine_Behaviour__set_enabled(v15, 0, 0LL);
        assistSprite = (UnityEngine_Object_o *)this->fields.assistSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(assistSprite, 0LL, 0LL) )
        {
          v17 = (UIWidget_o *)this->fields.assistSprite;
          if ( !v17 )
            goto LABEL_52;
          v47.fields.r = r;
          v47.fields.g = g;
          v47.fields.b = b;
          v47.fields.a = a;
          UIWidget__set_color(v17, v47, 0LL);
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
                PassiveList = BattleBuffData__getPassiveList(buffData, 1, 0LL);
                if ( !PassiveList )
                  goto LABEL_52;
                max_length = PassiveList->max_length;
                if ( max_length >= 1 )
                {
                  v25 = 0;
                  while ( 1 )
                  {
                    if ( v25 >= max_length )
                    {
                      sub_B17100(PassiveList, v22, v23);
                      sub_B170A0();
                    }
                    v26 = PassiveList->m_Items[v25];
                    if ( !v26 )
                      goto LABEL_52;
                    v27 = this->fields.data;
                    if ( !v27 )
                      goto LABEL_52;
                    if ( v26->fields.commandAssistId == v27->fields.commandAssistId
                      && v26->fields.cardIndex == v27->fields.servantCardIdsIndex )
                    {
                      break;
                    }
                    if ( (int)++v25 >= max_length )
                      goto LABEL_45;
                  }
                  reCharge = v26->fields.reCharge;
                  v28 = (_DWORD)v26 + 112;
                  if ( reCharge >= 1 )
                  {
                    v30 = (UIWidget_o *)this->fields.assistSprite;
                    *(UnityEngine_Color_o *)&v31 = UnityEngine_Color__get_gray(0LL);
                    if ( !v30 )
                      goto LABEL_52;
                    UIWidget__set_color(v30, *(UnityEngine_Color_o *)&v31, 0LL);
                    v35 = (UnityEngine_Behaviour_o *)this->fields.assistChargeTurnLabel;
                    if ( !v35 )
                      goto LABEL_52;
                    UnityEngine_Behaviour__set_enabled(v35, 1, 0LL);
                    v36 = (UnityEngine_Behaviour_o *)this->fields.assistRemainingTurnLabel;
                    if ( !v36 )
                      goto LABEL_52;
                    UnityEngine_Behaviour__set_enabled(v36, 1, 0LL);
                    v37 = this->fields.assistChargeTurnLabel;
                    v38 = System_Int32__ToString(v28, 0LL);
                    if ( !v37 )
                      goto LABEL_52;
                    UILabel__set_text(v37, v38, 0LL);
                    v39 = this->fields.assistRemainingTurnLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_2381, 0LL);
                    if ( !v39 )
                      goto LABEL_52;
                    UILabel__set_text(v39, v40, 0LL);
                  }
                }
LABEL_45:
                if ( isFirst )
                {
                  v41 = (UnityEngine_Component_o *)this->fields.assistChargeTurnLabel;
                  if ( v41 )
                  {
                    gameObject = UnityEngine_Component__get_gameObject(v41, 0LL);
                    if ( gameObject )
                    {
                      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                      v43 = (UnityEngine_Component_o *)this->fields.assistRemainingTurnLabel;
                      if ( v43 )
                      {
                        v44 = UnityEngine_Component__get_gameObject(v43, 0LL);
                        if ( v44 )
                        {
                          UnityEngine_GameObject__SetActive(v44, 0, 0LL);
                          return;
                        }
                      }
                    }
                  }
LABEL_52:
                  sub_B170D4();
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
  UnityEngine_Behaviour_o *v10; // x0
  BattleData_c *inited; // x0
  int32_t EventId; // w21
  EventCommandAssistMaster_o *Master_WarQuestSelectionMaster; // x0
  EventCommandAssistEntity_o *CurrentEntity; // x0
  UISprite_o *v15; // x20
  System_String_o *v16; // x21

  if ( (byte_40F69B2 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&commandAssistId);
    sub_B16FFC(&BattleData_TypeInfo, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40F69B2 = 1;
  }
  assistSprite = (UnityEngine_Object_o *)this->fields.assistSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(assistSprite, 0LL, 0LL) )
  {
    v10 = (UnityEngine_Behaviour_o *)this->fields.assistSprite;
    if ( v10 )
    {
      if ( commandAssistId <= 0 )
        goto LABEL_23;
      UnityEngine_Behaviour__set_enabled(v10, 1, 0LL);
      inited = BattleData_TypeInfo;
      if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
        inited = (BattleData_c *)j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
      EventId = BattleData__GetEventId((const MethodInfo *)inited);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
      if ( Master_WarQuestSelectionMaster )
      {
        CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(
                          Master_WarQuestSelectionMaster,
                          EventId,
                          commandAssistId,
                          -1,
                          0,
                          0LL);
        if ( CurrentEntity )
        {
          v15 = this->fields.assistSprite;
          v16 = System_Int32__ToString((int)CurrentEntity + 48, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          if ( AtlasManager__SetEventSprite(v15, v16, 0LL) )
            return;
          v10 = (UnityEngine_Behaviour_o *)this->fields.assistSprite;
          if ( v10 )
          {
LABEL_23:
            UnityEngine_Behaviour__set_enabled(v10, 0, 0LL);
            return;
          }
        }
      }
    }
    sub_B170D4();
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
  UnityEngine_Behaviour_o *v14; // x0
  UnityEngine_Behaviour_o *v15; // x0
  UnityEngine_Object_o *codeTexture; // x21
  UIWidget_o *v17; // x0
  UnityEngine_Object_o *codeSprite; // x21
  struct BattleCommandData_o *data; // x8
  struct BattleServantData_o *svtData; // x8
  BattleBuffData_o *buffData; // x0
  BattleBuffData_BuffData_array *PassiveList; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  int max_length; // w8
  unsigned int v26; // w9
  BattleBuffData_BuffData_o *v27; // x21
  struct BattleCommandData_o *v28; // x10
  int32_t v29; // w21
  int reCharge; // t1
  UIWidget_o *v31; // x22
  int v32; // s0
  UnityEngine_Behaviour_o *v36; // x0
  UnityEngine_Behaviour_o *v37; // x0
  UILabel_o *v38; // x22
  System_String_o *v39; // x0
  UILabel_o *v40; // x21
  System_String_o *v41; // x0
  UnityEngine_Component_o *v42; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v49; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_40F69A8 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, isFirst);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_2381, v11);
    byte_40F69A8 = 1;
  }
  if ( this->fields.isInBattle )
  {
    v49.fields.r = 0.0;
    v49.fields.g = 0.0;
    v49.fields.b = 0.0;
    v49.fields.a = 0.0;
    v46.fields.r = r;
    v46.fields.g = g;
    v46.fields.b = b;
    v46.fields.a = a;
    if ( UnityEngine_Color__op_Equality(v46, v49, 0LL) )
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
        v14 = (UnityEngine_Behaviour_o *)this->fields.chargeTurnLabel;
        if ( !v14 )
          goto LABEL_61;
        UnityEngine_Behaviour__set_enabled(v14, 0, 0LL);
        v15 = (UnityEngine_Behaviour_o *)this->fields.remainingTurnLabel;
        if ( !v15 )
          goto LABEL_61;
        UnityEngine_Behaviour__set_enabled(v15, 0, 0LL);
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
          v17 = (UIWidget_o *)this->fields.codeTexture;
          if ( !v17 )
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
          v17 = (UIWidget_o *)this->fields.codeSprite;
          if ( !v17 )
            goto LABEL_61;
        }
        v48.fields.r = r;
        v48.fields.g = g;
        v48.fields.b = b;
        v48.fields.a = a;
        UIWidget__set_color(v17, v48, 0LL);
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
              PassiveList = BattleBuffData__getPassiveList(buffData, 1, 0LL);
              if ( !PassiveList )
                goto LABEL_61;
              max_length = PassiveList->max_length;
              if ( max_length >= 1 )
              {
                v26 = 0;
                while ( 1 )
                {
                  if ( v26 >= max_length )
                  {
                    sub_B17100(PassiveList, v23, v24);
                    sub_B170A0();
                  }
                  v27 = PassiveList->m_Items[v26];
                  if ( !v27 )
                    goto LABEL_61;
                  v28 = this->fields.data;
                  if ( !v28 )
                    goto LABEL_61;
                  if ( v27->fields.userCommandCodeId == v28->fields.userCommandCodeId )
                    break;
                  if ( (int)++v26 >= max_length )
                    goto LABEL_54;
                }
                reCharge = v27->fields.reCharge;
                v29 = (_DWORD)v27 + 112;
                if ( reCharge >= 1 )
                {
                  if ( this->fields.isCodeTextureView )
                    v31 = (UIWidget_o *)this->fields.codeTexture;
                  else
                    v31 = (UIWidget_o *)this->fields.codeSprite;
                  *(UnityEngine_Color_o *)&v32 = UnityEngine_Color__get_gray(0LL);
                  if ( !v31 )
                    goto LABEL_61;
                  UIWidget__set_color(v31, *(UnityEngine_Color_o *)&v32, 0LL);
                  v36 = (UnityEngine_Behaviour_o *)this->fields.chargeTurnLabel;
                  if ( !v36 )
                    goto LABEL_61;
                  UnityEngine_Behaviour__set_enabled(v36, 1, 0LL);
                  v37 = (UnityEngine_Behaviour_o *)this->fields.remainingTurnLabel;
                  if ( !v37 )
                    goto LABEL_61;
                  UnityEngine_Behaviour__set_enabled(v37, 1, 0LL);
                  v38 = this->fields.chargeTurnLabel;
                  v39 = System_Int32__ToString(v29, 0LL);
                  if ( !v38 )
                    goto LABEL_61;
                  UILabel__set_text(v38, v39, 0LL);
                  v40 = this->fields.remainingTurnLabel;
                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_2381, 0LL);
                  if ( !v40 )
                    goto LABEL_61;
                  UILabel__set_text(v40, v41, 0LL);
                }
              }
LABEL_54:
              if ( isFirst )
              {
                v42 = (UnityEngine_Component_o *)this->fields.chargeTurnLabel;
                if ( v42 )
                {
                  gameObject = UnityEngine_Component__get_gameObject(v42, 0LL);
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
                    v44 = (UnityEngine_Component_o *)this->fields.remainingTurnLabel;
                    if ( v44 )
                    {
                      v45 = UnityEngine_Component__get_gameObject(v44, 0LL);
                      if ( v45 )
                      {
                        UnityEngine_GameObject__SetActive(v45, 0, 0LL);
                        return;
                      }
                    }
                  }
                }
LABEL_61:
                sub_B170D4();
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
  UnityEngine_Behaviour_o *v11; // x0
  UnityEngine_Behaviour_o *v12; // x0
  struct UITexture_o **p_codeTexture; // x19
  UITexture_o *v14; // x21
  UnityEngine_Object_o *Manager__loadCommandCodeTexture; // x20
  UnityEngine_Behaviour_o *codeTexture; // x0
  UnityEngine_Behaviour_o *codeSprite; // x0
  UnityEngine_Behaviour_o *v18; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  __int64 v22; // x20
  __int64 v23; // x21
  int32_t v24; // w20
  UISprite_o *v25; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_40F69B0 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, userCommandCodeId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40F69B0 = 1;
  }
  if ( userCommandCodeId < 1 )
  {
    BattleCommandComponent__SwitchChangeObjPos(this, 0, method);
    codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
    if ( codeTexture )
    {
      UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
      codeSprite = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
      if ( codeSprite )
      {
        UnityEngine_Behaviour__set_enabled(codeSprite, 0, 0LL);
        return;
      }
    }
    goto LABEL_32;
  }
  BattleCommandComponent__SwitchChangeObjPos(this, 1, method);
  v11 = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
  if ( !v11 )
    goto LABEL_32;
  if ( this->fields.isCodeTextureView )
  {
    UnityEngine_Behaviour__set_enabled(v11, 1, 0LL);
    v12 = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
    if ( v12 )
    {
      p_codeTexture = &this->fields.codeTexture;
      UnityEngine_Behaviour__set_enabled(v12, 0, 0LL);
      v14 = *p_codeTexture;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadCommandCodeTexture = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCodeTexture(
                                                                  v14,
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
        sub_B16F98(p_codeTexture, Manager__loadCommandCodeTexture);
      }
      return;
    }
LABEL_32:
    sub_B170D4();
  }
  UnityEngine_Behaviour__set_enabled(v11, 0, 0LL);
  v18 = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
  if ( !v18 )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled(v18, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_32;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             userCommandCodeId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  if ( Entity )
  {
    v23 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v22 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v26.fields.currentCryptoKey = v23;
    *(_QWORD *)&v26.fields.fakeValue = v22;
    v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v26, 0LL);
  }
  else
  {
    v24 = -1;
  }
  v25 = this->fields.codeSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommandCodeMiniImage(v25, v24, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetCommandCodeView_18696312(
        BattleCommandComponent_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Behaviour_o *v7; // x0
  UnityEngine_Behaviour_o *v8; // x0
  struct UITexture_o **p_codeTexture; // x20
  UITexture_o *v10; // x21
  UnityEngine_Object_o *Manager__loadCommandCodeTexture_23821516; // x19
  UnityEngine_Behaviour_o *codeTexture; // x0
  UnityEngine_Behaviour_o *codeSprite; // x0
  UnityEngine_Behaviour_o *v14; // x0
  UISprite_o *v15; // x20

  if ( (byte_40F69B1 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v6);
    byte_40F69B1 = 1;
  }
  if ( (commandCodeId & 0x80000000) != 0 )
  {
    BattleCommandComponent__SwitchChangeObjPos(this, 0, method);
    codeTexture = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
    if ( codeTexture )
    {
      UnityEngine_Behaviour__set_enabled(codeTexture, 0, 0LL);
      codeSprite = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
      if ( codeSprite )
      {
LABEL_24:
        UnityEngine_Behaviour__set_enabled(codeSprite, 0, 0LL);
        return;
      }
    }
LABEL_25:
    sub_B170D4();
  }
  BattleCommandComponent__SwitchChangeObjPos(this, 1, method);
  v7 = (UnityEngine_Behaviour_o *)this->fields.codeTexture;
  if ( !v7 )
    goto LABEL_25;
  if ( this->fields.isCodeTextureView )
  {
    UnityEngine_Behaviour__set_enabled(v7, 1, 0LL);
    v8 = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
    if ( v8 )
    {
      p_codeTexture = &this->fields.codeTexture;
      UnityEngine_Behaviour__set_enabled(v8, 0, 0LL);
      v10 = *p_codeTexture;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadCommandCodeTexture_23821516 = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCodeTexture_23821516(
                                                                           v10,
                                                                           commandCodeId,
                                                                           0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(Manager__loadCommandCodeTexture_23821516, 0LL, 0LL) )
      {
        *p_codeTexture = (struct UITexture_o *)Manager__loadCommandCodeTexture_23821516;
        sub_B16F98(p_codeTexture, Manager__loadCommandCodeTexture_23821516);
        return;
      }
      codeSprite = (UnityEngine_Behaviour_o *)*p_codeTexture;
      if ( *p_codeTexture )
        goto LABEL_24;
    }
    goto LABEL_25;
  }
  UnityEngine_Behaviour__set_enabled(v7, 0, 0LL);
  v14 = (UnityEngine_Behaviour_o *)this->fields.codeSprite;
  if ( !v14 )
    goto LABEL_25;
  UnityEngine_Behaviour__set_enabled(v14, 1, 0LL);
  v15 = this->fields.codeSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetCommandCodeMiniImage(v15, commandCodeId, 0LL);
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
  UnityEngine_GameObject_o *v10; // x0

  v6 = this;
  if ( (byte_40F69CC & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&effectType);
    byte_40F69CC = 1;
  }
  effectobj = v6->fields.effectobj;
  if ( !effectobj )
    goto LABEL_14;
  if ( effectobj->max_length <= effectType )
  {
LABEL_15:
    sub_B17100(this, *(_QWORD *)&effectType, active);
    sub_B170A0();
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
      v10 = v9->m_Items[effectType];
      if ( v10 )
      {
        UnityEngine_GameObject__SetActive(v10, active, 0LL);
        return;
      }
LABEL_14:
      sub_B170D4();
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

  if ( (byte_40F69BE & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_19294, v4);
    byte_40F69BE = 1;
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
    AtlasManager__SetEventSprite(v6, (System_String_o *)StringLiteral_19294, 0LL);
  }
}


void __fastcall BattleCommandComponent__SetDonotSleepSprite(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *donotsleepSprite; // x20
  UISprite_o *v6; // x19

  if ( (byte_40F69BD & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_19293, v4);
    byte_40F69BD = 1;
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
    AtlasManager__SetEventSprite(v6, (System_String_o *)StringLiteral_19293, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *remainingTurnLabel; // x0
  UnityEngine_GameObject_o *v8; // x0

  chargeTurnLabel = (UnityEngine_Component_o *)this->fields.chargeTurnLabel;
  if ( !chargeTurnLabel
    || (gameObject = UnityEngine_Component__get_gameObject(chargeTurnLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, active, 0LL),
        (remainingTurnLabel = (UnityEngine_Component_o *)this->fields.remainingTurnLabel) == 0LL)
    || (v8 = UnityEngine_Component__get_gameObject(remainingTurnLabel, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v8, active, 0LL);
}


void __fastcall BattleCommandComponent__SetLabelAssistActive(
        BattleCommandComponent_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Component_o *assistChargeTurnLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *assistRemainingTurnLabel; // x0
  UnityEngine_GameObject_o *v8; // x0

  assistChargeTurnLabel = (UnityEngine_Component_o *)this->fields.assistChargeTurnLabel;
  if ( !assistChargeTurnLabel
    || (gameObject = UnityEngine_Component__get_gameObject(assistChargeTurnLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, active, 0LL),
        (assistRemainingTurnLabel = (UnityEngine_Component_o *)this->fields.assistRemainingTurnLabel) == 0LL)
    || (v8 = UnityEngine_Component__get_gameObject(assistRemainingTurnLabel, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v8, active, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SetLockInfo(
        BattleCommandComponent_o *this,
        bool isLock,
        const MethodInfo *method)
{
  UnityEngine_Object_o *LockInfo; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_40F69B6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isLock);
    byte_40F69B6 = 1;
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
      sub_B170D4();
    UnityEngine_GameObject__SetActive(v6, isLock, 0LL);
  }
}


void __fastcall BattleCommandComponent__SetNobleGaugeEffect(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *effect,
        const MethodInfo *method)
{
  this->fields.nobleGaugeEffect = effect;
  sub_B16F98(&this->fields.nobleGaugeEffect, effect);
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
  UISprite_o *v11; // x23
  bool v12; // w0
  UnityEngine_Component_o *v13; // x8
  bool v14; // w19
  UnityEngine_GameObject_o *gameObject; // x0
  bool v16; // w1

  if ( (byte_40F69B8 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&powerUpValue);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40F69B8 = 1;
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(powerUpCardIcon, 0LL, 0LL) )
  {
    v11 = this->fields.powerUpCardIcon;
    if ( powerUpValue <= 0 )
    {
      if ( v11 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.powerUpCardIcon, 0LL);
        if ( gameObject )
        {
          v16 = 0;
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
      v12 = AtlasManager__SetCommandCardIconImage(v11, powerUpValue, iconType, isBright, 0LL);
      v13 = (UnityEngine_Component_o *)this->fields.powerUpCardIcon;
      if ( v13 )
      {
        v14 = v12;
        gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
        if ( gameObject )
        {
          v16 = v14;
LABEL_17:
          UnityEngine_GameObject__SetActive(gameObject, v16, 0LL);
          return;
        }
      }
    }
    sub_B170D4();
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
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v10; // x20
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F69B7 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&powerUpValue);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_695, v6);
    byte_40F69B7 = 1;
  }
  powerUpCardValue = (UnityEngine_Object_o *)this->fields.powerUpCardValue;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(powerUpCardValue, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)this->fields.powerUpCardValue;
    if ( !v8 )
      goto LABEL_14;
    gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
    if ( !gameObject )
      goto LABEL_14;
    if ( powerUpValue <= 0 )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      return;
    }
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v10 = this->fields.powerUpCardValue;
    v13 = powerUpValue;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
    v12 = System_String__Format((System_String_o *)StringLiteral_695, v11, 0LL);
    if ( !v10 )
LABEL_14:
      sub_B170D4();
    UILabel__set_text(v10, v12, 0LL);
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
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v31; // x25
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  int32_t Index; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x8
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v39; // x21
  BattleCommandComponent_CardBuffData_o *v40; // x8
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v41; // x0
  int32_t v42; // w24
  BattleCommandComponent_CardBuffData_o *v43; // x23
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v44; // x20
  BattleCommandComponent___c_c *v45; // x0
  struct BattleCommandComponent___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__221_1; // x21
  Il2CppObject *v48; // x22
  struct BattleCommandComponent___c_StaticFields *v49; // x0
  const MethodInfo *v50; // x2
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v51; // x8

  if ( (byte_40F69C1 & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandComponent_CardBuffData_TypeInfo, *(_QWORD *)&buffType);
    sub_B16FFC(&Method_System_Comparison_BattleCommandComponent_CardBuffData___ctor__, v11);
    sub_B16FFC(&System_Comparison_BattleCommandComponent_CardBuffData__TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__RemoveAt__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Sort__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__, v18);
    sub_B16FFC(&Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__, v19);
    sub_B16FFC(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo, v20);
    sub_B16FFC(&Method_BattleCommandComponent___c__SetSpecialCommandCardBuffData_b__221_1__, v21);
    sub_B16FFC(&Method_BattleCommandComponent___c__DisplayClass221_0__SetSpecialCommandCardBuffData_b__0__, v22);
    sub_B16FFC(&BattleCommandComponent___c__DisplayClass221_0_TypeInfo, v23);
    sub_B16FFC(&BattleCommandComponent___c_TypeInfo, v24);
    byte_40F69C1 = 1;
  }
  v25 = (BattleCommandComponent___c__DisplayClass221_0_o *)sub_B170CC(
                                                             BattleCommandComponent___c__DisplayClass221_0_TypeInfo,
                                                             *(_QWORD *)&buffType,
                                                             active,
                                                             *(_QWORD *)&turn,
                                                             *(_QWORD *)&addOrder);
  BattleCommandComponent___c__DisplayClass221_0___ctor(v25, 0LL);
  if ( !v25 )
    goto LABEL_32;
  v25->fields.buffType = buffType;
  specialCardBuffList = this->fields.specialCardBuffList;
  v31 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo,
                                                                   v26,
                                                                   v27,
                                                                   v28,
                                                                   v29);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v31,
    (Il2CppObject *)v25,
    Method_BattleCommandComponent___c__DisplayClass221_0__SetSpecialCommandCardBuffData_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__);
  if ( !specialCardBuffList )
    goto LABEL_32;
  Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
            (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)specialCardBuffList,
            (System_Predicate_T__o *)v31,
            (const MethodInfo_2F26784 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  if ( active )
  {
    v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.specialCardBuffList;
    if ( (Index & 0x80000000) == 0 )
    {
      if ( v37 )
      {
        if ( v37->fields._size <= (unsigned int)Index )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v38 = v37->fields._items->m_Items[Index];
        if ( v38 )
        {
          v38->fields.missionConditionDetailId = turn;
          v39 = this->fields.specialCardBuffList;
          if ( v39 )
          {
            if ( v39->fields._size <= (unsigned int)Index )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v40 = v39->fields._items->m_Items[Index];
            if ( v40 )
            {
              v40->fields.addOrder = addOrder;
              goto LABEL_21;
            }
          }
        }
      }
LABEL_32:
      sub_B170D4();
    }
    v42 = v25->fields.buffType;
    v43 = (BattleCommandComponent_CardBuffData_o *)sub_B170CC(
                                                     BattleCommandComponent_CardBuffData_TypeInfo,
                                                     v32,
                                                     v33,
                                                     v34,
                                                     v35);
    BattleCommandComponent_CardBuffData___ctor(v43, v42, turn, addOrder, 0LL);
    if ( !v37 )
      goto LABEL_32;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v37,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Add__);
  }
  else if ( (Index & 0x80000000) == 0 )
  {
    v41 = this->fields.specialCardBuffList;
    if ( !v41 )
      goto LABEL_32;
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v41,
      Index,
      (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__RemoveAt__);
  }
LABEL_21:
  v44 = this->fields.specialCardBuffList;
  v45 = BattleCommandComponent___c_TypeInfo;
  if ( (BYTE3(BattleCommandComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
    v45 = BattleCommandComponent___c_TypeInfo;
  }
  static_fields = v45->static_fields;
  _9__221_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__221_1;
  if ( !_9__221_1 )
  {
    if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    }
    v48 = (Il2CppObject *)static_fields->__9;
    _9__221_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_BattleCommandComponent_CardBuffData__TypeInfo,
                                                                            v32,
                                                                            v33,
                                                                            v34,
                                                                            v35);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__221_1,
      v48,
      Method_BattleCommandComponent___c__SetSpecialCommandCardBuffData_b__221_1__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_BattleCommandComponent_CardBuffData___ctor__);
    v49 = BattleCommandComponent___c_TypeInfo->static_fields;
    v49->__9__221_1 = (struct System_Comparison_BattleCommandComponent_CardBuffData__o *)_9__221_1;
    sub_B16F98(&v49->__9__221_1, _9__221_1);
  }
  if ( !v44 )
    goto LABEL_32;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v44,
    (System_Comparison_T__o *)_9__221_1,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__Sort__);
  v51 = this->fields.specialCardBuffList;
  if ( !v51 )
    goto LABEL_32;
  BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, v51->fields._size > 0, v50);
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
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v14; // x20
  System_String_o *v15; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F69B5 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, active);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_2421, v9);
    byte_40F69B5 = 1;
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
      v12 = (UnityEngine_Component_o *)this->fields.nowTreasureDeviceTypeImage;
      if ( !v12 )
        goto LABEL_20;
      gameObject = UnityEngine_Component__get_gameObject(v12, 0LL);
      if ( !gameObject )
        goto LABEL_20;
      UnityEngine_GameObject__SetActive(gameObject, active, 0LL);
      if ( !active )
        return;
      v14 = this->fields.restTreasureDeviceChangeTurnLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_2421, 0LL);
      v18 = turn;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
      v17 = System_String__Format(v15, v16, 0LL);
      if ( !v14 )
LABEL_20:
        sub_B170D4();
      UILabel__set_text(v14, v17, 0LL);
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
  struct UISprite_o *v6; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *v8; // x19

  if ( (byte_40F69BA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F69BA = 1;
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
    if ( UnityEngine_Object__op_Inequality(nowTreasureDeviceTypeImage, 0LL, 0LL) )
    {
      v6 = this->fields.nowTreasureDeviceTypeImage;
      if ( !v6 )
        sub_B170D4();
      mAtlas = v6->fields.mAtlas;
      *p_defaultTdTypeImageAtlas = mAtlas;
      sub_B16F98(&this->fields.defaultTdTypeImageAtlas, mAtlas);
    }
  }
  v8 = (UnityEngine_Object_o *)*p_defaultTdTypeImageAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
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
  UnityEngine_GameObject_o *criticalObject; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  struct DrumRollLabel_o *v14; // x21
  DrumRollLabel_o *v15; // x0
  int32_t v16; // w1
  DrumRollLabel_CompleteEventHandler_o *v17; // x3
  DrumRollLabel_CompleteEventHandler_o *v18; // x22

  if ( (byte_40F6999 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleCommandComponent_compCriticallabel__, *(_QWORD *)&count);
    sub_B16FFC(&DrumRollLabel_CompleteEventHandler_TypeInfo, v7);
    byte_40F6999 = 1;
  }
  if ( isInitZero )
  {
    criticallabel = this->fields.criticallabel;
    if ( !criticallabel )
      goto LABEL_12;
    DrumRollLabel__setParam(criticallabel, 0, 0LL);
  }
  criticalObject = this->fields.criticalObject;
  if ( !criticalObject
    || (UnityEngine_GameObject__SetActive(criticalObject, 1, 0LL), (v14 = this->fields.criticallabel) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  if ( v14->fields.nowvalue <= count )
  {
    v18 = (DrumRollLabel_CompleteEventHandler_o *)sub_B170CC(
                                                    DrumRollLabel_CompleteEventHandler_TypeInfo,
                                                    v10,
                                                    v11,
                                                    v12,
                                                    v13);
    DrumRollLabel_CompleteEventHandler___ctor(
      v18,
      (Il2CppObject *)this,
      Method_BattleCommandComponent_compCriticallabel__,
      0LL);
    v15 = v14;
    v16 = count;
    v17 = v18;
  }
  else
  {
    v15 = this->fields.criticallabel;
    v16 = count;
    v17 = 0LL;
  }
  DrumRollLabel__changeParam(v15, v16, 1, v17, 0.0, 0LL);
}


void __fastcall BattleCommandComponent__SetUnusableShortageStarSprite(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *unusableShortageStarSprite; // x20
  UISprite_o *v6; // x19

  if ( (byte_40F69BC & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_19304, v4);
    byte_40F69BC = 1;
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
    AtlasManager__SetEventSprite(v6, (System_String_o *)StringLiteral_19304, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__SwitchChangeObjPos(
        BattleCommandComponent_o *this,
        bool isUp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *codeObject; // x21
  _BOOL8 enabled; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct UnityEngine_Transform_array *stateCodePoints; // x8
  __int64 v10; // x9
  struct UnityEngine_Transform_array *stateArrowPoints; // x10
  UnityEngine_Transform_o *v12; // x0
  UnityEngine_Transform_o *v13; // x21
  int v14; // s0
  __int64 v17; // x8
  UnityEngine_Behaviour_o *friendIcon; // x0
  struct UnityEngine_Transform_array *v19; // x8
  UnityEngine_Transform_o *v20; // x0
  UnityEngine_Transform_o *v21; // x20
  int v22; // s0
  UnityEngine_Behaviour_o *v25; // x0
  struct UnityEngine_Transform_array *v26; // x9
  struct UnityEngine_GameObject_array *addObjectList; // x10
  UnityEngine_Transform_o *v28; // x20
  UnityEngine_Object_o *v29; // x21
  struct UnityEngine_GameObject_array *v30; // x8
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v33; // x21
  int v34; // s0
  struct UnityEngine_GameObject_array *v37; // x8
  UnityEngine_Object_o *v38; // x21
  struct UnityEngine_GameObject_array *v39; // x8
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_Transform_o *v41; // x0
  UnityEngine_Transform_o *v42; // x19
  int v43; // s0

  if ( (byte_40F69B3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isUp);
    byte_40F69B3 = 1;
  }
  codeObject = (UnityEngine_Object_o *)this->fields.codeObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  enabled = UnityEngine_Object__op_Equality(codeObject, 0LL, 0LL);
  if ( !enabled )
  {
    stateCodePoints = this->fields.stateCodePoints;
    if ( stateCodePoints )
    {
      v10 = *(_QWORD *)&stateCodePoints->max_length;
      if ( v10 )
      {
        stateArrowPoints = this->fields.stateArrowPoints;
        if ( stateArrowPoints )
        {
          if ( *(_QWORD *)&stateArrowPoints->max_length )
          {
            if ( !(_DWORD)v10 )
              goto LABEL_52;
            v12 = stateCodePoints->m_Items[0];
            if ( !v12 )
              goto LABEL_51;
            v13 = this->fields.codeObject;
            *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_position(v12, 0LL);
            if ( !v13 )
              goto LABEL_51;
            UnityEngine_Transform__set_position(v13, *(UnityEngine_Vector3_o *)&v14, 0LL);
            v17 = 0LL;
            if ( isUp )
            {
              friendIcon = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
              if ( !friendIcon )
                goto LABEL_51;
              enabled = UnityEngine_Behaviour__get_enabled(friendIcon, 0LL);
              if ( enabled )
              {
                v19 = this->fields.stateCodePoints;
                if ( !v19 )
                  goto LABEL_51;
                if ( v19->max_length <= 1 )
                  goto LABEL_52;
                v20 = v19->m_Items[1];
                if ( !v20 )
                  goto LABEL_51;
                v21 = this->fields.codeObject;
                *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_position(v20, 0LL);
                if ( !v21 )
                  goto LABEL_51;
                UnityEngine_Transform__set_position(v21, *(UnityEngine_Vector3_o *)&v22, 0LL);
                v17 = 2LL;
              }
              else
              {
                v25 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
                if ( !v25 )
                  goto LABEL_51;
                enabled = UnityEngine_Behaviour__get_enabled(v25, 0LL);
                v17 = !enabled;
              }
            }
            v26 = this->fields.stateArrowPoints;
            if ( !v26 )
              goto LABEL_51;
            if ( (unsigned int)v17 >= v26->max_length )
              goto LABEL_52;
            addObjectList = this->fields.addObjectList;
            if ( !addObjectList )
              goto LABEL_51;
            if ( addObjectList->max_length <= 1 )
              goto LABEL_52;
            v28 = v26->m_Items[v17];
            v29 = (UnityEngine_Object_o *)addObjectList->m_Items[1];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            enabled = UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
            if ( enabled )
            {
              v30 = this->fields.addObjectList;
              if ( !v30 )
                goto LABEL_51;
              if ( v30->max_length <= 1 )
                goto LABEL_52;
              v31 = v30->m_Items[1];
              if ( !v31 )
                goto LABEL_51;
              transform = UnityEngine_GameObject__get_transform(v31, 0LL);
              if ( !v28 )
                goto LABEL_51;
              v33 = transform;
              *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Transform__get_position(v28, 0LL);
              if ( !v33 )
                goto LABEL_51;
              UnityEngine_Transform__set_position(v33, *(UnityEngine_Vector3_o *)&v34, 0LL);
            }
            v37 = this->fields.addObjectList;
            if ( !v37 )
              goto LABEL_51;
            if ( !v37->max_length )
            {
LABEL_52:
              sub_B17100(enabled, v7, v8);
              sub_B170A0();
            }
            v38 = (UnityEngine_Object_o *)v37->m_Items[0];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            enabled = UnityEngine_Object__op_Inequality(v38, 0LL, 0LL);
            if ( enabled )
            {
              v39 = this->fields.addObjectList;
              if ( !v39 )
                goto LABEL_51;
              if ( v39->max_length )
              {
                v40 = v39->m_Items[0];
                if ( v40 )
                {
                  v41 = UnityEngine_GameObject__get_transform(v40, 0LL);
                  if ( v28 )
                  {
                    v42 = v41;
                    *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Transform__get_position(v28, 0LL);
                    if ( v42 )
                    {
                      UnityEngine_Transform__set_position(v42, *(UnityEngine_Vector3_o *)&v43, 0LL);
                      return;
                    }
                  }
                }
LABEL_51:
                sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  void *MasterData_WarQuestSelectionMaster; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x21
  __int64 v22; // x24
  BattleBuffData_BuffData_o *v23; // x22
  System_String_o *v24; // x22
  struct System_Collections_Generic_Dictionary_string__GameObject__o *cardEffectDict; // x0
  System_String_o *v26; // x22
  System_String_o *v27; // x23
  UnityEngine_Object_o *Manager__loadBattleCommonEffect; // x22
  UnityEngine_Transform_o *objectRoot; // x23
  UnityEngine_GameObject_o *v30; // x0
  System_Xml_Schema_XmlSchemaObject_o *v31; // x22
  CardEffectComponent_o *Component_srcLineSprite; // x23
  struct UISprite_o *text; // x8
  struct UISprite_o *bg; // x9
  struct System_Collections_Generic_Dictionary_string__GameObject__o *v35; // x0
  struct BattleCommandData_o *v36; // x8
  struct BattleCommandData_o *v37; // x8
  System_Xml_XmlQualifiedName_o *key; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *path; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F69C8 & 1) == 0 )
  {
    sub_B16FFC(&BattleEffectUtility_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EffectMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__GameObject__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CardEffectComponent___, v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40F69C8 = 1;
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
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_48;
          MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EffectMaster___);
          max_length = v15->max_length;
          if ( max_length >= 1 )
          {
            v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
            v22 = 0LL;
            while ( 1 )
            {
              if ( (unsigned int)v22 >= max_length )
              {
                sub_B17100(MasterData_WarQuestSelectionMaster, v18, v19);
                sub_B170A0();
              }
              v23 = v15->m_Items[v22];
              if ( !v23 )
                break;
              if ( v23->fields.cardEffectId >= 1 )
              {
                if ( BattleBuffData_BuffData__isEnableCommandCardBuff(v15->m_Items[v22], this->fields.data, 0LL) )
                  goto LABEL_14;
                if ( BattleBuffData_BuffData__isCommandCodeBuff(v23, 0LL) )
                {
                  v36 = this->fields.data;
                  if ( !v36 )
                    break;
                  if ( v23->fields.userCommandCodeId == v36->fields.userCommandCodeId )
                    goto LABEL_14;
                }
                MasterData_WarQuestSelectionMaster = (void *)BattleBuffData_BuffData__IsCommandAssistBuff(v23, 0LL);
                if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
                {
                  v37 = this->fields.data;
                  if ( !v37 )
                    break;
                  if ( v23->fields.commandAssistId == v37->fields.commandAssistId
                    && v23->fields.cardIndex == v37->fields.servantCardIdsIndex )
                  {
LABEL_14:
                    if ( !v21 )
                      break;
                    MasterData_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                           v21,
                                                           v23->fields.cardEffectId,
                                                           (const MethodInfo_266F388 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
                    if ( MasterData_WarQuestSelectionMaster )
                    {
                      v24 = (System_String_o *)*((_QWORD *)MasterData_WarQuestSelectionMaster + 5);
                      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
                      }
                      BattleEffectUtility__GetBattleCommonEffectPathAndName(v24, &path, (System_String_o **)&key, 0LL);
                      cardEffectDict = this->fields.cardEffectDict;
                      if ( !cardEffectDict )
                        break;
                      MasterData_WarQuestSelectionMaster = (void *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                                     (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)cardEffectDict,
                                                                     key,
                                                                     (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__GameObject__ContainsKey__);
                      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) == 0 )
                      {
                        v27 = (System_String_o *)key;
                        v26 = path;
                        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                        }
                        Manager__loadBattleCommonEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                                    v26,
                                                                                    v27,
                                                                                    0LL);
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        MasterData_WarQuestSelectionMaster = (void *)UnityEngine_Object__op_Equality(
                                                                       Manager__loadBattleCommonEffect,
                                                                       0LL,
                                                                       0LL);
                        if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) == 0 )
                        {
                          objectRoot = this->fields.objectRoot;
                          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          }
                          v30 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                              (UILabel_o *)Manager__loadBattleCommonEffect,
                                                              objectRoot,
                                                              (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
                          if ( !v30 )
                            break;
                          v31 = (System_Xml_Schema_XmlSchemaObject_o *)v30;
                          Component_srcLineSprite = (CardEffectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                               v30,
                                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CardEffectComponent___);
                          if ( UnityEngine_Object__op_Inequality(
                                 (UnityEngine_Object_o *)Component_srcLineSprite,
                                 0LL,
                                 0LL) )
                          {
                            text = this->fields.text;
                            if ( !text )
                              break;
                            bg = this->fields.bg;
                            if ( !bg || !Component_srcLineSprite )
                              break;
                            CardEffectComponent__SetCardEffectDepth(
                              Component_srcLineSprite,
                              text->fields.mDepth,
                              bg->fields.mDepth,
                              0LL);
                          }
                          v35 = this->fields.cardEffectDict;
                          if ( !v35 )
                            break;
                          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v35,
                            key,
                            v31,
                            (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__GameObject__Add__);
                        }
                      }
                    }
                  }
                }
              }
              max_length = v15->max_length;
              if ( (int)++v22 >= max_length )
                return;
            }
LABEL_48:
            sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x20
  BattleCommandComponent___c_c *v19; // x0
  struct BattleCommandComponent___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__223_0; // x21
  Il2CppObject *v22; // x22
  struct BattleCommandComponent___c_StaticFields *v23; // x0
  int32_t Index; // w0
  unsigned int v25; // w20
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  UnityEngine_Object_o *specialCardBuffTurn; // x21
  const MethodInfo *v28; // x1
  BattleCommandData_o *data; // x0
  UISprite_o *v30; // x21
  Il2CppObject *v31; // x0
  System_String_o *v32; // x22
  UISprite_o *v33; // x0
  UILabel_o *v34; // x21
  System_String_o *v35; // x0
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v36; // x22
  System_String_o *v37; // x19
  BattleCommandComponent_CardBuffData_o *v38; // x8
  Il2CppObject *v39; // x0
  System_String_o *v40; // x0
  int32_t restTurn; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F69C2 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&int_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__, v11);
    sub_B16FFC(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo, v12);
    sub_B16FFC(&Method_BattleCommandComponent___c__UpdateCommandCardTypeChange_b__223_0__, v13);
    sub_B16FFC(&BattleCommandComponent___c_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_4585, v15);
    sub_B16FFC(&StringLiteral_19245, v16);
    sub_B16FFC(&StringLiteral_1, v17);
    byte_40F69C2 = 1;
  }
  specialCardBuffList = this->fields.specialCardBuffList;
  v19 = BattleCommandComponent___c_TypeInfo;
  if ( (BYTE3(BattleCommandComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
    v19 = BattleCommandComponent___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__223_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__223_0;
  if ( !_9__223_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__223_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo,
                                                                           method,
                                                                           v2,
                                                                           v3,
                                                                           v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__223_0,
      v22,
      Method_BattleCommandComponent___c__UpdateCommandCardTypeChange_b__223_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__);
    v23 = BattleCommandComponent___c_TypeInfo->static_fields;
    v23->__9__223_0 = (struct System_Predicate_BattleCommandComponent_CardBuffData__o *)_9__223_0;
    sub_B16F98(&v23->__9__223_0, _9__223_0);
  }
  if ( !specialCardBuffList )
    goto LABEL_38;
  Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
            (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)specialCardBuffList,
            (System_Predicate_T__o *)_9__223_0,
            (const MethodInfo_2F26784 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
  if ( Index >= 0 )
  {
    v25 = Index;
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
        v30 = this->fields.specialCardBuffIcon;
        type = BattleCommandData__get_type(data, v28);
        v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &type);
        v32 = System_String__Format((System_String_o *)StringLiteral_19245, v31, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        if ( !AtlasManager__SetEventSprite(v30, v32, 0LL) )
        {
          v33 = this->fields.specialCardBuffIcon;
          if ( !v33 )
            goto LABEL_38;
          UISprite__set_spriteName(v33, (System_String_o *)StringLiteral_1, 0LL);
        }
        v34 = this->fields.specialCardBuffTurn;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v35 = LocalizationManager__Get((System_String_o *)StringLiteral_4585, 0LL);
        v36 = this->fields.specialCardBuffList;
        if ( v36 )
        {
          v37 = v35;
          if ( v36->fields._size <= v25 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v38 = v36->fields._items->m_Items[v25];
          if ( v38 )
          {
            restTurn = v38->fields.restTurn;
            v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &restTurn);
            v40 = System_String__Format(v37, v39, 0LL);
            if ( v34 )
            {
              UILabel__set_text(v34, v40, 0LL);
              return;
            }
          }
        }
LABEL_38:
        sub_B170D4();
      }
    }
  }
}


void __fastcall BattleCommandComponent__UpdateFixedCommandCard(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  BattleCommandComponent___c_c *v17; // x0
  struct BattleCommandComponent___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__207_0; // x21
  Il2CppObject *v20; // x22
  struct BattleCommandComponent___c_StaticFields *v21; // x0
  int32_t Index; // w0
  unsigned int v23; // w20
  UnityEngine_Object_o *specialCardBuffIcon; // x21
  UnityEngine_Object_o *specialCardBuffTurn; // x21
  UISprite_o *v26; // x0
  UISprite_o *v27; // x0
  UILabel_o *v28; // x21
  System_String_o *v29; // x0
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v30; // x22
  System_String_o *v31; // x19
  BattleCommandComponent_CardBuffData_o *v32; // x8
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  int32_t restTurn; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F69B4 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Item__, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__, v10);
    sub_B16FFC(&System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo, v11);
    sub_B16FFC(&Method_BattleCommandComponent___c__UpdateFixedCommandCard_b__207_0__, v12);
    sub_B16FFC(&BattleCommandComponent___c_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_4585, v14);
    sub_B16FFC(&StringLiteral_19205, v15);
    byte_40F69B4 = 1;
  }
  specialCardBuffList = this->fields.specialCardBuffList;
  v17 = BattleCommandComponent___c_TypeInfo;
  if ( (BYTE3(BattleCommandComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandComponent___c_TypeInfo);
    v17 = BattleCommandComponent___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__207_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__207_0;
  if ( !_9__207_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__207_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_BattleCommandComponent_CardBuffData__TypeInfo,
                                                                           method,
                                                                           v2,
                                                                           v3,
                                                                           v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__207_0,
      v20,
      Method_BattleCommandComponent___c__UpdateFixedCommandCard_b__207_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleCommandComponent_CardBuffData___ctor__);
    v21 = BattleCommandComponent___c_TypeInfo->static_fields;
    v21->__9__207_0 = (struct System_Predicate_BattleCommandComponent_CardBuffData__o *)_9__207_0;
    sub_B16F98(&v21->__9__207_0, _9__207_0);
  }
  if ( !specialCardBuffList )
    goto LABEL_33;
  Index = System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
            (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)specialCardBuffList,
            (System_Predicate_T__o *)_9__207_0,
            (const MethodInfo_2F26784 *)Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__FindIndex__);
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
        v26 = this->fields.specialCardBuffIcon;
        if ( v26 )
        {
          UISprite__set_atlas(v26, this->fields.commandAtlas, 0LL);
          v27 = this->fields.specialCardBuffIcon;
          if ( v27 )
          {
            UISprite__set_spriteName(v27, (System_String_o *)StringLiteral_19205, 0LL);
            v28 = this->fields.specialCardBuffTurn;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v29 = LocalizationManager__Get((System_String_o *)StringLiteral_4585, 0LL);
            v30 = this->fields.specialCardBuffList;
            if ( v30 )
            {
              v31 = v29;
              if ( v30->fields._size <= v23 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              v32 = v30->fields._items->m_Items[v23];
              if ( v32 )
              {
                restTurn = v32->fields.restTurn;
                v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &restTurn);
                v34 = System_String__Format(v31, v33, 0LL);
                if ( v28 )
                {
                  UILabel__set_text(v28, v34, 0LL);
                  return;
                }
              }
            }
          }
        }
LABEL_33:
        sub_B170D4();
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v7; // x2
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *specialCardBuffList; // x8
  UnityEngine_Object_o *specialCardBuffIcon; // x20
  const MethodInfo *v10; // x1
  System_Collections_IEnumerator_o *updated; // x0
  const MethodInfo *v12; // x1
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v13; // x8
  struct UISprite_o *v14; // x0
  float v15; // s0
  float cardBuffAlphaFor; // s1
  float v17; // s2
  float v18; // s0
  struct System_Collections_Generic_List_BattleCommandComponent_CardBuffData__o *v19; // x9
  int32_t v20; // w8
  struct UISprite_o *v21; // x0
  UnityEngine_Object_o *v22; // x20
  UnityEngine_Component_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0

  if ( (byte_40F69C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleCommandComponent_CardBuffData__get_Count__, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F69C4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  if ( UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL) )
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
    if ( !UnityEngine_Object__op_Equality(specialCardBuffIcon, 0LL, 0LL) && this->fields.isCardBuffAlphaAnim )
    {
      if ( !this->fields.isChangedBuffIcon )
      {
        updated = BattleCommandComponent__coroutineUpdateSpecialBuffIcon(this, v10);
        UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, updated, 0LL);
        BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(this, v12);
        this->fields.isChangedBuffIcon = 1;
      }
      v13 = this->fields.specialCardBuffList;
      if ( !v13 )
        goto LABEL_36;
      if ( v13->fields._size != 1 )
      {
        v14 = this->fields.specialCardBuffIcon;
        if ( !v14 )
          goto LABEL_36;
        v15 = ((float (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v14->klass->vtable._7_get_alpha.method)(
                v14,
                v14->klass->vtable._8_set_alpha.methodPtr);
        cardBuffAlphaFor = this->fields.cardBuffAlphaFor;
        v17 = this->fields.cardBuffAlphaAnimTime + deltaTime;
        v18 = v15 + (float)((float)(cardBuffAlphaFor - v15) * 0.5);
        this->fields.cardBuffAlphaAnimTime = v17;
        if ( v17 >= 3.0 )
        {
          cardBuffAlphaFor = 0.0;
          *(_QWORD *)&this->fields.cardBuffAlphaFor = 0LL;
        }
        if ( v18 <= 0.01 && cardBuffAlphaFor <= 0.0 )
        {
          v19 = this->fields.specialCardBuffList;
          v20 = this->fields.cardBuffListIndex + 1;
          *(_QWORD *)&this->fields.cardBuffAlphaFor = 1065353216LL;
          this->fields.cardBuffListIndex = v20;
          if ( !v19 )
            goto LABEL_36;
          if ( v19->fields._size <= v20 )
            this->fields.cardBuffListIndex = 0;
          this->fields.isChangedBuffIcon = 0;
        }
        v21 = this->fields.specialCardBuffIcon;
        if ( v21 )
        {
          ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v21->klass->vtable._8_set_alpha.method)(
            v21,
            v21->klass->vtable._9_CalculateFinalAlpha.methodPtr);
          return;
        }
LABEL_36:
        sub_B170D4();
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
    v22 = (UnityEngine_Object_o *)this->fields.specialCardBuffIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
    {
      v23 = (UnityEngine_Component_o *)this->fields.specialCardBuffIcon;
      if ( !v23 )
        goto LABEL_36;
      v24 = UnityEngine_Component__get_gameObject(v23, 0LL);
      if ( !v24 )
        goto LABEL_36;
      UnityEngine_GameObject__SetActive(v24, 0, 0LL);
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
  UIAtlas_o *v13; // x0
  UISpriteData_o *Sprite; // x0
  UISprite_o *v15; // x0
  UISprite_o *v16; // x0
  System_String_o *name; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F69BB & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&buffId);
    sub_B16FFC(&Method_DataManager_GetMaster_BuffMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_19209, v8);
    byte_40F69BB = 1;
  }
  name = 0LL;
  if ( !BattleCommandComponent__SetTreasureDeviceTypeImageDefaultAtlas(this, *(const MethodInfo **)&buffId) )
    goto LABEL_23;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BuffMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_25;
  if ( !BuffMaster__TryGetDisplayCardBottomImageName(
          Master_WarQuestSelectionMaster,
          &name,
          buffId,
          (System_String_o *)StringLiteral_19209,
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
  v13 = this->fields.defaultTdTypeImageAtlas;
  if ( !v13 )
    goto LABEL_25;
  Sprite = UIAtlas__GetSprite(v13, name, 0LL);
  if ( !Sprite )
    return (char)Sprite;
  v15 = this->fields.nowTreasureDeviceTypeImage;
  if ( !v15
    || (UISprite__set_atlas(v15, this->fields.defaultTdTypeImageAtlas, 0LL),
        (v16 = this->fields.nowTreasureDeviceTypeImage) == 0LL) )
  {
LABEL_25:
    sub_B170D4();
  }
  UISprite__set_spriteName(v16, name, 0LL);
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
  __int64 v4; // x3
  __int64 v5; // x4
  BattleCommandComponent__WaitForErrorViewFinished_d__239_o *v9; // x21

  if ( (byte_40F69CE & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandComponent__WaitForErrorViewFinished_d__239_TypeInfo, busyVoiceSe);
    byte_40F69CE = 1;
  }
  v9 = (BattleCommandComponent__WaitForErrorViewFinished_d__239_o *)sub_B170CC(
                                                                      BattleCommandComponent__WaitForErrorViewFinished_d__239_TypeInfo,
                                                                      busyVoiceSe,
                                                                      method,
                                                                      v4,
                                                                      v5);
  BattleCommandComponent__WaitForErrorViewFinished_d__239___ctor(v9, 0, 0LL);
  if ( !v9 )
    sub_B170D4();
  v9->fields.__4__this = this;
  sub_B16F98(&v9->fields.__4__this, this);
  v9->fields.waitSeconds = waitSeconds;
  v9->fields.busyVoiceSe = busyVoiceSe;
  sub_B16F98(&v9->fields.busyVoiceSe, busyVoiceSe);
  return (System_Collections_IEnumerator_o *)v9;
}


bool __fastcall BattleCommandComponent___setBuffIconList_b__136_0(
        BattleCommandComponent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  if ( !buff )
    goto LABEL_7;
  if ( !BattleBuffData_BuffData__isCommandCodeBuff(buff, 0LL) )
    return 0;
  data = this->fields.data;
  if ( !data )
LABEL_7:
    sub_B170D4();
  return !BattleBuffData_BuffData__IsMineCommandCode(buff, data->fields.userCommandCodeId, 0LL);
}


bool __fastcall BattleCommandComponent___setBuffIconList_b__136_1(
        BattleCommandComponent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_B170D4();
  return BattleBuffData_BuffData__isCommandCardBuff(buff, 0LL)
      && !BattleBuffData_BuffData__isEnableCommandCardBuff(buff, this->fields.data, 0LL);
}


bool __fastcall BattleCommandComponent___setBuffIconList_b__136_2(
        BattleCommandComponent_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  if ( !buff )
    goto LABEL_6;
  if ( BattleBuffData_BuffData__IsCommandAssistBuff(buff, 0LL) )
  {
    data = this->fields.data;
    if ( data )
      return buff->fields.commandAssistId != data->fields.commandAssistId;
LABEL_6:
    sub_B170D4();
  }
  return 0;
}


void __fastcall BattleCommandComponent__addCriticalBuff(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleCommandComponent___c__DisplayClass158_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Action_o *v16; // x20
  BattleCommandComponent_o *v17; // x0
  const MethodInfo *v18; // x2
  System_Collections_IEnumerator_o *v19; // x0
  SeManager_o *Instance; // x0
  System_String_o *CommonSeNameLocal; // x20
  SoundManager_o *v22; // x0
  System_String_o *CueSheet; // x21
  SeManager_o *v24; // x0
  float DefaultPreDelayTime; // s0
  BattleCommandComponent_o *v26; // x0
  const MethodInfo *v27; // x1
  System_Collections_IEnumerator_o *v28; // x1

  if ( (byte_40F699A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, obj);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SeManager__get_Instance__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v8);
    sub_B16FFC(&Method_BattleCommandComponent___c__DisplayClass158_0__addCriticalBuff_b__0__, v9);
    sub_B16FFC(&BattleCommandComponent___c__DisplayClass158_0_TypeInfo, v10);
    byte_40F699A = 1;
  }
  v11 = (BattleCommandComponent___c__DisplayClass158_0_o *)sub_B170CC(
                                                             BattleCommandComponent___c__DisplayClass158_0_TypeInfo,
                                                             obj,
                                                             method,
                                                             v3,
                                                             v4);
  BattleCommandComponent___c__DisplayClass158_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  v11->fields.__4__this = this;
  sub_B16F98(&v11->fields, this);
  v11->fields.obj = obj;
  sub_B16F98(&v11->fields.obj, obj);
  v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v11,
    Method_BattleCommandComponent___c__DisplayClass158_0__addCriticalBuff_b__0__,
    0LL);
  v19 = BattleCommandComponent__delayFrame(v17, v16, v18);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v19, 0LL);
  Instance = (SeManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
  if ( !Instance
    || (CommonSeNameLocal = SeManager__GetCommonSeNameLocal(Instance, 7, 0LL),
        (v22 = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__)) == 0LL)
    || (CueSheet = SoundManager__GetCueSheet(v22, CommonSeNameLocal, 0LL),
        (v24 = (SeManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__)) == 0LL) )
  {
LABEL_8:
    sub_B170D4();
  }
  DefaultPreDelayTime = SeManager__GetDefaultPreDelayTime(v24, CueSheet, CommonSeNameLocal, 0LL);
  v28 = BattleCommandComponent__PlayStarSe(v26, DefaultPreDelayTime / 1000.0, v27);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v28, 0LL);
}


void __fastcall BattleCommandComponent__addFirstAura(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *effect,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *effectobj; // x19
  UnityEngine_GameObject_o *Object; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *v9; // x20

  BattleCommandComponent__stopFirstAura(this, (const MethodInfo *)effect);
  effectobj = this->fields.effectobj;
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, effect, this->fields.objectRoot, 0LL, 0LL);
  if ( !effectobj )
    sub_B170D4();
  v9 = Object;
  if ( Object )
  {
    Object = (UnityEngine_GameObject_o *)sub_B170BC(Object, effectobj->obj.klass->_1.element_class);
    if ( !Object )
    {
      sub_B170F4();
      sub_B170A0();
    }
  }
  if ( effectobj->max_length <= 4 )
  {
    sub_B17100(Object, v7, v8);
    sub_B170A0();
  }
  effectobj->m_Items[4] = v9;
  sub_B16F98(&effectobj->m_Items[4], v9);
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
  UnityEngine_GameObject_o *Object_19257936; // x0
  UnityEngine_Object_o *v15; // x21
  UnityEngine_Transform_o *transform; // x22
  int v17; // s0
  __int64 v21; // x0
  __int64 v22; // x22
  System_String_o *v23; // x23
  struct UnityEngine_GameObject_array *v24; // x22
  Il2CppClass **v25; // x0
  struct UnityEngine_GameObject_array *v26; // x8
  UnityEngine_GameObject_o *v27; // x0
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  v28 = type;
  if ( (byte_40F6989 & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo, name);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    this = (BattleCommandComponent_o *)sub_B16FFC(&StringLiteral_18155, v8);
    byte_40F6989 = 1;
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
    UnityEngine_Object__Destroy_34809464(v12, 0LL);
  }
  v13 = System_String__Concat_43743732((System_String_o *)StringLiteral_18155, name, 0LL);
  Object_19257936 = BaseMonoBehaviour__createObject_19257936(
                      (BaseMonoBehaviour_o *)v6,
                      v13,
                      v6->fields.objectRoot,
                      0LL,
                      0LL);
  if ( !Object_19257936 )
    goto LABEL_25;
  v15 = (UnityEngine_Object_o *)Object_19257936;
  transform = UnityEngine_GameObject__get_transform(Object_19257936, 0LL);
  *(UnityEngine_Quaternion_o *)&v17 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v17, 0LL),
        (v21 = j_il2cpp_value_box_0(BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo, &v28)) == 0)
    || (v22 = v21,
        v23 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 360LL))(
                                   v21,
                                   *(_QWORD *)(*(_QWORD *)v21 + 368LL)),
        v28 = *(_DWORD *)j_il2cpp_object_unbox_0(v22),
        UnityEngine_Object__set_name(v15, v23, 0LL),
        (v24 = v6->fields.addObjectList) == 0LL) )
  {
LABEL_25:
    sub_B170D4();
  }
  this = (BattleCommandComponent_o *)sub_B170BC(v15, v24->obj.klass->_1.element_class);
  if ( !this )
  {
    sub_B170F4();
    sub_B170A0();
  }
  if ( v24->max_length <= type )
    goto LABEL_26;
  v25 = &v24->obj.klass + type;
  v25[4] = (Il2CppClass *)v15;
  this = (BattleCommandComponent_o *)sub_B16F98(v25 + 4, v15);
  v26 = v6->fields.addObjectList;
  if ( !v26 )
    goto LABEL_25;
  if ( v26->max_length <= type )
  {
LABEL_26:
    sub_B17100(this, name, *(_QWORD *)&type);
    sub_B170A0();
  }
  v27 = v26->m_Items[type];
  if ( !v27 )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(v27, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__attachEffect(
        BattleCommandComponent_o *this,
        System_String_o *name,
        int32_t index,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  UnityEngine_GameObject_o *Object_19257936; // x0
  UnityEngine_GameObject_o *v9; // x21
  UnityEngine_Transform_o *transform; // x22
  int v11; // s0
  UnityEngine_Transform_o *v14; // x22
  int v15; // s0
  struct UnityEngine_GameObject_array *effectobj; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  Il2CppClass **v22; // x0

  if ( (byte_40F699E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18155, name);
    byte_40F699E = 1;
  }
  v7 = System_String__Concat_43743732((System_String_o *)StringLiteral_18155, name, 0LL);
  Object_19257936 = BaseMonoBehaviour__createObject_19257936(
                      (BaseMonoBehaviour_o *)this,
                      v7,
                      this->fields.objectRoot,
                      0LL,
                      0LL);
  if ( !Object_19257936 )
    goto LABEL_12;
  v9 = Object_19257936;
  transform = UnityEngine_GameObject__get_transform(Object_19257936, 0LL);
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
    sub_B170D4();
  }
  if ( (signed int)effectobj->max_length > index )
  {
    v19 = sub_B170BC(v9, effectobj->obj.klass->_1.element_class);
    if ( !v19 )
    {
      sub_B170F4();
      sub_B170A0();
    }
    if ( effectobj->max_length <= index )
    {
      sub_B17100(v19, v20, v21);
      sub_B170A0();
    }
    v22 = &effectobj->obj.klass + index;
    v22[4] = (Il2CppClass *)v9;
    sub_B16F98(v22 + 4, v9);
  }
}


bool __fastcall BattleCommandComponent__checkCriticalPointValid(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *criticalObject; // x0

  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
    sub_B170D4();
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
  UnityEngine_Transform_o *v5; // x0
  float y; // s9
  UnityEngine_Transform_o *v7; // x0
  float z; // s10
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Transform_o *parent; // x0
  float v11; // s11
  float v12; // s0
  float v13; // s0
  float v14; // s10
  float v15; // s9
  float v16; // s8
  const MethodInfo *v17; // x1
  bool IsMaxViewCritical; // w0
  struct UnityEngine_GameObject_o *tr_criticaleffect; // x8
  UnityEngine_GameObject_o *effect_fullcricomplete; // x20
  UnityEngine_Transform_o *v21; // x0
  const MethodInfo *v22; // x3
  struct UnityEngine_GameObject_o *SpawnerObj; // x0
  UnityEngine_GameObject_o **p_countUpFinishEffect; // x20
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_14;
  LODWORD(v4) = (unsigned int)UnityEngine_Transform__get_lossyScale(transform, 0LL);
  v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v5 )
    goto LABEL_14;
  lossyScale = UnityEngine_Transform__get_lossyScale(v5, 0LL);
  y = lossyScale.fields.y;
  v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v7 )
    goto LABEL_14;
  v26 = UnityEngine_Transform__get_lossyScale(v7, 0LL);
  z = v26.fields.z;
  v9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v9 )
    goto LABEL_14;
  parent = UnityEngine_Transform__get_parent(v9, 0LL);
  if ( !parent )
    goto LABEL_14;
  v11 = 1.0 / z;
  v12 = COERCE_FLOAT(UnityEngine_Transform__get_localScale(parent, 0LL));
  v13 = v12 + v12;
  v14 = (float)(1.0 / v4) * v13;
  v15 = (float)(1.0 / y) * v13;
  v16 = v11 * v13;
  IsMaxViewCritical = BattleCommandComponent__IsMaxViewCritical(this, v17);
  tr_criticaleffect = this->fields.tr_criticaleffect;
  if ( IsMaxViewCritical )
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
  v21 = UnityEngine_GameObject__get_transform(this->fields.tr_criticaleffect, 0LL);
  v27.fields.x = v14;
  v27.fields.y = v15;
  v27.fields.z = v16;
  SpawnerObj = BattleCommandComponent__GetSpawnerObj(this, effect_fullcricomplete, v21, v27, v22);
  p_countUpFinishEffect = &this->fields.countUpFinishEffect;
  this->fields.countUpFinishEffect = SpawnerObj;
  sub_B16F98(&this->fields.countUpFinishEffect, SpawnerObj);
  if ( !this->fields.countUpFinishEffect
    || (UnityEngine_GameObject__SetActive(this->fields.countUpFinishEffect, 0, 0LL), !*p_countUpFinishEffect) )
  {
LABEL_14:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(*p_countUpFinishEffect, 1, 0LL);
  this->fields.isCountUp = 0;
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__coroutineUpdateSpecialBuffIcon(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *v6; // x20

  if ( (byte_40F69C7 & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_TypeInfo, method);
    byte_40F69C7 = 1;
  }
  v6 = (BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_o *)sub_B170CC(
                                                                            BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_TypeInfo,
                                                                            method,
                                                                            v2,
                                                                            v3,
                                                                            v4);
  BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228___ctor(v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  v6->fields.__4__this = this;
  sub_B16F98(&v6->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__delayFrame(
        BattleCommandComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleCommandComponent__delayFrame_d__160_o *v6; // x20

  if ( (byte_40F699C & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandComponent__delayFrame_d__160_TypeInfo, action);
    byte_40F699C = 1;
  }
  v6 = (BattleCommandComponent__delayFrame_d__160_o *)sub_B170CC(
                                                        BattleCommandComponent__delayFrame_d__160_TypeInfo,
                                                        action,
                                                        method,
                                                        v3,
                                                        v4);
  BattleCommandComponent__delayFrame_d__160___ctor(v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  v6->fields.action = action;
  sub_B16F98(&v6->fields.action, action);
  return (System_Collections_IEnumerator_o *)v6;
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
  if ( (byte_40F69AE & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F69AE = 1;
  }
  effectobj = v3->fields.effectobj;
  if ( !effectobj )
    goto LABEL_16;
  if ( !effectobj->max_length )
    goto LABEL_17;
  v5 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v3->fields.effectobj;
    if ( v6 )
    {
      if ( v6->max_length )
      {
        v7 = (UnityEngine_Object_o *)v6->m_Items[0];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(v7, 0LL);
        return;
      }
LABEL_17:
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
LABEL_16:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattleCommandComponent__fadeoutEffect(
        BattleCommandComponent_o *this,
        bool isTresure,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleCommandComponent__fadeoutEffect_d__180_o *v7; // x21

  if ( (byte_40F69A0 & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandComponent__fadeoutEffect_d__180_TypeInfo, isTresure);
    byte_40F69A0 = 1;
  }
  v7 = (BattleCommandComponent__fadeoutEffect_d__180_o *)sub_B170CC(
                                                           BattleCommandComponent__fadeoutEffect_d__180_TypeInfo,
                                                           isTresure,
                                                           method,
                                                           v3,
                                                           v4);
  BattleCommandComponent__fadeoutEffect_d__180___ctor(v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  v7->fields.__4__this = this;
  sub_B16F98(&v7->fields.__4__this, this);
  v7->fields.isTresure = isTresure;
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__flashComboSvt(
        BattleCommandComponent_o *this,
        int32_t index,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  struct System_Boolean_array *sameflg; // x8

  if ( index >= 3 )
    goto LABEL_6;
  if ( !combo || (sameflg = combo->fields.sameflg) == 0LL )
    sub_B170D4();
  if ( sameflg->max_length <= index )
  {
    sub_B17100(this, *(_QWORD *)&index, combo);
    sub_B170A0();
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
    sub_B170D4();
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
  UnityEngine_Component_o *v16; // x0
  struct UnityEngine_GameObject_array *effectobj; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v19; // x21
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_GameObject_o *Object; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_GameObject_o *v26; // x21
  struct UnityEngine_GameObject_array *v27; // x8
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_Component_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  UIWidget_o *v30; // x20
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_Transform_o *v32; // x0
  UnityEngine_Shader_o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  UnityEngine_Material_o *v38; // x22
  __int64 v39; // x0
  UnityEngine_Material_o *v40; // x21
  float v41; // s4
  float v42; // s5
  float v43; // s6
  float v44; // s7
  struct UnityEngine_GameObject_array *v45; // x8
  UnityEngine_GameObject_o *v46; // x20
  __int64 v47; // x0
  System_Object_array *v48; // x21
  Il2CppObject *v49; // x22
  Il2CppObject *v50; // x22
  Il2CppObject *v51; // x22
  System_Collections_Hashtable_o *v52; // x0
  float v53; // s4
  float v54; // s5
  float v55; // s6
  float v56; // s7
  struct UnityEngine_GameObject_array *v57; // x8
  UnityEngine_GameObject_o *v58; // x19
  MethodInfo methoda; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_40F69AB & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___, method);
    sub_B16FFC(&UnityEngine_Material_TypeInfo, v3);
    sub_B16FFC(&object___TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&float_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Vector3_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_22584, v8);
    sub_B16FFC(&StringLiteral_21175, v9);
    sub_B16FFC(&StringLiteral_18278, v10);
    sub_B16FFC(&StringLiteral_21173, v11);
    sub_B16FFC(&StringLiteral_15853, v12);
    sub_B16FFC(&StringLiteral_21803, v13);
    sub_B16FFC(&iTween_TypeInfo, v14);
    byte_40F69AB = 1;
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
    v16 = (UnityEngine_Component_o *)this->fields.facetex;
    if ( !v16 )
      goto LABEL_66;
    effectobj = this->fields.effectobj;
    gameObject = UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( !this->fields.nomalwidget )
      goto LABEL_66;
    v19 = gameObject;
    v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.nomalwidget, 0LL);
    if ( !v20 )
      goto LABEL_66;
    transform = UnityEngine_GameObject__get_transform(v20, 0LL);
    if ( !transform )
      goto LABEL_66;
    parent = UnityEngine_Transform__get_parent(transform, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v19, parent, 0LL, 0LL);
    if ( !effectobj )
      goto LABEL_66;
    v26 = Object;
    if ( !Object
      || (Object = (UnityEngine_GameObject_o *)sub_B170BC(Object, effectobj->obj.klass->_1.element_class)) != 0LL )
    {
      if ( effectobj->max_length <= 1 )
        goto LABEL_67;
      effectobj->m_Items[1] = v26;
      Object = (UnityEngine_GameObject_o *)sub_B16F98(&effectobj->m_Items[1], v26);
      v27 = this->fields.effectobj;
      if ( !v27 )
        goto LABEL_66;
      if ( v27->max_length <= 1 )
        goto LABEL_67;
      v28 = v27->m_Items[1];
      if ( !v28 )
        goto LABEL_66;
      ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                               v28,
                                                                               (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_UITexture___);
      if ( !ComponentInChildren_Dropdown_DropdownItem )
        goto LABEL_66;
      v30 = (UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem;
      v31 = UnityEngine_Component__get_gameObject(ComponentInChildren_Dropdown_DropdownItem, 0LL);
      if ( !v31 )
        goto LABEL_66;
      v32 = UnityEngine_GameObject__get_transform(v31, 0LL);
      if ( !v32 )
        goto LABEL_66;
      v60.fields.z = -5.0;
      v60.fields.x = 0.0;
      v60.fields.y = 0.0;
      UnityEngine_Transform__set_localPosition(v32, v60, 0LL);
      this->fields.newMatriarl = 1;
      v33 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))v30->klass->vtable._28_get_shader.method)(
                                      v30,
                                      v30->klass->vtable._29_set_shader.methodPtr);
      v38 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v34, v35, v36, v37);
      UnityEngine_Material___ctor(v38, v33, 0LL);
      ((void (__fastcall *)(UIWidget_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v30->klass->vtable._25_set_material.method)(
        v30,
        v38,
        v30->klass->vtable._26_get_mainTexture.methodPtr);
      v39 = ((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))v30->klass->vtable._24_get_material.method)(
              v30,
              v30->klass->vtable._25_set_material.methodPtr);
      v61.fields.r = 1.0;
      v40 = (UnityEngine_Material_o *)v39;
      v61.fields.a = 0.0;
      v61.fields.g = 1.0;
      v61.fields.b = 1.0;
      methoda.parameters = 0LL;
      methoda.rgctx_data = 0LL;
      UnityEngine_Color___ctor(v61, v41, v42, v43, v44, (const MethodInfo *)&methoda.parameters);
      if ( !v40 )
        goto LABEL_66;
      UnityEngine_Material__SetColor(
        v40,
        (System_String_o *)StringLiteral_15853,
        *(UnityEngine_Color_o *)&methoda.parameters,
        0LL);
      UIWidget__set_depth(v30, this->fields.basedepth + 400, 0LL);
      v45 = this->fields.effectobj;
      if ( !v45 )
        goto LABEL_66;
      if ( v45->max_length <= 1 )
        goto LABEL_67;
      v46 = v45->m_Items[1];
      v47 = sub_B17014(object___TypeInfo, 8LL, v25);
      if ( !v47 )
        goto LABEL_66;
      v48 = (System_Object_array *)v47;
      Object = (UnityEngine_GameObject_o *)StringLiteral_21803;
      if ( StringLiteral_21803 )
      {
        Object = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_21803, v48->obj.klass->_1.element_class);
        if ( !Object )
          goto LABEL_68;
        v24 = StringLiteral_21803;
      }
      else
      {
        v24 = 0LL;
      }
      if ( !v48->max_length )
        goto LABEL_67;
      v48->m_Items[0] = (Il2CppObject *)v24;
      sub_B16F98(v48->m_Items, v24);
      methoda.klass = (Il2CppClass *)vdup_n_s32(0x3FE66666u).n64_u64[0];
      LODWORD(methoda.return_type) = 1065353216;
      Object = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &methoda.klass);
      v49 = (Il2CppObject *)Object;
      if ( !Object || (Object = (UnityEngine_GameObject_o *)sub_B170BC(Object, v48->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v48->max_length <= 1 )
          goto LABEL_67;
        v48->m_Items[1] = v49;
        sub_B16F98(&v48->m_Items[1], v49);
        Object = (UnityEngine_GameObject_o *)StringLiteral_22584;
        if ( StringLiteral_22584 )
        {
          Object = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_22584, v48->obj.klass->_1.element_class);
          if ( !Object )
            goto LABEL_68;
          v24 = StringLiteral_22584;
        }
        else
        {
          v24 = 0LL;
        }
        if ( v48->max_length <= 2 )
          goto LABEL_67;
        v48->m_Items[2] = (Il2CppObject *)v24;
        sub_B16F98(&v48->m_Items[2], v24);
        HIDWORD(methoda.name) = 1065353216;
        Object = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, (char *)&methoda.name + 4);
        v50 = (Il2CppObject *)Object;
        if ( !Object
          || (Object = (UnityEngine_GameObject_o *)sub_B170BC(Object, v48->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v48->max_length <= 3 )
            goto LABEL_67;
          v48->m_Items[3] = v50;
          sub_B16F98(&v48->m_Items[3], v50);
          Object = (UnityEngine_GameObject_o *)StringLiteral_21175;
          if ( StringLiteral_21175 )
          {
            Object = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_21175, v48->obj.klass->_1.element_class);
            if ( !Object )
              goto LABEL_68;
            v24 = StringLiteral_21175;
          }
          else
          {
            v24 = 0LL;
          }
          if ( v48->max_length <= 4 )
            goto LABEL_67;
          v48->m_Items[4] = (Il2CppObject *)v24;
          sub_B16F98(&v48->m_Items[4], v24);
          Object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v51 = (Il2CppObject *)Object;
          if ( !Object
            || (Object = (UnityEngine_GameObject_o *)sub_B170BC(Object, v48->obj.klass->_1.element_class)) != 0LL )
          {
            if ( v48->max_length <= 5 )
              goto LABEL_67;
            v48->m_Items[5] = v51;
            sub_B16F98(&v48->m_Items[5], v51);
            Object = (UnityEngine_GameObject_o *)StringLiteral_21173;
            if ( StringLiteral_21173 )
            {
              Object = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_21173, v48->obj.klass->_1.element_class);
              if ( !Object )
                goto LABEL_68;
              v24 = StringLiteral_21173;
            }
            else
            {
              v24 = 0LL;
            }
            if ( v48->max_length <= 6 )
              goto LABEL_67;
            v48->m_Items[6] = (Il2CppObject *)v24;
            sub_B16F98(&v48->m_Items[6], v24);
            Object = (UnityEngine_GameObject_o *)StringLiteral_18278;
            if ( !StringLiteral_18278 )
            {
              v24 = 0LL;
              goto LABEL_58;
            }
            Object = (UnityEngine_GameObject_o *)sub_B170BC(StringLiteral_18278, v48->obj.klass->_1.element_class);
            if ( Object )
            {
              v24 = StringLiteral_18278;
LABEL_58:
              if ( v48->max_length <= 7 )
                goto LABEL_67;
              v48->m_Items[7] = (Il2CppObject *)v24;
              sub_B16F98(&v48->m_Items[7], v24);
              if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
              v52 = iTween__Hash(v48, 0LL);
              iTween__ScaleTo_18439972(v46, v52, 0LL);
              v57 = this->fields.effectobj;
              if ( v57 )
              {
                if ( v57->max_length > 1 )
                {
                  v58 = v57->m_Items[1];
                  v62.fields.r = 0.0;
                  v62.fields.g = 0.0;
                  v62.fields.b = 0.0;
                  v62.fields.a = 0.0;
                  methoda.methodPointer = 0LL;
                  methoda.invoker_method = 0LL;
                  UnityEngine_Color___ctor(v62, v53, v54, v55, v56, &methoda);
                  *(_QWORD *)&v63.fields.r = methoda.methodPointer;
                  *(_QWORD *)&v63.fields.b = methoda.invoker_method;
                  TweenColor__Begin(v58, 1.0, v63, 0LL);
                  return;
                }
LABEL_67:
                sub_B17100(Object, v24, v25);
                sub_B170A0();
              }
LABEL_66:
              sub_B170D4();
            }
          }
        }
      }
    }
LABEL_68:
    sub_B170F4();
    sub_B170A0();
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
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
  }
}


void __fastcall BattleCommandComponent__flashTypeCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCommandComponent_o *v3; // x19
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
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v15; // x20
  struct UnityEngine_GameObject_array *v16; // x8
  UnityEngine_Object_o *v17; // x20
  UnityEngine_Component_o *icon; // x0
  struct UnityEngine_GameObject_array *v19; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v21; // x21
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Transform_o *v25; // x22
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Transform_o *v27; // x0
  BattleCommandComponent_o *v28; // x21
  struct UnityEngine_GameObject_array *v29; // x8
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x20
  float v32; // s4
  float v33; // s5
  float v34; // s6
  float v35; // s7
  struct UnityEngine_GameObject_array *v36; // x8
  UnityEngine_GameObject_o *v37; // x20
  struct UnityEngine_GameObject_array *v38; // x8
  UnityEngine_GameObject_o *v39; // x20
  __int64 v40; // x0
  System_Object_array *v41; // x21
  BattleCommandComponent_o *v42; // x22
  BattleCommandComponent_o *v43; // x22
  BattleCommandComponent_o *v44; // x19
  System_Collections_Hashtable_o *v45; // x0
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v48; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v3 = this;
  if ( (byte_40F69AD & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, method);
    sub_B16FFC(&object___TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&float_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Vector3_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_18279, v8);
    sub_B16FFC(&StringLiteral_22584, v9);
    sub_B16FFC(&StringLiteral_21175, v10);
    sub_B16FFC(&StringLiteral_21173, v11);
    sub_B16FFC(&StringLiteral_21803, v12);
    this = (BattleCommandComponent_o *)sub_B16FFC(&iTween_TypeInfo, v13);
    byte_40F69AD = 1;
  }
  effectobj = v3->fields.effectobj;
  if ( !effectobj )
    goto LABEL_77;
  if ( !effectobj->max_length )
    goto LABEL_78;
  v15 = (UnityEngine_Object_o *)effectobj->m_Items[0];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v16 = v3->fields.effectobj;
    if ( !v16 )
      goto LABEL_77;
    if ( !v16->max_length )
      goto LABEL_78;
    v17 = (UnityEngine_Object_o *)v16->m_Items[0];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v17, 0LL);
  }
  icon = (UnityEngine_Component_o *)v3->fields.icon;
  if ( !icon )
    goto LABEL_77;
  v19 = v3->fields.effectobj;
  gameObject = UnityEngine_Component__get_gameObject(icon, 0LL);
  if ( !v3->fields.nomalwidget )
    goto LABEL_77;
  v21 = gameObject;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3->fields.nomalwidget, 0LL);
  if ( !v22 )
    goto LABEL_77;
  transform = UnityEngine_GameObject__get_transform(v22, 0LL);
  if ( !transform )
    goto LABEL_77;
  parent = UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !v3->fields.icon )
    goto LABEL_77;
  v25 = parent;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3->fields.icon, 0LL);
  if ( !v26 )
    goto LABEL_77;
  v27 = UnityEngine_GameObject__get_transform(v26, 0LL);
  this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)v3, v21, v25, v27, 0LL);
  if ( !v19 )
    goto LABEL_77;
  v28 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_B170BC(this, v19->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
  }
  if ( !v19->max_length )
    goto LABEL_78;
  v19->m_Items[0] = (UnityEngine_GameObject_o *)v28;
  this = (BattleCommandComponent_o *)sub_B16F98(v19->m_Items, v28);
  v29 = v3->fields.effectobj;
  if ( !v29 )
    goto LABEL_77;
  if ( !v29->max_length )
    goto LABEL_78;
  v30 = v29->m_Items[0];
  if ( !v30 )
    goto LABEL_77;
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        v30,
                                                                        (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
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
    UIWidget__set_depth((UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem, v3->fields.basedepth + 400, 0LL);
    v36 = v3->fields.effectobj;
    if ( !v36 )
      goto LABEL_77;
    if ( !v36->max_length )
      goto LABEL_78;
    v37 = v36->m_Items[0];
    v47.fields.r = 0.0;
    v47.fields.g = 0.0;
    v47.fields.b = 0.0;
    v47.fields.a = 0.0;
    var40.methodPointer = 0LL;
    var40.invoker_method = 0LL;
    UnityEngine_Color___ctor(v47, v32, v33, v34, v35, &var40);
    *(_QWORD *)&v48.fields.r = var40.methodPointer;
    *(_QWORD *)&v48.fields.b = var40.invoker_method;
    this = (BattleCommandComponent_o *)TweenColor__Begin(v37, 1.0, v48, 0LL);
  }
  v38 = v3->fields.effectobj;
  if ( !v38 )
    goto LABEL_77;
  if ( !v38->max_length )
    goto LABEL_78;
  v39 = v38->m_Items[0];
  v40 = sub_B17014(object___TypeInfo, 8LL, v2);
  if ( !v40 )
LABEL_77:
    sub_B170D4();
  v41 = (System_Object_array *)v40;
  this = (BattleCommandComponent_o *)StringLiteral_21803;
  if ( StringLiteral_21803 )
  {
    this = (BattleCommandComponent_o *)sub_B170BC(StringLiteral_21803, v41->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
    method = (const MethodInfo *)StringLiteral_21803;
  }
  else
  {
    method = 0LL;
  }
  if ( !v41->max_length )
    goto LABEL_78;
  v41->m_Items[0] = (Il2CppObject *)method;
  sub_B16F98(v41->m_Items, method);
  var40.methodPointer = (Il2CppMethodPointer)0x4000000040000000LL;
  LODWORD(var40.invoker_method) = 1065353216;
  this = (BattleCommandComponent_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &var40);
  v42 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_B170BC(this, v41->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
  }
  if ( v41->max_length <= 1 )
    goto LABEL_78;
  v41->m_Items[1] = (Il2CppObject *)v42;
  sub_B16F98(&v41->m_Items[1], v42);
  this = (BattleCommandComponent_o *)StringLiteral_22584;
  if ( StringLiteral_22584 )
  {
    this = (BattleCommandComponent_o *)sub_B170BC(StringLiteral_22584, v41->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
    method = (const MethodInfo *)StringLiteral_22584;
  }
  else
  {
    method = 0LL;
  }
  if ( v41->max_length <= 2 )
    goto LABEL_78;
  v41->m_Items[2] = (Il2CppObject *)method;
  sub_B16F98(&v41->m_Items[2], method);
  HIDWORD(var40.klass) = 1065353216;
  this = (BattleCommandComponent_o *)j_il2cpp_value_box_0(float_TypeInfo, (char *)&var40.klass + 4);
  v43 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_B170BC(this, v41->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
  }
  if ( v41->max_length <= 3 )
    goto LABEL_78;
  v41->m_Items[3] = (Il2CppObject *)v43;
  sub_B16F98(&v41->m_Items[3], v43);
  this = (BattleCommandComponent_o *)StringLiteral_21175;
  if ( StringLiteral_21175 )
  {
    this = (BattleCommandComponent_o *)sub_B170BC(StringLiteral_21175, v41->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
    method = (const MethodInfo *)StringLiteral_21175;
  }
  else
  {
    method = 0LL;
  }
  if ( v41->max_length <= 4 )
    goto LABEL_78;
  v41->m_Items[4] = (Il2CppObject *)method;
  sub_B16F98(&v41->m_Items[4], method);
  this = (BattleCommandComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
  v44 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_B170BC(this, v41->obj.klass->_1.element_class);
    if ( !this )
    {
LABEL_79:
      sub_B170F4();
      sub_B170A0();
    }
  }
  if ( v41->max_length <= 5 )
    goto LABEL_78;
  v41->m_Items[5] = (Il2CppObject *)v44;
  sub_B16F98(&v41->m_Items[5], v44);
  this = (BattleCommandComponent_o *)StringLiteral_21173;
  if ( StringLiteral_21173 )
  {
    this = (BattleCommandComponent_o *)sub_B170BC(StringLiteral_21173, v41->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_79;
    method = (const MethodInfo *)StringLiteral_21173;
  }
  else
  {
    method = 0LL;
  }
  if ( v41->max_length <= 6 )
    goto LABEL_78;
  v41->m_Items[6] = (Il2CppObject *)method;
  sub_B16F98(&v41->m_Items[6], method);
  this = (BattleCommandComponent_o *)StringLiteral_18279;
  if ( StringLiteral_18279 )
  {
    this = (BattleCommandComponent_o *)sub_B170BC(StringLiteral_18279, v41->obj.klass->_1.element_class);
    if ( this )
    {
      method = (const MethodInfo *)StringLiteral_18279;
      goto LABEL_72;
    }
    goto LABEL_79;
  }
  method = 0LL;
LABEL_72:
  if ( v41->max_length <= 7 )
  {
LABEL_78:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v41->m_Items[7] = (Il2CppObject *)method;
  sub_B16F98(&v41->m_Items[7], method);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v45 = iTween__Hash(v41, 0LL);
  iTween__ScaleTo_18439972(v39, v45, 0LL);
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

  if ( (byte_40F698D & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandComponent_TypeInfo, *(_QWORD *)&commandType);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40F698D = 1;
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
      p_SEALED_CARDTYPE_ICON_QUICK = (System_String_o **)&StringLiteral_1;
      break;
  }
  return *p_SEALED_CARDTYPE_ICON_QUICK;
}


int32_t __fastcall BattleCommandComponent__getCommandType(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_B170D4();
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
  struct UISprite_o *v4; // x8

  if ( (byte_40F6983 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F6983 = 1;
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(powerUpCardIcon, 0LL, 0LL) )
    return -1;
  v4 = this->fields.powerUpCardIcon;
  if ( !v4 )
    sub_B170D4();
  return v4->fields.mDepth;
}


int32_t __fastcall BattleCommandComponent__getSvtId(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B170D4();
  return data->fields.svtId;
}


int32_t __fastcall BattleCommandComponent__getSvtLimitCount(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B170D4();
  return data->fields.svtlimit;
}


int32_t __fastcall BattleCommandComponent__getUniqueID(BattleCommandComponent_o *this, const MethodInfo *method)
{
  struct BattleCommandData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B170D4();
  return data->fields.uniqueId;
}


BattleCommandSealStatus_o *__fastcall BattleCommandComponent__get_SealStatus(
        BattleCommandComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleCommandSealStatus_o *result; // x0
  BattleCommandSealStatus_o **p_sealStatus; // x19
  BattleCommandSealStatus_o *sealStatus; // t1
  BattleCommandSealStatus_o *v9; // x20
  const MethodInfo *v10; // x1

  if ( (byte_40F697D & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandSealStatus_TypeInfo, method);
    byte_40F697D = 1;
  }
  sealStatus = this->fields.sealStatus;
  p_sealStatus = &this->fields.sealStatus;
  result = sealStatus;
  if ( !sealStatus )
  {
    v9 = (BattleCommandSealStatus_o *)sub_B170CC(BattleCommandSealStatus_TypeInfo, method, v2, v3, v4);
    BattleCommandSealStatus___ctor(v9, v10);
    *p_sealStatus = v9;
    sub_B16F98(p_sealStatus, v9);
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
    sub_B170D4();
  return BattleCommandSealStatus__get_HasKindOfDontAction(SealStatus, v3);
}


bool __fastcall BattleCommandComponent__get_isSealed(BattleCommandComponent_o *this, const MethodInfo *method)
{
  BattleCommandSealStatus_o *SealStatus; // x0
  const MethodInfo *v3; // x1

  SealStatus = BattleCommandComponent__get_SealStatus(this, method);
  if ( !SealStatus )
    sub_B170D4();
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
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct UnityEngine_GameObject_array *addObjectList; // x8
  __int64 v9; // x21
  unsigned __int64 max_length; // x9
  unsigned __int64 v11; // x23
  UnityEngine_Object_o *v12; // x20
  struct UnityEngine_GameObject_array *v13; // x8
  UnityEngine_GameObject_o *v14; // x0

  if ( (byte_40F69A1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F69A1 = 1;
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
    sub_B170D4();
  }
  v9 = 4LL;
  while ( 1 )
  {
    max_length = addObjectList->max_length;
    v11 = v9 - 4;
    if ( v9 - 4 >= (int)max_length )
      break;
    if ( v11 >= max_length )
      goto LABEL_19;
    v12 = (UnityEngine_Object_o *)*((_QWORD *)&addObjectList->obj.klass + v9);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v5 = UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
    if ( v5 )
    {
      v13 = this->fields.addObjectList;
      if ( !v13 )
        goto LABEL_17;
      if ( v11 >= v13->max_length )
      {
LABEL_19:
        sub_B17100(v5, v6, v7);
        sub_B170A0();
      }
      v14 = (UnityEngine_GameObject_o *)*((_QWORD *)&v13->obj.klass + v9);
      if ( !v14 )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive(v14, 0, 0LL);
    }
    addObjectList = this->fields.addObjectList;
    ++v9;
    if ( !addObjectList )
      goto LABEL_17;
  }
  BattleCommandComponent__CardEffectSetActive(this, 0, v7);
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
  UnityEngine_GameObject_o *criticalObject; // x0

  data = this->fields.data;
  if ( !data )
    goto LABEL_5;
  if ( data->fields.starcount > 0 )
    return;
  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
LABEL_5:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(criticalObject, 0, 0LL);
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
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x0
  __int64 v14; // x2
  System_Object_array *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x22
  Il2CppObject *v19; // x22
  Il2CppObject *v20; // x22
  Il2CppObject *v21; // x22
  System_Collections_Hashtable_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x20
  __int64 v24; // x2
  __int64 v25; // x0
  System_Object_array *v26; // x21
  Il2CppObject *v27; // x22
  Il2CppObject *v28; // x22
  System_Collections_Hashtable_o *v29; // x0
  const MethodInfo *v30; // x2
  System_Collections_IEnumerator_o *v31; // x0
  float v32; // [xsp+0h] [xbp-60h] BYREF
  int v33; // [xsp+4h] [xbp-5Ch] BYREF
  float v34; // [xsp+8h] [xbp-58h] BYREF
  int v35; // [xsp+Ch] [xbp-54h] BYREF
  int v36; // [xsp+18h] [xbp-48h] BYREF
  int v37; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_40F699F & 1) == 0 )
  {
    sub_B16FFC(&object___TypeInfo, method);
    sub_B16FFC(&float_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_23222, v6);
    sub_B16FFC(&StringLiteral_22584, v7);
    sub_B16FFC(&StringLiteral_23314, v8);
    sub_B16FFC(&StringLiteral_23358, v9);
    sub_B16FFC(&iTween_TypeInfo, v10);
    byte_40F699F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v13 = sub_B17014(object___TypeInfo, 8LL, v12);
  if ( !v13 )
    goto LABEL_59;
  v15 = (System_Object_array *)v13;
  v16 = StringLiteral_23222;
  if ( StringLiteral_23222 )
  {
    v16 = sub_B170BC(StringLiteral_23222, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_23222;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v15->max_length )
    goto LABEL_57;
  v15->m_Items[0] = (Il2CppObject *)v17;
  sub_B16F98(v15->m_Items, v17);
  v37 = 0x40000000;
  v16 = j_il2cpp_value_box_0(float_TypeInfo, &v37);
  v18 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_B170BC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
  }
  if ( v15->max_length <= 1 )
    goto LABEL_57;
  v15->m_Items[1] = v18;
  sub_B16F98(&v15->m_Items[1], v18);
  v16 = StringLiteral_23314;
  if ( StringLiteral_23314 )
  {
    v16 = sub_B170BC(StringLiteral_23314, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_23314;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 2 )
    goto LABEL_57;
  v15->m_Items[2] = (Il2CppObject *)v17;
  sub_B16F98(&v15->m_Items[2], v17);
  v36 = 0x40000000;
  v16 = j_il2cpp_value_box_0(float_TypeInfo, &v36);
  v19 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_B170BC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
  }
  if ( v15->max_length <= 3 )
    goto LABEL_57;
  v15->m_Items[3] = v19;
  sub_B16F98(&v15->m_Items[3], v19);
  v16 = StringLiteral_23358;
  if ( StringLiteral_23358 )
  {
    v16 = sub_B170BC(StringLiteral_23358, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_23358;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 4 )
    goto LABEL_57;
  v15->m_Items[4] = (Il2CppObject *)v17;
  sub_B16F98(&v15->m_Items[4], v17);
  v35 = 1065353216;
  v16 = j_il2cpp_value_box_0(float_TypeInfo, &v35);
  v20 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_B170BC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
  }
  if ( v15->max_length <= 5 )
    goto LABEL_57;
  v15->m_Items[5] = v20;
  sub_B16F98(&v15->m_Items[5], v20);
  v16 = StringLiteral_22584;
  if ( StringLiteral_22584 )
  {
    v16 = sub_B170BC(StringLiteral_22584, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_22584;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 6 )
    goto LABEL_57;
  v15->m_Items[6] = (Il2CppObject *)v17;
  sub_B16F98(&v15->m_Items[6], v17);
  v34 = ftime + 0.1;
  v16 = j_il2cpp_value_box_0(float_TypeInfo, &v34);
  v21 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_B170BC(v16, v15->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
  }
  if ( v15->max_length <= 7 )
    goto LABEL_57;
  v15->m_Items[7] = v21;
  sub_B16F98(&v15->m_Items[7], v21);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v22 = iTween__Hash(v15, 0LL);
  iTween__ScaleTo_18439972(gameObject, v22, 0LL);
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v25 = sub_B17014(object___TypeInfo, 4LL, v24);
  if ( !v25 )
LABEL_59:
    sub_B170D4();
  v26 = (System_Object_array *)v25;
  v16 = StringLiteral_23358;
  if ( StringLiteral_23358 )
  {
    v16 = sub_B170BC(StringLiteral_23358, v26->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_23358;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v26->max_length )
    goto LABEL_57;
  v26->m_Items[0] = (Il2CppObject *)v17;
  sub_B16F98(v26->m_Items, v17);
  v33 = 1144258560;
  v16 = j_il2cpp_value_box_0(float_TypeInfo, &v33);
  v27 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_B170BC(v16, v26->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
  }
  if ( v26->max_length <= 1 )
    goto LABEL_57;
  v26->m_Items[1] = v27;
  sub_B16F98(&v26->m_Items[1], v27);
  v16 = StringLiteral_22584;
  if ( StringLiteral_22584 )
  {
    v16 = sub_B170BC(StringLiteral_22584, v26->obj.klass->_1.element_class);
    if ( !v16 )
      goto LABEL_58;
    v17 = StringLiteral_22584;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v26->max_length <= 2 )
    goto LABEL_57;
  v26->m_Items[2] = (Il2CppObject *)v17;
  sub_B16F98(&v26->m_Items[2], v17);
  v32 = ftime;
  v16 = j_il2cpp_value_box_0(float_TypeInfo, &v32);
  v28 = (Il2CppObject *)v16;
  if ( v16 )
  {
    v16 = sub_B170BC(v16, v26->obj.klass->_1.element_class);
    if ( !v16 )
    {
LABEL_58:
      sub_B170F4();
      sub_B170A0();
    }
  }
  if ( v26->max_length <= 3 )
  {
LABEL_57:
    sub_B17100(v16, v17, v14);
    sub_B170A0();
  }
  v26->m_Items[3] = v28;
  sub_B16F98(&v26->m_Items[3], v28);
  v29 = iTween__Hash(v26, 0LL);
  iTween__RotateTo_18445064(v23, v29, 0LL);
  v31 = BattleCommandComponent__fadeoutEffect(this, 1, v30);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v31, 0LL);
}


void __fastcall BattleCommandComponent__playOpenNobleCard(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseMonoBehaviour_o *v3; // x19
  __int64 v4; // x1
  BaseMonoBehaviour_c *klass; // x8
  UnityEngine_Object_o *data; // x20
  BaseMonoBehaviour_c *v7; // x8
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Component_o *v9; // x0
  BaseMonoBehaviour_c *v10; // x20
  UnityEngine_Transform_o *transform; // x0
  BattleCommandComponent_o *v12; // x19

  v3 = (BaseMonoBehaviour_o *)this;
  if ( (byte_40F6991 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    this = (BattleCommandComponent_o *)sub_B16FFC(&StringLiteral_18184, v4);
    byte_40F6991 = 1;
  }
  klass = v3[16].klass;
  if ( !klass )
    goto LABEL_21;
  if ( LODWORD(klass->_1.namespaze) <= 2 )
    goto LABEL_22;
  data = (UnityEngine_Object_o *)klass->_1.this_arg.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v3[16].klass;
    if ( !v7 )
      goto LABEL_21;
    if ( LODWORD(v7->_1.namespaze) <= 2 )
      goto LABEL_22;
    v8 = (UnityEngine_Object_o *)v7->_1.this_arg.data;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__DestroyImmediate_34809676(v8, 0LL);
  }
  v9 = (UnityEngine_Component_o *)v3[14].klass;
  if ( !v9
    || (v10 = v3[16].klass,
        transform = UnityEngine_Component__get_transform(v9, 0LL),
        this = (BattleCommandComponent_o *)BaseMonoBehaviour__createObject_19257936(
                                             v3,
                                             (System_String_o *)StringLiteral_18184,
                                             transform,
                                             0LL,
                                             0LL),
        !v10) )
  {
LABEL_21:
    sub_B170D4();
  }
  v12 = this;
  if ( this )
  {
    this = (BattleCommandComponent_o *)sub_B170BC(this, *((_QWORD *)v10->_1.image + 8));
    if ( !this )
    {
      sub_B170F4();
      sub_B170A0();
    }
  }
  if ( LODWORD(v10->_1.namespaze) <= 2 )
  {
LABEL_22:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v10->_1.this_arg.data = v12;
  sub_B16F98(&v10->_1.this_arg, v12);
}


void __fastcall BattleCommandComponent__resetAddObject(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 gameObject; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x8
  __int64 v10; // x20
  unsigned __int64 v11; // x24
  __int64 v12; // x25
  UnityEngine_Transform_o *objectRoot; // x21
  __int64 v14; // x0
  __int64 v15; // x22
  System_String_o *v16; // x23
  UnityEngine_Object_o *NodeFromName; // x21
  struct UnityEngine_GameObject_array *addObjectList; // x22
  __int64 v19; // x23
  __int64 v20; // x21
  Il2CppClass **v21; // x0
  struct UnityEngine_GameObject_array *v22; // x8
  UnityEngine_GameObject_o *v23; // x0
  unsigned int v24; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40F698A & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandComponent_ADDOBJECT_TYPE___TypeInfo, method);
    sub_B16FFC(&BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F698A = 1;
  }
  v24 = 0;
  gameObject = sub_B17014(BattleCommandComponent_ADDOBJECT_TYPE___TypeInfo, 2LL, v2);
  if ( !gameObject )
LABEL_24:
    sub_B170D4();
  v9 = *(_QWORD *)(gameObject + 24);
  v10 = gameObject;
  if ( (unsigned int)v9 <= 1 )
    goto LABEL_25;
  *(_DWORD *)(gameObject + 36) = 1;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    v12 = gameObject + 32;
    while ( v11 < (unsigned int)v9 )
    {
      v24 = *(_DWORD *)(v12 + 4 * v11);
      objectRoot = this->fields.objectRoot;
      v14 = j_il2cpp_value_box_0(BattleCommandComponent_ADDOBJECT_TYPE_TypeInfo, &v24);
      if ( !v14 )
        goto LABEL_24;
      v15 = v14;
      v16 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 360LL))(
                                 v14,
                                 *(_QWORD *)(*(_QWORD *)v14 + 368LL));
      v24 = *(_DWORD *)j_il2cpp_object_unbox_0(v15);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(objectRoot, v16, 1, 0LL);
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
        v19 = (int)v24;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)NodeFromName, 0LL);
        if ( !addObjectList )
          goto LABEL_24;
        v20 = gameObject;
        if ( gameObject )
        {
          gameObject = sub_B170BC(gameObject, addObjectList->obj.klass->_1.element_class);
          if ( !gameObject )
          {
            sub_B170F4();
            sub_B170A0();
          }
        }
        if ( (unsigned int)v19 >= addObjectList->max_length )
          break;
        v21 = &addObjectList->obj.klass + v19;
        v21[4] = (Il2CppClass *)v20;
        gameObject = sub_B16F98(v21 + 4, v20);
        v22 = this->fields.addObjectList;
        if ( !v22 )
          goto LABEL_24;
        if ( v24 >= v22->max_length )
          break;
        v23 = v22->m_Items[v24];
        if ( !v23 )
          goto LABEL_24;
        UnityEngine_GameObject__SetActive(v23, 0, 0LL);
      }
      LODWORD(v9) = *(_DWORD *)(v10 + 24);
      if ( (__int64)++v11 >= (int)v9 )
        return;
    }
LABEL_25:
    sub_B17100(gameObject, v7, v8);
    sub_B170A0();
  }
}


void __fastcall BattleCommandComponent__resetComboData(BattleCommandComponent_o *this, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct UnityEngine_GameObject_array *effectobj; // x20
  __int64 v7; // x8
  unsigned __int64 v8; // x21
  UnityEngine_Object_o *v9; // x19

  if ( (byte_40F699D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F699D = 1;
  }
  BattleCommandComponent__DestroyEffectObject1(this, method);
  effectobj = this->fields.effectobj;
  if ( !effectobj )
    sub_B170D4();
  v7 = *(_QWORD *)&effectobj->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v7 )
      {
        sub_B17100(v3, v4, v5);
        sub_B170A0();
      }
      v9 = (UnityEngine_Object_o *)effectobj->m_Items[v8];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v3 = UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
      if ( v3 )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(v9, 0LL);
      }
      LODWORD(v7) = effectobj->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)v7 );
  }
}


void __fastcall BattleCommandComponent__resetCriticalLabel(BattleCommandComponent_o *this, const MethodInfo *method)
{
  DrumRollLabel_o *criticallabel; // x0
  DrumRollLabel_o *v4; // x0

  this->fields.boostedCriticalRate = 0;
  BattleCommandComponent__ResetCriticalLabelColor(this, method);
  criticallabel = this->fields.criticallabel;
  if ( !criticallabel || (DrumRollLabel__setParam(criticallabel, 0, 0LL), (v4 = this->fields.criticallabel) == 0LL) )
    sub_B170D4();
  DrumRollLabel__ChangeParamNonAnimation(v4, 0, 1, 0LL);
}


void __fastcall BattleCommandComponent__resetSelect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleCommandData_o *data; // x8
  int32_t uniqueId; // w20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v12; // x20
  struct UnityEngine_GameObject_array *v13; // x8
  UnityEngine_Object_o *v14; // x19
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F69AA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v3);
    byte_40F69AA = 1;
  }
  data = this->fields.data;
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
  BattleCommandComponent__SetCardColor(this, white, v6);
  BattleCommandComponent__resetSelectStamp(this, v7);
  effectobj = this->fields.effectobj;
  if ( !effectobj )
    goto LABEL_20;
  if ( effectobj->max_length <= 3 )
    goto LABEL_21;
  v12 = (UnityEngine_Object_o *)effectobj->m_Items[3];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
  if ( v8 )
  {
    v13 = this->fields.effectobj;
    if ( v13 )
    {
      if ( v13->max_length > 3 )
      {
        v14 = (UnityEngine_Object_o *)v13->m_Items[3];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(v14, 0LL);
        return;
      }
LABEL_21:
      sub_B17100(v8, v9, v10);
      sub_B170A0();
    }
LABEL_20:
    sub_B170D4();
  }
}


void __fastcall BattleCommandComponent__resetSelectStamp(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCommandComponent_o *v3; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_array *v6; // x8
  Spawner_o *spawner; // x0

  v3 = this;
  if ( (byte_40F6995 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F6995 = 1;
  }
  effectobj = v3->fields.effectobj;
  if ( !effectobj )
    goto LABEL_14;
  if ( effectobj->max_length <= 5 )
  {
LABEL_15:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v5 = (UnityEngine_Object_o *)effectobj->m_Items[5];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v3->fields.effectobj;
    if ( !v6 )
      goto LABEL_14;
    if ( v6->max_length > 5 )
    {
      spawner = v3->fields.spawner;
      if ( spawner )
      {
        Spawner__Despawn(spawner, v6->m_Items[5], 1, 0LL);
        return;
      }
LABEL_14:
      sub_B170D4();
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
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  BattleCommandData_o *data; // x0
  const MethodInfo *v24; // x1
  struct BattleCommandData_o *v25; // x8
  int treasureDvc; // w19
  __int64 v27; // x2
  __int64 DispLimitCount; // x0
  const MethodInfo *v29; // x1
  __int64 v30; // x2
  __int64 v31; // x22
  System_String_o *FileName; // x0
  const MethodInfo *v33; // x2
  __int64 v34; // x2
  System_Array_o *v35; // x0
  __int64 *v36; // x8
  __int64 v37; // x1
  int v38; // w21
  unsigned __int64 v39; // x27
  __int64 v40; // x28
  BattleServantData_o *svtData; // x0
  int32_t SvtId; // w0
  int32_t v43; // w23
  struct BattleServantData_o *v44; // x8
  int32_t v45; // w24
  int32_t overwriteSvtVoiceId; // w25
  int32_t v47; // w26
  __int64 v48; // x21
  unsigned __int64 v49; // x8
  unsigned int v50; // w9
  unsigned int v51; // w11
  int v52; // w12
  int32_t v53; // w0
  struct BattleCommandData_o *v54; // x8
  unsigned int v55; // w22
  int v56; // w19
  int32_t uniqueId; // w23
  System_String_o *v58; // x23
  int32_t v59; // w24
  System_String_o *v60; // x0
  WebViewManager_o *Instance; // x0
  struct BattleCommandData_o *v62; // x8
  __int64 v63; // x28
  VoiceMaster_o *v64; // x23
  int32_t v65; // w24
  int32_t v66; // w25
  int32_t *v67; // x28
  int32_t v68; // t1
  System_String_o *v69; // x0
  System_String_o *v70; // x0
  int32_t FlagRequestNumber; // w0
  const MethodInfo *v72; // x4
  struct BattleServantData_o *v73; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleCommandData_o *v75; // x8
  int32_t v76; // w2
  BattleData_o *v77; // x0
  struct BattleServantData_o *v78; // x8
  BattlePerformance_o *v79; // x0
  BattleActorControl_o *ServantActor; // x23
  BattleServantData_o *v81; // x0
  int32_t v82; // w0
  int32_t v83; // w23
  struct BattleServantData_o *v84; // x8
  int32_t v85; // w24
  int32_t v86; // w21
  int32_t v87; // w22
  System_String_o *v88; // x0
  struct BattleCommandData_o *v89; // x8
  System_String_o *v90; // x22
  int32_t v91; // w25
  BattleCommandData_o *v92; // x0
  System_String_o *v93; // x21
  const MethodInfo *v94; // x1
  Il2CppObject *v95; // x0
  __int64 *v96; // x8
  BattleCommandData_o *v97; // x0
  const MethodInfo *v98; // x1
  BattleCommandData_o *v99; // x0
  UnityEngine_Component_o *nomalwidget; // x0
  struct UnityEngine_GameObject_array *effectobj; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v103; // x21
  struct BattlePerformance_o *v104; // x0
  struct BattleData_o *v105; // x8
  int32_t v106; // [xsp+0h] [xbp-60h]
  int v107; // [xsp+4h] [xbp-5Ch] BYREF
  int v108; // [xsp+8h] [xbp-58h] BYREF
  int v109; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o grey; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F69A6 & 1) == 0 )
  {
    sub_B16FFC(&Voice_BATTLE___TypeInfo, *(_QWORD *)&targetIndex);
    sub_B16FFC(&Method_DataManager_GetMasterData_VoiceMaster___, v5);
    sub_B16FFC(&int_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__465D7DAC1D1469B8AAD4256C55331C9F60FE5E94AD5B4D3AC8992CB164DDDCE3,
      v10);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__60C743D2B628F1F7EC314A6CCBE8B493B5DD3827572AD9AA7E4B230C7B9919A4,
      v11);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__71A03FE3843FC2331F63AFCE9FB6609CA17FF235B50C9A2A810635482008B1D0,
      v12);
    sub_B16FFC(&Voice_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_16155, v14);
    sub_B16FFC(&StringLiteral_7018, v15);
    sub_B16FFC(&StringLiteral_18179, v16);
    sub_B16FFC(&StringLiteral_21504, v17);
    sub_B16FFC(&StringLiteral_16483, v18);
    sub_B16FFC(&StringLiteral_15842, v19);
    byte_40F69A6 = 1;
  }
  grey = UnityEngine_Color__get_grey(0LL);
  BattleCommandComponent__SetCardColor(this, grey, v20);
  BattleCommandComponent__stopFirstAura(this, v21);
  data = this->fields.data;
  if ( !data )
    goto LABEL_111;
  if ( BattleCommandData__get_type(data, v22) != 5 && !BattleCommandComponent__get_isKindOfDontAction(this, v24) )
  {
    v25 = this->fields.data;
    if ( !v25 )
      goto LABEL_111;
    treasureDvc = v25->fields.treasureDvc;
    if ( treasureDvc <= 0 )
    {
      if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
      FileName = Voice__getFileName(245, 0LL);
      if ( BattleCommandComponent__IsValidVoiceType(this, FileName, v33) )
      {
        v35 = (System_Array_o *)sub_B17014(Voice_BATTLE___TypeInfo, 6LL, v34);
        v36 = &Field__PrivateImplementationDetails__71A03FE3843FC2331F63AFCE9FB6609CA17FF235B50C9A2A810635482008B1D0;
      }
      else
      {
        v35 = (System_Array_o *)sub_B17014(Voice_BATTLE___TypeInfo, 3LL, v34);
        v36 = &Field__PrivateImplementationDetails__465D7DAC1D1469B8AAD4256C55331C9F60FE5E94AD5B4D3AC8992CB164DDDCE3;
      }
    }
    else
    {
      if ( treasureDvc == ConstantMaster__getValue((System_String_o *)StringLiteral_7018, 0LL) )
      {
        DispLimitCount = sub_B17014(Voice_BATTLE___TypeInfo, 1LL, v27);
        if ( !DispLimitCount )
          goto LABEL_111;
        v31 = DispLimitCount;
        if ( !*(_DWORD *)(DispLimitCount + 24) )
          goto LABEL_112;
        *(_DWORD *)(DispLimitCount + 32) = 252;
LABEL_20:
        v106 = targetIndex;
        if ( *(int *)(v31 + 24) >= 1 )
        {
          v38 = 0;
          v39 = 0LL;
          v40 = v31 + 32;
          while ( 1 )
          {
            svtData = this->fields.svtData;
            if ( !svtData )
              break;
            SvtId = BattleServantData__getSvtId(svtData, 0LL);
            if ( !this->fields.svtData )
              break;
            v43 = SvtId;
            DispLimitCount = BattleServantData__getDispLimitCount(this->fields.svtData, 1, 0LL);
            v44 = this->fields.svtData;
            if ( !v44 )
              break;
            if ( v39 >= *(unsigned int *)(v31 + 24) )
              goto LABEL_112;
            v45 = DispLimitCount;
            overwriteSvtVoiceId = v44->fields.overwriteSvtVoiceId;
            v47 = *(_DWORD *)(v40 + 4 * v39);
            if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            }
            DispLimitCount = ServantAssetLoadManager__ExistsBattleVoice(v43, v45, overwriteSvtVoiceId, v47, 0LL);
            if ( (DispLimitCount & 1) != 0 )
            {
              ++v38;
            }
            else
            {
              if ( v39 >= *(unsigned int *)(v31 + 24) )
                goto LABEL_112;
              *(_DWORD *)(v40 + 4 * v39) = 0;
            }
            if ( (__int64)++v39 >= *(int *)(v31 + 24) )
              goto LABEL_36;
          }
LABEL_111:
          sub_B170D4();
        }
        v38 = 0;
LABEL_36:
        if ( v38 >= 1 )
        {
          DispLimitCount = sub_B17014(Voice_BATTLE___TypeInfo, (unsigned int)v38, v30);
          v48 = DispLimitCount;
          if ( (int)*(_QWORD *)(v31 + 24) >= 1 )
          {
            v49 = 0LL;
            v50 = 0;
            v51 = *(_QWORD *)(v31 + 24);
            while ( v49 < v51 )
            {
              v52 = *(_DWORD *)(v31 + 32 + 4 * v49);
              if ( v52 )
              {
                if ( !DispLimitCount )
                  goto LABEL_111;
                if ( v50 >= *(_DWORD *)(DispLimitCount + 24) )
                  goto LABEL_112;
                *(_DWORD *)(DispLimitCount + 4LL * (int)v50 + 32) = v52;
                v51 = *(_DWORD *)(v31 + 24);
                ++v50;
              }
              if ( (__int64)++v49 >= (int)v51 )
                goto LABEL_45;
            }
            goto LABEL_112;
          }
LABEL_45:
          if ( !DispLimitCount )
            goto LABEL_111;
          v53 = UnityEngine_Random__Range_34843248(0, *(_DWORD *)(DispLimitCount + 24), 0LL);
          v54 = this->fields.data;
          if ( !v54 )
            goto LABEL_111;
          v55 = v53;
          v56 = *(_DWORD *)(v48 + 24);
          uniqueId = v54->fields.uniqueId;
          if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          }
          DispLimitCount = (__int64)ServantAssetLoadManager__GetLastVoiceType(uniqueId, 0LL);
          if ( v55 >= *(_DWORD *)(v48 + 24) )
            goto LABEL_112;
          v58 = (System_String_o *)DispLimitCount;
          v59 = *(_DWORD *)(v48 + 4LL * (int)v55 + 32);
          if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
          v60 = Voice__getFileName(v59, 0LL);
          if ( System_String__op_Equality(v58, v60, 0LL) )
            v55 = (int)(v55 + 1) % v56;
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_111;
          DispLimitCount = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoiceMaster___);
          v62 = this->fields.data;
          if ( !v62 )
            goto LABEL_111;
          if ( v55 >= *(_DWORD *)(v48 + 24) )
            goto LABEL_112;
          v63 = v48 + 4LL * (int)v55;
          v64 = (VoiceMaster_o *)DispLimitCount;
          v65 = v62->fields.svtId;
          v68 = *(_DWORD *)(v63 + 32);
          v67 = (int32_t *)(v63 + 32);
          v66 = v68;
          if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
          v69 = Voice__getFileName(v66, 0LL);
          v70 = System_String__Concat_43743732((System_String_o *)StringLiteral_15842, v69, 0LL);
          if ( !v64 )
            goto LABEL_111;
          FlagRequestNumber = VoiceMaster__getFlagRequestNumber(v64, v65, v70, 0, 0LL);
          if ( FlagRequestNumber )
          {
            v73 = this->fields.svtData;
            if ( !v73 )
              goto LABEL_111;
            if ( !v73->fields.followerType )
            {
              perf = this->fields.perf;
              if ( !perf )
                goto LABEL_111;
              v75 = this->fields.data;
              if ( !v75 )
                goto LABEL_111;
              v76 = FlagRequestNumber;
              v77 = perf->fields.data;
              if ( !v77 )
                goto LABEL_111;
              BattleData__AddServantVoicePlayed_18712544(v77, v75->fields.svtId, v76, 0, v72);
            }
          }
          v78 = this->fields.svtData;
          if ( !v78 )
            goto LABEL_111;
          v79 = this->fields.perf;
          if ( !v79 )
            goto LABEL_111;
          ServantActor = BattlePerformance__getServantActor(v79, v78->fields.uniqueId, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ServantActor, 0LL, 0LL) )
          {
            if ( !ServantActor )
              goto LABEL_111;
            if ( !BattleActorControl__isNoVoice(ServantActor, 0LL) )
            {
              v81 = this->fields.svtData;
              if ( !v81 )
                goto LABEL_111;
              v82 = BattleServantData__getSvtId(v81, 0LL);
              if ( !this->fields.svtData )
                goto LABEL_111;
              v83 = v82;
              DispLimitCount = BattleServantData__getDispLimitCount(this->fields.svtData, 1, 0LL);
              v84 = this->fields.svtData;
              if ( !v84 )
                goto LABEL_111;
              if ( v55 >= *(_DWORD *)(v48 + 24) )
                goto LABEL_112;
              v85 = DispLimitCount;
              v86 = v84->fields.overwriteSvtVoiceId;
              v87 = *v67;
              if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
              v88 = Voice__getFileName(v87, 0LL);
              v89 = this->fields.data;
              if ( !v89 )
                goto LABEL_111;
              v90 = v88;
              v91 = v89->fields.uniqueId;
              if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
              }
              ServantAssetLoadManager__playBattleVoice(v83, v85, v86, v90, 1.0, 0LL, v91, 0, 0LL);
            }
          }
        }
        v92 = this->fields.data;
        if ( !v92 )
          goto LABEL_111;
        v93 = (System_String_o *)StringLiteral_18179;
        if ( BattleCommandData__get_type(v92, v29) == 3 )
        {
          v109 = v106 + 1;
          v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v109);
          v96 = &StringLiteral_21504;
        }
        else
        {
          v97 = this->fields.data;
          if ( !v97 )
            goto LABEL_111;
          if ( BattleCommandData__get_type(v97, v94) == 1 )
          {
            v108 = v106 + 1;
            v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v108);
            v96 = &StringLiteral_16155;
          }
          else
          {
            v99 = this->fields.data;
            if ( !v99 )
              goto LABEL_111;
            if ( BattleCommandData__get_type(v99, v98) != 2 )
            {
LABEL_100:
              nomalwidget = (UnityEngine_Component_o *)this->fields.nomalwidget;
              if ( !nomalwidget )
                goto LABEL_111;
              effectobj = this->fields.effectobj;
              transform = UnityEngine_Component__get_transform(nomalwidget, 0LL);
              DispLimitCount = (__int64)BaseMonoBehaviour__createObject_19257936(
                                          (BaseMonoBehaviour_o *)this,
                                          v93,
                                          transform,
                                          0LL,
                                          0LL);
              if ( !effectobj )
                goto LABEL_111;
              v103 = (UnityEngine_GameObject_o *)DispLimitCount;
              if ( DispLimitCount )
              {
                DispLimitCount = sub_B170BC(DispLimitCount, effectobj->obj.klass->_1.element_class);
                if ( !DispLimitCount )
                {
                  sub_B170F4();
                  sub_B170A0();
                }
              }
              if ( effectobj->max_length > 3 )
              {
                effectobj->m_Items[3] = v103;
                sub_B16F98(&effectobj->m_Items[3], v103);
                v104 = this->fields.perf;
                if ( !v104 )
                  goto LABEL_111;
                v105 = v104->fields.data;
                if ( !v105 )
                  goto LABEL_111;
                if ( !v106 && v105->fields.limitTurnCount >= 1 )
                  BattlePerformance__SetLimitTurnEffectFlag(v104, 0, 0LL);
                return;
              }
LABEL_112:
              sub_B17100(DispLimitCount, v29, v30);
              sub_B170A0();
            }
            v107 = v106 + 1;
            v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v107);
            v96 = &StringLiteral_16483;
          }
        }
        v93 = System_String__Format_43739268(v93, (Il2CppObject *)*v96, v95, 0LL);
        goto LABEL_100;
      }
      v35 = (System_Array_o *)sub_B17014(Voice_BATTLE___TypeInfo, 6LL, v27);
      v36 = &Field__PrivateImplementationDetails__60C743D2B628F1F7EC314A6CCBE8B493B5DD3827572AD9AA7E4B230C7B9919A4;
    }
    v37 = *v36;
    v31 = (__int64)v35;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v35, (System_RuntimeFieldHandle_o)v37, 0LL);
    if ( !v31 )
      goto LABEL_111;
    goto LABEL_20;
  }
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
        sub_B16F98(&this->fields.perf, perf),
        BattleCommandComponent__SetPowerUpCardValue(this, 0, v7),
        (data = comp->fields.data) == 0LL) )
  {
    sub_B170D4();
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
  UnityEngine_Component_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x21
  const MethodInfo *v33; // x1
  BattleCommandData_o *data; // x0
  BuffList_TYPE_array *qabTypes; // x22
  int32_t type; // w0
  System_Int32_array *Individualities; // x23
  BattleBuffData_BuffData_array *ShowCommandBuffListActive; // x0
  System_Collections_Generic_IEnumerable_T__o *BuffList_31020028; // x0
  const MethodInfo *v40; // x1
  BattleCommandData_o *v41; // x0
  BuffList_TYPE_array *v42; // x22
  int32_t v43; // w0
  System_Int32_array *v44; // x23
  BattleBuffData_BuffData_array *ShowCommandBuffListPassive; // x0
  System_Collections_Generic_IEnumerable_T__o *v46; // x0
  const MethodInfo *v47; // x1
  struct BattleCommandData_o *v48; // x0
  BuffList_TYPE_array *tdTypes; // x22
  BattleBuffData_BuffData_array *v50; // x0
  System_Collections_Generic_IEnumerable_T__o *v51; // x0
  struct BuffList_TYPE_array *v52; // x22
  BattleBuffData_BuffData_array *v53; // x3
  BattleBuffData_o *v54; // x0
  BuffList_TYPE_array *v55; // x1
  System_Int32_array *v56; // x2
  UnityEngine_Component_o *buffRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  BuffList_TYPE_array *noneTdQabTypes; // x22
  int32_t v60; // w0
  System_Int32_array *v61; // x23
  BattleBuffData_BuffData_array *v62; // x0
  System_Collections_Generic_IEnumerable_T__o *v63; // x0
  const MethodInfo *v64; // x1
  BattleCommandData_o *v65; // x0
  struct BuffList_TYPE_array *v66; // x22
  int32_t v67; // w0
  System_Int32_array *v68; // x23
  System_Collections_Generic_IEnumerable_T__o *v69; // x0
  BuffList_TYPE_array *otherTypes; // x22
  BattleBuffData_BuffData_array *v71; // x0
  System_Collections_Generic_IEnumerable_T__o *v72; // x0
  BuffList_TYPE_array *v73; // x22
  BattleBuffData_BuffData_array *v74; // x0
  System_Collections_Generic_IEnumerable_T__o *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v80; // x20
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v85; // x20
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v90; // x20
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  System_Collections_Generic_List_int__o *v95; // x20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  WarEntity_o *Entity; // x0
  WarEntity_o *v99; // x21
  __int64 v100; // x0
  __int64 v101; // x1
  __int64 v102; // x2
  struct BattleServantBuffIconComponent_array *buffIconList; // x8
  unsigned __int64 v104; // x22
  unsigned __int64 max_length; // x9
  signed __int64 size; // x9
  Il2CppClass **v107; // x8
  Il2CppClass *v108; // x21
  BattleServantBuffIconComponent_o *v109; // x0
  int32_t v110; // w1
  System_Collections_Generic_List_Enumerator_T__o v111; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v112; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F6993 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleCommandComponent__setBuffIconList_b__136_0__, buffData);
    sub_B16FFC(&Method_BattleCommandComponent__setBuffIconList_b__136_1__, v5);
    sub_B16FFC(&Method_BattleCommandComponent__setBuffIconList_b__136_2__, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v22);
    sub_B16FFC(&Method_System_Predicate_BattleBuffData_BuffData___ctor__, v23);
    sub_B16FFC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    byte_40F6993 = 1;
  }
  memset(&v112, 0, sizeof(v112));
  if ( !buffData || !this->fields.data )
  {
    buffRoot = (UnityEngine_Component_o *)this->fields.buffRoot;
    if ( buffRoot )
    {
      gameObject = UnityEngine_Component__get_gameObject(buffRoot, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        return;
      }
    }
    goto LABEL_40;
  }
  v26 = (UnityEngine_Component_o *)this->fields.buffRoot;
  if ( !v26 )
    goto LABEL_40;
  v27 = UnityEngine_Component__get_gameObject(v26, 0LL);
  if ( !v27 )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive(v27, 1, 0LL);
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  v28,
                                                                                                  v29,
                                                                                                  v30,
                                                                                                  v31);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_40;
  qabTypes = this->fields.qabTypes;
  type = BattleCommandData__get_type(data, v33);
  Individualities = CardMaster__getIndividualities(type, 1, 0LL);
  ShowCommandBuffListActive = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
  BuffList_31020028 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_31020028(
                                                                       buffData,
                                                                       qabTypes,
                                                                       Individualities,
                                                                       ShowCommandBuffListActive,
                                                                       0LL);
  if ( !v32 )
    goto LABEL_40;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v32,
    BuffList_31020028,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v41 = this->fields.data;
  if ( !v41 )
    goto LABEL_40;
  v42 = this->fields.qabTypes;
  v43 = BattleCommandData__get_type(v41, v40);
  v44 = CardMaster__getIndividualities(v43, 1, 0LL);
  ShowCommandBuffListPassive = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
  v46 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_31020028(
                                                         buffData,
                                                         v42,
                                                         v44,
                                                         ShowCommandBuffListPassive,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v32,
    v46,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v48 = this->fields.data;
  if ( !v48 )
    goto LABEL_40;
  if ( v48->fields.treasureDvc < 1 )
  {
    noneTdQabTypes = this->fields.noneTdQabTypes;
    v60 = BattleCommandData__get_type(v48, v47);
    v61 = CardMaster__getIndividualities(v60, 1, 0LL);
    v62 = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
    v63 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_31020028(
                                                           buffData,
                                                           noneTdQabTypes,
                                                           v61,
                                                           v62,
                                                           0LL);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v32,
      v63,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    v65 = this->fields.data;
    if ( !v65 )
      goto LABEL_40;
    v66 = this->fields.noneTdQabTypes;
    v67 = BattleCommandData__get_type(v65, v64);
    v68 = CardMaster__getIndividualities(v67, 1, 0LL);
    v53 = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
    v54 = buffData;
    v55 = v66;
    v56 = v68;
  }
  else
  {
    tdTypes = this->fields.tdTypes;
    v50 = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
    v51 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_31020028(
                                                           buffData,
                                                           tdTypes,
                                                           0LL,
                                                           v50,
                                                           0LL);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v32,
      v51,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    v52 = this->fields.tdTypes;
    v53 = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
    v54 = buffData;
    v55 = v52;
    v56 = 0LL;
  }
  v69 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_31020028(v54, v55, v56, v53, 0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v32,
    v69,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  otherTypes = this->fields.otherTypes;
  v71 = BattleBuffData__getShowCommandBuffListActive(buffData, 0LL);
  v72 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_31020028(
                                                         buffData,
                                                         otherTypes,
                                                         0LL,
                                                         v71,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v32,
    v72,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v73 = this->fields.otherTypes;
  v74 = BattleBuffData__getShowCommandBuffListPassive(buffData, 0LL);
  v75 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffList_31020028(
                                                         buffData,
                                                         v73,
                                                         0LL,
                                                         v74,
                                                         0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v32,
    v75,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v80 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                   v76,
                                                                   v77,
                                                                   v78,
                                                                   v79);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v80,
    (Il2CppObject *)this,
    Method_BattleCommandComponent__setBuffIconList_b__136_0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v32,
    (System_Predicate_T__o *)v80,
    (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v85 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                   v81,
                                                                   v82,
                                                                   v83,
                                                                   v84);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v85,
    (Il2CppObject *)this,
    Method_BattleCommandComponent__setBuffIconList_b__136_1__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v32,
    (System_Predicate_T__o *)v85,
    (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v90 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_BattleBuffData_BuffData__TypeInfo,
                                                                   v86,
                                                                   v87,
                                                                   v88,
                                                                   v89);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v90,
    (Il2CppObject *)this,
    Method_BattleCommandComponent__setBuffIconList_b__136_2__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleBuffData_BuffData___ctor__);
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v32,
    (System_Predicate_T__o *)v90,
    (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v95 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v91,
                                                    v92,
                                                    v93,
                                                    v94);
  System_Collections_Generic_List_int____ctor(
    v95,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v111,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v32,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v112 = v111;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v112,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    if ( !v112.fields.current )
      sub_B170D4();
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B170D4();
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               MasterData_WarQuestSelectionMaster,
               (int32_t)v112.fields.current[1].klass,
               (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    v99 = Entity;
    if ( !Entity )
      sub_B170D4();
    if ( !v95 )
      sub_B170D4();
    if ( !System_Collections_Generic_List_int___Contains(
            v95,
            (int32_t)Entity->fields.longName,
            (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
      System_Collections_Generic_List_int___Add(
        v95,
        (int32_t)v99->fields.longName,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v112,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  buffIconList = this->fields.buffIconList;
  if ( !buffIconList )
LABEL_40:
    sub_B170D4();
  v104 = 0LL;
  while ( 1 )
  {
    max_length = buffIconList->max_length;
    if ( (__int64)v104 >= (int)max_length )
      break;
    if ( !v95 )
      goto LABEL_40;
    if ( v104 >= max_length )
    {
      sub_B17100(v100, v101, v102);
      sub_B170A0();
    }
    size = v95->fields._size;
    v107 = &buffIconList->obj.klass + v104;
    v108 = v107[4];
    if ( (__int64)v104 >= size )
    {
      if ( !v108 )
        goto LABEL_40;
      v109 = (BattleServantBuffIconComponent_o *)v107[4];
      v110 = 0;
    }
    else
    {
      if ( v104 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !v108 )
        goto LABEL_40;
      v109 = (BattleServantBuffIconComponent_o *)v107[4];
      v110 = v95->fields._items->m_Items[v104 + 1];
    }
    BattleServantBuffIconComponent__setImageId(v109, v110, 0LL);
    buffIconList = this->fields.buffIconList;
    ++v104;
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
    sub_B170D4();
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
  const MethodInfo *v15; // x1
  struct UnityEngine_GameObject_array *effectobj; // x8
  bool v17; // w25
  bool v18; // w21
  _BOOL8 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  struct UnityEngine_GameObject_array *v22; // x8
  struct UnityEngine_GameObject_array **p_effectobj; // x26
  __int64 v24; // x28
  unsigned __int64 max_length; // x9
  unsigned __int64 v26; // x23
  UnityEngine_Object_o *v27; // x27
  struct UnityEngine_GameObject_array *v28; // x8
  Spawner_o *spawner; // x0
  struct UnityEngine_GameObject_array *v30; // x8
  UnityEngine_Object_o *v31; // x27
  __int64 v32; // x0
  const MethodInfo *v33; // x6
  BattleServantData_o *v34; // x1
  BattleBuffData_o *buffData; // x0
  TreasureDvcEntity_o *TreasureDevice; // x0
  BattleServantData_o *v37; // x1
  BattleBuffData_o *v38; // x0
  struct BattleCommandData_o *v39; // x22
  BattleBuffData_BuffData_o *v40; // x0
  const MethodInfo *v41; // x2
  struct BattleCommandData_o *data; // x8
  UnityEngine_GameObject_o *criticalObject; // x0
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x4
  int32_t commandCardParam; // w1
  BattleCommandComponent_o *v48; // x0
  BattleServantData_o **p_svtData; // [xsp+0h] [xbp-60h]
  bool v50; // [xsp+Ch] [xbp-54h]
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F6984 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, indata);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40F6984 = 1;
  }
  p_data = &this->fields.data;
  this->fields.data = indata;
  sub_B16F98(&this->fields.data, indata);
  this->fields.svtData = insvtData;
  p_svtData = &this->fields.svtData;
  sub_B16F98(&this->fields.svtData, insvtData);
  effectobj = this->fields.effectobj;
  this->fields.selectflg = 0;
  if ( !effectobj )
    goto LABEL_25;
  v50 = isAttack;
  v17 = isTDTypeChangeWindow;
  v18 = isShowBuffIcon;
  BattleCommandComponent__DestroyEffectObject1(this, v15);
  v22 = this->fields.effectobj;
  if ( !v22 )
    goto LABEL_25;
  p_effectobj = &this->fields.effectobj;
  v24 = 4LL;
  while ( 1 )
  {
    max_length = v22->max_length;
    v26 = v24 - 4;
    if ( v24 - 4 >= (int)max_length )
      break;
    if ( v26 >= max_length )
      goto LABEL_49;
    v27 = (UnityEngine_Object_o *)*((_QWORD *)&v22->obj.klass + v24);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v19 = UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
    if ( v19 )
    {
      if ( v26 < 5 )
      {
        v30 = *p_effectobj;
        if ( !*p_effectobj )
          goto LABEL_25;
        if ( v26 >= v30->max_length )
        {
LABEL_49:
          sub_B17100(v19, v20, v21);
          sub_B170A0();
        }
        v31 = (UnityEngine_Object_o *)*((_QWORD *)&v30->obj.klass + v24);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(v31, 0LL);
      }
      else if ( v24 == 9 )
      {
        v28 = this->fields.effectobj;
        if ( !v28 )
          goto LABEL_25;
        if ( (*(_QWORD *)&v28->max_length & 0xFFFFFFFEuLL) <= 5 )
          goto LABEL_49;
        spawner = this->fields.spawner;
        if ( !spawner )
          goto LABEL_25;
        Spawner__Despawn(spawner, v28->m_Items[5], 1, 0LL);
      }
    }
    v22 = *p_effectobj;
    ++v24;
    if ( !*p_effectobj )
      goto LABEL_25;
  }
  v32 = sub_B17014(UnityEngine_GameObject___TypeInfo, v22->max_length, v21);
  *p_effectobj = (struct UnityEngine_GameObject_array *)v32;
  sub_B16F98(&this->fields.effectobj, v32);
  if ( *p_data )
  {
    if ( (*p_data)->fields.treasureDvc >= 1 )
    {
      v34 = *p_svtData;
      if ( *p_svtData )
      {
        buffData = v34->fields.buffData;
        if ( buffData )
        {
          if ( BattleBuffData__isTDTypeChange(buffData, v34, 0LL) )
          {
            if ( !*p_svtData )
              goto LABEL_25;
            TreasureDevice = BattleServantData__get_TreasureDevice(*p_svtData, 0LL);
            if ( !TreasureDevice )
              goto LABEL_25;
            if ( TreasureDvcEntity__IsTDTypeChange(TreasureDevice, 0LL) && !v17 )
            {
              v37 = *p_svtData;
              if ( !*p_svtData )
                goto LABEL_25;
              v38 = v37->fields.buffData;
              if ( !v38 )
                goto LABEL_25;
              v39 = *p_data;
              v40 = BattleBuffData__getTDTypeChangeBuffData(v38, v37, 0LL);
              if ( !v40 || !v39 )
                goto LABEL_25;
              v39->fields._type = v40->fields.param;
            }
          }
        }
      }
    }
  }
  BattleCommandComponent__updateView(this, 1, v50, v18, v17, 0, v33);
  data = this->fields.data;
  if ( !data || data->fields.starcount < 10 || !this->fields.isCountUp )
    goto LABEL_45;
  criticalObject = this->fields.criticalObject;
  if ( !criticalObject )
LABEL_25:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(criticalObject, 1, 0LL);
LABEL_45:
  v51.fields.r = 0.0;
  v51.fields.g = 0.0;
  v51.fields.b = 0.0;
  v51.fields.a = 0.0;
  BattleCommandComponent__SetCommandCodeActive(this, v51, 1, v41);
  v52.fields.r = 0.0;
  v52.fields.g = 0.0;
  v52.fields.b = 0.0;
  v52.fields.a = 0.0;
  BattleCommandComponent__SetCommandAssistActive(this, v52, 1, v44);
  if ( indata )
  {
    BattleCommandComponent__SetPowerUpCardValue(this, indata->fields.commandCardParam, v45);
    commandCardParam = indata->fields.commandCardParam;
    v48 = this;
  }
  else
  {
    BattleCommandComponent__SetPowerUpCardValue(this, 0, v45);
    v48 = this;
    commandCardParam = 0;
  }
  BattleCommandComponent__SetPowerUpCardIcon(v48, commandCardParam, 2, 1, v46);
}


void __fastcall BattleCommandComponent__setData_18690736(
        BattleCommandComponent_o *this,
        BattleServantData_o *svtData,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x22
  __int64 v14; // x23
  __int64 v15; // x24
  int32_t v16; // w0
  WarEntity_o *Entity; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x8
  int32_t v21; // w22
  __int64 v22; // x23
  __int64 v23; // x24
  int32_t v24; // w24
  int32_t CommandDispLimitCount; // w25
  int32_t CommandImageSvtId; // w26
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  BattleCommandData_o *v31; // x23
  const MethodInfo *v32; // x5
  const MethodInfo *v33; // x3
  struct BattleBuffData_o *buffData; // x1
  const MethodInfo *v35; // x6
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_40F6988 & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandData_TypeInfo, svtData);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40F6988 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svtData )
    goto LABEL_18;
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v15 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v36.fields.currentCryptoKey = v15;
  *(_QWORD *)&v36.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v36, 0LL);
  if ( !v13 )
    goto LABEL_18;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v13,
             v16,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity )
  {
    v20 = *(_QWORD *)&Entity[1].fields.id;
    if ( v20 )
    {
      if ( *(_DWORD *)(v20 + 24) <= (unsigned int)index )
      {
        sub_B17100(Entity, v18, v19);
        sub_B170A0();
      }
      v21 = *(_DWORD *)(v20 + 4LL * index + 32);
      v23 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
      v22 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v37.fields.currentCryptoKey = v23;
      *(_QWORD *)&v37.fields.fakeValue = v22;
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v37, 0LL);
      CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(svtData, 0LL);
      CommandImageSvtId = BattleServantData__GetCommandImageSvtId(svtData, 0LL);
      v31 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, v27, v28, v29, v30);
      BattleCommandData___ctor_18691260(v31, v21, v24, CommandDispLimitCount, CommandImageSvtId, v32);
      if ( v31 )
      {
        BattleCommandData__SetCommandCardParam(v31, svtData->fields.commandCardParam, index, v33);
        buffData = svtData->fields.buffData;
        v31->fields.battleBuffData = buffData;
        sub_B16F98(&v31->fields.battleBuffData, buffData);
        v31->fields.servantCardIdsIndex = index;
        BattleCommandComponent__setData(this, v31, svtData, 0, 1, 0, v35);
        return;
      }
    }
LABEL_18:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__setDepth(
        BattleCommandComponent_o *this,
        int32_t basedepth,
        const MethodInfo *method)
{
  UIWidget_o *bg; // x0
  UIWidget_o *facetex; // x0
  UIWidget_o *icon; // x0
  UIWidget_o *text; // x0
  UIWidget_o *nobletex; // x0
  UIWidget_o *codeTexture; // x0
  UIWidget_o *codeSprite; // x0
  int32_t v12; // w22
  UIWidget_o *chargeTurnLabel; // x0
  int32_t v14; // w21
  UIWidget_o *remainingTurnLabel; // x0
  UnityEngine_Object_o *assistSprite; // x23
  UIWidget_o *v17; // x0
  UnityEngine_Object_o *assistChargeTurnLabel; // x23
  UIWidget_o *v19; // x0
  UnityEngine_Object_o *assistRemainingTurnLabel; // x23
  UIWidget_o *v21; // x0
  UIWidget_o *sealedSprite; // x0
  int32_t v23; // w23
  UIWidget_o *donotactSprite; // x0
  UnityEngine_Object_o *donotsleepSprite; // x24
  UIWidget_o *v26; // x0
  UnityEngine_Object_o *donotPermanentSleep; // x24
  UIWidget_o *v28; // x0
  UnityEngine_Object_o *unusableShortageStarSprite; // x24
  UIWidget_o *v30; // x0
  UnityEngine_Object_o *unusableNpSprite; // x24
  UIWidget_o *v32; // x0
  UnityEngine_Object_o *donotActTypeSprite; // x24
  UIWidget_o *v34; // x0
  UnityEngine_Object_o *donotActWithTypeSp; // x24
  UIWidget_o *v36; // x0
  UnityEngine_Object_o *treasureDeviceErrorSprite; // x24
  UIWidget_o *v38; // x0
  UIWidget_o *friendIcon; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  struct BattleServantBuffIconComponent_array *buffIconList; // x22
  int max_length; // w8
  unsigned int v45; // w23
  BattleServantBuffIconComponent_o *v46; // x8
  UIWidget_o *iconSprite; // x0
  UnityEngine_Object_o *powerUpCardValue; // x21
  UIWidget_o *v49; // x0
  UnityEngine_Object_o *powerUpCardIcon; // x21
  UIWidget_o *v51; // x0
  UnityEngine_Object_o *nowTreasureDeviceTypeImage; // x21
  UIWidget_o *v53; // x0
  UnityEngine_Object_o *restTreasureDeviceChangeTurnLabel; // x21
  UIWidget_o *v55; // x0

  if ( (byte_40F6982 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&basedepth);
    byte_40F6982 = 1;
  }
  bg = (UIWidget_o *)this->fields.bg;
  if ( !bg )
    goto LABEL_107;
  UIWidget__set_depth(bg, basedepth + 1, 0LL);
  facetex = (UIWidget_o *)this->fields.facetex;
  if ( !facetex )
    goto LABEL_107;
  UIWidget__set_depth(facetex, basedepth + 2, 0LL);
  icon = (UIWidget_o *)this->fields.icon;
  if ( !icon )
    goto LABEL_107;
  UIWidget__set_depth(icon, basedepth + 3, 0LL);
  text = (UIWidget_o *)this->fields.text;
  if ( !text )
    goto LABEL_107;
  UIWidget__set_depth(text, basedepth + 4, 0LL);
  nobletex = (UIWidget_o *)this->fields.nobletex;
  if ( !nobletex )
    goto LABEL_107;
  UIWidget__set_depth(nobletex, basedepth + 5, 0LL);
  codeTexture = (UIWidget_o *)this->fields.codeTexture;
  if ( !codeTexture )
    goto LABEL_107;
  UIWidget__set_depth(codeTexture, basedepth + 6, 0LL);
  codeSprite = (UIWidget_o *)this->fields.codeSprite;
  if ( !codeSprite )
    goto LABEL_107;
  v12 = basedepth + 7;
  UIWidget__set_depth(codeSprite, basedepth + 7, 0LL);
  chargeTurnLabel = (UIWidget_o *)this->fields.chargeTurnLabel;
  if ( !chargeTurnLabel )
    goto LABEL_107;
  v14 = basedepth + 11;
  UIWidget__set_depth(chargeTurnLabel, basedepth + 11, 0LL);
  remainingTurnLabel = (UIWidget_o *)this->fields.remainingTurnLabel;
  if ( !remainingTurnLabel )
    goto LABEL_107;
  UIWidget__set_depth(remainingTurnLabel, v14, 0LL);
  assistSprite = (UnityEngine_Object_o *)this->fields.assistSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(assistSprite, 0LL, 0LL) )
  {
    v17 = (UIWidget_o *)this->fields.assistSprite;
    if ( !v17 )
      goto LABEL_107;
    UIWidget__set_depth(v17, v12, 0LL);
  }
  assistChargeTurnLabel = (UnityEngine_Object_o *)this->fields.assistChargeTurnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(assistChargeTurnLabel, 0LL, 0LL) )
  {
    v19 = (UIWidget_o *)this->fields.assistChargeTurnLabel;
    if ( !v19 )
      goto LABEL_107;
    UIWidget__set_depth(v19, v14, 0LL);
  }
  assistRemainingTurnLabel = (UnityEngine_Object_o *)this->fields.assistRemainingTurnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(assistRemainingTurnLabel, 0LL, 0LL) )
  {
    v21 = (UIWidget_o *)this->fields.assistRemainingTurnLabel;
    if ( !v21 )
      goto LABEL_107;
    UIWidget__set_depth(v21, v14, 0LL);
  }
  sealedSprite = (UIWidget_o *)this->fields.sealedSprite;
  if ( !sealedSprite )
    goto LABEL_107;
  v23 = basedepth + 9;
  UIWidget__set_depth(sealedSprite, basedepth + 9, 0LL);
  donotactSprite = (UIWidget_o *)this->fields.donotactSprite;
  if ( !donotactSprite )
    goto LABEL_107;
  UIWidget__set_depth(donotactSprite, v23, 0LL);
  donotsleepSprite = (UnityEngine_Object_o *)this->fields.donotsleepSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(donotsleepSprite, 0LL, 0LL) )
  {
    v26 = (UIWidget_o *)this->fields.donotsleepSprite;
    if ( !v26 )
      goto LABEL_107;
    UIWidget__set_depth(v26, v23, 0LL);
  }
  donotPermanentSleep = (UnityEngine_Object_o *)this->fields.donotPermanentSleep;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(donotPermanentSleep, 0LL, 0LL) )
  {
    v28 = (UIWidget_o *)this->fields.donotPermanentSleep;
    if ( !v28 )
      goto LABEL_107;
    UIWidget__set_depth(v28, v23, 0LL);
  }
  unusableShortageStarSprite = (UnityEngine_Object_o *)this->fields.unusableShortageStarSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(unusableShortageStarSprite, 0LL, 0LL) )
  {
    v30 = (UIWidget_o *)this->fields.unusableShortageStarSprite;
    if ( !v30 )
      goto LABEL_107;
    UIWidget__set_depth(v30, v23, 0LL);
  }
  unusableNpSprite = (UnityEngine_Object_o *)this->fields.unusableNpSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(unusableNpSprite, 0LL, 0LL) )
  {
    v32 = (UIWidget_o *)this->fields.unusableNpSprite;
    if ( !v32 )
      goto LABEL_107;
    UIWidget__set_depth(v32, v23, 0LL);
  }
  donotActTypeSprite = (UnityEngine_Object_o *)this->fields.donotActTypeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(donotActTypeSprite, 0LL, 0LL) )
  {
    v34 = (UIWidget_o *)this->fields.donotActTypeSprite;
    if ( !v34 )
      goto LABEL_107;
    UIWidget__set_depth(v34, basedepth + 10, 0LL);
  }
  donotActWithTypeSp = (UnityEngine_Object_o *)this->fields.donotActWithTypeSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(donotActWithTypeSp, 0LL, 0LL) )
  {
    v36 = (UIWidget_o *)this->fields.donotActWithTypeSp;
    if ( !v36 )
      goto LABEL_107;
    UIWidget__set_depth(v36, v23, 0LL);
  }
  treasureDeviceErrorSprite = (UnityEngine_Object_o *)this->fields.treasureDeviceErrorSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(treasureDeviceErrorSprite, 0LL, 0LL) )
  {
    v38 = (UIWidget_o *)this->fields.treasureDeviceErrorSprite;
    if ( !v38 )
      goto LABEL_107;
    UIWidget__set_depth(v38, v23, 0LL);
  }
  GameObjectHelper__addNguiDepth(this->fields.criticalObject, v12, 1, 0LL);
  friendIcon = (UIWidget_o *)this->fields.friendIcon;
  if ( !friendIcon
    || (UIWidget__set_depth(friendIcon, basedepth + 10, 0LL), (buffIconList = this->fields.buffIconList) == 0LL) )
  {
LABEL_107:
    sub_B170D4();
  }
  max_length = buffIconList->max_length;
  if ( max_length >= 1 )
  {
    v45 = 0;
    do
    {
      if ( v45 >= max_length )
      {
        sub_B17100(v40, v41, v42);
        sub_B170A0();
      }
      v46 = buffIconList->m_Items[v45];
      if ( !v46 )
        goto LABEL_107;
      iconSprite = (UIWidget_o *)v46->fields.iconSprite;
      if ( !iconSprite )
        goto LABEL_107;
      UIWidget__set_depth(iconSprite, v14, 0LL);
      max_length = buffIconList->max_length;
    }
    while ( (int)++v45 < max_length );
  }
  powerUpCardValue = (UnityEngine_Object_o *)this->fields.powerUpCardValue;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(powerUpCardValue, 0LL, 0LL) )
  {
    v49 = (UIWidget_o *)this->fields.powerUpCardValue;
    if ( !v49 )
      goto LABEL_107;
    UIWidget__set_depth(v49, basedepth + 8, 0LL);
  }
  powerUpCardIcon = (UnityEngine_Object_o *)this->fields.powerUpCardIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(powerUpCardIcon, 0LL, 0LL) )
  {
    v51 = (UIWidget_o *)this->fields.powerUpCardIcon;
    if ( !v51 )
      goto LABEL_107;
    UIWidget__set_depth(v51, basedepth + 8, 0LL);
  }
  nowTreasureDeviceTypeImage = (UnityEngine_Object_o *)this->fields.nowTreasureDeviceTypeImage;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nowTreasureDeviceTypeImage, 0LL, 0LL) )
  {
    v53 = (UIWidget_o *)this->fields.nowTreasureDeviceTypeImage;
    if ( !v53 )
      goto LABEL_107;
    UIWidget__set_depth(v53, basedepth + 12, 0LL);
  }
  restTreasureDeviceChangeTurnLabel = (UnityEngine_Object_o *)this->fields.restTreasureDeviceChangeTurnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(restTreasureDeviceChangeTurnLabel, 0LL, 0LL) )
  {
    v55 = (UIWidget_o *)this->fields.restTreasureDeviceChangeTurnLabel;
    if ( !v55 )
      goto LABEL_107;
    UIWidget__set_depth(v55, basedepth + 13, 0LL);
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
  sub_B16F98(&this->fields.perf, inPerf);
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

  effectobj = this->fields.effectobj;
  if ( !effectobj )
    sub_B170D4();
  if ( stamp )
  {
    this = (BattleCommandComponent_o *)sub_B170BC(stamp, effectobj->obj.klass->_1.element_class);
    if ( !this )
    {
      sub_B170F4();
      sub_B170A0();
    }
  }
  if ( effectobj->max_length <= 5 )
  {
    sub_B17100(this, stamp, method);
    sub_B170A0();
  }
  effectobj->m_Items[5] = stamp;
  sub_B16F98(&effectobj->m_Items[5], stamp);
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
  __int64 v11; // x3
  __int64 v12; // x4
  UnityEngine_Material_o *v13; // x19

  if ( (byte_40F6981 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Material_TypeInfo, shaderName);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F6981 = 1;
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
    v13 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v9, v10, v11, v12);
    UnityEngine_Material___ctor(v13, v8, 0LL);
    if ( !v7 )
      sub_B170D4();
    ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v7->klass->vtable._25_set_material.method)(
      v7,
      v13,
      v7->klass->vtable._26_get_mainTexture.methodPtr);
  }
}


void __fastcall BattleCommandComponent__setTarget(
        BattleCommandComponent_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  this->fields.target = target;
  sub_B16F98(&this->fields.target, target);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__setTouchFlg(BattleCommandComponent_o *this, bool flg, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Collider_o *Component_WebViewObject; // x20

  if ( (byte_40F69A4 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, flg);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F69A4 = 1;
  }
  Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    if ( !Component_WebViewObject )
      sub_B170D4();
    UnityEngine_Collider__set_enabled(Component_WebViewObject, flg, 0LL);
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
  __int64 v3; // x1
  struct BattleCommandData_o *data; // x8
  UnityEngine_GameObject_o *criticalObject; // x0
  DrumRollLabel_o *criticallabel; // x0
  DrumRollLabel_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  struct BattleCommandData_o *v12; // x8
  DrumRollLabel_o *v13; // x20
  int32_t v14; // w21
  DrumRollLabel_CompleteEventHandler_o *v15; // x22

  if ( (byte_40F6997 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleCommandComponent_compCriticallabel__, method);
    sub_B16FFC(&DrumRollLabel_CompleteEventHandler_TypeInfo, v3);
    byte_40F6997 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  criticalObject = this->fields.criticalObject;
  if ( data->fields.starcount <= 0 )
  {
    if ( criticalObject )
    {
      UnityEngine_GameObject__SetActive(criticalObject, 0, 0LL);
      return;
    }
LABEL_15:
    sub_B170D4();
  }
  if ( !criticalObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(criticalObject, 1, 0LL);
  criticallabel = this->fields.criticallabel;
  this->fields.isCountUp = 1;
  if ( !criticallabel )
    goto LABEL_15;
  DrumRollLabel__setParam(criticallabel, 0, 0LL);
  v7 = this->fields.criticallabel;
  if ( !v7 )
    goto LABEL_15;
  DrumRollLabel__ChangeParamNonAnimation(v7, 0, 1, 0LL);
  v12 = this->fields.data;
  v13 = this->fields.criticallabel;
  v14 = v12 ? this->fields.boostedCriticalRate + v12->fields.starcount / 10 : 0;
  v15 = (DrumRollLabel_CompleteEventHandler_o *)sub_B170CC(
                                                  DrumRollLabel_CompleteEventHandler_TypeInfo,
                                                  v8,
                                                  v9,
                                                  v10,
                                                  v11);
  DrumRollLabel_CompleteEventHandler___ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattleCommandComponent_compCriticallabel__,
    0LL);
  if ( !v13 )
    goto LABEL_15;
  DrumRollLabel__changeParam(v13, v14, 1, v15, 0.0, 0LL);
}


void __fastcall BattleCommandComponent__startMoveFloat(BattleCommandComponent_o *this, const MethodInfo *method)
{
  float v3; // s0
  const MethodInfo *v4; // x2

  if ( (byte_40F698F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16278, method);
    byte_40F698F = 1;
  }
  v3 = UnityEngine_Random__Range(0.0, 0.2, 0LL);
  BattleCommandComponent__PlayAnimation(this, (System_String_o *)StringLiteral_16278, v3, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__stopAnimation(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  SimpleAnimation_o *Component_WebViewObject; // x21
  UnityEngine_Animation_o *v6; // x20
  UnityEngine_Component_o *nomalwidget; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x20
  int v10; // s0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v17; // x20
  struct UnityEngine_GameObject_array *v18; // x8
  UnityEngine_Object_o *v19; // x19

  if ( (byte_40F6990 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F6990 = 1;
  }
  Component_WebViewObject = (SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v6 = (UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    if ( !Component_WebViewObject )
      goto LABEL_31;
    SimpleAnimation__Stop(Component_WebViewObject, 0LL);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL) )
    {
      if ( !v6 )
        goto LABEL_31;
      UnityEngine_Animation__Stop(v6, 0LL);
    }
  }
  nomalwidget = (UnityEngine_Component_o *)this->fields.nomalwidget;
  if ( !nomalwidget
    || (gameObject = UnityEngine_Component__get_gameObject(nomalwidget, 0LL)) == 0LL
    || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL),
        *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v10, 0LL),
        (effectobj = this->fields.effectobj) == 0LL) )
  {
LABEL_31:
    sub_B170D4();
  }
  if ( effectobj->max_length <= 2 )
    goto LABEL_32;
  v17 = (UnityEngine_Object_o *)effectobj->m_Items[2];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
  if ( v13 )
  {
    v18 = this->fields.effectobj;
    if ( v18 )
    {
      if ( v18->max_length > 2 )
      {
        v19 = (UnityEngine_Object_o *)v18->m_Items[2];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__DestroyImmediate_34809676(v19, 0LL);
        return;
      }
LABEL_32:
      sub_B17100(v13, v14, v15);
      sub_B170A0();
    }
    goto LABEL_31;
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

  v3 = this;
  if ( (byte_40F6994 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F6994 = 1;
  }
  effectobj = v3->fields.effectobj;
  if ( !effectobj )
    goto LABEL_18;
  if ( effectobj->max_length <= 4 )
    goto LABEL_19;
  v5 = (UnityEngine_Object_o *)effectobj->m_Items[4];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v3->fields.effectobj;
    if ( v6 )
    {
      if ( v6->max_length <= 4 )
        goto LABEL_19;
      v7 = (UnityEngine_Object_o *)v6->m_Items[4];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v7, 0LL);
      this = (BattleCommandComponent_o *)v3->fields.effectobj;
      if ( this )
      {
        if ( LODWORD(this->fields.objectRoot) > 4 )
        {
          this->fields.nobletex = 0LL;
          sub_B16F98(&this->fields.nobletex, 0LL);
          return;
        }
LABEL_19:
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
    }
LABEL_18:
    sub_B170D4();
  }
}


void __fastcall BattleCommandComponent__transformSvtFace(
        BattleCommandComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct BattleCommandData_o *data; // x21
  struct BattleCommandData_o *v7; // x21
  int32_t CommandImageSvtId; // w0
  struct BattleCommandData_o *v9; // x21
  int32_t CommandDispLimitCount; // w0
  struct BattleCommandData_o *v11; // x21
  int32_t DispLimitCount; // w0
  const MethodInfo *v13; // x1
  BattleCommandData_o *v14; // x0
  int32_t type; // w0
  UnityEngine_Behaviour_o **p_facetex; // x19
  UITexture_o *facetex; // x21
  struct BattleCommandData_o *v18; // x8
  int32_t imageSvtId; // w20
  int32_t svtlimit; // w22
  int32_t loadsvtLimit; // w23
  UITexture_o *Manager__loadCommandCard; // x0
  UnityEngine_Object_o *v23; // x20

  if ( (byte_40F698B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, svtData);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v5);
    byte_40F698B = 1;
  }
  data = this->fields.data;
  if ( data )
  {
    if ( !svtData )
      goto LABEL_31;
    if ( svtData->fields.uniqueId == data->fields.uniqueId )
    {
      data->fields.svtId = BattleServantData__getSvtId(svtData, 0LL);
      v7 = this->fields.data;
      CommandImageSvtId = BattleServantData__GetCommandImageSvtId(svtData, 0LL);
      if ( !v7 )
        goto LABEL_31;
      v7->fields.imageSvtId = CommandImageSvtId;
      v9 = this->fields.data;
      CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(svtData, 0LL);
      if ( !v9 )
        goto LABEL_31;
      v9->fields.svtlimit = CommandDispLimitCount;
      v11 = this->fields.data;
      DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
      if ( !v11 )
        goto LABEL_31;
      v11->fields._loadsvtLimit = DispLimitCount;
      v14 = this->fields.data;
      if ( !v14 )
        goto LABEL_31;
      type = BattleCommandData__get_type(v14, v13);
      p_facetex = (UnityEngine_Behaviour_o **)&this->fields.facetex;
      facetex = this->fields.facetex;
      if ( type == 5 )
      {
        if ( facetex )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.facetex, 0, 0LL);
          return;
        }
LABEL_31:
        sub_B170D4();
      }
      v18 = this->fields.data;
      if ( !v18 )
        goto LABEL_31;
      imageSvtId = v18->fields.imageSvtId;
      if ( imageSvtId <= 0 )
        imageSvtId = v18->fields.svtId;
      svtlimit = v18->fields.svtlimit;
      if ( v18->fields._loadsvtLimit == -1 )
        loadsvtLimit = v18->fields.svtlimit;
      else
        loadsvtLimit = v18->fields._loadsvtLimit;
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
      *p_facetex = (UnityEngine_Behaviour_o *)Manager__loadCommandCard;
      sub_B16F98(p_facetex, Manager__loadCommandCard);
      v23 = (UnityEngine_Object_o *)*p_facetex;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
      {
        if ( !*p_facetex )
          goto LABEL_31;
        UnityEngine_Behaviour__set_enabled(*p_facetex, 1, 0LL);
        if ( !*p_facetex )
          goto LABEL_31;
        UIWidget__set_height((UIWidget_o *)*p_facetex, 191, 0LL);
        if ( !*p_facetex )
          goto LABEL_31;
        UIWidget__set_width((UIWidget_o *)*p_facetex, 191, 0LL);
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
  UnityEngine_GameObject_o *v10; // x0
  struct UnityEngine_GameObject_array *v11; // x8
  UnityEngine_GameObject_o *v12; // x0
  const MethodInfo *v13; // x2
  struct BattlePerformance_o *perf; // x9
  struct BattleCommandData_o *data; // x8
  BattleData_o *v16; // x0
  BattleServantData_o *ServantData; // x0
  float ShowClassMagnification; // s0
  struct UnityEngine_GameObject_array *v19; // x8
  UnityEngine_GameObject_o *v20; // x0
  struct UnityEngine_GameObject_array *v21; // x8

  v4 = this;
  if ( (byte_40F69AF & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, targetSvt);
    byte_40F69AF = 1;
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
        v10 = v9->m_Items[0];
        if ( !v10 )
          goto LABEL_38;
        UnityEngine_GameObject__SetActive(v10, 0, 0LL);
        v11 = v4->fields.addObjectList;
        if ( !v11 )
          goto LABEL_38;
        if ( v11->max_length <= 1 )
          goto LABEL_39;
        v12 = v11->m_Items[1];
        if ( !v12
          || (UnityEngine_GameObject__SetActive(v12, 0, 0LL), (perf = v4->fields.perf) == 0LL)
          || (data = v4->fields.data) == 0LL
          || (v16 = perf->fields.data) == 0LL
          || (ServantData = BattleData__getServantData(v16, data->fields.uniqueId, v13), !v4->fields.perf) )
        {
LABEL_38:
          sub_B170D4();
        }
        ShowClassMagnification = BattlePerformance__getShowClassMagnification(
                                   v4->fields.perf,
                                   v4->fields.data,
                                   ServantData,
                                   targetSvt,
                                   0LL);
        if ( ShowClassMagnification > 1.0 )
        {
          v19 = v4->fields.addObjectList;
          if ( !v19 )
            goto LABEL_38;
          if ( v19->max_length > 1 )
          {
            v20 = v19->m_Items[1];
            if ( !v20 )
              goto LABEL_38;
            goto LABEL_36;
          }
          goto LABEL_39;
        }
        if ( ShowClassMagnification < 1.0 )
        {
          v21 = v4->fields.addObjectList;
          if ( !v21 )
            goto LABEL_38;
          if ( v21->max_length )
          {
            v20 = v21->m_Items[0];
            if ( !v20 )
              goto LABEL_38;
LABEL_36:
            UnityEngine_GameObject__SetActive(v20, 1, 0LL);
            return;
          }
LABEL_39:
          sub_B17100(this, targetSvt, method);
          sub_B170A0();
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
  UnityEngine_GameObject_o *v8; // x0
  DrumRollLabel_o *criticallabel; // x0
  UnityEngine_GameObject_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct DrumRollLabel_o *v15; // x22
  UnityEngine_GameObject_o *criticalObject; // x0
  DrumRollLabel_o *v17; // x0
  int32_t v18; // w1
  DrumRollLabel_CompleteEventHandler_o *v19; // x3
  DrumRollLabel_CompleteEventHandler_o *v20; // x21

  if ( (byte_40F6998 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleCommandComponent_compCriticallabel__, isNonAnimation);
    sub_B16FFC(&DrumRollLabel_CompleteEventHandler_TypeInfo, v5);
    byte_40F6998 = 1;
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
  v8 = this->fields.criticalObject;
  if ( !v8 )
    goto LABEL_19;
  if ( !UnityEngine_GameObject__get_activeSelf(v8, 0LL) )
  {
    criticallabel = this->fields.criticallabel;
    if ( !criticallabel )
      goto LABEL_19;
    DrumRollLabel__ChangeParamNonAnimation(criticallabel, 0, 1, 0LL);
  }
  v10 = this->fields.criticalObject;
  if ( !v10 || (UnityEngine_GameObject__SetActive(v10, 1, 0LL), (v15 = this->fields.criticallabel) == 0LL) )
LABEL_19:
    sub_B170D4();
  if ( isNonAnimation )
  {
    DrumRollLabel__ChangeParamNonAnimation(v15, v7, 0, 0LL);
  }
  else
  {
    if ( v7 >= v15->fields.nowvalue )
    {
      v20 = (DrumRollLabel_CompleteEventHandler_o *)sub_B170CC(
                                                      DrumRollLabel_CompleteEventHandler_TypeInfo,
                                                      v11,
                                                      v12,
                                                      v13,
                                                      v14);
      DrumRollLabel_CompleteEventHandler___ctor(
        v20,
        (Il2CppObject *)this,
        Method_BattleCommandComponent_compCriticallabel__,
        0LL);
      v17 = v15;
      v18 = v7;
      v19 = v20;
    }
    else
    {
      v17 = this->fields.criticallabel;
      v18 = v7;
      v19 = 0LL;
    }
    DrumRollLabel__changeParam(v17, v18, 1, v19, 0.0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandComponent__updateSelectedEffect(BattleCommandComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCommandComponent_o *v3; // x19
  struct UnityEngine_GameObject_array *effectobj; // x8
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_array *v6; // x8
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v9; // x20
  UnityEngine_Transform_o *v10; // x0
  struct UnityEngine_GameObject_array *v11; // x8
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Transform_o *v13; // x20
  int v14; // s0
  struct UnityEngine_GameObject_array *v17; // x8
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Transform_o *v19; // x20
  int v20; // s0
  struct UnityEngine_GameObject_array *v23; // x8
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_Transform_o *v25; // x0
  struct UnityEngine_GameObject_array *v26; // x8
  UnityEngine_Object_o *v27; // x20
  struct UnityEngine_GameObject_array *v28; // x8
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_Transform_o *v30; // x0
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_40F6996 & 1) == 0 )
  {
    this = (BattleCommandComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F6996 = 1;
  }
  effectobj = v3->fields.effectobj;
  if ( !effectobj )
    goto LABEL_39;
  if ( effectobj->max_length <= 3 )
  {
LABEL_40:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v5 = (UnityEngine_Object_o *)effectobj->m_Items[3];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v3->fields.effectobj;
    if ( !v6 )
      goto LABEL_39;
    if ( v6->max_length <= 3 )
      goto LABEL_40;
    v7 = v6->m_Items[3];
    if ( !v7 )
      goto LABEL_39;
    transform = UnityEngine_GameObject__get_transform(v7, 0LL);
    if ( !v3->fields.nomalwidget )
      goto LABEL_39;
    v9 = transform;
    v10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v3->fields.nomalwidget, 0LL);
    if ( !v9 )
      goto LABEL_39;
    UnityEngine_Transform__set_parent(v9, v10, 0LL);
    v11 = v3->fields.effectobj;
    if ( !v11 )
      goto LABEL_39;
    if ( v11->max_length <= 3 )
      goto LABEL_40;
    v12 = v11->m_Items[3];
    if ( !v12 )
      goto LABEL_39;
    v13 = UnityEngine_GameObject__get_transform(v12, 0LL);
    *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL);
    if ( !v13 )
      goto LABEL_39;
    UnityEngine_Transform__set_localPosition(v13, *(UnityEngine_Vector3_o *)&v14, 0LL);
    v17 = v3->fields.effectobj;
    if ( !v17 )
      goto LABEL_39;
    if ( v17->max_length <= 3 )
      goto LABEL_40;
    v18 = v17->m_Items[3];
    if ( !v18 )
      goto LABEL_39;
    v19 = UnityEngine_GameObject__get_transform(v18, 0LL);
    *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_up(0LL);
    if ( !v19 )
      goto LABEL_39;
    UnityEngine_Transform__set_eulerAngles(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
    v23 = v3->fields.effectobj;
    if ( !v23 )
      goto LABEL_39;
    if ( v23->max_length <= 3 )
      goto LABEL_40;
    v24 = v23->m_Items[3];
    if ( !v24 )
      goto LABEL_39;
    v25 = UnityEngine_GameObject__get_transform(v24, 0LL);
    if ( !v25 )
      goto LABEL_39;
    v31.fields.x = 1.0;
    v31.fields.y = 1.0;
    v31.fields.z = 1.0;
    UnityEngine_Transform__set_localScale(v25, v31, 0LL);
  }
  v26 = v3->fields.effectobj;
  if ( !v26 )
    goto LABEL_39;
  if ( v26->max_length <= 4 )
    goto LABEL_40;
  v27 = (UnityEngine_Object_o *)v26->m_Items[4];
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleCommandComponent_o *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v28 = v3->fields.effectobj;
    if ( !v28 )
      goto LABEL_39;
    if ( v28->max_length > 4 )
    {
      v29 = v28->m_Items[4];
      if ( v29 )
      {
        v30 = UnityEngine_GameObject__get_transform(v29, 0LL);
        if ( v30 )
        {
          UnityEngine_Transform__set_parent(v30, v3->fields.objectRoot, 0LL);
          return;
        }
      }
LABEL_39:
      sub_B170D4();
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
  int v33; // s0
  struct UIWidget_o *nomalwidget; // x0
  UnityEngine_GameObject_o *v37; // x0
  const MethodInfo *v38; // x1
  UnityEngine_GameObject_o *criticalObject; // x0
  const MethodInfo *v40; // x2
  struct BattleServantData_o *svtData; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  BattleCommandData_o *data; // x0
  UnityEngine_Behaviour_o *facetex; // x0
  UnityEngine_Behaviour_o *icon; // x0
  UnityEngine_Behaviour_o *text; // x0
  UISprite_o *bg; // x0
  UIWidget_o *v48; // x0
  UIWidget_o *v49; // x0
  UnityEngine_Behaviour_o *friendIcon; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  BattleCommandSealStatus_o *v55; // x20
  const MethodInfo *v56; // x1
  const MethodInfo *v57; // x2
  BattleCommandData_o *v58; // x23
  UnityEngine_Object_o *perf; // x25
  BattleServantData_o *v60; // x24
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  struct BattlePerformance_o *v65; // x8
  BattleData_o *v66; // x25
  BattleCommandSealStatus_o *v67; // x26
  const MethodInfo *v68; // x4
  UIWidget_o **p_facetex; // x23
  UITexture_o *v70; // x24
  struct BattleCommandData_o *v71; // x8
  int32_t imageSvtId; // w25
  int32_t svtlimit; // w26
  int32_t loadsvtLimit; // w27
  UnityEngine_Object_o *Manager__loadCommandCard; // x24
  UnityEngine_Behaviour_o *v76; // x0
  UnityEngine_Behaviour_o *v77; // x0
  UnityEngine_Object_o *v78; // x24
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
  struct BattleCommandData_o *v92; // x8
  UISprite_o *v93; // x23
  UnityEngine_Behaviour_o *v94; // x0
  UISprite_o *v95; // x23
  UnityEngine_Behaviour_o *v96; // x0
  UISprite_o *v97; // x23
  System_String_o *v98; // x1
  UISprite_o *v99; // x21
  System_String_o *v100; // x1
  UISprite_o *v101; // x21
  System_String_o *v102; // x1
  struct UISprite_o *v103; // x21
  UISpriteData_o *AtlasSprite; // x0
  int width; // w22
  UISpriteData_o *v106; // x0
  UnityEngine_Component_o *v107; // x0
  UnityEngine_GameObject_o *v108; // x0
  UnityEngine_Transform_o *v109; // x21
  int v110; // s0
  const MethodInfo *v113; // x1
  struct BattleCommandData_o *v114; // x8
  UnityEngine_Behaviour_o *v115; // x0
  struct BattleCommandData_o *v116; // x8
  int32_t svtId; // w21
  UITexture_o *nobletex; // x22
  int32_t v119; // w23
  int32_t treasureDvc; // w24
  bool Manager__loadNobleName; // w21
  UnityEngine_Object_o *v122; // x22
  const MethodInfo *v123; // x2
  UnityEngine_Component_o *v124; // x0
  UnityEngine_GameObject_o *v125; // x0
  const MethodInfo *v126; // x1
  const MethodInfo *v127; // x2
  UISprite_o *v128; // x0
  const MethodInfo *v129; // x3
  const MethodInfo *v130; // x1
  BattleCommandSealStatus_o *SealStatus; // x0
  const MethodInfo *v132; // x1
  BattleCommandComponent_o *PrioredStatus; // x0
  const MethodInfo *v134; // x1
  const MethodInfo *v135; // x3
  BattleCommandData_o *v136; // x0
  UISprite_o *donotActTypeSprite; // x20
  BattleCommandComponent_o *type; // x0
  const MethodInfo *v139; // x2
  System_String_o *CardTypeSealSpriteName; // x1
  UnityEngine_Object_o *displayRemainingTurn; // x20
  UILabel_o *v142; // x20
  System_String_o *v143; // x21
  const MethodInfo *v144; // x1
  BattleCommandSealStatus_o *v145; // x0
  struct BattleBuffData_BuffData_o *SleepBuff_k__BackingField; // x8
  int32_t turn; // w8
  int v148; // w8
  Il2CppObject *v149; // x1
  System_String_o *v150; // x1
  struct BattleCommandData_o *v151; // x8
  const MethodInfo *v152; // x2
  struct BattleCommandData_o *v153; // x8
  const MethodInfo *v154; // x2
  UnityEngine_Object_o *svtId_label; // x20
  struct BattleCommandData_o *v156; // x8
  UILabel_o *v157; // x19
  System_String_o *v158; // x0
  System_String_o *v159; // x1
  BattleCommandData_o *v160; // x0
  int32_t v161; // [xsp+8h] [xbp-58h] BYREF
  int32_t v162; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40F698C & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandSealStatus_TypeInfo, initFlg);
    sub_B16FFC(&FileName_TypeInfo, v13);
    sub_B16FFC(&int_TypeInfo, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_17165, v18);
    sub_B16FFC(&StringLiteral_4585, v19);
    sub_B16FFC(&StringLiteral_21031, v20);
    sub_B16FFC(&StringLiteral_16413, v21);
    sub_B16FFC(&StringLiteral_17185, v22);
    sub_B16FFC(&StringLiteral_17054, v23);
    sub_B16FFC(&StringLiteral_21559, v24);
    sub_B16FFC(&StringLiteral_17178, v25);
    sub_B16FFC(&StringLiteral_17167, v26);
    sub_B16FFC(&StringLiteral_1, v27);
    sub_B16FFC(&StringLiteral_18572, v28);
    sub_B16FFC(&StringLiteral_17166, v29);
    byte_40F698C = 1;
  }
  v162 = 0;
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
  v30 = (System_String_o *)StringLiteral_17167;
  v31 = StringLiteral_21031;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Vector3__get_one(0LL);
  if ( !transform )
    sub_B170D4();
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v33, 0LL);
  if ( initFlg )
  {
    nomalwidget = this->fields.nomalwidget;
    if ( !nomalwidget )
      sub_B170D4();
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))nomalwidget->klass->vtable._8_set_alpha.method)(
      nomalwidget,
      nomalwidget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      1.0);
  }
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v37 )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(v37, 1, 0LL);
  if ( !isAttack )
  {
    criticalObject = this->fields.criticalObject;
    if ( !criticalObject )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(criticalObject, 0, 0LL);
    svtData = this->fields.svtData;
    if ( svtData && isShowBuffIcon )
      BattleCommandComponent__setBuffIconList(this, svtData->fields.buffData, v40);
    else
      BattleCommandComponent__setBuffIconList(this, 0LL, v40);
  }
  data = this->fields.data;
  if ( !data )
    sub_B170D4();
  if ( BattleCommandData__get_type(data, v38) == 5 )
  {
    facetex = (UnityEngine_Behaviour_o *)this->fields.facetex;
    if ( !facetex )
      sub_B170D4();
    UnityEngine_Behaviour__set_enabled(facetex, 0, 0LL);
    icon = (UnityEngine_Behaviour_o *)this->fields.icon;
    if ( !icon )
      sub_B170D4();
    UnityEngine_Behaviour__set_enabled(icon, 0, 0LL);
    text = (UnityEngine_Behaviour_o *)this->fields.text;
    if ( !text )
      sub_B170D4();
    UnityEngine_Behaviour__set_enabled(text, 0, 0LL);
    bg = this->fields.bg;
    if ( !bg )
      sub_B170D4();
    UISprite__set_spriteName(bg, (System_String_o *)StringLiteral_17165, 0LL);
    v48 = (UIWidget_o *)this->fields.bg;
    if ( !v48 )
      sub_B170D4();
    UIWidget__set_height(v48, 170, 0LL);
    v49 = (UIWidget_o *)this->fields.bg;
    if ( !v49 )
      sub_B170D4();
    UIWidget__set_width(v49, 133, 0LL);
    friendIcon = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !friendIcon )
      sub_B170D4();
    UnityEngine_Behaviour__set_enabled(friendIcon, 0, 0LL);
    v55 = (BattleCommandSealStatus_o *)sub_B170CC(BattleCommandSealStatus_TypeInfo, v51, v52, v53, v54);
    BattleCommandSealStatus___ctor(v55, v56);
    this->fields.sealStatus = v55;
    sub_B16F98(&this->fields.sealStatus, v55);
    goto LABEL_155;
  }
  perf = (UnityEngine_Object_o *)this->fields.perf;
  v58 = this->fields.data;
  v60 = this->fields.svtData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Implicit(perf, 0LL) )
  {
    v65 = this->fields.perf;
    if ( !v65 )
      sub_B170D4();
    v66 = v65->fields.data;
  }
  else
  {
    v66 = 0LL;
  }
  v67 = (BattleCommandSealStatus_o *)sub_B170CC(BattleCommandSealStatus_TypeInfo, v61, v62, v63, v64);
  BattleCommandSealStatus___ctor_18695180(v67, v58, v60, v66, v68);
  this->fields.sealStatus = v67;
  sub_B16F98(&this->fields.sealStatus, v67);
  p_facetex = (UIWidget_o **)&this->fields.facetex;
  v70 = this->fields.facetex;
  v71 = this->fields.data;
  if ( !v71 )
    sub_B170D4();
  imageSvtId = v71->fields.imageSvtId;
  if ( imageSvtId <= 0 )
    imageSvtId = v71->fields.svtId;
  svtlimit = v71->fields.svtlimit;
  if ( v71->fields._loadsvtLimit == -1 )
    loadsvtLimit = v71->fields.svtlimit;
  else
    loadsvtLimit = v71->fields._loadsvtLimit;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  Manager__loadCommandCard = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommandCard(
                                                       v70,
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
    sub_B16F98(&this->fields.facetex, Manager__loadCommandCard);
  }
  v76 = (UnityEngine_Behaviour_o *)this->fields.icon;
  if ( !v76 )
    sub_B170D4();
  UnityEngine_Behaviour__set_enabled(v76, 1, 0LL);
  v77 = (UnityEngine_Behaviour_o *)this->fields.text;
  if ( !v77 )
    sub_B170D4();
  UnityEngine_Behaviour__set_enabled(v77, 1, 0LL);
  v78 = (UnityEngine_Object_o *)*p_facetex;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v78, 0LL, 0LL) )
  {
    v79 = (UnityEngine_Behaviour_o *)*p_facetex;
    if ( isCharaHide )
    {
      if ( !v79 )
        sub_B170D4();
      UnityEngine_Behaviour__set_enabled(v79, 0, 0LL);
    }
    else
    {
      if ( !v79 )
        sub_B170D4();
      UnityEngine_Behaviour__set_enabled(v79, 1, 0LL);
    }
  }
  v80 = this->fields.data;
  if ( !v80 )
    sub_B170D4();
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
        sub_B170D4();
      UIWidget__set_height(*p_facetex, 191, 0LL);
      if ( !*p_facetex )
        sub_B170D4();
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
        sub_B170D4();
      UIWidget__set_height(*p_facetex, 191, 0LL);
      if ( !*p_facetex )
        sub_B170D4();
      UIWidget__set_width(*p_facetex, 191, 0LL);
    }
    v30 = (System_String_o *)StringLiteral_17166;
  }
  v83 = this->fields.data;
  if ( !v83 )
    sub_B170D4();
  if ( BattleCommandData__get_type(v83, v82) == 2 )
  {
    v85 = &StringLiteral_17054;
  }
  else
  {
    v86 = this->fields.data;
    if ( !v86 )
      sub_B170D4();
    if ( BattleCommandData__get_type(v86, v84) == 3 )
    {
      v85 = &StringLiteral_21559;
    }
    else
    {
      v88 = this->fields.data;
      if ( !v88 )
        sub_B170D4();
      if ( BattleCommandData__get_type(v88, v87) != 1 )
      {
        v160 = this->fields.data;
        if ( !v160 )
          sub_B170D4();
        if ( BattleCommandData__get_type(v160, v89) == 4 )
          v90 = (Il2CppObject *)StringLiteral_18572;
        else
          v90 = (Il2CppObject *)v31;
        goto LABEL_86;
      }
      v85 = &StringLiteral_16413;
    }
  }
  v90 = (Il2CppObject *)*v85;
LABEL_86:
  v91 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
  if ( !v91 )
    sub_B170D4();
  UnityEngine_Behaviour__set_enabled(v91, 0, 0LL);
  v92 = this->fields.data;
  if ( !v92 )
    sub_B170D4();
  if ( v92->fields.follower )
  {
    v93 = this->fields.friendIcon;
    if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    if ( !v93 )
      sub_B170D4();
    UISprite__set_spriteName(v93, FileName_TypeInfo->static_fields->friendIconName, 0LL);
    v94 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !v94 )
      sub_B170D4();
    UnityEngine_Behaviour__set_enabled(v94, 1, 0LL);
    v92 = this->fields.data;
    if ( !v92 )
      sub_B170D4();
  }
  if ( v92->fields.flgEventJoin )
  {
    v95 = this->fields.friendIcon;
    if ( (BYTE3(FileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FileName_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FileName_TypeInfo);
    if ( !v95 )
      sub_B170D4();
    UISprite__set_spriteName(v95, FileName_TypeInfo->static_fields->eventJoinIconName, 0LL);
    v96 = (UnityEngine_Behaviour_o *)this->fields.friendIcon;
    if ( !v96 )
      sub_B170D4();
    UnityEngine_Behaviour__set_enabled(v96, 1, 0LL);
  }
  v97 = this->fields.bg;
  v98 = System_String__Format(v30, v90, 0LL);
  if ( !v97 )
    sub_B170D4();
  UISprite__set_spriteName(v97, v98, 0LL);
  v99 = this->fields.icon;
  v100 = System_String__Format((System_String_o *)StringLiteral_17178, v90, 0LL);
  if ( !v99 )
    sub_B170D4();
  UISprite__set_spriteName(v99, v100, 0LL);
  v101 = this->fields.text;
  v102 = System_String__Format((System_String_o *)StringLiteral_17185, v90, 0LL);
  if ( !v101 )
    sub_B170D4();
  UISprite__set_spriteName(v101, v102, 0LL);
  v103 = this->fields.text;
  if ( !v103 )
    sub_B170D4();
  AtlasSprite = UISprite__GetAtlasSprite(this->fields.text, 0LL);
  if ( !AtlasSprite )
    sub_B170D4();
  if ( !this->fields.text )
    sub_B170D4();
  width = AtlasSprite->fields.width;
  v106 = UISprite__GetAtlasSprite(this->fields.text, 0LL);
  if ( !v106 )
    sub_B170D4();
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float, float, float, float))v103->klass->vtable._18_SetRect.method)(
    v103,
    v103->klass->vtable._19_ParentHasChanged.methodPtr,
    0.0,
    0.0,
    (float)width,
    (float)v106->fields.height);
  v107 = (UnityEngine_Component_o *)this->fields.text;
  if ( !v107 )
    sub_B170D4();
  v108 = UnityEngine_Component__get_gameObject(v107, 0LL);
  if ( !v108 )
    sub_B170D4();
  v109 = UnityEngine_GameObject__get_transform(v108, 0LL);
  *(UnityEngine_Vector3_o *)&v110 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v109 )
    sub_B170D4();
  UnityEngine_Transform__set_localPosition(v109, *(UnityEngine_Vector3_o *)&v110, 0LL);
  v114 = this->fields.data;
  if ( !v114 )
    sub_B170D4();
  if ( v114->fields.treasureDvc >= 1 )
  {
    v115 = (UnityEngine_Behaviour_o *)this->fields.text;
    if ( !v115 )
      sub_B170D4();
    UnityEngine_Behaviour__set_enabled(v115, 0, 0LL);
    v116 = this->fields.data;
    if ( !v116 )
      sub_B170D4();
    svtId = v116->fields.imageSvtId;
    nobletex = this->fields.nobletex;
    if ( svtId <= 0 )
      svtId = v116->fields.svtId;
    v119 = v116->fields._loadsvtLimit;
    if ( v119 == -1 )
      v119 = v116->fields.svtlimit;
    treasureDvc = v116->fields.treasureDvc;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    Manager__loadNobleName = ServantAssetLoadManager__loadNobleName(nobletex, svtId, v119, treasureDvc, 0LL);
    v122 = (UnityEngine_Object_o *)this->fields.nobletex;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v122, 0LL, 0LL) )
    {
      v124 = (UnityEngine_Component_o *)this->fields.nobletex;
      if ( !v124 )
        sub_B170D4();
      v125 = UnityEngine_Component__get_gameObject(v124, 0LL);
      if ( !v125 )
        sub_B170D4();
      UnityEngine_GameObject__SetActive(v125, Manager__loadNobleName, 0LL);
    }
    BattleCommandComponent__UpdateTDTypeChange(this, isTDTypeChangeWindow, v123);
  }
  BattleCommandComponent__InitUnusableMarks(this, v113);
  if ( !isTDTypeChangeWindow )
  {
    v128 = BattleCommandComponent__ChoiceUnusableMarkSprite(this, v126);
    BattleCommandComponent__SetActiveComponent(
      (BattleCommandComponent_o *)v128,
      (UnityEngine_Component_o *)v128,
      1,
      v129);
    SealStatus = BattleCommandComponent__get_SealStatus(this, v130);
    if ( !SealStatus )
      sub_B170D4();
    PrioredStatus = (BattleCommandComponent_o *)BattleCommandSealStatus__get_PrioredStatus(SealStatus, v132);
    if ( (_DWORD)PrioredStatus == 1 )
    {
      BattleCommandComponent__SetActiveComponent(
        PrioredStatus,
        (UnityEngine_Component_o *)this->fields.displayRemainingTurn,
        1,
        v135);
      displayRemainingTurn = (UnityEngine_Object_o *)this->fields.displayRemainingTurn;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(displayRemainingTurn, 0LL, 0LL) )
      {
        v142 = this->fields.displayRemainingTurn;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v143 = LocalizationManager__Get((System_String_o *)StringLiteral_4585, 0LL);
        v145 = BattleCommandComponent__get_SealStatus(this, v144);
        if ( !v145 )
          sub_B170D4();
        SleepBuff_k__BackingField = v145->fields._SleepBuff_k__BackingField;
        if ( !SleepBuff_k__BackingField )
          sub_B170D4();
        turn = SleepBuff_k__BackingField->fields.turn;
        if ( turn + 1 >= 0 )
          v148 = turn + 1;
        else
          v148 = turn + 2;
        v161 = BattleUtility__FloorToInt((float)(v148 >> 1), 0LL);
        v149 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v161);
        v150 = System_String__Format(v143, v149, 0LL);
        if ( !v142 )
          sub_B170D4();
        UILabel__set_text(v142, v150, 0LL);
      }
    }
    else if ( (_DWORD)PrioredStatus == 8 )
    {
      v136 = this->fields.data;
      if ( !v136 )
        sub_B170D4();
      donotActTypeSprite = this->fields.donotActTypeSprite;
      type = (BattleCommandComponent_o *)BattleCommandData__get_type(v136, v134);
      CardTypeSealSpriteName = BattleCommandComponent__getCardTypeSealSpriteName(type, (int32_t)type, v139);
      if ( !donotActTypeSprite )
        sub_B170D4();
      UISprite__set_spriteName(donotActTypeSprite, CardTypeSealSpriteName, 0LL);
    }
  }
  v151 = this->fields.data;
  if ( !v151 )
    sub_B170D4();
  BattleCommandComponent__SetCommandCodeView_18696312(this, v151->fields.commandCodeId, v127);
  v153 = this->fields.data;
  if ( !v153 )
    sub_B170D4();
  BattleCommandComponent__SetCommandAssistView(this, v153->fields.commandAssistId, v152);
  BattleCommandComponent__SetCardBuffAlphaAnimFlag(this, 0, v154);
LABEL_155:
  BattleCommandComponent__setTouchFlg(this, 1, v57);
  svtId_label = (UnityEngine_Object_o *)this->fields.svtId_label;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(svtId_label, 0LL, 0LL) )
  {
    v156 = this->fields.data;
    if ( v156 )
    {
      v157 = this->fields.svtId_label;
      v162 = v156->fields.svtId;
      v158 = System_Int32__ToString((int32_t)&v162, 0LL);
      if ( v157 )
      {
        if ( v158 )
          v159 = v158;
        else
          v159 = (System_String_o *)StringLiteral_1;
        UILabel__set_text(v157, v159, 0LL);
        return;
      }
    }
LABEL_170:
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  int32_t _1__state; // w8
  float preDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v9; // x20
  bool result; // w0

  if ( (byte_40F84EC & 1) == 0 )
  {
    sub_B16FFC(&SeManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v6);
    byte_40F84EC = 1;
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
    v9 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
    UnityEngine_WaitForSeconds___ctor(v9, preDelayTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v9;
    sub_B16F98(&this->fields.__2__current, v9);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleCommandComponent__PlayStarSe_d__159_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct BattleCommandComponent_o *_4__this; // x20
  float waitSeconds; // s8
  UnityEngine_WaitForSeconds_o *v9; // x20
  System_Action_o *tdErrorAfterAction; // x0
  struct System_String_o **p_busyVoiceSe; // x22
  System_String_o *v12; // x21
  Il2CppObject **p__2__current; // x19
  int v14; // w8
  System_String_o *v15; // x21

  if ( (byte_40F84ED & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v6);
    byte_40F84ED = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      waitSeconds = this->fields.waitSeconds;
      v9 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
      UnityEngine_WaitForSeconds___ctor(v9, waitSeconds, 0LL);
      this->fields.__2__current = (Il2CppObject *)v9;
      sub_B16F98(&this->fields.__2__current, v9);
      LOBYTE(tdErrorAfterAction) = 1;
      this->fields.__1__state = 1;
      return (char)tdErrorAfterAction;
    case 1:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_25;
      BattleCommandComponent__startMoveFloat(_4__this, 0LL);
      p_busyVoiceSe = &this->fields.busyVoiceSe;
      if ( System_String__IsNullOrEmpty(this->fields.busyVoiceSe, 0LL) )
        goto LABEL_21;
LABEL_9:
      v12 = *p_busyVoiceSe;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      if ( SoundManager__isBusyVoice(v12, 0LL) )
      {
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(p__2__current, 0LL);
        v14 = 2;
LABEL_19:
        *((_DWORD *)p__2__current - 2) = v14;
        LOBYTE(tdErrorAfterAction) = 1;
        return (char)tdErrorAfterAction;
      }
LABEL_14:
      v15 = *p_busyVoiceSe;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      if ( SoundManager__isBusySe(v15, 0LL) )
      {
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(p__2__current, 0LL);
        v14 = 3;
        goto LABEL_19;
      }
      if ( !_4__this )
LABEL_25:
        sub_B170D4();
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
      p_busyVoiceSe = &this->fields.busyVoiceSe;
      this->fields.__1__state = -1;
      goto LABEL_9;
    case 3:
      p_busyVoiceSe = &this->fields.busyVoiceSe;
      this->fields.__1__state = -1;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleCommandComponent__WaitForErrorViewFinished_d__239_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleCommandComponent___c_StaticFields *static_fields; // x0

  if ( (byte_40F84EA & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandComponent___c_TypeInfo, v1);
    byte_40F84EA = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleCommandComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleCommandComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleCommandComponent___c_o *)v5;
  sub_B16F98(static_fields, v5);
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
    sub_B170D4();
  return a->fields.addOrder - b->fields.addOrder;
}


bool __fastcall BattleCommandComponent___c___UpdateCommandCardTypeChange_b__223_0(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_B170D4();
  return c->fields.buffType == 156;
}


bool __fastcall BattleCommandComponent___c___UpdateFixedCommandCard_b__207_0(
        BattleCommandComponent___c_o *this,
        BattleCommandComponent_CardBuffData_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_B170D4();
  return c->fields.buffType == 131;
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
  struct BattleCommandComponent_o *_4__this; // x8
  UnityEngine_Object_o *spawner; // x20
  struct BattleCommandComponent_o *v5; // x8
  Spawner_o *v6; // x0
  UnityEngine_Object_o *obj; // x19

  if ( (byte_40F84EB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F84EB = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  spawner = (UnityEngine_Object_o *)_4__this->fields.spawner;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(spawner, 0LL, 0LL) )
  {
    v5 = this->fields.__4__this;
    if ( v5 )
    {
      v6 = v5->fields.spawner;
      if ( v6 )
      {
        Spawner__Despawn(v6, this->fields.obj, 0, 0LL);
        return;
      }
    }
LABEL_15:
    sub_B170D4();
  }
  obj = (UnityEngine_Object_o *)this->fields.obj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(obj, 0LL);
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
    sub_B170D4();
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
  int32_t _1__state; // w8
  struct BattleCommandComponent_o *_4__this; // x21
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *v7; // x0
  UISprite_o *v8; // x0
  struct UISprite_o *v9; // x8
  UnityEngine_Object_o *mAtlas; // x20
  bool v11; // w20
  bool result; // w0
  UnityEngine_Component_o *specialCardBuffIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F84EE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F84EE = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_28;
    specialCardBuffIcon = (UnityEngine_Component_o *)_4__this->fields.specialCardBuffIcon;
    if ( !specialCardBuffIcon )
      goto LABEL_28;
    gameObject = UnityEngine_Component__get_gameObject(specialCardBuffIcon, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_28;
      v5 = (UnityEngine_Object_o *)_4__this->fields.specialCardBuffIcon;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
      {
        v6 = (UnityEngine_Component_o *)_4__this->fields.specialCardBuffIcon;
        if ( v6 )
        {
          v7 = UnityEngine_Component__get_gameObject(v6, 0LL);
          if ( v7 )
          {
            UnityEngine_GameObject__SetActive(v7, 0, 0LL);
            v8 = _4__this->fields.specialCardBuffIcon;
            if ( v8 )
            {
              UISprite__set_atlas(v8, 0LL, 0LL);
              goto LABEL_16;
            }
          }
        }
LABEL_28:
        sub_B170D4();
      }
    }
    return 0;
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_28;
LABEL_16:
  v9 = _4__this->fields.specialCardBuffIcon;
  if ( !v9 )
    goto LABEL_28;
  mAtlas = (UnityEngine_Object_o *)v9->fields.mAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality(mAtlas, 0LL, 0LL);
  this->fields.__2__current = 0LL;
  sub_B16F98(&this->fields.__2__current, 0LL);
  if ( v11 )
  {
    result = 1;
    this->fields.__1__state = 1;
  }
  else
  {
    this->fields.__1__state = 2;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_BattleCommandComponent__coroutineUpdateSpecialBuffIcon_d__228_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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
      sub_B170D4();
    System_Action__Invoke(action, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_B16F98(&this->fields.__2__current, 0LL);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleCommandComponent__delayFrame_d__160_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x1
  int32_t _1__state; // w8
  DefCoroutine_c *v5; // x0
  Il2CppObject *milliSecSix; // x1
  Il2CppObject **p__2__current; // x20
  bool result; // w0
  struct BattleCommandComponent_o *_4__this; // x19
  struct UIWidget_o *nomalwidget; // x0
  struct UnityEngine_GameObject_array *effectobj; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object_19257936; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_GameObject_o *v17; // x21
  struct UnityEngine_GameObject_array *v18; // x8
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Transform_o *v20; // x20
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_Transform_o *v22; // x0
  UnityEngine_Transform_o *parent; // x0
  struct UnityEngine_GameObject_array *v24; // x8
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Transform_o *v26; // x20
  int v27; // s0

  if ( (byte_40F84EF & 1) == 0 )
  {
    sub_B16FFC(&DefCoroutine_TypeInfo, method);
    sub_B16FFC(&StringLiteral_18178, v3);
    byte_40F84EF = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      nomalwidget = _4__this->fields.nomalwidget;
      if ( nomalwidget )
      {
        ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))nomalwidget->klass->vtable._8_set_alpha.method)(
          nomalwidget,
          nomalwidget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          0.0);
        BattleCommandComponent__DestroyEffectObject1(_4__this, 0LL);
        if ( this->fields.isTresure )
        {
LABEL_28:
          BattleCommandComponent__CardEffectSetActive(_4__this, 0, 0LL);
          return 0;
        }
        effectobj = _4__this->fields.effectobj;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
        if ( gameObject )
        {
          transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
          Object_19257936 = BaseMonoBehaviour__createObject_19257936(
                              (BaseMonoBehaviour_o *)_4__this,
                              (System_String_o *)StringLiteral_18178,
                              transform,
                              0LL,
                              0LL);
          if ( effectobj )
          {
            v17 = Object_19257936;
            if ( Object_19257936 )
            {
              Object_19257936 = (UnityEngine_GameObject_o *)sub_B170BC(
                                                              Object_19257936,
                                                              effectobj->obj.klass->_1.element_class);
              if ( !Object_19257936 )
              {
                sub_B170F4();
                sub_B170A0();
              }
            }
            if ( effectobj->max_length <= 1 )
              goto LABEL_31;
            effectobj->m_Items[1] = v17;
            sub_B16F98(&effectobj->m_Items[1], v17);
            v18 = _4__this->fields.effectobj;
            if ( !v18 )
              goto LABEL_30;
            if ( v18->max_length <= 1 )
              goto LABEL_31;
            v19 = v18->m_Items[1];
            if ( !v19 )
              goto LABEL_30;
            v20 = UnityEngine_GameObject__get_transform(v19, 0LL);
            v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
            if ( !v21 )
              goto LABEL_30;
            v22 = UnityEngine_GameObject__get_transform(v21, 0LL);
            if ( !v22 )
              goto LABEL_30;
            parent = UnityEngine_Transform__get_parent(v22, 0LL);
            if ( !v20 )
              goto LABEL_30;
            UnityEngine_Transform__set_parent(v20, parent, 0LL);
            v24 = _4__this->fields.effectobj;
            if ( !v24 )
              goto LABEL_30;
            if ( v24->max_length <= 1 )
            {
LABEL_31:
              sub_B17100(Object_19257936, v15, v16);
              sub_B170A0();
            }
            v25 = v24->m_Items[1];
            if ( v25 )
            {
              v26 = UnityEngine_GameObject__get_transform(v25, 0LL);
              *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_one(0LL);
              if ( v26 )
              {
                UnityEngine_Transform__set_localScale(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
                goto LABEL_28;
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_B170D4();
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v5 = DefCoroutine_TypeInfo;
  if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
    v5 = DefCoroutine_TypeInfo;
  }
  milliSecSix = (Il2CppObject *)v5->static_fields->milliSecSix;
  this->fields.__2__current = milliSecSix;
  p__2__current = &this->fields.__2__current;
  sub_B16F98(p__2__current, milliSecSix);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleCommandComponent__fadeoutEffect_d__180_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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