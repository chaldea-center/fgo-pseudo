void __fastcall ClassBoardEffectController___ctor(
        ClassBoardEffectController_o *this,
        System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squares,
        System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *lines,
        MapCamera_o *camera,
        ClassBoardBackground_o *bg,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x24
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  Il2CppObject *object; // x0
  __int64 v49; // x1
  Il2CppClass *klass; // x20
  _QWORD *image; // x8
  __int64 v52; // x9
  IClassBoardSquareModel_c **v53; // x10
  __int64 v54; // x0

  if ( (byte_4B19693 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_ClassBoardSquare___, squares, lines);
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo, v15, v16);
    byte_4B19693 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo,
                                                       squares,
                                                       lines,
                                                       camera);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__);
  this->fields.players = (struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *)v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.players, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.squareViewList = squares;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)squares, v24, v25, v26, v27, v28, v29);
  this->fields.lineViewList = lines;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.lineViewList, (int64_t)lines, v30, v31, v32, v33, v34, v35);
  this->fields.mapCamera = camera;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mapCamera, (int64_t)camera, v36, v37, v38, v39, v40, v41);
  this->fields.bgModel = bg;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bgModel, (int64_t)bg, v42, v43, v44, v45, v46, v47);
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)squares,
             (const MethodInfo_2F32D3C *)Method_System_Linq_Enumerable_First_ClassBoardSquare___);
  if ( !object || (klass = object[11].klass) == 0LL )
    sub_1BCAA3C(object, v49);
  image = klass->_1.image;
  v52 = *((unsigned __int16 *)klass->_1.image + 151);
  if ( *((_WORD *)klass->_1.image + 151) )
  {
    v53 = (IClassBoardSquareModel_c **)(image[22] + 8LL);
    while ( *(v53 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v52;
      v53 += 2;
      if ( !v52 )
        goto LABEL_9;
    }
    v54 = (__int64)&image[2 * *(_DWORD *)v53 + 41];
  }
  else
  {
LABEL_9:
    v54 = sub_1C1C7C0(object[11].klass, IClassBoardSquareModel_TypeInfo, 1LL);
  }
  this->fields.baseId = (*(__int64 (__fastcall **)(Il2CppClass *, _QWORD))v54)(klass, *(_QWORD *)(v54 + 8));
}


void __fastcall ClassBoardEffectController__CheckPlayEnd(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ClassBoardEffectController_o *v3; // x19
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x9
  int v5; // w8
  struct System_Action_o *playEndCallback; // x8

  v3 = this;
  if ( (byte_4B19698 & 1) == 0 )
  {
    this = (ClassBoardEffectController_o *)sub_1BCA7E0(
                                             &Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__,
                                             method,
                                             v2);
    byte_4B19698 = 1;
  }
  players = v3->fields.players;
  v5 = v3->fields.playEndCount + 1;
  v3->fields.playEndCount = v5;
  if ( !players )
    goto LABEL_7;
  if ( v5 < players->fields._size )
    return;
  playEndCallback = v3->fields.playEndCallback;
  if ( !playEndCallback )
LABEL_7:
    sub_1BCAA3C(this, method);
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
  __int64 v18; // x2
  MapCamera_o *mapCamera; // x23
  __int64 v20; // x1
  UnityEngine_Transform_o *SafeCameraDestination; // x0
  __int64 v22; // x1
  UnityEngine_Transform_o *v23; // x23
  float v24; // s0
  float v25; // s1
  float v26; // s2
  float v27; // s10
  float v28; // s9
  float v29; // s8
  float v30; // s12
  float v31; // s13
  float v32; // s14
  float v33; // s15
  __int64 v34; // x2
  float v35; // s11
  float v36; // s13
  float v37; // s4
  float v38; // s0
  float v39; // s3
  float v40; // s1
  float v41; // s2
  float v42; // [xsp+4h] [xbp-9Ch]
  float v43; // [xsp+8h] [xbp-98h]
  float screenPos; // [xsp+Ch] [xbp-94h]
  System_Nullable_Vector3__o screenPos_4; // [xsp+10h] [xbp-90h] BYREF
  System_Nullable_float__o v46; // 0:x3.8
  System_Nullable_Vector3__o v47; // 0:x0.16
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4B1969C & 1) == 0 )
  {
    sub_1BCA7E0(&MapCameraViewAdjusterUtil_TypeInfo, *(_QWORD *)&maxDistance, *(_QWORD *)&ease);
    sub_1BCA7E0(&Method_System_Nullable_Vector3___ctor__, v17, v18);
    byte_4B1969C = 1;
  }
  *(_QWORD *)&v47.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  mapCamera = this->fields.mapCamera;
  *(_QWORD *)&v47.fields.hasValue = &screenPos_4;
  v48.fields.x = x;
  v48.fields.y = y;
  v48.fields.z = z;
  *(_QWORD *)&screenPos_4.fields.hasValue = 0LL;
  *(_QWORD *)&screenPos_4.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v47, v48, *(const MethodInfo_36C2D28 **)&ease);
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo, v20);
  v46 = 0LL;
  SafeCameraDestination = (UnityEngine_Transform_o *)MapCameraViewAdjusterUtil__GetSafeCameraDestination(
                                                       mapCamera,
                                                       screenPos_4,
                                                       v46,
                                                       0LL);
  if ( !this->fields.mapCamera )
    goto LABEL_20;
  v23 = SafeCameraDestination;
  SafeCameraDestination = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.mapCamera, 0LL);
  if ( !SafeCameraDestination )
    goto LABEL_20;
  *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_localPosition(SafeCameraDestination, 0LL);
  if ( !v23 )
    goto LABEL_20;
  SafeCameraDestination = (UnityEngine_Transform_o *)this->fields.mapCamera;
  v42 = secMax;
  v43 = secMin;
  if ( !SafeCameraDestination )
    goto LABEL_20;
  screenPos = x;
  v27 = y;
  v28 = z;
  v30 = *(float *)&v23->fields.m_CachedPtr;
  v29 = *((float *)&v23->fields + 1);
  v31 = v24;
  v32 = v25;
  v33 = v26;
  SafeCameraDestination = UnityEngine_Component__get_transform((UnityEngine_Component_o *)SafeCameraDestination, 0LL);
  if ( !SafeCameraDestination )
    goto LABEL_20;
  localPosition = UnityEngine_Transform__get_localPosition(SafeCameraDestination, 0LL);
  v35 = localPosition.fields.z;
  if ( !byte_4B109BF )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v22, v34);
    byte_4B109BF = 1;
  }
  v36 = v31 - v30;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v22);
  v37 = sqrtf(
          (float)((float)(v36 * v36) + (float)((float)(v32 - v29) * (float)(v32 - v29)))
        + (float)((float)(v33 - v35) * (float)(v33 - v35)))
      / (float)maxDistance;
  v38 = screenPos;
  v39 = 0.0;
  if ( v37 != 0.0 )
  {
    v39 = v43;
    if ( v37 >= v43 )
    {
      v39 = v42;
      if ( v37 <= v42 )
        v39 = v37;
    }
  }
  SafeCameraDestination = (UnityEngine_Transform_o *)this->fields.mapCamera;
  if ( !SafeCameraDestination )
LABEL_20:
    sub_1BCAA3C(SafeCameraDestination, v22);
  v40 = v27;
  v41 = v28;
  MapCamera__StartAutoMove(
    (MapCamera_o *)SafeCameraDestination,
    *(UnityEngine_Vector3_o *)&v38,
    v39,
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Action_o **p_playEndCallback; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0
  Il2CppObject *v23; // x1
  struct ClassBoardBackground_o *bgModel; // x8
  __int64 v25; // x2
  __int64 v26; // x3
  struct ClassBoardBackground_o *v27; // x8
  struct ClassBoardEffectPlayer_o *v28; // x21
  System_Action_o *v29; // x22
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct ClassBoardBackground_o *v42; // x8
  struct System_String_o *Name_k__BackingField; // x8
  _QWORD *v44; // x9
  __int64 playCallback_low; // x10
  __int64 v46; // x8
  struct System_Action_o *playCallback; // x8

  if ( (byte_4B19695 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_ClassBoardEffectController_PlayNext__, v5, v6);
    sub_1BCA7E0(&Method_ClassBoardEffectPlayer_SetData_int___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__, v13, v14);
    byte_4B19695 = 1;
  }
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)callback);
  this->fields.playEndCallback = callback;
  p_playEndCallback = &this->fields.playEndCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playEndCallback,
    (int64_t)callback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  bgModel = this->fields.bgModel;
  if ( !bgModel )
    goto LABEL_20;
  startMainEffectPlayer = bgModel->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    goto LABEL_20;
  ClassBoardEffectPlayer__SetData_int_(
    startMainEffectPlayer,
    this->fields.baseId,
    (const MethodInfo_2F06970 *)Method_ClassBoardEffectPlayer_SetData_int___);
  v27 = this->fields.bgModel;
  if ( !v27 )
    goto LABEL_20;
  v28 = v27->fields.startMainEffectPlayer;
  v29 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v25, v26);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_ClassBoardEffectController_PlayNext__, 0LL);
  if ( !v28 )
    goto LABEL_20;
  v28->fields.endCallback = v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&v28->fields.endCallback, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  v42 = this->fields.bgModel;
  if ( !v42 )
    goto LABEL_20;
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !startMainEffectPlayer )
    goto LABEL_20;
  v23 = (Il2CppObject *)v42->fields.startMainEffectPlayer;
  Name_k__BackingField = startMainEffectPlayer->fields._Name_k__BackingField;
  v44 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
  ++HIDWORD(startMainEffectPlayer->fields.playCallback);
  if ( !Name_k__BackingField )
    goto LABEL_20;
  playCallback_low = SLODWORD(startMainEffectPlayer->fields.playCallback);
  if ( (unsigned int)playCallback_low >= LODWORD(Name_k__BackingField[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)startMainEffectPlayer,
      v23,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = (__int64)Name_k__BackingField + 8 * playCallback_low;
    LODWORD(startMainEffectPlayer->fields.playCallback) = playCallback_low + 1;
    *(_QWORD *)(v46 + 32) = v23;
    sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 32), (int64_t)v23, v36, v37, v38, v39, v40, v41);
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
    sub_1BCAA3C(startMainEffectPlayer, v23);
  }
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)System_Linq_Enumerable__First_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)startMainEffectPlayer,
                                                        (const MethodInfo_2F32D3C *)Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *players; // x0
  __int64 v7; // x1
  struct System_Action_o *playEndCallback; // x8

  if ( (byte_4B19699 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Item__, v4, v5);
    byte_4B19699 = 1;
  }
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  v7 = (unsigned int)(this->fields.playEndCount + 1);
  this->fields.playEndCount = v7;
  if ( !players )
    goto LABEL_10;
  if ( (int)v7 >= players->fields._size )
  {
    playEndCallback = this->fields.playEndCallback;
    if ( playEndCallback )
      goto LABEL_9;
LABEL_10:
    sub_1BCAA3C(players, v7);
  }
  players = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                           players,
                                                           v7,
                                                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Item__);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_List_object__o *players; // x0
  Il2CppObject *releaseEffectPlayer; // x1
  bool v29; // w2
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x2
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x8
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  Il2CppObject *current; // x25
  System_Action_o *v46; // x20
  __int64 v47; // x0
  __int64 v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  void *monitor; // x8
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B19694 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, releaseSquare, callback);
    sub_1BCA7E0(&Method_ClassBoardEffectController_CheckPlayEnd__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__get_Current__, v13, v14);
    sub_1BCA7E0(&IClassBoardLockModel_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__, v19, v20);
    byte_4B19694 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)releaseSquare);
  this->fields.playEndCallback = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playEndCallback,
    (int64_t)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( !releaseSquare )
    goto LABEL_17;
  v29 = sub_1BCA91C(releaseSquare->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo) != 0;
  ClassBoardEffectController__RegisterConnectingLineBlankPlayer(this, releaseSquare, v29, v30);
  ClassBoardEffectController__RegisterConnectedSquareEnablePlayer(this, releaseSquare, v31);
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  if ( !players )
    goto LABEL_17;
  releaseEffectPlayer = (Il2CppObject *)releaseSquare->fields.releaseEffectPlayer;
  items = players->fields._items;
  v39 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
  ++players->fields._version;
  if ( !items )
    goto LABEL_17;
  size = players->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      players,
      releaseEffectPlayer,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = &items->obj.klass + size;
    players->fields._size = size + 1;
    v41[4] = (Il2CppClass *)releaseEffectPlayer;
    sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)releaseEffectPlayer, v32, v33, v34, v35, v36, v37);
  }
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  if ( !players )
LABEL_17:
    sub_1BCAA3C(players, releaseEffectPlayer);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    players,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__) )
  {
    current = v56.fields._current;
    v46 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v42, v43, v44);
    System_Action___ctor(v46, (Il2CppObject *)this, Method_ClassBoardEffectController_CheckPlayEnd__, 0LL);
    if ( !current )
      sub_1BCAA3C(v47, v48);
    current[2].klass = (Il2CppClass *)v46;
    sub_1BCA784((PartyOrganizationUtility_o *)&current[2], (int64_t)v46, v49, v50, v51, v52, v53, v54);
    monitor = current[1].monitor;
    if ( monitor )
      (*((void (__fastcall **)(_QWORD, _QWORD))monitor + 3))(*((_QWORD *)monitor + 8), *((_QWORD *)monitor + 5));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__);
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
  if ( (byte_4B19696 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, callback, method);
    byte_4B19696 = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, callback);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x22
  __int64 v45; // x0
  __int64 v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x21
  System_Collections_Generic_List_T__o *players; // x19
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Func_object__bool__o *v58; // x23
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  System_Collections_Generic_List_object__o *v62; // x19
  __int64 *v63; // x19
  __int64 v64; // x8
  __int64 v65; // x9
  IClassBoardSquareModel_c **v66; // x10
  __int64 v67; // x0
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squareViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__c *klass; // x8
  __int64 v70; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v73; // x1
  __int64 v74; // x19
  __int64 v75; // x8
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x23
  __int64 v83; // x8
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0
  int64_t v87; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  __int64 v94; // x22
  System_Collections_Generic_List_T__o *v95; // x24
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  System_Func_object__bool__o *v99; // x25
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v103; // x24
  System_Func_object__bool__o *v104; // x25
  Il2CppObject *v105; // x0
  Il2CppObject *v106; // x23
  Il2CppClass *v107; // x8
  __int64 v108; // x9
  IClassBoardSquareModel_c **v109; // x10
  __int64 v110; // x0
  __int64 v111; // x0
  __int64 v112; // x1
  ClassBoardEffectPlayer_o *v113; // x23
  bool v114; // w1
  __int64 v115; // x0
  __int64 v116; // x1
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  System_Collections_Generic_List_object__o *v123; // x0
  Il2CppObject *v124; // x1
  struct System_Object_array *items; // x8
  _QWORD *v126; // x9
  __int64 size; // x10
  Il2CppClass **v128; // x8
  __int64 v129; // x8
  __int64 v130; // x9
  int *v131; // x10
  __int64 v132; // x0
  System_Collections_Generic_List_object__o *v133; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1969B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_ClassBoardEffectPlayer___, releaseSquare, method);
    sub_1BCA7E0(&Method_ClassBoardEffectPlayer_SetData_bool___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___, v8, v9);
    sub_1BCA7E0(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&IClassBoardLockModel_TypeInfo, v14, v15);
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v16, v17);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo, v22, v23);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__, v30, v31);
    sub_1BCA7E0(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v32, v33);
    sub_1BCA7E0(
      &Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectedSquareEnablePlayer_b__0__,
      v34,
      v35);
    sub_1BCA7E0(&ClassBoardEffectController___c__DisplayClass16_0_TypeInfo, v36, v37);
    sub_1BCA7E0(
      &Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__1__,
      v38,
      v39);
    sub_1BCA7E0(
      &Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__2__,
      v40,
      v41);
    sub_1BCA7E0(&ClassBoardEffectController___c__DisplayClass16_1_TypeInfo, v42, v43);
    byte_4B1969B = 1;
  }
  v44 = sub_1BCAA2C(ClassBoardEffectController___c__DisplayClass16_0_TypeInfo, releaseSquare, method, v3);
  System_Object___ctor((Il2CppObject *)v44, 0LL);
  if ( !v44 )
    goto LABEL_64;
  *(_QWORD *)(v44 + 16) = releaseSquare;
  v53 = v44 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 16), (int64_t)releaseSquare, v47, v48, v49, v50, v51, v52);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v58 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ClassBoardEffectPlayer__bool__TypeInfo, v55, v56, v57);
  System_Func_object__bool____ctor(
    v58,
    (Il2CppObject *)v44,
    Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectedSquareEnablePlayer_b__0__,
    0LL);
  if ( BasicHelper__Any_object_(
         players,
         (System_Func_T__bool__o *)v58,
         (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
  {
    return;
  }
  v62 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                       v59,
                                                       v60,
                                                       v61);
  System_Collections_Generic_List_object____ctor(
    v62,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  v133 = v62;
  if ( !*(_QWORD *)v53 )
    goto LABEL_64;
  v63 = *(__int64 **)(*(_QWORD *)v53 + 176LL);
  if ( !v63 )
    goto LABEL_64;
  v64 = *v63;
  v65 = *(unsigned __int16 *)(*v63 + 302);
  if ( *(_WORD *)(*v63 + 302) )
  {
    v66 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v64 + 176) + 8LL);
    while ( *(v66 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v65;
      v66 += 2;
      if ( !v65 )
        goto LABEL_11;
    }
    v67 = v64 + 16LL * (*(_DWORD *)v66 + 15) + 312;
  }
  else
  {
LABEL_11:
    v67 = sub_1C1C7C0(v63, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  v45 = (*(__int64 (__fastcall **)(__int64 *, System_Collections_Generic_List_object__o **, _QWORD))v67)(
          v63,
          &v133,
          *(_QWORD *)(v67 + 8));
  if ( v133 && v133->fields._size >= 1 )
  {
    squareViewList = this->fields.squareViewList;
    if ( squareViewList )
    {
      klass = squareViewList->klass;
      v70 = *(unsigned __int16 *)(&squareViewList->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&squareViewList->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_ClassBoardSquare__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo )
        {
          --v70;
          p_offset += 4;
          if ( !v70 )
            goto LABEL_20;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_20:
        p_method = sub_1C1C7C0(
                     this->fields.squareViewList,
                     System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo,
                     0LL);
      }
      v74 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *, _QWORD))p_method)(
              squareViewList,
              *(_QWORD *)(p_method + 8));
      if ( !v74 )
        sub_1BCAA3C(0LL, v73);
      while ( 1 )
      {
        v75 = *(_QWORD *)v74;
        v76 = *(unsigned __int16 *)(*(_QWORD *)v74 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v74 + 302LL) )
        {
          v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v77 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v76;
            v77 += 4;
            if ( !v76 )
              goto LABEL_27;
          }
          v78 = v75 + 16LL * *v77 + 312;
        }
        else
        {
LABEL_27:
          v78 = sub_1C1C7C0(v74, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v78)(v74, *(_QWORD *)(v78 + 8)) & 1) == 0 )
          break;
        v82 = sub_1BCAA2C(ClassBoardEffectController___c__DisplayClass16_1_TypeInfo, v79, v80, v81);
        System_Object___ctor((Il2CppObject *)v82, 0LL);
        v83 = *(_QWORD *)v74;
        v84 = *(unsigned __int16 *)(*(_QWORD *)v74 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v74 + 302LL) )
        {
          v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_ClassBoardSquare__c **)v85 - 1) != System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo )
          {
            --v84;
            v85 += 4;
            if ( !v84 )
              goto LABEL_34;
          }
          v86 = v83 + 16LL * *v85 + 312;
        }
        else
        {
LABEL_34:
          v86 = sub_1C1C7C0(v74, System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo, 0LL);
        }
        v87 = (*(__int64 (__fastcall **)(__int64, _QWORD))v86)(v74, *(_QWORD *)(v86 + 8));
        if ( !v82 )
          sub_1BCAA3C(v87, v87);
        *(_QWORD *)(v82 + 16) = v87;
        v94 = v82 + 16;
        sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 16), v87, v88, v89, v90, v91, v92, v93);
        v95 = (System_Collections_Generic_List_T__o *)this->fields.players;
        v99 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                               System_Func_ClassBoardEffectPlayer__bool__TypeInfo,
                                               v96,
                                               v97,
                                               v98);
        System_Func_object__bool____ctor(
          v99,
          (Il2CppObject *)v82,
          Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__1__,
          0LL);
        if ( !BasicHelper__Any_object_(
                v95,
                (System_Func_T__bool__o *)v99,
                (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
        {
          v103 = (System_Collections_Generic_IEnumerable_TSource__o *)v133;
          v104 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_IClassBoardSquareModel__bool__TypeInfo,
                                                  v100,
                                                  v101,
                                                  v102);
          System_Func_object__bool____ctor(
            v104,
            (Il2CppObject *)v82,
            Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__2__,
            0LL);
          v105 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
                   v103,
                   (System_Func_TSource__bool__o *)v104,
                   (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
          v106 = v105;
          if ( v105 )
          {
            v107 = v105->klass;
            v108 = *(unsigned __int16 *)(&v105->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v105->klass->_2.bitflags2 + 3) )
            {
              v109 = (IClassBoardSquareModel_c **)&v107->_1.interfaceOffsets->offset;
              while ( *(v109 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                --v108;
                v109 += 2;
                if ( !v108 )
                  goto LABEL_43;
              }
              v110 = (__int64)&v107->vtable[*(_DWORD *)v109 + 13].method;
            }
            else
            {
LABEL_43:
              v110 = sub_1C1C7C0(v105, IClassBoardSquareModel_TypeInfo, 13LL);
            }
            v111 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v110)(v106, 0LL, *(_QWORD *)(v110 + 8));
            if ( (v111 & 1) == 0 )
            {
              if ( !*(_QWORD *)v94 )
                sub_1BCAA3C(v111, v112);
              if ( !*(_QWORD *)v53 )
                sub_1BCAA3C(v111, v112);
              v113 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v94 + 160LL);
              if ( !v113 )
                sub_1BCAA3C(v111, v112);
              v114 = sub_1BCA91C(*(_QWORD *)(*(_QWORD *)v53 + 176LL), IClassBoardLockModel_TypeInfo) != 0;
              ClassBoardEffectPlayer__SetData_bool_(
                v113,
                v114,
                (const MethodInfo_2F06910 *)Method_ClassBoardEffectPlayer_SetData_bool___);
              if ( !*(_QWORD *)v94 )
                sub_1BCAA3C(v115, v116);
              v123 = (System_Collections_Generic_List_object__o *)this->fields.players;
              if ( !v123 )
                sub_1BCAA3C(0LL, v116);
              v124 = *(Il2CppObject **)(*(_QWORD *)v94 + 160LL);
              items = v123->fields._items;
              v126 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
              ++v123->fields._version;
              if ( !items )
                sub_1BCAA3C(v123, v124);
              size = v123->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v123,
                  v124,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
              }
              else
              {
                v128 = &items->obj.klass + size;
                v123->fields._size = size + 1;
                v128[4] = (Il2CppClass *)v124;
                sub_1BCA784((PartyOrganizationUtility_o *)(v128 + 4), (int64_t)v124, v117, v118, v119, v120, v121, v122);
              }
            }
          }
        }
      }
      v129 = *(_QWORD *)v74;
      v130 = *(unsigned __int16 *)(*(_QWORD *)v74 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v74 + 302LL) )
      {
        v131 = (int *)(*(_QWORD *)(v129 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v131 - 1) != System_IDisposable_TypeInfo )
        {
          --v130;
          v131 += 4;
          if ( !v130 )
            goto LABEL_59;
        }
        v132 = v129 + 16LL * *v131 + 312;
      }
      else
      {
LABEL_59:
        v132 = sub_1C1C7C0(v74, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v132)(v74, *(_QWORD *)(v132 + 8));
      return;
    }
LABEL_64:
    sub_1BCAA3C(v45, v46);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x23
  _BOOL8 v43; // x0
  __int64 v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x22
  System_Collections_Generic_List_T__o *players; // x19
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Func_object__bool__o *v56; // x24
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *lineViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__c *klass; // x8
  __int64 v59; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v62; // x1
  __int64 v63; // x19
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x25
  __int64 v72; // x8
  __int64 v73; // x9
  int *v74; // x10
  __int64 v75; // x0
  int64_t v76; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  __int64 v83; // x24
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x23
  System_Collections_Generic_List_T__o *v88; // x26
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  System_Func_object__bool__o *v92; // x27
  _BOOL8 v93; // x0
  __int64 v94; // x1
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  int64_t *v101; // x25
  __int64 v102; // x0
  __int64 v103; // x1
  __int64 *v104; // x26
  __int64 v105; // x8
  __int64 v106; // x9
  IClassBoardLineModel_c **v107; // x10
  __int64 v108; // x0
  __int64 v109; // x0
  __int64 v110; // x1
  __int64 v111; // x26
  __int64 v112; // x8
  __int64 v113; // x9
  int *v114; // x10
  __int64 v115; // x0
  __int64 v116; // x0
  __int64 v117; // x1
  __int64 *v118; // x27
  __int64 v119; // x8
  int v120; // w26
  __int64 v121; // x9
  int *v122; // x10
  __int64 v123; // x0
  __int64 v124; // x0
  __int64 v125; // x1
  __int64 v126; // x8
  __int64 *v127; // x26
  __int64 v128; // x8
  __int64 v129; // x9
  int *v130; // x10
  __int64 v131; // x0
  __int64 *v132; // x26
  __int64 v133; // x8
  __int64 v134; // x9
  int *v135; // x10
  __int64 v136; // x0
  __int64 v137; // x0
  __int64 v138; // x1
  __int64 v139; // x26
  __int64 v140; // x8
  __int64 v141; // x9
  int *v142; // x10
  __int64 v143; // x0
  __int64 v144; // x0
  __int64 v145; // x1
  __int64 *v146; // x27
  __int64 v147; // x8
  int v148; // w26
  __int64 v149; // x9
  int *v150; // x10
  __int64 v151; // x0
  __int64 v152; // x0
  __int64 v153; // x1
  __int64 v154; // x8
  __int64 v155; // x9
  IClassBoardLineModel_c **v156; // x10
  int64_t v157; // x0
  int64_t v158; // x2
  int32_t v159; // w3
  System_String_o *v160; // x4
  BattleSetupInfo_o *v161; // x5
  FollowerInfo_o *v162; // x6
  PartyListViewItem_o *v163; // x7
  ClassBoardEffectPlayer_o *v164; // x0
  __int64 v165; // x0
  __int64 v166; // x1
  int64_t v167; // x2
  int32_t v168; // w3
  System_String_o *v169; // x4
  BattleSetupInfo_o *v170; // x5
  FollowerInfo_o *v171; // x6
  PartyListViewItem_o *v172; // x7
  System_Collections_Generic_List_object__o *v173; // x0
  Il2CppObject *v174; // x1
  struct System_Object_array *items; // x8
  _QWORD *v176; // x9
  __int64 size; // x10
  Il2CppClass **v178; // x8
  __int64 v179; // x0
  __int64 v180; // x1
  int64_t v181; // x24
  __int64 v182; // x8
  __int64 v183; // x9
  IClassBoardSquareModel_c **v184; // x10
  __int64 v185; // x0
  __int64 v186; // x1
  __int64 v187; // x2
  __int64 v188; // x3
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squareViewList; // x24
  System_Func_object__bool__o *v190; // x25
  __int64 v191; // x1
  ClassBoardSquare_o *v192; // x23
  const MethodInfo *v193; // x3
  __int64 v194; // x0
  __int64 v195; // x1
  ClassBoardEffectPlayer_o *enableEffectPlayer; // x0
  __int64 v197; // x1
  int64_t v198; // x2
  int32_t v199; // w3
  System_String_o *v200; // x4
  BattleSetupInfo_o *v201; // x5
  FollowerInfo_o *v202; // x6
  PartyListViewItem_o *v203; // x7
  System_Collections_Generic_List_object__o *v204; // x0
  Il2CppObject *v205; // x1
  struct System_Object_array *v206; // x8
  _QWORD *v207; // x9
  __int64 v208; // x10
  Il2CppClass **v209; // x8
  __int64 v210; // x8
  __int64 v211; // x9
  int *v212; // x10
  __int64 v213; // x0

  if ( (byte_4B1969A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_ClassBoardEffectPlayer___, releaseSquare, isLock);
    sub_1BCA7E0(&Method_ClassBoardEffectPlayer_SetData_bool___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___, v8, v9);
    sub_1BCA7E0(&System_Func_ClassBoardSquare__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&IClassBoardLineModel_TypeInfo, v14, v15);
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v16, v17);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo, v22, v23);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v26, v27);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v28, v29);
    sub_1BCA7E0(
      &Method_ClassBoardEffectController___c__DisplayClass15_0__RegisterConnectingLineBlankPlayer_b__0__,
      v30,
      v31);
    sub_1BCA7E0(&ClassBoardEffectController___c__DisplayClass15_0_TypeInfo, v32, v33);
    sub_1BCA7E0(
      &Method_ClassBoardEffectController___c__DisplayClass15_1__RegisterConnectingLineBlankPlayer_b__1__,
      v34,
      v35);
    sub_1BCA7E0(&ClassBoardEffectController___c__DisplayClass15_1_TypeInfo, v36, v37);
    sub_1BCA7E0(
      &Method_ClassBoardEffectController___c__DisplayClass15_2__RegisterConnectingLineBlankPlayer_b__2__,
      v38,
      v39);
    sub_1BCA7E0(&ClassBoardEffectController___c__DisplayClass15_2_TypeInfo, v40, v41);
    byte_4B1969A = 1;
  }
  v42 = sub_1BCAA2C(ClassBoardEffectController___c__DisplayClass15_0_TypeInfo, releaseSquare, isLock, method);
  System_Object___ctor((Il2CppObject *)v42, 0LL);
  if ( !v42 )
    goto LABEL_151;
  *(_QWORD *)(v42 + 16) = releaseSquare;
  v51 = v42 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 16), (int64_t)releaseSquare, v45, v46, v47, v48, v49, v50);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v56 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ClassBoardEffectPlayer__bool__TypeInfo, v53, v54, v55);
  System_Func_object__bool____ctor(
    v56,
    (Il2CppObject *)v42,
    Method_ClassBoardEffectController___c__DisplayClass15_0__RegisterConnectingLineBlankPlayer_b__0__,
    0LL);
  v43 = BasicHelper__Any_object_(
          players,
          (System_Func_T__bool__o *)v56,
          (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
  if ( v43 )
    return;
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList )
LABEL_151:
    sub_1BCAA3C(v43, v44);
  klass = lineViewList->klass;
  v59 = *(unsigned __int16 *)(&lineViewList->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lineViewList->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ClassBoardLine__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo )
    {
      --v59;
      p_offset += 4;
      if ( !v59 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1C1C7C0(
                 this->fields.lineViewList,
                 System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo,
                 0LL);
  }
  v63 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *, _QWORD))p_method)(
          lineViewList,
          *(_QWORD *)(p_method + 8));
  if ( !v63 )
    sub_1BCAA3C(0LL, v62);
  while ( 1 )
  {
    v64 = *(_QWORD *)v63;
    v65 = *(unsigned __int16 *)(*(_QWORD *)v63 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v63 + 302LL) )
    {
      v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v66 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v65;
        v66 += 4;
        if ( !v65 )
          goto LABEL_17;
      }
      v67 = v64 + 16LL * *v66 + 312;
    }
    else
    {
LABEL_17:
      v67 = sub_1C1C7C0(v63, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v67)(v63, *(_QWORD *)(v67 + 8)) & 1) == 0 )
      break;
    v71 = sub_1BCAA2C(ClassBoardEffectController___c__DisplayClass15_1_TypeInfo, v68, v69, v70);
    System_Object___ctor((Il2CppObject *)v71, 0LL);
    v72 = *(_QWORD *)v63;
    v73 = *(unsigned __int16 *)(*(_QWORD *)v63 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v63 + 302LL) )
    {
      v74 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardLine__c **)v74 - 1) != System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo )
      {
        --v73;
        v74 += 4;
        if ( !v73 )
          goto LABEL_24;
      }
      v75 = v72 + 16LL * *v74 + 312;
    }
    else
    {
LABEL_24:
      v75 = sub_1C1C7C0(v63, System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo, 0LL);
    }
    v76 = (*(__int64 (__fastcall **)(__int64, _QWORD))v75)(v63, *(_QWORD *)(v75 + 8));
    if ( !v71 )
      sub_1BCAA3C(v76, v76);
    *(_QWORD *)(v71 + 16) = v76;
    v83 = v71 + 16;
    sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 16), v76, v77, v78, v79, v80, v81, v82);
    v87 = sub_1BCAA2C(ClassBoardEffectController___c__DisplayClass15_2_TypeInfo, v84, v85, v86);
    System_Object___ctor((Il2CppObject *)v87, 0LL);
    v88 = (System_Collections_Generic_List_T__o *)this->fields.players;
    v92 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ClassBoardEffectPlayer__bool__TypeInfo, v89, v90, v91);
    System_Func_object__bool____ctor(
      v92,
      (Il2CppObject *)v71,
      Method_ClassBoardEffectController___c__DisplayClass15_1__RegisterConnectingLineBlankPlayer_b__1__,
      0LL);
    v93 = BasicHelper__Any_object_(
            v88,
            (System_Func_T__bool__o *)v92,
            (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    if ( !v93 )
    {
      if ( !v87 )
        sub_1BCAA3C(v93, v94);
      *(_QWORD *)(v87 + 16) = 0LL;
      v101 = (int64_t *)(v87 + 16);
      sub_1BCA784((PartyOrganizationUtility_o *)(v87 + 16), 0LL, v95, v96, v97, v98, v99, v100);
      if ( !*(_QWORD *)v83 )
        sub_1BCAA3C(v102, v103);
      v104 = *(__int64 **)(*(_QWORD *)v83 + 168LL);
      if ( !v104 )
        sub_1BCAA3C(v102, v103);
      v105 = *v104;
      v106 = *(unsigned __int16 *)(*v104 + 302);
      if ( *(_WORD *)(*v104 + 302) )
      {
        v107 = (IClassBoardLineModel_c **)(*(_QWORD *)(v105 + 176) + 8LL);
        while ( *(v107 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v106;
          v107 += 2;
          if ( !v106 )
            goto LABEL_35;
        }
        v108 = v105 + 16LL * (*(_DWORD *)v107 + 1) + 312;
      }
      else
      {
LABEL_35:
        v108 = sub_1C1C7C0(v104, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v109 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v108)(v104, *(_QWORD *)(v108 + 8));
      v111 = v109;
      if ( !v109 )
        sub_1BCAA3C(0LL, v110);
      v112 = *(_QWORD *)v109;
      v113 = *(unsigned __int16 *)(*(_QWORD *)v109 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v109 + 302LL) )
      {
        v114 = (int *)(*(_QWORD *)(v112 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v114 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v113;
          v114 += 4;
          if ( !v113 )
            goto LABEL_42;
        }
        v115 = v112 + 16LL * *v114 + 312;
      }
      else
      {
LABEL_42:
        v115 = sub_1C1C7C0(v109, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v116 = (*(__int64 (__fastcall **)(__int64, _QWORD))v115)(v111, *(_QWORD *)(v115 + 8));
      if ( !*(_QWORD *)v51 )
        sub_1BCAA3C(v116, v117);
      v118 = *(__int64 **)(*(_QWORD *)v51 + 176LL);
      if ( !v118 )
        sub_1BCAA3C(v116, v117);
      v119 = *v118;
      v120 = v116;
      v121 = *(unsigned __int16 *)(*v118 + 302);
      if ( *(_WORD *)(*v118 + 302) )
      {
        v122 = (int *)(*(_QWORD *)(v119 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v122 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v121;
          v122 += 4;
          if ( !v121 )
            goto LABEL_50;
        }
        v123 = v119 + 16LL * *v122 + 312;
      }
      else
      {
LABEL_50:
        v123 = sub_1C1C7C0(v118, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v124 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v123)(v118, *(_QWORD *)(v123 + 8));
      v126 = *(_QWORD *)v83;
      if ( v120 == (_DWORD)v124 )
      {
        if ( !v126 )
          sub_1BCAA3C(v124, v125);
        v127 = *(__int64 **)(v126 + 168);
        if ( !v127 )
          sub_1BCAA3C(v124, v125);
        v128 = *v127;
        v129 = *(unsigned __int16 *)(*v127 + 302);
        if ( *(_WORD *)(*v127 + 302) )
        {
          v130 = (int *)(*(_QWORD *)(v128 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v130 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v129;
            v130 += 4;
            if ( !v129 )
              goto LABEL_59;
          }
          v131 = v128 + 16LL * *v130 + 312;
        }
        else
        {
LABEL_59:
          v131 = sub_1C1C7C0(v127, IClassBoardLineModel_TypeInfo, 0LL);
        }
LABEL_93:
        v157 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v131)(v127, *(_QWORD *)(v131 + 8));
        *v101 = v157;
        sub_1BCA784((PartyOrganizationUtility_o *)(v87 + 16), v157, v158, v159, v160, v161, v162, v163);
        goto LABEL_94;
      }
      if ( !v126 )
        sub_1BCAA3C(v124, v125);
      v132 = *(__int64 **)(v126 + 168);
      if ( !v132 )
        sub_1BCAA3C(v124, v125);
      v133 = *v132;
      v134 = *(unsigned __int16 *)(*v132 + 302);
      if ( *(_WORD *)(*v132 + 302) )
      {
        v135 = (int *)(*(_QWORD *)(v133 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v135 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v134;
          v135 += 4;
          if ( !v134 )
            goto LABEL_66;
        }
        v136 = v133 + 16LL * *v135 + 312;
      }
      else
      {
LABEL_66:
        v136 = sub_1C1C7C0(v132, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v137 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v136)(v132, *(_QWORD *)(v136 + 8));
      v139 = v137;
      if ( !v137 )
        sub_1BCAA3C(0LL, v138);
      v140 = *(_QWORD *)v137;
      v141 = *(unsigned __int16 *)(*(_QWORD *)v137 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v137 + 302LL) )
      {
        v142 = (int *)(*(_QWORD *)(v140 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v142 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v141;
          v142 += 4;
          if ( !v141 )
            goto LABEL_74;
        }
        v143 = v140 + 16LL * *v142 + 312;
      }
      else
      {
LABEL_74:
        v143 = sub_1C1C7C0(v137, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v144 = (*(__int64 (__fastcall **)(__int64, _QWORD))v143)(v139, *(_QWORD *)(v143 + 8));
      if ( !*(_QWORD *)v51 )
        sub_1BCAA3C(v144, v145);
      v146 = *(__int64 **)(*(_QWORD *)v51 + 176LL);
      if ( !v146 )
        sub_1BCAA3C(v144, v145);
      v147 = *v146;
      v148 = v144;
      v149 = *(unsigned __int16 *)(*v146 + 302);
      if ( *(_WORD *)(*v146 + 302) )
      {
        v150 = (int *)(*(_QWORD *)(v147 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v150 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v149;
          v150 += 4;
          if ( !v149 )
            goto LABEL_82;
        }
        v151 = v147 + 16LL * *v150 + 312;
      }
      else
      {
LABEL_82:
        v151 = sub_1C1C7C0(v146, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v152 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v151)(v146, *(_QWORD *)(v151 + 8));
      if ( v148 == (_DWORD)v152 )
      {
        if ( !*(_QWORD *)v83 )
          sub_1BCAA3C(v152, v153);
        v127 = *(__int64 **)(*(_QWORD *)v83 + 168LL);
        if ( !v127 )
          sub_1BCAA3C(v152, v153);
        v154 = *v127;
        v155 = *(unsigned __int16 *)(*v127 + 302);
        if ( *(_WORD *)(*v127 + 302) )
        {
          v156 = (IClassBoardLineModel_c **)(*(_QWORD *)(v154 + 176) + 8LL);
          while ( *(v156 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v155;
            v156 += 2;
            if ( !v155 )
              goto LABEL_91;
          }
          v131 = v154 + 16LL * (*(_DWORD *)v156 + 1) + 312;
        }
        else
        {
LABEL_91:
          v131 = sub_1C1C7C0(v127, IClassBoardLineModel_TypeInfo, 1LL);
        }
        goto LABEL_93;
      }
LABEL_94:
      if ( *v101 )
      {
        if ( !*(_QWORD *)v83 )
          sub_1BCAA3C(v152, v153);
        v164 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v83 + 152LL);
        if ( !v164 )
          sub_1BCAA3C(0LL, v153);
        ClassBoardEffectPlayer__SetData_bool_(
          v164,
          isLock,
          (const MethodInfo_2F06910 *)Method_ClassBoardEffectPlayer_SetData_bool___);
        if ( !*(_QWORD *)v83 )
          sub_1BCAA3C(v165, v166);
        v173 = (System_Collections_Generic_List_object__o *)this->fields.players;
        if ( !v173 )
          sub_1BCAA3C(0LL, v166);
        v174 = *(Il2CppObject **)(*(_QWORD *)v83 + 152LL);
        items = v173->fields._items;
        v176 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
        ++v173->fields._version;
        if ( !items )
          sub_1BCAA3C(v173, v174);
        size = v173->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v173,
            v174,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v176[4] + 192LL) + 112LL));
        }
        else
        {
          v178 = &items->obj.klass + size;
          v173->fields._size = size + 1;
          v178[4] = (Il2CppClass *)v174;
          sub_1BCA784((PartyOrganizationUtility_o *)(v178 + 4), (int64_t)v174, v167, v168, v169, v170, v171, v172);
        }
        v181 = *v101;
        if ( !*v101 )
          sub_1BCAA3C(v179, v180);
        v182 = *(_QWORD *)v181;
        v183 = *(unsigned __int16 *)(*(_QWORD *)v181 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v181 + 302LL) )
        {
          v184 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v182 + 176) + 8LL);
          while ( *(v184 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            --v183;
            v184 += 2;
            if ( !v183 )
              goto LABEL_108;
          }
          v185 = v182 + 16LL * (*(_DWORD *)v184 + 5) + 312;
        }
        else
        {
LABEL_108:
          v185 = sub_1C1C7C0(*v101, IClassBoardSquareModel_TypeInfo, 5LL);
        }
        if ( ((*(__int64 (__fastcall **)(int64_t, _QWORD))v185)(v181, *(_QWORD *)(v185 + 8)) & 1) != 0 )
        {
          squareViewList = this->fields.squareViewList;
          v190 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_ClassBoardSquare__bool__TypeInfo,
                                                  v186,
                                                  v187,
                                                  v188);
          System_Func_object__bool____ctor(
            v190,
            (Il2CppObject *)v87,
            Method_ClassBoardEffectController___c__DisplayClass15_2__RegisterConnectingLineBlankPlayer_b__2__,
            0LL);
          v192 = (ClassBoardSquare_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)squareViewList,
                                         (System_Func_TSource__bool__o *)v190,
                                         (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v191);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v192, 0LL, 0LL) )
          {
            ClassBoardEffectController__RegisterConnectingLineBlankPlayer(this, v192, isLock, v193);
            if ( !v192 )
              sub_1BCAA3C(v194, v195);
            enableEffectPlayer = v192->fields.enableEffectPlayer;
            if ( !enableEffectPlayer )
              sub_1BCAA3C(0LL, v195);
            ClassBoardEffectPlayer__SetData_bool_(
              enableEffectPlayer,
              isLock,
              (const MethodInfo_2F06910 *)Method_ClassBoardEffectPlayer_SetData_bool___);
            v204 = (System_Collections_Generic_List_object__o *)this->fields.players;
            if ( !v204 )
              sub_1BCAA3C(0LL, v197);
            v205 = (Il2CppObject *)v192->fields.enableEffectPlayer;
            v206 = v204->fields._items;
            v207 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
            ++v204->fields._version;
            if ( !v206 )
              sub_1BCAA3C(v204, v205);
            v208 = v204->fields._size;
            if ( (unsigned int)v208 >= v206->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v204,
                v205,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v207[4] + 192LL) + 112LL));
            }
            else
            {
              v209 = &v206->obj.klass + v208;
              v204->fields._size = v208 + 1;
              v209[4] = (Il2CppClass *)v205;
              sub_1BCA784((PartyOrganizationUtility_o *)(v209 + 4), (int64_t)v205, v198, v199, v200, v201, v202, v203);
            }
          }
        }
      }
    }
  }
  v210 = *(_QWORD *)v63;
  v211 = *(unsigned __int16 *)(*(_QWORD *)v63 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v63 + 302LL) )
  {
    v212 = (int *)(*(_QWORD *)(v210 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v212 - 1) != System_IDisposable_TypeInfo )
    {
      --v211;
      v212 += 4;
      if ( !v211 )
        goto LABEL_125;
    }
    v213 = v210 + 16LL * *v212 + 312;
  }
  else
  {
LABEL_125:
    v213 = sub_1C1C7C0(v63, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v213)(v63, *(_QWORD *)(v213 + 8));
}


void __fastcall ClassBoardEffectController__ResetPlayers(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  ClassBoardEffectController___c_c *v13; // x0
  System_Collections_Generic_List_object__o *players; // x20
  System_Action_object__o *_9__12_0; // x21
  Il2CppObject *v16; // x22
  struct ClassBoardEffectController___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v29; // x8
  int64_t size; // x2
  int v31; // w9
  struct System_Action_o **p_playEndCallback; // x19

  if ( (byte_4B19697 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_ClassBoardEffectPlayer__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Clear__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__, v7, v8);
    sub_1BCA7E0(&Method_ClassBoardEffectController___c__ResetPlayers_b__12_0__, v9, v10);
    sub_1BCA7E0(&ClassBoardEffectController___c_TypeInfo, v11, v12);
    byte_4B19697 = 1;
  }
  v13 = ClassBoardEffectController___c_TypeInfo;
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  if ( !ClassBoardEffectController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectController___c_TypeInfo, method);
    v13 = ClassBoardEffectController___c_TypeInfo;
  }
  _9__12_0 = (System_Action_object__o *)v13->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = ClassBoardEffectController___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__12_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_ClassBoardEffectPlayer__TypeInfo, method, v2, v3);
    System_Action_object____ctor(_9__12_0, v16, Method_ClassBoardEffectController___c__ResetPlayers_b__12_0__, 0LL);
    static_fields = ClassBoardEffectController___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Action_ClassBoardEffectPlayer__o *)_9__12_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__12_0,
      (int64_t)_9__12_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !players
    || (System_Collections_Generic_List_object___ForEach(
          players,
          (System_Action_T__o *)_9__12_0,
          (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__),
        (v29 = this->fields.players) == 0LL) )
  {
    sub_1BCAA3C(v13, method);
  }
  size = (unsigned int)v29->fields._size;
  v31 = v29->fields._version + 1;
  v29->fields._size = 0;
  v29->fields._version = v31;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)v29->fields._items, 0, size, 0LL);
  this->fields.playEndCallback = 0LL;
  p_playEndCallback = &this->fields.playEndCallback;
  *((_DWORD *)p_playEndCallback - 4) = 0;
  sub_1BCA784((PartyOrganizationUtility_o *)p_playEndCallback, 0LL, size, v24, v25, v26, v27, v28);
}


void __fastcall ClassBoardEffectController___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1969D & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardEffectController___c_TypeInfo, v1, v2);
    byte_4B1969D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ClassBoardEffectController___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ClassBoardEffectController___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectController___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ClassBoardEffectController___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
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
  if ( (byte_4B1969E & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass15_2_o *)sub_1BCA7E0(
                                                                   &IClassBoardSquareModel_TypeInfo,
                                                                   x,
                                                                   method);
    byte_4B1969E = 1;
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
    p_method = sub_1C1C7C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardEffectController___c__DisplayClass15_2_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                 SquareModel_k__BackingField,
                                                                 *(_QWORD *)(p_method + 8));
  connectSquareModel = v4->fields.connectSquareModel;
  if ( !connectSquareModel )
LABEL_19:
    sub_1BCAA3C(this, x);
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
    v15 = sub_1C1C7C0(connectSquareModel, IClassBoardSquareModel_TypeInfo, 0LL);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
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
  if ( (byte_4B1969F & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass16_1_o *)sub_1BCA7E0(
                                                                   &IClassBoardSquareModel_TypeInfo,
                                                                   model,
                                                                   method);
    byte_4B1969F = 1;
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
    p_method = sub_1C1C7C0(model, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardEffectController___c__DisplayClass16_1_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                 model,
                                                                 *(_QWORD *)(p_method + 8));
  square = v4->fields.square;
  if ( !square || (SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField) == 0LL )
LABEL_19:
    sub_1BCAA3C(this, model);
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
    v15 = sub_1C1C7C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return v12 == (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v15)(
                  SquareModel_k__BackingField,
                  *(_QWORD *)(v15 + 8));
}