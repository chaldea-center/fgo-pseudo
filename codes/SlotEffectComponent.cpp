void __fastcall SlotEffectComponent___ctor(SlotEffectComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Int32_array **v13; // x1
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x2
  struct System_String_array *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_40F9C85 & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, method);
    sub_B16FFC(&StringLiteral_12675/*"Servants"*/, v9);
    sub_B16FFC(&StringLiteral_16073/*"_blurOnOff"*/, v10);
    sub_B16FFC(&StringLiteral_16093/*"_mapIdVal"*/, v11);
    sub_B16FFC(&StringLiteral_1/*""*/, v12);
    byte_40F9C85 = 1;
  }
  v13 = (System_Int32_array **)StringLiteral_12675/*"Servants"*/;
  this->fields.voiceTypeName = (struct System_String_o *)StringLiteral_12675/*"Servants"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.voiceTypeName, v13, v2, v3, v4, v5, v6, v7);
  v14 = (System_Int32_array **)StringLiteral_16093/*"_mapIdVal"*/;
  this->fields.reelUvIdKey = (struct System_String_o *)StringLiteral_16093/*"_mapIdVal"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.reelUvIdKey, v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Int32_array **)StringLiteral_16073/*"_blurOnOff"*/;
  this->fields.reelBlurKey = (struct System_String_o *)StringLiteral_16073/*"_blurOnOff"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.reelBlurKey, v21, v22, v23, v24, v25, v26, v27);
  v28 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.voiceDataStr = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.voiceDataStr, v28, v29, v30, v31, v32, v33, v34);
  v36 = (struct System_String_array *)sub_B17014(string___TypeInfo, 0LL, v35);
  this->fields.voiceIdArray = v36;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.voiceIdArray,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SlotEffectComponent__CommonBlurFunc(
        SlotEffectComponent_o *this,
        System_Collections_Generic_List_MeshRenderer__o *list,
        bool flg,
        const MethodInfo *method)
{
  __int64 v7; // x1
  float v8; // s8
  int32_t size; // w8
  unsigned int v10; // w21
  UnityEngine_Renderer_o *v11; // x0
  UnityEngine_Material_o *material; // x0

  if ( (byte_40F9C80 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MeshRenderer__get_Count__, list);
    sub_B16FFC(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__, v7);
    byte_40F9C80 = 1;
  }
  if ( flg )
    v8 = 1.0;
  else
    v8 = 0.0;
  if ( !list )
    goto LABEL_15;
  size = list->fields._size;
  if ( size >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( size <= v10 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v11 = (UnityEngine_Renderer_o *)list->fields._items->m_Items[v10];
      if ( !v11 )
        break;
      material = UnityEngine_Renderer__get_material(v11, 0LL);
      if ( !material )
        break;
      UnityEngine_Material__SetFloat(material, this->fields.reelBlurKey, v8, 0LL);
      size = list->fields._size;
      if ( (int)++v10 >= size )
        return;
    }
LABEL_15:
    sub_B170D4();
  }
}


void __fastcall SlotEffectComponent__CommonReelFunc(
        SlotEffectComponent_o *this,
        System_Collections_Generic_List_MeshRenderer__o *list,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  unsigned int v7; // w22
  UnityEngine_Renderer_o *v8; // x0
  UnityEngine_Material_o *material; // x0
  __int64 v10; // x1
  __int64 v11; // x2

  if ( (byte_40F9C7F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__, list);
    byte_40F9C7F = 1;
  }
  if ( !ids )
    goto LABEL_14;
  if ( (int)ids->max_length >= 1 )
  {
    v7 = 0;
    while ( list )
    {
      if ( list->fields._size <= v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v8 = (UnityEngine_Renderer_o *)list->fields._items->m_Items[v7];
      if ( !v8 )
        break;
      material = UnityEngine_Renderer__get_material(v8, 0LL);
      if ( v7 >= ids->max_length )
      {
        sub_B17100(material, v10, v11);
        sub_B170A0();
      }
      if ( !material )
        break;
      UnityEngine_Material__SetFloat(material, this->fields.reelUvIdKey, (float)ids->m_Items[++v7], 0LL);
      if ( (signed int)v7 >= (signed int)ids->max_length )
        return;
    }
LABEL_14:
    sub_B170D4();
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
  __int64 v4; // x1
  System_String_array *v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  int max_length; // w8
  System_String_o *v9; // x19
  System_String_o *v10; // x20

  if ( (byte_40F9C83 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, seName);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F9C83 = 1;
  }
  v5 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, method);
  if ( !v5 )
    goto LABEL_17;
  v7 = (const MethodInfo *)v5;
  if ( !v5->max_length )
    goto LABEL_18;
  LOWORD(v5->m_Items[0]) = 58;
  if ( !seName || (v5 = System_String__Split(seName, (System_Char_array *)v5, 0LL)) == 0LL )
LABEL_17:
    sub_B170D4();
  max_length = v5->max_length;
  if ( !max_length )
  {
LABEL_18:
    sub_B17100(v5, v7, v6);
    sub_B170A0();
  }
  v9 = v5->m_Items[0];
  if ( max_length >= 2 )
  {
    v10 = v5->m_Items[1];
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSe_24823480(v9, v10, v6);
  }
  else
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSe(v9, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SlotEffectComponent__PlayVoice(SlotEffectComponent_o *this, int32_t index, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SlotEffectComponent_o *v5; // x19
  __int64 v6; // x1
  struct System_String_array *voiceIdArray; // x8
  int32_t max_length; // w9
  System_String_o *voiceDataStr; // x19
  System_String_o *v10; // x20
  SeManager_c *v11; // x0
  float DEFAULT_VOLUME; // s8

  v5 = this;
  if ( (byte_40F9C84 & 1) == 0 )
  {
    sub_B16FFC(&SeManager_TypeInfo, *(_QWORD *)&index);
    this = (SlotEffectComponent_o *)sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40F9C84 = 1;
  }
  voiceIdArray = v5->fields.voiceIdArray;
  if ( !voiceIdArray )
    sub_B170D4();
  max_length = voiceIdArray->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
    {
      sub_B17100(this, *(_QWORD *)&index, method);
      sub_B170A0();
    }
    voiceDataStr = v5->fields.voiceDataStr;
    v10 = voiceIdArray->m_Items[index];
    v11 = SeManager_TypeInfo;
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v11 = SeManager_TypeInfo;
    }
    DEFAULT_VOLUME = v11->static_fields->DEFAULT_VOLUME;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playVoice_24824004(voiceDataStr, v10, DEFAULT_VOLUME, 0LL, v3);
  }
}


void __fastcall SlotEffectComponent__ReleaseGimmickData(SlotEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *voiceDataStr; // x19

  if ( (byte_40F9C82 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9C82 = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall SlotEffectComponent__SetGimmick(
        SlotEffectComponent_o *this,
        int32_t svtId,
        BattleActionData_GimmickData_o *data,
        System_Action_o *endCb,
        const MethodInfo *method)
{
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
  Il2CppObject *voiceTypeName; // x23
  Il2CppObject *v27; // x0
  struct System_String_o *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x0
  __int64 v36; // x1
  System_String_array **v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  struct System_Int32_array *indexArray; // x8
  struct System_Int32_array *animationTypes; // x9
  __int64 v42; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x22
  System_Collections_Generic_List_T__o *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  struct System_Object_array *resultVoiceIdArray; // x23
  System_Int32_array **v50; // x21
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v51; // x22
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v52; // x23
  __int64 v53; // x9
  System_Collections_Generic_List_T__o *Item; // x0
  __int64 v55; // x9
  System_Collections_Generic_List_T__o *v56; // x0
  Il2CppObject *v57; // x0
  System_Int32_array **v58; // x23
  __int64 v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct System_String_array *v65; // x22
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  struct System_String_array **p_voiceIdArray; // x20
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  const MethodInfo *v78; // x3
  System_String_o *v79; // x20
  int32_t v80; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F9C7E & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Shuffle_object___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_BasicHelper_Shuffle_string___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__AddRange__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__AddRange__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__Clear__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_object___ctor___66739816, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__get_Item__, v19);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v20);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v21);
    sub_B16FFC(&SoundManager_TypeInfo, v22);
    sub_B16FFC(&string___TypeInfo, v23);
    sub_B16FFC(&StringLiteral_23549/*"{0}_{1}"*/, v24);
    sub_B16FFC(&StringLiteral_23083/*"voice"*/, v25);
    byte_40F9C7E = 1;
  }
  voiceTypeName = (Il2CppObject *)this->fields.voiceTypeName;
  v80 = svtId;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
  v28 = System_String__Format_43739268((System_String_o *)StringLiteral_23549/*"{0}_{1}"*/, voiceTypeName, v27, 0LL);
  this->fields.voiceDataStr = v28;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.voiceDataStr,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
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
  v42 = indexArray->m_Items[1];
  if ( (unsigned int)v42 >= animationTypes->max_length )
    goto LABEL_38;
  this->fields.animationType = animationTypes->m_Items[v42 + 1];
  v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v36,
                                                                                                  v37,
                                                                                                  v38,
                                                                                                  v39);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v43,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v43 )
    goto LABEL_37;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v43,
    (System_Collections_Generic_IEnumerable_T__o *)data->fields.startVoiceIdArray,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_string__AddRange__);
  v44 = BasicHelper__Shuffle_string_(
          (System_Collections_Generic_List_T__o *)v43,
          (const MethodInfo_18B8AE4 *)Method_BasicHelper_Shuffle_string___);
  if ( !v44 )
    goto LABEL_37;
  if ( !v44->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  resultVoiceIdArray = data->fields.resultVoiceIdArray;
  if ( !resultVoiceIdArray
    || (v50 = (System_Int32_array **)v44->fields._items->m_Items[0],
        v51 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B170CC(
                                                                                 System_Collections_Generic_List_object__TypeInfo,
                                                                                 v45,
                                                                                 v46,
                                                                                 v47,
                                                                                 v48),
        System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
          v51,
          resultVoiceIdArray->max_length,
          (const MethodInfo_2F250E4 *)Method_System_Collections_Generic_List_object___ctor___66739816),
        !v51) )
  {
LABEL_37:
    sub_B170D4();
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v51,
    (System_Collections_Generic_IEnumerable_T__o *)resultVoiceIdArray,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_object__AddRange__);
  if ( v51->fields._size <= (unsigned int)v42 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v52 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v51->fields._items->m_Items[v42];
  if ( !v52 )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v51,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_object__Clear__);
    sub_B170D4();
  }
  v53 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v52->klass->_2.bitflags2 + 1) < (unsigned int)v53
    || (System_Collections_Generic_Dictionary_string__object__c *)v52->klass->_2.typeHierarchy[v53 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    Item = (System_Collections_Generic_List_T__o *)sub_B173C8(v52);
LABEL_40:
    v35 = sub_B173C8(Item);
    goto LABEL_41;
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v51,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_object__Clear__);
  Item = (System_Collections_Generic_List_T__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                   v52,
                                                   (System_Type_o *)StringLiteral_23083/*"voice"*/,
                                                   (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    v55 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v55
      || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v55 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_40;
    }
  }
  v56 = BasicHelper__Shuffle_string_(Item, (const MethodInfo_18B8AE4 *)Method_BasicHelper_Shuffle_object___);
  if ( !v56 )
    goto LABEL_37;
  if ( !v56->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v57 = v56->fields._items->m_Items[0];
  if ( !v57 )
    goto LABEL_37;
  v58 = (System_Int32_array **)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v57->klass->vtable[3].method)(
                                 v57,
                                 v57->klass->vtable[4].methodPtr);
  v35 = sub_B17014(string___TypeInfo, 2LL, v59);
  if ( !v35 )
    goto LABEL_37;
  v65 = (struct System_String_array *)v35;
  if ( v50 )
  {
    v35 = sub_B170BC(v50, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
    if ( !v35 )
      goto LABEL_41;
  }
  if ( !v65->max_length )
    goto LABEL_38;
  v65->m_Items[0] = (System_String_o *)v50;
  sub_B16F98((BattleServantConfConponent_o *)v65->m_Items, v50, v37, v60, v61, v62, v63, v64);
  if ( v58 )
  {
    v35 = sub_B170BC(v58, v65->obj.klass->_1.element_class);
    if ( !v35 )
    {
LABEL_41:
      sub_B170F4(v35);
      sub_B170A0();
    }
  }
  if ( v65->max_length <= 1 )
  {
LABEL_38:
    sub_B17100(v35, v36, v37);
    sub_B170A0();
  }
  v65->m_Items[1] = (System_String_o *)v58;
  sub_B16F98((BattleServantConfConponent_o *)&v65->m_Items[1], v58, v37, v66, v67, v68, v69, v70);
  this->fields.voiceIdArray = v65;
  p_voiceIdArray = &this->fields.voiceIdArray;
  sub_B16F98((BattleServantConfConponent_o *)p_voiceIdArray, (System_Int32_array **)v65, v72, v73, v74, v75, v76, v77);
  v79 = (System_String_o *)*(p_voiceIdArray - 1);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(v79, endCb, 1, v78);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *animationName; // x19
  Il2CppObject *v15; // x0
  System_String_o *v16; // x19
  SimpleAnimation_o *Component_WebViewObject; // x21
  UnityEngine_Animation_o *v18; // x20
  int32_t animationType; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F9C81 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Animation___, animCallback);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v10);
    sub_B16FFC(&int_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_23557/*"{0}{1}"*/, v13);
    byte_40F9C81 = 1;
  }
  this->fields.endCallback = animCallback;
  sub_B16F98(
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
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationType);
  v16 = System_String__Format_43739268((System_String_o *)StringLiteral_23557/*"{0}{1}"*/, animationName, v15, 0LL);
  Component_WebViewObject = (SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)this,
                                                   (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v18 = (UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
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
    {
      SimpleAnimation__Play_16380456(Component_WebViewObject, v16, 0LL);
      return;
    }
LABEL_16:
    sub_B170D4();
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL) )
  {
    if ( !v18 )
      goto LABEL_16;
    UnityEngine_Animation__Play_49744236(v18, v16, 0LL);
  }
}