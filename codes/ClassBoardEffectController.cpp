void __fastcall ClassBoardEffectController___ctor(
        ClassBoardEffectController_o *this,
        System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squares,
        System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *lines,
        MapCamera_o *camera,
        ClassBoardBackground_o *bg,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x24
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  StonePurchaseNotificationMenu_DialogOpenQueue_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  struct System_Action_o *callback; // x20
  System_Action_c *klass; // x8
  unsigned __int64 v48; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 v50; // x0

  if ( (byte_4217AE7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_First_ClassBoardSquare___, squares);
    sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo, v13);
    byte_4217AE7 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo,
                                                                                                  squares,
                                                                                                  lines);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__);
  this->fields.players = (struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *)v14;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.players,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.squareViewList = squares;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)squares,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.lineViewList = lines;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.lineViewList,
    (System_Int32_array **)lines,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.mapCamera = camera;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mapCamera,
    (System_Int32_array **)camera,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.bgModel = bg;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.bgModel,
    (System_Int32_array **)bg,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)squares,
                                                    (const MethodInfo_1B4A958 *)Method_System_Linq_Enumerable_First_ClassBoardSquare___);
  if ( !StonePurchaseNotificationMenu_DialogOpenQueue
    || (callback = StonePurchaseNotificationMenu_DialogOpenQueue[3].fields.callback) == 0LL )
  {
    sub_B0D97C(StonePurchaseNotificationMenu_DialogOpenQueue);
  }
  klass = callback->klass;
  if ( *(_WORD *)&callback->klass->_2.bitflags1 )
  {
    v48 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v48;
      p_offset += 2;
      if ( v48 >= *(unsigned __int16 *)&callback->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v50 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_9:
    v50 = sub_AA67A0(
            StonePurchaseNotificationMenu_DialogOpenQueue[3].fields.callback,
            IClassBoardSquareModel_TypeInfo,
            1LL);
  }
  this->fields.baseId = (*(__int64 (__fastcall **)(struct System_Action_o *, _QWORD))v50)(
                          callback,
                          *(_QWORD *)(v50 + 8));
}


void __fastcall ClassBoardEffectController__CheckPlayEnd(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  ClassBoardEffectController_o *v2; // x19
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x9
  int v4; // w8

  v2 = this;
  if ( (byte_4217AEC & 1) == 0 )
  {
    this = (ClassBoardEffectController_o *)sub_B0D8A4(
                                             &Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__,
                                             method);
    byte_4217AEC = 1;
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
    sub_B0D97C(this);
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
  __int64 v17; // x1
  MapCamera_o *mapCamera; // x23
  UnityEngine_Transform_o *SafeCameraDestination; // x0
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
  if ( (byte_4217AF0 & 1) == 0 )
  {
    sub_B0D8A4(&MapCameraViewAdjusterUtil_TypeInfo, *(_QWORD *)&maxDistance);
    sub_B0D8A4(&Method_System_Nullable_Vector3___ctor__, v17);
    byte_4217AF0 = 1;
  }
  mapCamera = this->fields.mapCamera;
  *(_QWORD *)&v35.fields.value.fields.x = &v31;
  v36.fields.x = x;
  v36.fields.y = y;
  *(_QWORD *)&v35.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  v36.fields.z = z;
  *(_QWORD *)&v31.fields.value.fields.x = 0LL;
  *(_QWORD *)&v31.fields.value.fields.z = 0LL;
  System_Nullable_Vector3____ctor(v35, v36, *(const MethodInfo_299B944 **)&ease);
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
    sub_B0D97C(SafeCameraDestination);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Action_o **p_playEndCallback; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0
  struct ClassBoardBackground_o *bgModel; // x8
  __int64 v19; // x1
  __int64 v20; // x2
  struct ClassBoardBackground_o *v21; // x8
  struct ClassBoardEffectPlayer_o *v22; // x21
  System_Action_o *v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct ClassBoardBackground_o *v30; // x8

  if ( (byte_4217AE9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_ClassBoardEffectController_PlayNext__, v5);
    sub_B0D8A4(&Method_ClassBoardEffectPlayer_SetData_int___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__, v9);
    byte_4217AE9 = 1;
  }
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)callback);
  this->fields.playEndCallback = callback;
  p_playEndCallback = &this->fields.playEndCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.playEndCallback,
    (System_Int32_array **)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  bgModel = this->fields.bgModel;
  if ( !bgModel )
    goto LABEL_16;
  startMainEffectPlayer = bgModel->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    goto LABEL_16;
  ClassBoardEffectPlayer__SetData_int_(
    startMainEffectPlayer,
    this->fields.baseId,
    (const MethodInfo_170D33C *)Method_ClassBoardEffectPlayer_SetData_int___);
  v21 = this->fields.bgModel;
  if ( !v21 )
    goto LABEL_16;
  v22 = v21->fields.startMainEffectPlayer;
  v23 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v19, v20);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_ClassBoardEffectController_PlayNext__, 0LL);
  if ( !v22 )
    goto LABEL_16;
  v22->fields.endCallback = v23;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v22->fields.endCallback,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = this->fields.bgModel;
  if ( !v30 )
    goto LABEL_16;
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !startMainEffectPlayer )
    goto LABEL_16;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)startMainEffectPlayer,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v30->fields.startMainEffectPlayer,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !startMainEffectPlayer )
    goto LABEL_16;
  if ( SLODWORD(startMainEffectPlayer->fields.playCallback) < 1 )
  {
    startMainEffectPlayer = (ClassBoardEffectPlayer_o *)*p_playEndCallback;
    if ( *p_playEndCallback )
      goto LABEL_15;
LABEL_16:
    sub_B0D97C(startMainEffectPlayer);
  }
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)startMainEffectPlayer,
                                                        (const MethodInfo_1B4A958 *)Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
  if ( !startMainEffectPlayer )
    goto LABEL_16;
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)startMainEffectPlayer->fields.playCallback;
  if ( startMainEffectPlayer )
LABEL_15:
    System_Action__Invoke((System_Action_o *)startMainEffectPlayer, 0LL);
}


void __fastcall ClassBoardEffectController__PlayNext(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  ClassBoardEffectController_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x21
  int v5; // w20
  int size; // w8
  ClassBoardEffectPlayer_o *v7; // x8

  v2 = this;
  if ( (byte_4217AED & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__, method);
    this = (ClassBoardEffectController_o *)sub_B0D8A4(
                                             &Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Item__,
                                             v3);
    byte_4217AED = 1;
  }
  players = v2->fields.players;
  v5 = v2->fields.playEndCount + 1;
  v2->fields.playEndCount = v5;
  if ( !players )
    goto LABEL_12;
  size = players->fields._size;
  if ( v5 >= size )
  {
    this = (ClassBoardEffectController_o *)v2->fields.playEndCallback;
    if ( this )
      goto LABEL_11;
LABEL_12:
    sub_B0D97C(this);
  }
  if ( size <= (unsigned int)v5 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v7 = players->fields._items->m_Items[v5];
  if ( !v7 )
    goto LABEL_12;
  this = (ClassBoardEffectController_o *)v7->fields.playCallback;
  if ( this )
LABEL_11:
    System_Action__Invoke((System_Action_o *)this, 0LL);
}


void __fastcall ClassBoardEffectController__PlayRelease(
        ClassBoardEffectController_o *this,
        ClassBoardSquare_o *releaseSquare,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x0
  bool v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *current; // x24
  System_Action_o *v27; // x20
  __int64 v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Action_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4217AE8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, releaseSquare);
    sub_B0D8A4(&Method_ClassBoardEffectController_CheckPlayEnd__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__get_Current__, v10);
    sub_B0D8A4(&IClassBoardLockModel_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__, v13);
    byte_4217AE8 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)releaseSquare);
  this->fields.playEndCallback = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.playEndCallback,
    (System_Int32_array **)callback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !releaseSquare
    || (v21 = sub_B0D964(releaseSquare->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo) != 0,
        ClassBoardEffectController__RegisterConnectingLineBlankPlayer(this, releaseSquare, v21, v22),
        ClassBoardEffectController__RegisterConnectedSquareEnablePlayer(this, releaseSquare, v23),
        (players = this->fields.players) == 0LL)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)players,
          (EventMissionProgressRequest_Argument_ProgressData_o *)releaseSquare->fields.releaseEffectPlayer,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__),
        (players = this->fields.players) == 0LL) )
  {
    sub_B0D97C(players);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)players,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v36,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__) )
  {
    current = v36.fields.current;
    v27 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v24, v25);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_ClassBoardEffectController_CheckPlayEnd__, 0LL);
    if ( !current )
      sub_B0D97C(v28);
    current[2].klass = (Il2CppClass *)v27;
    sub_B0D840((BattleServantConfConponent_o *)&current[2], (System_Int32_array **)v27, v29, v30, v31, v32, v33, v34);
    monitor = (System_Action_o *)current[1].monitor;
    if ( monitor )
      System_Action__Invoke(monitor, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v36,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__);
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
  if ( (byte_4217AEA & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, callback);
    byte_4217AEA = 1;
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
  __int64 v27; // x22
  __int64 v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x21
  System_Collections_Generic_List_T__o *players; // x19
  __int64 v37; // x1
  __int64 v38; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v39; // x23
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x19
  __int64 *v43; // x19
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  IClassBoardSquareModel_c **v46; // x11
  __int64 v47; // x0
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squareViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__c *klass; // x8
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v53; // x19
  AcquireFlag_c **v54; // x24
  __int64 v55; // x8
  unsigned __int64 v56; // x10
  int *v57; // x11
  __int64 v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x23
  __int64 v62; // x8
  unsigned __int64 v63; // x10
  int *v64; // x11
  __int64 v65; // x0
  System_Int32_array **v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x22
  AcquireFlag_c **v74; // x28
  System_Collections_Generic_List_T__o *v75; // x24
  __int64 v76; // x1
  __int64 v77; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v78; // x25
  bool v79; // w0
  __int64 v80; // x1
  __int64 v81; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v83; // x25
  WarBoardData_SquareRangeSearch_o *v84; // x0
  WarBoardData_SquareRangeSearch_o *v85; // x23
  WarBoardData_SquareRangeSearch_c *v86; // x8
  unsigned __int64 v87; // x10
  IClassBoardSquareModel_c **v88; // x11
  __int64 v89; // x0
  int v90; // w0
  AcquireFlag_c *v91; // x8
  System_Enum_o *v92; // x23
  AcquireFlag_c *v93; // x0
  System_Enum_o *v94; // x0
  _BOOL8 HasFlag; // x0
  ClassBoardEffectPlayer_o *v96; // x23
  bool v97; // w1
  __int64 v98; // x0
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v99; // x0
  __int64 v100; // x8
  unsigned __int64 v101; // x10
  int *v102; // x11
  __int64 v103; // x0
  int v104; // [xsp+8h] [xbp-68h] BYREF
  int v105; // [xsp+Ch] [xbp-64h] BYREF
  __int64 v106; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v107; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4217AEF & 1) == 0 )
  {
    sub_B0D8A4(&AcquireFlag_TypeInfo, releaseSquare);
    sub_B0D8A4(&Method_BasicHelper_Any_ClassBoardEffectPlayer___, v5);
    sub_B0D8A4(&Method_ClassBoardEffectPlayer_SetData_bool___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___, v7);
    sub_B0D8A4(&Method_System_Func_IClassBoardSquareModel__bool___ctor__, v8);
    sub_B0D8A4(&Method_System_Func_ClassBoardEffectPlayer__bool___ctor__, v9);
    sub_B0D8A4(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo, v10);
    sub_B0D8A4(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v11);
    sub_B0D8A4(&IClassBoardLockModel_TypeInfo, v12);
    sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v13);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo, v15);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo, v16);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__, v20);
    sub_B0D8A4(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v21);
    sub_B0D8A4(
      &Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectedSquareEnablePlayer_b__0__,
      v22);
    sub_B0D8A4(&ClassBoardEffectController___c__DisplayClass16_0_TypeInfo, v23);
    sub_B0D8A4(
      &Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__1__,
      v24);
    sub_B0D8A4(
      &Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__2__,
      v25);
    sub_B0D8A4(&ClassBoardEffectController___c__DisplayClass16_1_TypeInfo, v26);
    byte_4217AEF = 1;
  }
  v107 = 0LL;
  HIDWORD(v106) = 0;
  v27 = sub_B0D974(ClassBoardEffectController___c__DisplayClass16_0_TypeInfo, releaseSquare, method);
  ClassBoardEffectController___c__DisplayClass16_0___ctor(
    (ClassBoardEffectController___c__DisplayClass16_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_66;
  *(_QWORD *)(v27 + 16) = releaseSquare;
  v35 = v27 + 16;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v27 + 16),
    (System_Int32_array **)releaseSquare,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v39 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_ClassBoardEffectPlayer__bool__TypeInfo,
                                                                             v37,
                                                                             v38);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v39,
    (Il2CppObject *)v27,
    Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectedSquareEnablePlayer_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
  if ( BasicHelper__Any_WarBoardData_SquareRangeSearch_(
         players,
         (System_Func_T__bool__o *)v39,
         (const MethodInfo_1707138 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
  {
    return;
  }
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                                                                  v40,
                                                                                                  v41);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  v107 = v42;
  if ( !*(_QWORD *)v35 )
    goto LABEL_66;
  v43 = *(__int64 **)(*(_QWORD *)v35 + 168LL);
  if ( !v43 )
    goto LABEL_66;
  v44 = *v43;
  if ( *(_WORD *)(*v43 + 298) )
  {
    v45 = 0LL;
    v46 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v44 + 176) + 8LL);
    while ( *(v46 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v45;
      v46 += 2;
      if ( v45 >= *(unsigned __int16 *)(*v43 + 298) )
        goto LABEL_11;
    }
    v47 = v44 + 16LL * (*(_DWORD *)v46 + 15) + 312;
  }
  else
  {
LABEL_11:
    v47 = sub_AA67A0(v43, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  v28 = (*(__int64 (__fastcall **)(__int64 *, System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **, _QWORD))v47)(
          v43,
          &v107,
          *(_QWORD *)(v47 + 8));
  if ( v107 && v107->fields._size >= 1 )
  {
    squareViewList = this->fields.squareViewList;
    if ( squareViewList )
    {
      klass = squareViewList->klass;
      if ( *(_WORD *)&squareViewList->klass->_2.bitflags1 )
      {
        v50 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_ClassBoardSquare__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo )
        {
          ++v50;
          p_offset += 4;
          if ( v50 >= *(unsigned __int16 *)&squareViewList->klass->_2.bitflags1 )
            goto LABEL_20;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_20:
        p_method = sub_AA67A0(
                     this->fields.squareViewList,
                     System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo,
                     0LL);
      }
      v53 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *, _QWORD))p_method)(
              squareViewList,
              *(_QWORD *)(p_method + 8));
      if ( !v53 )
        sub_B0D97C(0LL);
      v54 = &AcquireFlag_TypeInfo;
      while ( 1 )
      {
        v55 = *(_QWORD *)v53;
        if ( *(_WORD *)(*(_QWORD *)v53 + 298LL) )
        {
          v56 = 0LL;
          v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v57 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v56;
            v57 += 4;
            if ( v56 >= *(unsigned __int16 *)(*(_QWORD *)v53 + 298LL) )
              goto LABEL_28;
          }
          v58 = v55 + 16LL * *v57 + 312;
        }
        else
        {
LABEL_28:
          v58 = sub_AA67A0(v53, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v53, *(_QWORD *)(v58 + 8)) & 1) == 0 )
          break;
        v61 = sub_B0D974(ClassBoardEffectController___c__DisplayClass16_1_TypeInfo, v59, v60);
        ClassBoardEffectController___c__DisplayClass16_1___ctor(
          (ClassBoardEffectController___c__DisplayClass16_1_o *)v61,
          0LL);
        v62 = *(_QWORD *)v53;
        if ( *(_WORD *)(*(_QWORD *)v53 + 298LL) )
        {
          v63 = 0LL;
          v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_ClassBoardSquare__c **)v64 - 1) != System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo )
          {
            ++v63;
            v64 += 4;
            if ( v63 >= *(unsigned __int16 *)(*(_QWORD *)v53 + 298LL) )
              goto LABEL_35;
          }
          v65 = v62 + 16LL * *v64 + 312;
        }
        else
        {
LABEL_35:
          v65 = sub_AA67A0(v53, System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo, 0LL);
        }
        v66 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v53, *(_QWORD *)(v65 + 8));
        if ( !v61 )
          sub_B0D97C(v66);
        *(_QWORD *)(v61 + 16) = v66;
        v73 = v61 + 16;
        sub_B0D840((BattleServantConfConponent_o *)(v61 + 16), v66, v67, v68, v69, v70, v71, v72);
        v74 = v54;
        v75 = (System_Collections_Generic_List_T__o *)this->fields.players;
        v78 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_ClassBoardEffectPlayer__bool__TypeInfo,
                                                                                   v76,
                                                                                   v77);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v78,
          (Il2CppObject *)v61,
          Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__1__,
          (const MethodInfo_26189B8 *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
        v79 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                v75,
                (System_Func_T__bool__o *)v78,
                (const MethodInfo_1707138 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
        v54 = v74;
        if ( !v79 )
        {
          v82 = (System_Collections_Generic_IEnumerable_TSource__o *)v107;
          v83 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_IClassBoardSquareModel__bool__TypeInfo,
                                                                                     v80,
                                                                                     v81);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v83,
            (Il2CppObject *)v61,
            Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__2__,
            (const MethodInfo_26189B8 *)Method_System_Func_IClassBoardSquareModel__bool___ctor__);
          v84 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                  v82,
                  (System_Func_TSource__bool__o *)v83,
                  (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
          v85 = v84;
          v54 = v74;
          if ( v84 )
          {
            v86 = v84->klass;
            if ( *(_WORD *)&v84->klass->_2.bitflags1 )
            {
              v87 = 0LL;
              v88 = (IClassBoardSquareModel_c **)&v86->_1.interfaceOffsets->offset;
              while ( *(v88 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                ++v87;
                v88 += 2;
                if ( v87 >= *(unsigned __int16 *)&v84->klass->_2.bitflags1 )
                  goto LABEL_44;
              }
              v89 = (__int64)(&v86[1]._1.methods + 2 * *(_DWORD *)v88);
            }
            else
            {
LABEL_44:
              v89 = sub_AA67A0(v84, IClassBoardSquareModel_TypeInfo, 13LL);
            }
            v90 = (*(__int64 (__fastcall **)(WarBoardData_SquareRangeSearch_o *, _QWORD, _QWORD))v89)(
                    v85,
                    0LL,
                    *(_QWORD *)(v89 + 8));
            v91 = *v74;
            v105 = v90;
            v92 = (System_Enum_o *)j_il2cpp_value_box_0(v91, &v105);
            v93 = *v74;
            v104 = 1;
            v94 = (System_Enum_o *)j_il2cpp_value_box_0(v93, &v104);
            if ( !v92 )
              sub_B0D97C(v94);
            HasFlag = System_Enum__HasFlag(v92, v94, 0LL);
            if ( !HasFlag )
            {
              if ( !*(_QWORD *)v73 )
                sub_B0D97C(HasFlag);
              if ( !*(_QWORD *)v35 )
                sub_B0D97C(HasFlag);
              v96 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v73 + 152LL);
              if ( !v96 )
                sub_B0D97C(HasFlag);
              v97 = sub_B0D964(*(_QWORD *)(*(_QWORD *)v35 + 168LL), IClassBoardLockModel_TypeInfo) != 0;
              ClassBoardEffectPlayer__SetData_bool_(
                v96,
                v97,
                (const MethodInfo_170D2DC *)Method_ClassBoardEffectPlayer_SetData_bool___);
              if ( !*(_QWORD *)v73 )
                sub_B0D97C(v98);
              v99 = this->fields.players;
              if ( !v99 )
                sub_B0D97C(0LL);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v99,
                *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v73 + 152LL),
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
            }
          }
        }
      }
      v106 = 0x10000010ELL;
      v100 = *(_QWORD *)v53;
      if ( *(_WORD *)(*(_QWORD *)v53 + 298LL) )
      {
        v101 = 0LL;
        v102 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v102 - 1) != System_IDisposable_TypeInfo )
        {
          ++v101;
          v102 += 4;
          if ( v101 >= *(unsigned __int16 *)(*(_QWORD *)v53 + 298LL) )
            goto LABEL_59;
        }
        v103 = v100 + 16LL * *v102 + 312;
      }
      else
      {
LABEL_59:
        v103 = sub_AA67A0(v53, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v103)(v53, *(_QWORD *)(v103 + 8));
      if ( (_DWORD)v106 == 270 )
        v106 = 270LL;
      return;
    }
LABEL_66:
    sub_B0D97C(v28);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectController__RegisterConnectingLineBlankPlayer(
        ClassBoardEffectController_o *this,
        ClassBoardSquare_o *releaseSquare,
        bool isLock,
        const MethodInfo *method)
{
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
  __int64 v26; // x23
  _BOOL8 v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x22
  System_Collections_Generic_List_T__o *players; // x19
  __int64 v36; // x1
  __int64 v37; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v38; // x24
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *lineViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__c *klass; // x8
  unsigned __int64 v41; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v44; // x19
  __int64 v45; // x8
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x25
  __int64 v52; // x8
  unsigned __int64 v53; // x10
  int *v54; // x11
  __int64 v55; // x0
  System_Int32_array **v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  __int64 v63; // x24
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x23
  System_Collections_Generic_List_T__o *v67; // x26
  __int64 v68; // x1
  __int64 v69; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v70; // x27
  _BOOL8 v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array ***v78; // x25
  __int64 v79; // x0
  __int64 *v80; // x26
  __int64 v81; // x8
  unsigned __int64 v82; // x10
  IClassBoardLineModel_c **v83; // x11
  __int64 v84; // x0
  __int64 v85; // x0
  __int64 v86; // x26
  __int64 v87; // x8
  unsigned __int64 v88; // x10
  int *v89; // x11
  __int64 v90; // x0
  __int64 v91; // x0
  __int64 *v92; // x27
  __int64 v93; // x8
  int v94; // w26
  unsigned __int64 v95; // x10
  int *v96; // x11
  __int64 v97; // x0
  __int64 v98; // x0
  __int64 v99; // x8
  __int64 *v100; // x26
  __int64 v101; // x8
  unsigned __int64 v102; // x10
  int *v103; // x11
  __int64 v104; // x0
  __int64 *v105; // x26
  __int64 v106; // x8
  unsigned __int64 v107; // x10
  int *v108; // x11
  __int64 v109; // x0
  __int64 v110; // x0
  __int64 v111; // x26
  __int64 v112; // x8
  unsigned __int64 v113; // x10
  int *v114; // x11
  __int64 v115; // x0
  __int64 v116; // x0
  __int64 *v117; // x27
  __int64 v118; // x8
  int v119; // w26
  unsigned __int64 v120; // x10
  int *v121; // x11
  __int64 v122; // x0
  __int64 v123; // x0
  __int64 v124; // x8
  unsigned __int64 v125; // x10
  IClassBoardLineModel_c **v126; // x11
  System_Int32_array **v127; // x0
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  ClassBoardEffectPlayer_o *v134; // x0
  __int64 v135; // x0
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v136; // x0
  __int64 v137; // x0
  System_Int32_array **v138; // x24
  System_Int32_array *v139; // x8
  unsigned __int64 v140; // x10
  IClassBoardSquareModel_c **v141; // x11
  __int64 v142; // x0
  __int64 v143; // x1
  __int64 v144; // x2
  System_Collections_Generic_IEnumerable_TSource__o *squareViewList; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v146; // x25
  WarBoardData_SquareRangeSearch_o *v147; // x23
  const MethodInfo *v148; // x3
  __int64 v149; // x0
  ClassBoardEffectPlayer_o *monitor; // x0
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v151; // x0
  __int64 v152; // x8
  unsigned __int64 v153; // x10
  int *v154; // x11
  __int64 v155; // x0

  if ( (byte_4217AEE & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_ClassBoardEffectPlayer___, releaseSquare);
    sub_B0D8A4(&Method_ClassBoardEffectPlayer_SetData_bool___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___, v7);
    sub_B0D8A4(&Method_System_Func_ClassBoardEffectPlayer__bool___ctor__, v8);
    sub_B0D8A4(&Method_System_Func_ClassBoardSquare__bool___ctor__, v9);
    sub_B0D8A4(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo, v10);
    sub_B0D8A4(&System_Func_ClassBoardSquare__bool__TypeInfo, v11);
    sub_B0D8A4(&IClassBoardLineModel_TypeInfo, v12);
    sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v13);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo, v15);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo, v16);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v18);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v19);
    sub_B0D8A4(&Method_ClassBoardEffectController___c__DisplayClass15_0__RegisterConnectingLineBlankPlayer_b__0__, v20);
    sub_B0D8A4(&ClassBoardEffectController___c__DisplayClass15_0_TypeInfo, v21);
    sub_B0D8A4(&Method_ClassBoardEffectController___c__DisplayClass15_1__RegisterConnectingLineBlankPlayer_b__1__, v22);
    sub_B0D8A4(&ClassBoardEffectController___c__DisplayClass15_1_TypeInfo, v23);
    sub_B0D8A4(&Method_ClassBoardEffectController___c__DisplayClass15_2__RegisterConnectingLineBlankPlayer_b__2__, v24);
    sub_B0D8A4(&ClassBoardEffectController___c__DisplayClass15_2_TypeInfo, v25);
    byte_4217AEE = 1;
  }
  v26 = sub_B0D974(ClassBoardEffectController___c__DisplayClass15_0_TypeInfo, releaseSquare, isLock);
  ClassBoardEffectController___c__DisplayClass15_0___ctor(
    (ClassBoardEffectController___c__DisplayClass15_0_o *)v26,
    0LL);
  if ( !v26 )
    goto LABEL_144;
  *(_QWORD *)(v26 + 16) = releaseSquare;
  v34 = v26 + 16;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v26 + 16),
    (System_Int32_array **)releaseSquare,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v38 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_ClassBoardEffectPlayer__bool__TypeInfo,
                                                                             v36,
                                                                             v37);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v38,
    (Il2CppObject *)v26,
    Method_ClassBoardEffectController___c__DisplayClass15_0__RegisterConnectingLineBlankPlayer_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
  v27 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
          players,
          (System_Func_T__bool__o *)v38,
          (const MethodInfo_1707138 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
  if ( v27 )
    return;
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList )
LABEL_144:
    sub_B0D97C(v27);
  klass = lineViewList->klass;
  if ( *(_WORD *)&lineViewList->klass->_2.bitflags1 )
  {
    v41 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ClassBoardLine__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo )
    {
      ++v41;
      p_offset += 4;
      if ( v41 >= *(unsigned __int16 *)&lineViewList->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AA67A0(
                 this->fields.lineViewList,
                 System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo,
                 0LL);
  }
  v44 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *, _QWORD))p_method)(
          lineViewList,
          *(_QWORD *)(p_method + 8));
  if ( !v44 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v45 = *(_QWORD *)v44;
    if ( *(_WORD *)(*(_QWORD *)v44 + 298LL) )
    {
      v46 = 0LL;
      v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v47 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v46;
        v47 += 4;
        if ( v46 >= *(unsigned __int16 *)(*(_QWORD *)v44 + 298LL) )
          goto LABEL_17;
      }
      v48 = v45 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_17:
      v48 = sub_AA67A0(v44, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v44, *(_QWORD *)(v48 + 8)) & 1) == 0 )
      break;
    v51 = sub_B0D974(ClassBoardEffectController___c__DisplayClass15_1_TypeInfo, v49, v50);
    ClassBoardEffectController___c__DisplayClass15_1___ctor(
      (ClassBoardEffectController___c__DisplayClass15_1_o *)v51,
      0LL);
    v52 = *(_QWORD *)v44;
    if ( *(_WORD *)(*(_QWORD *)v44 + 298LL) )
    {
      v53 = 0LL;
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardLine__c **)v54 - 1) != System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo )
      {
        ++v53;
        v54 += 4;
        if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)v44 + 298LL) )
          goto LABEL_24;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_24:
      v55 = sub_AA67A0(v44, System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo, 0LL);
    }
    v56 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v44, *(_QWORD *)(v55 + 8));
    if ( !v51 )
      sub_B0D97C(v56);
    *(_QWORD *)(v51 + 16) = v56;
    v63 = v51 + 16;
    sub_B0D840((BattleServantConfConponent_o *)(v51 + 16), v56, v57, v58, v59, v60, v61, v62);
    v66 = sub_B0D974(ClassBoardEffectController___c__DisplayClass15_2_TypeInfo, v64, v65);
    ClassBoardEffectController___c__DisplayClass15_2___ctor(
      (ClassBoardEffectController___c__DisplayClass15_2_o *)v66,
      0LL);
    v67 = (System_Collections_Generic_List_T__o *)this->fields.players;
    v70 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_ClassBoardEffectPlayer__bool__TypeInfo,
                                                                               v68,
                                                                               v69);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v70,
      (Il2CppObject *)v51,
      Method_ClassBoardEffectController___c__DisplayClass15_1__RegisterConnectingLineBlankPlayer_b__1__,
      (const MethodInfo_26189B8 *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
    v71 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
            v67,
            (System_Func_T__bool__o *)v70,
            (const MethodInfo_1707138 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    if ( !v71 )
    {
      if ( !v66 )
        sub_B0D97C(v71);
      *(_QWORD *)(v66 + 16) = 0LL;
      v78 = (System_Int32_array ***)(v66 + 16);
      sub_B0D840((BattleServantConfConponent_o *)(v66 + 16), 0LL, v72, v73, v74, v75, v76, v77);
      if ( !*(_QWORD *)v63 )
        sub_B0D97C(v79);
      v80 = *(__int64 **)(*(_QWORD *)v63 + 160LL);
      if ( !v80 )
        sub_B0D97C(v79);
      v81 = *v80;
      if ( *(_WORD *)(*v80 + 298) )
      {
        v82 = 0LL;
        v83 = (IClassBoardLineModel_c **)(*(_QWORD *)(v81 + 176) + 8LL);
        while ( *(v83 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v82;
          v83 += 2;
          if ( v82 >= *(unsigned __int16 *)(*v80 + 298) )
            goto LABEL_35;
        }
        v84 = v81 + 16LL * (*(_DWORD *)v83 + 1) + 312;
      }
      else
      {
LABEL_35:
        v84 = sub_AA67A0(v80, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v85 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v84)(v80, *(_QWORD *)(v84 + 8));
      v86 = v85;
      if ( !v85 )
        sub_B0D97C(0LL);
      v87 = *(_QWORD *)v85;
      if ( *(_WORD *)(*(_QWORD *)v85 + 298LL) )
      {
        v88 = 0LL;
        v89 = (int *)(*(_QWORD *)(v87 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v89 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v88;
          v89 += 4;
          if ( v88 >= *(unsigned __int16 *)(*(_QWORD *)v85 + 298LL) )
            goto LABEL_42;
        }
        v90 = v87 + 16LL * *v89 + 312;
      }
      else
      {
LABEL_42:
        v90 = sub_AA67A0(v85, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v91 = (*(__int64 (__fastcall **)(__int64, _QWORD))v90)(v86, *(_QWORD *)(v90 + 8));
      if ( !*(_QWORD *)v34 )
        sub_B0D97C(v91);
      v92 = *(__int64 **)(*(_QWORD *)v34 + 168LL);
      if ( !v92 )
        sub_B0D97C(v91);
      v93 = *v92;
      v94 = v91;
      if ( *(_WORD *)(*v92 + 298) )
      {
        v95 = 0LL;
        v96 = (int *)(*(_QWORD *)(v93 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v96 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v95;
          v96 += 4;
          if ( v95 >= *(unsigned __int16 *)(*v92 + 298) )
            goto LABEL_50;
        }
        v97 = v93 + 16LL * *v96 + 312;
      }
      else
      {
LABEL_50:
        v97 = sub_AA67A0(v92, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v98 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v97)(v92, *(_QWORD *)(v97 + 8));
      v99 = *(_QWORD *)v63;
      if ( v94 == (_DWORD)v98 )
      {
        if ( !v99 )
          sub_B0D97C(v98);
        v100 = *(__int64 **)(v99 + 160);
        if ( !v100 )
          sub_B0D97C(v98);
        v101 = *v100;
        if ( *(_WORD *)(*v100 + 298) )
        {
          v102 = 0LL;
          v103 = (int *)(*(_QWORD *)(v101 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v103 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v102;
            v103 += 4;
            if ( v102 >= *(unsigned __int16 *)(*v100 + 298) )
              goto LABEL_59;
          }
          v104 = v101 + 16LL * *v103 + 312;
        }
        else
        {
LABEL_59:
          v104 = sub_AA67A0(v100, IClassBoardLineModel_TypeInfo, 0LL);
        }
LABEL_93:
        v127 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v104)(v100, *(_QWORD *)(v104 + 8));
        *v78 = v127;
        sub_B0D840((BattleServantConfConponent_o *)(v66 + 16), v127, v128, v129, v130, v131, v132, v133);
        goto LABEL_94;
      }
      if ( !v99 )
        sub_B0D97C(v98);
      v105 = *(__int64 **)(v99 + 160);
      if ( !v105 )
        sub_B0D97C(v98);
      v106 = *v105;
      if ( *(_WORD *)(*v105 + 298) )
      {
        v107 = 0LL;
        v108 = (int *)(*(_QWORD *)(v106 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v108 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v107;
          v108 += 4;
          if ( v107 >= *(unsigned __int16 *)(*v105 + 298) )
            goto LABEL_66;
        }
        v109 = v106 + 16LL * *v108 + 312;
      }
      else
      {
LABEL_66:
        v109 = sub_AA67A0(v105, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v110 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v109)(v105, *(_QWORD *)(v109 + 8));
      v111 = v110;
      if ( !v110 )
        sub_B0D97C(0LL);
      v112 = *(_QWORD *)v110;
      if ( *(_WORD *)(*(_QWORD *)v110 + 298LL) )
      {
        v113 = 0LL;
        v114 = (int *)(*(_QWORD *)(v112 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v114 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v113;
          v114 += 4;
          if ( v113 >= *(unsigned __int16 *)(*(_QWORD *)v110 + 298LL) )
            goto LABEL_74;
        }
        v115 = v112 + 16LL * *v114 + 312;
      }
      else
      {
LABEL_74:
        v115 = sub_AA67A0(v110, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v116 = (*(__int64 (__fastcall **)(__int64, _QWORD))v115)(v111, *(_QWORD *)(v115 + 8));
      if ( !*(_QWORD *)v34 )
        sub_B0D97C(v116);
      v117 = *(__int64 **)(*(_QWORD *)v34 + 168LL);
      if ( !v117 )
        sub_B0D97C(v116);
      v118 = *v117;
      v119 = v116;
      if ( *(_WORD *)(*v117 + 298) )
      {
        v120 = 0LL;
        v121 = (int *)(*(_QWORD *)(v118 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v121 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v120;
          v121 += 4;
          if ( v120 >= *(unsigned __int16 *)(*v117 + 298) )
            goto LABEL_82;
        }
        v122 = v118 + 16LL * *v121 + 312;
      }
      else
      {
LABEL_82:
        v122 = sub_AA67A0(v117, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v123 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v122)(v117, *(_QWORD *)(v122 + 8));
      if ( v119 == (_DWORD)v123 )
      {
        if ( !*(_QWORD *)v63 )
          sub_B0D97C(v123);
        v100 = *(__int64 **)(*(_QWORD *)v63 + 160LL);
        if ( !v100 )
          sub_B0D97C(v123);
        v124 = *v100;
        if ( *(_WORD *)(*v100 + 298) )
        {
          v125 = 0LL;
          v126 = (IClassBoardLineModel_c **)(*(_QWORD *)(v124 + 176) + 8LL);
          while ( *(v126 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v125;
            v126 += 2;
            if ( v125 >= *(unsigned __int16 *)(*v100 + 298) )
              goto LABEL_91;
          }
          v104 = v124 + 16LL * (*(_DWORD *)v126 + 1) + 312;
        }
        else
        {
LABEL_91:
          v104 = sub_AA67A0(v100, IClassBoardLineModel_TypeInfo, 1LL);
        }
        goto LABEL_93;
      }
LABEL_94:
      if ( *v78 )
      {
        if ( !*(_QWORD *)v63 )
          sub_B0D97C(v123);
        v134 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v63 + 144LL);
        if ( !v134 )
          sub_B0D97C(0LL);
        ClassBoardEffectPlayer__SetData_bool_(
          v134,
          isLock,
          (const MethodInfo_170D2DC *)Method_ClassBoardEffectPlayer_SetData_bool___);
        if ( !*(_QWORD *)v63 )
          sub_B0D97C(v135);
        v136 = this->fields.players;
        if ( !v136 )
          sub_B0D97C(0LL);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v136,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v63 + 144LL),
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
        v138 = *v78;
        if ( !*v78 )
          sub_B0D97C(v137);
        v139 = *v138;
        if ( HIWORD((*v138)->m_Items[67]) )
        {
          v140 = 0LL;
          v141 = (IClassBoardSquareModel_c **)(*(_QWORD *)&v139->m_Items[37] + 8LL);
          while ( *(v141 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            ++v140;
            v141 += 2;
            if ( v140 >= HIWORD((*v138)->m_Items[67]) )
              goto LABEL_104;
          }
          v142 = (__int64)&v139->m_Items[4 * *(_DWORD *)v141 + 91];
        }
        else
        {
LABEL_104:
          v142 = sub_AA67A0(*v78, IClassBoardSquareModel_TypeInfo, 5LL);
        }
        if ( ((*(__int64 (__fastcall **)(System_Int32_array **, _QWORD))v142)(v138, *(_QWORD *)(v142 + 8)) & 1) != 0 )
        {
          squareViewList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.squareViewList;
          v146 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                      System_Func_ClassBoardSquare__bool__TypeInfo,
                                                                                      v143,
                                                                                      v144);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v146,
            (Il2CppObject *)v66,
            Method_ClassBoardEffectController___c__DisplayClass15_2__RegisterConnectingLineBlankPlayer_b__2__,
            (const MethodInfo_26189B8 *)Method_System_Func_ClassBoardSquare__bool___ctor__);
          v147 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                   squareViewList,
                   (System_Func_TSource__bool__o *)v146,
                   (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v147, 0LL, 0LL) )
          {
            ClassBoardEffectController__RegisterConnectingLineBlankPlayer(
              this,
              (ClassBoardSquare_o *)v147,
              isLock,
              v148);
            if ( !v147 )
              sub_B0D97C(v149);
            monitor = (ClassBoardEffectPlayer_o *)v147[6].monitor;
            if ( !monitor )
              sub_B0D97C(0LL);
            ClassBoardEffectPlayer__SetData_bool_(
              monitor,
              isLock,
              (const MethodInfo_170D2DC *)Method_ClassBoardEffectPlayer_SetData_bool___);
            v151 = this->fields.players;
            if ( !v151 )
              sub_B0D97C(0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v151,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v147[6].monitor,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
          }
        }
      }
    }
  }
  v152 = *(_QWORD *)v44;
  if ( *(_WORD *)(*(_QWORD *)v44 + 298LL) )
  {
    v153 = 0LL;
    v154 = (int *)(*(_QWORD *)(v152 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v154 - 1) != System_IDisposable_TypeInfo )
    {
      ++v153;
      v154 += 4;
      if ( v153 >= *(unsigned __int16 *)(*(_QWORD *)v44 + 298LL) )
        goto LABEL_119;
    }
    v155 = v152 + 16LL * *v154 + 312;
  }
  else
  {
LABEL_119:
    v155 = sub_AA67A0(v44, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v155)(v44, *(_QWORD *)(v155 + 8));
}


void __fastcall ClassBoardEffectController__ResetPlayers(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x20
  void *v10; // x0
  struct ClassBoardEffectController___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__12_0; // x21
  Il2CppObject *v13; // x22
  struct ClassBoardEffectController___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_Action_o **p_playEndCallback; // x19
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_4217AEB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_ClassBoardEffectPlayer___ctor__, method);
    sub_B0D8A4(&System_Action_ClassBoardEffectPlayer__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__, v6);
    sub_B0D8A4(&Method_ClassBoardEffectController___c__ResetPlayers_b__12_0__, v7);
    sub_B0D8A4(&ClassBoardEffectController___c_TypeInfo, v8);
    byte_4217AEB = 1;
  }
  players = this->fields.players;
  v10 = ClassBoardEffectController___c_TypeInfo;
  if ( (BYTE3(ClassBoardEffectController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectController___c_TypeInfo);
    v10 = ClassBoardEffectController___c_TypeInfo;
  }
  static_fields = (struct ClassBoardEffectController___c_StaticFields *)*((_QWORD *)v10 + 23);
  _9__12_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (*((_BYTE *)v10 + 307) & 4) != 0 && !*((_DWORD *)v10 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = ClassBoardEffectController___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                      System_Action_ClassBoardEffectPlayer__TypeInfo,
                                                                                      method,
                                                                                      v2);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__12_0,
      v13,
      Method_ClassBoardEffectController___c__ResetPlayers_b__12_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_ClassBoardEffectPlayer___ctor__);
    v14 = ClassBoardEffectController___c_TypeInfo->static_fields;
    v14->__9__12_0 = (struct System_Action_ClassBoardEffectPlayer__o *)_9__12_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !players
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)players,
          (System_Action_T__o *)_9__12_0,
          (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__),
        (v10 = this->fields.players) == 0LL) )
  {
    sub_B0D97C(v10);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Clear__);
  this->fields.playEndCallback = 0LL;
  p_playEndCallback = &this->fields.playEndCallback;
  *((_DWORD *)p_playEndCallback - 4) = 0;
  sub_B0D840((BattleServantConfConponent_o *)p_playEndCallback, 0LL, v22, v23, v24, v25, v26, v27);
}


void __fastcall ClassBoardEffectController___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ClassBoardEffectController___c_StaticFields *static_fields; // x0

  if ( (byte_4211E21 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardEffectController___c_TypeInfo, v1);
    byte_4211E21 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ClassBoardEffectController___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ClassBoardEffectController___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardEffectController___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  if ( (byte_4211E22 & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass15_2_o *)sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, x);
    byte_4211E22 = 1;
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
    p_method = sub_AA67A0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardEffectController___c__DisplayClass15_2_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                 SquareModel_k__BackingField,
                                                                 *(_QWORD *)(p_method + 8));
  connectSquareModel = v4->fields.connectSquareModel;
  if ( !connectSquareModel )
LABEL_19:
    sub_B0D97C(this);
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
    v15 = sub_AA67A0(connectSquareModel, IClassBoardSquareModel_TypeInfo, 0LL);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  if ( (byte_4211E23 & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass16_1_o *)sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, model);
    byte_4211E23 = 1;
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
    p_method = sub_AA67A0(model, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardEffectController___c__DisplayClass16_1_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                 model,
                                                                 *(_QWORD *)(p_method + 8));
  square = v4->fields.square;
  if ( !square || (SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField) == 0LL )
LABEL_19:
    sub_B0D97C(this);
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
    v15 = sub_AA67A0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return v12 == (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v15)(
                  SquareModel_k__BackingField,
                  *(_QWORD *)(v15 + 8));
}