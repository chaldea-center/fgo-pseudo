void __fastcall ClassBoardEffectController___ctor(
        ClassBoardEffectController_o *this,
        System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squares,
        System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *lines,
        MapCamera_o *camera,
        ClassBoardBackground_o *bg,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x24
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
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  StonePurchaseNotificationMenu_DialogOpenQueue_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  __int64 v52; // x1
  __int64 v53; // x3
  struct System_Action_o *callback; // x20
  System_Action_c *klass; // x8
  unsigned __int64 v56; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 v58; // x0

  if ( (byte_42E9C14 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_First_ClassBoardSquare___, (_DWORD)squares, (_DWORD)lines, camera);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo, v17, v18, v19);
    byte_42E9C14 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__);
  this->fields.players = (struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *)v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.players,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.squareViewList = squares;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)squares,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.lineViewList = lines;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.lineViewList,
    (System_Int32_array **)lines,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.mapCamera = camera;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mapCamera,
    (System_Int32_array **)camera,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.bgModel = bg;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bgModel,
    (System_Int32_array **)bg,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)squares,
                                                    (const MethodInfo_1CAADA0 *)Method_System_Linq_Enumerable_First_ClassBoardSquare___);
  if ( !StonePurchaseNotificationMenu_DialogOpenQueue
    || (callback = StonePurchaseNotificationMenu_DialogOpenQueue[3].fields.callback) == 0LL )
  {
    sub_B5D69C(StonePurchaseNotificationMenu_DialogOpenQueue, v52);
  }
  klass = callback->klass;
  if ( *(_WORD *)&callback->klass->_2.bitflags1 )
  {
    v56 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v56;
      p_offset += 2;
      if ( v56 >= *(unsigned __int16 *)&callback->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v58 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_9:
    v58 = sub_AF54C0(
            StonePurchaseNotificationMenu_DialogOpenQueue[3].fields.callback,
            IClassBoardSquareModel_TypeInfo,
            1LL,
            v53);
  }
  this->fields.baseId = (*(__int64 (__fastcall **)(struct System_Action_o *, _QWORD))v58)(
                          callback,
                          *(_QWORD *)(v58 + 8));
}


void __fastcall ClassBoardEffectController__CheckPlayEnd(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ClassBoardEffectController_o *v4; // x19
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x9
  int v6; // w8

  v4 = this;
  if ( (byte_42E9C19 & 1) == 0 )
  {
    this = (ClassBoardEffectController_o *)sub_B5D5C4(
                                             &Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__,
                                             (_DWORD)method,
                                             v2,
                                             v3);
    byte_42E9C19 = 1;
  }
  players = v4->fields.players;
  v6 = v4->fields.playEndCount + 1;
  v4->fields.playEndCount = v6;
  if ( !players )
    goto LABEL_7;
  if ( v6 < players->fields._size )
    return;
  this = (ClassBoardEffectController_o *)v4->fields.playEndCallback;
  if ( !this )
LABEL_7:
    sub_B5D69C(this, method);
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  MapCamera_o *mapCamera; // x23
  UnityEngine_Transform_o *SafeCameraDestination; // x0
  __int64 v22; // x1
  UnityEngine_Transform_o *v23; // x23
  float v24; // s0
  float v25; // s1
  float v26; // s2
  float v27; // s11
  float v28; // s12
  float v29; // s13
  float v30; // s14
  float v31; // s15
  float v32; // s0
  float v33; // s3
  System_Nullable_Vector3__o v34; // [xsp+0h] [xbp-80h] BYREF
  float v35; // [xsp+58h] [xbp-28h]
  float v36; // [xsp+5Ch] [xbp-24h]
  System_Nullable_float__o v37; // 0:x3.8
  System_Nullable_Vector3__o v38; // 0:x0.16
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s3.4,4:s4.4,8:s5.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_42E9C1D & 1) == 0 )
  {
    sub_B5D5C4(&MapCameraViewAdjusterUtil_TypeInfo, maxDistance, ease, callback);
    sub_B5D5C4(&Method_System_Nullable_Vector3___ctor__, v17, v18, v19);
    byte_42E9C1D = 1;
  }
  mapCamera = this->fields.mapCamera;
  *(_QWORD *)&v38.fields.value.fields.x = &v34;
  v39.fields.x = x;
  v39.fields.y = y;
  *(_QWORD *)&v38.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  v39.fields.z = z;
  *(_QWORD *)&v34.fields.value.fields.x = 0LL;
  *(_QWORD *)&v34.fields.value.fields.z = 0LL;
  System_Nullable_Vector3____ctor(v38, v39, *(const MethodInfo_234ED3C **)&ease);
  if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  }
  v37 = 0LL;
  SafeCameraDestination = (UnityEngine_Transform_o *)MapCameraViewAdjusterUtil__GetSafeCameraDestination(
                                                       mapCamera,
                                                       v34,
                                                       v37,
                                                       0LL);
  if ( !this->fields.mapCamera )
    goto LABEL_15;
  v23 = SafeCameraDestination;
  SafeCameraDestination = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.mapCamera, 0LL);
  if ( !SafeCameraDestination )
    goto LABEL_15;
  *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_localPosition(SafeCameraDestination, 0LL);
  if ( !v23 )
    goto LABEL_15;
  v35 = secMin;
  v36 = secMax;
  SafeCameraDestination = (UnityEngine_Transform_o *)this->fields.mapCamera;
  if ( !SafeCameraDestination )
    goto LABEL_15;
  v27 = *(float *)&v23->fields.m_CachedPtr;
  v28 = *((float *)&v23->fields + 1);
  v29 = v24;
  v30 = v25;
  v31 = v26;
  SafeCameraDestination = UnityEngine_Component__get_transform((UnityEngine_Component_o *)SafeCameraDestination, 0LL);
  if ( !SafeCameraDestination )
    goto LABEL_15;
  localPosition = UnityEngine_Transform__get_localPosition(SafeCameraDestination, 0LL);
  v42.fields.z = localPosition.fields.z;
  localPosition.fields.x = v29;
  localPosition.fields.y = v30;
  localPosition.fields.z = v31;
  v42.fields.x = v27;
  v42.fields.y = v28;
  v32 = UnityEngine_Vector3__Distance(localPosition, v42, 0LL) / (float)maxDistance;
  v33 = 0.0;
  if ( v32 != 0.0 )
    v33 = UnityEngine_Mathf__Clamp(v32, v35, v36, 0LL);
  SafeCameraDestination = (UnityEngine_Transform_o *)this->fields.mapCamera;
  if ( !SafeCameraDestination )
LABEL_15:
    sub_B5D69C(SafeCameraDestination, v22);
  v41.fields.x = x;
  v41.fields.y = y;
  v41.fields.z = z;
  MapCamera__StartAutoMove((MapCamera_o *)SafeCameraDestination, v41, v33, ease, callback, 0LL);
}


void __fastcall ClassBoardEffectController__PlayClassBoardStartEffect(
        ClassBoardEffectController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct System_Action_o **p_playEndCallback; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0
  __int64 v29; // x1
  struct ClassBoardBackground_o *bgModel; // x8
  struct ClassBoardBackground_o *v31; // x8
  struct ClassBoardEffectPlayer_o *v32; // x21
  System_Action_o *v33; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct ClassBoardBackground_o *v40; // x8

  if ( (byte_42E9C16 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ClassBoardEffectController_PlayNext__, v6, v7, v8);
    sub_B5D5C4(&Method_ClassBoardEffectPlayer_SetData_int___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__, v18, v19, v20);
    byte_42E9C16 = 1;
  }
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)callback);
  this->fields.playEndCallback = callback;
  p_playEndCallback = &this->fields.playEndCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.playEndCallback,
    (System_Int32_array **)callback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  bgModel = this->fields.bgModel;
  if ( !bgModel )
    goto LABEL_15;
  startMainEffectPlayer = bgModel->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    goto LABEL_15;
  ClassBoardEffectPlayer__SetData_int_(
    startMainEffectPlayer,
    this->fields.baseId,
    (const MethodInfo_1ADCF38 *)Method_ClassBoardEffectPlayer_SetData_int___);
  v31 = this->fields.bgModel;
  if ( !v31 )
    goto LABEL_15;
  v32 = v31->fields.startMainEffectPlayer;
  v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_ClassBoardEffectController_PlayNext__, 0LL);
  if ( !v32 )
    goto LABEL_15;
  v32->fields.endCallback = v33;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v32->fields.endCallback,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = this->fields.bgModel;
  if ( !v40 )
    goto LABEL_15;
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !startMainEffectPlayer )
    goto LABEL_15;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)startMainEffectPlayer,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v40->fields.startMainEffectPlayer,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !startMainEffectPlayer )
    goto LABEL_15;
  if ( SLODWORD(startMainEffectPlayer->fields.playCallback) >= 1 )
  {
    startMainEffectPlayer = (ClassBoardEffectPlayer_o *)System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)startMainEffectPlayer,
                                                          (const MethodInfo_1CAADA0 *)Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
    if ( startMainEffectPlayer )
    {
      ClassBoardEffectPlayer__Play(startMainEffectPlayer, 0LL);
      return;
    }
LABEL_15:
    sub_B5D69C(startMainEffectPlayer, v29);
  }
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)*p_playEndCallback;
  if ( !*p_playEndCallback )
    goto LABEL_15;
  System_Action__Invoke((System_Action_o *)startMainEffectPlayer, 0LL);
}


void __fastcall ClassBoardEffectController__PlayNext(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ClassBoardEffectController_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x21
  int v9; // w20
  int size; // w8

  v4 = this;
  if ( (byte_42E9C1A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__, (_DWORD)method, v2, v3);
    this = (ClassBoardEffectController_o *)sub_B5D5C4(
                                             &Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Item__,
                                             v5,
                                             v6,
                                             v7);
    byte_42E9C1A = 1;
  }
  players = v4->fields.players;
  v9 = v4->fields.playEndCount + 1;
  v4->fields.playEndCount = v9;
  if ( !players )
    goto LABEL_11;
  size = players->fields._size;
  if ( v9 < size )
  {
    if ( size <= (unsigned int)v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (ClassBoardEffectController_o *)players->fields._items->m_Items[v9];
    if ( this )
    {
      ClassBoardEffectPlayer__Play((ClassBoardEffectPlayer_o *)this, 0LL);
      return;
    }
LABEL_11:
    sub_B5D69C(this, method);
  }
  this = (ClassBoardEffectController_o *)v4->fields.playEndCallback;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x0
  __int64 v35; // x1
  bool v36; // w2
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x2
  Il2CppObject *current; // x20
  System_Action_o *v40; // x21
  __int64 v41; // x0
  __int64 v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E9C15 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)releaseSquare, (_DWORD)callback, method);
    sub_B5D5C4(&Method_ClassBoardEffectController_CheckPlayEnd__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__get_Current__, v16, v17, v18);
    sub_B5D5C4(&IClassBoardLockModel_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__, v25, v26, v27);
    byte_42E9C15 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)releaseSquare);
  this->fields.playEndCallback = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.playEndCallback,
    (System_Int32_array **)callback,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  if ( !releaseSquare
    || (v36 = sub_B5D684(releaseSquare->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo) != 0,
        ClassBoardEffectController__RegisterConnectingLineBlankPlayer(this, releaseSquare, v36, v37),
        ClassBoardEffectController__RegisterConnectedSquareEnablePlayer(this, releaseSquare, v38),
        (players = this->fields.players) == 0LL)
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)players,
          (EventMissionProgressRequest_Argument_ProgressData_o *)releaseSquare->fields.releaseEffectPlayer,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__),
        (players = this->fields.players) == 0LL) )
  {
    sub_B5D69C(players, v35);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v49,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)players,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v49,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__) )
  {
    current = v49.fields.current;
    v40 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v40, (Il2CppObject *)this, Method_ClassBoardEffectController_CheckPlayEnd__, 0LL);
    if ( !current )
      sub_B5D69C(v41, v42);
    current[2].klass = (Il2CppClass *)v40;
    sub_B5D560((BattleServantConfConponent_o *)&current[2], (System_Int32_array **)v40, v43, v44, v45, v46, v47, v48);
    ClassBoardEffectPlayer__Play((ClassBoardEffectPlayer_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v49,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectController__PlaySelectMoveCamera(
        ClassBoardEffectController_o *this,
        UnityEngine_Vector3_o pos,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x3
  const MethodInfo *v5; // x4
  float z; // s8
  float y; // s9
  float x; // s10
  BalanceConfig_c *v11; // x0
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_42E9C17 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)callback, (_DWORD)method, v4);
    byte_42E9C17 = 1;
  }
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  v12.fields.y = y;
  v12.fields.z = z;
  v12.fields.x = x;
  ClassBoardEffectController__MoveCamera(
    this,
    v12,
    v11->static_fields->ClassBoardCameraSelectMoveMaxDistance,
    v11->static_fields->ClassBoardCameraSelectSecMin,
    v11->static_fields->ClassBoardCameraSelectSecMax,
    v11->static_fields->ClassBoardCameraSelectEasingType,
    callback,
    v5);
}


void __fastcall ClassBoardEffectController__RegisterConnectedSquareEnablePlayer(
        ClassBoardEffectController_o *this,
        ClassBoardSquare_o *releaseSquare,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  __int64 v72; // x22
  __int64 v73; // x0
  __int64 v74; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  __int64 v81; // x21
  System_Collections_Generic_List_T__o *players; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v83; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v84; // x19
  __int64 v85; // x3
  __int64 *v86; // x19
  __int64 v87; // x8
  unsigned __int64 v88; // x10
  IClassBoardSquareModel_c **v89; // x11
  __int64 v90; // x0
  __int64 v91; // x3
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squareViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__c *klass; // x8
  unsigned __int64 v94; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v97; // x1
  __int64 v98; // x3
  __int64 v99; // x19
  AcquireFlag_c **v100; // x24
  __int64 v101; // x8
  unsigned __int64 v102; // x10
  int *v103; // x11
  __int64 v104; // x0
  __int64 v105; // x3
  __int64 v106; // x23
  __int64 v107; // x3
  __int64 v108; // x8
  unsigned __int64 v109; // x10
  int *v110; // x11
  __int64 v111; // x0
  System_Int32_array **v112; // x0
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  __int64 v119; // x22
  AcquireFlag_c **v120; // x28
  System_Collections_Generic_List_T__o *v121; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v122; // x25
  bool v123; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v124; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v125; // x25
  WarBoardData_SquareRangeSearch_o *v126; // x0
  WarBoardData_SquareRangeSearch_o *v127; // x23
  WarBoardData_SquareRangeSearch_c *v128; // x8
  unsigned __int64 v129; // x10
  IClassBoardSquareModel_c **v130; // x11
  __int64 v131; // x0
  int v132; // w0
  AcquireFlag_c *v133; // x8
  System_Enum_o *v134; // x23
  AcquireFlag_c *v135; // x0
  System_Enum_o *v136; // x0
  _BOOL8 HasFlag; // x0
  __int64 v138; // x1
  ClassBoardEffectPlayer_o *v139; // x23
  bool v140; // w1
  __int64 v141; // x0
  __int64 v142; // x1
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v143; // x0
  __int64 v144; // x8
  unsigned __int64 v145; // x10
  int *v146; // x11
  __int64 v147; // x0
  int v148; // [xsp+8h] [xbp-68h] BYREF
  int v149; // [xsp+Ch] [xbp-64h] BYREF
  __int64 v150; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v151; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42E9C1C & 1) == 0 )
  {
    sub_B5D5C4(&AcquireFlag_TypeInfo, (_DWORD)releaseSquare, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BasicHelper_Any_ClassBoardEffectPlayer___, v6, v7, v8);
    sub_B5D5C4(&Method_ClassBoardEffectPlayer_SetData_bool___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_IClassBoardSquareModel__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_ClassBoardEffectPlayer__bool___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&IClassBoardLockModel_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__, v51, v52, v53);
    sub_B5D5C4(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v54, v55, v56);
    sub_B5D5C4(
      &Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectedSquareEnablePlayer_b__0__,
      v57,
      v58,
      v59);
    sub_B5D5C4(&ClassBoardEffectController___c__DisplayClass16_0_TypeInfo, v60, v61, v62);
    sub_B5D5C4(
      &Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__1__,
      v63,
      v64,
      v65);
    sub_B5D5C4(
      &Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__2__,
      v66,
      v67,
      v68);
    sub_B5D5C4(&ClassBoardEffectController___c__DisplayClass16_1_TypeInfo, v69, v70, v71);
    byte_42E9C1C = 1;
  }
  v151 = 0LL;
  HIDWORD(v150) = 0;
  v72 = sub_B5D694(ClassBoardEffectController___c__DisplayClass16_0_TypeInfo);
  ClassBoardEffectController___c__DisplayClass16_0___ctor(
    (ClassBoardEffectController___c__DisplayClass16_0_o *)v72,
    0LL);
  if ( !v72 )
    goto LABEL_66;
  *(_QWORD *)(v72 + 16) = releaseSquare;
  v81 = v72 + 16;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v72 + 16),
    (System_Int32_array **)releaseSquare,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v83 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v83,
    (Il2CppObject *)v72,
    Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectedSquareEnablePlayer_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
  if ( BasicHelper__Any_WarBoardData_SquareRangeSearch_(
         players,
         (System_Func_T__bool__o *)v83,
         (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
  {
    return;
  }
  v84 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v84,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  v151 = v84;
  if ( !*(_QWORD *)v81 )
    goto LABEL_66;
  v86 = *(__int64 **)(*(_QWORD *)v81 + 168LL);
  if ( !v86 )
    goto LABEL_66;
  v87 = *v86;
  if ( *(_WORD *)(*v86 + 298) )
  {
    v88 = 0LL;
    v89 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v87 + 176) + 8LL);
    while ( *(v89 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v88;
      v89 += 2;
      if ( v88 >= *(unsigned __int16 *)(*v86 + 298) )
        goto LABEL_11;
    }
    v90 = v87 + 16LL * (*(_DWORD *)v89 + 15) + 312;
  }
  else
  {
LABEL_11:
    v90 = sub_AF54C0(v86, IClassBoardSquareModel_TypeInfo, 15LL, v85);
  }
  v73 = (*(__int64 (__fastcall **)(__int64 *, System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **, _QWORD))v90)(
          v86,
          &v151,
          *(_QWORD *)(v90 + 8));
  if ( v151 && v151->fields._size >= 1 )
  {
    squareViewList = this->fields.squareViewList;
    if ( squareViewList )
    {
      klass = squareViewList->klass;
      if ( *(_WORD *)&squareViewList->klass->_2.bitflags1 )
      {
        v94 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_ClassBoardSquare__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo )
        {
          ++v94;
          p_offset += 4;
          if ( v94 >= *(unsigned __int16 *)&squareViewList->klass->_2.bitflags1 )
            goto LABEL_20;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_20:
        p_method = sub_AF54C0(
                     this->fields.squareViewList,
                     System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo,
                     0LL,
                     v91);
      }
      v99 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *, _QWORD))p_method)(
              squareViewList,
              *(_QWORD *)(p_method + 8));
      if ( !v99 )
        sub_B5D69C(0LL, v97);
      v100 = &AcquireFlag_TypeInfo;
      while ( 1 )
      {
        v101 = *(_QWORD *)v99;
        if ( *(_WORD *)(*(_QWORD *)v99 + 298LL) )
        {
          v102 = 0LL;
          v103 = (int *)(*(_QWORD *)(v101 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v103 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v102;
            v103 += 4;
            if ( v102 >= *(unsigned __int16 *)(*(_QWORD *)v99 + 298LL) )
              goto LABEL_28;
          }
          v104 = v101 + 16LL * *v103 + 312;
        }
        else
        {
LABEL_28:
          v104 = sub_AF54C0(v99, System_Collections_IEnumerator_TypeInfo, 0LL, v98);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v104)(v99, *(_QWORD *)(v104 + 8)) & 1) == 0 )
          break;
        v106 = sub_B5D694(ClassBoardEffectController___c__DisplayClass16_1_TypeInfo);
        ClassBoardEffectController___c__DisplayClass16_1___ctor(
          (ClassBoardEffectController___c__DisplayClass16_1_o *)v106,
          0LL);
        v108 = *(_QWORD *)v99;
        if ( *(_WORD *)(*(_QWORD *)v99 + 298LL) )
        {
          v109 = 0LL;
          v110 = (int *)(*(_QWORD *)(v108 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_ClassBoardSquare__c **)v110 - 1) != System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo )
          {
            ++v109;
            v110 += 4;
            if ( v109 >= *(unsigned __int16 *)(*(_QWORD *)v99 + 298LL) )
              goto LABEL_35;
          }
          v111 = v108 + 16LL * *v110 + 312;
        }
        else
        {
LABEL_35:
          v111 = sub_AF54C0(v99, System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo, 0LL, v107);
        }
        v112 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v111)(v99, *(_QWORD *)(v111 + 8));
        if ( !v106 )
          sub_B5D69C(v112, v112);
        *(_QWORD *)(v106 + 16) = v112;
        v119 = v106 + 16;
        sub_B5D560((BattleServantConfConponent_o *)(v106 + 16), v112, v113, v114, v115, v116, v117, v118);
        v120 = v100;
        v121 = (System_Collections_Generic_List_T__o *)this->fields.players;
        v122 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v122,
          (Il2CppObject *)v106,
          Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__1__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
        v123 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                 v121,
                 (System_Func_T__bool__o *)v122,
                 (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
        v100 = v120;
        if ( !v123 )
        {
          v124 = (System_Collections_Generic_IEnumerable_TSource__o *)v151;
          v125 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_IClassBoardSquareModel__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v125,
            (Il2CppObject *)v106,
            Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__2__,
            (const MethodInfo_2C2ECD0 *)Method_System_Func_IClassBoardSquareModel__bool___ctor__);
          v126 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                   v124,
                   (System_Func_TSource__bool__o *)v125,
                   (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
          v127 = v126;
          v100 = v120;
          if ( v126 )
          {
            v128 = v126->klass;
            if ( *(_WORD *)&v126->klass->_2.bitflags1 )
            {
              v129 = 0LL;
              v130 = (IClassBoardSquareModel_c **)&v128->_1.interfaceOffsets->offset;
              while ( *(v130 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                ++v129;
                v130 += 2;
                if ( v129 >= *(unsigned __int16 *)&v126->klass->_2.bitflags1 )
                  goto LABEL_44;
              }
              v131 = (__int64)(&v128[1]._1.methods + 2 * *(_DWORD *)v130);
            }
            else
            {
LABEL_44:
              v131 = sub_AF54C0(v126, IClassBoardSquareModel_TypeInfo, 13LL, v98);
            }
            v132 = (*(__int64 (__fastcall **)(WarBoardData_SquareRangeSearch_o *, _QWORD, _QWORD))v131)(
                     v127,
                     0LL,
                     *(_QWORD *)(v131 + 8));
            v133 = *v120;
            v149 = v132;
            v134 = (System_Enum_o *)j_il2cpp_value_box_0(v133, &v149);
            v135 = *v120;
            v148 = 1;
            v136 = (System_Enum_o *)j_il2cpp_value_box_0(v135, &v148);
            if ( !v134 )
              sub_B5D69C(v136, v136);
            HasFlag = System_Enum__HasFlag(v134, v136, 0LL);
            if ( !HasFlag )
            {
              if ( !*(_QWORD *)v119 )
                sub_B5D69C(HasFlag, v138);
              if ( !*(_QWORD *)v81 )
                sub_B5D69C(HasFlag, v138);
              v139 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v119 + 152LL);
              if ( !v139 )
                sub_B5D69C(HasFlag, v138);
              v140 = sub_B5D684(*(_QWORD *)(*(_QWORD *)v81 + 168LL), IClassBoardLockModel_TypeInfo) != 0;
              ClassBoardEffectPlayer__SetData_bool_(
                v139,
                v140,
                (const MethodInfo_1ADCED8 *)Method_ClassBoardEffectPlayer_SetData_bool___);
              if ( !*(_QWORD *)v119 )
                sub_B5D69C(v141, v142);
              v143 = this->fields.players;
              if ( !v143 )
                sub_B5D69C(0LL, v142);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v143,
                *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v119 + 152LL),
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
            }
          }
        }
      }
      v150 = 0x10000010ELL;
      v144 = *(_QWORD *)v99;
      if ( *(_WORD *)(*(_QWORD *)v99 + 298LL) )
      {
        v145 = 0LL;
        v146 = (int *)(*(_QWORD *)(v144 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v146 - 1) != System_IDisposable_TypeInfo )
        {
          ++v145;
          v146 += 4;
          if ( v145 >= *(unsigned __int16 *)(*(_QWORD *)v99 + 298LL) )
            goto LABEL_59;
        }
        v147 = v144 + 16LL * *v146 + 312;
      }
      else
      {
LABEL_59:
        v147 = sub_AF54C0(v99, System_IDisposable_TypeInfo, 0LL, v105);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v147)(v99, *(_QWORD *)(v147 + 8));
      if ( (_DWORD)v150 == 270 )
        v150 = 270LL;
      return;
    }
LABEL_66:
    sub_B5D69C(v73, v74);
  }
}


void __fastcall ClassBoardEffectController__RegisterConnectingLineBlankPlayer(
        ClassBoardEffectController_o *this,
        ClassBoardSquare_o *releaseSquare,
        bool isLock,
        const MethodInfo *method)
{
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  int v33; // w1
  char v34; // w2
  __int64 v35; // x3
  int v36; // w1
  char v37; // w2
  __int64 v38; // x3
  int v39; // w1
  char v40; // w2
  __int64 v41; // x3
  int v42; // w1
  char v43; // w2
  __int64 v44; // x3
  int v45; // w1
  char v46; // w2
  __int64 v47; // x3
  int v48; // w1
  char v49; // w2
  __int64 v50; // x3
  int v51; // w1
  char v52; // w2
  __int64 v53; // x3
  int v54; // w1
  char v55; // w2
  __int64 v56; // x3
  int v57; // w1
  char v58; // w2
  __int64 v59; // x3
  int v60; // w1
  char v61; // w2
  __int64 v62; // x3
  int v63; // w1
  char v64; // w2
  __int64 v65; // x3
  __int64 v66; // x23
  _BOOL8 v67; // x0
  __int64 v68; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x22
  System_Collections_Generic_List_T__o *players; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v77; // x24
  __int64 v78; // x3
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *lineViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__c *klass; // x8
  unsigned __int64 v81; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v84; // x1
  System_String_array **v85; // x3
  __int64 v86; // x19
  __int64 v87; // x8
  unsigned __int64 v88; // x10
  int *v89; // x11
  __int64 v90; // x0
  __int64 v91; // x3
  __int64 v92; // x25
  __int64 v93; // x3
  __int64 v94; // x8
  unsigned __int64 v95; // x10
  int *v96; // x11
  __int64 v97; // x0
  System_Int32_array **v98; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  __int64 v105; // x24
  __int64 v106; // x23
  System_Collections_Generic_List_T__o *v107; // x26
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v108; // x27
  _BOOL8 v109; // x0
  __int64 v110; // x1
  System_String_array **v111; // x2
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_Int32_array ***v116; // x25
  __int64 v117; // x0
  __int64 v118; // x1
  __int64 v119; // x3
  __int64 *v120; // x26
  __int64 v121; // x8
  unsigned __int64 v122; // x10
  IClassBoardLineModel_c **v123; // x11
  __int64 v124; // x0
  __int64 v125; // x0
  __int64 v126; // x1
  __int64 v127; // x3
  __int64 v128; // x26
  __int64 v129; // x8
  unsigned __int64 v130; // x10
  int *v131; // x11
  __int64 v132; // x0
  __int64 v133; // x0
  __int64 v134; // x1
  __int64 v135; // x3
  __int64 *v136; // x27
  __int64 v137; // x8
  int v138; // w26
  unsigned __int64 v139; // x10
  int *v140; // x11
  __int64 v141; // x0
  __int64 v142; // x0
  __int64 v143; // x1
  __int64 v144; // x3
  __int64 v145; // x8
  __int64 *v146; // x26
  __int64 v147; // x8
  unsigned __int64 v148; // x10
  int *v149; // x11
  __int64 v150; // x0
  __int64 *v151; // x26
  __int64 v152; // x8
  unsigned __int64 v153; // x10
  int *v154; // x11
  __int64 v155; // x0
  __int64 v156; // x0
  __int64 v157; // x1
  __int64 v158; // x3
  __int64 v159; // x26
  __int64 v160; // x8
  unsigned __int64 v161; // x10
  int *v162; // x11
  __int64 v163; // x0
  __int64 v164; // x0
  __int64 v165; // x1
  __int64 v166; // x3
  __int64 *v167; // x27
  __int64 v168; // x8
  int v169; // w26
  unsigned __int64 v170; // x10
  int *v171; // x11
  __int64 v172; // x0
  __int64 v173; // x0
  __int64 v174; // x1
  __int64 v175; // x8
  unsigned __int64 v176; // x10
  IClassBoardLineModel_c **v177; // x11
  System_Int32_array **v178; // x0
  System_String_array **v179; // x2
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  ClassBoardEffectPlayer_o *v185; // x0
  __int64 v186; // x0
  __int64 v187; // x1
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v188; // x0
  __int64 v189; // x0
  __int64 v190; // x1
  __int64 v191; // x3
  System_Int32_array **v192; // x24
  System_Int32_array *v193; // x8
  unsigned __int64 v194; // x10
  IClassBoardSquareModel_c **v195; // x11
  __int64 v196; // x0
  System_Collections_Generic_IEnumerable_TSource__o *squareViewList; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v198; // x25
  WarBoardData_SquareRangeSearch_o *v199; // x23
  __int64 v200; // x0
  __int64 v201; // x1
  ClassBoardEffectPlayer_o *monitor; // x0
  __int64 v203; // x1
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v204; // x0
  __int64 v205; // x8
  unsigned __int64 v206; // x10
  int *v207; // x11
  __int64 v208; // x0

  if ( (byte_42E9C1B & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_ClassBoardEffectPlayer___, (_DWORD)releaseSquare, isLock, method);
    sub_B5D5C4(&Method_ClassBoardEffectPlayer_SetData_bool___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_ClassBoardEffectPlayer__bool___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_ClassBoardSquare__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Func_ClassBoardSquare__bool__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&IClassBoardLineModel_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v42, v43, v44);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v45, v46, v47);
    sub_B5D5C4(
      &Method_ClassBoardEffectController___c__DisplayClass15_0__RegisterConnectingLineBlankPlayer_b__0__,
      v48,
      v49,
      v50);
    sub_B5D5C4(&ClassBoardEffectController___c__DisplayClass15_0_TypeInfo, v51, v52, v53);
    sub_B5D5C4(
      &Method_ClassBoardEffectController___c__DisplayClass15_1__RegisterConnectingLineBlankPlayer_b__1__,
      v54,
      v55,
      v56);
    sub_B5D5C4(&ClassBoardEffectController___c__DisplayClass15_1_TypeInfo, v57, v58, v59);
    sub_B5D5C4(
      &Method_ClassBoardEffectController___c__DisplayClass15_2__RegisterConnectingLineBlankPlayer_b__2__,
      v60,
      v61,
      v62);
    sub_B5D5C4(&ClassBoardEffectController___c__DisplayClass15_2_TypeInfo, v63, v64, v65);
    byte_42E9C1B = 1;
  }
  v66 = sub_B5D694(ClassBoardEffectController___c__DisplayClass15_0_TypeInfo);
  ClassBoardEffectController___c__DisplayClass15_0___ctor(
    (ClassBoardEffectController___c__DisplayClass15_0_o *)v66,
    0LL);
  if ( !v66 )
    goto LABEL_144;
  *(_QWORD *)(v66 + 16) = releaseSquare;
  v75 = v66 + 16;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v66 + 16),
    (System_Int32_array **)releaseSquare,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v77 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v77,
    (Il2CppObject *)v66,
    Method_ClassBoardEffectController___c__DisplayClass15_0__RegisterConnectingLineBlankPlayer_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
  v67 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
          players,
          (System_Func_T__bool__o *)v77,
          (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
  if ( v67 )
    return;
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList )
LABEL_144:
    sub_B5D69C(v67, v68);
  klass = lineViewList->klass;
  if ( *(_WORD *)&lineViewList->klass->_2.bitflags1 )
  {
    v81 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ClassBoardLine__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo )
    {
      ++v81;
      p_offset += 4;
      if ( v81 >= *(unsigned __int16 *)&lineViewList->klass->_2.bitflags1 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_AF54C0(
                 this->fields.lineViewList,
                 System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo,
                 0LL,
                 v78);
  }
  v86 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *, _QWORD))p_method)(
          lineViewList,
          *(_QWORD *)(p_method + 8));
  if ( !v86 )
    sub_B5D69C(0LL, v84);
  while ( 1 )
  {
    v87 = *(_QWORD *)v86;
    if ( *(_WORD *)(*(_QWORD *)v86 + 298LL) )
    {
      v88 = 0LL;
      v89 = (int *)(*(_QWORD *)(v87 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v89 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v88;
        v89 += 4;
        if ( v88 >= *(unsigned __int16 *)(*(_QWORD *)v86 + 298LL) )
          goto LABEL_17;
      }
      v90 = v87 + 16LL * *v89 + 312;
    }
    else
    {
LABEL_17:
      v90 = sub_AF54C0(v86, System_Collections_IEnumerator_TypeInfo, 0LL, v85);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v90)(v86, *(_QWORD *)(v90 + 8)) & 1) == 0 )
      break;
    v92 = sub_B5D694(ClassBoardEffectController___c__DisplayClass15_1_TypeInfo);
    ClassBoardEffectController___c__DisplayClass15_1___ctor(
      (ClassBoardEffectController___c__DisplayClass15_1_o *)v92,
      0LL);
    v94 = *(_QWORD *)v86;
    if ( *(_WORD *)(*(_QWORD *)v86 + 298LL) )
    {
      v95 = 0LL;
      v96 = (int *)(*(_QWORD *)(v94 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardLine__c **)v96 - 1) != System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo )
      {
        ++v95;
        v96 += 4;
        if ( v95 >= *(unsigned __int16 *)(*(_QWORD *)v86 + 298LL) )
          goto LABEL_24;
      }
      v97 = v94 + 16LL * *v96 + 312;
    }
    else
    {
LABEL_24:
      v97 = sub_AF54C0(v86, System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo, 0LL, v93);
    }
    v98 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v97)(v86, *(_QWORD *)(v97 + 8));
    if ( !v92 )
      sub_B5D69C(v98, v98);
    *(_QWORD *)(v92 + 16) = v98;
    v105 = v92 + 16;
    sub_B5D560((BattleServantConfConponent_o *)(v92 + 16), v98, v99, v100, v101, v102, v103, v104);
    v106 = sub_B5D694(ClassBoardEffectController___c__DisplayClass15_2_TypeInfo);
    ClassBoardEffectController___c__DisplayClass15_2___ctor(
      (ClassBoardEffectController___c__DisplayClass15_2_o *)v106,
      0LL);
    v107 = (System_Collections_Generic_List_T__o *)this->fields.players;
    v108 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v108,
      (Il2CppObject *)v92,
      Method_ClassBoardEffectController___c__DisplayClass15_1__RegisterConnectingLineBlankPlayer_b__1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_ClassBoardEffectPlayer__bool___ctor__);
    v109 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
             v107,
             (System_Func_T__bool__o *)v108,
             (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    if ( !v109 )
    {
      if ( !v106 )
        sub_B5D69C(v109, v110);
      *(_QWORD *)(v106 + 16) = 0LL;
      v116 = (System_Int32_array ***)(v106 + 16);
      sub_B5D560((BattleServantConfConponent_o *)(v106 + 16), 0LL, v111, v85, v112, v113, v114, v115);
      if ( !*(_QWORD *)v105 )
        sub_B5D69C(v117, v118);
      v120 = *(__int64 **)(*(_QWORD *)v105 + 160LL);
      if ( !v120 )
        sub_B5D69C(v117, v118);
      v121 = *v120;
      if ( *(_WORD *)(*v120 + 298) )
      {
        v122 = 0LL;
        v123 = (IClassBoardLineModel_c **)(*(_QWORD *)(v121 + 176) + 8LL);
        while ( *(v123 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v122;
          v123 += 2;
          if ( v122 >= *(unsigned __int16 *)(*v120 + 298) )
            goto LABEL_35;
        }
        v124 = v121 + 16LL * (*(_DWORD *)v123 + 1) + 312;
      }
      else
      {
LABEL_35:
        v124 = sub_AF54C0(v120, IClassBoardLineModel_TypeInfo, 1LL, v119);
      }
      v125 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v124)(v120, *(_QWORD *)(v124 + 8));
      v128 = v125;
      if ( !v125 )
        sub_B5D69C(0LL, v126);
      v129 = *(_QWORD *)v125;
      if ( *(_WORD *)(*(_QWORD *)v125 + 298LL) )
      {
        v130 = 0LL;
        v131 = (int *)(*(_QWORD *)(v129 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v131 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v130;
          v131 += 4;
          if ( v130 >= *(unsigned __int16 *)(*(_QWORD *)v125 + 298LL) )
            goto LABEL_42;
        }
        v132 = v129 + 16LL * *v131 + 312;
      }
      else
      {
LABEL_42:
        v132 = sub_AF54C0(v125, IClassBoardSquareModel_TypeInfo, 0LL, v127);
      }
      v133 = (*(__int64 (__fastcall **)(__int64, _QWORD))v132)(v128, *(_QWORD *)(v132 + 8));
      if ( !*(_QWORD *)v75 )
        sub_B5D69C(v133, v134);
      v136 = *(__int64 **)(*(_QWORD *)v75 + 168LL);
      if ( !v136 )
        sub_B5D69C(v133, v134);
      v137 = *v136;
      v138 = v133;
      if ( *(_WORD *)(*v136 + 298) )
      {
        v139 = 0LL;
        v140 = (int *)(*(_QWORD *)(v137 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v140 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v139;
          v140 += 4;
          if ( v139 >= *(unsigned __int16 *)(*v136 + 298) )
            goto LABEL_50;
        }
        v141 = v137 + 16LL * *v140 + 312;
      }
      else
      {
LABEL_50:
        v141 = sub_AF54C0(v136, IClassBoardSquareModel_TypeInfo, 0LL, v135);
      }
      v142 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v141)(v136, *(_QWORD *)(v141 + 8));
      v145 = *(_QWORD *)v105;
      if ( v138 == (_DWORD)v142 )
      {
        if ( !v145 )
          sub_B5D69C(v142, v143);
        v146 = *(__int64 **)(v145 + 160);
        if ( !v146 )
          sub_B5D69C(v142, v143);
        v147 = *v146;
        if ( *(_WORD *)(*v146 + 298) )
        {
          v148 = 0LL;
          v149 = (int *)(*(_QWORD *)(v147 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v149 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v148;
            v149 += 4;
            if ( v148 >= *(unsigned __int16 *)(*v146 + 298) )
              goto LABEL_59;
          }
          v150 = v147 + 16LL * *v149 + 312;
        }
        else
        {
LABEL_59:
          v150 = sub_AF54C0(v146, IClassBoardLineModel_TypeInfo, 0LL, v144);
        }
LABEL_93:
        v178 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v150)(v146, *(_QWORD *)(v150 + 8));
        *v116 = v178;
        sub_B5D560((BattleServantConfConponent_o *)(v106 + 16), v178, v179, v180, v181, v182, v183, v184);
        goto LABEL_94;
      }
      if ( !v145 )
        sub_B5D69C(v142, v143);
      v151 = *(__int64 **)(v145 + 160);
      if ( !v151 )
        sub_B5D69C(v142, v143);
      v152 = *v151;
      if ( *(_WORD *)(*v151 + 298) )
      {
        v153 = 0LL;
        v154 = (int *)(*(_QWORD *)(v152 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v154 - 1) != IClassBoardLineModel_TypeInfo )
        {
          ++v153;
          v154 += 4;
          if ( v153 >= *(unsigned __int16 *)(*v151 + 298) )
            goto LABEL_66;
        }
        v155 = v152 + 16LL * *v154 + 312;
      }
      else
      {
LABEL_66:
        v155 = sub_AF54C0(v151, IClassBoardLineModel_TypeInfo, 0LL, v144);
      }
      v156 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v155)(v151, *(_QWORD *)(v155 + 8));
      v159 = v156;
      if ( !v156 )
        sub_B5D69C(0LL, v157);
      v160 = *(_QWORD *)v156;
      if ( *(_WORD *)(*(_QWORD *)v156 + 298LL) )
      {
        v161 = 0LL;
        v162 = (int *)(*(_QWORD *)(v160 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v162 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v161;
          v162 += 4;
          if ( v161 >= *(unsigned __int16 *)(*(_QWORD *)v156 + 298LL) )
            goto LABEL_74;
        }
        v163 = v160 + 16LL * *v162 + 312;
      }
      else
      {
LABEL_74:
        v163 = sub_AF54C0(v156, IClassBoardSquareModel_TypeInfo, 0LL, v158);
      }
      v164 = (*(__int64 (__fastcall **)(__int64, _QWORD))v163)(v159, *(_QWORD *)(v163 + 8));
      if ( !*(_QWORD *)v75 )
        sub_B5D69C(v164, v165);
      v167 = *(__int64 **)(*(_QWORD *)v75 + 168LL);
      if ( !v167 )
        sub_B5D69C(v164, v165);
      v168 = *v167;
      v169 = v164;
      if ( *(_WORD *)(*v167 + 298) )
      {
        v170 = 0LL;
        v171 = (int *)(*(_QWORD *)(v168 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v171 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v170;
          v171 += 4;
          if ( v170 >= *(unsigned __int16 *)(*v167 + 298) )
            goto LABEL_82;
        }
        v172 = v168 + 16LL * *v171 + 312;
      }
      else
      {
LABEL_82:
        v172 = sub_AF54C0(v167, IClassBoardSquareModel_TypeInfo, 0LL, v166);
      }
      v173 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v172)(v167, *(_QWORD *)(v172 + 8));
      if ( v169 == (_DWORD)v173 )
      {
        if ( !*(_QWORD *)v105 )
          sub_B5D69C(v173, v174);
        v146 = *(__int64 **)(*(_QWORD *)v105 + 160LL);
        if ( !v146 )
          sub_B5D69C(v173, v174);
        v175 = *v146;
        if ( *(_WORD *)(*v146 + 298) )
        {
          v176 = 0LL;
          v177 = (IClassBoardLineModel_c **)(*(_QWORD *)(v175 + 176) + 8LL);
          while ( *(v177 - 1) != IClassBoardLineModel_TypeInfo )
          {
            ++v176;
            v177 += 2;
            if ( v176 >= *(unsigned __int16 *)(*v146 + 298) )
              goto LABEL_91;
          }
          v150 = v175 + 16LL * (*(_DWORD *)v177 + 1) + 312;
        }
        else
        {
LABEL_91:
          v150 = sub_AF54C0(v146, IClassBoardLineModel_TypeInfo, 1LL, v85);
        }
        goto LABEL_93;
      }
LABEL_94:
      if ( *v116 )
      {
        if ( !*(_QWORD *)v105 )
          sub_B5D69C(v173, v174);
        v185 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v105 + 144LL);
        if ( !v185 )
          sub_B5D69C(0LL, v174);
        ClassBoardEffectPlayer__SetData_bool_(
          v185,
          isLock,
          (const MethodInfo_1ADCED8 *)Method_ClassBoardEffectPlayer_SetData_bool___);
        if ( !*(_QWORD *)v105 )
          sub_B5D69C(v186, v187);
        v188 = this->fields.players;
        if ( !v188 )
          sub_B5D69C(0LL, v187);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v188,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)v105 + 144LL),
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
        v192 = *v116;
        if ( !*v116 )
          sub_B5D69C(v189, v190);
        v193 = *v192;
        if ( HIWORD((*v192)->m_Items[67]) )
        {
          v194 = 0LL;
          v195 = (IClassBoardSquareModel_c **)(*(_QWORD *)&v193->m_Items[37] + 8LL);
          while ( *(v195 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            ++v194;
            v195 += 2;
            if ( v194 >= HIWORD((*v192)->m_Items[67]) )
              goto LABEL_104;
          }
          v196 = (__int64)&v193->m_Items[4 * *(_DWORD *)v195 + 91];
        }
        else
        {
LABEL_104:
          v196 = sub_AF54C0(*v116, IClassBoardSquareModel_TypeInfo, 5LL, v191);
        }
        if ( ((*(__int64 (__fastcall **)(System_Int32_array **, _QWORD))v196)(v192, *(_QWORD *)(v196 + 8)) & 1) != 0 )
        {
          squareViewList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.squareViewList;
          v198 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ClassBoardSquare__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v198,
            (Il2CppObject *)v106,
            Method_ClassBoardEffectController___c__DisplayClass15_2__RegisterConnectingLineBlankPlayer_b__2__,
            (const MethodInfo_2C2ECD0 *)Method_System_Func_ClassBoardSquare__bool___ctor__);
          v199 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                   squareViewList,
                   (System_Func_TSource__bool__o *)v198,
                   (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v199, 0LL, 0LL) )
          {
            ClassBoardEffectController__RegisterConnectingLineBlankPlayer(
              this,
              (ClassBoardSquare_o *)v199,
              isLock,
              (const MethodInfo *)v85);
            if ( !v199 )
              sub_B5D69C(v200, v201);
            monitor = (ClassBoardEffectPlayer_o *)v199[6].monitor;
            if ( !monitor )
              sub_B5D69C(0LL, v201);
            ClassBoardEffectPlayer__SetData_bool_(
              monitor,
              isLock,
              (const MethodInfo_1ADCED8 *)Method_ClassBoardEffectPlayer_SetData_bool___);
            v204 = this->fields.players;
            if ( !v204 )
              sub_B5D69C(0LL, v203);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v204,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v199[6].monitor,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
          }
        }
      }
    }
  }
  v205 = *(_QWORD *)v86;
  if ( *(_WORD *)(*(_QWORD *)v86 + 298LL) )
  {
    v206 = 0LL;
    v207 = (int *)(*(_QWORD *)(v205 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v207 - 1) != System_IDisposable_TypeInfo )
    {
      ++v206;
      v207 += 4;
      if ( v206 >= *(unsigned __int16 *)(*(_QWORD *)v86 + 298LL) )
        goto LABEL_119;
    }
    v208 = v205 + 16LL * *v207 + 312;
  }
  else
  {
LABEL_119:
    v208 = sub_AF54C0(v86, System_IDisposable_TypeInfo, 0LL, v91);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v208)(v86, *(_QWORD *)(v208 + 8));
}


void __fastcall ClassBoardEffectController__ResetPlayers(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x20
  void *v21; // x0
  struct ClassBoardEffectController___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__12_0; // x21
  Il2CppObject *v24; // x22
  struct ClassBoardEffectController___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct System_Action_o **p_playEndCallback; // x19
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_42E9C18 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_ClassBoardEffectPlayer___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_ClassBoardEffectPlayer__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Clear__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__, v11, v12, v13);
    sub_B5D5C4(&Method_ClassBoardEffectController___c__ResetPlayers_b__12_0__, v14, v15, v16);
    sub_B5D5C4(&ClassBoardEffectController___c_TypeInfo, v17, v18, v19);
    byte_42E9C18 = 1;
  }
  players = this->fields.players;
  v21 = ClassBoardEffectController___c_TypeInfo;
  if ( (BYTE3(ClassBoardEffectController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardEffectController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectController___c_TypeInfo);
    v21 = ClassBoardEffectController___c_TypeInfo;
  }
  static_fields = (struct ClassBoardEffectController___c_StaticFields *)*((_QWORD *)v21 + 23);
  _9__12_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (*((_BYTE *)v21 + 307) & 4) != 0 && !*((_DWORD *)v21 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = ClassBoardEffectController___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_ClassBoardEffectPlayer__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__12_0,
      v24,
      Method_ClassBoardEffectController___c__ResetPlayers_b__12_0__,
      (const MethodInfo_258B320 *)Method_System_Action_ClassBoardEffectPlayer___ctor__);
    v25 = ClassBoardEffectController___c_TypeInfo->static_fields;
    v25->__9__12_0 = (struct System_Action_ClassBoardEffectPlayer__o *)_9__12_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !players
    || (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)players,
          (System_Action_T__o *)_9__12_0,
          (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__),
        (v21 = this->fields.players) == 0LL) )
  {
    sub_B5D69C(v21, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v21,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Clear__);
  this->fields.playEndCallback = 0LL;
  p_playEndCallback = &this->fields.playEndCallback;
  *((_DWORD *)p_playEndCallback - 4) = 0;
  sub_B5D560((BattleServantConfConponent_o *)p_playEndCallback, 0LL, v33, v34, v35, v36, v37, v38);
}


void __fastcall ClassBoardEffectController___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ClassBoardEffectController___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E7A & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardEffectController___c_TypeInfo, v1, v2, v3);
    byte_42E5E7A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ClassBoardEffectController___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ClassBoardEffectController___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardEffectController___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, x);
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
  if ( (byte_42E5E7B & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass15_2_o *)sub_B5D5C4(
                                                                   &IClassBoardSquareModel_TypeInfo,
                                                                   (_DWORD)x,
                                                                   (_DWORD)method,
                                                                   v3);
    byte_42E5E7B = 1;
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
    p_method = sub_AF54C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0LL, v3);
  }
  this = (ClassBoardEffectController___c__DisplayClass15_2_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                 SquareModel_k__BackingField,
                                                                 *(_QWORD *)(p_method + 8));
  connectSquareModel = v5->fields.connectSquareModel;
  if ( !connectSquareModel )
LABEL_19:
    sub_B5D69C(this, x);
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
    v17 = sub_AF54C0(connectSquareModel, IClassBoardSquareModel_TypeInfo, 0LL, v11);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, x);
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
  if ( (byte_42E5E7C & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass16_1_o *)sub_B5D5C4(
                                                                   &IClassBoardSquareModel_TypeInfo,
                                                                   (_DWORD)model,
                                                                   (_DWORD)method,
                                                                   v3);
    byte_42E5E7C = 1;
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
    p_method = sub_AF54C0(model, IClassBoardSquareModel_TypeInfo, 0LL, v3);
  }
  this = (ClassBoardEffectController___c__DisplayClass16_1_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                 model,
                                                                 *(_QWORD *)(p_method + 8));
  square = v5->fields.square;
  if ( !square || (SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField) == 0LL )
LABEL_19:
    sub_B5D69C(this, model);
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
    v17 = sub_AF54C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0LL, v10);
  }
  return v14 == (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v17)(
                  SquareModel_k__BackingField,
                  *(_QWORD *)(v17 + 8));
}