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
  System_Collections_Generic_List_object__o *v14; // x24
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  Il2CppObject *object; // x0
  __int64 v46; // x1
  Il2CppClass *klass; // x20
  _QWORD *image; // x8
  __int64 v49; // x9
  IClassBoardSquareModel_c **v50; // x10
  __int64 v51; // x0

  if ( (byte_4B6A110 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_First_ClassBoardSquare___, squares);
    sub_1BE4ACC(&IClassBoardSquareModel_TypeInfo, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo, v13);
    byte_4B6A110 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__);
  this->fields.players = (struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *)v14;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.players, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.squareViewList = squares;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)squares, v21, v22, v23, v24, v25, v26);
  this->fields.lineViewList = lines;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.lineViewList, (int64_t)lines, v27, v28, v29, v30, v31, v32);
  this->fields.mapCamera = camera;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.mapCamera, (int64_t)camera, v33, v34, v35, v36, v37, v38);
  this->fields.bgModel = bg;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.bgModel, (int64_t)bg, v39, v40, v41, v42, v43, v44);
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)squares,
             (const MethodInfo_2F79B74 *)Method_System_Linq_Enumerable_First_ClassBoardSquare___);
  if ( !object || (klass = object[11].klass) == 0LL )
    sub_1BE4D28(object, v46);
  image = klass->_1.image;
  v49 = *((unsigned __int16 *)klass->_1.image + 151);
  if ( *((_WORD *)klass->_1.image + 151) )
  {
    v50 = (IClassBoardSquareModel_c **)(image[22] + 8LL);
    while ( *(v50 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v49;
      v50 += 2;
      if ( !v49 )
        goto LABEL_9;
    }
    v51 = (__int64)&image[2 * *(_DWORD *)v50 + 41];
  }
  else
  {
LABEL_9:
    v51 = sub_1C36AAC(object[11].klass, IClassBoardSquareModel_TypeInfo, 1LL);
  }
  this->fields.baseId = (*(__int64 (__fastcall **)(Il2CppClass *, _QWORD))v51)(klass, *(_QWORD *)(v51 + 8));
}


void __fastcall ClassBoardEffectController__CheckPlayEnd(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  ClassBoardEffectController_o *v2; // x19
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x9
  int v4; // w8
  struct System_Action_o *playEndCallback; // x8

  v2 = this;
  if ( (byte_4B6A115 & 1) == 0 )
  {
    this = (ClassBoardEffectController_o *)sub_1BE4ACC(
                                             &Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__,
                                             method);
    byte_4B6A115 = 1;
  }
  players = v2->fields.players;
  v4 = v2->fields.playEndCount + 1;
  v2->fields.playEndCount = v4;
  if ( !players )
    goto LABEL_7;
  if ( v4 < players->fields._size )
    return;
  playEndCallback = v2->fields.playEndCallback;
  if ( !playEndCallback )
LABEL_7:
    sub_1BE4D28(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))playEndCallback->fields.m_target)(
    playEndCallback->fields.original_method_info,
    *(_QWORD *)&playEndCallback->fields.extra_arg);
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
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v17; // x1
  MapCamera_o *mapCamera; // x23
  UnityEngine_Transform_o *SafeCameraDestination; // x0
  __int64 v20; // x1
  UnityEngine_Transform_o *v21; // x23
  float v22; // s0
  float v23; // s1
  float v24; // s2
  float v25; // s10
  float v26; // s9
  float v27; // s8
  float v28; // s12
  float v29; // s13
  float v30; // s14
  float v31; // s15
  float v32; // s11
  float v33; // s13
  float v34; // s4
  float v35; // s0
  float v36; // s3
  float v37; // s1
  float v38; // s2
  float v39; // [xsp+4h] [xbp-9Ch]
  float v40; // [xsp+8h] [xbp-98h]
  float screenPos; // [xsp+Ch] [xbp-94h]
  System_Nullable_Vector3__o screenPos_4; // [xsp+10h] [xbp-90h] BYREF
  System_Nullable_float__o v43; // 0:x3.8
  System_Nullable_Vector3__o v44; // 0:x0.16
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4B6A119 & 1) == 0 )
  {
    sub_1BE4ACC(&MapCameraViewAdjusterUtil_TypeInfo, *(_QWORD *)&maxDistance);
    sub_1BE4ACC(&Method_System_Nullable_Vector3___ctor__, v17);
    byte_4B6A119 = 1;
  }
  *(_QWORD *)&v44.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  mapCamera = this->fields.mapCamera;
  *(_QWORD *)&v44.fields.hasValue = &screenPos_4;
  v45.fields.x = x;
  v45.fields.y = y;
  v45.fields.z = z;
  *(_QWORD *)&screenPos_4.fields.hasValue = 0LL;
  *(_QWORD *)&screenPos_4.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v44, v45, *(const MethodInfo_370D494 **)&ease);
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  v43 = 0LL;
  SafeCameraDestination = (UnityEngine_Transform_o *)MapCameraViewAdjusterUtil__GetSafeCameraDestination(
                                                       mapCamera,
                                                       screenPos_4,
                                                       v43,
                                                       0LL);
  if ( !this->fields.mapCamera )
    goto LABEL_20;
  v21 = SafeCameraDestination;
  SafeCameraDestination = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.mapCamera, 0LL);
  if ( !SafeCameraDestination )
    goto LABEL_20;
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_localPosition(SafeCameraDestination, 0LL);
  if ( !v21 )
    goto LABEL_20;
  SafeCameraDestination = (UnityEngine_Transform_o *)this->fields.mapCamera;
  v39 = secMax;
  v40 = secMin;
  if ( !SafeCameraDestination )
    goto LABEL_20;
  screenPos = x;
  v25 = y;
  v26 = z;
  v28 = *(float *)&v21->fields.m_CachedPtr;
  v27 = *((float *)&v21->fields + 1);
  v29 = v22;
  v30 = v23;
  v31 = v24;
  SafeCameraDestination = UnityEngine_Component__get_transform((UnityEngine_Component_o *)SafeCameraDestination, 0LL);
  if ( !SafeCameraDestination )
    goto LABEL_20;
  localPosition = UnityEngine_Transform__get_localPosition(SafeCameraDestination, 0LL);
  v32 = localPosition.fields.z;
  if ( !byte_4B612DF )
  {
    sub_1BE4ACC(&System_Math_TypeInfo, v20);
    byte_4B612DF = 1;
  }
  v33 = v29 - v28;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v34 = sqrtf(
          (float)((float)(v33 * v33) + (float)((float)(v30 - v27) * (float)(v30 - v27)))
        + (float)((float)(v31 - v32) * (float)(v31 - v32)))
      / (float)maxDistance;
  v35 = screenPos;
  v36 = 0.0;
  if ( v34 != 0.0 )
  {
    v36 = v40;
    if ( v34 >= v40 )
    {
      v36 = v39;
      if ( v34 <= v39 )
        v36 = v34;
    }
  }
  SafeCameraDestination = (UnityEngine_Transform_o *)this->fields.mapCamera;
  if ( !SafeCameraDestination )
LABEL_20:
    sub_1BE4D28(SafeCameraDestination, v20);
  v37 = v25;
  v38 = v26;
  MapCamera__StartAutoMove(
    (MapCamera_o *)SafeCameraDestination,
    *(UnityEngine_Vector3_o *)&v35,
    v36,
    ease,
    callback,
    0LL);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0
  Il2CppObject *v18; // x1
  struct ClassBoardBackground_o *bgModel; // x8
  struct ClassBoardBackground_o *v20; // x8
  struct ClassBoardEffectPlayer_o *v21; // x21
  System_Action_o *v22; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct ClassBoardBackground_o *v35; // x8
  struct System_String_o *Name_k__BackingField; // x8
  _QWORD *v37; // x9
  __int64 playCallback_low; // x10
  __int64 v39; // x8
  struct System_Action_o *playCallback; // x8

  if ( (byte_4B6A112 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, callback);
    sub_1BE4ACC(&Method_ClassBoardEffectController_PlayNext__, v5);
    sub_1BE4ACC(&Method_ClassBoardEffectPlayer_SetData_int___, v6);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__, v9);
    byte_4B6A112 = 1;
  }
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)callback);
  this->fields.playEndCallback = callback;
  p_playEndCallback = &this->fields.playEndCallback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.playEndCallback,
    (int64_t)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  bgModel = this->fields.bgModel;
  if ( !bgModel )
    goto LABEL_20;
  startMainEffectPlayer = bgModel->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    goto LABEL_20;
  ClassBoardEffectPlayer__SetData_int_(
    startMainEffectPlayer,
    this->fields.baseId,
    (const MethodInfo_2F4CDF0 *)Method_ClassBoardEffectPlayer_SetData_int___);
  v20 = this->fields.bgModel;
  if ( !v20 )
    goto LABEL_20;
  v21 = v20->fields.startMainEffectPlayer;
  v22 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_ClassBoardEffectController_PlayNext__, 0LL);
  if ( !v21 )
    goto LABEL_20;
  v21->fields.endCallback = v22;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v21->fields.endCallback, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  v35 = this->fields.bgModel;
  if ( !v35 )
    goto LABEL_20;
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !startMainEffectPlayer )
    goto LABEL_20;
  v18 = (Il2CppObject *)v35->fields.startMainEffectPlayer;
  Name_k__BackingField = startMainEffectPlayer->fields._Name_k__BackingField;
  v37 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
  ++HIDWORD(startMainEffectPlayer->fields.playCallback);
  if ( !Name_k__BackingField )
    goto LABEL_20;
  playCallback_low = SLODWORD(startMainEffectPlayer->fields.playCallback);
  if ( (unsigned int)playCallback_low >= LODWORD(Name_k__BackingField[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)startMainEffectPlayer,
      v18,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = (__int64)Name_k__BackingField + 8 * playCallback_low;
    LODWORD(startMainEffectPlayer->fields.playCallback) = playCallback_low + 1;
    *(_QWORD *)(v39 + 32) = v18;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 32), (int64_t)v18, v29, v30, v31, v32, v33, v34);
  }
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !startMainEffectPlayer )
    goto LABEL_20;
  if ( SLODWORD(startMainEffectPlayer->fields.playCallback) < 1 )
  {
    playCallback = *p_playEndCallback;
    if ( *p_playEndCallback )
      goto LABEL_19;
LABEL_20:
    sub_1BE4D28(startMainEffectPlayer, v18);
  }
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)System_Linq_Enumerable__First_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)startMainEffectPlayer,
                                                        (const MethodInfo_2F79B74 *)Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
  if ( !startMainEffectPlayer )
    goto LABEL_20;
  playCallback = startMainEffectPlayer->fields.playCallback;
  if ( playCallback )
LABEL_19:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))playCallback->fields.m_target)(
      playCallback->fields.original_method_info,
      *(_QWORD *)&playCallback->fields.extra_arg);
}


void __fastcall ClassBoardEffectController__PlayNext(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *players; // x0
  __int64 v5; // x1
  struct System_Action_o *playEndCallback; // x8

  if ( (byte_4B6A116 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Item__, v3);
    byte_4B6A116 = 1;
  }
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  v5 = (unsigned int)(this->fields.playEndCount + 1);
  this->fields.playEndCount = v5;
  if ( !players )
    goto LABEL_10;
  if ( (int)v5 >= players->fields._size )
  {
    playEndCallback = this->fields.playEndCallback;
    if ( playEndCallback )
      goto LABEL_9;
LABEL_10:
    sub_1BE4D28(players, v5);
  }
  players = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                           players,
                                                           v5,
                                                           (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Item__);
  if ( !players )
    goto LABEL_10;
  playEndCallback = *(struct System_Action_o **)&players->fields._size;
  if ( playEndCallback )
LABEL_9:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))playEndCallback->fields.m_target)(
      playEndCallback->fields.original_method_info,
      *(_QWORD *)&playEndCallback->fields.extra_arg);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_List_object__o *players; // x0
  Il2CppObject *releaseEffectPlayer; // x1
  bool v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x8
  Il2CppObject *current; // x25
  System_Action_o *v36; // x20
  __int64 v37; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  void *monitor; // x8
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B6A111 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, releaseSquare);
    sub_1BE4ACC(&Method_ClassBoardEffectController_CheckPlayEnd__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__get_Current__, v10);
    sub_1BE4ACC(&IClassBoardLockModel_TypeInfo, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__, v13);
    byte_4B6A111 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)releaseSquare);
  this->fields.playEndCallback = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.playEndCallback,
    (int64_t)callback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !releaseSquare )
    goto LABEL_17;
  v22 = sub_1BE4C08(releaseSquare->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo) != 0;
  ClassBoardEffectController__RegisterConnectingLineBlankPlayer(this, releaseSquare, v22, v23);
  ClassBoardEffectController__RegisterConnectedSquareEnablePlayer(this, releaseSquare, v24);
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  if ( !players )
    goto LABEL_17;
  releaseEffectPlayer = (Il2CppObject *)releaseSquare->fields.releaseEffectPlayer;
  items = players->fields._items;
  v32 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
  ++players->fields._version;
  if ( !items )
    goto LABEL_17;
  size = players->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      players,
      releaseEffectPlayer,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    players->fields._size = size + 1;
    v34[4] = (Il2CppClass *)releaseEffectPlayer;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)releaseEffectPlayer, v25, v26, v27, v28, v29, v30);
  }
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  if ( !players )
LABEL_17:
    sub_1BE4D28(players, releaseEffectPlayer);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    players,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__) )
  {
    current = v46.fields._current;
    v36 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v36, (Il2CppObject *)this, Method_ClassBoardEffectController_CheckPlayEnd__, 0LL);
    if ( !current )
      sub_1BE4D28(v37, v38);
    current[2].klass = (Il2CppClass *)v36;
    sub_1BE4A70((PartyOrganizationUtility_o *)&current[2], (int64_t)v36, v39, v40, v41, v42, v43, v44);
    monitor = current[1].monitor;
    if ( monitor )
      (*((void (__fastcall **)(_QWORD, _QWORD))monitor + 3))(*((_QWORD *)monitor + 8), *((_QWORD *)monitor + 5));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__);
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
  if ( (byte_4B6A113 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, callback);
    byte_4B6A113 = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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
  __int64 v24; // x22
  __int64 v25; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x21
  System_Collections_Generic_List_T__o *players; // x19
  System_Func_object__bool__o *v35; // x23
  System_Collections_Generic_List_object__o *v36; // x19
  __int64 *v37; // x19
  __int64 v38; // x8
  __int64 v39; // x9
  IClassBoardSquareModel_c **v40; // x10
  __int64 v41; // x0
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squareViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__c *klass; // x8
  __int64 v44; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v47; // x1
  __int64 v48; // x19
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  __int64 v53; // x23
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  int64_t v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  __int64 v65; // x22
  System_Collections_Generic_List_T__o *v66; // x24
  System_Func_object__bool__o *v67; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x24
  System_Func_object__bool__o *v69; // x25
  Il2CppObject *v70; // x0
  Il2CppObject *v71; // x23
  Il2CppClass *v72; // x8
  __int64 v73; // x9
  IClassBoardSquareModel_c **v74; // x10
  __int64 v75; // x0
  __int64 v76; // x0
  __int64 v77; // x1
  ClassBoardEffectPlayer_o *v78; // x23
  bool v79; // w1
  __int64 v80; // x0
  __int64 v81; // x1
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_Collections_Generic_List_object__o *v88; // x0
  Il2CppObject *v89; // x1
  struct System_Object_array *items; // x8
  _QWORD *v91; // x9
  __int64 size; // x10
  Il2CppClass **v93; // x8
  __int64 v94; // x8
  __int64 v95; // x9
  int *v96; // x10
  __int64 v97; // x0
  System_Collections_Generic_List_object__o *v98; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B6A118 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_ClassBoardEffectPlayer___, releaseSquare);
    sub_1BE4ACC(&Method_ClassBoardEffectPlayer_SetData_bool___, v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___, v6);
    sub_1BE4ACC(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v7);
    sub_1BE4ACC(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo, v8);
    sub_1BE4ACC(&IClassBoardLockModel_TypeInfo, v9);
    sub_1BE4ACC(&IClassBoardSquareModel_TypeInfo, v10);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v11);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo, v12);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo, v13);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__, v17);
    sub_1BE4ACC(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v18);
    sub_1BE4ACC(
      &Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectedSquareEnablePlayer_b__0__,
      v19);
    sub_1BE4ACC(&ClassBoardEffectController___c__DisplayClass16_0_TypeInfo, v20);
    sub_1BE4ACC(
      &Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__1__,
      v21);
    sub_1BE4ACC(
      &Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__2__,
      v22);
    sub_1BE4ACC(&ClassBoardEffectController___c__DisplayClass16_1_TypeInfo, v23);
    byte_4B6A118 = 1;
  }
  v24 = sub_1BE4D18(ClassBoardEffectController___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_64;
  *(_QWORD *)(v24 + 16) = releaseSquare;
  v33 = v24 + 16;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)releaseSquare, v27, v28, v29, v30, v31, v32);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v35 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v35,
    (Il2CppObject *)v24,
    Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectedSquareEnablePlayer_b__0__,
    0LL);
  if ( BasicHelper__Any_object_(
         players,
         (System_Func_T__bool__o *)v35,
         (const MethodInfo_2F4407C *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
  {
    return;
  }
  v36 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  v98 = v36;
  if ( !*(_QWORD *)v33 )
    goto LABEL_64;
  v37 = *(__int64 **)(*(_QWORD *)v33 + 176LL);
  if ( !v37 )
    goto LABEL_64;
  v38 = *v37;
  v39 = *(unsigned __int16 *)(*v37 + 302);
  if ( *(_WORD *)(*v37 + 302) )
  {
    v40 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v38 + 176) + 8LL);
    while ( *(v40 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v39;
      v40 += 2;
      if ( !v39 )
        goto LABEL_11;
    }
    v41 = v38 + 16LL * (*(_DWORD *)v40 + 15) + 312;
  }
  else
  {
LABEL_11:
    v41 = sub_1C36AAC(v37, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  v25 = (*(__int64 (__fastcall **)(__int64 *, System_Collections_Generic_List_object__o **, _QWORD))v41)(
          v37,
          &v98,
          *(_QWORD *)(v41 + 8));
  if ( v98 && v98->fields._size >= 1 )
  {
    squareViewList = this->fields.squareViewList;
    if ( squareViewList )
    {
      klass = squareViewList->klass;
      v44 = *(unsigned __int16 *)(&squareViewList->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&squareViewList->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_ClassBoardSquare__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo )
        {
          --v44;
          p_offset += 4;
          if ( !v44 )
            goto LABEL_20;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_20:
        p_method = sub_1C36AAC(
                     this->fields.squareViewList,
                     System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo,
                     0LL);
      }
      v48 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *, _QWORD))p_method)(
              squareViewList,
              *(_QWORD *)(p_method + 8));
      if ( !v48 )
        sub_1BE4D28(0LL, v47);
      while ( 1 )
      {
        v49 = *(_QWORD *)v48;
        v50 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
        {
          v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v51 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v50;
            v51 += 4;
            if ( !v50 )
              goto LABEL_27;
          }
          v52 = v49 + 16LL * *v51 + 312;
        }
        else
        {
LABEL_27:
          v52 = sub_1C36AAC(v48, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v48, *(_QWORD *)(v52 + 8)) & 1) == 0 )
          break;
        v53 = sub_1BE4D18(ClassBoardEffectController___c__DisplayClass16_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v53, 0LL);
        v54 = *(_QWORD *)v48;
        v55 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
        {
          v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_ClassBoardSquare__c **)v56 - 1) != System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo )
          {
            --v55;
            v56 += 4;
            if ( !v55 )
              goto LABEL_34;
          }
          v57 = v54 + 16LL * *v56 + 312;
        }
        else
        {
LABEL_34:
          v57 = sub_1C36AAC(v48, System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo, 0LL);
        }
        v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v48, *(_QWORD *)(v57 + 8));
        if ( !v53 )
          sub_1BE4D28(v58, v58);
        *(_QWORD *)(v53 + 16) = v58;
        v65 = v53 + 16;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v53 + 16), v58, v59, v60, v61, v62, v63, v64);
        v66 = (System_Collections_Generic_List_T__o *)this->fields.players;
        v67 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v67,
          (Il2CppObject *)v53,
          Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__1__,
          0LL);
        if ( !BasicHelper__Any_object_(
                v66,
                (System_Func_T__bool__o *)v67,
                (const MethodInfo_2F4407C *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
        {
          v68 = (System_Collections_Generic_IEnumerable_TSource__o *)v98;
          v69 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_IClassBoardSquareModel__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v69,
            (Il2CppObject *)v53,
            Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__2__,
            0LL);
          v70 = System_Linq_Enumerable__FirstOrDefault_object__49793520(
                  v68,
                  (System_Func_TSource__bool__o *)v69,
                  (const MethodInfo_2F7C9F0 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
          v71 = v70;
          if ( v70 )
          {
            v72 = v70->klass;
            v73 = *(unsigned __int16 *)(&v70->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v70->klass->_2.bitflags2 + 3) )
            {
              v74 = (IClassBoardSquareModel_c **)&v72->_1.interfaceOffsets->offset;
              while ( *(v74 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                --v73;
                v74 += 2;
                if ( !v73 )
                  goto LABEL_43;
              }
              v75 = (__int64)&v72->vtable[*(_DWORD *)v74 + 13].method;
            }
            else
            {
LABEL_43:
              v75 = sub_1C36AAC(v70, IClassBoardSquareModel_TypeInfo, 13LL);
            }
            v76 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v75)(v71, 0LL, *(_QWORD *)(v75 + 8));
            if ( (v76 & 1) == 0 )
            {
              if ( !*(_QWORD *)v65 )
                sub_1BE4D28(v76, v77);
              if ( !*(_QWORD *)v33 )
                sub_1BE4D28(v76, v77);
              v78 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v65 + 160LL);
              if ( !v78 )
                sub_1BE4D28(v76, v77);
              v79 = sub_1BE4C08(*(_QWORD *)(*(_QWORD *)v33 + 176LL), IClassBoardLockModel_TypeInfo) != 0;
              ClassBoardEffectPlayer__SetData_bool_(
                v78,
                v79,
                (const MethodInfo_2F4CD90 *)Method_ClassBoardEffectPlayer_SetData_bool___);
              if ( !*(_QWORD *)v65 )
                sub_1BE4D28(v80, v81);
              v88 = (System_Collections_Generic_List_object__o *)this->fields.players;
              if ( !v88 )
                sub_1BE4D28(0LL, v81);
              v89 = *(Il2CppObject **)(*(_QWORD *)v65 + 160LL);
              items = v88->fields._items;
              v91 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
              ++v88->fields._version;
              if ( !items )
                sub_1BE4D28(v88, v89);
              size = v88->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v88,
                  v89,
                  *(const MethodInfo_35EC224 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
              }
              else
              {
                v93 = &items->obj.klass + size;
                v88->fields._size = size + 1;
                v93[4] = (Il2CppClass *)v89;
                sub_1BE4A70((PartyOrganizationUtility_o *)(v93 + 4), (int64_t)v89, v82, v83, v84, v85, v86, v87);
              }
            }
          }
        }
      }
      v94 = *(_QWORD *)v48;
      v95 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
      {
        v96 = (int *)(*(_QWORD *)(v94 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v96 - 1) != System_IDisposable_TypeInfo )
        {
          --v95;
          v96 += 4;
          if ( !v95 )
            goto LABEL_59;
        }
        v97 = v94 + 16LL * *v96 + 312;
      }
      else
      {
LABEL_59:
        v97 = sub_1C36AAC(v48, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v97)(v48, *(_QWORD *)(v97 + 8));
      return;
    }
LABEL_64:
    sub_1BE4D28(v25, v26);
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
  __int64 v24; // x23
  _BOOL8 v25; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x22
  System_Collections_Generic_List_T__o *players; // x19
  System_Func_object__bool__o *v35; // x24
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *lineViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__c *klass; // x8
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v41; // x1
  __int64 v42; // x19
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x25
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  int64_t v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 v59; // x24
  __int64 v60; // x23
  System_Collections_Generic_List_T__o *v61; // x26
  System_Func_object__bool__o *v62; // x27
  _BOOL8 v63; // x0
  __int64 v64; // x1
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t *v71; // x25
  __int64 v72; // x0
  __int64 v73; // x1
  __int64 *v74; // x26
  __int64 v75; // x8
  __int64 v76; // x9
  IClassBoardLineModel_c **v77; // x10
  __int64 v78; // x0
  __int64 v79; // x0
  __int64 v80; // x1
  __int64 v81; // x26
  __int64 v82; // x8
  __int64 v83; // x9
  int *v84; // x10
  __int64 v85; // x0
  __int64 v86; // x0
  __int64 v87; // x1
  __int64 *v88; // x27
  __int64 v89; // x8
  int v90; // w26
  __int64 v91; // x9
  int *v92; // x10
  __int64 v93; // x0
  __int64 v94; // x0
  __int64 v95; // x1
  __int64 v96; // x8
  __int64 *v97; // x26
  __int64 v98; // x8
  __int64 v99; // x9
  int *v100; // x10
  __int64 v101; // x0
  __int64 *v102; // x26
  __int64 v103; // x8
  __int64 v104; // x9
  int *v105; // x10
  __int64 v106; // x0
  __int64 v107; // x0
  __int64 v108; // x1
  __int64 v109; // x26
  __int64 v110; // x8
  __int64 v111; // x9
  int *v112; // x10
  __int64 v113; // x0
  __int64 v114; // x0
  __int64 v115; // x1
  __int64 *v116; // x27
  __int64 v117; // x8
  int v118; // w26
  __int64 v119; // x9
  int *v120; // x10
  __int64 v121; // x0
  __int64 v122; // x0
  __int64 v123; // x1
  __int64 v124; // x8
  __int64 v125; // x9
  IClassBoardLineModel_c **v126; // x10
  int64_t v127; // x0
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  ClassBoardEffectPlayer_o *v134; // x0
  __int64 v135; // x0
  __int64 v136; // x1
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  System_Collections_Generic_List_object__o *v143; // x0
  Il2CppObject *v144; // x1
  struct System_Object_array *items; // x8
  _QWORD *v146; // x9
  __int64 size; // x10
  Il2CppClass **v148; // x8
  __int64 v149; // x0
  __int64 v150; // x1
  int64_t v151; // x24
  __int64 v152; // x8
  __int64 v153; // x9
  IClassBoardSquareModel_c **v154; // x10
  __int64 v155; // x0
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squareViewList; // x24
  System_Func_object__bool__o *v157; // x25
  ClassBoardSquare_o *v158; // x23
  const MethodInfo *v159; // x3
  __int64 v160; // x0
  __int64 v161; // x1
  ClassBoardEffectPlayer_o *enableEffectPlayer; // x0
  __int64 v163; // x1
  int64_t v164; // x2
  int32_t v165; // w3
  System_String_o *v166; // x4
  BattleSetupInfo_o *v167; // x5
  FollowerInfo_o *v168; // x6
  PartyListViewItem_o *v169; // x7
  System_Collections_Generic_List_object__o *v170; // x0
  Il2CppObject *v171; // x1
  struct System_Object_array *v172; // x8
  _QWORD *v173; // x9
  __int64 v174; // x10
  Il2CppClass **v175; // x8
  __int64 v176; // x8
  __int64 v177; // x9
  int *v178; // x10
  __int64 v179; // x0

  if ( (byte_4B6A117 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_ClassBoardEffectPlayer___, releaseSquare);
    sub_1BE4ACC(&Method_ClassBoardEffectPlayer_SetData_bool___, v6);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___, v7);
    sub_1BE4ACC(&System_Func_ClassBoardSquare__bool__TypeInfo, v8);
    sub_1BE4ACC(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo, v9);
    sub_1BE4ACC(&IClassBoardLineModel_TypeInfo, v10);
    sub_1BE4ACC(&IClassBoardSquareModel_TypeInfo, v11);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v12);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo, v13);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo, v14);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v16);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v17);
    sub_1BE4ACC(&Method_ClassBoardEffectController___c__DisplayClass15_0__RegisterConnectingLineBlankPlayer_b__0__, v18);
    sub_1BE4ACC(&ClassBoardEffectController___c__DisplayClass15_0_TypeInfo, v19);
    sub_1BE4ACC(&Method_ClassBoardEffectController___c__DisplayClass15_1__RegisterConnectingLineBlankPlayer_b__1__, v20);
    sub_1BE4ACC(&ClassBoardEffectController___c__DisplayClass15_1_TypeInfo, v21);
    sub_1BE4ACC(&Method_ClassBoardEffectController___c__DisplayClass15_2__RegisterConnectingLineBlankPlayer_b__2__, v22);
    sub_1BE4ACC(&ClassBoardEffectController___c__DisplayClass15_2_TypeInfo, v23);
    byte_4B6A117 = 1;
  }
  v24 = sub_1BE4D18(ClassBoardEffectController___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_151;
  *(_QWORD *)(v24 + 16) = releaseSquare;
  v33 = v24 + 16;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)releaseSquare, v27, v28, v29, v30, v31, v32);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v35 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v35,
    (Il2CppObject *)v24,
    Method_ClassBoardEffectController___c__DisplayClass15_0__RegisterConnectingLineBlankPlayer_b__0__,
    0LL);
  v25 = BasicHelper__Any_object_(
          players,
          (System_Func_T__bool__o *)v35,
          (const MethodInfo_2F4407C *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
  if ( v25 )
    return;
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList )
LABEL_151:
    sub_1BE4D28(v25, v26);
  klass = lineViewList->klass;
  v38 = *(unsigned __int16 *)(&lineViewList->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lineViewList->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ClassBoardLine__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo )
    {
      --v38;
      p_offset += 4;
      if ( !v38 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C36AAC(
                 this->fields.lineViewList,
                 System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo,
                 0LL);
  }
  v42 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *, _QWORD))p_method)(
          lineViewList,
          *(_QWORD *)(p_method + 8));
  if ( !v42 )
    sub_1BE4D28(0LL, v41);
  while ( 1 )
  {
    v43 = *(_QWORD *)v42;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_17;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_17:
      v46 = sub_1C36AAC(v42, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8)) & 1) == 0 )
      break;
    v47 = sub_1BE4D18(ClassBoardEffectController___c__DisplayClass15_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v47, 0LL);
    v48 = *(_QWORD *)v42;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
    {
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardLine__c **)v50 - 1) != System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_24;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_24:
      v51 = sub_1C36AAC(v42, System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo, 0LL);
    }
    v52 = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v42, *(_QWORD *)(v51 + 8));
    if ( !v47 )
      sub_1BE4D28(v52, v52);
    *(_QWORD *)(v47 + 16) = v52;
    v59 = v47 + 16;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v47 + 16), v52, v53, v54, v55, v56, v57, v58);
    v60 = sub_1BE4D18(ClassBoardEffectController___c__DisplayClass15_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v60, 0LL);
    v61 = (System_Collections_Generic_List_T__o *)this->fields.players;
    v62 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v62,
      (Il2CppObject *)v47,
      Method_ClassBoardEffectController___c__DisplayClass15_1__RegisterConnectingLineBlankPlayer_b__1__,
      0LL);
    v63 = BasicHelper__Any_object_(
            v61,
            (System_Func_T__bool__o *)v62,
            (const MethodInfo_2F4407C *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    if ( !v63 )
    {
      if ( !v60 )
        sub_1BE4D28(v63, v64);
      *(_QWORD *)(v60 + 16) = 0LL;
      v71 = (int64_t *)(v60 + 16);
      sub_1BE4A70((PartyOrganizationUtility_o *)(v60 + 16), 0LL, v65, v66, v67, v68, v69, v70);
      if ( !*(_QWORD *)v59 )
        sub_1BE4D28(v72, v73);
      v74 = *(__int64 **)(*(_QWORD *)v59 + 168LL);
      if ( !v74 )
        sub_1BE4D28(v72, v73);
      v75 = *v74;
      v76 = *(unsigned __int16 *)(*v74 + 302);
      if ( *(_WORD *)(*v74 + 302) )
      {
        v77 = (IClassBoardLineModel_c **)(*(_QWORD *)(v75 + 176) + 8LL);
        while ( *(v77 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v76;
          v77 += 2;
          if ( !v76 )
            goto LABEL_35;
        }
        v78 = v75 + 16LL * (*(_DWORD *)v77 + 1) + 312;
      }
      else
      {
LABEL_35:
        v78 = sub_1C36AAC(v74, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v79 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v78)(v74, *(_QWORD *)(v78 + 8));
      v81 = v79;
      if ( !v79 )
        sub_1BE4D28(0LL, v80);
      v82 = *(_QWORD *)v79;
      v83 = *(unsigned __int16 *)(*(_QWORD *)v79 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v79 + 302LL) )
      {
        v84 = (int *)(*(_QWORD *)(v82 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v84 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v83;
          v84 += 4;
          if ( !v83 )
            goto LABEL_42;
        }
        v85 = v82 + 16LL * *v84 + 312;
      }
      else
      {
LABEL_42:
        v85 = sub_1C36AAC(v79, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v86 = (*(__int64 (__fastcall **)(__int64, _QWORD))v85)(v81, *(_QWORD *)(v85 + 8));
      if ( !*(_QWORD *)v33 )
        sub_1BE4D28(v86, v87);
      v88 = *(__int64 **)(*(_QWORD *)v33 + 176LL);
      if ( !v88 )
        sub_1BE4D28(v86, v87);
      v89 = *v88;
      v90 = v86;
      v91 = *(unsigned __int16 *)(*v88 + 302);
      if ( *(_WORD *)(*v88 + 302) )
      {
        v92 = (int *)(*(_QWORD *)(v89 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v92 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v91;
          v92 += 4;
          if ( !v91 )
            goto LABEL_50;
        }
        v93 = v89 + 16LL * *v92 + 312;
      }
      else
      {
LABEL_50:
        v93 = sub_1C36AAC(v88, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v94 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v93)(v88, *(_QWORD *)(v93 + 8));
      v96 = *(_QWORD *)v59;
      if ( v90 == (_DWORD)v94 )
      {
        if ( !v96 )
          sub_1BE4D28(v94, v95);
        v97 = *(__int64 **)(v96 + 168);
        if ( !v97 )
          sub_1BE4D28(v94, v95);
        v98 = *v97;
        v99 = *(unsigned __int16 *)(*v97 + 302);
        if ( *(_WORD *)(*v97 + 302) )
        {
          v100 = (int *)(*(_QWORD *)(v98 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v100 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v99;
            v100 += 4;
            if ( !v99 )
              goto LABEL_59;
          }
          v101 = v98 + 16LL * *v100 + 312;
        }
        else
        {
LABEL_59:
          v101 = sub_1C36AAC(v97, IClassBoardLineModel_TypeInfo, 0LL);
        }
LABEL_93:
        v127 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v101)(v97, *(_QWORD *)(v101 + 8));
        *v71 = v127;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v60 + 16), v127, v128, v129, v130, v131, v132, v133);
        goto LABEL_94;
      }
      if ( !v96 )
        sub_1BE4D28(v94, v95);
      v102 = *(__int64 **)(v96 + 168);
      if ( !v102 )
        sub_1BE4D28(v94, v95);
      v103 = *v102;
      v104 = *(unsigned __int16 *)(*v102 + 302);
      if ( *(_WORD *)(*v102 + 302) )
      {
        v105 = (int *)(*(_QWORD *)(v103 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v105 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v104;
          v105 += 4;
          if ( !v104 )
            goto LABEL_66;
        }
        v106 = v103 + 16LL * *v105 + 312;
      }
      else
      {
LABEL_66:
        v106 = sub_1C36AAC(v102, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v107 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v106)(v102, *(_QWORD *)(v106 + 8));
      v109 = v107;
      if ( !v107 )
        sub_1BE4D28(0LL, v108);
      v110 = *(_QWORD *)v107;
      v111 = *(unsigned __int16 *)(*(_QWORD *)v107 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v107 + 302LL) )
      {
        v112 = (int *)(*(_QWORD *)(v110 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v112 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v111;
          v112 += 4;
          if ( !v111 )
            goto LABEL_74;
        }
        v113 = v110 + 16LL * *v112 + 312;
      }
      else
      {
LABEL_74:
        v113 = sub_1C36AAC(v107, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v114 = (*(__int64 (__fastcall **)(__int64, _QWORD))v113)(v109, *(_QWORD *)(v113 + 8));
      if ( !*(_QWORD *)v33 )
        sub_1BE4D28(v114, v115);
      v116 = *(__int64 **)(*(_QWORD *)v33 + 176LL);
      if ( !v116 )
        sub_1BE4D28(v114, v115);
      v117 = *v116;
      v118 = v114;
      v119 = *(unsigned __int16 *)(*v116 + 302);
      if ( *(_WORD *)(*v116 + 302) )
      {
        v120 = (int *)(*(_QWORD *)(v117 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v120 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v119;
          v120 += 4;
          if ( !v119 )
            goto LABEL_82;
        }
        v121 = v117 + 16LL * *v120 + 312;
      }
      else
      {
LABEL_82:
        v121 = sub_1C36AAC(v116, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v122 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v121)(v116, *(_QWORD *)(v121 + 8));
      if ( v118 == (_DWORD)v122 )
      {
        if ( !*(_QWORD *)v59 )
          sub_1BE4D28(v122, v123);
        v97 = *(__int64 **)(*(_QWORD *)v59 + 168LL);
        if ( !v97 )
          sub_1BE4D28(v122, v123);
        v124 = *v97;
        v125 = *(unsigned __int16 *)(*v97 + 302);
        if ( *(_WORD *)(*v97 + 302) )
        {
          v126 = (IClassBoardLineModel_c **)(*(_QWORD *)(v124 + 176) + 8LL);
          while ( *(v126 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v125;
            v126 += 2;
            if ( !v125 )
              goto LABEL_91;
          }
          v101 = v124 + 16LL * (*(_DWORD *)v126 + 1) + 312;
        }
        else
        {
LABEL_91:
          v101 = sub_1C36AAC(v97, IClassBoardLineModel_TypeInfo, 1LL);
        }
        goto LABEL_93;
      }
LABEL_94:
      if ( *v71 )
      {
        if ( !*(_QWORD *)v59 )
          sub_1BE4D28(v122, v123);
        v134 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v59 + 152LL);
        if ( !v134 )
          sub_1BE4D28(0LL, v123);
        ClassBoardEffectPlayer__SetData_bool_(
          v134,
          isLock,
          (const MethodInfo_2F4CD90 *)Method_ClassBoardEffectPlayer_SetData_bool___);
        if ( !*(_QWORD *)v59 )
          sub_1BE4D28(v135, v136);
        v143 = (System_Collections_Generic_List_object__o *)this->fields.players;
        if ( !v143 )
          sub_1BE4D28(0LL, v136);
        v144 = *(Il2CppObject **)(*(_QWORD *)v59 + 152LL);
        items = v143->fields._items;
        v146 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
        ++v143->fields._version;
        if ( !items )
          sub_1BE4D28(v143, v144);
        size = v143->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v143,
            v144,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v146[4] + 192LL) + 112LL));
        }
        else
        {
          v148 = &items->obj.klass + size;
          v143->fields._size = size + 1;
          v148[4] = (Il2CppClass *)v144;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v148 + 4), (int64_t)v144, v137, v138, v139, v140, v141, v142);
        }
        v151 = *v71;
        if ( !*v71 )
          sub_1BE4D28(v149, v150);
        v152 = *(_QWORD *)v151;
        v153 = *(unsigned __int16 *)(*(_QWORD *)v151 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v151 + 302LL) )
        {
          v154 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v152 + 176) + 8LL);
          while ( *(v154 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            --v153;
            v154 += 2;
            if ( !v153 )
              goto LABEL_108;
          }
          v155 = v152 + 16LL * (*(_DWORD *)v154 + 5) + 312;
        }
        else
        {
LABEL_108:
          v155 = sub_1C36AAC(*v71, IClassBoardSquareModel_TypeInfo, 5LL);
        }
        if ( ((*(__int64 (__fastcall **)(int64_t, _QWORD))v155)(v151, *(_QWORD *)(v155 + 8)) & 1) != 0 )
        {
          squareViewList = this->fields.squareViewList;
          v157 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_ClassBoardSquare__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v157,
            (Il2CppObject *)v60,
            Method_ClassBoardEffectController___c__DisplayClass15_2__RegisterConnectingLineBlankPlayer_b__2__,
            0LL);
          v158 = (ClassBoardSquare_o *)System_Linq_Enumerable__FirstOrDefault_object__49793520(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)squareViewList,
                                         (System_Func_TSource__bool__o *)v157,
                                         (const MethodInfo_2F7C9F0 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v158, 0LL, 0LL) )
          {
            ClassBoardEffectController__RegisterConnectingLineBlankPlayer(this, v158, isLock, v159);
            if ( !v158 )
              sub_1BE4D28(v160, v161);
            enableEffectPlayer = v158->fields.enableEffectPlayer;
            if ( !enableEffectPlayer )
              sub_1BE4D28(0LL, v161);
            ClassBoardEffectPlayer__SetData_bool_(
              enableEffectPlayer,
              isLock,
              (const MethodInfo_2F4CD90 *)Method_ClassBoardEffectPlayer_SetData_bool___);
            v170 = (System_Collections_Generic_List_object__o *)this->fields.players;
            if ( !v170 )
              sub_1BE4D28(0LL, v163);
            v171 = (Il2CppObject *)v158->fields.enableEffectPlayer;
            v172 = v170->fields._items;
            v173 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
            ++v170->fields._version;
            if ( !v172 )
              sub_1BE4D28(v170, v171);
            v174 = v170->fields._size;
            if ( (unsigned int)v174 >= v172->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v170,
                v171,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v173[4] + 192LL) + 112LL));
            }
            else
            {
              v175 = &v172->obj.klass + v174;
              v170->fields._size = v174 + 1;
              v175[4] = (Il2CppClass *)v171;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v175 + 4), (int64_t)v171, v164, v165, v166, v167, v168, v169);
            }
          }
        }
      }
    }
  }
  v176 = *(_QWORD *)v42;
  v177 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
  {
    v178 = (int *)(*(_QWORD *)(v176 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v178 - 1) != System_IDisposable_TypeInfo )
    {
      --v177;
      v178 += 4;
      if ( !v177 )
        goto LABEL_125;
    }
    v179 = v176 + 16LL * *v178 + 312;
  }
  else
  {
LABEL_125:
    v179 = sub_1C36AAC(v42, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v179)(v42, *(_QWORD *)(v179 + 8));
}


void __fastcall ClassBoardEffectController__ResetPlayers(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ClassBoardEffectController___c_c *v7; // x0
  System_Collections_Generic_List_object__o *players; // x20
  System_Action_object__o *_9__12_0; // x21
  Il2CppObject *v10; // x22
  struct ClassBoardEffectController___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v23; // x8
  int64_t size; // x2
  int v25; // w9
  struct System_Action_o **p_playEndCallback; // x19

  if ( (byte_4B6A114 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_ClassBoardEffectPlayer__TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Clear__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__, v4);
    sub_1BE4ACC(&Method_ClassBoardEffectController___c__ResetPlayers_b__12_0__, v5);
    sub_1BE4ACC(&ClassBoardEffectController___c_TypeInfo, v6);
    byte_4B6A114 = 1;
  }
  v7 = ClassBoardEffectController___c_TypeInfo;
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  if ( !ClassBoardEffectController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectController___c_TypeInfo);
    v7 = ClassBoardEffectController___c_TypeInfo;
  }
  _9__12_0 = (System_Action_object__o *)v7->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = ClassBoardEffectController___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__12_0 = (System_Action_object__o *)sub_1BE4D18(System_Action_ClassBoardEffectPlayer__TypeInfo);
    System_Action_object____ctor(_9__12_0, v10, Method_ClassBoardEffectController___c__ResetPlayers_b__12_0__, 0LL);
    static_fields = ClassBoardEffectController___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Action_ClassBoardEffectPlayer__o *)_9__12_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__12_0,
      (int64_t)_9__12_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !players
    || (System_Collections_Generic_List_object___ForEach(
          players,
          (System_Action_T__o *)_9__12_0,
          (const MethodInfo_35ECC64 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__),
        (v23 = this->fields.players) == 0LL) )
  {
    sub_1BE4D28(v7, method);
  }
  size = (unsigned int)v23->fields._size;
  v25 = v23->fields._version + 1;
  v23->fields._size = 0;
  v23->fields._version = v25;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)v23->fields._items, 0, size, 0LL);
  this->fields.playEndCallback = 0LL;
  p_playEndCallback = &this->fields.playEndCallback;
  *((_DWORD *)p_playEndCallback - 4) = 0;
  sub_1BE4A70((PartyOrganizationUtility_o *)p_playEndCallback, 0LL, size, v18, v19, v20, v21, v22);
}


void __fastcall ClassBoardEffectController___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B6A11A & 1) == 0 )
  {
    sub_1BE4ACC(&ClassBoardEffectController___c_TypeInfo, v1);
    byte_4B6A11A = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(ClassBoardEffectController___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardEffectController___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectController___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)ClassBoardEffectController___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, 0LL);
  ClassBoardEffectPlayer__End(x, (const MethodInfo *)x);
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
    sub_1BE4D28(this, x);
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
    sub_1BE4D28(this, x);
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
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  struct IClassBoardSquareModel_o *connectSquareModel; // x20
  IClassBoardSquareModel_c *v11; // x8
  int v12; // w19
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0

  v4 = this;
  if ( (byte_4B6A11B & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass15_2_o *)sub_1BE4ACC(&IClassBoardSquareModel_TypeInfo, x);
    byte_4B6A11B = 1;
  }
  if ( !x )
    goto LABEL_19;
  SquareModel_k__BackingField = x->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_19;
  klass = SquareModel_k__BackingField->klass;
  v7 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1C36AAC(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardEffectController___c__DisplayClass15_2_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                 SquareModel_k__BackingField,
                                                                 *(_QWORD *)(p_method + 8));
  connectSquareModel = v4->fields.connectSquareModel;
  if ( !connectSquareModel )
LABEL_19:
    sub_1BE4D28(this, x);
  v11 = connectSquareModel->klass;
  v12 = (int)this;
  v13 = *(unsigned __int16 *)(&connectSquareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&connectSquareModel->klass->_2.bitflags2 + 3) )
  {
    v14 = &v11->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v14 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v13;
      v14 += 4;
      if ( !v13 )
        goto LABEL_16;
    }
    v15 = (__int64)&v11->vtable[*v14].method;
  }
  else
  {
LABEL_16:
    v15 = sub_1C36AAC(connectSquareModel, IClassBoardSquareModel_TypeInfo, 0LL);
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
    sub_1BE4D28(this, x);
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
    sub_1BE4D28(this, x);
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
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *v11; // x8
  int v12; // w19
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0

  v4 = this;
  if ( (byte_4B6A11C & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass16_1_o *)sub_1BE4ACC(&IClassBoardSquareModel_TypeInfo, model);
    byte_4B6A11C = 1;
  }
  if ( !model )
    goto LABEL_19;
  klass = model->klass;
  v6 = *(unsigned __int16 *)(&model->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&model->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C36AAC(model, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardEffectController___c__DisplayClass16_1_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                 model,
                                                                 *(_QWORD *)(p_method + 8));
  square = v4->fields.square;
  if ( !square || (SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField) == 0LL )
LABEL_19:
    sub_1BE4D28(this, model);
  v11 = SquareModel_k__BackingField->klass;
  v12 = (int)this;
  v13 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    v14 = &v11->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v14 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v13;
      v14 += 4;
      if ( !v13 )
        goto LABEL_16;
    }
    v15 = (__int64)&v11->vtable[*v14].method;
  }
  else
  {
LABEL_16:
    v15 = sub_1C36AAC(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return v12 == (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v15)(
                  SquareModel_k__BackingField,
                  *(_QWORD *)(v15 + 8));
}