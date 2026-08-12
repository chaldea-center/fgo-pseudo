void PlaySubBgmOnEnableComponent___ctor(PlaySubBgmOnEnableComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_string__c *v3; // x0
  System_Collections_Generic_HashSet_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_596FD89 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_string__TypeInfo);
    byte_596FD89 = 1;
  }
  v3 = System_Collections_Generic_HashSet_string__TypeInfo;
  this->fields.subBgmId = -1;
  this->fields.volume = 1.0;
  v4 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_HashSet_object____ctor(
    v4,
    (const MethodInfo_42BA2CC *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.mainBgmNameList = (struct System_Collections_Generic_HashSet_string__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainBgmNameList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  this->fields.isWaitingForMainBgm = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void PlaySubBgmOnEnableComponent__Awake(PlaySubBgmOnEnableComponent_o *this, const MethodInfo *method)
{
  int v3; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_String_o *monitor; // x1
  struct System_Int32_array *mainBgmIdList; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v15; // x25
  int32_t v16; // w20
  Il2CppObject *v17; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_596FD83 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_BgmMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string__Add__);
    byte_596FD83 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v17 = 0;
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    goto LABEL_28;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  this->fields.subBgmId,
                                                                  (const MethodInfo_3F10B80 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_28;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__IsNullOrEmpty(
                                                                    (System_String_o *)entity[1].monitor,
                                                                    0);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      if ( !entity )
        goto LABEL_28;
      monitor = (struct System_String_o *)entity[1].monitor;
      this->fields.subBgmName = monitor;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.subBgmName,
        (int32_t)monitor,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
    }
  }
  mainBgmIdList = this->fields.mainBgmIdList;
  if ( !mainBgmIdList )
LABEL_28:
    sub_2213CDC(Master_object, v5);
  max_length = mainBgmIdList->max_length;
  if ( (int)max_length >= 1 )
  {
    v15 = 0;
    do
    {
      if ( v15 >= (unsigned int)max_length )
        sub_2213CE4(Master_object);
      v16 = mainBgmIdList->m_Items[v15];
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BgmMaster___);
      if ( !Master_object )
        goto LABEL_28;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                      Master_object,
                                                                      &v17,
                                                                      v16,
                                                                      (const MethodInfo_3F10B80 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !v17 )
          goto LABEL_28;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__IsNullOrEmpty(
                                                                        (System_String_o *)v17[1].monitor,
                                                                        0);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          if ( !v17 )
            goto LABEL_28;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.mainBgmNameList;
          if ( !Master_object )
            goto LABEL_28;
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_HashSet_object___Add(
                                                                          (System_Collections_Generic_HashSet_object__o *)Master_object,
                                                                          (Il2CppObject *)v17[1].monitor,
                                                                          (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_string__Add__);
        }
      }
      LODWORD(max_length) = mainBgmIdList->max_length;
    }
    while ( (__int64)++v15 < (int)max_length );
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v5);
  this->fields.isKeepSubBgmOriginal = BgmManager__GetIsKeepSubBgm(0);
}


// local variable allocation has failed, the output may be wrong!
void PlaySubBgmOnEnableComponent__ChangeKeepSubBgmStateIfNeed(
        PlaySubBgmOnEnableComponent_o *this,
        bool isKeep,
        const MethodInfo *method)
{
  struct System_Int32_array *mainBgmIdList; // x8

  if ( (byte_596FD88 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_596FD88 = 1;
  }
  if ( !this->fields.isKeepSubBgmOriginal )
  {
    mainBgmIdList = this->fields.mainBgmIdList;
    if ( !mainBgmIdList || !mainBgmIdList->max_length )
    {
      if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, isKeep);
      BgmManager__Enable_KeepSubBgm(isKeep, 0);
    }
  }
}


System_Collections_IEnumerator_o *PlaySubBgmOnEnableComponent__CoWaitUntilMainBgmStartAndPlaySubBgm(
        PlaySubBgmOnEnableComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596FD85 & 1) == 0 )
  {
    sub_2213A60(&PlaySubBgmOnEnableComponent__CoWaitUntilMainBgmStartAndPlaySubBgm_d__14_TypeInfo);
    byte_596FD85 = 1;
  }
  v3 = sub_2213CCC(PlaySubBgmOnEnableComponent__CoWaitUntilMainBgmStartAndPlaySubBgm_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


bool PlaySubBgmOnEnableComponent__IsPlayTargetMainBgm(PlaySubBgmOnEnableComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_object__o *mainBgmNameList; // x19
  Il2CppObject *BgmName; // x1

  if ( (byte_596FD87 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string__get_Count__);
    byte_596FD87 = 1;
  }
  mainBgmNameList = (System_Collections_Generic_HashSet_object__o *)this->fields.mainBgmNameList;
  if ( !mainBgmNameList || mainBgmNameList->fields._count < 1 )
    return 1;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmName = (Il2CppObject *)BgmManager__GetBgmName(0);
  return System_Collections_Generic_HashSet_object___Contains(
           mainBgmNameList,
           BgmName,
           (const MethodInfo_42BA9D0 *)Method_System_Collections_Generic_HashSet_string__Contains__);
}


void PlaySubBgmOnEnableComponent__OnDisable(PlaySubBgmOnEnableComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_IEnumerator_o *mainBgmWaitCoroutine; // x1

  mainBgmWaitCoroutine = this->fields.mainBgmWaitCoroutine;
  if ( mainBgmWaitCoroutine )
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, mainBgmWaitCoroutine, 0);
  PlaySubBgmOnEnableComponent__ChangeKeepSubBgmStateIfNeed(this, 0, v2);
}


void PlaySubBgmOnEnableComponent__OnEnable(PlaySubBgmOnEnableComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2

  if ( !System_String__IsNullOrEmpty(this->fields.subBgmName, 0) )
  {
    this->fields.isWaitingForMainBgm = 1;
    PlaySubBgmOnEnableComponent__PlayAfterMainBgmStart(this, v3);
    PlaySubBgmOnEnableComponent__ChangeKeepSubBgmStateIfNeed(this, 1, v4);
  }
}


void PlaySubBgmOnEnableComponent__PlayAfterMainBgmStart(PlaySubBgmOnEnableComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float volume; // s8
  float fadeTime; // s9
  System_String_o *subBgmName; // x20
  struct System_Collections_IEnumerator_o *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596FD86 & 1) == 0 )
  {
    sub_2213A60(&SoundManager_TypeInfo);
    byte_596FD86 = 1;
  }
  if ( PlaySubBgmOnEnableComponent__IsPlayTargetMainBgm(this, method) )
  {
    volume = this->fields.volume;
    fadeTime = this->fields.fadeTime;
    subBgmName = this->fields.subBgmName;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v3);
    SoundManager__PlaySubBgm_48506544(subBgmName, volume, fadeTime, 0);
    this->fields.isWaitingForMainBgm = 0;
  }
  else
  {
    v7 = PlaySubBgmOnEnableComponent__CoWaitUntilMainBgmStartAndPlaySubBgm(this, v3);
    this->fields.mainBgmWaitCoroutine = v7;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mainBgmWaitCoroutine,
      (int32_t)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756(
      (UnityEngine_MonoBehaviour_o *)this,
      this->fields.mainBgmWaitCoroutine,
      0);
  }
}


void PlaySubBgmOnEnableComponent__Update(PlaySubBgmOnEnableComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *subBgmName; // x20
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  float volume; // s8
  float fadeTime; // s9
  System_String_o *v11; // x20

  if ( (byte_596FD84 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_596FD84 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.subBgmName, 0)
    && !this->fields.isWaitingForMainBgm
    && this->fields.isRestart )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_2213CDC(0, v4);
    if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    {
      subBgmName = this->fields.subBgmName;
      if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v5);
      if ( !BgmManager__IsPlayBgm(subBgmName, 0) && PlaySubBgmOnEnableComponent__IsPlayTargetMainBgm(this, v7) )
      {
        volume = this->fields.volume;
        fadeTime = this->fields.fadeTime;
        v11 = this->fields.subBgmName;
        if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v8);
        SoundManager__PlaySubBgm_48506544(v11, volume, fadeTime, 0);
      }
    }
  }
}


void PlaySubBgmOnEnableComponent__CoWaitUntilMainBgmStartAndPlaySubBgm_d__14___ctor(
        PlaySubBgmOnEnableComponent__CoWaitUntilMainBgmStartAndPlaySubBgm_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool PlaySubBgmOnEnableComponent__CoWaitUntilMainBgmStartAndPlaySubBgm_d__14__MoveNext(
        PlaySubBgmOnEnableComponent__CoWaitUntilMainBgmStartAndPlaySubBgm_d__14_o *this,
        const MethodInfo *method)
{
  PlaySubBgmOnEnableComponent__CoWaitUntilMainBgmStartAndPlaySubBgm_d__14_o *v2; // x19
  int32_t _1__state; // w22
  struct PlaySubBgmOnEnableComponent_o *_4__this; // x20
  float volume; // s8
  float fadeTime; // s9
  System_String_o *subBgmName; // x19
  System_Func_bool__o *v8; // x21
  UnityEngine_WaitUntil_o *v9; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  v2 = this;
  if ( (byte_596FD8A & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_PlaySubBgmOnEnableComponent_IsPlayTargetMainBgm__);
    sub_2213A60(&SoundManager_TypeInfo);
    this = (PlaySubBgmOnEnableComponent__CoWaitUntilMainBgmStartAndPlaySubBgm_d__14_o *)sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    byte_596FD8A = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      v2->fields.__1__state = -1;
      if ( !_4__this )
        sub_2213CDC(this, method);
      volume = _4__this->fields.volume;
      fadeTime = _4__this->fields.fadeTime;
      subBgmName = _4__this->fields.subBgmName;
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
      SoundManager__PlaySubBgm_48506544(subBgmName, volume, fadeTime, 0);
      _4__this->fields.isWaitingForMainBgm = 0;
    }
  }
  else
  {
    v2->fields.__1__state = -1;
    v8 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v8, (Il2CppObject *)_4__this, Method_PlaySubBgmOnEnableComponent_IsPlayTargetMainBgm__, 0);
    v9 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v9, v8, 0);
    v2->fields.__2__current = (Il2CppObject *)v9;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current, (int32_t)v9, v10, v11, v12, v13, v14, v15);
    v2->fields.__1__state = 1;
  }
  return _1__state == 0;
}


Il2CppObject *PlaySubBgmOnEnableComponent__CoWaitUntilMainBgmStartAndPlaySubBgm_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        PlaySubBgmOnEnableComponent__CoWaitUntilMainBgmStartAndPlaySubBgm_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn PlaySubBgmOnEnableComponent__CoWaitUntilMainBgmStartAndPlaySubBgm_d__14__System_Collections_IEnumerator_Reset(
        PlaySubBgmOnEnableComponent__CoWaitUntilMainBgmStartAndPlaySubBgm_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_PlaySubBgmOnEnableComponent__CoWaitUntilMainBgmStartAndPlaySubBgm_d__14_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *PlaySubBgmOnEnableComponent__CoWaitUntilMainBgmStartAndPlaySubBgm_d__14__System_Collections_IEnumerator_get_Current(
        PlaySubBgmOnEnableComponent__CoWaitUntilMainBgmStartAndPlaySubBgm_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void PlaySubBgmOnEnableComponent__CoWaitUntilMainBgmStartAndPlaySubBgm_d__14__System_IDisposable_Dispose(
        PlaySubBgmOnEnableComponent__CoWaitUntilMainBgmStartAndPlaySubBgm_d__14_o *this,
        const MethodInfo *method)
{
  ;
}