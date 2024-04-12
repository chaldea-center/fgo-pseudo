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
  __int64 v44; // x3
  struct System_Action_o *callback; // x20
  System_Action_c *klass; // x8
  unsigned __int64 v47; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 v49; // x0

  if ( (byte_42B3832 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_First_ClassBoardSquare___);
    sub_B52984(&IClassBoardSquareModel_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__);
    sub_B52984(&System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo);
    byte_42B3832 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__);
  this->fields.players = (struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *)v11;
  sub_B52920(
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)squares,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.lineViewList = lines;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.lineViewList,
    (System_Int32_array **)lines,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.mapCamera = camera;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mapCamera,
    (System_Int32_array **)camera,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.bgModel = bg;
  sub_B52920(
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
                                                    (const MethodInfo_1B61EC8 *)Method_System_Linq_Enumerable_First_ClassBoardSquare___);
  if ( !StonePurchaseNotificationMenu_DialogOpenQueue
    || (callback = StonePurchaseNotificationMenu_DialogOpenQueue[3].fields.callback) == 0LL )
  {
    sub_B52A5C(StonePurchaseNotificationMenu_DialogOpenQueue, v43);
  }
  klass = callback->klass;
  if ( *(_WORD *)&callback->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v47;
      p_offset += 2;
      if ( v47 >= *(unsigned __int16 *)&callback->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v49 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_9:
    v49 = sub_AEB880(
            StonePurchaseNotificationMenu_DialogOpenQueue[3].fields.callback,
            IClassBoardSquareModel_TypeInfo,
            1LL,
            v44);
  }
  this->fields.baseId = (*(__int64 (__fastcall **)(struct System_Action_o *, _QWORD))v49)(
                          callback,
                          *(_QWORD *)(v49 + 8));
}


void __fastcall ClassBoardEffectController__CheckPlayEnd(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  ClassBoardEffectController_o *v2; // x19
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x9
  int v4; // w8

  v2 = this;
  if ( (byte_42B3837 & 1) == 0 )
  {
    this = (ClassBoardEffectController_o *)sub_B52984(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__);
    byte_42B3837 = 1;
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
    sub_B52A5C(this, method);
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
  if ( (byte_42B383B & 1) == 0 )
  {
    sub_B52984(&MapCameraViewAdjusterUtil_TypeInfo);
    sub_B52984(&Method_System_Nullable_Vector3___ctor__);
    byte_42B383B = 1;
  }
  mapCamera = this->fields.mapCamera;
  *(_QWORD *)&v35.fields.value.fields.x = &v31;
  v36.fields.x = x;
  v36.fields.y = y;
  *(_QWORD *)&v35.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  v36.fields.z = z;
  *(_QWORD *)&v31.fields.value.fields.x = 0LL;
  *(_QWORD *)&v31.fields.value.fields.z = 0LL;
  System_Nullable_Vector3____ctor(v35, v36, *(const MethodInfo_2175340 **)&ease);
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
    sub_B52A5C(SafeCameraDestination, v19);
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

  if ( (byte_42B3834 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ClassBoardEffectController_PlayNext__);
    sub_B52984(&Method_ClassBoardEffectPlayer_SetData_int___);
    sub_B52984(&Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__);
    byte_42B3834 = 1;
  }
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)callback);
  this->fields.playEndCallback = callback;
  p_playEndCallback = &this->fields.playEndCallback;
  sub_B52920(
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
    goto LABEL_16;
  startMainEffectPlayer = bgModel->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    goto LABEL_16;
  ClassBoardEffectPlayer__SetData_int_(
    startMainEffectPlayer,
    this->fields.baseId,
    (const MethodInfo_1A47E70 *)Method_ClassBoardEffectPlayer_SetData_int___);
  v15 = this->fields.bgModel;
  if ( !v15 )
    goto LABEL_16;
  v16 = v15->fields.startMainEffectPlayer;
  v17 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ClassBoardEffectController_PlayNext__, 0LL);
  if ( !v16 )
    goto LABEL_16;
  v16->fields.endCallback = v17;
  sub_B52920(
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
    goto LABEL_16;
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !startMainEffectPlayer )
    goto LABEL_16;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)startMainEffectPlayer,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v24->fields.startMainEffectPlayer,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !startMainEffectPlayer )
    goto LABEL_16;
  if ( SLODWORD(startMainEffectPlayer->fields.playCallback) < 1 )
  {
    startMainEffectPlayer = (ClassBoardEffectPlayer_o *)*p_playEndCallback;
    if ( *p_playEndCallback )
      goto LABEL_15;
LABEL_16:
    sub_B52A5C(startMainEffectPlayer, v13);
  }
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)startMainEffectPlayer,
                                                        (const MethodInfo_1B61EC8 *)Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
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
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x21
  int v4; // w20
  int size; // w8
  ClassBoardEffectPlayer_o *v6; // x8

  v2 = this;
  if ( (byte_42B3838 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__);
    this = (ClassBoardEffectController_o *)sub_B52984(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Item__);
    byte_42B3838 = 1;
  }
  players = v2->fields.players;
  v4 = v2->fields.playEndCount + 1;
  v2->fields.playEndCount = v4;
  if ( !players )
    goto LABEL_12;
  size = players->fields._size;
  if ( v4 >= size )
  {
    this = (ClassBoardEffectController_o *)v2->fields.playEndCallback;
    if ( this )
      goto LABEL_11;
LABEL_12:
    sub_B52A5C(this, method);
  }
  if ( size <= (unsigned int)v4 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v6 = players->fields._items->m_Items[v4];
  if ( !v6 )
    goto LABEL_12;
  this = (ClassBoardEffectController_o *)v6->fields.playCallback;
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
  Il2CppObject *current; // x24
  System_Action_o *v19; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Action_o *monitor; // x0
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42B3833 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ClassBoardEffectController_CheckPlayEnd__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__get_Current__);
    sub_B52984(&IClassBoardLockModel_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__);
    byte_42B3833 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)releaseSquare);
  this->fields.playEndCallback = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.playEndCallback,
    (System_Int32_array **)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !releaseSquare
    || (v15 = sub_B52A44(releaseSquare->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo) != 0,
        ClassBoardEffectController__RegisterConnectingLineBlankPlayer(this, releaseSquare, v15, v16),
        ClassBoardEffectController__RegisterConnectedSquareEnablePlayer(this, releaseSquare, v17),
        (players = this->fields.players) == 0LL)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)players,
          (EventMissionProgressRequest_Argument_ProgressData_o *)releaseSquare->fields.releaseEffectPlayer,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__),
        (players = this->fields.players) == 0LL) )
  {
    sub_B52A5C(players, v14);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v29,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)players,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__) )
  {
    current = v29.fields.current;
    v19 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_ClassBoardEffectController_CheckPlayEnd__, 0LL);
    if ( !current )
      sub_B52A5C(v20, v21);
    current[2].klass = (Il2CppClass *)v19;
    sub_B52920((BattleServantConfConponent_o *)&current[2], (System_Int32_array **)v19, v22, v23, v24, v25, v26, v27);
    monitor = (System_Action_o *)current[1].monitor;
    if ( monitor )
      System_Action__Invoke(monitor, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__);
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
  if ( (byte_42B3835 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B3835 = 1;
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
  __int64 v18; // x3
  __int64 *v19; // x19
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  IClassBoardSquareModel_c **v22; // x11
  __int64 v23; // x0
  __int64 v24; // x3
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squareViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__c *klass; // x8
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v30; // x1
  __int64 v31; // x3
  __int64 v32; // x19
  AcquireFlag_c **v33; // x24
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  __int64 v38; // x3
  __int64 v39; // x23
  __int64 v40; // x3
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  System_Int32_array **v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x22
  AcquireFlag_c **v53; // x28
  System_Collections_Generic_List_T__o *v54; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v55; // x25
  bool v56; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v58; // x25
  WarBoardData_SquareRangeSearch_o *v59; // x0
  WarBoardData_SquareRangeSearch_o *v60; // x23
  WarBoardData_SquareRangeSearch_c *v61; // x8
  unsigned __int64 v62; // x10
  IClassBoardSquareModel_c **v63; // x11
  __int64 v64; // x0
  int v65; // w0
  AcquireFlag_c *v66; // x8
  System_Enum_o *v67; // x23
  AcquireFlag_c *v68; // x0
  System_Enum_o *v69; // x0
  _BOOL8 HasFlag; // x0
  __int64 v71; // x1
  ClassBoardEffectPlayer_o *v72; // x23
  bool v73; // w1
  __int64 v74; // x0
  __int64 v75; // x1
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v76; // x0
  __int64 v77; // x8
  unsigned __int64 v78; // x10
  int *v79; // x11
  __int64 v80; // x0
  int v81; // [xsp+8h] [xbp-68h] BYREF
  int v82; // [xsp+Ch] [xbp-64h] BYREF
  __int64 v83; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v84; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42B383A & 1) == 0 )
  {
    sub_B52984(&AcquireFlag_TypeInfo);
    sub_B52984(&Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    sub_B52984(&Method_ClassBoardEffectPlayer_SetData_bool___);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
    sub_B52984(&Method_System_Func_IClassBoardSquareModel__bool___ctor__);
    sub_B52984(&Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
    sub_B52984(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
    sub_B52984(&System_Func_IClassBoardSquareModel__bool__TypeInfo);
    sub_B52984(&IClassBoardLockModel_TypeInfo);
    sub_B52984(&IClassBoardSquareModel_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__);
    sub_B52984(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    sub_B52984(&Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectedSquareEnablePlayer_b__0__);
    sub_B52984(&ClassBoardEffectController___c__DisplayClass16_0_TypeInfo);
    sub_B52984(&Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__1__);
    sub_B52984(&Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__2__);
    sub_B52984(&ClassBoardEffectController___c__DisplayClass16_1_TypeInfo);
    byte_42B383A = 1;
  }
  v84 = 0LL;
  HIDWORD(v83) = 0;
  v5 = sub_B52A54(ClassBoardEffectController___c__DisplayClass16_0_TypeInfo);
  ClassBoardEffectController___c__DisplayClass16_0___ctor((ClassBoardEffectController___c__DisplayClass16_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_66;
  *(_QWORD *)(v5 + 16) = releaseSquare;
  v14 = v5 + 16;
  sub_B52920(
    (BattleServantConfConponent_o *)(v5 + 16),
    (System_Int32_array **)releaseSquare,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectedSquareEnablePlayer_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
  if ( BasicHelper__Any_WarBoardData_SquareRangeSearch_(
         players,
         (System_Func_T__bool__o *)v16,
         (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
  {
    return;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  v84 = v17;
  if ( !*(_QWORD *)v14 )
    goto LABEL_66;
  v19 = *(__int64 **)(*(_QWORD *)v14 + 168LL);
  if ( !v19 )
    goto LABEL_66;
  v20 = *v19;
  if ( *(_WORD *)(*v19 + 298) )
  {
    v21 = 0LL;
    v22 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v20 + 176) + 8LL);
    while ( *(v22 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v21;
      v22 += 2;
      if ( v21 >= *(unsigned __int16 *)(*v19 + 298) )
        goto LABEL_11;
    }
    v23 = v20 + 16LL * (*(_DWORD *)v22 + 15) + 312;
  }
  else
  {
LABEL_11:
    v23 = sub_AEB880(v19, IClassBoardSquareModel_TypeInfo, 15LL, v18);
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *, System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **, _QWORD))v23)(
         v19,
         &v84,
         *(_QWORD *)(v23 + 8));
  if ( v84 && v84->fields._size >= 1 )
  {
    squareViewList = this->fields.squareViewList;
    if ( squareViewList )
    {
      klass = squareViewList->klass;
      if ( *(_WORD *)&squareViewList->klass->_2.bitflags1 )
      {
        v27 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_ClassBoardSquare__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo )
        {
          ++v27;
          p_offset += 4;
          if ( v27 >= *(unsigned __int16 *)&squareViewList->klass->_2.bitflags1 )
            goto LABEL_20;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_20:
        p_method = sub_AEB880(
                     this->fields.squareViewList,
                     System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo,
                     0LL,
                     v24);
      }
      v32 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *, _QWORD))p_method)(
              squareViewList,
              *(_QWORD *)(p_method + 8));
      if ( !v32 )
        sub_B52A5C(0LL, v30);
      v33 = &AcquireFlag_TypeInfo;
      while ( 1 )
      {
        v34 = *(_QWORD *)v32;
        if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
        {
          v35 = 0LL;
          v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v35;
            v36 += 4;
            if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
              goto LABEL_28;
          }
          v37 = v34 + 16LL * *v36 + 312;
        }
        else
        {
LABEL_28:
          v37 = sub_AEB880(v32, System_Collections_IEnumerator_TypeInfo, 0LL, v31);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v32, *(_QWORD *)(v37 + 8)) & 1) == 0 )
          break;
        v39 = sub_B52A54(ClassBoardEffectController___c__DisplayClass16_1_TypeInfo);
        ClassBoardEffectController___c__DisplayClass16_1___ctor(
          (ClassBoardEffectController___c__DisplayClass16_1_o *)v39,
          0LL);
        v41 = *(_QWORD *)v32;
        if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
        {
          v42 = 0LL;
          v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_ClassBoardSquare__c **)v43 - 1) != System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo )
          {
            ++v42;
            v43 += 4;
            if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
              goto LABEL_35;
          }
          v44 = v41 + 16LL * *v43 + 312;
        }
        else
        {
LABEL_35:
          v44 = sub_AEB880(v32, System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo, 0LL, v40);
        }
        v45 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v32, *(_QWORD *)(v44 + 8));
        if ( !v39 )
          sub_B52A5C(v45, v45);
        *(_QWORD *)(v39 + 16) = v45;
        v52 = v39 + 16;
        sub_B52920((BattleServantConfConponent_o *)(v39 + 16), v45, v46, v47, v48, v49, v50, v51);
        v53 = v33;
        v54 = (System_Collections_Generic_List_T__o *)this->fields.players;
        v55 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v55,
          (Il2CppObject *)v39,
          Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__1__,
          (const MethodInfo_2BC90BC *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
        v56 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                v54,
                (System_Func_T__bool__o *)v55,
                (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
        v33 = v53;
        if ( !v56 )
        {
          v57 = (System_Collections_Generic_IEnumerable_TSource__o *)v84;
          v58 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_IClassBoardSquareModel__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v58,
            (Il2CppObject *)v39,
            Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__2__,
            (const MethodInfo_2BC90BC *)Method_System_Func_IClassBoardSquareModel__bool___ctor__);
          v59 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                  v57,
                  (System_Func_TSource__bool__o *)v58,
                  (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
          v60 = v59;
          v33 = v53;
          if ( v59 )
          {
            v61 = v59->klass;
            if ( *(_WORD *)&v59->klass->_2.bitflags1 )
            {
              v62 = 0LL;
              v63 = (IClassBoardSquareModel_c **)&v61->_1.interfaceOffsets->offset;
              while ( *(v63 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                ++v62;
                v63 += 2;
                if ( v62 >= *(unsigned __int16 *)&v59->klass->_2.bitflags1 )
                  goto LABEL_44;
              }
              v64 = (__int64)(&v61[1]._1.methods + 2 * *(_DWORD *)v63);
            }
            else
            {
LABEL_44:
              v64 = sub_AEB880(v59, IClassBoardSquareModel_TypeInfo, 13LL, v31);
            }
            v65 = (*(__int64 (__fastcall **)(WarBoardData_SquareRangeSearch_o *, _QWORD, _QWORD))v64)(
                    v60,
                    0LL,
                    *(_QWORD *)(v64 + 8));
            v66 = *v53;
            v82 = v65;
            v67 = (System_Enum_o *)j_il2cpp_value_box_0(v66, &v82);
            v68 = *v53;
            v81 = 1;
            v69 = (System_Enum_o *)j_il2cpp_value_box_0(v68, &v81);
            if ( !v67 )
              sub_B52A5C(v69, v69);
            HasFlag = System_Enum__HasFlag(v67, v69, 0LL);
            if ( !HasFlag )
            {
              if ( !*(_QWORD *)v52 )
                sub_B52A5C(HasFlag, v71);
              if ( !*(_QWORD *)v14 )
                sub_B52A5C(HasFlag, v71);
              v72 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v52 + 152LL);
              if ( !v72 )
                sub_B52A5C(HasFlag, v71);
              v73 = sub_B52A44(*(_QWORD *)(*(_QWORD *)v14 + 168LL), IClassBoardLockModel_TypeInfo) != 0;
              ClassBoardEffectPlayer__SetData_bool_(
                v72,
                v73,
                (const MethodInfo_1A47E10 *)Method_ClassBoardEffectPlayer_SetData_bool___);
              if ( !*(_QWORD *)v52 )
                sub_B52A5C(v74, v75);
              v76 = this->fields.players;
              if ( !v76 )
                sub_B52A5C(0LL, v75);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v76,
                *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v52 + 152LL),
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
            }
          }
        }
      }
      v83 = 0x10000010ELL;
      v77 = *(_QWORD *)v32;
      if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
      {
        v78 = 0LL;
        v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v79 - 1) != System_IDisposable_TypeInfo )
        {
          ++v78;
          v79 += 4;
          if ( v78 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
            goto LABEL_59;
        }
        v80 = v77 + 16LL * *v79 + 312;
      }
      else
      {
LABEL_59:
        v80 = sub_AEB880(v32, System_IDisposable_TypeInfo, 0LL, v38);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v80)(v32, *(_QWORD *)(v80 + 8));
      if ( (_DWORD)v83 == 270 )
        v83 = 270LL;
      return;
    }
LABEL_66:
    sub_B52A5C(v6, v7);
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
  __int64 v18; // x3
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *lineViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__c *klass; // x8
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v24; // x1
  System_String_array **v25; // x3
  __int64 v26; // x19
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x3
  __int64 v32; // x25
  __int64 v33; // x3
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  System_Int32_array **v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x24
  __int64 v46; // x23
  System_Collections_Generic_List_T__o *v47; // x26
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v48; // x27
  _BOOL8 v49; // x0
  __int64 v50; // x1
  System_String_array **v51; // x2
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array ***v56; // x25
  __int64 v57; // x0
  __int64 v58; // x1
  __int64 v59; // x3
  __int64 *v60; // x26
  __int64 v61; // x8
  unsigned __int64 v62; // x10
  IClassBoardLineModel_c **v63; // x11
  __int64 v64; // x0
  __int64 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x3
  __int64 v68; // x26
  __int64 v69; // x8
  unsigned __int64 v70; // x10
  int *v71; // x11
  __int64 v72; // x0
  __int64 v73; // x0
  __int64 v74; // x1
  __int64 v75; // x3
  __int64 *v76; // x27
  __int64 v77; // x8
  int v78; // w26
  unsigned __int64 v79; // x10
  int *v80; // x11
  __int64 v81; // x0
  __int64 v82; // x0
  __int64 v83; // x1
  __int64 v84; // x3
  __int64 v85; // x8
  __int64 *v86; // x26
  __int64 v87; // x8
  unsigned __int64 v88; // x10
  int *v89; // x11
  __int64 v90; // x0
  __int64 *v91; // x26
  __int64 v92; // x8
  unsigned __int64 v93; // x10
  int *v94; // x11
  __int64 v95; // x0
  __int64 v96; // x0
  __int64 v97; // x1
  __int64 v98; // x3
  __int64 v99; // x26
  __int64 v100; // x8
  unsigned __int64 v101; // x10
  int *v102; // x11
  __int64 v103; // x0
  __int64 v104; // x0
  __int64 v105; // x1
  __int64 v106; // x3
  __int64 *v107; // x27
  __int64 v108; // x8
  int v109; // w26
  unsigned __int64 v110; // x10
  int *v111; // x11
  __int64 v112; // x0
  __int64 v113; // x0
  __int64 v114; // x1
  __int64 v115; // x8
  unsigned __int64 v116; // x10
  IClassBoardLineModel_c **v117; // x11
  System_Int32_array **v118; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  ClassBoardEffectPlayer_o *v125; // x0
  __int64 v126; // x0
  __int64 v127; // x1
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v128; // x0
  __int64 v129; // x0
  __int64 v130; // x1
  __int64 v131; // x3
  System_Int32_array **v132; // x24
  System_Int32_array *v133; // x8
  unsigned __int64 v134; // x10
  IClassBoardSquareModel_c **v135; // x11
  __int64 v136; // x0
  System_Collections_Generic_IEnumerable_TSource__o *squareViewList; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v138; // x25
  WarBoardData_SquareRangeSearch_o *v139; // x23
  __int64 v140; // x0
  __int64 v141; // x1
  ClassBoardEffectPlayer_o *monitor; // x0
  __int64 v143; // x1
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v144; // x0
  __int64 v145; // x8
  unsigned __int64 v146; // x10
  int *v147; // x11
  __int64 v148; // x0

  if ( (byte_42B3839 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    sub_B52984(&Method_ClassBoardEffectPlayer_SetData_bool___);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___);
    sub_B52984(&Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
    sub_B52984(&Method_System_Func_ClassBoardSquare__bool___ctor__);
    sub_B52984(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
    sub_B52984(&System_Func_ClassBoardSquare__bool__TypeInfo);
    sub_B52984(&IClassBoardLineModel_TypeInfo);
    sub_B52984(&IClassBoardSquareModel_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_ClassBoardEffectController___c__DisplayClass15_0__RegisterConnectingLineBlankPlayer_b__0__);
    sub_B52984(&ClassBoardEffectController___c__DisplayClass15_0_TypeInfo);
    sub_B52984(&Method_ClassBoardEffectController___c__DisplayClass15_1__RegisterConnectingLineBlankPlayer_b__1__);
    sub_B52984(&ClassBoardEffectController___c__DisplayClass15_1_TypeInfo);
    sub_B52984(&Method_ClassBoardEffectController___c__DisplayClass15_2__RegisterConnectingLineBlankPlayer_b__2__);
    sub_B52984(&ClassBoardEffectController___c__DisplayClass15_2_TypeInfo);
    byte_42B3839 = 1;
  }
  v6 = sub_B52A54(ClassBoardEffectController___c__DisplayClass15_0_TypeInfo);
  ClassBoardEffectController___c__DisplayClass15_0___ctor((ClassBoardEffectController___c__DisplayClass15_0_o *)v6, 0LL);
  if ( !v6 )
    goto LABEL_144;
  *(_QWORD *)(v6 + 16) = releaseSquare;
  v15 = v6 + 16;
  sub_B52920(
    (BattleServantConfConponent_o *)(v6 + 16),
    (System_Int32_array **)releaseSquare,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v6,
    Method_ClassBoardEffectController___c__DisplayClass15_0__RegisterConnectingLineBlankPlayer_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
  v7 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
         players,
         (System_Func_T__bool__o *)v17,
         (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
  if ( v7 )
    return;
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList )
LABEL_144:
    sub_B52A5C(v7, v8);
  klass = lineViewList->klass;
  if ( *(_WORD *)&lineViewList->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ClassBoardLine__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo )
    {
      ++v21;
      p_offset += 4;
      if ( v21 >= *(unsigned __int16 *)&lineViewList->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AEB880(
                 this->fields.lineViewList,
                 System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo,
                 0LL,
                 v18);
  }
  v26 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *, _QWORD))p_method)(
          lineViewList,
          *(_QWORD *)(p_method + 8));
  if ( !v26 )
    sub_B52A5C(0LL, v24);
  while ( 1 )
  {
    v27 = *(_QWORD *)v26;
    if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
    {
      v28 = 0LL;
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
          goto LABEL_17;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_17:
      v30 = sub_AEB880(v26, System_Collections_IEnumerator_TypeInfo, 0LL, v25);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      break;
    v32 = sub_B52A54(ClassBoardEffectController___c__DisplayClass15_1_TypeInfo);
    ClassBoardEffectController___c__DisplayClass15_1___ctor(
      (ClassBoardEffectController___c__DisplayClass15_1_o *)v32,
      0LL);
    v34 = *(_QWORD *)v26;
    if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
    {
      v35 = 0LL;
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardLine__c **)v36 - 1) != System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
          goto LABEL_24;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_24:
      v37 = sub_AEB880(v26, System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo, 0LL, v33);
    }
    v38 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v26, *(_QWORD *)(v37 + 8));
    if ( !v32 )
      sub_B52A5C(v38, v38);
    *(_QWORD *)(v32 + 16) = v38;
    v45 = v32 + 16;
    sub_B52920((BattleServantConfConponent_o *)(v32 + 16), v38, v39, v40, v41, v42, v43, v44);
    v46 = sub_B52A54(ClassBoardEffectController___c__DisplayClass15_2_TypeInfo);
    ClassBoardEffectController___c__DisplayClass15_2___ctor(
      (ClassBoardEffectController___c__DisplayClass15_2_o *)v46,
      0LL);
    v47 = (System_Collections_Generic_List_T__o *)this->fields.players;
    v48 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v48,
      (Il2CppObject *)v32,
      Method_ClassBoardEffectController___c__DisplayClass15_1__RegisterConnectingLineBlankPlayer_b__1__,
      (const MethodInfo_2BC90BC *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
    v49 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
            v47,
            (System_Func_T__bool__o *)v48,
            (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    if ( !v49 )
    {
      if ( !v46 )
        sub_B52A5C(v49, v50);
      *(_QWORD *)(v46 + 16) = 0LL;
      v56 = (System_Int32_array ***)(v46 + 16);
      sub_B52920((BattleServantConfConponent_o *)(v46 + 16), 0LL, v51, v25, v52, v53, v54, v55);
      if ( !*(_QWORD *)v45 )
        sub_B52A5C(v57, v58);
      v60 = *(__int64 **)(*(_QWORD *)v45 + 160LL);
      if ( !v60 )
        sub_B52A5C(v57, v58);
      v61 = *v60;
      if ( *(_WORD *)(*v60 + 298) )
      {
        v62 = 0LL;
        v63 = (IClassBoardLineModel_c **)(*(_QWORD *)(v61 + 176) + 8LL);
        while ( *(v63 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v62;
          v63 += 2;
          if ( v62 >= *(unsigned __int16 *)(*v60 + 298) )
            goto LABEL_35;
        }
        v64 = v61 + 16LL * (*(_DWORD *)v63 + 1) + 312;
      }
      else
      {
LABEL_35:
        v64 = sub_AEB880(v60, IClassBoardLineModel_TypeInfo, 1LL, v59);
      }
      v65 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v64)(v60, *(_QWORD *)(v64 + 8));
      v68 = v65;
      if ( !v65 )
        sub_B52A5C(0LL, v66);
      v69 = *(_QWORD *)v65;
      if ( *(_WORD *)(*(_QWORD *)v65 + 298LL) )
      {
        v70 = 0LL;
        v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v71 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v70;
          v71 += 4;
          if ( v70 >= *(unsigned __int16 *)(*(_QWORD *)v65 + 298LL) )
            goto LABEL_42;
        }
        v72 = v69 + 16LL * *v71 + 312;
      }
      else
      {
LABEL_42:
        v72 = sub_AEB880(v65, IClassBoardSquareModel_TypeInfo, 0LL, v67);
      }
      v73 = (*(__int64 (__fastcall **)(__int64, _QWORD))v72)(v68, *(_QWORD *)(v72 + 8));
      if ( !*(_QWORD *)v15 )
        sub_B52A5C(v73, v74);
      v76 = *(__int64 **)(*(_QWORD *)v15 + 168LL);
      if ( !v76 )
        sub_B52A5C(v73, v74);
      v77 = *v76;
      v78 = v73;
      if ( *(_WORD *)(*v76 + 298) )
      {
        v79 = 0LL;
        v80 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v80 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v79;
          v80 += 4;
          if ( v79 >= *(unsigned __int16 *)(*v76 + 298) )
            goto LABEL_50;
        }
        v81 = v77 + 16LL * *v80 + 312;
      }
      else
      {
LABEL_50:
        v81 = sub_AEB880(v76, IClassBoardSquareModel_TypeInfo, 0LL, v75);
      }
      v82 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v81)(v76, *(_QWORD *)(v81 + 8));
      v85 = *(_QWORD *)v45;
      if ( v78 == (_DWORD)v82 )
      {
        if ( !v85 )
          sub_B52A5C(v82, v83);
        v86 = *(__int64 **)(v85 + 160);
        if ( !v86 )
          sub_B52A5C(v82, v83);
        v87 = *v86;
        if ( *(_WORD *)(*v86 + 298) )
        {
          v88 = 0LL;
          v89 = (int *)(*(_QWORD *)(v87 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v89 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v88;
            v89 += 4;
            if ( v88 >= *(unsigned __int16 *)(*v86 + 298) )
              goto LABEL_59;
          }
          v90 = v87 + 16LL * *v89 + 312;
        }
        else
        {
LABEL_59:
          v90 = sub_AEB880(v86, IClassBoardLineModel_TypeInfo, 0LL, v84);
        }
LABEL_93:
        v118 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v90)(v86, *(_QWORD *)(v90 + 8));
        *v56 = v118;
        sub_B52920((BattleServantConfConponent_o *)(v46 + 16), v118, v119, v120, v121, v122, v123, v124);
        goto LABEL_94;
      }
      if ( !v85 )
        sub_B52A5C(v82, v83);
      v91 = *(__int64 **)(v85 + 160);
      if ( !v91 )
        sub_B52A5C(v82, v83);
      v92 = *v91;
      if ( *(_WORD *)(*v91 + 298) )
      {
        v93 = 0LL;
        v94 = (int *)(*(_QWORD *)(v92 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v94 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v93;
          v94 += 4;
          if ( v93 >= *(unsigned __int16 *)(*v91 + 298) )
            goto LABEL_66;
        }
        v95 = v92 + 16LL * *v94 + 312;
      }
      else
      {
LABEL_66:
        v95 = sub_AEB880(v91, IClassBoardLineModel_TypeInfo, 0LL, v84);
      }
      v96 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v95)(v91, *(_QWORD *)(v95 + 8));
      v99 = v96;
      if ( !v96 )
        sub_B52A5C(0LL, v97);
      v100 = *(_QWORD *)v96;
      if ( *(_WORD *)(*(_QWORD *)v96 + 298LL) )
      {
        v101 = 0LL;
        v102 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v102 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v101;
          v102 += 4;
          if ( v101 >= *(unsigned __int16 *)(*(_QWORD *)v96 + 298LL) )
            goto LABEL_74;
        }
        v103 = v100 + 16LL * *v102 + 312;
      }
      else
      {
LABEL_74:
        v103 = sub_AEB880(v96, IClassBoardSquareModel_TypeInfo, 0LL, v98);
      }
      v104 = (*(__int64 (__fastcall **)(__int64, _QWORD))v103)(v99, *(_QWORD *)(v103 + 8));
      if ( !*(_QWORD *)v15 )
        sub_B52A5C(v104, v105);
      v107 = *(__int64 **)(*(_QWORD *)v15 + 168LL);
      if ( !v107 )
        sub_B52A5C(v104, v105);
      v108 = *v107;
      v109 = v104;
      if ( *(_WORD *)(*v107 + 298) )
      {
        v110 = 0LL;
        v111 = (int *)(*(_QWORD *)(v108 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v111 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v110;
          v111 += 4;
          if ( v110 >= *(unsigned __int16 *)(*v107 + 298) )
            goto LABEL_82;
        }
        v112 = v108 + 16LL * *v111 + 312;
      }
      else
      {
LABEL_82:
        v112 = sub_AEB880(v107, IClassBoardSquareModel_TypeInfo, 0LL, v106);
      }
      v113 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v112)(v107, *(_QWORD *)(v112 + 8));
      if ( v109 == (_DWORD)v113 )
      {
        if ( !*(_QWORD *)v45 )
          sub_B52A5C(v113, v114);
        v86 = *(__int64 **)(*(_QWORD *)v45 + 160LL);
        if ( !v86 )
          sub_B52A5C(v113, v114);
        v115 = *v86;
        if ( *(_WORD *)(*v86 + 298) )
        {
          v116 = 0LL;
          v117 = (IClassBoardLineModel_c **)(*(_QWORD *)(v115 + 176) + 8LL);
          while ( *(v117 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v116;
            v117 += 2;
            if ( v116 >= *(unsigned __int16 *)(*v86 + 298) )
              goto LABEL_91;
          }
          v90 = v115 + 16LL * (*(_DWORD *)v117 + 1) + 312;
        }
        else
        {
LABEL_91:
          v90 = sub_AEB880(v86, IClassBoardLineModel_TypeInfo, 1LL, v25);
        }
        goto LABEL_93;
      }
LABEL_94:
      if ( *v56 )
      {
        if ( !*(_QWORD *)v45 )
          sub_B52A5C(v113, v114);
        v125 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v45 + 144LL);
        if ( !v125 )
          sub_B52A5C(0LL, v114);
        ClassBoardEffectPlayer__SetData_bool_(
          v125,
          isLock,
          (const MethodInfo_1A47E10 *)Method_ClassBoardEffectPlayer_SetData_bool___);
        if ( !*(_QWORD *)v45 )
          sub_B52A5C(v126, v127);
        v128 = this->fields.players;
        if ( !v128 )
          sub_B52A5C(0LL, v127);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v128,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v45 + 144LL),
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
        v132 = *v56;
        if ( !*v56 )
          sub_B52A5C(v129, v130);
        v133 = *v132;
        if ( HIWORD((*v132)->m_Items[67]) )
        {
          v134 = 0LL;
          v135 = (IClassBoardSquareModel_c **)(*(_QWORD *)&v133->m_Items[37] + 8LL);
          while ( *(v135 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            ++v134;
            v135 += 2;
            if ( v134 >= HIWORD((*v132)->m_Items[67]) )
              goto LABEL_104;
          }
          v136 = (__int64)&v133->m_Items[4 * *(_DWORD *)v135 + 91];
        }
        else
        {
LABEL_104:
          v136 = sub_AEB880(*v56, IClassBoardSquareModel_TypeInfo, 5LL, v131);
        }
        if ( ((*(__int64 (__fastcall **)(System_Int32_array **, _QWORD))v136)(v132, *(_QWORD *)(v136 + 8)) & 1) != 0 )
        {
          squareViewList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.squareViewList;
          v138 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_ClassBoardSquare__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v138,
            (Il2CppObject *)v46,
            Method_ClassBoardEffectController___c__DisplayClass15_2__RegisterConnectingLineBlankPlayer_b__2__,
            (const MethodInfo_2BC90BC *)Method_System_Func_ClassBoardSquare__bool___ctor__);
          v139 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                   squareViewList,
                   (System_Func_TSource__bool__o *)v138,
                   (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v139, 0LL, 0LL) )
          {
            ClassBoardEffectController__RegisterConnectingLineBlankPlayer(
              this,
              (ClassBoardSquare_o *)v139,
              isLock,
              (const MethodInfo *)v25);
            if ( !v139 )
              sub_B52A5C(v140, v141);
            monitor = (ClassBoardEffectPlayer_o *)v139[6].monitor;
            if ( !monitor )
              sub_B52A5C(0LL, v141);
            ClassBoardEffectPlayer__SetData_bool_(
              monitor,
              isLock,
              (const MethodInfo_1A47E10 *)Method_ClassBoardEffectPlayer_SetData_bool___);
            v144 = this->fields.players;
            if ( !v144 )
              sub_B52A5C(0LL, v143);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v144,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v139[6].monitor,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
          }
        }
      }
    }
  }
  v145 = *(_QWORD *)v26;
  if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
  {
    v146 = 0LL;
    v147 = (int *)(*(_QWORD *)(v145 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v147 - 1) != System_IDisposable_TypeInfo )
    {
      ++v146;
      v147 += 4;
      if ( v146 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
        goto LABEL_119;
    }
    v148 = v145 + 16LL * *v147 + 312;
  }
  else
  {
LABEL_119:
    v148 = sub_AEB880(v26, System_IDisposable_TypeInfo, 0LL, v31);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v148)(v26, *(_QWORD *)(v148 + 8));
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

  if ( (byte_42B3836 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_ClassBoardEffectPlayer___ctor__);
    sub_B52984(&System_Action_ClassBoardEffectPlayer__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__);
    sub_B52984(&Method_ClassBoardEffectController___c__ResetPlayers_b__12_0__);
    sub_B52984(&ClassBoardEffectController___c_TypeInfo);
    byte_42B3836 = 1;
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
    _9__12_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_ClassBoardEffectPlayer__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__12_0,
      v7,
      Method_ClassBoardEffectController___c__ResetPlayers_b__12_0__,
      (const MethodInfo_2627780 *)Method_System_Action_ClassBoardEffectPlayer___ctor__);
    v8 = ClassBoardEffectController___c_TypeInfo->static_fields;
    v8->__9__12_0 = (struct System_Action_ClassBoardEffectPlayer__o *)_9__12_0;
    sub_B52920(
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
          (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__),
        (v4 = this->fields.players) == 0LL) )
  {
    sub_B52A5C(v4, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v4,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Clear__);
  this->fields.playEndCallback = 0LL;
  p_playEndCallback = &this->fields.playEndCallback;
  *((_DWORD *)p_playEndCallback - 4) = 0;
  sub_B52920((BattleServantConfConponent_o *)p_playEndCallback, 0LL, v16, v17, v18, v19, v20, v21);
}


void __fastcall ClassBoardEffectController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ClassBoardEffectController___c_StaticFields *static_fields; // x0

  if ( (byte_42AD6C3 & 1) == 0 )
  {
    sub_B52984(&ClassBoardEffectController___c_TypeInfo);
    byte_42AD6C3 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ClassBoardEffectController___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ClassBoardEffectController___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardEffectController___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, x);
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
  if ( (byte_42AD6C4 & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass15_2_o *)sub_B52984(&IClassBoardSquareModel_TypeInfo);
    byte_42AD6C4 = 1;
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
    p_method = sub_AEB880(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0LL, v3);
  }
  this = (ClassBoardEffectController___c__DisplayClass15_2_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                 SquareModel_k__BackingField,
                                                                 *(_QWORD *)(p_method + 8));
  connectSquareModel = v5->fields.connectSquareModel;
  if ( !connectSquareModel )
LABEL_19:
    sub_B52A5C(this, x);
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
    v17 = sub_AEB880(connectSquareModel, IClassBoardSquareModel_TypeInfo, 0LL, v11);
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
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, x);
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
  if ( (byte_42AD6C5 & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass16_1_o *)sub_B52984(&IClassBoardSquareModel_TypeInfo);
    byte_42AD6C5 = 1;
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
    p_method = sub_AEB880(model, IClassBoardSquareModel_TypeInfo, 0LL, v3);
  }
  this = (ClassBoardEffectController___c__DisplayClass16_1_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                 model,
                                                                 *(_QWORD *)(p_method + 8));
  square = v5->fields.square;
  if ( !square || (SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField) == 0LL )
LABEL_19:
    sub_B52A5C(this, model);
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
    v17 = sub_AEB880(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0LL, v10);
  }
  return v14 == (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v17)(
                  SquareModel_k__BackingField,
                  *(_QWORD *)(v17 + 8));
}