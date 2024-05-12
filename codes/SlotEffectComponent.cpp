void __fastcall SlotEffectComponent___ctor(SlotEffectComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_String_array *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_438A115 & 1) == 0 )
  {
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_12972/*"Servants"*/);
    sub_B775C4(&StringLiteral_16443/*"_blurOnOff"*/);
    sub_B775C4(&StringLiteral_16464/*"_mapIdVal"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438A115 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_12972/*"Servants"*/;
  this->fields.voiceTypeName = (struct System_String_o *)StringLiteral_12972/*"Servants"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.voiceTypeName, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_16464/*"_mapIdVal"*/;
  this->fields.reelUvIdKey = (struct System_String_o *)StringLiteral_16464/*"_mapIdVal"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.reelUvIdKey, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Int32_array **)StringLiteral_16443/*"_blurOnOff"*/;
  this->fields.reelBlurKey = (struct System_String_o *)StringLiteral_16443/*"_blurOnOff"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.reelBlurKey, v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.voiceDataStr = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.voiceDataStr, v24, v25, v26, v27, v28, v29, v30);
  v31 = (struct System_String_array *)sub_B775DC(string___TypeInfo, 0LL);
  this->fields.voiceIdArray = v31;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.voiceIdArray,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SlotEffectComponent__CommonBlurFunc(
        SlotEffectComponent_o *this,
        System_Collections_Generic_List_MeshRenderer__o *list,
        bool flg,
        const MethodInfo *method)
{
  SlotEffectComponent_o *v6; // x20
  float v7; // s8
  int32_t size; // w8
  unsigned int v9; // w21

  v6 = this;
  if ( (byte_438A110 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_MeshRenderer__get_Count__);
    this = (SlotEffectComponent_o *)sub_B775C4(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
    byte_438A110 = 1;
  }
  if ( flg )
    v7 = 1.0;
  else
    v7 = 0.0;
  if ( !list )
    goto LABEL_15;
  size = list->fields._size;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( size <= v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      this = (SlotEffectComponent_o *)list->fields._items->m_Items[v9];
      if ( !this )
        break;
      this = (SlotEffectComponent_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
      if ( !this )
        break;
      UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, v6->fields.reelBlurKey, v7, 0LL);
      size = list->fields._size;
      if ( (int)++v9 >= size )
        return;
    }
LABEL_15:
    sub_B7769C(this, list);
  }
}


void __fastcall SlotEffectComponent__CommonReelFunc(
        SlotEffectComponent_o *this,
        System_Collections_Generic_List_MeshRenderer__o *list,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  SlotEffectComponent_o *v6; // x21
  unsigned int v7; // w22
  __int64 v8; // x0

  v6 = this;
  if ( (byte_438A10F & 1) == 0 )
  {
    this = (SlotEffectComponent_o *)sub_B775C4(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
    byte_438A10F = 1;
  }
  if ( !ids )
    goto LABEL_14;
  if ( (int)ids->max_length >= 1 )
  {
    v7 = 0;
    while ( list )
    {
      if ( list->fields._size <= v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      this = (SlotEffectComponent_o *)list->fields._items->m_Items[v7];
      if ( !this )
        break;
      this = (SlotEffectComponent_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
      if ( v7 >= ids->max_length )
      {
        v8 = sub_B776C8(this);
        sub_B77668(v8, 0LL);
      }
      if ( !this )
        break;
      UnityEngine_Material__SetFloat(
        (UnityEngine_Material_o *)this,
        v6->fields.reelUvIdKey,
        (float)ids->m_Items[++v7],
        0LL);
      if ( (signed int)v7 >= (signed int)ids->max_length )
        return;
    }
LABEL_14:
    sub_B7769C(this, list);
  }
}


void __fastcall SlotEffectComponent__EndGimmick(SlotEffectComponent_o *this, const MethodInfo *method)
{
  System_Action_o *endCallback; // x0

  endCallback = this->fields.endCallback;
  if ( endCallback )
    System_Action__Invoke(endCallback, 0LL);
}


void __fastcall SlotEffectComponent__PlaySe(
        SlotEffectComponent_o *this,
        System_String_o *seName,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  int max_length; // w8
  System_String_o *v8; // x19
  System_String_o *v9; // x20
  __int64 v10; // x0

  if ( (byte_438A113 & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A113 = 1;
  }
  v4 = (System_String_array *)sub_B775DC(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_17;
  v5 = (const MethodInfo *)v4;
  if ( !v4->max_length )
    goto LABEL_18;
  LOWORD(v4->m_Items[0]) = 58;
  if ( !seName || (v4 = System_String__Split(seName, (System_Char_array *)v4, 0LL)) == 0LL )
LABEL_17:
    sub_B7769C(v4, v5);
  max_length = v4->max_length;
  if ( !max_length )
  {
LABEL_18:
    v10 = sub_B776C8(v4);
    sub_B77668(v10, 0LL);
  }
  v8 = v4->m_Items[0];
  if ( max_length >= 2 )
  {
    v9 = v4->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSe_23512032(v8, v9, v6);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSe(v8, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SlotEffectComponent__PlayVoice(SlotEffectComponent_o *this, int32_t index, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SlotEffectComponent_o *v5; // x19
  struct System_String_array *voiceIdArray; // x8
  int32_t max_length; // w9
  System_String_o *voiceDataStr; // x19
  System_String_o *v9; // x20
  SeManager_c *v10; // x0
  float DEFAULT_VOLUME; // s8
  __int64 v12; // x0

  v5 = this;
  if ( (byte_438A114 & 1) == 0 )
  {
    sub_B775C4(&SeManager_TypeInfo);
    this = (SlotEffectComponent_o *)sub_B775C4(&SoundManager_TypeInfo);
    byte_438A114 = 1;
  }
  voiceIdArray = v5->fields.voiceIdArray;
  if ( !voiceIdArray )
    sub_B7769C(this, *(_QWORD *)&index);
  max_length = voiceIdArray->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
    {
      v12 = sub_B776C8(this);
      sub_B77668(v12, 0LL);
    }
    voiceDataStr = v5->fields.voiceDataStr;
    v9 = voiceIdArray->m_Items[index];
    v10 = SeManager_TypeInfo;
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v10 = SeManager_TypeInfo;
    }
    DEFAULT_VOLUME = v10->static_fields->DEFAULT_VOLUME;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playVoice_23512556(voiceDataStr, v9, DEFAULT_VOLUME, 0LL, v3);
  }
}


void __fastcall SlotEffectComponent__ReleaseGimmickData(SlotEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *voiceDataStr; // x19

  if ( (byte_438A112 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A112 = 1;
  }
  voiceDataStr = this->fields.voiceDataStr;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__releaseAudioAssetStorage(voiceDataStr, method);
}


void __fastcall SlotEffectComponent__SetCenterReelBlur(
        SlotEffectComponent_o *this,
        int32_t isOn,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SlotEffectComponent__CommonBlurFunc(this, this->fields.centerReelList, isOn == 1, v3);
}


void __fastcall SlotEffectComponent__SetGimmick(
        SlotEffectComponent_o *this,
        int32_t svtId,
        BattleActionData_GimmickData_o *data,
        System_Action_o *endCb,
        const MethodInfo *method)
{
  Il2CppObject *voiceTypeName; // x23
  Il2CppObject *v10; // x0
  struct System_String_o *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_List_T__o *v18; // x0
  __int64 v19; // x1
  struct System_Int32_array *indexArray; // x8
  struct System_Int32_array *animationTypes; // x9
  __int64 v22; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x22
  struct System_Object_array *resultVoiceIdArray; // x23
  System_Int32_array **v25; // x21
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v26; // x22
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v27; // x23
  __int64 v28; // x9
  System_Collections_Generic_List_T__o *Item; // x0
  __int64 v30; // x9
  System_Int32_array **v31; // x23
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct System_String_array *v38; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct System_String_array **p_voiceIdArray; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  const MethodInfo *v52; // x3
  System_String_o *v53; // x20
  __int64 v54; // x0
  __int64 v55; // x0
  __int64 v56; // x0
  __int64 v57; // x1
  int32_t v58; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438A10E & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Shuffle_object___);
    sub_B775C4(&Method_BasicHelper_Shuffle_string___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_object__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_object__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&Method_System_Collections_Generic_List_object___ctor___69400024);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_24131/*"{0}_{1}"*/);
    sub_B775C4(&StringLiteral_23659/*"voice"*/);
    byte_438A10E = 1;
  }
  voiceTypeName = (Il2CppObject *)this->fields.voiceTypeName;
  v58 = svtId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, data);
  v11 = System_String__Format_44897472((System_String_o *)StringLiteral_24131/*"{0}_{1}"*/, voiceTypeName, v10, 0LL);
  this->fields.voiceDataStr = v11;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.voiceDataStr,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !data )
    goto LABEL_37;
  indexArray = data->fields.indexArray;
  if ( !indexArray )
    goto LABEL_37;
  if ( !indexArray->max_length )
    goto LABEL_38;
  animationTypes = data->fields.animationTypes;
  if ( !animationTypes )
    goto LABEL_37;
  v22 = indexArray->m_Items[1];
  if ( (unsigned int)v22 >= animationTypes->max_length )
    goto LABEL_38;
  this->fields.animationType = animationTypes->m_Items[v22 + 1];
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  if ( !v23 )
    goto LABEL_37;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v23,
    (System_Collections_Generic_IEnumerable_T__o *)data->fields.startVoiceIdArray,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_string__AddRange__);
  v18 = BasicHelper__Shuffle_string_(
          (System_Collections_Generic_List_T__o *)v23,
          (const MethodInfo_1C68D04 *)Method_BasicHelper_Shuffle_string___);
  if ( !v18 )
    goto LABEL_37;
  if ( !v18->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  resultVoiceIdArray = data->fields.resultVoiceIdArray;
  if ( !resultVoiceIdArray
    || (v25 = (System_Int32_array **)v18->fields._items->m_Items[0],
        v26 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B77694(System_Collections_Generic_List_object__TypeInfo),
        System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
          v26,
          resultVoiceIdArray->max_length,
          (const MethodInfo_30526A4 *)Method_System_Collections_Generic_List_object___ctor___69400024),
        !v26) )
  {
LABEL_37:
    sub_B7769C(v18, v19);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v26,
    (System_Collections_Generic_IEnumerable_T__o *)resultVoiceIdArray,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_object__AddRange__);
  if ( v26->fields._size <= (unsigned int)v22 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v27 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v26->fields._items->m_Items[v22];
  if ( !v27 )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v26,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_object__Clear__);
    sub_B7769C(v56, v57);
  }
  v28 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28
    || (System_Collections_Generic_Dictionary_string__object__c *)v27->klass->_2.typeHierarchy[v28 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    Item = (System_Collections_Generic_List_T__o *)sub_B77990(v27);
LABEL_40:
    v18 = (System_Collections_Generic_List_T__o *)sub_B77990(Item);
    goto LABEL_41;
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v26,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_object__Clear__);
  Item = (System_Collections_Generic_List_T__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                   v27,
                                                   (System_Type_o *)StringLiteral_23659/*"voice"*/,
                                                   (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    v30 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v30
      || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v30 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_40;
    }
  }
  v18 = BasicHelper__Shuffle_string_(Item, (const MethodInfo_1C68D04 *)Method_BasicHelper_Shuffle_object___);
  if ( !v18 )
    goto LABEL_37;
  if ( !v18->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v18 = (System_Collections_Generic_List_T__o *)v18->fields._items->m_Items[0];
  if ( !v18 )
    goto LABEL_37;
  v31 = (System_Int32_array **)((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, Il2CppMethodPointer))v18->klass->vtable._3_ToString.method)(
                                 v18,
                                 v18->klass->vtable._4_unknown.methodPtr);
  v18 = (System_Collections_Generic_List_T__o *)sub_B775DC(string___TypeInfo, 2LL);
  if ( !v18 )
    goto LABEL_37;
  v38 = (struct System_String_array *)v18;
  if ( v25 )
  {
    v18 = (System_Collections_Generic_List_T__o *)sub_B77684(v25, v18->klass->_1.element_class);
    if ( !v18 )
      goto LABEL_41;
  }
  if ( !v38->max_length )
    goto LABEL_38;
  v38->m_Items[0] = (System_String_o *)v25;
  sub_B77560((BattleServantConfConponent_o *)v38->m_Items, v25, v32, v33, v34, v35, v36, v37);
  if ( v31 )
  {
    v18 = (System_Collections_Generic_List_T__o *)sub_B77684(v31, v38->obj.klass->_1.element_class);
    if ( !v18 )
    {
LABEL_41:
      v55 = sub_B776BC(v18);
      sub_B77668(v55, 0LL);
    }
  }
  if ( v38->max_length <= 1 )
  {
LABEL_38:
    v54 = sub_B776C8(v18);
    sub_B77668(v54, 0LL);
  }
  v38->m_Items[1] = (System_String_o *)v31;
  sub_B77560((BattleServantConfConponent_o *)&v38->m_Items[1], v31, v39, v40, v41, v42, v43, v44);
  this->fields.voiceIdArray = v38;
  p_voiceIdArray = &this->fields.voiceIdArray;
  sub_B77560((BattleServantConfConponent_o *)p_voiceIdArray, (System_Int32_array **)v38, v46, v47, v48, v49, v50, v51);
  v53 = (System_String_o *)*(p_voiceIdArray - 1);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(v53, endCb, 1, v52);
}


void __fastcall SlotEffectComponent__SetLeftReelBlur(
        SlotEffectComponent_o *this,
        int32_t isOn,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SlotEffectComponent__CommonBlurFunc(this, this->fields.leftReelList, isOn == 1, v3);
}


void __fastcall SlotEffectComponent__SetReelVal(
        SlotEffectComponent_o *this,
        System_Int32_array *leftReel,
        System_Int32_array *centerReel,
        System_Int32_array *rightReel,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3

  SlotEffectComponent__CommonReelFunc(this, this->fields.leftReelList, leftReel, (const MethodInfo *)rightReel);
  SlotEffectComponent__CommonReelFunc(this, this->fields.centerReelList, centerReel, v8);
  SlotEffectComponent__CommonReelFunc(this, this->fields.rightReelList, rightReel, v9);
}


void __fastcall SlotEffectComponent__SetRightReelBlur(
        SlotEffectComponent_o *this,
        int32_t isOn,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SlotEffectComponent__CommonBlurFunc(this, this->fields.rightReelList, isOn == 1, v3);
}


void __fastcall SlotEffectComponent__StartGimmick(
        SlotEffectComponent_o *this,
        System_Action_o *animCallback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  Il2CppObject *animationName; // x19
  __int64 v11; // x2
  Il2CppObject *v12; // x0
  System_String_o *v13; // x19
  UnityEngine_Object_o *Component_WebViewObject; // x21
  UnityEngine_Object_o *v15; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  int32_t animationType; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438A111 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_24139/*"{0}{1}"*/);
    byte_438A111 = 1;
  }
  this->fields.endCallback = animCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.endCallback,
    (System_Int32_array **)animCallback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  animationName = (Il2CppObject *)this->fields.animationName;
  animationType = this->fields.animationType;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationType, v11);
  v13 = System_String__Format_44897472((System_String_o *)StringLiteral_24139/*"{0}{1}"*/, animationName, v12, 0LL);
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)this,
                                                      (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v15 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( v16 )
  {
    if ( Component_WebViewObject )
    {
      SimpleAnimation__Play_16815192((SimpleAnimation_o *)Component_WebViewObject, v13, 0LL);
      return;
    }
LABEL_16:
    sub_B7769C(v16, v17);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
  if ( v16 )
  {
    if ( !v15 )
      goto LABEL_16;
    UnityEngine_Animation__Play_51745976((UnityEngine_Animation_o *)v15, v13, 0LL);
  }
}