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
  __int64 v46; // x1
  __int64 v47; // x3
  struct System_Action_o *callback; // x20
  System_Action_c *klass; // x8
  unsigned __int64 v50; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 v52; // x0

  if ( (byte_41894B8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_First_ClassBoardSquare___, squares);
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo, v13);
    byte_41894B8 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__);
  this->fields.players = (struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *)v14;
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)squares,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.lineViewList = lines;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.lineViewList,
    (System_Int32_array **)lines,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.mapCamera = camera;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mapCamera,
    (System_Int32_array **)camera,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.bgModel = bg;
  sub_B2C2F8(
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
                                                    (const MethodInfo_1A8F68C *)Method_System_Linq_Enumerable_First_ClassBoardSquare___);
  if ( !StonePurchaseNotificationMenu_DialogOpenQueue
    || (callback = StonePurchaseNotificationMenu_DialogOpenQueue[3].fields.callback) == 0LL )
  {
    sub_B2C434(StonePurchaseNotificationMenu_DialogOpenQueue, v46);
  }
  klass = callback->klass;
  if ( *(_WORD *)&callback->klass->_2.bitflags1 )
  {
    v50 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v50;
      p_offset += 2;
      if ( v50 >= *(unsigned __int16 *)&callback->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v52 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_9:
    v52 = sub_AC5258(
            StonePurchaseNotificationMenu_DialogOpenQueue[3].fields.callback,
            IClassBoardSquareModel_TypeInfo,
            1LL,
            v47);
  }
  this->fields.baseId = (*(__int64 (__fastcall **)(struct System_Action_o *, _QWORD))v52)(
                          callback,
                          *(_QWORD *)(v52 + 8));
}


void __fastcall ClassBoardEffectController__CheckPlayEnd(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  ClassBoardEffectController_o *v2; // x19
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x9
  int v4; // w8

  v2 = this;
  if ( (byte_41894BD & 1) == 0 )
  {
    this = (ClassBoardEffectController_o *)sub_B2C35C(
                                             &Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__,
                                             method);
    byte_41894BD = 1;
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
    sub_B2C434(this, method);
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
  __int64 v20; // x1
  UnityEngine_Transform_o *v21; // x23
  float v22; // s0
  float v23; // s1
  float v24; // s2
  float v25; // s11
  float v26; // s12
  float v27; // s13
  float v28; // s14
  float v29; // s15
  float v30; // s0
  float v31; // s3
  System_Nullable_Vector3__o v32; // [xsp+0h] [xbp-80h] BYREF
  float v33; // [xsp+58h] [xbp-28h]
  float v34; // [xsp+5Ch] [xbp-24h]
  System_Nullable_float__o v35; // 0:x3.8
  System_Nullable_Vector3__o v36; // 0:x0.16
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s3.4,4:s4.4,8:s5.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_41894C1 & 1) == 0 )
  {
    sub_B2C35C(&MapCameraViewAdjusterUtil_TypeInfo, *(_QWORD *)&maxDistance);
    sub_B2C35C(&Method_System_Nullable_Vector3___ctor__, v17);
    byte_41894C1 = 1;
  }
  mapCamera = this->fields.mapCamera;
  *(_QWORD *)&v36.fields.value.fields.x = &v32;
  v37.fields.x = x;
  v37.fields.y = y;
  *(_QWORD *)&v36.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  v37.fields.z = z;
  *(_QWORD *)&v32.fields.value.fields.x = 0LL;
  *(_QWORD *)&v32.fields.value.fields.z = 0LL;
  System_Nullable_Vector3____ctor(v36, v37, *(const MethodInfo_2155668 **)&ease);
  if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  }
  v35 = 0LL;
  SafeCameraDestination = (UnityEngine_Transform_o *)MapCameraViewAdjusterUtil__GetSafeCameraDestination(
                                                       mapCamera,
                                                       v32,
                                                       v35,
                                                       0LL);
  if ( !this->fields.mapCamera )
    goto LABEL_15;
  v21 = SafeCameraDestination;
  SafeCameraDestination = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.mapCamera, 0LL);
  if ( !SafeCameraDestination )
    goto LABEL_15;
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_localPosition(SafeCameraDestination, 0LL);
  if ( !v21 )
    goto LABEL_15;
  v33 = secMin;
  v34 = secMax;
  SafeCameraDestination = (UnityEngine_Transform_o *)this->fields.mapCamera;
  if ( !SafeCameraDestination )
    goto LABEL_15;
  v25 = *(float *)&v21->fields.m_CachedPtr;
  v26 = *((float *)&v21->fields + 1);
  v27 = v22;
  v28 = v23;
  v29 = v24;
  SafeCameraDestination = UnityEngine_Component__get_transform((UnityEngine_Component_o *)SafeCameraDestination, 0LL);
  if ( !SafeCameraDestination )
    goto LABEL_15;
  localPosition = UnityEngine_Transform__get_localPosition(SafeCameraDestination, 0LL);
  v40.fields.z = localPosition.fields.z;
  localPosition.fields.x = v27;
  localPosition.fields.y = v28;
  localPosition.fields.z = v29;
  v40.fields.x = v25;
  v40.fields.y = v26;
  v30 = UnityEngine_Vector3__Distance(localPosition, v40, 0LL) / (float)maxDistance;
  v31 = 0.0;
  if ( v30 != 0.0 )
    v31 = UnityEngine_Mathf__Clamp(v30, v33, v34, 0LL);
  SafeCameraDestination = (UnityEngine_Transform_o *)this->fields.mapCamera;
  if ( !SafeCameraDestination )
LABEL_15:
    sub_B2C434(SafeCameraDestination, v20);
  v39.fields.x = x;
  v39.fields.y = y;
  v39.fields.z = z;
  MapCamera__StartAutoMove((MapCamera_o *)SafeCameraDestination, v39, v31, ease, callback, 0LL);
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
  __int64 v18; // x1
  struct ClassBoardBackground_o *bgModel; // x8
  struct ClassBoardBackground_o *v20; // x8
  struct ClassBoardEffectPlayer_o *v21; // x21
  System_Action_o *v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct ClassBoardBackground_o *v29; // x8

  if ( (byte_41894BA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_ClassBoardEffectController_PlayNext__, v5);
    sub_B2C35C(&Method_ClassBoardEffectPlayer_SetData_int___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__, v9);
    byte_41894BA = 1;
  }
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)callback);
  this->fields.playEndCallback = callback;
  p_playEndCallback = &this->fields.playEndCallback;
  sub_B2C2F8(
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
    (const MethodInfo_172C828 *)Method_ClassBoardEffectPlayer_SetData_int___);
  v20 = this->fields.bgModel;
  if ( !v20 )
    goto LABEL_16;
  v21 = v20->fields.startMainEffectPlayer;
  v22 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_ClassBoardEffectController_PlayNext__, 0LL);
  if ( !v21 )
    goto LABEL_16;
  v21->fields.endCallback = v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v21->fields.endCallback,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = this->fields.bgModel;
  if ( !v29 )
    goto LABEL_16;
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !startMainEffectPlayer )
    goto LABEL_16;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)startMainEffectPlayer,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v29->fields.startMainEffectPlayer,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !startMainEffectPlayer )
    goto LABEL_16;
  if ( SLODWORD(startMainEffectPlayer->fields.playCallback) < 1 )
  {
    startMainEffectPlayer = (ClassBoardEffectPlayer_o *)*p_playEndCallback;
    if ( *p_playEndCallback )
      goto LABEL_15;
LABEL_16:
    sub_B2C434(startMainEffectPlayer, v18);
  }
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)startMainEffectPlayer,
                                                        (const MethodInfo_1A8F68C *)Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
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
  if ( (byte_41894BE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__, method);
    this = (ClassBoardEffectController_o *)sub_B2C35C(
                                             &Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Item__,
                                             v3);
    byte_41894BE = 1;
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
    sub_B2C434(this, method);
  }
  if ( size <= (unsigned int)v5 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  __int64 v21; // x1
  bool v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  Il2CppObject *current; // x24
  System_Action_o *v26; // x20
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Action_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_41894B9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, releaseSquare);
    sub_B2C35C(&Method_ClassBoardEffectController_CheckPlayEnd__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__get_Current__, v10);
    sub_B2C35C(&IClassBoardLockModel_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__, v13);
    byte_41894B9 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)releaseSquare);
  this->fields.playEndCallback = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.playEndCallback,
    (System_Int32_array **)callback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !releaseSquare
    || (v22 = sub_B2C41C(releaseSquare->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo) != 0,
        ClassBoardEffectController__RegisterConnectingLineBlankPlayer(this, releaseSquare, v22, v23),
        ClassBoardEffectController__RegisterConnectedSquareEnablePlayer(this, releaseSquare, v24),
        (players = this->fields.players) == 0LL)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)players,
          (EventMissionProgressRequest_Argument_ProgressData_o *)releaseSquare->fields.releaseEffectPlayer,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__),
        (players = this->fields.players) == 0LL) )
  {
    sub_B2C434(players, v21);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)players,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v36,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__) )
  {
    current = v36.fields.current;
    v26 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_ClassBoardEffectController_CheckPlayEnd__, 0LL);
    if ( !current )
      sub_B2C434(v27, v28);
    current[2].klass = (Il2CppClass *)v26;
    sub_B2C2F8((BattleServantConfConponent_o *)&current[2], (System_Int32_array **)v26, v29, v30, v31, v32, v33, v34);
    monitor = (System_Action_o *)current[1].monitor;
    if ( monitor )
      System_Action__Invoke(monitor, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v36,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__);
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
  if ( (byte_41894BB & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, callback);
    byte_41894BB = 1;
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
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x21
  System_Collections_Generic_List_T__o *players; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v38; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x19
  __int64 v40; // x3
  __int64 *v41; // x19
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  IClassBoardSquareModel_c **v44; // x11
  __int64 v45; // x0
  __int64 v46; // x3
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squareViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__c *klass; // x8
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v52; // x1
  __int64 v53; // x3
  __int64 v54; // x19
  AcquireFlag_c **v55; // x24
  __int64 v56; // x8
  unsigned __int64 v57; // x10
  int *v58; // x11
  __int64 v59; // x0
  __int64 v60; // x3
  __int64 v61; // x23
  __int64 v62; // x3
  __int64 v63; // x8
  unsigned __int64 v64; // x10
  int *v65; // x11
  __int64 v66; // x0
  System_Int32_array **v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 v74; // x22
  AcquireFlag_c **v75; // x28
  System_Collections_Generic_List_T__o *v76; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v77; // x25
  bool v78; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v80; // x25
  WarBoardData_SquareRangeSearch_o *v81; // x0
  WarBoardData_SquareRangeSearch_o *v82; // x23
  WarBoardData_SquareRangeSearch_c *v83; // x8
  unsigned __int64 v84; // x10
  IClassBoardSquareModel_c **v85; // x11
  __int64 v86; // x0
  int v87; // w0
  AcquireFlag_c *v88; // x8
  System_Enum_o *v89; // x23
  AcquireFlag_c *v90; // x0
  System_Enum_o *v91; // x0
  _BOOL8 HasFlag; // x0
  __int64 v93; // x1
  ClassBoardEffectPlayer_o *v94; // x23
  bool v95; // w1
  __int64 v96; // x0
  __int64 v97; // x1
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v98; // x0
  __int64 v99; // x8
  unsigned __int64 v100; // x10
  int *v101; // x11
  __int64 v102; // x0
  int v103; // [xsp+8h] [xbp-68h] BYREF
  int v104; // [xsp+Ch] [xbp-64h] BYREF
  __int64 v105; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v106; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_41894C0 & 1) == 0 )
  {
    sub_B2C35C(&AcquireFlag_TypeInfo, releaseSquare);
    sub_B2C35C(&Method_BasicHelper_Any_ClassBoardEffectPlayer___, v5);
    sub_B2C35C(&Method_ClassBoardEffectPlayer_SetData_bool___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___, v7);
    sub_B2C35C(&Method_System_Func_IClassBoardSquareModel__bool___ctor__, v8);
    sub_B2C35C(&Method_System_Func_ClassBoardEffectPlayer__bool___ctor__, v9);
    sub_B2C35C(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo, v10);
    sub_B2C35C(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v11);
    sub_B2C35C(&IClassBoardLockModel_TypeInfo, v12);
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v13);
    sub_B2C35C(&System_IDisposable_TypeInfo, v14);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo, v15);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo, v16);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__, v20);
    sub_B2C35C(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v21);
    sub_B2C35C(
      &Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectedSquareEnablePlayer_b__0__,
      v22);
    sub_B2C35C(&ClassBoardEffectController___c__DisplayClass16_0_TypeInfo, v23);
    sub_B2C35C(
      &Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__1__,
      v24);
    sub_B2C35C(
      &Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__2__,
      v25);
    sub_B2C35C(&ClassBoardEffectController___c__DisplayClass16_1_TypeInfo, v26);
    byte_41894C0 = 1;
  }
  v106 = 0LL;
  HIDWORD(v105) = 0;
  v27 = sub_B2C42C(ClassBoardEffectController___c__DisplayClass16_0_TypeInfo);
  ClassBoardEffectController___c__DisplayClass16_0___ctor(
    (ClassBoardEffectController___c__DisplayClass16_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_66;
  *(_QWORD *)(v27 + 16) = releaseSquare;
  v36 = v27 + 16;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v27 + 16),
    (System_Int32_array **)releaseSquare,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v38 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v38,
    (Il2CppObject *)v27,
    Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectedSquareEnablePlayer_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
  if ( BasicHelper__Any_WarBoardData_SquareRangeSearch_(
         players,
         (System_Func_T__bool__o *)v38,
         (const MethodInfo_17266AC *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
  {
    return;
  }
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  v106 = v39;
  if ( !*(_QWORD *)v36 )
    goto LABEL_66;
  v41 = *(__int64 **)(*(_QWORD *)v36 + 168LL);
  if ( !v41 )
    goto LABEL_66;
  v42 = *v41;
  if ( *(_WORD *)(*v41 + 298) )
  {
    v43 = 0LL;
    v44 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v42 + 176) + 8LL);
    while ( *(v44 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v43;
      v44 += 2;
      if ( v43 >= *(unsigned __int16 *)(*v41 + 298) )
        goto LABEL_11;
    }
    v45 = v42 + 16LL * (*(_DWORD *)v44 + 15) + 312;
  }
  else
  {
LABEL_11:
    v45 = sub_AC5258(v41, IClassBoardSquareModel_TypeInfo, 15LL, v40);
  }
  v28 = (*(__int64 (__fastcall **)(__int64 *, System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **, _QWORD))v45)(
          v41,
          &v106,
          *(_QWORD *)(v45 + 8));
  if ( v106 && v106->fields._size >= 1 )
  {
    squareViewList = this->fields.squareViewList;
    if ( squareViewList )
    {
      klass = squareViewList->klass;
      if ( *(_WORD *)&squareViewList->klass->_2.bitflags1 )
      {
        v49 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_ClassBoardSquare__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo )
        {
          ++v49;
          p_offset += 4;
          if ( v49 >= *(unsigned __int16 *)&squareViewList->klass->_2.bitflags1 )
            goto LABEL_20;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_20:
        p_method = sub_AC5258(
                     this->fields.squareViewList,
                     System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo,
                     0LL,
                     v46);
      }
      v54 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *, _QWORD))p_method)(
              squareViewList,
              *(_QWORD *)(p_method + 8));
      if ( !v54 )
        sub_B2C434(0LL, v52);
      v55 = &AcquireFlag_TypeInfo;
      while ( 1 )
      {
        v56 = *(_QWORD *)v54;
        if ( *(_WORD *)(*(_QWORD *)v54 + 298LL) )
        {
          v57 = 0LL;
          v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v58 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v57;
            v58 += 4;
            if ( v57 >= *(unsigned __int16 *)(*(_QWORD *)v54 + 298LL) )
              goto LABEL_28;
          }
          v59 = v56 + 16LL * *v58 + 312;
        }
        else
        {
LABEL_28:
          v59 = sub_AC5258(v54, System_Collections_IEnumerator_TypeInfo, 0LL, v53);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v54, *(_QWORD *)(v59 + 8)) & 1) == 0 )
          break;
        v61 = sub_B2C42C(ClassBoardEffectController___c__DisplayClass16_1_TypeInfo);
        ClassBoardEffectController___c__DisplayClass16_1___ctor(
          (ClassBoardEffectController___c__DisplayClass16_1_o *)v61,
          0LL);
        v63 = *(_QWORD *)v54;
        if ( *(_WORD *)(*(_QWORD *)v54 + 298LL) )
        {
          v64 = 0LL;
          v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_ClassBoardSquare__c **)v65 - 1) != System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo )
          {
            ++v64;
            v65 += 4;
            if ( v64 >= *(unsigned __int16 *)(*(_QWORD *)v54 + 298LL) )
              goto LABEL_35;
          }
          v66 = v63 + 16LL * *v65 + 312;
        }
        else
        {
LABEL_35:
          v66 = sub_AC5258(v54, System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo, 0LL, v62);
        }
        v67 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v66)(v54, *(_QWORD *)(v66 + 8));
        if ( !v61 )
          sub_B2C434(v67, v67);
        *(_QWORD *)(v61 + 16) = v67;
        v74 = v61 + 16;
        sub_B2C2F8((BattleServantConfConponent_o *)(v61 + 16), v67, v68, v69, v70, v71, v72, v73);
        v75 = v55;
        v76 = (System_Collections_Generic_List_T__o *)this->fields.players;
        v77 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v77,
          (Il2CppObject *)v61,
          Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__1__,
          (const MethodInfo_2711C04 *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
        v78 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                v76,
                (System_Func_T__bool__o *)v77,
                (const MethodInfo_17266AC *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
        v55 = v75;
        if ( !v78 )
        {
          v79 = (System_Collections_Generic_IEnumerable_TSource__o *)v106;
          v80 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_IClassBoardSquareModel__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v80,
            (Il2CppObject *)v61,
            Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__2__,
            (const MethodInfo_2711C04 *)Method_System_Func_IClassBoardSquareModel__bool___ctor__);
          v81 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                  v79,
                  (System_Func_TSource__bool__o *)v80,
                  (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
          v82 = v81;
          v55 = v75;
          if ( v81 )
          {
            v83 = v81->klass;
            if ( *(_WORD *)&v81->klass->_2.bitflags1 )
            {
              v84 = 0LL;
              v85 = (IClassBoardSquareModel_c **)&v83->_1.interfaceOffsets->offset;
              while ( *(v85 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                ++v84;
                v85 += 2;
                if ( v84 >= *(unsigned __int16 *)&v81->klass->_2.bitflags1 )
                  goto LABEL_44;
              }
              v86 = (__int64)(&v83[1]._1.methods + 2 * *(_DWORD *)v85);
            }
            else
            {
LABEL_44:
              v86 = sub_AC5258(v81, IClassBoardSquareModel_TypeInfo, 13LL, v53);
            }
            v87 = (*(__int64 (__fastcall **)(WarBoardData_SquareRangeSearch_o *, _QWORD, _QWORD))v86)(
                    v82,
                    0LL,
                    *(_QWORD *)(v86 + 8));
            v88 = *v75;
            v104 = v87;
            v89 = (System_Enum_o *)j_il2cpp_value_box_0(v88, &v104);
            v90 = *v75;
            v103 = 1;
            v91 = (System_Enum_o *)j_il2cpp_value_box_0(v90, &v103);
            if ( !v89 )
              sub_B2C434(v91, v91);
            HasFlag = System_Enum__HasFlag(v89, v91, 0LL);
            if ( !HasFlag )
            {
              if ( !*(_QWORD *)v74 )
                sub_B2C434(HasFlag, v93);
              if ( !*(_QWORD *)v36 )
                sub_B2C434(HasFlag, v93);
              v94 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v74 + 152LL);
              if ( !v94 )
                sub_B2C434(HasFlag, v93);
              v95 = sub_B2C41C(*(_QWORD *)(*(_QWORD *)v36 + 168LL), IClassBoardLockModel_TypeInfo) != 0;
              ClassBoardEffectPlayer__SetData_bool_(
                v94,
                v95,
                (const MethodInfo_172C7C8 *)Method_ClassBoardEffectPlayer_SetData_bool___);
              if ( !*(_QWORD *)v74 )
                sub_B2C434(v96, v97);
              v98 = this->fields.players;
              if ( !v98 )
                sub_B2C434(0LL, v97);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v98,
                *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v74 + 152LL),
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
            }
          }
        }
      }
      v105 = 0x10000010ELL;
      v99 = *(_QWORD *)v54;
      if ( *(_WORD *)(*(_QWORD *)v54 + 298LL) )
      {
        v100 = 0LL;
        v101 = (int *)(*(_QWORD *)(v99 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v101 - 1) != System_IDisposable_TypeInfo )
        {
          ++v100;
          v101 += 4;
          if ( v100 >= *(unsigned __int16 *)(*(_QWORD *)v54 + 298LL) )
            goto LABEL_59;
        }
        v102 = v99 + 16LL * *v101 + 312;
      }
      else
      {
LABEL_59:
        v102 = sub_AC5258(v54, System_IDisposable_TypeInfo, 0LL, v60);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v102)(v54, *(_QWORD *)(v102 + 8));
      if ( (_DWORD)v105 == 270 )
        v105 = 270LL;
      return;
    }
LABEL_66:
    sub_B2C434(v28, v29);
  }
}


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
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x22
  System_Collections_Generic_List_T__o *players; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v37; // x24
  __int64 v38; // x3
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *lineViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__c *klass; // x8
  unsigned __int64 v41; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v44; // x1
  System_String_array **v45; // x3
  __int64 v46; // x19
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x3
  __int64 v52; // x25
  __int64 v53; // x3
  __int64 v54; // x8
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0
  System_Int32_array **v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  __int64 v65; // x24
  __int64 v66; // x23
  System_Collections_Generic_List_T__o *v67; // x26
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v68; // x27
  _BOOL8 v69; // x0
  __int64 v70; // x1
  System_String_array **v71; // x2
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array ***v76; // x25
  __int64 v77; // x0
  __int64 v78; // x1
  __int64 v79; // x3
  __int64 *v80; // x26
  __int64 v81; // x8
  unsigned __int64 v82; // x10
  IClassBoardLineModel_c **v83; // x11
  __int64 v84; // x0
  __int64 v85; // x0
  __int64 v86; // x1
  __int64 v87; // x3
  __int64 v88; // x26
  __int64 v89; // x8
  unsigned __int64 v90; // x10
  int *v91; // x11
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 v94; // x1
  __int64 v95; // x3
  __int64 *v96; // x27
  __int64 v97; // x8
  int v98; // w26
  unsigned __int64 v99; // x10
  int *v100; // x11
  __int64 v101; // x0
  __int64 v102; // x0
  __int64 v103; // x1
  __int64 v104; // x3
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
  __int64 v117; // x1
  __int64 v118; // x3
  __int64 v119; // x26
  __int64 v120; // x8
  unsigned __int64 v121; // x10
  int *v122; // x11
  __int64 v123; // x0
  __int64 v124; // x0
  __int64 v125; // x1
  __int64 v126; // x3
  __int64 *v127; // x27
  __int64 v128; // x8
  int v129; // w26
  unsigned __int64 v130; // x10
  int *v131; // x11
  __int64 v132; // x0
  __int64 v133; // x0
  __int64 v134; // x1
  __int64 v135; // x8
  unsigned __int64 v136; // x10
  IClassBoardLineModel_c **v137; // x11
  System_Int32_array **v138; // x0
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  ClassBoardEffectPlayer_o *v145; // x0
  __int64 v146; // x0
  __int64 v147; // x1
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v148; // x0
  __int64 v149; // x0
  __int64 v150; // x1
  __int64 v151; // x3
  System_Int32_array **v152; // x24
  System_Int32_array *v153; // x8
  unsigned __int64 v154; // x10
  IClassBoardSquareModel_c **v155; // x11
  __int64 v156; // x0
  System_Collections_Generic_IEnumerable_TSource__o *squareViewList; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v158; // x25
  WarBoardData_SquareRangeSearch_o *v159; // x23
  __int64 v160; // x0
  __int64 v161; // x1
  ClassBoardEffectPlayer_o *monitor; // x0
  __int64 v163; // x1
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v164; // x0
  __int64 v165; // x8
  unsigned __int64 v166; // x10
  int *v167; // x11
  __int64 v168; // x0

  if ( (byte_41894BF & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_ClassBoardEffectPlayer___, releaseSquare);
    sub_B2C35C(&Method_ClassBoardEffectPlayer_SetData_bool___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___, v7);
    sub_B2C35C(&Method_System_Func_ClassBoardEffectPlayer__bool___ctor__, v8);
    sub_B2C35C(&Method_System_Func_ClassBoardSquare__bool___ctor__, v9);
    sub_B2C35C(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo, v10);
    sub_B2C35C(&System_Func_ClassBoardSquare__bool__TypeInfo, v11);
    sub_B2C35C(&IClassBoardLineModel_TypeInfo, v12);
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v13);
    sub_B2C35C(&System_IDisposable_TypeInfo, v14);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo, v15);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo, v16);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v18);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v19);
    sub_B2C35C(&Method_ClassBoardEffectController___c__DisplayClass15_0__RegisterConnectingLineBlankPlayer_b__0__, v20);
    sub_B2C35C(&ClassBoardEffectController___c__DisplayClass15_0_TypeInfo, v21);
    sub_B2C35C(&Method_ClassBoardEffectController___c__DisplayClass15_1__RegisterConnectingLineBlankPlayer_b__1__, v22);
    sub_B2C35C(&ClassBoardEffectController___c__DisplayClass15_1_TypeInfo, v23);
    sub_B2C35C(&Method_ClassBoardEffectController___c__DisplayClass15_2__RegisterConnectingLineBlankPlayer_b__2__, v24);
    sub_B2C35C(&ClassBoardEffectController___c__DisplayClass15_2_TypeInfo, v25);
    byte_41894BF = 1;
  }
  v26 = sub_B2C42C(ClassBoardEffectController___c__DisplayClass15_0_TypeInfo);
  ClassBoardEffectController___c__DisplayClass15_0___ctor(
    (ClassBoardEffectController___c__DisplayClass15_0_o *)v26,
    0LL);
  if ( !v26 )
    goto LABEL_144;
  *(_QWORD *)(v26 + 16) = releaseSquare;
  v35 = v26 + 16;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v26 + 16),
    (System_Int32_array **)releaseSquare,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v37 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v37,
    (Il2CppObject *)v26,
    Method_ClassBoardEffectController___c__DisplayClass15_0__RegisterConnectingLineBlankPlayer_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
  v27 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
          players,
          (System_Func_T__bool__o *)v37,
          (const MethodInfo_17266AC *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
  if ( v27 )
    return;
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList )
LABEL_144:
    sub_B2C434(v27, v28);
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
    p_method = sub_AC5258(
                 this->fields.lineViewList,
                 System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo,
                 0LL,
                 v38);
  }
  v46 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *, _QWORD))p_method)(
          lineViewList,
          *(_QWORD *)(p_method + 8));
  if ( !v46 )
    sub_B2C434(0LL, v44);
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
      v50 = sub_AC5258(v46, System_Collections_IEnumerator_TypeInfo, 0LL, v45);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8)) & 1) == 0 )
      break;
    v52 = sub_B2C42C(ClassBoardEffectController___c__DisplayClass15_1_TypeInfo);
    ClassBoardEffectController___c__DisplayClass15_1___ctor(
      (ClassBoardEffectController___c__DisplayClass15_1_o *)v52,
      0LL);
    v54 = *(_QWORD *)v46;
    if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
    {
      v55 = 0LL;
      v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardLine__c **)v56 - 1) != System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo )
      {
        ++v55;
        v56 += 4;
        if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
          goto LABEL_24;
      }
      v57 = v54 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_24:
      v57 = sub_AC5258(v46, System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo, 0LL, v53);
    }
    v58 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v46, *(_QWORD *)(v57 + 8));
    if ( !v52 )
      sub_B2C434(v58, v58);
    *(_QWORD *)(v52 + 16) = v58;
    v65 = v52 + 16;
    sub_B2C2F8((BattleServantConfConponent_o *)(v52 + 16), v58, v59, v60, v61, v62, v63, v64);
    v66 = sub_B2C42C(ClassBoardEffectController___c__DisplayClass15_2_TypeInfo);
    ClassBoardEffectController___c__DisplayClass15_2___ctor(
      (ClassBoardEffectController___c__DisplayClass15_2_o *)v66,
      0LL);
    v67 = (System_Collections_Generic_List_T__o *)this->fields.players;
    v68 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v68,
      (Il2CppObject *)v52,
      Method_ClassBoardEffectController___c__DisplayClass15_1__RegisterConnectingLineBlankPlayer_b__1__,
      (const MethodInfo_2711C04 *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
    v69 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
            v67,
            (System_Func_T__bool__o *)v68,
            (const MethodInfo_17266AC *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    if ( !v69 )
    {
      if ( !v66 )
        sub_B2C434(v69, v70);
      *(_QWORD *)(v66 + 16) = 0LL;
      v76 = (System_Int32_array ***)(v66 + 16);
      sub_B2C2F8((BattleServantConfConponent_o *)(v66 + 16), 0LL, v71, v45, v72, v73, v74, v75);
      if ( !*(_QWORD *)v65 )
        sub_B2C434(v77, v78);
      v80 = *(__int64 **)(*(_QWORD *)v65 + 160LL);
      if ( !v80 )
        sub_B2C434(v77, v78);
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
        v84 = sub_AC5258(v80, IClassBoardLineModel_TypeInfo, 1LL, v79);
      }
      v85 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v84)(v80, *(_QWORD *)(v84 + 8));
      v88 = v85;
      if ( !v85 )
        sub_B2C434(0LL, v86);
      v89 = *(_QWORD *)v85;
      if ( *(_WORD *)(*(_QWORD *)v85 + 298LL) )
      {
        v90 = 0LL;
        v91 = (int *)(*(_QWORD *)(v89 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v91 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v90;
          v91 += 4;
          if ( v90 >= *(unsigned __int16 *)(*(_QWORD *)v85 + 298LL) )
            goto LABEL_42;
        }
        v92 = v89 + 16LL * *v91 + 312;
      }
      else
      {
LABEL_42:
        v92 = sub_AC5258(v85, IClassBoardSquareModel_TypeInfo, 0LL, v87);
      }
      v93 = (*(__int64 (__fastcall **)(__int64, _QWORD))v92)(v88, *(_QWORD *)(v92 + 8));
      if ( !*(_QWORD *)v35 )
        sub_B2C434(v93, v94);
      v96 = *(__int64 **)(*(_QWORD *)v35 + 168LL);
      if ( !v96 )
        sub_B2C434(v93, v94);
      v97 = *v96;
      v98 = v93;
      if ( *(_WORD *)(*v96 + 298) )
      {
        v99 = 0LL;
        v100 = (int *)(*(_QWORD *)(v97 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v100 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v99;
          v100 += 4;
          if ( v99 >= *(unsigned __int16 *)(*v96 + 298) )
            goto LABEL_50;
        }
        v101 = v97 + 16LL * *v100 + 312;
      }
      else
      {
LABEL_50:
        v101 = sub_AC5258(v96, IClassBoardSquareModel_TypeInfo, 0LL, v95);
      }
      v102 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v101)(v96, *(_QWORD *)(v101 + 8));
      v105 = *(_QWORD *)v65;
      if ( v98 == (_DWORD)v102 )
      {
        if ( !v105 )
          sub_B2C434(v102, v103);
        v106 = *(__int64 **)(v105 + 160);
        if ( !v106 )
          sub_B2C434(v102, v103);
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
          v110 = sub_AC5258(v106, IClassBoardLineModel_TypeInfo, 0LL, v104);
        }
LABEL_93:
        v138 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v110)(v106, *(_QWORD *)(v110 + 8));
        *v76 = v138;
        sub_B2C2F8((BattleServantConfConponent_o *)(v66 + 16), v138, v139, v140, v141, v142, v143, v144);
        goto LABEL_94;
      }
      if ( !v105 )
        sub_B2C434(v102, v103);
      v111 = *(__int64 **)(v105 + 160);
      if ( !v111 )
        sub_B2C434(v102, v103);
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
        v115 = sub_AC5258(v111, IClassBoardLineModel_TypeInfo, 0LL, v104);
      }
      v116 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v115)(v111, *(_QWORD *)(v115 + 8));
      v119 = v116;
      if ( !v116 )
        sub_B2C434(0LL, v117);
      v120 = *(_QWORD *)v116;
      if ( *(_WORD *)(*(_QWORD *)v116 + 298LL) )
      {
        v121 = 0LL;
        v122 = (int *)(*(_QWORD *)(v120 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v122 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v121;
          v122 += 4;
          if ( v121 >= *(unsigned __int16 *)(*(_QWORD *)v116 + 298LL) )
            goto LABEL_74;
        }
        v123 = v120 + 16LL * *v122 + 312;
      }
      else
      {
LABEL_74:
        v123 = sub_AC5258(v116, IClassBoardSquareModel_TypeInfo, 0LL, v118);
      }
      v124 = (*(__int64 (__fastcall **)(__int64, _QWORD))v123)(v119, *(_QWORD *)(v123 + 8));
      if ( !*(_QWORD *)v35 )
        sub_B2C434(v124, v125);
      v127 = *(__int64 **)(*(_QWORD *)v35 + 168LL);
      if ( !v127 )
        sub_B2C434(v124, v125);
      v128 = *v127;
      v129 = v124;
      if ( *(_WORD *)(*v127 + 298) )
      {
        v130 = 0LL;
        v131 = (int *)(*(_QWORD *)(v128 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v131 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v130;
          v131 += 4;
          if ( v130 >= *(unsigned __int16 *)(*v127 + 298) )
            goto LABEL_82;
        }
        v132 = v128 + 16LL * *v131 + 312;
      }
      else
      {
LABEL_82:
        v132 = sub_AC5258(v127, IClassBoardSquareModel_TypeInfo, 0LL, v126);
      }
      v133 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v132)(v127, *(_QWORD *)(v132 + 8));
      if ( v129 == (_DWORD)v133 )
      {
        if ( !*(_QWORD *)v65 )
          sub_B2C434(v133, v134);
        v106 = *(__int64 **)(*(_QWORD *)v65 + 160LL);
        if ( !v106 )
          sub_B2C434(v133, v134);
        v135 = *v106;
        if ( *(_WORD *)(*v106 + 298) )
        {
          v136 = 0LL;
          v137 = (IClassBoardLineModel_c **)(*(_QWORD *)(v135 + 176) + 8LL);
          while ( *(v137 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v136;
            v137 += 2;
            if ( v136 >= *(unsigned __int16 *)(*v106 + 298) )
              goto LABEL_91;
          }
          v110 = v135 + 16LL * (*(_DWORD *)v137 + 1) + 312;
        }
        else
        {
LABEL_91:
          v110 = sub_AC5258(v106, IClassBoardLineModel_TypeInfo, 1LL, v45);
        }
        goto LABEL_93;
      }
LABEL_94:
      if ( *v76 )
      {
        if ( !*(_QWORD *)v65 )
          sub_B2C434(v133, v134);
        v145 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v65 + 144LL);
        if ( !v145 )
          sub_B2C434(0LL, v134);
        ClassBoardEffectPlayer__SetData_bool_(
          v145,
          isLock,
          (const MethodInfo_172C7C8 *)Method_ClassBoardEffectPlayer_SetData_bool___);
        if ( !*(_QWORD *)v65 )
          sub_B2C434(v146, v147);
        v148 = this->fields.players;
        if ( !v148 )
          sub_B2C434(0LL, v147);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v148,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v65 + 144LL),
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
        v152 = *v76;
        if ( !*v76 )
          sub_B2C434(v149, v150);
        v153 = *v152;
        if ( HIWORD((*v152)->m_Items[67]) )
        {
          v154 = 0LL;
          v155 = (IClassBoardSquareModel_c **)(*(_QWORD *)&v153->m_Items[37] + 8LL);
          while ( *(v155 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            ++v154;
            v155 += 2;
            if ( v154 >= HIWORD((*v152)->m_Items[67]) )
              goto LABEL_104;
          }
          v156 = (__int64)&v153->m_Items[4 * *(_DWORD *)v155 + 91];
        }
        else
        {
LABEL_104:
          v156 = sub_AC5258(*v76, IClassBoardSquareModel_TypeInfo, 5LL, v151);
        }
        if ( ((*(__int64 (__fastcall **)(System_Int32_array **, _QWORD))v156)(v152, *(_QWORD *)(v156 + 8)) & 1) != 0 )
        {
          squareViewList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.squareViewList;
          v158 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ClassBoardSquare__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v158,
            (Il2CppObject *)v66,
            Method_ClassBoardEffectController___c__DisplayClass15_2__RegisterConnectingLineBlankPlayer_b__2__,
            (const MethodInfo_2711C04 *)Method_System_Func_ClassBoardSquare__bool___ctor__);
          v159 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                   squareViewList,
                   (System_Func_TSource__bool__o *)v158,
                   (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v159, 0LL, 0LL) )
          {
            ClassBoardEffectController__RegisterConnectingLineBlankPlayer(
              this,
              (ClassBoardSquare_o *)v159,
              isLock,
              (const MethodInfo *)v45);
            if ( !v159 )
              sub_B2C434(v160, v161);
            monitor = (ClassBoardEffectPlayer_o *)v159[6].monitor;
            if ( !monitor )
              sub_B2C434(0LL, v161);
            ClassBoardEffectPlayer__SetData_bool_(
              monitor,
              isLock,
              (const MethodInfo_172C7C8 *)Method_ClassBoardEffectPlayer_SetData_bool___);
            v164 = this->fields.players;
            if ( !v164 )
              sub_B2C434(0LL, v163);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v164,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v159[6].monitor,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
          }
        }
      }
    }
  }
  v165 = *(_QWORD *)v46;
  if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
  {
    v166 = 0LL;
    v167 = (int *)(*(_QWORD *)(v165 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v167 - 1) != System_IDisposable_TypeInfo )
    {
      ++v166;
      v167 += 4;
      if ( v166 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
        goto LABEL_119;
    }
    v168 = v165 + 16LL * *v167 + 312;
  }
  else
  {
LABEL_119:
    v168 = sub_AC5258(v46, System_IDisposable_TypeInfo, 0LL, v51);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v168)(v46, *(_QWORD *)(v168 + 8));
}


void __fastcall ClassBoardEffectController__ResetPlayers(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x20
  void *v9; // x0
  struct ClassBoardEffectController___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__12_0; // x21
  Il2CppObject *v12; // x22
  struct ClassBoardEffectController___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_Action_o **p_playEndCallback; // x19
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_41894BC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_ClassBoardEffectPlayer___ctor__, method);
    sub_B2C35C(&System_Action_ClassBoardEffectPlayer__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Clear__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__, v5);
    sub_B2C35C(&Method_ClassBoardEffectController___c__ResetPlayers_b__12_0__, v6);
    sub_B2C35C(&ClassBoardEffectController___c_TypeInfo, v7);
    byte_41894BC = 1;
  }
  players = this->fields.players;
  v9 = ClassBoardEffectController___c_TypeInfo;
  if ( (BYTE3(ClassBoardEffectController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectController___c_TypeInfo);
    v9 = ClassBoardEffectController___c_TypeInfo;
  }
  static_fields = (struct ClassBoardEffectController___c_StaticFields *)*((_QWORD *)v9 + 23);
  _9__12_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (*((_BYTE *)v9 + 307) & 4) != 0 && !*((_DWORD *)v9 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = ClassBoardEffectController___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_ClassBoardEffectPlayer__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__12_0,
      v12,
      Method_ClassBoardEffectController___c__ResetPlayers_b__12_0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_ClassBoardEffectPlayer___ctor__);
    v13 = ClassBoardEffectController___c_TypeInfo->static_fields;
    v13->__9__12_0 = (struct System_Action_ClassBoardEffectPlayer__o *)_9__12_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !players
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)players,
          (System_Action_T__o *)_9__12_0,
          (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__),
        (v9 = this->fields.players) == 0LL) )
  {
    sub_B2C434(v9, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v9,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Clear__);
  this->fields.playEndCallback = 0LL;
  p_playEndCallback = &this->fields.playEndCallback;
  *((_DWORD *)p_playEndCallback - 4) = 0;
  sub_B2C2F8((BattleServantConfConponent_o *)p_playEndCallback, 0LL, v21, v22, v23, v24, v25, v26);
}


void __fastcall ClassBoardEffectController___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ClassBoardEffectController___c_StaticFields *static_fields; // x0

  if ( (byte_4184EE4 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardEffectController___c_TypeInfo, v1);
    byte_4184EE4 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ClassBoardEffectController___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ClassBoardEffectController___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardEffectController___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, x);
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
    sub_B2C434(this, x);
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
  __int64 v3; // x3
  ClassBoardEffectController___c__DisplayClass15_2_o *v5; // x19
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x3
  struct IClassBoardSquareModel_o *connectSquareModel; // x20
  IClassBoardSquareModel_c *v13; // x8
  int v14; // w19
  unsigned __int64 v15; // x10
  int *v16; // x11
  __int64 v17; // x0

  v5 = this;
  if ( (byte_4184EE5 & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass15_2_o *)sub_B2C35C(&IClassBoardSquareModel_TypeInfo, x);
    byte_4184EE5 = 1;
  }
  if ( !x )
    goto LABEL_19;
  SquareModel_k__BackingField = x->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_19;
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AC5258(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0LL, v3);
  }
  this = (ClassBoardEffectController___c__DisplayClass15_2_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                 SquareModel_k__BackingField,
                                                                 *(_QWORD *)(p_method + 8));
  connectSquareModel = v5->fields.connectSquareModel;
  if ( !connectSquareModel )
LABEL_19:
    sub_B2C434(this, x);
  v13 = connectSquareModel->klass;
  v14 = (int)this;
  if ( *(_WORD *)&connectSquareModel->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    v16 = &v13->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v16 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v15;
      v16 += 4;
      if ( v15 >= *(unsigned __int16 *)&connectSquareModel->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v17 = (__int64)&v13->vtable[*v16].method;
  }
  else
  {
LABEL_16:
    v17 = sub_AC5258(connectSquareModel, IClassBoardSquareModel_TypeInfo, 0LL, v11);
  }
  return v14 == (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v17)(
                  connectSquareModel,
                  *(_QWORD *)(v17 + 8));
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
    sub_B2C434(this, x);
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
    sub_B2C434(this, x);
  Name_k__BackingField = x->fields._Name_k__BackingField;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  return System_String__op_Equality(Name_k__BackingField, name, 0LL);
}


bool __fastcall ClassBoardEffectController___c__DisplayClass16_1___RegisterConnectedSquareEnablePlayer_b__2(
        ClassBoardEffectController___c__DisplayClass16_1_o *this,
        IClassBoardSquareModel_o *model,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ClassBoardEffectController___c__DisplayClass16_1_o *v5; // x19
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v10; // x3
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *v13; // x8
  int v14; // w19
  unsigned __int64 v15; // x10
  int *v16; // x11
  __int64 v17; // x0

  v5 = this;
  if ( (byte_4184EE6 & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass16_1_o *)sub_B2C35C(&IClassBoardSquareModel_TypeInfo, model);
    byte_4184EE6 = 1;
  }
  if ( !model )
    goto LABEL_19;
  klass = model->klass;
  if ( *(_WORD *)&model->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&model->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(model, IClassBoardSquareModel_TypeInfo, 0LL, v3);
  }
  this = (ClassBoardEffectController___c__DisplayClass16_1_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                 model,
                                                                 *(_QWORD *)(p_method + 8));
  square = v5->fields.square;
  if ( !square || (SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField) == 0LL )
LABEL_19:
    sub_B2C434(this, model);
  v13 = SquareModel_k__BackingField->klass;
  v14 = (int)this;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    v16 = &v13->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v16 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v15;
      v16 += 4;
      if ( v15 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v17 = (__int64)&v13->vtable[*v16].method;
  }
  else
  {
LABEL_16:
    v17 = sub_AC5258(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0LL, v10);
  }
  return v14 == (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v17)(
                  SquareModel_k__BackingField,
                  *(_QWORD *)(v17 + 8));
}