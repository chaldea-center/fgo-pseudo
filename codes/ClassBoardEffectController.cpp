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

  if ( (byte_40FB932 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_First_ClassBoardSquare___, squares);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo, v13);
    byte_40FB932 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo,
                                                                                                  squares,
                                                                                                  lines,
                                                                                                  camera,
                                                                                                  bg);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__);
  this->fields.players = (struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *)v14;
  sub_B16F98(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)squares,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.lineViewList = lines;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.lineViewList,
    (System_Int32_array **)lines,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.mapCamera = camera;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mapCamera,
    (System_Int32_array **)camera,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.bgModel = bg;
  sub_B16F98(
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
                                                    (const MethodInfo_18D6DD4 *)Method_System_Linq_Enumerable_First_ClassBoardSquare___);
  if ( !StonePurchaseNotificationMenu_DialogOpenQueue
    || (callback = StonePurchaseNotificationMenu_DialogOpenQueue[3].fields.callback) == 0LL )
  {
    sub_B170D4();
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
    v50 = sub_AAFEF8(
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
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x9
  int32_t v4; // w8
  System_Action_o *playEndCallback; // x0

  if ( (byte_40FB937 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__, method);
    byte_40FB937 = 1;
  }
  players = this->fields.players;
  v4 = this->fields.playEndCount + 1;
  this->fields.playEndCount = v4;
  if ( !players )
    goto LABEL_7;
  if ( v4 < players->fields._size )
    return;
  playEndCallback = this->fields.playEndCallback;
  if ( !playEndCallback )
LABEL_7:
    sub_B170D4();
  System_Action__Invoke(playEndCallback, 0LL);
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
  MapCameraViewAdjusterUtil_CameraDestinationInfo_o *SafeCameraDestination; // x0
  MapCameraViewAdjusterUtil_CameraDestinationInfo_o *v20; // x23
  UnityEngine_Transform_o *transform; // x0
  float v22; // s0
  float v23; // s1
  float v24; // s2
  UnityEngine_Component_o *v25; // x0
  float v26; // s11
  float v27; // s12
  float v28; // s13
  float v29; // s14
  float v30; // s15
  UnityEngine_Transform_o *v31; // x0
  float v32; // s0
  float v33; // s3
  MapCamera_o *v34; // x0
  System_Nullable_Vector3__o v35; // [xsp+0h] [xbp-80h] BYREF
  float v36; // [xsp+58h] [xbp-28h]
  float v37; // [xsp+5Ch] [xbp-24h]
  System_Nullable_float__o v38; // 0:x3.8
  System_Nullable_Vector3__o v39; // 0:x0.16
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s3.4,4:s4.4,8:s5.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_40FB93B & 1) == 0 )
  {
    sub_B16FFC(&MapCameraViewAdjusterUtil_TypeInfo, *(_QWORD *)&maxDistance);
    sub_B16FFC(&Method_System_Nullable_Vector3___ctor__, v17);
    byte_40FB93B = 1;
  }
  mapCamera = this->fields.mapCamera;
  *(_QWORD *)&v39.fields.value.fields.x = &v35;
  v40.fields.x = x;
  v40.fields.y = y;
  *(_QWORD *)&v39.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  v40.fields.z = z;
  *(_QWORD *)&v35.fields.value.fields.x = 0LL;
  *(_QWORD *)&v35.fields.value.fields.z = 0LL;
  System_Nullable_Vector3____ctor(v39, v40, *(const MethodInfo_29CF778 **)&ease);
  if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  }
  v38 = 0LL;
  SafeCameraDestination = MapCameraViewAdjusterUtil__GetSafeCameraDestination(mapCamera, v35, v38, 0LL);
  if ( !this->fields.mapCamera )
    goto LABEL_15;
  v20 = SafeCameraDestination;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.mapCamera, 0LL);
  if ( !transform )
    goto LABEL_15;
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_localPosition(transform, 0LL);
  if ( !v20 )
    goto LABEL_15;
  v36 = secMin;
  v37 = secMax;
  v25 = (UnityEngine_Component_o *)this->fields.mapCamera;
  if ( !v25 )
    goto LABEL_15;
  v26 = v20->fields._position_k__BackingField.fields.x;
  v27 = v20->fields._position_k__BackingField.fields.y;
  v28 = v22;
  v29 = v23;
  v30 = v24;
  v31 = UnityEngine_Component__get_transform(v25, 0LL);
  if ( !v31 )
    goto LABEL_15;
  localPosition = UnityEngine_Transform__get_localPosition(v31, 0LL);
  v43.fields.z = localPosition.fields.z;
  localPosition.fields.x = v28;
  localPosition.fields.y = v29;
  localPosition.fields.z = v30;
  v43.fields.x = v26;
  v43.fields.y = v27;
  v32 = UnityEngine_Vector3__Distance(localPosition, v43, 0LL) / (float)maxDistance;
  v33 = 0.0;
  if ( v32 != 0.0 )
    v33 = UnityEngine_Mathf__Clamp(v32, v36, v37, 0LL);
  v34 = this->fields.mapCamera;
  if ( !v34 )
LABEL_15:
    sub_B170D4();
  v42.fields.x = x;
  v42.fields.y = y;
  v42.fields.z = z;
  MapCamera__StartAutoMove(v34, v42, v33, ease, callback, 0LL);
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
  struct ClassBoardBackground_o *bgModel; // x8
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  struct ClassBoardBackground_o *v23; // x8
  struct ClassBoardEffectPlayer_o *v24; // x21
  System_Action_o *v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct ClassBoardBackground_o *v32; // x8
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x0
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v34; // x0
  StonePurchaseNotificationMenu_DialogOpenQueue_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  System_Action_o *v36; // x0

  if ( (byte_40FB934 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_ClassBoardEffectController_PlayNext__, v5);
    sub_B16FFC(&Method_ClassBoardEffectPlayer_SetData_int___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__, v9);
    byte_40FB934 = 1;
  }
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)callback);
  this->fields.playEndCallback = callback;
  p_playEndCallback = &this->fields.playEndCallback;
  sub_B16F98(
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
    (const MethodInfo_18BC0C0 *)Method_ClassBoardEffectPlayer_SetData_int___);
  v23 = this->fields.bgModel;
  if ( !v23 )
    goto LABEL_16;
  v24 = v23->fields.startMainEffectPlayer;
  v25 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v19, v20, v21, v22);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_ClassBoardEffectController_PlayNext__, 0LL);
  if ( !v24 )
    goto LABEL_16;
  v24->fields.endCallback = v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v24->fields.endCallback,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = this->fields.bgModel;
  if ( !v32 )
    goto LABEL_16;
  players = this->fields.players;
  if ( !players )
    goto LABEL_16;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)players,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v32->fields.startMainEffectPlayer,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
  v34 = this->fields.players;
  if ( !v34 )
    goto LABEL_16;
  if ( v34->fields._size < 1 )
  {
    v36 = *p_playEndCallback;
    if ( *p_playEndCallback )
      goto LABEL_15;
LABEL_16:
    sub_B170D4();
  }
  StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v34,
                                                    (const MethodInfo_18D6DD4 *)Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
  if ( !StonePurchaseNotificationMenu_DialogOpenQueue )
    goto LABEL_16;
  v36 = StonePurchaseNotificationMenu_DialogOpenQueue->fields.callback;
  if ( v36 )
LABEL_15:
    System_Action__Invoke(v36, 0LL);
}


void __fastcall ClassBoardEffectController__PlayNext(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x21
  int32_t v5; // w20
  unsigned int size; // w8
  ClassBoardEffectPlayer_o *v7; // x8
  System_Action_o *playEndCallback; // x0

  if ( (byte_40FB938 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Item__, v3);
    byte_40FB938 = 1;
  }
  players = this->fields.players;
  v5 = this->fields.playEndCount + 1;
  this->fields.playEndCount = v5;
  if ( !players )
    goto LABEL_12;
  size = players->fields._size;
  if ( v5 >= (int)size )
  {
    playEndCallback = this->fields.playEndCallback;
    if ( playEndCallback )
      goto LABEL_11;
LABEL_12:
    sub_B170D4();
  }
  if ( size <= v5 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = players->fields._items->m_Items[v5];
  if ( !v7 )
    goto LABEL_12;
  playEndCallback = v7->fields.playCallback;
  if ( playEndCallback )
LABEL_11:
    System_Action__Invoke(playEndCallback, 0LL);
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
  bool v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x0
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *current; // x24
  System_Action_o *v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Action_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FB933 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, releaseSquare);
    sub_B16FFC(&Method_ClassBoardEffectController_CheckPlayEnd__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__get_Current__, v10);
    sub_B16FFC(&IClassBoardLockModel_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__, v13);
    byte_40FB933 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)releaseSquare);
  this->fields.playEndCallback = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.playEndCallback,
    (System_Int32_array **)callback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !releaseSquare
    || (v20 = sub_B170BC(releaseSquare->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo) != 0,
        ClassBoardEffectController__RegisterConnectingLineBlankPlayer(this, releaseSquare, v20, v21),
        ClassBoardEffectController__RegisterConnectedSquareEnablePlayer(this, releaseSquare, v22),
        (players = this->fields.players) == 0LL)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)players,
          (EventMissionProgressRequest_Argument_ProgressData_o *)releaseSquare->fields.releaseEffectPlayer,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__),
        (v24 = this->fields.players) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v38,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v24,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__) )
  {
    current = v38.fields.current;
    v30 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_ClassBoardEffectController_CheckPlayEnd__, 0LL);
    if ( !current )
      sub_B170D4();
    current[2].klass = (Il2CppClass *)v30;
    sub_B16F98((BattleServantConfConponent_o *)&current[2], (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
    monitor = (System_Action_o *)current[1].monitor;
    if ( monitor )
      System_Action__Invoke(monitor, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__);
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
  if ( (byte_40FB935 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, callback);
    byte_40FB935 = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v29; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x21
  System_Collections_Generic_List_T__o *players; // x19
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v42; // x23
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x19
  __int64 *v48; // x19
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  IClassBoardSquareModel_c **v51; // x11
  __int64 v52; // x0
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squareViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__c *klass; // x8
  unsigned __int64 v55; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v58; // x19
  AcquireFlag_c **v59; // x24
  __int64 v60; // x8
  unsigned __int64 v61; // x10
  int *v62; // x11
  __int64 v63; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  __int64 v68; // x23
  __int64 v69; // x8
  unsigned __int64 v70; // x10
  int *v71; // x11
  __int64 v72; // x0
  System_Int32_array **v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  __int64 v80; // x22
  AcquireFlag_c **v81; // x28
  System_Collections_Generic_List_T__o *v82; // x24
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v87; // x25
  bool v88; // w0
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v94; // x25
  WarBoardData_SquareRangeSearch_o *v95; // x0
  WarBoardData_SquareRangeSearch_o *v96; // x23
  WarBoardData_SquareRangeSearch_c *v97; // x8
  unsigned __int64 v98; // x10
  IClassBoardSquareModel_c **v99; // x11
  __int64 v100; // x0
  int v101; // w0
  AcquireFlag_c *v102; // x8
  System_Enum_o *v103; // x23
  AcquireFlag_c *v104; // x0
  System_Enum_o *v105; // x1
  ClassBoardEffectPlayer_o *v106; // x23
  bool v107; // w1
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v108; // x0
  __int64 v109; // x8
  unsigned __int64 v110; // x10
  int *v111; // x11
  __int64 v112; // x0
  int v113; // [xsp+8h] [xbp-68h] BYREF
  int v114; // [xsp+Ch] [xbp-64h] BYREF
  __int64 v115; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v116; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40FB93A & 1) == 0 )
  {
    sub_B16FFC(&AcquireFlag_TypeInfo, releaseSquare);
    sub_B16FFC(&Method_BasicHelper_Any_ClassBoardEffectPlayer___, v7);
    sub_B16FFC(&Method_ClassBoardEffectPlayer_SetData_bool___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___, v9);
    sub_B16FFC(&Method_System_Func_IClassBoardSquareModel__bool___ctor__, v10);
    sub_B16FFC(&Method_System_Func_ClassBoardEffectPlayer__bool___ctor__, v11);
    sub_B16FFC(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo, v12);
    sub_B16FFC(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v13);
    sub_B16FFC(&IClassBoardLockModel_TypeInfo, v14);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v15);
    sub_B16FFC(&System_IDisposable_TypeInfo, v16);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo, v17);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo, v18);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__, v22);
    sub_B16FFC(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v23);
    sub_B16FFC(
      &Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectedSquareEnablePlayer_b__0__,
      v24);
    sub_B16FFC(&ClassBoardEffectController___c__DisplayClass16_0_TypeInfo, v25);
    sub_B16FFC(
      &Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__1__,
      v26);
    sub_B16FFC(
      &Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__2__,
      v27);
    sub_B16FFC(&ClassBoardEffectController___c__DisplayClass16_1_TypeInfo, v28);
    byte_40FB93A = 1;
  }
  v116 = 0LL;
  HIDWORD(v115) = 0;
  v29 = sub_B170CC(ClassBoardEffectController___c__DisplayClass16_0_TypeInfo, releaseSquare, method, v3, v4);
  ClassBoardEffectController___c__DisplayClass16_0___ctor(
    (ClassBoardEffectController___c__DisplayClass16_0_o *)v29,
    0LL);
  if ( !v29 )
    goto LABEL_66;
  *(_QWORD *)(v29 + 16) = releaseSquare;
  v36 = v29 + 16;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v29 + 16),
    (System_Int32_array **)releaseSquare,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v42 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_ClassBoardEffectPlayer__bool__TypeInfo,
                                                                             v38,
                                                                             v39,
                                                                             v40,
                                                                             v41);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v42,
    (Il2CppObject *)v29,
    Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectedSquareEnablePlayer_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
  if ( BasicHelper__Any_WarBoardData_SquareRangeSearch_(
         players,
         (System_Func_T__bool__o *)v42,
         (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
  {
    return;
  }
  v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                                                                  v43,
                                                                                                  v44,
                                                                                                  v45,
                                                                                                  v46);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v47,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  v116 = v47;
  if ( !*(_QWORD *)v36 )
    goto LABEL_66;
  v48 = *(__int64 **)(*(_QWORD *)v36 + 168LL);
  if ( !v48 )
    goto LABEL_66;
  v49 = *v48;
  if ( *(_WORD *)(*v48 + 298) )
  {
    v50 = 0LL;
    v51 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v49 + 176) + 8LL);
    while ( *(v51 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v50;
      v51 += 2;
      if ( v50 >= *(unsigned __int16 *)(*v48 + 298) )
        goto LABEL_11;
    }
    v52 = v49 + 16LL * (*(_DWORD *)v51 + 15) + 312;
  }
  else
  {
LABEL_11:
    v52 = sub_AAFEF8(v48, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  (*(void (__fastcall **)(__int64 *, System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **, _QWORD))v52)(
    v48,
    &v116,
    *(_QWORD *)(v52 + 8));
  if ( v116 && v116->fields._size >= 1 )
  {
    squareViewList = this->fields.squareViewList;
    if ( squareViewList )
    {
      klass = squareViewList->klass;
      if ( *(_WORD *)&squareViewList->klass->_2.bitflags1 )
      {
        v55 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_ClassBoardSquare__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo )
        {
          ++v55;
          p_offset += 4;
          if ( v55 >= *(unsigned __int16 *)&squareViewList->klass->_2.bitflags1 )
            goto LABEL_20;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_20:
        p_method = sub_AAFEF8(
                     this->fields.squareViewList,
                     System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo,
                     0LL);
      }
      v58 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *, _QWORD))p_method)(
              squareViewList,
              *(_QWORD *)(p_method + 8));
      if ( !v58 )
        sub_B170D4();
      v59 = &AcquireFlag_TypeInfo;
      while ( 1 )
      {
        v60 = *(_QWORD *)v58;
        if ( *(_WORD *)(*(_QWORD *)v58 + 298LL) )
        {
          v61 = 0LL;
          v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v62 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v61;
            v62 += 4;
            if ( v61 >= *(unsigned __int16 *)(*(_QWORD *)v58 + 298LL) )
              goto LABEL_28;
          }
          v63 = v60 + 16LL * *v62 + 312;
        }
        else
        {
LABEL_28:
          v63 = sub_AAFEF8(v58, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v58, *(_QWORD *)(v63 + 8)) & 1) == 0 )
          break;
        v68 = sub_B170CC(ClassBoardEffectController___c__DisplayClass16_1_TypeInfo, v64, v65, v66, v67);
        ClassBoardEffectController___c__DisplayClass16_1___ctor(
          (ClassBoardEffectController___c__DisplayClass16_1_o *)v68,
          0LL);
        v69 = *(_QWORD *)v58;
        if ( *(_WORD *)(*(_QWORD *)v58 + 298LL) )
        {
          v70 = 0LL;
          v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_ClassBoardSquare__c **)v71 - 1) != System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo )
          {
            ++v70;
            v71 += 4;
            if ( v70 >= *(unsigned __int16 *)(*(_QWORD *)v58 + 298LL) )
              goto LABEL_35;
          }
          v72 = v69 + 16LL * *v71 + 312;
        }
        else
        {
LABEL_35:
          v72 = sub_AAFEF8(v58, System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo, 0LL);
        }
        v73 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v72)(v58, *(_QWORD *)(v72 + 8));
        if ( !v68 )
          sub_B170D4();
        *(_QWORD *)(v68 + 16) = v73;
        v80 = v68 + 16;
        sub_B16F98((BattleServantConfConponent_o *)(v68 + 16), v73, v74, v75, v76, v77, v78, v79);
        v81 = v59;
        v82 = (System_Collections_Generic_List_T__o *)this->fields.players;
        v87 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_ClassBoardEffectPlayer__bool__TypeInfo,
                                                                                   v83,
                                                                                   v84,
                                                                                   v85,
                                                                                   v86);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v87,
          (Il2CppObject *)v68,
          Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__1__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
        v88 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                v82,
                (System_Func_T__bool__o *)v87,
                (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
        v59 = v81;
        if ( !v88 )
        {
          v93 = (System_Collections_Generic_IEnumerable_TSource__o *)v116;
          v94 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_IClassBoardSquareModel__bool__TypeInfo,
                                                                                     v89,
                                                                                     v90,
                                                                                     v91,
                                                                                     v92);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v94,
            (Il2CppObject *)v68,
            Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__2__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_IClassBoardSquareModel__bool___ctor__);
          v95 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                  v93,
                  (System_Func_TSource__bool__o *)v94,
                  (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
          v96 = v95;
          v59 = v81;
          if ( v95 )
          {
            v97 = v95->klass;
            if ( *(_WORD *)&v95->klass->_2.bitflags1 )
            {
              v98 = 0LL;
              v99 = (IClassBoardSquareModel_c **)&v97->_1.interfaceOffsets->offset;
              while ( *(v99 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                ++v98;
                v99 += 2;
                if ( v98 >= *(unsigned __int16 *)&v95->klass->_2.bitflags1 )
                  goto LABEL_44;
              }
              v100 = (__int64)(&v97[1]._1.methods + 2 * *(_DWORD *)v99);
            }
            else
            {
LABEL_44:
              v100 = sub_AAFEF8(v95, IClassBoardSquareModel_TypeInfo, 13LL);
            }
            v101 = (*(__int64 (__fastcall **)(WarBoardData_SquareRangeSearch_o *, _QWORD, _QWORD))v100)(
                     v96,
                     0LL,
                     *(_QWORD *)(v100 + 8));
            v102 = *v81;
            v114 = v101;
            v103 = (System_Enum_o *)j_il2cpp_value_box_0(v102, &v114);
            v104 = *v81;
            v113 = 1;
            v105 = (System_Enum_o *)j_il2cpp_value_box_0(v104, &v113);
            if ( !v103 )
              sub_B170D4();
            if ( !System_Enum__HasFlag(v103, v105, 0LL) )
            {
              if ( !*(_QWORD *)v80 )
                sub_B170D4();
              if ( !*(_QWORD *)v36 )
                sub_B170D4();
              v106 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v80 + 152LL);
              if ( !v106 )
                sub_B170D4();
              v107 = sub_B170BC(*(_QWORD *)(*(_QWORD *)v36 + 168LL), IClassBoardLockModel_TypeInfo) != 0;
              ClassBoardEffectPlayer__SetData_bool_(
                v106,
                v107,
                (const MethodInfo_18BC060 *)Method_ClassBoardEffectPlayer_SetData_bool___);
              if ( !*(_QWORD *)v80 )
                sub_B170D4();
              v108 = this->fields.players;
              if ( !v108 )
                sub_B170D4();
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v108,
                *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v80 + 152LL),
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
            }
          }
        }
      }
      v115 = 0x10000010ELL;
      v109 = *(_QWORD *)v58;
      if ( *(_WORD *)(*(_QWORD *)v58 + 298LL) )
      {
        v110 = 0LL;
        v111 = (int *)(*(_QWORD *)(v109 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v111 - 1) != System_IDisposable_TypeInfo )
        {
          ++v110;
          v111 += 4;
          if ( v110 >= *(unsigned __int16 *)(*(_QWORD *)v58 + 298LL) )
            goto LABEL_59;
        }
        v112 = v109 + 16LL * *v111 + 312;
      }
      else
      {
LABEL_59:
        v112 = sub_AAFEF8(v58, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v112)(v58, *(_QWORD *)(v112 + 8));
      if ( (_DWORD)v115 == 270 )
        v115 = 270LL;
      return;
    }
LABEL_66:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectController__RegisterConnectingLineBlankPlayer(
        ClassBoardEffectController_o *this,
        ClassBoardSquare_o *releaseSquare,
        bool isLock,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v27; // x23
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
  __int64 v38; // x3
  __int64 v39; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v40; // x24
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *lineViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__c *klass; // x8
  unsigned __int64 v43; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v46; // x19
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  __int64 v55; // x25
  __int64 v56; // x8
  unsigned __int64 v57; // x10
  int *v58; // x11
  __int64 v59; // x0
  System_Int32_array **v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x24
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  __int64 v72; // x23
  System_Collections_Generic_List_T__o *v73; // x26
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v78; // x27
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array ***v85; // x25
  __int64 *v86; // x26
  __int64 v87; // x8
  unsigned __int64 v88; // x10
  IClassBoardLineModel_c **v89; // x11
  __int64 v90; // x0
  __int64 v91; // x0
  __int64 v92; // x26
  __int64 v93; // x8
  unsigned __int64 v94; // x10
  int *v95; // x11
  __int64 v96; // x0
  int v97; // w0
  __int64 *v98; // x27
  __int64 v99; // x8
  int v100; // w26
  unsigned __int64 v101; // x10
  int *v102; // x11
  __int64 v103; // x0
  int v104; // w0
  __int64 v105; // x8
  __int64 *v106; // x26
  __int64 v107; // x8
  unsigned __int64 v108; // x10
  int *v109; // x11
  __int64 v110; // x0
  __int64 *v111; // x26
  __int64 v112; // x8
  unsigned __int64 v113; // x10
  int *v114; // x11
  __int64 v115; // x0
  __int64 v116; // x0
  __int64 v117; // x26
  __int64 v118; // x8
  unsigned __int64 v119; // x10
  int *v120; // x11
  __int64 v121; // x0
  int v122; // w0
  __int64 *v123; // x27
  __int64 v124; // x8
  int v125; // w26
  unsigned __int64 v126; // x10
  int *v127; // x11
  __int64 v128; // x0
  __int64 v129; // x8
  unsigned __int64 v130; // x10
  IClassBoardLineModel_c **v131; // x11
  System_Int32_array **v132; // x0
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  ClassBoardEffectPlayer_o *v139; // x0
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v140; // x0
  System_Int32_array **v141; // x24
  System_Int32_array *v142; // x8
  unsigned __int64 v143; // x10
  IClassBoardSquareModel_c **v144; // x11
  __int64 v145; // x0
  __int64 v146; // x1
  __int64 v147; // x2
  __int64 v148; // x3
  __int64 v149; // x4
  System_Collections_Generic_IEnumerable_TSource__o *squareViewList; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v151; // x25
  WarBoardData_SquareRangeSearch_o *v152; // x23
  const MethodInfo *v153; // x3
  ClassBoardEffectPlayer_o *monitor; // x0
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v155; // x0
  __int64 v156; // x8
  unsigned __int64 v157; // x10
  int *v158; // x11
  __int64 v159; // x0

  if ( (byte_40FB939 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_ClassBoardEffectPlayer___, releaseSquare);
    sub_B16FFC(&Method_ClassBoardEffectPlayer_SetData_bool___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___, v8);
    sub_B16FFC(&Method_System_Func_ClassBoardEffectPlayer__bool___ctor__, v9);
    sub_B16FFC(&Method_System_Func_ClassBoardSquare__bool___ctor__, v10);
    sub_B16FFC(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo, v11);
    sub_B16FFC(&System_Func_ClassBoardSquare__bool__TypeInfo, v12);
    sub_B16FFC(&IClassBoardLineModel_TypeInfo, v13);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v14);
    sub_B16FFC(&System_IDisposable_TypeInfo, v15);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo, v16);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo, v17);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v19);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v20);
    sub_B16FFC(&Method_ClassBoardEffectController___c__DisplayClass15_0__RegisterConnectingLineBlankPlayer_b__0__, v21);
    sub_B16FFC(&ClassBoardEffectController___c__DisplayClass15_0_TypeInfo, v22);
    sub_B16FFC(&Method_ClassBoardEffectController___c__DisplayClass15_1__RegisterConnectingLineBlankPlayer_b__1__, v23);
    sub_B16FFC(&ClassBoardEffectController___c__DisplayClass15_1_TypeInfo, v24);
    sub_B16FFC(&Method_ClassBoardEffectController___c__DisplayClass15_2__RegisterConnectingLineBlankPlayer_b__2__, v25);
    sub_B16FFC(&ClassBoardEffectController___c__DisplayClass15_2_TypeInfo, v26);
    byte_40FB939 = 1;
  }
  v27 = sub_B170CC(ClassBoardEffectController___c__DisplayClass15_0_TypeInfo, releaseSquare, isLock, method, v4);
  ClassBoardEffectController___c__DisplayClass15_0___ctor(
    (ClassBoardEffectController___c__DisplayClass15_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_144;
  *(_QWORD *)(v27 + 16) = releaseSquare;
  v34 = v27 + 16;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v27 + 16),
    (System_Int32_array **)releaseSquare,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v40 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_ClassBoardEffectPlayer__bool__TypeInfo,
                                                                             v36,
                                                                             v37,
                                                                             v38,
                                                                             v39);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v40,
    (Il2CppObject *)v27,
    Method_ClassBoardEffectController___c__DisplayClass15_0__RegisterConnectingLineBlankPlayer_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
  if ( BasicHelper__Any_WarBoardData_SquareRangeSearch_(
         players,
         (System_Func_T__bool__o *)v40,
         (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
  {
    return;
  }
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList )
LABEL_144:
    sub_B170D4();
  klass = lineViewList->klass;
  if ( *(_WORD *)&lineViewList->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ClassBoardLine__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo )
    {
      ++v43;
      p_offset += 4;
      if ( v43 >= *(unsigned __int16 *)&lineViewList->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AAFEF8(
                 this->fields.lineViewList,
                 System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo,
                 0LL);
  }
  v46 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *, _QWORD))p_method)(
          lineViewList,
          *(_QWORD *)(p_method + 8));
  if ( !v46 )
    sub_B170D4();
  while ( 1 )
  {
    v47 = *(_QWORD *)v46;
    if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
    {
      v48 = 0LL;
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v48;
        v49 += 4;
        if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
          goto LABEL_17;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_17:
      v50 = sub_AAFEF8(v46, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8)) & 1) == 0 )
      break;
    v55 = sub_B170CC(ClassBoardEffectController___c__DisplayClass15_1_TypeInfo, v51, v52, v53, v54);
    ClassBoardEffectController___c__DisplayClass15_1___ctor(
      (ClassBoardEffectController___c__DisplayClass15_1_o *)v55,
      0LL);
    v56 = *(_QWORD *)v46;
    if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
    {
      v57 = 0LL;
      v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardLine__c **)v58 - 1) != System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo )
      {
        ++v57;
        v58 += 4;
        if ( v57 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
          goto LABEL_24;
      }
      v59 = v56 + 16LL * *v58 + 312;
    }
    else
    {
LABEL_24:
      v59 = sub_AAFEF8(v46, System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo, 0LL);
    }
    v60 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v46, *(_QWORD *)(v59 + 8));
    if ( !v55 )
      sub_B170D4();
    *(_QWORD *)(v55 + 16) = v60;
    v67 = v55 + 16;
    sub_B16F98((BattleServantConfConponent_o *)(v55 + 16), v60, v61, v62, v63, v64, v65, v66);
    v72 = sub_B170CC(ClassBoardEffectController___c__DisplayClass15_2_TypeInfo, v68, v69, v70, v71);
    ClassBoardEffectController___c__DisplayClass15_2___ctor(
      (ClassBoardEffectController___c__DisplayClass15_2_o *)v72,
      0LL);
    v73 = (System_Collections_Generic_List_T__o *)this->fields.players;
    v78 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_ClassBoardEffectPlayer__bool__TypeInfo,
                                                                               v74,
                                                                               v75,
                                                                               v76,
                                                                               v77);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v78,
      (Il2CppObject *)v55,
      Method_ClassBoardEffectController___c__DisplayClass15_1__RegisterConnectingLineBlankPlayer_b__1__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
    if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
            v73,
            (System_Func_T__bool__o *)v78,
            (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
    {
      if ( !v72 )
        sub_B170D4();
      *(_QWORD *)(v72 + 16) = 0LL;
      v85 = (System_Int32_array ***)(v72 + 16);
      sub_B16F98((BattleServantConfConponent_o *)(v72 + 16), 0LL, v79, v80, v81, v82, v83, v84);
      if ( !*(_QWORD *)v67 )
        sub_B170D4();
      v86 = *(__int64 **)(*(_QWORD *)v67 + 160LL);
      if ( !v86 )
        sub_B170D4();
      v87 = *v86;
      if ( *(_WORD *)(*v86 + 298) )
      {
        v88 = 0LL;
        v89 = (IClassBoardLineModel_c **)(*(_QWORD *)(v87 + 176) + 8LL);
        while ( *(v89 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v88;
          v89 += 2;
          if ( v88 >= *(unsigned __int16 *)(*v86 + 298) )
            goto LABEL_35;
        }
        v90 = v87 + 16LL * (*(_DWORD *)v89 + 1) + 312;
      }
      else
      {
LABEL_35:
        v90 = sub_AAFEF8(v86, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v91 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v90)(v86, *(_QWORD *)(v90 + 8));
      v92 = v91;
      if ( !v91 )
        sub_B170D4();
      v93 = *(_QWORD *)v91;
      if ( *(_WORD *)(*(_QWORD *)v91 + 298LL) )
      {
        v94 = 0LL;
        v95 = (int *)(*(_QWORD *)(v93 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v95 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v94;
          v95 += 4;
          if ( v94 >= *(unsigned __int16 *)(*(_QWORD *)v91 + 298LL) )
            goto LABEL_42;
        }
        v96 = v93 + 16LL * *v95 + 312;
      }
      else
      {
LABEL_42:
        v96 = sub_AAFEF8(v91, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v97 = (*(__int64 (__fastcall **)(__int64, _QWORD))v96)(v92, *(_QWORD *)(v96 + 8));
      if ( !*(_QWORD *)v34 )
        sub_B170D4();
      v98 = *(__int64 **)(*(_QWORD *)v34 + 168LL);
      if ( !v98 )
        sub_B170D4();
      v99 = *v98;
      v100 = v97;
      if ( *(_WORD *)(*v98 + 298) )
      {
        v101 = 0LL;
        v102 = (int *)(*(_QWORD *)(v99 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v102 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v101;
          v102 += 4;
          if ( v101 >= *(unsigned __int16 *)(*v98 + 298) )
            goto LABEL_50;
        }
        v103 = v99 + 16LL * *v102 + 312;
      }
      else
      {
LABEL_50:
        v103 = sub_AAFEF8(v98, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v104 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v103)(v98, *(_QWORD *)(v103 + 8));
      v105 = *(_QWORD *)v67;
      if ( v100 == v104 )
      {
        if ( !v105 )
          sub_B170D4();
        v106 = *(__int64 **)(v105 + 160);
        if ( !v106 )
          sub_B170D4();
        v107 = *v106;
        if ( *(_WORD *)(*v106 + 298) )
        {
          v108 = 0LL;
          v109 = (int *)(*(_QWORD *)(v107 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v109 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v108;
            v109 += 4;
            if ( v108 >= *(unsigned __int16 *)(*v106 + 298) )
              goto LABEL_59;
          }
          v110 = v107 + 16LL * *v109 + 312;
        }
        else
        {
LABEL_59:
          v110 = sub_AAFEF8(v106, IClassBoardLineModel_TypeInfo, 0LL);
        }
LABEL_93:
        v132 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v110)(v106, *(_QWORD *)(v110 + 8));
        *v85 = v132;
        sub_B16F98((BattleServantConfConponent_o *)(v72 + 16), v132, v133, v134, v135, v136, v137, v138);
        goto LABEL_94;
      }
      if ( !v105 )
        sub_B170D4();
      v111 = *(__int64 **)(v105 + 160);
      if ( !v111 )
        sub_B170D4();
      v112 = *v111;
      if ( *(_WORD *)(*v111 + 298) )
      {
        v113 = 0LL;
        v114 = (int *)(*(_QWORD *)(v112 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v114 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v113;
          v114 += 4;
          if ( v113 >= *(unsigned __int16 *)(*v111 + 298) )
            goto LABEL_66;
        }
        v115 = v112 + 16LL * *v114 + 312;
      }
      else
      {
LABEL_66:
        v115 = sub_AAFEF8(v111, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v116 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v115)(v111, *(_QWORD *)(v115 + 8));
      v117 = v116;
      if ( !v116 )
        sub_B170D4();
      v118 = *(_QWORD *)v116;
      if ( *(_WORD *)(*(_QWORD *)v116 + 298LL) )
      {
        v119 = 0LL;
        v120 = (int *)(*(_QWORD *)(v118 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v120 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v119;
          v120 += 4;
          if ( v119 >= *(unsigned __int16 *)(*(_QWORD *)v116 + 298LL) )
            goto LABEL_74;
        }
        v121 = v118 + 16LL * *v120 + 312;
      }
      else
      {
LABEL_74:
        v121 = sub_AAFEF8(v116, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v122 = (*(__int64 (__fastcall **)(__int64, _QWORD))v121)(v117, *(_QWORD *)(v121 + 8));
      if ( !*(_QWORD *)v34 )
        sub_B170D4();
      v123 = *(__int64 **)(*(_QWORD *)v34 + 168LL);
      if ( !v123 )
        sub_B170D4();
      v124 = *v123;
      v125 = v122;
      if ( *(_WORD *)(*v123 + 298) )
      {
        v126 = 0LL;
        v127 = (int *)(*(_QWORD *)(v124 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v127 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v126;
          v127 += 4;
          if ( v126 >= *(unsigned __int16 *)(*v123 + 298) )
            goto LABEL_82;
        }
        v128 = v124 + 16LL * *v127 + 312;
      }
      else
      {
LABEL_82:
        v128 = sub_AAFEF8(v123, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      if ( v125 == (*(unsigned int (__fastcall **)(__int64 *, _QWORD))v128)(v123, *(_QWORD *)(v128 + 8)) )
      {
        if ( !*(_QWORD *)v67 )
          sub_B170D4();
        v106 = *(__int64 **)(*(_QWORD *)v67 + 160LL);
        if ( !v106 )
          sub_B170D4();
        v129 = *v106;
        if ( *(_WORD *)(*v106 + 298) )
        {
          v130 = 0LL;
          v131 = (IClassBoardLineModel_c **)(*(_QWORD *)(v129 + 176) + 8LL);
          while ( *(v131 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v130;
            v131 += 2;
            if ( v130 >= *(unsigned __int16 *)(*v106 + 298) )
              goto LABEL_91;
          }
          v110 = v129 + 16LL * (*(_DWORD *)v131 + 1) + 312;
        }
        else
        {
LABEL_91:
          v110 = sub_AAFEF8(v106, IClassBoardLineModel_TypeInfo, 1LL);
        }
        goto LABEL_93;
      }
LABEL_94:
      if ( *v85 )
      {
        if ( !*(_QWORD *)v67 )
          sub_B170D4();
        v139 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v67 + 144LL);
        if ( !v139 )
          sub_B170D4();
        ClassBoardEffectPlayer__SetData_bool_(
          v139,
          isLock,
          (const MethodInfo_18BC060 *)Method_ClassBoardEffectPlayer_SetData_bool___);
        if ( !*(_QWORD *)v67 )
          sub_B170D4();
        v140 = this->fields.players;
        if ( !v140 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v140,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v67 + 144LL),
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
        v141 = *v85;
        if ( !*v85 )
          sub_B170D4();
        v142 = *v141;
        if ( HIWORD((*v141)->m_Items[67]) )
        {
          v143 = 0LL;
          v144 = (IClassBoardSquareModel_c **)(*(_QWORD *)&v142->m_Items[37] + 8LL);
          while ( *(v144 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            ++v143;
            v144 += 2;
            if ( v143 >= HIWORD((*v141)->m_Items[67]) )
              goto LABEL_104;
          }
          v145 = (__int64)&v142->m_Items[4 * *(_DWORD *)v144 + 91];
        }
        else
        {
LABEL_104:
          v145 = sub_AAFEF8(*v85, IClassBoardSquareModel_TypeInfo, 5LL);
        }
        if ( ((*(__int64 (__fastcall **)(System_Int32_array **, _QWORD))v145)(v141, *(_QWORD *)(v145 + 8)) & 1) != 0 )
        {
          squareViewList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.squareViewList;
          v151 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_ClassBoardSquare__bool__TypeInfo,
                                                                                      v146,
                                                                                      v147,
                                                                                      v148,
                                                                                      v149);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v151,
            (Il2CppObject *)v72,
            Method_ClassBoardEffectController___c__DisplayClass15_2__RegisterConnectingLineBlankPlayer_b__2__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_ClassBoardSquare__bool___ctor__);
          v152 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                   squareViewList,
                   (System_Func_TSource__bool__o *)v151,
                   (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v152, 0LL, 0LL) )
          {
            ClassBoardEffectController__RegisterConnectingLineBlankPlayer(
              this,
              (ClassBoardSquare_o *)v152,
              isLock,
              v153);
            if ( !v152 )
              sub_B170D4();
            monitor = (ClassBoardEffectPlayer_o *)v152[6].monitor;
            if ( !monitor )
              sub_B170D4();
            ClassBoardEffectPlayer__SetData_bool_(
              monitor,
              isLock,
              (const MethodInfo_18BC060 *)Method_ClassBoardEffectPlayer_SetData_bool___);
            v155 = this->fields.players;
            if ( !v155 )
              sub_B170D4();
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v155,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v152[6].monitor,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
          }
        }
      }
    }
  }
  v156 = *(_QWORD *)v46;
  if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
  {
    v157 = 0LL;
    v158 = (int *)(*(_QWORD *)(v156 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v158 - 1) != System_IDisposable_TypeInfo )
    {
      ++v157;
      v158 += 4;
      if ( v157 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
        goto LABEL_119;
    }
    v159 = v156 + 16LL * *v158 + 312;
  }
  else
  {
LABEL_119:
    v159 = sub_AAFEF8(v46, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v159)(v46, *(_QWORD *)(v159 + 8));
}


void __fastcall ClassBoardEffectController__ResetPlayers(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x20
  ClassBoardEffectController___c_c *v12; // x0
  struct ClassBoardEffectController___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__12_0; // x21
  Il2CppObject *v15; // x22
  struct ClassBoardEffectController___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v23; // x0
  struct System_Action_o **p_playEndCallback; // x19
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_40FB936 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_ClassBoardEffectPlayer___ctor__, method);
    sub_B16FFC(&System_Action_ClassBoardEffectPlayer__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Clear__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__, v8);
    sub_B16FFC(&Method_ClassBoardEffectController___c__ResetPlayers_b__12_0__, v9);
    sub_B16FFC(&ClassBoardEffectController___c_TypeInfo, v10);
    byte_40FB936 = 1;
  }
  players = this->fields.players;
  v12 = ClassBoardEffectController___c_TypeInfo;
  if ( (BYTE3(ClassBoardEffectController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectController___c_TypeInfo);
    v12 = ClassBoardEffectController___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__12_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = ClassBoardEffectController___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_ClassBoardEffectPlayer__TypeInfo,
                                                                                      method,
                                                                                      v2,
                                                                                      v3,
                                                                                      v4);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__12_0,
      v15,
      Method_ClassBoardEffectController___c__ResetPlayers_b__12_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_ClassBoardEffectPlayer___ctor__);
    v16 = ClassBoardEffectController___c_TypeInfo->static_fields;
    v16->__9__12_0 = (struct System_Action_ClassBoardEffectPlayer__o *)_9__12_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !players
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)players,
          (System_Action_T__o *)_9__12_0,
          (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__),
        (v23 = this->fields.players) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v23,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Clear__);
  this->fields.playEndCallback = 0LL;
  p_playEndCallback = &this->fields.playEndCallback;
  *((_DWORD *)p_playEndCallback - 4) = 0;
  sub_B16F98((BattleServantConfConponent_o *)p_playEndCallback, 0LL, v25, v26, v27, v28, v29, v30);
}


void __fastcall ClassBoardEffectController___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F70DC & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardEffectController___c_TypeInfo, v1);
    byte_40F70DC = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ClassBoardEffectController___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ClassBoardEffectController___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
  UnityEngine_Object_o *releaseSquare; // x0
  System_String_o *Name_k__BackingField; // x19
  System_String_o *name; // x1

  if ( !x || (releaseSquare = (UnityEngine_Object_o *)this->fields.releaseSquare) == 0LL )
    sub_B170D4();
  Name_k__BackingField = x->fields._Name_k__BackingField;
  name = UnityEngine_Object__get_name(releaseSquare, 0LL);
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
  UnityEngine_Object_o *classBoardLine; // x0
  System_String_o *Name_k__BackingField; // x19
  System_String_o *name; // x1

  if ( !x || (classBoardLine = (UnityEngine_Object_o *)this->fields.classBoardLine) == 0LL )
    sub_B170D4();
  Name_k__BackingField = x->fields._Name_k__BackingField;
  name = UnityEngine_Object__get_name(classBoardLine, 0LL);
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
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v10; // w0
  struct IClassBoardSquareModel_o *connectSquareModel; // x20
  IClassBoardSquareModel_c *v12; // x8
  int v13; // w19
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0

  if ( (byte_40F70DD & 1) == 0 )
  {
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, x);
    byte_40F70DD = 1;
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
    p_method = sub_AAFEF8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v10 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
          SquareModel_k__BackingField,
          *(_QWORD *)(p_method + 8));
  connectSquareModel = this->fields.connectSquareModel;
  if ( !connectSquareModel )
LABEL_19:
    sub_B170D4();
  v12 = connectSquareModel->klass;
  v13 = v10;
  if ( *(_WORD *)&connectSquareModel->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    v15 = &v12->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v15 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v14;
      v15 += 4;
      if ( v14 >= *(unsigned __int16 *)&connectSquareModel->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v16 = (__int64)&v12->vtable[*v15].method;
  }
  else
  {
LABEL_16:
    v16 = sub_AAFEF8(connectSquareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return v13 == (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v16)(
                  connectSquareModel,
                  *(_QWORD *)(v16 + 8));
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
  UnityEngine_Object_o *releaseSquare; // x0
  System_String_o *Name_k__BackingField; // x19
  System_String_o *name; // x1

  if ( !x || (releaseSquare = (UnityEngine_Object_o *)this->fields.releaseSquare) == 0LL )
    sub_B170D4();
  Name_k__BackingField = x->fields._Name_k__BackingField;
  name = UnityEngine_Object__get_name(releaseSquare, 0LL);
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
  UnityEngine_Object_o *square; // x0
  System_String_o *Name_k__BackingField; // x19
  System_String_o *name; // x1

  if ( !x || (square = (UnityEngine_Object_o *)this->fields.square) == 0LL )
    sub_B170D4();
  Name_k__BackingField = x->fields._Name_k__BackingField;
  name = UnityEngine_Object__get_name(square, 0LL);
  return System_String__op_Equality(Name_k__BackingField, name, 0LL);
}


bool __fastcall ClassBoardEffectController___c__DisplayClass16_1___RegisterConnectedSquareEnablePlayer_b__2(
        ClassBoardEffectController___c__DisplayClass16_1_o *this,
        IClassBoardSquareModel_o *model,
        const MethodInfo *method)
{
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v9; // w0
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *v12; // x8
  int v13; // w19
  unsigned __int64 v14; // x10
  int *v15; // x11
  __int64 v16; // x0

  if ( (byte_40F70DE & 1) == 0 )
  {
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, model);
    byte_40F70DE = 1;
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
    p_method = sub_AAFEF8(model, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v9 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(model, *(_QWORD *)(p_method + 8));
  square = this->fields.square;
  if ( !square || (SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField) == 0LL )
LABEL_19:
    sub_B170D4();
  v12 = SquareModel_k__BackingField->klass;
  v13 = v9;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    v15 = &v12->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v15 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v14;
      v15 += 4;
      if ( v14 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v16 = (__int64)&v12->vtable[*v15].method;
  }
  else
  {
LABEL_16:
    v16 = sub_AAFEF8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return v13 == (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v16)(
                  SquareModel_k__BackingField,
                  *(_QWORD *)(v16 + 8));
}