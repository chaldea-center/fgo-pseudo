void ExRoomServant___ctor(ExRoomServant_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct System_String_o *v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596AE78 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ExRoomServant_VoiceType__List_string____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_ExRoomServant_VoiceType__List_string___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49);
    sub_2213A60(&ExRoomServant_VoiceType___TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596AE78 = 1;
  }
  v3 = (System_Array_o *)sub_2213B20(ExRoomServant_VoiceType___TypeInfo, 6);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v3,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__90D856B7ECAC90C26898AF8A46404297AA0EF65768F62FDF8C3F08294BCBEE49,
    0);
  this->fields.targetSavePlayedVoiceTypes = (struct ExRoomServant_VoiceType_array *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetSavePlayedVoiceTypes,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.currentFaceId = -1;
  this->fields.currentVoiceDataName = v10;
  *(_QWORD *)&this->fields.currentSvtId = -1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentVoiceDataName,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_ExRoomServant_VoiceType__List_string___TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v17,
    (const MethodInfo_3FBB9EC *)Method_System_Collections_Generic_Dictionary_ExRoomServant_VoiceType__List_string____ctor__);
  this->fields.playedVoice = (struct System_Collections_Generic_Dictionary_ExRoomServant_VoiceType__List_string___o *)v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playedVoice, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ExRoomServant__Awake(ExRoomServant_o *this, const MethodInfo *method)
{
  ;
}


void ExRoomServant__ClearServant(ExRoomServant_o *this, const MethodInfo *method)
{
  StandFigureBack_o *servantFigure; // x0
  const MethodInfo *v4; // x1

  servantFigure = this->fields.servantFigure;
  if ( !servantFigure )
    sub_2213CDC(0, method);
  StandFigureBack__DestroyFigure(servantFigure, 0);
  ExRoomServant__ClearVoice(this, v4);
}


void ExRoomServant__ClearVoice(ExRoomServant_o *this, const MethodInfo *method)
{
  struct System_String_o **p_currentVoiceDataName; // x20
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x21
  int32_t v7; // w1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596AE72 & 1) == 0 )
  {
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596AE72 = 1;
  }
  ExRoomServant__StopVoice(this, method);
  p_currentVoiceDataName = &this->fields.currentVoiceDataName;
  if ( !System_String__IsNullOrEmpty(this->fields.currentVoiceDataName, 0) )
  {
    v6 = *p_currentVoiceDataName;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v4, v5);
    SoundManager__releaseAudioAssetStorage(v6, 0);
    v7 = (int)StringLiteral_1/*""*/;
    *p_currentVoiceDataName = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.currentVoiceDataName, v7, v8, v9, v10, v11, v12, v13);
  }
  ExRoomServant__ResetPlayedVoice(this, v4);
}


void ExRoomServant__FadeIn(ExRoomServant_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  StandFigureBack_o *servantFigure; // x19
  System_Action_o *v15; // x20

  if ( (byte_596AE74 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ExRoomServant___c__DisplayClass18_0__FadeIn_b__0__);
    sub_2213A60(&ExRoomServant___c__DisplayClass18_0_TypeInfo);
    byte_596AE74 = 1;
  }
  v5 = sub_2213CCC(ExRoomServant___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = callback,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13),
        servantFigure = this->fields.servantFigure,
        v15 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v15, (Il2CppObject *)v5, Method_ExRoomServant___c__DisplayClass18_0__FadeIn_b__0__, 0),
        !servantFigure) )
  {
    sub_2213CDC(v6, v7);
  }
  StandFigureBack__Fadein(servantFigure, v15, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ExRoomServant__GetVoiceId(ExRoomServant_o *this, int32_t voiceType, const MethodInfo *method)
{
  System_String_array *VoiceIds; // x0
  System_String_array *v6; // x19
  Il2CppObject *v7; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *playedVoice; // x0
  System_Collections_Generic_List_object__o *v9; // x22
  System_Collections_Generic_List_object__o *v10; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v12; // x21
  System_String_o **m_Items; // x24
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  int32_t v24; // w1
  int32_t v25; // w0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_List_object__o *v32; // x8
  Il2CppClass *klass; // x9
  _QWORD *v34; // x10
  __int64 v35; // x11
  void **v36; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596AE77 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ExRoomServant_VoiceType__List_string___Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ExRoomServant_VoiceType__List_string___TryGetValue__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_ExRoomServant_VoiceType___);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor___91665496);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    byte_596AE77 = 1;
  }
  value = 0;
  VoiceIds = ExRoomServant_VoiceConstant__GetVoiceIds(voiceType, *(const MethodInfo **)&voiceType);
  v6 = VoiceIds;
  if ( VoiceIds )
  {
    if ( !VoiceIds->max_length )
      return 0;
    if ( System_Linq_Enumerable__Contains_Int32Enum_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targetSavePlayedVoiceTypes,
           voiceType,
           (const MethodInfo_3876740 *)Method_System_Linq_Enumerable_Contains_ExRoomServant_VoiceType___) )
    {
      playedVoice = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.playedVoice;
      if ( !playedVoice )
        goto LABEL_33;
      if ( !System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue(
              playedVoice,
              voiceType,
              &value,
              (const MethodInfo_3FBDE7C *)Method_System_Collections_Generic_Dictionary_ExRoomServant_VoiceType__List_string___TryGetValue__) )
      {
        v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v9,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
        playedVoice = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.playedVoice;
        value = (Il2CppObject *)v9;
        if ( !playedVoice )
          goto LABEL_33;
        System_Collections_Generic_Dictionary_Int32Enum__object___Add(
          playedVoice,
          voiceType,
          (Il2CppObject *)v9,
          (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_ExRoomServant_VoiceType__List_string___Add__);
      }
      v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor_71840884(
        v10,
        v6->max_length,
        (const MethodInfo_4483474 *)Method_System_Collections_Generic_List_string___ctor___91665496);
      max_length = v6->max_length;
      if ( (int)max_length >= 1 )
      {
        v12 = 0;
        m_Items = v6->m_Items;
        while ( v12 < (unsigned int)max_length )
        {
          playedVoice = (System_Collections_Generic_Dictionary_TKey__TValue__o *)value;
          if ( !value )
            goto LABEL_33;
          playedVoice = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_List_object___Contains(
                                                                                   (System_Collections_Generic_List_object__o *)value,
                                                                                   (Il2CppObject *)m_Items[v12],
                                                                                   (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__);
          if ( ((unsigned __int8)playedVoice & 1) == 0 )
          {
            if ( v12 >= LODWORD(v6->max_length) )
              break;
            if ( !v10 )
              goto LABEL_33;
            items = v10->fields._items;
            v7 = (Il2CppObject *)m_Items[v12];
            v21 = Method_System_Collections_Generic_List_string__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_33;
            size = v10->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                v7,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v7;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v7, v14, v15, v16, v17, v18, v19);
            }
          }
          LODWORD(max_length) = v6->max_length;
          if ( (__int64)++v12 >= (int)max_length )
            goto LABEL_22;
        }
LABEL_34:
        sub_2213CE4(playedVoice);
      }
LABEL_22:
      if ( !v10 )
LABEL_33:
        sub_2213CDC(playedVoice, v7);
      v24 = v10->fields._size;
      if ( v24 )
      {
        v25 = UnityEngine_Random__Range_83400680(0, v24, 0);
        playedVoice = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_List_object___get_Item(
                                                                                 v10,
                                                                                 v25,
                                                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
        v32 = (System_Collections_Generic_List_object__o *)value;
        if ( value )
        {
          klass = value[1].klass;
          v34 = Method_System_Collections_Generic_List_string__Add__;
          ++HIDWORD(value[1].monitor);
          if ( klass )
          {
            v35 = v32->fields._size;
            v6 = (System_String_array *)playedVoice;
            if ( (unsigned int)v35 >= LODWORD(klass->_1.namespaze) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v32,
                (Il2CppObject *)playedVoice,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v36 = &klass->_1.image + v35;
              v32->fields._size = v35 + 1;
              v36[4] = v6;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 4), (int32_t)v6, v26, v27, v28, v29, v30, v31);
            }
            return (System_String_o *)v6;
          }
        }
        goto LABEL_33;
      }
      return 0;
    }
    playedVoice = (System_Collections_Generic_Dictionary_TKey__TValue__o *)UnityEngine_Random__Range_83400680(
                                                                             0,
                                                                             v6->max_length,
                                                                             0);
    if ( (unsigned int)playedVoice >= LODWORD(v6->max_length) )
      goto LABEL_34;
    return v6->m_Items[(int)playedVoice];
  }
  return (System_String_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
void ExRoomServant__PlayVoice(ExRoomServant_o *this, int32_t voiceType, bool isForce, const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  System_String_o *VoiceId; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t SvtVoiceId; // w21
  Il2CppObject *Master_object; // x23
  int32_t currentLimitCount; // w22
  System_String_o *v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_ServantVoiceData____o *EntityShopCombine; // x20
  const MethodInfo *v17; // x2
  System_Collections_IEnumerator_o *started; // x0
  struct UnityEngine_Coroutine_o *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_596AE75 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantVoiceMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&StringLiteral_1227/*"0_"*/);
    byte_596AE75 = 1;
  }
  if ( isForce )
  {
    this->fields.isReservePlayVoice = 0;
  }
  else if ( this->fields.isReservePlayVoice )
  {
    return;
  }
  ExRoomServant__StopVoice(this, *(const MethodInfo **)&voiceType);
  if ( voiceType )
  {
    VoiceId = ExRoomServant__GetVoiceId(this, voiceType, v7);
    if ( !System_String__IsNullOrEmpty(VoiceId, 0) )
    {
      SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(this->fields.currentSvtId, 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
      currentLimitCount = this->fields.currentLimitCount;
      v14 = System_String__Concat_75651716((System_String_o *)StringLiteral_1227/*"0_"*/, VoiceId, 0);
      if ( !Master_object )
        sub_2213CDC(v14, v15);
      EntityShopCombine = ServantVoiceMaster__getEntityShopCombine(
                            (ServantVoiceMaster_o *)Master_object,
                            15,
                            SvtVoiceId,
                            currentLimitCount,
                            v14,
                            0);
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EntityShopCombine, 0) )
      {
        started = ExRoomServant__StartPlayVoice(this, EntityShopCombine, v17);
        v19 = UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, started, 0);
        this->fields.playVoiceCoroutine = v19;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.playVoiceCoroutine,
          (int32_t)v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ExRoomServant__PlayVoice_39137056(
        ExRoomServant_o *this,
        int32_t currentState,
        int32_t prevState,
        bool isForce,
        const MethodInfo *method)
{
  int32_t v5; // w1
  int v6; // w8

  switch ( currentState )
  {
    case 1:
      if ( prevState == 3 )
        v6 = 3;
      else
        v6 = 1;
      if ( prevState == 2 )
        v5 = 2;
      else
        v5 = v6;
      break;
    case 3:
      v5 = 6;
      break;
    case 2:
      v5 = 4;
      break;
    default:
      v5 = 0;
      break;
  }
  ExRoomServant__PlayVoice(this, v5, isForce, (const MethodInfo *)isForce);
}


void ExRoomServant__ReservePlayVoice(ExRoomServant_o *this, bool isReserve, const MethodInfo *method)
{
  this->fields.isReservePlayVoice = isReserve;
}


void ExRoomServant__ResetPlayedVoice(ExRoomServant_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *playedVoice; // x0

  if ( (byte_596AE73 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ExRoomServant_VoiceType__List_string___Clear__);
    byte_596AE73 = 1;
  }
  playedVoice = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.playedVoice;
  if ( !playedVoice )
    sub_2213CDC(0, method);
  System_Collections_Generic_Dictionary_Int32Enum__object___Clear(
    playedVoice,
    (const MethodInfo_3FBC528 *)Method_System_Collections_Generic_Dictionary_ExRoomServant_VoiceType__List_string___Clear__);
}


// local variable allocation has failed, the output may be wrong!
void ExRoomServant__SetServant(
        ExRoomServant_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t faceId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  StandFigureBack_o *servantFigure; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  System_Collections_IEnumerator_o *started; // x1

  servantFigure = this->fields.servantFigure;
  if ( !servantFigure
    || (StandFigureBack__Init(servantFigure, 0),
        ExRoomServant__ClearVoice(this, v12),
        this->fields.isReservePlayVoice = 0,
        this->fields.currentSvtId = svtId,
        this->fields.currentLimitCount = limitCount,
        this->fields.currentFaceId = faceId,
        (servantFigure = (StandFigureBack_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(servantFigure, *(_QWORD *)&svtId);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFigure, 1, 0);
  started = ExRoomServant__StartSetServant(this, callback, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, started, 0);
}


System_Collections_IEnumerator_o *ExRoomServant__StartPlayVoice(
        ExRoomServant_o *this,
        System_Collections_Generic_List_ServantVoiceData____o *listVoiceDatas,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596AE76 & 1) == 0 )
  {
    sub_2213A60(&ExRoomServant__StartPlayVoice_d__22_TypeInfo);
    byte_596AE76 = 1;
  }
  v5 = sub_2213CCC(ExRoomServant__StartPlayVoice_d__22_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 32) = listVoiceDatas;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)listVoiceDatas, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *ExRoomServant__StartSetServant(
        ExRoomServant_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596AE71 & 1) == 0 )
  {
    sub_2213A60(&ExRoomServant__StartSetServant_d__14_TypeInfo);
    byte_596AE71 = 1;
  }
  v5 = sub_2213CCC(ExRoomServant__StartSetServant_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)callback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void ExRoomServant__StopVoice(ExRoomServant_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *playVoiceCoroutine; // x1
  struct UnityEngine_Coroutine_o **p_playVoiceCoroutine; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  SePlayer_o *voicePlayer; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  StandFigureBack_o *servantFigure; // x0

  p_playVoiceCoroutine = &this->fields.playVoiceCoroutine;
  playVoiceCoroutine = this->fields.playVoiceCoroutine;
  if ( playVoiceCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_83445360((UnityEngine_MonoBehaviour_o *)this, playVoiceCoroutine, 0);
    this->fields.playVoiceCoroutine = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_playVoiceCoroutine, 0, v5, v6, v7, v8, v9, v10);
  }
  voicePlayer = this->fields.voicePlayer;
  if ( voicePlayer )
  {
    SePlayer__Destroy(voicePlayer, 0);
    this->fields.voicePlayer = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.voicePlayer, 0, v12, v13, v14, v15, v16, v17);
  }
  servantFigure = this->fields.servantFigure;
  if ( !servantFigure )
    sub_2213CDC(0, playVoiceCoroutine);
  StandFigureBack__SetFaceType(servantFigure, this->fields.currentFaceId, 0.0, 0, 0);
}


void ExRoomServant_VoiceConstant___ctor(ExRoomServant_VoiceConstant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_array *ExRoomServant_VoiceConstant__GetVoiceIds(int32_t voiceType, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *VoiceKey; // x19
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  System_String_array *result; // x0

  if ( (byte_596AE79 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596AE79 = 1;
  }
  VoiceKey = ExRoomServant_VoiceConstant__GetVoiceKey(voiceType, method);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v7);
  result = ConstantStrMaster__GetVoiceIds((ConstantStrMaster_o *)Master_object, VoiceKey, 0);
  if ( result )
  {
    if ( !result->max_length )
      return 0;
  }
  return result;
}


System_String_o *ExRoomServant_VoiceConstant__GetVoiceKey(int32_t voiceType, const MethodInfo *method)
{
  System_String_o *result; // x0
  __int64 *v4; // x8

  if ( (byte_596AE7A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6076/*"EX_ROOM_SCENE_VOICE_BACK_SHOP"*/);
    sub_2213A60(&StringLiteral_6078/*"EX_ROOM_SCENE_VOICE_MISSION_GET_RARE"*/);
    sub_2213A60(&StringLiteral_6079/*"EX_ROOM_SCENE_VOICE_QUEST_WELCOME"*/);
    sub_2213A60(&StringLiteral_6082/*"EX_ROOM_SCENE_VOICE_SHOP_WELCOME"*/);
    sub_2213A60(&StringLiteral_6083/*"EX_ROOM_SCENE_VOICE_WELCOME"*/);
    sub_2213A60(&StringLiteral_6081/*"EX_ROOM_SCENE_VOICE_SHOP_EXCHANGE"*/);
    sub_2213A60(&StringLiteral_6075/*"EX_ROOM_SCENE_VOICE_BACK_QUEST"*/);
    sub_2213A60(&StringLiteral_6080/*"EX_ROOM_SCENE_VOICE_QUEST_WELCOME_BATTLE"*/);
    sub_2213A60(&StringLiteral_6077/*"EX_ROOM_SCENE_VOICE_MISSION_GET_NORMAL"*/);
    byte_596AE7A = 1;
  }
  result = 0;
  if ( voiceType <= 4 )
  {
    if ( voiceType > 2 )
    {
      if ( voiceType == 3 )
        v4 = &StringLiteral_6076/*"EX_ROOM_SCENE_VOICE_BACK_SHOP"*/;
      else
        v4 = &StringLiteral_6079/*"EX_ROOM_SCENE_VOICE_QUEST_WELCOME"*/;
    }
    else if ( voiceType == 1 )
    {
      v4 = &StringLiteral_6083/*"EX_ROOM_SCENE_VOICE_WELCOME"*/;
    }
    else
    {
      if ( voiceType != 2 )
        return result;
      v4 = &StringLiteral_6075/*"EX_ROOM_SCENE_VOICE_BACK_QUEST"*/;
    }
  }
  else if ( voiceType <= 6 )
  {
    if ( voiceType == 5 )
      v4 = &StringLiteral_6080/*"EX_ROOM_SCENE_VOICE_QUEST_WELCOME_BATTLE"*/;
    else
      v4 = &StringLiteral_6082/*"EX_ROOM_SCENE_VOICE_SHOP_WELCOME"*/;
  }
  else
  {
    switch ( voiceType )
    {
      case 7:
        v4 = &StringLiteral_6081/*"EX_ROOM_SCENE_VOICE_SHOP_EXCHANGE"*/;
        break;
      case 8:
        v4 = &StringLiteral_6077/*"EX_ROOM_SCENE_VOICE_MISSION_GET_NORMAL"*/;
        break;
      case 9:
        v4 = &StringLiteral_6078/*"EX_ROOM_SCENE_VOICE_MISSION_GET_RARE"*/;
        break;
      default:
        return result;
    }
  }
  return (System_String_o *)*v4;
}


void ExRoomServant__StartPlayVoice_d__22___ctor(
        ExRoomServant__StartPlayVoice_d__22_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ExRoomServant__StartPlayVoice_d__22__MoveNext(
        ExRoomServant__StartPlayVoice_d__22_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ExRoomServant__StartPlayVoice_d__22_o *v8; // x19
  int32_t _1__state; // w8
  struct ExRoomServant_o *_4__this; // x20
  Il2CppObject *Item; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int v24; // w8
  StandFigureBack_o *servantFigure; // x21
  int32_t _2__current_high; // w22
  float FadeTime; // s0
  __int64 v28; // x2
  struct ServantVoiceData_o *v29; // x8
  System_String_o *currentVoiceDataName; // x21
  System_String_o *id; // x22
  SoundManager_c *v32; // x0
  Il2CppObject *v33; // x23
  float DEFAULT_VOLUME; // s8
  System_Action_o *v35; // x24
  SePlayer_o *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  Il2CppObject *v43; // x20
  System_Func_bool__o *v44; // x21
  UnityEngine_WaitWhile_o *v45; // x20
  MissionNaviTransitionBoardItem_o *v46; // x19
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  bool v53; // w20
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  struct ServantVoiceData_array *_7__wrap1; // x9
  int max_length; // w10
  struct ServantVoiceData_o *v62; // x1
  Il2CppObject *v63; // x21
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  struct ExRoomServant___c__DisplayClass22_0_o *_8__1; // x8
  struct ServantVoiceData_o *voiceData_5__4; // x9
  float delay; // s8
  UnityEngine_WaitForSeconds_o *v73; // x21
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7

  v8 = this;
  if ( (byte_596AE7B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&Method_ExRoomServant___c__DisplayClass22_0__StartPlayVoice_b__0__);
    sub_2213A60(&Method_ExRoomServant___c__DisplayClass22_0__StartPlayVoice_b__1__);
    sub_2213A60(&ExRoomServant___c__DisplayClass22_0_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (ExRoomServant__StartPlayVoice_d__22_o *)sub_2213A60(&UnityEngine_WaitWhile_TypeInfo);
    byte_596AE7B = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
    v8->fields.__8__1 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.__8__1, 0, v2, v3, v4, v5, v6, v7);
    v8->fields._voiceData_5__4 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields._voiceData_5__4, 0, v54, v55, v56, v57, v58, v59);
    v24 = v8->fields.__7__wrap2 + 1;
    v8->fields.__7__wrap2 = v24;
    goto LABEL_16;
  }
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    this = (ExRoomServant__StartPlayVoice_d__22_o *)v8->fields.listVoiceDatas;
    v8->fields.__1__state = -1;
    if ( !this )
      goto LABEL_27;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             0,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    v8->fields.__7__wrap1 = (struct ServantVoiceData_array *)Item;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.__7__wrap1, (int32_t)Item, v12, v13, v14, v15, v16, v17);
    v24 = 0;
    v8->fields.__7__wrap2 = 0;
LABEL_16:
    this = (ExRoomServant__StartPlayVoice_d__22_o *)&v8->fields.__7__wrap1;
    _7__wrap1 = v8->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_27;
    max_length = _7__wrap1->max_length;
    if ( v24 < max_length )
    {
      if ( v24 >= (unsigned int)max_length )
        sub_2213CE4(this);
      v62 = _7__wrap1->m_Items[v24];
      v8->fields._voiceData_5__4 = v62;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v8->fields._voiceData_5__4,
        (int32_t)v62,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      v63 = (Il2CppObject *)sub_2213CCC(ExRoomServant___c__DisplayClass22_0_TypeInfo);
      System_Object___ctor(v63, 0);
      v8->fields.__8__1 = (struct ExRoomServant___c__DisplayClass22_0_o *)v63;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.__8__1, (int32_t)v63, v64, v65, v66, v67, v68, v69);
      _8__1 = v8->fields.__8__1;
      if ( _8__1 )
      {
        voiceData_5__4 = v8->fields._voiceData_5__4;
        v53 = 1;
        _8__1->fields.isPlaying = 1;
        if ( voiceData_5__4 )
        {
          delay = voiceData_5__4->fields.delay;
          v73 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v73, delay, 0);
          v8->fields.__2__current = (Il2CppObject *)v73;
          p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
          sub_2213A04(p__2__current, (int32_t)v73, v75, v76, v77, v78, v79, v80);
          p__2__current[-1].fields._BoardType_k__BackingField = 1;
          return v53;
        }
      }
LABEL_27:
      sub_2213CDC(this, method);
    }
    this->klass = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)this, 0, v18, v19, v20, v21, v22, v23);
    if ( !_4__this )
      goto LABEL_27;
    this = (ExRoomServant__StartPlayVoice_d__22_o *)_4__this->fields.servantFigure;
    if ( !this )
      goto LABEL_27;
    StandFigureBack__SetFaceType((StandFigureBack_o *)this, _4__this->fields.currentFaceId, 0.0, 0, 0);
    _4__this->fields.voicePlayer = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.voicePlayer, 0, v81, v82, v83, v84, v85, v86);
    return 0;
  }
  v8->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_27;
  this = (ExRoomServant__StartPlayVoice_d__22_o *)v8->fields._voiceData_5__4;
  if ( !this )
    goto LABEL_27;
  servantFigure = _4__this->fields.servantFigure;
  _2__current_high = HIDWORD(this->fields.__2__current);
  FadeTime = ServantVoiceData__GetFadeTime((ServantVoiceData_o *)this, 0);
  if ( !servantFigure )
    goto LABEL_27;
  StandFigureBack__SetFaceType(servantFigure, _2__current_high, FadeTime, 0, 0);
  v29 = v8->fields._voiceData_5__4;
  if ( !v29 )
    goto LABEL_27;
  currentVoiceDataName = _4__this->fields.currentVoiceDataName;
  id = v29->fields.id;
  v32 = SoundManager_TypeInfo;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method, v28);
    v32 = SoundManager_TypeInfo;
  }
  v33 = (Il2CppObject *)v8->fields.__8__1;
  DEFAULT_VOLUME = v32->static_fields->DEFAULT_VOLUME;
  v35 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v35, v33, Method_ExRoomServant___c__DisplayClass22_0__StartPlayVoice_b__0__, 0);
  v36 = SoundManager__playVoice_48511684(currentVoiceDataName, id, DEFAULT_VOLUME, v35, 0, 0);
  _4__this->fields.voicePlayer = v36;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.voicePlayer,
    (int32_t)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = (Il2CppObject *)v8->fields.__8__1;
  v44 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v44, v43, Method_ExRoomServant___c__DisplayClass22_0__StartPlayVoice_b__1__, 0);
  v45 = (UnityEngine_WaitWhile_o *)sub_2213CCC(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v45, v44, 0);
  v8->fields.__2__current = (Il2CppObject *)v45;
  v46 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
  sub_2213A04(v46, (int32_t)v45, v47, v48, v49, v50, v51, v52);
  v53 = 1;
  v46[-1].fields._BoardType_k__BackingField = 2;
  return v53;
}


Il2CppObject *ExRoomServant__StartPlayVoice_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ExRoomServant__StartPlayVoice_d__22_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ExRoomServant__StartPlayVoice_d__22__System_Collections_IEnumerator_Reset(
        ExRoomServant__StartPlayVoice_d__22_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_ExRoomServant__StartPlayVoice_d__22_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *ExRoomServant__StartPlayVoice_d__22__System_Collections_IEnumerator_get_Current(
        ExRoomServant__StartPlayVoice_d__22_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ExRoomServant__StartPlayVoice_d__22__System_IDisposable_Dispose(
        ExRoomServant__StartPlayVoice_d__22_o *this,
        const MethodInfo *method)
{
  ;
}


void ExRoomServant__StartSetServant_d__14___ctor(
        ExRoomServant__StartSetServant_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ExRoomServant__StartSetServant_d__14__MoveNext(
        ExRoomServant__StartSetServant_d__14_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w27
  struct System_Action_o *callback; // x8
  struct ExRoomServant_o *_4__this; // x21
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  StandFigureBack_o *servantFigure; // x23
  int32_t currentFaceId; // w22
  int32_t currentSvtId; // w24
  int32_t currentLimitCount; // w25
  System_Action_o *v13; // x26
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  MissionNaviTransitionBoardItem_o *p_currentVoiceDataName; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Action_c *v23; // x0
  System_String_o *klass; // x21
  System_Action_o *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  System_Func_bool__o *v28; // x21
  UnityEngine_WaitWhile_o *v29; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int32_t v38; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_596AE7C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&Method_ExRoomServant___c__DisplayClass14_0__StartSetServant_b__0__);
    sub_2213A60(&Method_ExRoomServant___c__DisplayClass14_0__StartSetServant_b__1__);
    sub_2213A60(&Method_ExRoomServant___c__DisplayClass14_0__StartSetServant_b__2__);
    sub_2213A60(&ExRoomServant___c__DisplayClass14_0_TypeInfo);
    sub_2213A60(&UnityEngine_WaitWhile_TypeInfo);
    sub_2213A60(&StringLiteral_4596/*"ChrVoice_"*/);
    byte_596AE7C = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      callback = this->fields.callback;
      this->fields.__1__state = -1;
      if ( callback )
        ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
          callback->fields.method_code,
          callback->fields.method);
    }
  }
  else
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    v6 = sub_2213CCC(ExRoomServant___c__DisplayClass14_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    if ( !v6
      || (*(_DWORD *)(v6 + 16) = 1, !_4__this)
      || (servantFigure = _4__this->fields.servantFigure,
          currentFaceId = _4__this->fields.currentFaceId,
          currentSvtId = _4__this->fields.currentSvtId,
          currentLimitCount = _4__this->fields.currentLimitCount,
          v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
          System_Action___ctor(
            v13,
            (Il2CppObject *)v6,
            Method_ExRoomServant___c__DisplayClass14_0__StartSetServant_b__0__,
            0),
          !servantFigure) )
    {
      sub_2213CDC(v7, v8);
    }
    StandFigureBack__CreatedExRoomStandFigure(servantFigure, currentSvtId, currentLimitCount, 1, currentFaceId, v13, 0);
    v38 = _4__this->fields.currentSvtId;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v38);
    v15 = System_String__Concat((Il2CppObject *)StringLiteral_4596/*"ChrVoice_"*/, v14, 0);
    _4__this->fields.currentVoiceDataName = v15;
    p_currentVoiceDataName = (MissionNaviTransitionBoardItem_o *)&_4__this->fields.currentVoiceDataName;
    sub_2213A04(p_currentVoiceDataName, (int32_t)v15, v17, v18, v19, v20, v21, v22);
    v23 = System_Action_TypeInfo;
    klass = (System_String_o *)p_currentVoiceDataName->klass;
    ++*(_DWORD *)(v6 + 16);
    v25 = (System_Action_o *)sub_2213CCC(v23);
    System_Action___ctor(v25, (Il2CppObject *)v6, Method_ExRoomServant___c__DisplayClass14_0__StartSetServant_b__1__, 0);
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v26, v27);
    SoundManager__loadAudioAssetStorage(klass, v25, 1, 0);
    v28 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v28,
      (Il2CppObject *)v6,
      Method_ExRoomServant___c__DisplayClass14_0__StartSetServant_b__2__,
      0);
    v29 = (UnityEngine_WaitWhile_o *)sub_2213CCC(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v29, v28, 0);
    this->fields.__2__current = (Il2CppObject *)v29;
    p__2__current = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v29, v31, v32, v33, v34, v35, v36);
    *((_DWORD *)p__2__current - 2) = 1;
  }
  return _1__state == 0;
}


Il2CppObject *ExRoomServant__StartSetServant_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ExRoomServant__StartSetServant_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ExRoomServant__StartSetServant_d__14__System_Collections_IEnumerator_Reset(
        ExRoomServant__StartSetServant_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_ExRoomServant__StartSetServant_d__14_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *ExRoomServant__StartSetServant_d__14__System_Collections_IEnumerator_get_Current(
        ExRoomServant__StartSetServant_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ExRoomServant__StartSetServant_d__14__System_IDisposable_Dispose(
        ExRoomServant__StartSetServant_d__14_o *this,
        const MethodInfo *method)
{
  ;
}


void ExRoomServant___c__DisplayClass14_0___ctor(ExRoomServant___c__DisplayClass14_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomServant___c__DisplayClass14_0___StartSetServant_b__0(
        ExRoomServant___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  --this->fields.loadingCount;
}


void ExRoomServant___c__DisplayClass14_0___StartSetServant_b__1(
        ExRoomServant___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  --this->fields.loadingCount;
}


bool ExRoomServant___c__DisplayClass14_0___StartSetServant_b__2(
        ExRoomServant___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  return this->fields.loadingCount > 0;
}


void ExRoomServant___c__DisplayClass18_0___ctor(ExRoomServant___c__DisplayClass18_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomServant___c__DisplayClass18_0___FadeIn_b__0(
        ExRoomServant___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}


void ExRoomServant___c__DisplayClass22_0___ctor(ExRoomServant___c__DisplayClass22_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomServant___c__DisplayClass22_0___StartPlayVoice_b__0(
        ExRoomServant___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  this->fields.isPlaying = 0;
}


bool ExRoomServant___c__DisplayClass22_0___StartPlayVoice_b__1(
        ExRoomServant___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  return this->fields.isPlaying;
}