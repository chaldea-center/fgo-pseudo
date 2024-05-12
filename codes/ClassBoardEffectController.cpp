void __fastcall ClassBoardEffectController___ctor(
        ClassBoardEffectController_o *this,
        System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squares,
        System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *lines,
        MapCamera_o *camera,
        ClassBoardBackground_o *bg,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x24
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  StonePurchaseNotificationMenu_DialogOpenQueue_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  __int64 v43; // x1
  struct System_Action_o *callback; // x20
  System_Action_c *klass; // x8
  unsigned __int64 v46; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 v48; // x0

  if ( (byte_438C433 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_First_ClassBoardSquare___);
    sub_B775C4(&IClassBoardSquareModel_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo);
    byte_438C433 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__);
  this->fields.players = (struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *)v11;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.players,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.squareViewList = squares;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)squares,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.lineViewList = lines;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.lineViewList,
    (System_Int32_array **)lines,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.mapCamera = camera;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mapCamera,
    (System_Int32_array **)camera,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.bgModel = bg;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.bgModel,
    (System_Int32_array **)bg,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)squares,
                                                    (const MethodInfo_1D30534 *)Method_System_Linq_Enumerable_First_ClassBoardSquare___);
  if ( !StonePurchaseNotificationMenu_DialogOpenQueue
    || (callback = StonePurchaseNotificationMenu_DialogOpenQueue[3].fields.callback) == 0LL )
  {
    sub_B7769C(StonePurchaseNotificationMenu_DialogOpenQueue, v43);
  }
  klass = callback->klass;
  if ( *(_WORD *)&callback->klass->_2.bitflags1 )
  {
    v46 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v46;
      p_offset += 2;
      if ( v46 >= *(unsigned __int16 *)&callback->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v48 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_9:
    v48 = sub_B0F4C0(
            StonePurchaseNotificationMenu_DialogOpenQueue[3].fields.callback,
            IClassBoardSquareModel_TypeInfo,
            1LL);
  }
  this->fields.baseId = (*(__int64 (__fastcall **)(struct System_Action_o *, _QWORD))v48)(
                          callback,
                          *(_QWORD *)(v48 + 8));
}


void __fastcall ClassBoardEffectController__CheckPlayEnd(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  ClassBoardEffectController_o *v2; // x19
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x9
  int v4; // w8

  v2 = this;
  if ( (byte_438C438 & 1) == 0 )
  {
    this = (ClassBoardEffectController_o *)sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__);
    byte_438C438 = 1;
  }
  players = v2->fields.players;
  v4 = v2->fields.playEndCount + 1;
  v2->fields.playEndCount = v4;
  if ( !players )
    goto LABEL_7;
  if ( v4 < players->fields._size )
    return;
  this = (ClassBoardEffectController_o *)v2->fields.playEndCallback;
  if ( !this )
LABEL_7:
    sub_B7769C(this, method);
  System_Action__Invoke((System_Action_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectController__MoveCamera(
        ClassBoardEffectController_o *this,
        UnityEngine_Vector3_o pos,
        int32_t maxDistance,
        float secMin,
        float secMax,
        int32_t ease,
        System_Action_o *callback,
        const MethodInfo *method)
{
  float z; // s9
  float y; // s10
  float x; // s8
  MapCamera_o *mapCamera; // x23
  UnityEngine_Transform_o *SafeCameraDestination; // x0
  __int64 v19; // x1
  UnityEngine_Transform_o *v20; // x23
  float v21; // s0
  float v22; // s1
  float v23; // s2
  float v24; // s11
  float v25; // s12
  float v26; // s13
  float v27; // s14
  float v28; // s15
  float v29; // s0
  float v30; // s3
  System_Nullable_Vector3__o v31; // [xsp+0h] [xbp-80h] BYREF
  float v32; // [xsp+58h] [xbp-28h]
  float v33; // [xsp+5Ch] [xbp-24h]
  System_Nullable_float__o v34; // 0:x3.8
  System_Nullable_Vector3__o v35; // 0:x0.16
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s3.4,4:s4.4,8:s5.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_438C43C & 1) == 0 )
  {
    sub_B775C4(&MapCameraViewAdjusterUtil_TypeInfo);
    sub_B775C4(&Method_System_Nullable_Vector3___ctor__);
    byte_438C43C = 1;
  }
  mapCamera = this->fields.mapCamera;
  *(_QWORD *)&v35.fields.value.fields.x = &v31;
  v36.fields.x = x;
  v36.fields.y = y;
  *(_QWORD *)&v35.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  v36.fields.z = z;
  *(_QWORD *)&v31.fields.value.fields.x = 0LL;
  *(_QWORD *)&v31.fields.value.fields.z = 0LL;
  System_Nullable_Vector3____ctor(v35, v36, *(const MethodInfo_247A004 **)&ease);
  if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  }
  v34 = 0LL;
  SafeCameraDestination = (UnityEngine_Transform_o *)MapCameraViewAdjusterUtil__GetSafeCameraDestination(
                                                       mapCamera,
                                                       v31,
                                                       v34,
                                                       0LL);
  if ( !this->fields.mapCamera )
    goto LABEL_15;
  v20 = SafeCameraDestination;
  SafeCameraDestination = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.mapCamera, 0LL);
  if ( !SafeCameraDestination )
    goto LABEL_15;
  *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_localPosition(SafeCameraDestination, 0LL);
  if ( !v20 )
    goto LABEL_15;
  v32 = secMin;
  v33 = secMax;
  SafeCameraDestination = (UnityEngine_Transform_o *)this->fields.mapCamera;
  if ( !SafeCameraDestination )
    goto LABEL_15;
  v24 = *(float *)&v20->fields.m_CachedPtr;
  v25 = *((float *)&v20->fields + 1);
  v26 = v21;
  v27 = v22;
  v28 = v23;
  SafeCameraDestination = UnityEngine_Component__get_transform((UnityEngine_Component_o *)SafeCameraDestination, 0LL);
  if ( !SafeCameraDestination )
    goto LABEL_15;
  localPosition = UnityEngine_Transform__get_localPosition(SafeCameraDestination, 0LL);
  v39.fields.z = localPosition.fields.z;
  localPosition.fields.x = v26;
  localPosition.fields.y = v27;
  localPosition.fields.z = v28;
  v39.fields.x = v24;
  v39.fields.y = v25;
  v29 = UnityEngine_Vector3__Distance(localPosition, v39, 0LL) / (float)maxDistance;
  v30 = 0.0;
  if ( v29 != 0.0 )
    v30 = UnityEngine_Mathf__Clamp(v29, v32, v33, 0LL);
  SafeCameraDestination = (UnityEngine_Transform_o *)this->fields.mapCamera;
  if ( !SafeCameraDestination )
LABEL_15:
    sub_B7769C(SafeCameraDestination, v19);
  v38.fields.x = x;
  v38.fields.y = y;
  v38.fields.z = z;
  MapCamera__StartAutoMove((MapCamera_o *)SafeCameraDestination, v38, v30, ease, callback, 0LL);
}


void __fastcall ClassBoardEffectController__PlayClassBoardStartEffect(
        ClassBoardEffectController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct System_Action_o **p_playEndCallback; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0
  __int64 v13; // x1
  struct ClassBoardBackground_o *bgModel; // x8
  struct ClassBoardBackground_o *v15; // x8
  struct ClassBoardEffectPlayer_o *v16; // x21
  System_Action_o *v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct ClassBoardBackground_o *v24; // x8

  if ( (byte_438C435 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ClassBoardEffectController_PlayNext__);
    sub_B775C4(&Method_ClassBoardEffectPlayer_SetData_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__);
    byte_438C435 = 1;
  }
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)callback);
  this->fields.playEndCallback = callback;
  p_playEndCallback = &this->fields.playEndCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.playEndCallback,
    (System_Int32_array **)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  bgModel = this->fields.bgModel;
  if ( !bgModel )
    goto LABEL_15;
  startMainEffectPlayer = bgModel->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    goto LABEL_15;
  ClassBoardEffectPlayer__SetData_int_(
    startMainEffectPlayer,
    this->fields.baseId,
    (const MethodInfo_1C6C348 *)Method_ClassBoardEffectPlayer_SetData_int___);
  v15 = this->fields.bgModel;
  if ( !v15 )
    goto LABEL_15;
  v16 = v15->fields.startMainEffectPlayer;
  v17 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ClassBoardEffectController_PlayNext__, 0LL);
  if ( !v16 )
    goto LABEL_15;
  v16->fields.endCallback = v17;
  sub_B77560(
    (BattleServantConfConponent_o *)&v16->fields.endCallback,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = this->fields.bgModel;
  if ( !v24 )
    goto LABEL_15;
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !startMainEffectPlayer )
    goto LABEL_15;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)startMainEffectPlayer,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v24->fields.startMainEffectPlayer,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !startMainEffectPlayer )
    goto LABEL_15;
  if ( SLODWORD(startMainEffectPlayer->fields.playCallback) >= 1 )
  {
    startMainEffectPlayer = (ClassBoardEffectPlayer_o *)System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)startMainEffectPlayer,
                                                          (const MethodInfo_1D30534 *)Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
    if ( startMainEffectPlayer )
    {
      ClassBoardEffectPlayer__Play(startMainEffectPlayer, 0LL);
      return;
    }
LABEL_15:
    sub_B7769C(startMainEffectPlayer, v13);
  }
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)*p_playEndCallback;
  if ( !*p_playEndCallback )
    goto LABEL_15;
  System_Action__Invoke((System_Action_o *)startMainEffectPlayer, 0LL);
}


void __fastcall ClassBoardEffectController__PlayNext(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  ClassBoardEffectController_o *v2; // x19
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x21
  int v4; // w20
  int size; // w8

  v2 = this;
  if ( (byte_438C439 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__);
    this = (ClassBoardEffectController_o *)sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Item__);
    byte_438C439 = 1;
  }
  players = v2->fields.players;
  v4 = v2->fields.playEndCount + 1;
  v2->fields.playEndCount = v4;
  if ( !players )
    goto LABEL_11;
  size = players->fields._size;
  if ( v4 < size )
  {
    if ( size <= (unsigned int)v4 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    this = (ClassBoardEffectController_o *)players->fields._items->m_Items[v4];
    if ( this )
    {
      ClassBoardEffectPlayer__Play((ClassBoardEffectPlayer_o *)this, 0LL);
      return;
    }
LABEL_11:
    sub_B7769C(this, method);
  }
  this = (ClassBoardEffectController_o *)v2->fields.playEndCallback;
  if ( !this )
    goto LABEL_11;
  System_Action__Invoke((System_Action_o *)this, 0LL);
}


void __fastcall ClassBoardEffectController__PlayRelease(
        ClassBoardEffectController_o *this,
        ClassBoardSquare_o *releaseSquare,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x0
  __int64 v14; // x1
  bool v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  Il2CppObject *current; // x20
  System_Action_o *v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_438C434 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ClassBoardEffectController_CheckPlayEnd__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__get_Current__);
    sub_B775C4(&IClassBoardLockModel_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__);
    byte_438C434 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)releaseSquare);
  this->fields.playEndCallback = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.playEndCallback,
    (System_Int32_array **)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !releaseSquare
    || (v15 = sub_B77684(releaseSquare->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo) != 0,
        ClassBoardEffectController__RegisterConnectingLineBlankPlayer(this, releaseSquare, v15, v16),
        ClassBoardEffectController__RegisterConnectedSquareEnablePlayer(this, releaseSquare, v17),
        (players = this->fields.players) == 0LL)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)players,
          (EventMissionProgressRequest_Argument_ProgressData_o *)releaseSquare->fields.releaseEffectPlayer,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__),
        (players = this->fields.players) == 0LL) )
  {
    sub_B7769C(players, v14);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)players,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__) )
  {
    current = v28.fields.current;
    v19 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_ClassBoardEffectController_CheckPlayEnd__, 0LL);
    if ( !current )
      sub_B7769C(v20, v21);
    current[2].klass = (Il2CppClass *)v19;
    sub_B77560((BattleServantConfConponent_o *)&current[2], (System_Int32_array **)v19, v22, v23, v24, v25, v26, v27);
    ClassBoardEffectPlayer__Play((ClassBoardEffectPlayer_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectController__PlaySelectMoveCamera(
        ClassBoardEffectController_o *this,
        UnityEngine_Vector3_o pos,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  float z; // s8
  float y; // s9
  float x; // s10
  BalanceConfig_c *v10; // x0
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_438C436 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    byte_438C436 = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  v11.fields.y = y;
  v11.fields.z = z;
  v11.fields.x = x;
  ClassBoardEffectController__MoveCamera(
    this,
    v11,
    v10->static_fields->ClassBoardCameraSelectMoveMaxDistance,
    v10->static_fields->ClassBoardCameraSelectSecMin,
    v10->static_fields->ClassBoardCameraSelectSecMax,
    v10->static_fields->ClassBoardCameraSelectEasingType,
    callback,
    v4);
}


void __fastcall ClassBoardEffectController__RegisterConnectedSquareEnablePlayer(
        ClassBoardEffectController_o *this,
        ClassBoardSquare_o *releaseSquare,
        const MethodInfo *method)
{
  __int64 v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x21
  System_Collections_Generic_List_T__o *players; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  __int64 *v18; // x19
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  IClassBoardSquareModel_c **v21; // x11
  __int64 v22; // x0
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squareViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v28; // x1
  __int64 v29; // x19
  AcquireFlag_c **v30; // x24
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  __int64 v35; // x23
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  System_Int32_array **v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x22
  AcquireFlag_c **v48; // x28
  System_Collections_Generic_List_T__o *v49; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v50; // x25
  bool v51; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v53; // x25
  WarBoardData_SquareRangeSearch_o *v54; // x0
  WarBoardData_SquareRangeSearch_o *v55; // x23
  WarBoardData_SquareRangeSearch_c *v56; // x8
  unsigned __int64 v57; // x10
  IClassBoardSquareModel_c **v58; // x11
  __int64 v59; // x0
  int v60; // w0
  AcquireFlag_c *v61; // x8
  __int64 v62; // x2
  System_Enum_o *v63; // x23
  AcquireFlag_c *v64; // x0
  __int64 v65; // x2
  System_Enum_o *v66; // x0
  _BOOL8 HasFlag; // x0
  __int64 v68; // x1
  ClassBoardEffectPlayer_o *v69; // x23
  bool v70; // w1
  __int64 v71; // x0
  __int64 v72; // x1
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v73; // x0
  __int64 v74; // x8
  unsigned __int64 v75; // x10
  int *v76; // x11
  __int64 v77; // x0
  int v78; // [xsp+8h] [xbp-68h] BYREF
  int v79; // [xsp+Ch] [xbp-64h] BYREF
  __int64 v80; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v81; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_438C43B & 1) == 0 )
  {
    sub_B775C4(&AcquireFlag_TypeInfo);
    sub_B775C4(&Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    sub_B775C4(&Method_ClassBoardEffectPlayer_SetData_bool___);
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
    sub_B775C4(&Method_System_Func_IClassBoardSquareModel__bool___ctor__);
    sub_B775C4(&Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
    sub_B775C4(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
    sub_B775C4(&System_Func_IClassBoardSquareModel__bool__TypeInfo);
    sub_B775C4(&IClassBoardLockModel_TypeInfo);
    sub_B775C4(&IClassBoardSquareModel_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    sub_B775C4(&Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectedSquareEnablePlayer_b__0__);
    sub_B775C4(&ClassBoardEffectController___c__DisplayClass16_0_TypeInfo);
    sub_B775C4(&Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__1__);
    sub_B775C4(&Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__2__);
    sub_B775C4(&ClassBoardEffectController___c__DisplayClass16_1_TypeInfo);
    byte_438C43B = 1;
  }
  v81 = 0LL;
  HIDWORD(v80) = 0;
  v5 = sub_B77694(ClassBoardEffectController___c__DisplayClass16_0_TypeInfo);
  ClassBoardEffectController___c__DisplayClass16_0___ctor((ClassBoardEffectController___c__DisplayClass16_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_66;
  *(_QWORD *)(v5 + 16) = releaseSquare;
  v14 = v5 + 16;
  sub_B77560(
    (BattleServantConfConponent_o *)(v5 + 16),
    (System_Int32_array **)releaseSquare,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectedSquareEnablePlayer_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
  if ( BasicHelper__Any_WarBoardData_SquareRangeSearch_(
         players,
         (System_Func_T__bool__o *)v16,
         (const MethodInfo_1C66144 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
  {
    return;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  v81 = v17;
  if ( !*(_QWORD *)v14 )
    goto LABEL_66;
  v18 = *(__int64 **)(*(_QWORD *)v14 + 168LL);
  if ( !v18 )
    goto LABEL_66;
  v19 = *v18;
  if ( *(_WORD *)(*v18 + 298) )
  {
    v20 = 0LL;
    v21 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v19 + 176) + 8LL);
    while ( *(v21 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v20;
      v21 += 2;
      if ( v20 >= *(unsigned __int16 *)(*v18 + 298) )
        goto LABEL_11;
    }
    v22 = v19 + 16LL * (*(_DWORD *)v21 + 15) + 312;
  }
  else
  {
LABEL_11:
    v22 = sub_B0F4C0(v18, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *, System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **, _QWORD))v22)(
         v18,
         &v81,
         *(_QWORD *)(v22 + 8));
  if ( v81 && v81->fields._size >= 1 )
  {
    squareViewList = this->fields.squareViewList;
    if ( squareViewList )
    {
      klass = squareViewList->klass;
      if ( *(_WORD *)&squareViewList->klass->_2.bitflags1 )
      {
        v25 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_ClassBoardSquare__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo )
        {
          ++v25;
          p_offset += 4;
          if ( v25 >= *(unsigned __int16 *)&squareViewList->klass->_2.bitflags1 )
            goto LABEL_20;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_20:
        p_method = sub_B0F4C0(
                     this->fields.squareViewList,
                     System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo,
                     0LL);
      }
      v29 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *, _QWORD))p_method)(
              squareViewList,
              *(_QWORD *)(p_method + 8));
      if ( !v29 )
        sub_B7769C(0LL, v28);
      v30 = &AcquireFlag_TypeInfo;
      while ( 1 )
      {
        v31 = *(_QWORD *)v29;
        if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
        {
          v32 = 0LL;
          v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v32;
            v33 += 4;
            if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
              goto LABEL_28;
          }
          v34 = v31 + 16LL * *v33 + 312;
        }
        else
        {
LABEL_28:
          v34 = sub_B0F4C0(v29, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v29, *(_QWORD *)(v34 + 8)) & 1) == 0 )
          break;
        v35 = sub_B77694(ClassBoardEffectController___c__DisplayClass16_1_TypeInfo);
        ClassBoardEffectController___c__DisplayClass16_1___ctor(
          (ClassBoardEffectController___c__DisplayClass16_1_o *)v35,
          0LL);
        v36 = *(_QWORD *)v29;
        if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
        {
          v37 = 0LL;
          v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_ClassBoardSquare__c **)v38 - 1) != System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo )
          {
            ++v37;
            v38 += 4;
            if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
              goto LABEL_35;
          }
          v39 = v36 + 16LL * *v38 + 312;
        }
        else
        {
LABEL_35:
          v39 = sub_B0F4C0(v29, System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo, 0LL);
        }
        v40 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v29, *(_QWORD *)(v39 + 8));
        if ( !v35 )
          sub_B7769C(v40, v40);
        *(_QWORD *)(v35 + 16) = v40;
        v47 = v35 + 16;
        sub_B77560((BattleServantConfConponent_o *)(v35 + 16), v40, v41, v42, v43, v44, v45, v46);
        v48 = v30;
        v49 = (System_Collections_Generic_List_T__o *)this->fields.players;
        v50 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v50,
          (Il2CppObject *)v35,
          Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__1__,
          (const MethodInfo_29E92C4 *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
        v51 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                v49,
                (System_Func_T__bool__o *)v50,
                (const MethodInfo_1C66144 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
        v30 = v48;
        if ( !v51 )
        {
          v52 = (System_Collections_Generic_IEnumerable_TSource__o *)v81;
          v53 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_IClassBoardSquareModel__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v53,
            (Il2CppObject *)v35,
            Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__2__,
            (const MethodInfo_29E92C4 *)Method_System_Func_IClassBoardSquareModel__bool___ctor__);
          v54 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                  v52,
                  (System_Func_TSource__bool__o *)v53,
                  (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
          v55 = v54;
          v30 = v48;
          if ( v54 )
          {
            v56 = v54->klass;
            if ( *(_WORD *)&v54->klass->_2.bitflags1 )
            {
              v57 = 0LL;
              v58 = (IClassBoardSquareModel_c **)&v56->_1.interfaceOffsets->offset;
              while ( *(v58 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                ++v57;
                v58 += 2;
                if ( v57 >= *(unsigned __int16 *)&v54->klass->_2.bitflags1 )
                  goto LABEL_44;
              }
              v59 = (__int64)(&v56[1]._1.methods + 2 * *(_DWORD *)v58);
            }
            else
            {
LABEL_44:
              v59 = sub_B0F4C0(v54, IClassBoardSquareModel_TypeInfo, 13LL);
            }
            v60 = (*(__int64 (__fastcall **)(WarBoardData_SquareRangeSearch_o *, _QWORD, _QWORD))v59)(
                    v55,
                    0LL,
                    *(_QWORD *)(v59 + 8));
            v61 = *v48;
            v79 = v60;
            v63 = (System_Enum_o *)j_il2cpp_value_box_0(v61, &v79, v62);
            v64 = *v48;
            v78 = 1;
            v66 = (System_Enum_o *)j_il2cpp_value_box_0(v64, &v78, v65);
            if ( !v63 )
              sub_B7769C(v66, v66);
            HasFlag = System_Enum__HasFlag(v63, v66, 0LL);
            if ( !HasFlag )
            {
              if ( !*(_QWORD *)v47 )
                sub_B7769C(HasFlag, v68);
              if ( !*(_QWORD *)v14 )
                sub_B7769C(HasFlag, v68);
              v69 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v47 + 152LL);
              if ( !v69 )
                sub_B7769C(HasFlag, v68);
              v70 = sub_B77684(*(_QWORD *)(*(_QWORD *)v14 + 168LL), IClassBoardLockModel_TypeInfo) != 0;
              ClassBoardEffectPlayer__SetData_bool_(
                v69,
                v70,
                (const MethodInfo_1C6C2E8 *)Method_ClassBoardEffectPlayer_SetData_bool___);
              if ( !*(_QWORD *)v47 )
                sub_B7769C(v71, v72);
              v73 = this->fields.players;
              if ( !v73 )
                sub_B7769C(0LL, v72);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v73,
                *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v47 + 152LL),
                (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
            }
          }
        }
      }
      v80 = 0x10000010ELL;
      v74 = *(_QWORD *)v29;
      if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
      {
        v75 = 0LL;
        v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v76 - 1) != System_IDisposable_TypeInfo )
        {
          ++v75;
          v76 += 4;
          if ( v75 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
            goto LABEL_59;
        }
        v77 = v74 + 16LL * *v76 + 312;
      }
      else
      {
LABEL_59:
        v77 = sub_B0F4C0(v29, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v77)(v29, *(_QWORD *)(v77 + 8));
      if ( (_DWORD)v80 == 270 )
        v80 = 270LL;
      return;
    }
LABEL_66:
    sub_B7769C(v6, v7);
  }
}


void __fastcall ClassBoardEffectController__RegisterConnectingLineBlankPlayer(
        ClassBoardEffectController_o *this,
        ClassBoardSquare_o *releaseSquare,
        bool isLock,
        const MethodInfo *method)
{
  __int64 v6; // x23
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x22
  System_Collections_Generic_List_T__o *players; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x24
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *lineViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x1
  __int64 v24; // x19
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x25
  __int64 v30; // x8
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x24
  __int64 v42; // x23
  System_Collections_Generic_List_T__o *v43; // x26
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v44; // x27
  _BOOL8 v45; // x0
  __int64 v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array ***v53; // x25
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 *v56; // x26
  __int64 v57; // x8
  unsigned __int64 v58; // x10
  IClassBoardLineModel_c **v59; // x11
  __int64 v60; // x0
  __int64 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x26
  __int64 v64; // x8
  unsigned __int64 v65; // x10
  int *v66; // x11
  __int64 v67; // x0
  __int64 v68; // x0
  __int64 v69; // x1
  __int64 *v70; // x27
  __int64 v71; // x8
  int v72; // w26
  unsigned __int64 v73; // x10
  int *v74; // x11
  __int64 v75; // x0
  __int64 v76; // x0
  __int64 v77; // x1
  __int64 v78; // x8
  __int64 *v79; // x26
  __int64 v80; // x8
  unsigned __int64 v81; // x10
  int *v82; // x11
  __int64 v83; // x0
  __int64 *v84; // x26
  __int64 v85; // x8
  unsigned __int64 v86; // x10
  int *v87; // x11
  __int64 v88; // x0
  __int64 v89; // x0
  __int64 v90; // x1
  __int64 v91; // x26
  __int64 v92; // x8
  unsigned __int64 v93; // x10
  int *v94; // x11
  __int64 v95; // x0
  __int64 v96; // x0
  __int64 v97; // x1
  __int64 *v98; // x27
  __int64 v99; // x8
  int v100; // w26
  unsigned __int64 v101; // x10
  int *v102; // x11
  __int64 v103; // x0
  __int64 v104; // x0
  __int64 v105; // x1
  __int64 v106; // x8
  unsigned __int64 v107; // x10
  IClassBoardLineModel_c **v108; // x11
  System_Int32_array **v109; // x0
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  ClassBoardEffectPlayer_o *v116; // x0
  __int64 v117; // x0
  __int64 v118; // x1
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v119; // x0
  __int64 v120; // x0
  __int64 v121; // x1
  System_Int32_array **v122; // x24
  System_Int32_array *v123; // x8
  unsigned __int64 v124; // x10
  IClassBoardSquareModel_c **v125; // x11
  __int64 v126; // x0
  System_Collections_Generic_IEnumerable_TSource__o *squareViewList; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v128; // x25
  WarBoardData_SquareRangeSearch_o *v129; // x23
  const MethodInfo *v130; // x3
  __int64 v131; // x0
  __int64 v132; // x1
  ClassBoardEffectPlayer_o *monitor; // x0
  __int64 v134; // x1
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v135; // x0
  __int64 v136; // x8
  unsigned __int64 v137; // x10
  int *v138; // x11
  __int64 v139; // x0

  if ( (byte_438C43A & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    sub_B775C4(&Method_ClassBoardEffectPlayer_SetData_bool___);
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___);
    sub_B775C4(&Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
    sub_B775C4(&Method_System_Func_ClassBoardSquare__bool___ctor__);
    sub_B775C4(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
    sub_B775C4(&System_Func_ClassBoardSquare__bool__TypeInfo);
    sub_B775C4(&IClassBoardLineModel_TypeInfo);
    sub_B775C4(&IClassBoardSquareModel_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_ClassBoardEffectController___c__DisplayClass15_0__RegisterConnectingLineBlankPlayer_b__0__);
    sub_B775C4(&ClassBoardEffectController___c__DisplayClass15_0_TypeInfo);
    sub_B775C4(&Method_ClassBoardEffectController___c__DisplayClass15_1__RegisterConnectingLineBlankPlayer_b__1__);
    sub_B775C4(&ClassBoardEffectController___c__DisplayClass15_1_TypeInfo);
    sub_B775C4(&Method_ClassBoardEffectController___c__DisplayClass15_2__RegisterConnectingLineBlankPlayer_b__2__);
    sub_B775C4(&ClassBoardEffectController___c__DisplayClass15_2_TypeInfo);
    byte_438C43A = 1;
  }
  v6 = sub_B77694(ClassBoardEffectController___c__DisplayClass15_0_TypeInfo);
  ClassBoardEffectController___c__DisplayClass15_0___ctor((ClassBoardEffectController___c__DisplayClass15_0_o *)v6, 0LL);
  if ( !v6 )
    goto LABEL_144;
  *(_QWORD *)(v6 + 16) = releaseSquare;
  v15 = v6 + 16;
  sub_B77560(
    (BattleServantConfConponent_o *)(v6 + 16),
    (System_Int32_array **)releaseSquare,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v6,
    Method_ClassBoardEffectController___c__DisplayClass15_0__RegisterConnectingLineBlankPlayer_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
  v7 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
         players,
         (System_Func_T__bool__o *)v17,
         (const MethodInfo_1C66144 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
  if ( v7 )
    return;
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList )
LABEL_144:
    sub_B7769C(v7, v8);
  klass = lineViewList->klass;
  if ( *(_WORD *)&lineViewList->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ClassBoardLine__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo )
    {
      ++v20;
      p_offset += 4;
      if ( v20 >= *(unsigned __int16 *)&lineViewList->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_B0F4C0(
                 this->fields.lineViewList,
                 System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo,
                 0LL);
  }
  v24 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *, _QWORD))p_method)(
          lineViewList,
          *(_QWORD *)(p_method + 8));
  if ( !v24 )
    sub_B7769C(0LL, v23);
  while ( 1 )
  {
    v25 = *(_QWORD *)v24;
    if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
    {
      v26 = 0LL;
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
          goto LABEL_17;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_17:
      v28 = sub_B0F4C0(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v29 = sub_B77694(ClassBoardEffectController___c__DisplayClass15_1_TypeInfo);
    ClassBoardEffectController___c__DisplayClass15_1___ctor(
      (ClassBoardEffectController___c__DisplayClass15_1_o *)v29,
      0LL);
    v30 = *(_QWORD *)v24;
    if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
    {
      v31 = 0LL;
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardLine__c **)v32 - 1) != System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
          goto LABEL_24;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_24:
      v33 = sub_B0F4C0(v24, System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo, 0LL);
    }
    v34 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v24, *(_QWORD *)(v33 + 8));
    if ( !v29 )
      sub_B7769C(v34, v34);
    *(_QWORD *)(v29 + 16) = v34;
    v41 = v29 + 16;
    sub_B77560((BattleServantConfConponent_o *)(v29 + 16), v34, v35, v36, v37, v38, v39, v40);
    v42 = sub_B77694(ClassBoardEffectController___c__DisplayClass15_2_TypeInfo);
    ClassBoardEffectController___c__DisplayClass15_2___ctor(
      (ClassBoardEffectController___c__DisplayClass15_2_o *)v42,
      0LL);
    v43 = (System_Collections_Generic_List_T__o *)this->fields.players;
    v44 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v44,
      (Il2CppObject *)v29,
      Method_ClassBoardEffectController___c__DisplayClass15_1__RegisterConnectingLineBlankPlayer_b__1__,
      (const MethodInfo_29E92C4 *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
    v45 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
            v43,
            (System_Func_T__bool__o *)v44,
            (const MethodInfo_1C66144 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    if ( !v45 )
    {
      if ( !v42 )
        sub_B7769C(v45, v46);
      *(_QWORD *)(v42 + 16) = 0LL;
      v53 = (System_Int32_array ***)(v42 + 16);
      sub_B77560((BattleServantConfConponent_o *)(v42 + 16), 0LL, v47, v48, v49, v50, v51, v52);
      if ( !*(_QWORD *)v41 )
        sub_B7769C(v54, v55);
      v56 = *(__int64 **)(*(_QWORD *)v41 + 160LL);
      if ( !v56 )
        sub_B7769C(v54, v55);
      v57 = *v56;
      if ( *(_WORD *)(*v56 + 298) )
      {
        v58 = 0LL;
        v59 = (IClassBoardLineModel_c **)(*(_QWORD *)(v57 + 176) + 8LL);
        while ( *(v59 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v58;
          v59 += 2;
          if ( v58 >= *(unsigned __int16 *)(*v56 + 298) )
            goto LABEL_35;
        }
        v60 = v57 + 16LL * (*(_DWORD *)v59 + 1) + 312;
      }
      else
      {
LABEL_35:
        v60 = sub_B0F4C0(v56, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v61 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v60)(v56, *(_QWORD *)(v60 + 8));
      v63 = v61;
      if ( !v61 )
        sub_B7769C(0LL, v62);
      v64 = *(_QWORD *)v61;
      if ( *(_WORD *)(*(_QWORD *)v61 + 298LL) )
      {
        v65 = 0LL;
        v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v66 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v65;
          v66 += 4;
          if ( v65 >= *(unsigned __int16 *)(*(_QWORD *)v61 + 298LL) )
            goto LABEL_42;
        }
        v67 = v64 + 16LL * *v66 + 312;
      }
      else
      {
LABEL_42:
        v67 = sub_B0F4C0(v61, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v68 = (*(__int64 (__fastcall **)(__int64, _QWORD))v67)(v63, *(_QWORD *)(v67 + 8));
      if ( !*(_QWORD *)v15 )
        sub_B7769C(v68, v69);
      v70 = *(__int64 **)(*(_QWORD *)v15 + 168LL);
      if ( !v70 )
        sub_B7769C(v68, v69);
      v71 = *v70;
      v72 = v68;
      if ( *(_WORD *)(*v70 + 298) )
      {
        v73 = 0LL;
        v74 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v74 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v73;
          v74 += 4;
          if ( v73 >= *(unsigned __int16 *)(*v70 + 298) )
            goto LABEL_50;
        }
        v75 = v71 + 16LL * *v74 + 312;
      }
      else
      {
LABEL_50:
        v75 = sub_B0F4C0(v70, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v76 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v75)(v70, *(_QWORD *)(v75 + 8));
      v78 = *(_QWORD *)v41;
      if ( v72 == (_DWORD)v76 )
      {
        if ( !v78 )
          sub_B7769C(v76, v77);
        v79 = *(__int64 **)(v78 + 160);
        if ( !v79 )
          sub_B7769C(v76, v77);
        v80 = *v79;
        if ( *(_WORD *)(*v79 + 298) )
        {
          v81 = 0LL;
          v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v82 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v81;
            v82 += 4;
            if ( v81 >= *(unsigned __int16 *)(*v79 + 298) )
              goto LABEL_59;
          }
          v83 = v80 + 16LL * *v82 + 312;
        }
        else
        {
LABEL_59:
          v83 = sub_B0F4C0(v79, IClassBoardLineModel_TypeInfo, 0LL);
        }
LABEL_93:
        v109 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v83)(v79, *(_QWORD *)(v83 + 8));
        *v53 = v109;
        sub_B77560((BattleServantConfConponent_o *)(v42 + 16), v109, v110, v111, v112, v113, v114, v115);
        goto LABEL_94;
      }
      if ( !v78 )
        sub_B7769C(v76, v77);
      v84 = *(__int64 **)(v78 + 160);
      if ( !v84 )
        sub_B7769C(v76, v77);
      v85 = *v84;
      if ( *(_WORD *)(*v84 + 298) )
      {
        v86 = 0LL;
        v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v87 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v86;
          v87 += 4;
          if ( v86 >= *(unsigned __int16 *)(*v84 + 298) )
            goto LABEL_66;
        }
        v88 = v85 + 16LL * *v87 + 312;
      }
      else
      {
LABEL_66:
        v88 = sub_B0F4C0(v84, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v89 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v88)(v84, *(_QWORD *)(v88 + 8));
      v91 = v89;
      if ( !v89 )
        sub_B7769C(0LL, v90);
      v92 = *(_QWORD *)v89;
      if ( *(_WORD *)(*(_QWORD *)v89 + 298LL) )
      {
        v93 = 0LL;
        v94 = (int *)(*(_QWORD *)(v92 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v94 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v93;
          v94 += 4;
          if ( v93 >= *(unsigned __int16 *)(*(_QWORD *)v89 + 298LL) )
            goto LABEL_74;
        }
        v95 = v92 + 16LL * *v94 + 312;
      }
      else
      {
LABEL_74:
        v95 = sub_B0F4C0(v89, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v96 = (*(__int64 (__fastcall **)(__int64, _QWORD))v95)(v91, *(_QWORD *)(v95 + 8));
      if ( !*(_QWORD *)v15 )
        sub_B7769C(v96, v97);
      v98 = *(__int64 **)(*(_QWORD *)v15 + 168LL);
      if ( !v98 )
        sub_B7769C(v96, v97);
      v99 = *v98;
      v100 = v96;
      if ( *(_WORD *)(*v98 + 298) )
      {
        v101 = 0LL;
        v102 = (int *)(*(_QWORD *)(v99 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v102 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v101;
          v102 += 4;
          if ( v101 >= *(unsigned __int16 *)(*v98 + 298) )
            goto LABEL_82;
        }
        v103 = v99 + 16LL * *v102 + 312;
      }
      else
      {
LABEL_82:
        v103 = sub_B0F4C0(v98, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v104 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v103)(v98, *(_QWORD *)(v103 + 8));
      if ( v100 == (_DWORD)v104 )
      {
        if ( !*(_QWORD *)v41 )
          sub_B7769C(v104, v105);
        v79 = *(__int64 **)(*(_QWORD *)v41 + 160LL);
        if ( !v79 )
          sub_B7769C(v104, v105);
        v106 = *v79;
        if ( *(_WORD *)(*v79 + 298) )
        {
          v107 = 0LL;
          v108 = (IClassBoardLineModel_c **)(*(_QWORD *)(v106 + 176) + 8LL);
          while ( *(v108 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v107;
            v108 += 2;
            if ( v107 >= *(unsigned __int16 *)(*v79 + 298) )
              goto LABEL_91;
          }
          v83 = v106 + 16LL * (*(_DWORD *)v108 + 1) + 312;
        }
        else
        {
LABEL_91:
          v83 = sub_B0F4C0(v79, IClassBoardLineModel_TypeInfo, 1LL);
        }
        goto LABEL_93;
      }
LABEL_94:
      if ( *v53 )
      {
        if ( !*(_QWORD *)v41 )
          sub_B7769C(v104, v105);
        v116 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v41 + 144LL);
        if ( !v116 )
          sub_B7769C(0LL, v105);
        ClassBoardEffectPlayer__SetData_bool_(
          v116,
          isLock,
          (const MethodInfo_1C6C2E8 *)Method_ClassBoardEffectPlayer_SetData_bool___);
        if ( !*(_QWORD *)v41 )
          sub_B7769C(v117, v118);
        v119 = this->fields.players;
        if ( !v119 )
          sub_B7769C(0LL, v118);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v119,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v41 + 144LL),
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
        v122 = *v53;
        if ( !*v53 )
          sub_B7769C(v120, v121);
        v123 = *v122;
        if ( HIWORD((*v122)->m_Items[67]) )
        {
          v124 = 0LL;
          v125 = (IClassBoardSquareModel_c **)(*(_QWORD *)&v123->m_Items[37] + 8LL);
          while ( *(v125 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            ++v124;
            v125 += 2;
            if ( v124 >= HIWORD((*v122)->m_Items[67]) )
              goto LABEL_104;
          }
          v126 = (__int64)&v123->m_Items[4 * *(_DWORD *)v125 + 91];
        }
        else
        {
LABEL_104:
          v126 = sub_B0F4C0(*v53, IClassBoardSquareModel_TypeInfo, 5LL);
        }
        if ( ((*(__int64 (__fastcall **)(System_Int32_array **, _QWORD))v126)(v122, *(_QWORD *)(v126 + 8)) & 1) != 0 )
        {
          squareViewList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.squareViewList;
          v128 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_ClassBoardSquare__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v128,
            (Il2CppObject *)v42,
            Method_ClassBoardEffectController___c__DisplayClass15_2__RegisterConnectingLineBlankPlayer_b__2__,
            (const MethodInfo_29E92C4 *)Method_System_Func_ClassBoardSquare__bool___ctor__);
          v129 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                   squareViewList,
                   (System_Func_TSource__bool__o *)v128,
                   (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v129, 0LL, 0LL) )
          {
            ClassBoardEffectController__RegisterConnectingLineBlankPlayer(
              this,
              (ClassBoardSquare_o *)v129,
              isLock,
              v130);
            if ( !v129 )
              sub_B7769C(v131, v132);
            monitor = (ClassBoardEffectPlayer_o *)v129[6].monitor;
            if ( !monitor )
              sub_B7769C(0LL, v132);
            ClassBoardEffectPlayer__SetData_bool_(
              monitor,
              isLock,
              (const MethodInfo_1C6C2E8 *)Method_ClassBoardEffectPlayer_SetData_bool___);
            v135 = this->fields.players;
            if ( !v135 )
              sub_B7769C(0LL, v134);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v135,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v129[6].monitor,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
          }
        }
      }
    }
  }
  v136 = *(_QWORD *)v24;
  if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
  {
    v137 = 0LL;
    v138 = (int *)(*(_QWORD *)(v136 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v138 - 1) != System_IDisposable_TypeInfo )
    {
      ++v137;
      v138 += 4;
      if ( v137 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
        goto LABEL_119;
    }
    v139 = v136 + 16LL * *v138 + 312;
  }
  else
  {
LABEL_119:
    v139 = sub_B0F4C0(v24, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v139)(v24, *(_QWORD *)(v139 + 8));
}


void __fastcall ClassBoardEffectController__ResetPlayers(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x20
  void *v4; // x0
  struct ClassBoardEffectController___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__12_0; // x21
  Il2CppObject *v7; // x22
  struct ClassBoardEffectController___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct System_Action_o **p_playEndCallback; // x19
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_438C437 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_ClassBoardEffectPlayer___ctor__);
    sub_B775C4(&System_Action_ClassBoardEffectPlayer__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__);
    sub_B775C4(&Method_ClassBoardEffectController___c__ResetPlayers_b__12_0__);
    sub_B775C4(&ClassBoardEffectController___c_TypeInfo);
    byte_438C437 = 1;
  }
  players = this->fields.players;
  v4 = ClassBoardEffectController___c_TypeInfo;
  if ( (BYTE3(ClassBoardEffectController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectController___c_TypeInfo);
    v4 = ClassBoardEffectController___c_TypeInfo;
  }
  static_fields = (struct ClassBoardEffectController___c_StaticFields *)*((_QWORD *)v4 + 23);
  _9__12_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (*((_BYTE *)v4 + 307) & 4) != 0 && !*((_DWORD *)v4 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = ClassBoardEffectController___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_ClassBoardEffectPlayer__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__12_0,
      v7,
      Method_ClassBoardEffectController___c__ResetPlayers_b__12_0__,
      (const MethodInfo_26A0868 *)Method_System_Action_ClassBoardEffectPlayer___ctor__);
    v8 = ClassBoardEffectController___c_TypeInfo->static_fields;
    v8->__9__12_0 = (struct System_Action_ClassBoardEffectPlayer__o *)_9__12_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !players
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)players,
          (System_Action_T__o *)_9__12_0,
          (const MethodInfo_3053FB0 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__),
        (v4 = this->fields.players) == 0LL) )
  {
    sub_B7769C(v4, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v4,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Clear__);
  this->fields.playEndCallback = 0LL;
  p_playEndCallback = &this->fields.playEndCallback;
  *((_DWORD *)p_playEndCallback - 4) = 0;
  sub_B77560((BattleServantConfConponent_o *)p_playEndCallback, 0LL, v16, v17, v18, v19, v20, v21);
}


void __fastcall ClassBoardEffectController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ClassBoardEffectController___c_StaticFields *static_fields; // x0

  if ( (byte_4388584 & 1) == 0 )
  {
    sub_B775C4(&ClassBoardEffectController___c_TypeInfo);
    byte_4388584 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(ClassBoardEffectController___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ClassBoardEffectController___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardEffectController___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall ClassBoardEffectController___c___ctor(ClassBoardEffectController___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardEffectController___c___ResetPlayers_b__12_0(
        ClassBoardEffectController___c_o *this,
        ClassBoardEffectPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  ClassBoardEffectPlayer__End(x, 0LL);
}


void __fastcall ClassBoardEffectController___c__DisplayClass15_0___ctor(
        ClassBoardEffectController___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardEffectController___c__DisplayClass15_0___RegisterConnectingLineBlankPlayer_b__0(
        ClassBoardEffectController___c__DisplayClass15_0_o *this,
        ClassBoardEffectPlayer_o *x,
        const MethodInfo *method)
{
  System_String_o *Name_k__BackingField; // x19
  System_String_o *name; // x1

  if ( !x || (this = (ClassBoardEffectController___c__DisplayClass15_0_o *)this->fields.releaseSquare) == 0LL )
    sub_B7769C(this, x);
  Name_k__BackingField = x->fields._Name_k__BackingField;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  return System_String__op_Equality(Name_k__BackingField, name, 0LL);
}


void __fastcall ClassBoardEffectController___c__DisplayClass15_1___ctor(
        ClassBoardEffectController___c__DisplayClass15_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardEffectController___c__DisplayClass15_1___RegisterConnectingLineBlankPlayer_b__1(
        ClassBoardEffectController___c__DisplayClass15_1_o *this,
        ClassBoardEffectPlayer_o *x,
        const MethodInfo *method)
{
  System_String_o *Name_k__BackingField; // x19
  System_String_o *name; // x1

  if ( !x || (this = (ClassBoardEffectController___c__DisplayClass15_1_o *)this->fields.classBoardLine) == 0LL )
    sub_B7769C(this, x);
  Name_k__BackingField = x->fields._Name_k__BackingField;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  return System_String__op_Equality(Name_k__BackingField, name, 0LL);
}


void __fastcall ClassBoardEffectController___c__DisplayClass15_2___ctor(
        ClassBoardEffectController___c__DisplayClass15_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardEffectController___c__DisplayClass15_2___RegisterConnectingLineBlankPlayer_b__2(
        ClassBoardEffectController___c__DisplayClass15_2_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  ClassBoardEffectController___c__DisplayClass15_2_o *v4; // x19
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  struct IClassBoardSquareModel_o *connectSquareModel; // x20
  IClassBoardSquareModel_c *v11; // x8
  int v12; // w19
  unsigned __int64 v13; // x10
  int *v14; // x11
  __int64 v15; // x0

  v4 = this;
  if ( (byte_4388585 & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass15_2_o *)sub_B775C4(&IClassBoardSquareModel_TypeInfo);
    byte_4388585 = 1;
  }
  if ( !x )
    goto LABEL_19;
  SquareModel_k__BackingField = x->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_19;
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_B0F4C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardEffectController___c__DisplayClass15_2_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                 SquareModel_k__BackingField,
                                                                 *(_QWORD *)(p_method + 8));
  connectSquareModel = v4->fields.connectSquareModel;
  if ( !connectSquareModel )
LABEL_19:
    sub_B7769C(this, x);
  v11 = connectSquareModel->klass;
  v12 = (int)this;
  if ( *(_WORD *)&connectSquareModel->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    v14 = &v11->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v14 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v13;
      v14 += 4;
      if ( v13 >= *(unsigned __int16 *)&connectSquareModel->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v15 = (__int64)&v11->vtable[*v14].method;
  }
  else
  {
LABEL_16:
    v15 = sub_B0F4C0(connectSquareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return v12 == (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v15)(
                  connectSquareModel,
                  *(_QWORD *)(v15 + 8));
}


void __fastcall ClassBoardEffectController___c__DisplayClass16_0___ctor(
        ClassBoardEffectController___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardEffectController___c__DisplayClass16_0___RegisterConnectedSquareEnablePlayer_b__0(
        ClassBoardEffectController___c__DisplayClass16_0_o *this,
        ClassBoardEffectPlayer_o *x,
        const MethodInfo *method)
{
  System_String_o *Name_k__BackingField; // x19
  System_String_o *name; // x1

  if ( !x || (this = (ClassBoardEffectController___c__DisplayClass16_0_o *)this->fields.releaseSquare) == 0LL )
    sub_B7769C(this, x);
  Name_k__BackingField = x->fields._Name_k__BackingField;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  return System_String__op_Equality(Name_k__BackingField, name, 0LL);
}


void __fastcall ClassBoardEffectController___c__DisplayClass16_1___ctor(
        ClassBoardEffectController___c__DisplayClass16_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardEffectController___c__DisplayClass16_1___RegisterConnectedSquareEnablePlayer_b__1(
        ClassBoardEffectController___c__DisplayClass16_1_o *this,
        ClassBoardEffectPlayer_o *x,
        const MethodInfo *method)
{
  System_String_o *Name_k__BackingField; // x19
  System_String_o *name; // x1

  if ( !x || (this = (ClassBoardEffectController___c__DisplayClass16_1_o *)this->fields.square) == 0LL )
    sub_B7769C(this, x);
  Name_k__BackingField = x->fields._Name_k__BackingField;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  return System_String__op_Equality(Name_k__BackingField, name, 0LL);
}


bool __fastcall ClassBoardEffectController___c__DisplayClass16_1___RegisterConnectedSquareEnablePlayer_b__2(
        ClassBoardEffectController___c__DisplayClass16_1_o *this,
        IClassBoardSquareModel_o *model,
        const MethodInfo *method)
{
  ClassBoardEffectController___c__DisplayClass16_1_o *v4; // x19
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *v11; // x8
  int v12; // w19
  unsigned __int64 v13; // x10
  int *v14; // x11
  __int64 v15; // x0

  v4 = this;
  if ( (byte_4388586 & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass16_1_o *)sub_B775C4(&IClassBoardSquareModel_TypeInfo);
    byte_4388586 = 1;
  }
  if ( !model )
    goto LABEL_19;
  klass = model->klass;
  if ( *(_WORD *)&model->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&model->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B0F4C0(model, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardEffectController___c__DisplayClass16_1_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                 model,
                                                                 *(_QWORD *)(p_method + 8));
  square = v4->fields.square;
  if ( !square || (SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField) == 0LL )
LABEL_19:
    sub_B7769C(this, model);
  v11 = SquareModel_k__BackingField->klass;
  v12 = (int)this;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    v14 = &v11->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v14 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v13;
      v14 += 4;
      if ( v13 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v15 = (__int64)&v11->vtable[*v14].method;
  }
  else
  {
LABEL_16:
    v15 = sub_B0F4C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return v12 == (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v15)(
                  SquareModel_k__BackingField,
                  *(_QWORD *)(v15 + 8));
}