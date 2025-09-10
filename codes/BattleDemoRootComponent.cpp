void BattleDemoRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C2ABBF & 1) == 0 )
  {
    sub_1C2D490(&BattleDemoRootComponent_TypeInfo);
    byte_4C2ABBF = 1;
  }
  LODWORD(BattleDemoRootComponent_TypeInfo->static_fields->BGM_FADEOUT_TIME) = (struct BattleDemoRootComponent_StaticFields)1065353216;
}


void BattleDemoRootComponent___ctor(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleDemoRootComponent__CreateActorObject(
        BattleDemoRootComponent_o *this,
        int32_t uniqueIdStart,
        System_String_array *chrInfos,
        UnityEngine_GameObject_array *actors,
        bool isPlayer,
        const MethodInfo *method)
{
  char *FieldMotion; // x0
  const MethodInfo *v10; // x2
  il2cpp_array_size_t max_length; // x8
  int32_t v12; // w23
  BattleFieldMotionComponent_o *v13; // x25
  unsigned __int64 v14; // x24
  System_String_o *v15; // x21
  BattleDemoRootComponent_o *ServantIdByInfo; // x0
  const MethodInfo *v17; // x2
  int32_t LimitCountByInfo; // w26
  Il2CppObject *actorPrefab; // x21
  const MethodInfo *v20; // x3
  int32_t v21; // w27
  UnityEngine_GameObject_o *v22; // x28
  Il2CppClass **v23; // x0
  UnityEngine_Transform_o *v24; // x21
  UnityEngine_Transform_o *v25; // x21
  UnityEngine_Transform_o *v26; // x21
  UnityEngine_Transform_o *v27; // x21
  BattleFieldMotionComponent_o *v28; // x20
  System_String_array *v29; // x25
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct BattlePerformance_o *performance; // x1
  BattleActorControl_o *v33; // x28
  BattleServantData_o *v34; // x22
  System_Collections_Generic_Dictionary_object__int__o *v35; // x21
  UnityEngine_GameObject_o *v36; // x19
  struct BattlePerformance_o *v37; // x8
  UnityEngine_Transform_o *PlayerPopTr; // x0
  UnityEngine_GameObject_o *v39; // x19
  struct BattlePerformance_o *v40; // x8
  UnityEngine_Component_o *v41; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_array *v43; // [xsp+8h] [xbp-88h]
  System_String_o **m_Items; // [xsp+18h] [xbp-78h]
  int32_t v47; // [xsp+20h] [xbp-70h]
  BattleDemoRootComponent_o *v48; // [xsp+28h] [xbp-68h]

  if ( (byte_4C2ABB0 & 1) == 0 )
  {
    sub_1C2D490(&BattleServantData_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleFieldMotionComponent___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_21215/*"limitCount"*/);
    sub_1C2D490(&StringLiteral_23846/*"svtId"*/);
    sub_1C2D490(&StringLiteral_20738/*"index"*/);
    sub_1C2D490(&StringLiteral_24564/*"userSvtId"*/);
    sub_1C2D490(&StringLiteral_24288/*"uniqueId"*/);
    sub_1C2D490(&StringLiteral_16186/*"_ENEMY"*/);
    sub_1C2D490(&StringLiteral_16295/*"_PLAYER"*/);
    byte_4C2ABB0 = 1;
  }
  FieldMotion = (char *)this->fields.FieldMotion;
  if ( !FieldMotion
    || (FieldMotion = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0)) == 0
    || (v48 = this,
        FieldMotion = (char *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)FieldMotion,
                                (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleFieldMotionComponent___),
        !chrInfos) )
  {
LABEL_44:
    sub_1C2D6EC(FieldMotion, *(_QWORD *)&uniqueIdStart);
  }
  max_length = chrInfos->max_length;
  if ( (int)max_length >= 1 )
  {
    m_Items = chrInfos->m_Items;
    v12 = uniqueIdStart;
    v13 = (BattleFieldMotionComponent_o *)FieldMotion;
    v14 = 0;
    v43 = actors;
    do
    {
      if ( v14 >= (unsigned int)max_length )
LABEL_45:
        sub_1C2D6F4(FieldMotion, *(_QWORD *)&uniqueIdStart, v10);
      v15 = m_Items[v14];
      if ( v15 )
      {
        ServantIdByInfo = (BattleDemoRootComponent_o *)BattleDemoRootComponent__GetServantIdByInfo(
                                                         (BattleDemoRootComponent_o *)FieldMotion,
                                                         m_Items[v14],
                                                         v10);
        v47 = (int)ServantIdByInfo;
        LimitCountByInfo = BattleDemoRootComponent__GetLimitCountByInfo(ServantIdByInfo, v15, v17);
        actorPrefab = (Il2CppObject *)v48->fields.actorPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        FieldMotion = (char *)UnityEngine_Object__Instantiate_object_(
                                actorPrefab,
                                (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !actors )
          goto LABEL_44;
        v21 = v12 - uniqueIdStart;
        if ( (unsigned int)(v12 - uniqueIdStart) >= LODWORD(actors->max_length) )
          goto LABEL_45;
        v22 = (UnityEngine_GameObject_o *)FieldMotion;
        v23 = &actors->obj.klass + v21;
        v23[4] = (Il2CppClass *)v22;
        sub_1C2D434((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v22, (int32_t)v10, v20);
        if ( !v22 )
          goto LABEL_44;
        FieldMotion = (char *)UnityEngine_GameObject__get_transform(v22, 0);
        if ( !v48->fields.Field )
          goto LABEL_44;
        v24 = (UnityEngine_Transform_o *)FieldMotion;
        FieldMotion = (char *)UnityEngine_GameObject__get_transform(v48->fields.Field, 0);
        if ( !v24 )
          goto LABEL_44;
        UnityEngine_Transform__set_parent(v24, (UnityEngine_Transform_o *)FieldMotion, 0);
        FieldMotion = (char *)UnityEngine_GameObject__get_transform(v22, 0);
        v25 = (UnityEngine_Transform_o *)FieldMotion;
        if ( !byte_4C20DA1 )
        {
          FieldMotion = (char *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
          byte_4C20DA1 = 1;
        }
        if ( !v25 )
          goto LABEL_44;
        UnityEngine_Transform__set_localPosition(v25, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        FieldMotion = (char *)UnityEngine_GameObject__get_transform(v22, 0);
        v26 = (UnityEngine_Transform_o *)FieldMotion;
        if ( !byte_4C20DA1 )
        {
          FieldMotion = (char *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
          byte_4C20DA1 = 1;
        }
        if ( !v26 )
          goto LABEL_44;
        UnityEngine_Transform__set_localEulerAngles(v26, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        FieldMotion = (char *)UnityEngine_GameObject__get_transform(v22, 0);
        v27 = (UnityEngine_Transform_o *)FieldMotion;
        if ( !byte_4C20DA6 )
        {
          FieldMotion = (char *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
          byte_4C20DA6 = 1;
        }
        if ( !v27 )
          goto LABEL_44;
        v28 = v13;
        v29 = chrInfos;
        UnityEngine_Transform__set_localScale(v27, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        FieldMotion = (char *)UnityEngine_GameObject__GetComponent_object_(
                                v22,
                                (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !FieldMotion )
          goto LABEL_44;
        performance = v48->fields.performance;
        v33 = (BattleActorControl_o *)FieldMotion;
        *((_QWORD *)FieldMotion + 21) = performance;
        sub_1C2D434((CGThumbnailListItem_o *)(FieldMotion + 168), (int32_t)performance, v30, v31);
        v34 = (BattleServantData_o *)sub_1C2D6DC(BattleServantData_TypeInfo);
        BattleServantData___ctor(v34, 0);
        v35 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
        System_Collections_Generic_Dictionary_object__int____ctor(
          v35,
          (const MethodInfo_3440C44 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
        if ( !v35 )
          goto LABEL_44;
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v35,
          (Il2CppObject *)StringLiteral_20738/*"index"*/,
          v12,
          (const MethodInfo_34415E4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v35,
          (Il2CppObject *)StringLiteral_24288/*"uniqueId"*/,
          v12,
          (const MethodInfo_34415E4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v35,
          (Il2CppObject *)StringLiteral_24564/*"userSvtId"*/,
          v12,
          (const MethodInfo_34415E4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v35,
          (Il2CppObject *)StringLiteral_23846/*"svtId"*/,
          v47,
          (const MethodInfo_34415E4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v35,
          (Il2CppObject *)StringLiteral_21215/*"limitCount"*/,
          LimitCountByInfo,
          (const MethodInfo_34415E4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        if ( !v34 )
          goto LABEL_44;
        BattleServantData__SetFakeData(v34, (System_Collections_Generic_Dictionary_string__int__o *)v35, 0);
        if ( isPlayer )
        {
          BattleActorControl__setTypePlayer(v33, 0);
          BattleActorControl__setServantData(v33, v34, 0);
          BattleActorControl__setDirLeft(v33, 0);
          FieldMotion = (char *)v48->fields.actorCamera;
          if ( !FieldMotion )
            goto LABEL_44;
          FieldMotion = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0);
          if ( !v48->fields.CameraFsm )
            goto LABEL_44;
          v36 = (UnityEngine_GameObject_o *)FieldMotion;
          chrInfos = v29;
          FieldMotion = (char *)UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)v48->fields.CameraFsm,
                                  0);
          v37 = v48->fields.performance;
          if ( !v37 )
            goto LABEL_44;
          v13 = v28;
          BattleActorControl__setMotionListForDemo(
            v33,
            (System_String_o *)StringLiteral_16295/*"_PLAYER"*/,
            v36,
            (UnityEngine_GameObject_o *)FieldMotion,
            v48->fields.CommonMotionPrefab,
            v37->fields._CommonPigMotionPrefab_k__BackingField,
            0);
          actors = v43;
          if ( !v13 )
            goto LABEL_44;
          PlayerPopTr = BattleFieldMotionComponent__getPlayerPopTr(v13, v21, 0);
        }
        else
        {
          BattleActorControl__setTypeEnemy(v33, 0);
          BattleActorControl__setServantData(v33, v34, 0);
          BattleActorControl__setDirRight(v33, 0);
          FieldMotion = (char *)v48->fields.actorCamera;
          if ( !FieldMotion )
            goto LABEL_44;
          FieldMotion = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0);
          if ( !v48->fields.CameraFsm )
            goto LABEL_44;
          v39 = (UnityEngine_GameObject_o *)FieldMotion;
          chrInfos = v29;
          FieldMotion = (char *)UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)v48->fields.CameraFsm,
                                  0);
          v40 = v48->fields.performance;
          if ( !v40 )
            goto LABEL_44;
          v13 = v28;
          BattleActorControl__setMotionListForDemo(
            v33,
            (System_String_o *)StringLiteral_16186/*"_ENEMY"*/,
            v39,
            (UnityEngine_GameObject_o *)FieldMotion,
            v48->fields.CommonMotionPrefab,
            v40->fields._CommonPigMotionPrefab_k__BackingField,
            0);
          actors = v43;
          if ( !v13 )
            goto LABEL_44;
          PlayerPopTr = BattleFieldMotionComponent__getEnemyPopPoint(v13, v21, 0);
        }
        v41 = (UnityEngine_Component_o *)PlayerPopTr;
        BattleActorControl__setCamera(v33, v48->fields.actorCamera, 0);
        if ( !v41 )
          goto LABEL_44;
        gameObject = UnityEngine_Component__get_gameObject(v41, 0);
        BattleActorControl__setTargetObject(v33, gameObject, 0);
        ++v12;
      }
      LODWORD(max_length) = chrInfos->max_length;
      ++v14;
    }
    while ( (__int64)v14 < (int)max_length );
  }
}


void BattleDemoRootComponent__CreateActors(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  BattleDemoRootComponent_o *v2; // x19
  struct System_String_array *PlayerList; // x8
  __int64 v4; // x0
  struct UnityEngine_GameObject_array **p_PlayerActorList; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_String_array *EnemyList; // x8
  __int64 v9; // x0
  struct UnityEngine_GameObject_array **p_EnemyActorList; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct BattlePerformance_o *performance; // x8
  struct UnityEngine_GameObject_array *PlayerActorList; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct BattlePerformance_o *v19; // x8
  struct UnityEngine_GameObject_array *EnemyActorList; // x1
  const MethodInfo *v21; // x5
  const MethodInfo *v22; // x5
  struct UnityEngine_GameObject_array *v23; // x8
  unsigned __int64 v24; // x23
  struct System_String_o *BgmName; // x22
  System_String_o *v26; // x0
  __int64 v27; // x2
  struct UnityEngine_GameObject_array *v28; // x8
  struct UnityEngine_GameObject_array *v29; // x8
  unsigned __int64 v30; // x23
  signed __int64 max_length_low; // x27
  struct System_String_o *v32; // x22
  System_String_o *v33; // x0
  struct UnityEngine_GameObject_array *v34; // x8
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_String_array *CameraFsm; // x1
  struct UnityEngine_GameObject_array *v38; // x22
  int max_length; // w9
  int v40; // w8
  UnityEngine_Object_o *v41; // x21
  struct UnityEngine_GameObject_array *v42; // x21
  int v43; // w9
  int v44; // w8
  UnityEngine_Object_o *v45; // x20
  int v46; // [xsp+Ch] [xbp-64h] BYREF

  v2 = this;
  if ( (byte_4C2ABAF & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_GameObject___TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_8749/*"MOTION_ENTRY"*/);
    sub_1C2D490(&StringLiteral_5453/*"ENEMY"*/);
    sub_1C2D490(&StringLiteral_3962/*"CameraFsm"*/);
    sub_1C2D490(&StringLiteral_10379/*"PLAYER"*/);
    this = (BattleDemoRootComponent_o *)sub_1C2D490(&StringLiteral_5438/*"END_NP"*/);
    byte_4C2ABAF = 1;
  }
  v46 = 0;
  PlayerList = v2->fields.PlayerList;
  if ( !PlayerList )
    goto LABEL_55;
  v4 = sub_1C2D538(UnityEngine_GameObject___TypeInfo, LODWORD(PlayerList->max_length));
  v2->fields.PlayerActorList = (struct UnityEngine_GameObject_array *)v4;
  p_PlayerActorList = &v2->fields.PlayerActorList;
  sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.PlayerActorList, v4, v6, v7);
  EnemyList = v2->fields.EnemyList;
  if ( !EnemyList )
    goto LABEL_55;
  v9 = sub_1C2D538(UnityEngine_GameObject___TypeInfo, LODWORD(EnemyList->max_length));
  v2->fields.EnemyActorList = (struct UnityEngine_GameObject_array *)v9;
  p_EnemyActorList = &v2->fields.EnemyActorList;
  sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.EnemyActorList, v9, v11, v12);
  performance = v2->fields.performance;
  if ( !performance )
    goto LABEL_55;
  PlayerActorList = v2->fields.PlayerActorList;
  performance->fields.p_actorlist = PlayerActorList;
  sub_1C2D434((CGThumbnailListItem_o *)&performance->fields.p_actorlist, (int32_t)PlayerActorList, v13, v14);
  v19 = v2->fields.performance;
  if ( !v19 )
    goto LABEL_55;
  EnemyActorList = v2->fields.EnemyActorList;
  v19->fields.e_actorlist = EnemyActorList;
  sub_1C2D434((CGThumbnailListItem_o *)&v19->fields.e_actorlist, (int32_t)EnemyActorList, v17, v18);
  BattleDemoRootComponent__CreateActorObject(v2, 1, v2->fields.PlayerList, v2->fields.PlayerActorList, 1, v21);
  BattleDemoRootComponent__CreateActorObject(v2, 4, v2->fields.EnemyList, v2->fields.EnemyActorList, 0, v22);
  v23 = v2->fields.PlayerActorList;
  if ( !v23 )
    goto LABEL_55;
  v24 = 0;
  while ( (__int64)v24 < SLODWORD(v23->max_length) )
  {
    this = (BattleDemoRootComponent_o *)v2->fields.FieldMotion;
    if ( this )
    {
      this = (BattleDemoRootComponent_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
      if ( this )
      {
        BgmName = this->fields.BgmName;
        v46 = v24 + 1;
        v26 = System_Int32__ToString((int32_t)&v46, 0);
        this = (BattleDemoRootComponent_o *)System_String__Concat_63457864(
                                              (System_String_o *)StringLiteral_10379/*"PLAYER"*/,
                                              v26,
                                              0);
        if ( BgmName )
        {
          this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                                (HutongGames_PlayMaker_FsmVariables_o *)BgmName,
                                                (System_String_o *)this,
                                                0);
          v28 = *p_PlayerActorList;
          if ( *p_PlayerActorList )
          {
            if ( v24 >= LODWORD(v28->max_length) )
              goto LABEL_56;
            if ( this )
            {
              HutongGames_PlayMaker_FsmGameObject__set_Value(
                (HutongGames_PlayMaker_FsmGameObject_o *)this,
                v28->m_Items[v24],
                0);
              v23 = *p_PlayerActorList;
              ++v24;
              if ( *p_PlayerActorList )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_55;
  }
  v29 = *p_EnemyActorList;
  if ( !*p_EnemyActorList )
    goto LABEL_55;
  v30 = 0;
  while ( 1 )
  {
    this = (BattleDemoRootComponent_o *)v2->fields.FieldMotion;
    if ( !this )
      goto LABEL_55;
    max_length_low = SLODWORD(v29->max_length);
    this = (BattleDemoRootComponent_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
    if ( !this )
      goto LABEL_55;
    v32 = this->fields.BgmName;
    if ( (__int64)v30 >= max_length_low )
      break;
    v46 = v30 + 1;
    v33 = System_Int32__ToString((int32_t)&v46, 0);
    this = (BattleDemoRootComponent_o *)System_String__Concat_63457864((System_String_o *)StringLiteral_5453/*"ENEMY"*/, v33, 0);
    if ( v32 )
    {
      this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                            (HutongGames_PlayMaker_FsmVariables_o *)v32,
                                            (System_String_o *)this,
                                            0);
      v34 = *p_EnemyActorList;
      if ( *p_EnemyActorList )
      {
        if ( v30 >= LODWORD(v34->max_length) )
          goto LABEL_56;
        if ( this )
        {
          HutongGames_PlayMaker_FsmGameObject__set_Value(
            (HutongGames_PlayMaker_FsmGameObject_o *)this,
            v34->m_Items[v30],
            0);
          v29 = *p_EnemyActorList;
          ++v30;
          if ( *p_EnemyActorList )
            continue;
        }
      }
    }
    goto LABEL_55;
  }
  if ( !v32 )
    goto LABEL_55;
  this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmObject(
                                        (HutongGames_PlayMaker_FsmVariables_o *)this->fields.BgmName,
                                        (System_String_o *)StringLiteral_3962/*"CameraFsm"*/,
                                        0);
  if ( !this )
    goto LABEL_55;
  CameraFsm = (struct System_String_array *)v2->fields.CameraFsm;
  this->fields.PlayerList = CameraFsm;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.PlayerList, (int32_t)CameraFsm, v35, v36);
  v38 = *p_PlayerActorList;
  v46 = 0;
  if ( !v38 )
    goto LABEL_55;
  max_length = v38->max_length;
  if ( max_length >= 1 )
  {
    v40 = 0;
    while ( v40 < (unsigned int)max_length )
    {
      v41 = (UnityEngine_Object_o *)v38->m_Items[v40];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleDemoRootComponent_o *)UnityEngine_Object__op_Equality(v41, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v41 )
          goto LABEL_55;
        this = (BattleDemoRootComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v41,
                                              (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !this )
          goto LABEL_55;
        BattleActorControl__playMotion((BattleActorControl_o *)this, (System_String_o *)StringLiteral_8749/*"MOTION_ENTRY"*/, 0);
      }
      v40 = v46 + 1;
      v46 = v40;
      max_length = v38->max_length;
      if ( v40 >= max_length )
        goto LABEL_42;
    }
LABEL_56:
    sub_1C2D6F4(this, method, v27);
  }
LABEL_42:
  v42 = *p_EnemyActorList;
  v46 = 0;
  if ( !v42 )
    goto LABEL_55;
  v43 = v42->max_length;
  if ( v43 >= 1 )
  {
    v44 = 0;
    while ( v44 < (unsigned int)v43 )
    {
      v45 = (UnityEngine_Object_o *)v42->m_Items[v44];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleDemoRootComponent_o *)UnityEngine_Object__op_Equality(v45, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v45 )
          goto LABEL_55;
        this = (BattleDemoRootComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v45,
                                              (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !this )
          goto LABEL_55;
        BattleActorControl__playMotion((BattleActorControl_o *)this, (System_String_o *)StringLiteral_8749/*"MOTION_ENTRY"*/, 0);
      }
      v44 = v46 + 1;
      v46 = v44;
      v43 = v42->max_length;
      if ( v44 >= v43 )
        goto LABEL_53;
    }
    goto LABEL_56;
  }
LABEL_53:
  this = (BattleDemoRootComponent_o *)v2->fields.FieldMotion;
  if ( !this )
LABEL_55:
    sub_1C2D6EC(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5438/*"END_NP"*/, 0);
}


void BattleDemoRootComponent__EndRequestBattleSetup(
        BattleDemoRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  BattleDemoRootComponent_o *v4; // x19
  void *monitor; // x22
  int32_t v6; // w20
  int32_t klass_high; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4C2ABBD & 1) == 0 )
  {
    sub_1C2D490(&BattleData_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&StringLiteral_11077/*"REQUEST_OK"*/);
    this = (BattleDemoRootComponent_o *)sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C2ABBD = 1;
  }
  entity = 0;
  if ( !result )
    goto LABEL_18;
  if ( System_String__Equals_63493168(result, (System_String_o *)StringLiteral_22195/*"ng"*/, 0) )
  {
    this = (BattleDemoRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
      this = (BattleDemoRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( this )
      {
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)this, 34, 1, 0, 0, 0);
        return;
      }
    }
    goto LABEL_18;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleDemoRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !this )
    goto LABEL_18;
  this = (BattleDemoRootComponent_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        &entity,
                                        (const MethodInfo_338A420 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_18;
    monitor = entity[1].monitor;
    klass_high = HIDWORD(entity[2].klass);
    v6 = (int32_t)entity[2].monitor;
    if ( !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__setResumeBattleId((int64_t)monitor, klass_high, v6, 0);
  }
  this = (BattleDemoRootComponent_o *)v4->fields.myFSM;
  if ( !this )
LABEL_18:
    sub_1C2D6EC(this, result);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11077/*"REQUEST_OK"*/, 0);
}


int32_t BattleDemoRootComponent__GetLimitCountByInfo(
        BattleDemoRootComponent_o *this,
        System_String_o *info,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1
  __int64 v6; // x2

  if ( (byte_4C2ABAB & 1) == 0 )
  {
    sub_1C2D490(&char___TypeInfo);
    byte_4C2ABAB = 1;
  }
  v4 = (System_String_array *)sub_1C2D538(char___TypeInfo, 1);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !LODWORD(v4->max_length) )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 58;
  if ( !info || (v4 = System_String__Split_63506940(info, (System_Char_array *)v4, 0)) == 0 )
LABEL_9:
    sub_1C2D6EC(v4, v5);
  if ( LODWORD(v4->max_length) <= 1 )
LABEL_10:
    sub_1C2D6F4(v4, v5, v6);
  return System_Int32__Parse(v4->m_Items[1], 0);
}


int32_t BattleDemoRootComponent__GetServantIdByInfo(
        BattleDemoRootComponent_o *this,
        System_String_o *info,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1
  __int64 v6; // x2

  if ( (byte_4C2ABAA & 1) == 0 )
  {
    sub_1C2D490(&char___TypeInfo);
    byte_4C2ABAA = 1;
  }
  v4 = (System_String_array *)sub_1C2D538(char___TypeInfo, 1);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !LODWORD(v4->max_length) )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 58;
  if ( !info || (v4 = System_String__Split_63506940(info, (System_Char_array *)v4, 0)) == 0 )
LABEL_9:
    sub_1C2D6EC(v4, v5);
  if ( !LODWORD(v4->max_length) )
LABEL_10:
    sub_1C2D6F4(v4, v5, v6);
  return System_Int32__Parse(v4->m_Items[0], 0);
}


bool BattleDemoRootComponent__GoToBattleEndTalk(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  ScriptManager_CallbackFunc_o *v6; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4C2ABBA & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleDemoRootComponent_OnBattleEndScript__);
    sub_1C2D490(&ScriptManager_CallbackFunc_TypeInfo);
    this = (BattleDemoRootComponent_o *)sub_1C2D490(&ScriptManager_TypeInfo);
    byte_4C2ABBA = 1;
  }
  klass = v2[14].klass;
  if ( !klass )
    sub_1C2D6EC(this, method);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v6 = (ScriptManager_CallbackFunc_o *)sub_1C2D6DC(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v6, v2, Method_BattleDemoRootComponent_OnBattleEndScript__, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleEnd(name_high, namespaze, 1, v6, 0, -1, 0);
  return 1;
}


bool BattleDemoRootComponent__GoToBattleStartTalk(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  ScriptManager_CallbackFunc_o *v6; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4C2ABB8 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleDemoRootComponent_OnBattleStartScript__);
    sub_1C2D490(&ScriptManager_CallbackFunc_TypeInfo);
    this = (BattleDemoRootComponent_o *)sub_1C2D490(&ScriptManager_TypeInfo);
    byte_4C2ABB8 = 1;
  }
  klass = v2[14].klass;
  if ( !klass )
    sub_1C2D6EC(this, method);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v6 = (ScriptManager_CallbackFunc_o *)sub_1C2D6DC(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v6, v2, Method_BattleDemoRootComponent_OnBattleStartScript__, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleStart2_44252436(name_high, namespaze, v6, 0, 0);
  return 1;
}


bool BattleDemoRootComponent__GoToTerminal(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C2ABBC & 1) == 0 )
  {
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2ABBC = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21ACD )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21ACD = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
  return 1;
}


void BattleDemoRootComponent__InitializeBattleDemo(
        BattleDemoRootComponent_o *this,
        System_String_o *demoInfo,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct System_Action_o *v4; // x23
  Il2CppObject *v7; // x0
  __int64 naturalAligment; // x10
  System_Collections_Generic_Dictionary_object__object__o *v9; // x21
  __int64 v10; // x19
  struct System_String_array *v11; // x0
  BattleDemoRootComponent_o **p_PlayerList; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_String_array *v15; // x0
  struct System_String_array **p_EnemyList; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x25
  __int64 v20; // x28
  System_String_o *v21; // x0
  BattleDemoRootComponent_c *Item; // x0
  System_String_c *v23; // x1
  Il2CppObject *v24; // x24
  __int64 v25; // x2
  const MethodInfo *v26; // x3
  System_String_c **v27; // x8
  bool v28; // cf
  __int64 v29; // x24
  System_String_o *v30; // x0
  Il2CppObject *v31; // x23
  struct System_String_array *v32; // x25
  const MethodInfo *v33; // x3
  System_Collections_Generic_List_object__o *v34; // x23
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_String_o *v37; // x0
  Il2CppObject *v38; // x24
  System_Collections_Generic_List_object__o *CueSheetList; // x23
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *items; // x9
  _QWORD *v43; // x10
  __int64 size; // x11
  Il2CppClass **v45; // x0
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x2
  __int64 v49; // x3
  Il2CppObject *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_String_c *v53; // x1
  struct System_String_o **p_BgmName; // x0
  __int64 v55; // x2
  __int64 v56; // x3
  System_Collections_Generic_List_object__o *v57; // x20
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x1
  System_Collections_IEnumerator_o *v61; // x0
  BattleDemoRootComponent_o *v62; // x0
  const MethodInfo *v63; // x1
  struct System_Action_o *v64; // [xsp+8h] [xbp-78h]
  BattleDemoRootComponent_o *v65; // [xsp+10h] [xbp-70h]
  int v66; // [xsp+1Ch] [xbp-64h] BYREF

  v4 = callback;
  if ( (byte_4C2ABA9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantAssetArgs___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantAssetArgs__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_6033/*"Enemy"*/);
    sub_1C2D490(&StringLiteral_12692/*"Sequence"*/);
    sub_1C2D490(&StringLiteral_12929/*"Sound"*/);
    sub_1C2D490(&StringLiteral_3145/*"Bg"*/);
    sub_1C2D490(&StringLiteral_10672/*"Player"*/);
    sub_1C2D490(&StringLiteral_3152/*"Bgm"*/);
    sub_1C2D490(&StringLiteral_3151/*"BgType"*/);
    byte_4C2ABA9 = 1;
  }
  v66 = 0;
  if ( !demoInfo )
    goto LABEL_51;
  v7 = MiniJSON_Json__Deserialize(demoInfo, 0);
  v64 = v4;
  if ( v7
    && (naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment,
        v7->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (System_Collections_Generic_Dictionary_string__object__c *)v7->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      v9 = (System_Collections_Generic_Dictionary_object__object__o *)v7;
    else
      v9 = 0;
  }
  else
  {
    v9 = 0;
  }
  v10 = (__int64)&StringLiteral_10672/*"Player"*/;
  v11 = (struct System_String_array *)sub_1C2D538(string___TypeInfo, 3);
  this->fields.PlayerList = v11;
  p_PlayerList = (BattleDemoRootComponent_o **)&this->fields.PlayerList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.PlayerList, (int32_t)v11, v13, v14);
  v15 = (struct System_String_array *)sub_1C2D538(string___TypeInfo, 3);
  this->fields.EnemyList = v15;
  p_EnemyList = &this->fields.EnemyList;
  v65 = this;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.EnemyList, (int32_t)v15, v17, v18);
  v19 = -3;
  v20 = 32;
  do
  {
    v66 = v19 + 4;
    v21 = System_Int32__ToString((int32_t)&v66, 0);
    Item = (BattleDemoRootComponent_c *)System_String__Concat_63457864((System_String_o *)StringLiteral_10672/*"Player"*/, v21, 0);
    if ( !v9 )
      goto LABEL_52;
    v24 = (Il2CppObject *)Item;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v9,
           (Il2CppObject *)Item,
           (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      this = *p_PlayerList;
      Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                            v9,
                                            v24,
                                            (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_52;
      v27 = (System_String_c **)Item;
      if ( Item )
      {
        v23 = string_TypeInfo;
        if ( Item->_1.image != string_TypeInfo )
          goto LABEL_46;
      }
      if ( v19 + 3 >= (unsigned __int64)LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_53:
        sub_1C2D6F4(Item, v23, v25);
      *(BattleDemoRootComponent_c **)((char *)&this->klass + v20) = Item;
      sub_1C2D434((CGThumbnailListItem_o *)((char *)this + v20), (int32_t)Item, v25, v26);
    }
    v28 = __CFADD__(v19++, 1);
    v20 += 8;
  }
  while ( !v28 );
  this = v65;
  v10 = -3;
  v29 = 32;
  do
  {
    v66 = v10 + 4;
    v30 = System_Int32__ToString((int32_t)&v66, 0);
    v31 = (Il2CppObject *)System_String__Concat_63457864((System_String_o *)StringLiteral_6033/*"Enemy"*/, v30, 0);
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v9,
           v31,
           (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v32 = *p_EnemyList;
      Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                            v9,
                                            v31,
                                            (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v32 )
        goto LABEL_52;
      v27 = (System_String_c **)Item;
      if ( Item )
      {
        v23 = string_TypeInfo;
        if ( Item->_1.image != string_TypeInfo )
          goto LABEL_46;
      }
      if ( v10 + 3 >= (unsigned __int64)LODWORD(v32->max_length) )
        goto LABEL_53;
      *(Il2CppClass **)((char *)&v32->obj.klass + v29) = (Il2CppClass *)Item;
      sub_1C2D434((CGThumbnailListItem_o *)((char *)v32 + v29), (int32_t)Item, v25, v33);
    }
    v28 = __CFADD__(v10++, 1);
    v29 += 8;
  }
  while ( !v28 );
  v34 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  v65->fields.CueSheetList = (struct System_Collections_Generic_List_string__o *)v34;
  sub_1C2D434((CGThumbnailListItem_o *)&v65->fields.CueSheetList, (int32_t)v34, v35, v36);
  v10 = 1;
  do
  {
    v66 = v10;
    v37 = System_Int32__ToString((int32_t)&v66, 0);
    v38 = (Il2CppObject *)System_String__Concat_63457864((System_String_o *)StringLiteral_12929/*"Sound"*/, v37, 0);
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v9,
           v38,
           (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      CueSheetList = (System_Collections_Generic_List_object__o *)v65->fields.CueSheetList;
      Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                            v9,
                                            v38,
                                            (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !CueSheetList )
        goto LABEL_52;
      v27 = (System_String_c **)Item;
      if ( Item )
      {
        v23 = string_TypeInfo;
        if ( Item->_1.image != string_TypeInfo )
          goto LABEL_46;
      }
      items = CueSheetList->fields._items;
      v43 = Method_System_Collections_Generic_List_string__Add__;
      ++CueSheetList->fields._version;
      if ( !items )
        goto LABEL_52;
      size = CueSheetList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          CueSheetList,
          (Il2CppObject *)Item,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &items->obj.klass + size;
        CueSheetList->fields._size = size + 1;
        v45[4] = (Il2CppClass *)v27;
        sub_1C2D434((CGThumbnailListItem_o *)(v45 + 4), (int32_t)v27, v40, v41);
      }
    }
    v10 = (unsigned int)(v10 + 1);
  }
  while ( (_DWORD)v10 != 6 );
  Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                        v9,
                                        (Il2CppObject *)StringLiteral_3145/*"Bg"*/,
                                        (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_52;
  v10 = (__int64)&long_TypeInfo;
  if ( (Il2CppClass *)*((_QWORD *)Item->_1.image + 8) != long_TypeInfo->_1.element_class )
    goto LABEL_54;
  v65->fields.BgId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v46, v47);
  Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                        v9,
                                        (Il2CppObject *)StringLiteral_3151/*"BgType"*/,
                                        (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_52:
    sub_1C2D6EC(Item, v23);
  if ( (Il2CppClass *)*((_QWORD *)Item->_1.image + 8) != long_TypeInfo->_1.element_class )
    goto LABEL_54;
  v65->fields.BgType = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v48, v49);
  v50 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v9,
          (Il2CppObject *)StringLiteral_3152/*"Bgm"*/,
          (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v27 = (System_String_c **)v50;
  if ( !v50 )
    goto LABEL_47;
  v53 = string_TypeInfo;
  if ( (System_String_c *)v50->klass != string_TypeInfo
    || (v65->fields.BgmName = (struct System_String_o *)v50, p_BgmName = &v65->fields.BgmName, *v27 != v53) )
  {
LABEL_46:
    sub_1C2D9AC(v27);
LABEL_47:
    this->fields.BgmName = 0;
    p_BgmName = &this->fields.BgmName;
  }
  sub_1C2D434((CGThumbnailListItem_o *)p_BgmName, (int32_t)v27, v51, v52);
  Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                        v9,
                                        (Il2CppObject *)StringLiteral_12692/*"Sequence"*/,
                                        (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_52;
  v4 = v64;
  if ( *((_QWORD *)Item->_1.image + 8) == *(_QWORD *)(*(_QWORD *)v10 + 64LL) )
  {
    this->fields.DemoSequenceServantId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, *(_QWORD *)v10, v55, v56);
LABEL_51:
    this->fields.InitializeCallback = v4;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.InitializeCallback, (int32_t)v4, (int32_t)callback, method);
    v57 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantAssetArgs__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v57,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantAssetArgs___ctor__);
    this->fields.loadedAssetArgsList = (struct System_Collections_Generic_List_ServantAssetArgs__o *)v57;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.loadedAssetArgsList, (int32_t)v57, v58, v59);
    v61 = BattleDemoRootComponent__SetupBattleDemo(this, v60);
    UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v61, 0);
    return;
  }
LABEL_54:
  sub_1C2D9AC(Item);
  BattleDemoRootComponent__ReleaseBattleDemo(v62, v63);
}


void BattleDemoRootComponent__LoadBattleChrs(
        BattleDemoRootComponent_o *this,
        System_String_array *chrlist,
        const MethodInfo *method)
{
  BattleDemoRootComponent_o *v4; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x25
  System_String_o *v7; // x21
  BattleDemoRootComponent_o *ServantIdByInfo; // x0
  int32_t v9; // w22
  const MethodInfo *v10; // x2
  int32_t LimitCountByInfo; // w23
  int32_t myFSM; // w24
  ServantAssetArgs_o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v17; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v19; // x8

  v4 = this;
  if ( (byte_4C2ABB1 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantAssetArgs__Add__);
    sub_1C2D490(&ServantAssetArgs_TypeInfo);
    this = (BattleDemoRootComponent_o *)sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    byte_4C2ABB1 = 1;
  }
  if ( !chrlist )
LABEL_21:
    sub_1C2D6EC(this, chrlist);
  max_length = chrlist->max_length;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C2D6F4(this, chrlist, method);
      v7 = chrlist->m_Items[i];
      if ( v7 )
      {
        ServantIdByInfo = (BattleDemoRootComponent_o *)BattleDemoRootComponent__GetServantIdByInfo(
                                                         this,
                                                         chrlist->m_Items[i],
                                                         method);
        v9 = (int)ServantIdByInfo;
        LimitCountByInfo = BattleDemoRootComponent__GetLimitCountByInfo(ServantIdByInfo, v7, v10);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (BattleDemoRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitMaster___);
        if ( !this )
          goto LABEL_21;
        this = (BattleDemoRootComponent_o *)ServantLimitMaster__GetEntity(
                                              (ServantLimitMaster_o *)this,
                                              v9,
                                              LimitCountByInfo,
                                              0);
        if ( !this )
          goto LABEL_21;
        myFSM = (int32_t)this->fields.myFSM;
        v13 = (ServantAssetArgs_o *)sub_1C2D6DC(ServantAssetArgs_TypeInfo);
        ServantAssetArgs___ctor_46362464(v13, v9, LimitCountByInfo, 0, 0, myFSM, 0);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        ServantAssetLoadManager__PreloadAssetsByArgs(v13, 0, 0);
        this = (BattleDemoRootComponent_o *)v4->fields.loadedAssetArgsList;
        if ( !this )
          goto LABEL_21;
        m_CachedPtr = this->fields.m_CachedPtr;
        v17 = Method_System_Collections_Generic_List_ServantAssetArgs__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          goto LABEL_21;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v13,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v19 + 32) = v13;
          sub_1C2D434((CGThumbnailListItem_o *)(v19 + 32), (int32_t)v13, v14, v15);
        }
      }
      LODWORD(max_length) = chrlist->max_length;
    }
  }
}


void BattleDemoRootComponent__LoadCueSheet(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *CueSheetList; // x0
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C2ABAC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleDemoRootComponent__LoadCueSheet_b__28_0__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4C2ABAC = 1;
  }
  memset(&v9, 0, sizeof(v9));
  CueSheetList = this->fields.CueSheetList;
  if ( CueSheetList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      (System_Collections_Generic_List_object__o *)CueSheetList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v9.fields._current;
      ++this->fields.CueSheetCount;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, Method_BattleDemoRootComponent__LoadCueSheet_b__28_0__, 0);
      if ( !Instance )
        sub_1C2D6EC(v7, v8);
      SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, v6, 1, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
}


void BattleDemoRootComponent__OnBattleDemoLoadComplete(
        BattleDemoRootComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4C2ABB5 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4C2ABB5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance
    || (BattleSequenceManager__setup((BattleSequenceManager_o *)Instance, 0, 1, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(Instance, v5);
  }
  BattleSequenceManager__SetupDemoActor(
    (BattleSequenceManager_o *)Instance,
    this->fields.PlayerActorList,
    this->fields.EnemyActorList,
    0);
  v7 = BattleDemoRootComponent__WaitToNoblePhantasmPlay(this, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleDemoRootComponent__OnBattleEndScript(BattleDemoRootComponent_o *this, bool isExit, const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  System_Action_object__o *v7; // x22

  v3 = (Il2CppObject *)this;
  if ( (byte_4C2ABBB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_string__TypeInfo);
    sub_1C2D490(&Method_BattleDemoRootComponent__OnBattleEndScript_b__47_0__);
    this = (BattleDemoRootComponent_o *)sub_1C2D490(&ScriptManager_TypeInfo);
    byte_4C2ABBB = 1;
  }
  klass = v3[14].klass;
  if ( !klass )
    sub_1C2D6EC(this, isExit);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v7 = (System_Action_object__o *)sub_1C2D6DC(System_Action_string__TypeInfo);
  System_Action_object____ctor(v7, v3, Method_BattleDemoRootComponent__OnBattleEndScript_b__47_0__, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__LoadBattleEndGameDemo(name_high, namespaze, 0, (System_Action_string__o *)v7, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleDemoRootComponent__OnBattleStartScript(
        BattleDemoRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C2ABB9 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6964/*"GOTO_BATTLE"*/);
    byte_4C2ABB9 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C2D6EC(0, isExit);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6964/*"GOTO_BATTLE"*/, 0);
}


void BattleDemoRootComponent__OnNoblePhantasmPlayComplete(
        BattleDemoRootComponent_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  struct System_Action_o *BattleDemoCallback; // x8
  void *performance; // x0
  __int64 v6; // x2
  struct UnityEngine_GameObject_array *PlayerActorList; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x23
  UnityEngine_Object_o *v10; // x20
  struct UnityEngine_GameObject_array *EnemyActorList; // x22
  il2cpp_array_size_t v12; // x8
  unsigned __int64 v13; // x23
  UnityEngine_Object_o *v14; // x20
  System_Collections_Generic_List_object__o *loadedAssetArgsList; // x20
  System_Action_object__o *v16; // x21
  Il2CppObject *v17; // x22
  struct BattleDemoRootComponent___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1
  BattleDemoRootComponent_c *v22; // x0
  float BGM_FADEOUT_TIME; // s8
  __int64 *v24; // x8
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  _BOOL4 battleBefore; // w9
  _BOOL4 isBefore; // w8

  if ( (byte_4C2ABB7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_ServantAssetArgs__TypeInfo);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&BattleDemoRootComponent_TypeInfo);
    sub_1C2D490(&BattleFBXComponent_TypeInfo);
    sub_1C2D490(&System_GC_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantAssetArgs__ForEach__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C2D490(&SoundManager_TypeInfo);
    sub_1C2D490(&Method_BattleDemoRootComponent___c__OnNoblePhantasmPlayComplete_b__43_0__);
    sub_1C2D490(&BattleDemoRootComponent___c_TypeInfo);
    sub_1C2D490(&StringLiteral_6968/*"GOTO_TERMINAL"*/);
    sub_1C2D490(&StringLiteral_6966/*"GOTO_BATTLESTARTTALK"*/);
    sub_1C2D490(&StringLiteral_6965/*"GOTO_BATTLENDTALK"*/);
    sub_1C2D490(&StringLiteral_3084/*"Battle/Common"*/);
    sub_1C2D490(&StringLiteral_5430/*"END_DEMO"*/);
    byte_4C2ABB7 = 1;
  }
  BattleDemoCallback = this->fields.BattleDemoCallback;
  if ( BattleDemoCallback )
  {
    if ( BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      BattleFBXComponent_TypeInfo->static_fields->EnableEvent = 1;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      BattleDemoCallback = this->fields.BattleDemoCallback;
      BattleFBXComponent_TypeInfo->static_fields->EnableEvent = 1;
      if ( !BattleDemoCallback )
        goto LABEL_68;
    }
    ((void (__fastcall *)(intptr_t, intptr_t, const MethodInfo *))BattleDemoCallback->fields.invoke_impl)(
      BattleDemoCallback->fields.method_code,
      BattleDemoCallback->fields.method,
      method);
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_68;
  BattlePerformance__setupCameraFov((BattlePerformance_o *)performance, this->fields.backupFov, 0);
  PlayerActorList = this->fields.PlayerActorList;
  if ( !PlayerActorList )
    goto LABEL_68;
  max_length = PlayerActorList->max_length;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    while ( v9 < (unsigned int)max_length )
    {
      v10 = (UnityEngine_Object_o *)PlayerActorList->m_Items[v9];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      performance = (void *)UnityEngine_Object__op_Inequality(v10, 0, 0);
      if ( ((unsigned __int8)performance & 1) != 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71163704(v10, 0);
      }
      LODWORD(max_length) = PlayerActorList->max_length;
      if ( (__int64)++v9 >= (int)max_length )
        goto LABEL_20;
    }
LABEL_67:
    sub_1C2D6F4(performance, seq, v6);
  }
LABEL_20:
  EnemyActorList = this->fields.EnemyActorList;
  if ( !EnemyActorList )
    goto LABEL_68;
  v12 = EnemyActorList->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0;
    while ( v13 < (unsigned int)v12 )
    {
      v14 = (UnityEngine_Object_o *)EnemyActorList->m_Items[v13];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      performance = (void *)UnityEngine_Object__op_Inequality(v14, 0, 0);
      if ( ((unsigned __int8)performance & 1) != 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71163704(v14, 0);
      }
      LODWORD(v12) = EnemyActorList->max_length;
      if ( (__int64)++v13 >= (int)v12 )
        goto LABEL_31;
    }
    goto LABEL_67;
  }
LABEL_31:
  loadedAssetArgsList = (System_Collections_Generic_List_object__o *)this->fields.loadedAssetArgsList;
  performance = BattleDemoRootComponent___c_TypeInfo;
  if ( !BattleDemoRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent___c_TypeInfo);
    performance = BattleDemoRootComponent___c_TypeInfo;
  }
  v16 = *(System_Action_object__o **)(*((_QWORD *)performance + 23) + 16LL);
  if ( !v16 )
  {
    if ( !*((_DWORD *)performance + 56) )
    {
      j_il2cpp_runtime_class_init_0(performance);
      performance = BattleDemoRootComponent___c_TypeInfo;
    }
    v17 = (Il2CppObject *)**((_QWORD **)performance + 23);
    v16 = (System_Action_object__o *)sub_1C2D6DC(System_Action_ServantAssetArgs__TypeInfo);
    System_Action_object____ctor(v16, v17, Method_BattleDemoRootComponent___c__OnNoblePhantasmPlayComplete_b__43_0__, 0);
    static_fields = BattleDemoRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Action_ServantAssetArgs__o *)v16;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__43_0, (int32_t)v16, v19, v20);
  }
  if ( !loadedAssetArgsList )
    goto LABEL_68;
  System_Collections_Generic_List_object___ForEach(
    loadedAssetArgsList,
    (System_Action_T__o *)v16,
    (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_ServantAssetArgs__ForEach__);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_3084/*"Battle/Common"*/, 0);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !performance )
    goto LABEL_68;
  ServantAssetLoadManager__releaseNoblePhantasm((ServantAssetLoadManager_o *)performance, 0);
  BattleDemoRootComponent__ReleaseCueSheet(this, v21);
  v22 = BattleDemoRootComponent_TypeInfo;
  if ( !BattleDemoRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent_TypeInfo);
    v22 = BattleDemoRootComponent_TypeInfo;
  }
  BGM_FADEOUT_TIME = v22->static_fields->BGM_FADEOUT_TIME;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__fadeoutBgm(BGM_FADEOUT_TIME, 0);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !performance )
    goto LABEL_68;
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)performance, 0, 0);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect(0);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !performance )
LABEL_68:
    sub_1C2D6EC(performance, seq);
  CommonUI__maskFadeout((CommonUI_o *)performance, 1, 1.0, 0, 0);
  if ( !this->fields.battleSetupInfo )
  {
    performance = this->fields.myFSM;
    if ( !performance )
      goto LABEL_68;
    v24 = &StringLiteral_5430/*"END_DEMO"*/;
LABEL_56:
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)performance, (System_String_o *)*v24, 0);
    return;
  }
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !performance )
    goto LABEL_68;
  performance = (void *)AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)performance, 0);
  if ( ((unsigned __int8)performance & 1) != 0 )
  {
    performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( performance )
    {
      AvalonSceneManager__popSceneRefresh(
        (AvalonSceneManager_o *)performance,
        1,
        (Il2CppObject *)this->fields.battleSetupInfo,
        0);
      return;
    }
    goto LABEL_68;
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_68;
  battleBefore = battleSetupInfo->fields.battleBefore;
  isBefore = battleSetupInfo->fields.isBefore;
  if ( !battleBefore )
  {
    performance = this->fields.myFSM;
    if ( !performance )
      goto LABEL_68;
    if ( isBefore )
      v24 = &StringLiteral_6965/*"GOTO_BATTLENDTALK"*/;
    else
      v24 = &StringLiteral_6968/*"GOTO_TERMINAL"*/;
    goto LABEL_56;
  }
  if ( !isBefore )
  {
    performance = this->fields.myFSM;
    if ( !performance )
      goto LABEL_68;
    v24 = &StringLiteral_6966/*"GOTO_BATTLESTARTTALK"*/;
    goto LABEL_56;
  }
}


void BattleDemoRootComponent__ReleaseBattleDemo(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void BattleDemoRootComponent__ReleaseCueSheet(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x0
  CGThumbnailListItem_o *p_CueSheetList; // x19
  struct System_Collections_Generic_List_string__o *CueSheetList; // t1
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C2ABAD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4C2ABAD = 1;
  }
  memset(&v11, 0, sizeof(v11));
  CueSheetList = this->fields.CueSheetList;
  p_CueSheetList = (CGThumbnailListItem_o *)&this->fields.CueSheetList;
  v3 = (System_Collections_Generic_List_object__o *)CueSheetList;
  if ( CueSheetList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      v3,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v11.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_1C2D6EC(0, v8);
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    p_CueSheetList->klass = 0;
    sub_1C2D434(p_CueSheetList, 0, v9, v10);
  }
}


bool BattleDemoRootComponent__RequestBattleSetup(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  BattleSetupInfo_o *battleSetupInfo; // x0

  battleSetupInfo = this->fields.battleSetupInfo;
  if ( battleSetupInfo )
    BattleScriptRootComponent__GoForBattle(battleSetupInfo, method);
  return 1;
}


System_Collections_IEnumerator_o *BattleDemoRootComponent__SetupBattleDemo(
        BattleDemoRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2ABAE & 1) == 0 )
  {
    sub_1C2D490(&BattleDemoRootComponent__SetupBattleDemo_d__30_TypeInfo);
    byte_4C2ABAE = 1;
  }
  v3 = sub_1C2D6DC(BattleDemoRootComponent__SetupBattleDemo_d__30_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


bool BattleDemoRootComponent__StartBattle(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C2ABBE & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C2ABBE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 10, 1, 0, 0, 0);
  return 1;
}


void BattleDemoRootComponent__StartDemo(
        BattleDemoRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattleActorControl_o *Component_object; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct UnityEngine_GameObject_array *PlayerActorList; // x8
  UnityEngine_GameObject_o *v10; // x21
  BattleActorControl_o *v11; // x20
  BattleFBXComponent_c *v12; // x0
  struct BattlePerformanceBg_o *perfBg; // x8
  int32_t DemoSequenceServantId; // w22
  BattleSequenceManager_o *v15; // x21
  struct BattleServantData_o *battleSvtData; // x8
  int32_t v17; // w20
  int32_t treasuredvcLevel; // w23
  BattleSequenceManager_onGameObjectLoadComplete_o *v19; // x24

  if ( (byte_4C2ABB4 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleDemoRootComponent_OnBattleDemoLoadComplete__);
    sub_1C2D490(&BattleFBXComponent_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1C2D490(&StringLiteral_9333/*"NPACTOR"*/);
    sub_1C2D490(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo);
    byte_4C2ABB4 = 1;
  }
  this->fields.BattleDemoCallback = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.BattleDemoCallback, (int32_t)callback, (int32_t)method, v3);
  PlayerActorList = this->fields.PlayerActorList;
  if ( !PlayerActorList )
    goto LABEL_18;
  if ( !LODWORD(PlayerActorList->max_length) )
    sub_1C2D6F4(Component_object, v7, v8);
  v10 = PlayerActorList->m_Items[0];
  if ( !v10 )
    goto LABEL_18;
  Component_object = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                               v10,
                                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !this->fields.FieldMotion )
    goto LABEL_18;
  v11 = Component_object;
  Component_object = (BattleActorControl_o *)PlayMakerFSM__get_Fsm(this->fields.FieldMotion, 0);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = *(BattleActorControl_o **)&Component_object->fields.currentSpShadowEffectId;
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                               (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                               (System_String_o *)StringLiteral_9333/*"NPACTOR"*/,
                                               0);
  if ( !Component_object )
    goto LABEL_18;
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Component_object, v10, 0);
  v12 = BattleFBXComponent_TypeInfo;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v12 = BattleFBXComponent_TypeInfo;
  }
  v12->static_fields->EnableEvent = 0;
  Component_object = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  perfBg = this->fields.perfBg;
  if ( !perfBg )
    goto LABEL_18;
  if ( !Component_object )
    goto LABEL_18;
  BattleSequenceManager__init(
    (BattleSequenceManager_o *)Component_object,
    this->fields.performance,
    v10,
    this->fields.PlayerActorList,
    this->fields.EnemyActorList,
    this->fields.actorCamera,
    perfBg->fields.bgobject,
    0);
  Component_object = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v11 )
    goto LABEL_18;
  DemoSequenceServantId = this->fields.DemoSequenceServantId;
  v15 = (BattleSequenceManager_o *)Component_object;
  Component_object = (BattleActorControl_o *)BattleActorControl__getLimitCount(v11, 0);
  battleSvtData = v11->fields.battleSvtData;
  if ( !battleSvtData
    || (v17 = (int)Component_object,
        treasuredvcLevel = battleSvtData->fields.treasuredvcLevel,
        v19 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_1C2D6DC(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo),
        BattleSequenceManager_onGameObjectLoadComplete___ctor(
          v19,
          (Il2CppObject *)this,
          Method_BattleDemoRootComponent_OnBattleDemoLoadComplete__,
          0),
        !v15) )
  {
LABEL_18:
    sub_1C2D6EC(Component_object, v7);
  }
  BattleSequenceManager__loadSequence(
    v15,
    DemoSequenceServantId,
    DemoSequenceServantId,
    v17,
    0,
    treasuredvcLevel,
    1,
    v19,
    0);
}


System_Collections_IEnumerator_o *BattleDemoRootComponent__WaitToNoblePhantasmPlay(
        BattleDemoRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2ABB6 & 1) == 0 )
  {
    sub_1C2D490(&BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_TypeInfo);
    byte_4C2ABB6 = 1;
  }
  v3 = sub_1C2D6DC(BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattleDemoRootComponent___LoadCueSheet_b__28_0(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  --this->fields.CueSheetCount;
}


void BattleDemoRootComponent___OnBattleEndScript_b__47_0(
        BattleDemoRootComponent_o *this,
        System_String_o *demoInfo,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  CommonUI_o *Instance; // x0

  v3 = demoInfo;
  if ( (byte_4C2ABC2 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_6968/*"GOTO_TERMINAL"*/);
    byte_4C2ABC2 = 1;
  }
  if ( v3 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 1, 0);
      demoInfo = (System_String_o *)this->fields.battleSetupInfo;
      if ( demoInfo )
      {
        BYTE1(demoInfo[4].klass) = 0;
        ((void (__fastcall *)(BattleDemoRootComponent_o *))this->klass->vtable._5_beginStartUp.methodPtr)(this);
        return;
      }
    }
LABEL_9:
    sub_1C2D6EC(Instance, demoInfo);
  }
  Instance = (CommonUI_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6968/*"GOTO_TERMINAL"*/, 0);
}


void BattleDemoRootComponent___SetupBattleDemo_b__30_0(
        BattleDemoRootComponent_o *this,
        AssetData_o *aData,
        const MethodInfo *method)
{
  BattleFieldMotionComponent_o *performance; // x0
  __int64 v6; // x2
  struct BattlePerformance_o *v7; // x8
  struct BattleFieldMotionComponent_array *fieldmotion; // x8
  struct PlayMakerFSM_o *Fsm; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_GameObject_o *cameraObject; // x23
  UnityEngine_Transform_o *v13; // x22
  struct UnityEngine_GameObject_o **p_cameraObject; // x21
  Il2CppObject *Object_object__51051712; // x0
  struct UnityEngine_GameObject_o *ObjectIfNotExist; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_Transform_o *v19; // x20
  struct BattlePerformance_o *v20; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct BattlePerformance_o *v23; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct UnityEngine_Transform_o *fieldEffectBattleTr; // x8
  struct UnityEngine_Transform_o *klass; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct UnityEngine_Transform_o *v32; // x8
  struct UnityEngine_Transform_o *m_CachedPtr; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct BattlePerformance_o *v36; // x8
  struct BattleActionCamera_o *actioncamera; // x9
  struct UnityEngine_Camera_o *frontcamera; // x1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct BattlePerformance_o *v41; // x8
  struct BattleActionCamera_o *v42; // x8
  struct UnityEngine_Camera_o *actorcamera; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct BattlePerformance_o *v46; // x8
  struct PlayMakerFSM_o *camerafsm; // x1
  struct PlayMakerFSM_o **p_CameraFsm; // x19
  __int64 v49; // x8
  __int64 v50; // x19
  int32_t v51; // w2
  const MethodInfo *v52; // x3

  if ( (byte_4C2ABC0 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleActionCamera___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_1C2D490(&StringLiteral_11419/*"RootCameraPrefab"*/);
    byte_4C2ABC0 = 1;
  }
  performance = (BattleFieldMotionComponent_o *)this->fields.performance;
  if ( !performance )
    goto LABEL_34;
  BattlePerformance__loadStorageObjectCommonMotion((BattlePerformance_o *)performance, aData, 0);
  performance = (BattleFieldMotionComponent_o *)this->fields.performance;
  if ( !performance )
    goto LABEL_34;
  BattlePerformance__loadFieldMotion((BattlePerformance_o *)performance, aData, 0, 0);
  v7 = this->fields.performance;
  if ( !v7 )
    goto LABEL_34;
  fieldmotion = v7->fields.fieldmotion;
  if ( !fieldmotion )
    goto LABEL_34;
  if ( !LODWORD(fieldmotion->max_length) )
    sub_1C2D6F4(performance, aData, v6);
  performance = fieldmotion->m_Items[0];
  if ( !performance )
    goto LABEL_34;
  Fsm = BattleFieldMotionComponent__getFsm(performance, 0);
  this->fields.FieldMotion = Fsm;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.FieldMotion, (int32_t)Fsm, v10, v11);
  performance = (BattleFieldMotionComponent_o *)this->fields.GroundObject;
  if ( !performance )
    goto LABEL_34;
  performance = (BattleFieldMotionComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                  (UnityEngine_GameObject_o *)performance,
                                                  0);
  if ( !performance )
    goto LABEL_34;
  performance = (BattleFieldMotionComponent_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)performance,
                                                  0);
  if ( !aData )
    goto LABEL_34;
  cameraObject = this->fields.cameraObject;
  v13 = (UnityEngine_Transform_o *)performance;
  p_cameraObject = &this->fields.cameraObject;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              aData,
                              (System_String_o *)StringLiteral_11419/*"RootCameraPrefab"*/,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  ObjectIfNotExist = BaseMonoBehaviour__createObjectIfNotExist(
                       (BaseMonoBehaviour_o *)this,
                       cameraObject,
                       (UnityEngine_GameObject_o *)Object_object__51051712,
                       v13,
                       0,
                       0);
  this->fields.cameraObject = ObjectIfNotExist;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.cameraObject, (int32_t)ObjectIfNotExist, v17, v18);
  performance = (BattleFieldMotionComponent_o *)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_34;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)performance, (System_String_o *)StringLiteral_11419/*"RootCameraPrefab"*/, 0);
  performance = (BattleFieldMotionComponent_o *)*p_cameraObject;
  if ( !*p_cameraObject )
    goto LABEL_34;
  performance = (BattleFieldMotionComponent_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)performance,
                                                  0);
  v19 = (UnityEngine_Transform_o *)performance;
  if ( !byte_4C20DA1 )
  {
    performance = (BattleFieldMotionComponent_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  if ( !v19 )
    goto LABEL_34;
  UnityEngine_Transform__set_eulerAngles(v19, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  performance = (BattleFieldMotionComponent_o *)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_34;
  v20 = this->fields.performance;
  performance = (BattleFieldMotionComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  (UnityEngine_GameObject_o *)performance,
                                                  (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v20 )
    goto LABEL_34;
  v20->fields.camerafsm = (struct PlayMakerFSM_o *)performance;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->fields.camerafsm, (int32_t)performance, v21, v22);
  performance = (BattleFieldMotionComponent_o *)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_34;
  v23 = this->fields.performance;
  performance = (BattleFieldMotionComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  (UnityEngine_GameObject_o *)performance,
                                                  (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleActionCamera___);
  if ( !v23 )
    goto LABEL_34;
  v23->fields.actioncamera = (struct BattleActionCamera_o *)performance;
  sub_1C2D434((CGThumbnailListItem_o *)&v23->fields.actioncamera, (int32_t)performance, v24, v25);
  performance = (BattleFieldMotionComponent_o *)this->fields.performance;
  if ( !performance )
    goto LABEL_34;
  fieldEffectBattleTr = performance[1].fields.fieldEffectBattleTr;
  if ( !fieldEffectBattleTr )
    goto LABEL_34;
  klass = (struct UnityEngine_Transform_o *)fieldEffectBattleTr[3].klass;
  performance->fields.fieldEffectBattleTr = klass;
  sub_1C2D434((CGThumbnailListItem_o *)&performance->fields.fieldEffectBattleTr, (int32_t)klass, v26, v27);
  performance = (BattleFieldMotionComponent_o *)this->fields.performance;
  if ( !performance )
    goto LABEL_34;
  v32 = performance[1].fields.fieldEffectBattleTr;
  if ( !v32 )
    goto LABEL_34;
  m_CachedPtr = (struct UnityEngine_Transform_o *)v32[3].fields.m_CachedPtr;
  performance->fields.fieldEffectNpTr = m_CachedPtr;
  sub_1C2D434((CGThumbnailListItem_o *)&performance->fields.fieldEffectNpTr, (int32_t)m_CachedPtr, v30, v31);
  v36 = this->fields.performance;
  if ( !v36 )
    goto LABEL_34;
  actioncamera = v36->fields.actioncamera;
  if ( !actioncamera )
    goto LABEL_34;
  frontcamera = actioncamera->fields.frontcamera;
  v36->fields.cutIncamera = frontcamera;
  sub_1C2D434((CGThumbnailListItem_o *)&v36->fields.cutIncamera, (int32_t)frontcamera, v34, v35);
  v41 = this->fields.performance;
  if ( !v41 )
    goto LABEL_34;
  v42 = v41->fields.actioncamera;
  if ( !v42 )
    goto LABEL_34;
  actorcamera = v42->fields.actorcamera;
  this->fields.actorCamera = actorcamera;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.actorCamera, (int32_t)actorcamera, v39, v40);
  v46 = this->fields.performance;
  if ( !v46 )
    goto LABEL_34;
  camerafsm = v46->fields.camerafsm;
  this->fields.CameraFsm = camerafsm;
  p_CameraFsm = &this->fields.CameraFsm;
  sub_1C2D434((CGThumbnailListItem_o *)p_CameraFsm, (int32_t)camerafsm, v44, v45);
  v49 = (__int64)*(p_CameraFsm - 7);
  if ( !v49
    || (performance = *(BattleFieldMotionComponent_o **)(v49 + 168)) == 0
    || (v50 = (__int64)*(p_CameraFsm - 4),
        performance = (BattleFieldMotionComponent_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)performance,
                                                        0),
        !v50) )
  {
LABEL_34:
    sub_1C2D6EC(performance, aData);
  }
  *(_QWORD *)(v50 + 40) = performance;
  sub_1C2D434((CGThumbnailListItem_o *)(v50 + 40), (int32_t)performance, v51, v52);
}


void BattleDemoRootComponent___beginStartUp_b__36_0(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_Action_o *v6; // x20
  Il2CppObject *v7; // x21
  struct BattleDemoRootComponent___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C2ABC1 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_BattleDemoRootComponent___c__beginStartUp_b__36_1__);
    sub_1C2D490(&BattleDemoRootComponent___c_TypeInfo);
    byte_4C2ABC1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0);
  Instance = BattleDemoRootComponent___c_TypeInfo;
  if ( !BattleDemoRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent___c_TypeInfo);
    Instance = BattleDemoRootComponent___c_TypeInfo;
  }
  v6 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v6 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = BattleDemoRootComponent___c_TypeInfo;
    }
    v7 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v6, v7, Method_BattleDemoRootComponent___c__beginStartUp_b__36_1__, 0);
    static_fields = BattleDemoRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__36_1 = v6;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__36_1, (int32_t)v6, v9, v10);
  }
  if ( !this )
LABEL_12:
    sub_1C2D6EC(Instance, v4);
  BattleDemoRootComponent__StartDemo(this, v6, v5);
}


void BattleDemoRootComponent__beginFinish(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void BattleDemoRootComponent__beginInitialize(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C2ABB2 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C2ABB2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadeout((CommonUI_o *)Instance, 1, 0.0, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(Instance, v4);
  }
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void BattleDemoRootComponent__beginStartUp(
        BattleDemoRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppClass *v6; // x1
  __int64 naturalAligment; // x8
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x3
  struct BattleSetupInfo_o **p_battleSetupInfo; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4C2ABB3 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleDemoRootComponent__beginStartUp_b__36_0__);
    sub_1C2D490(&BattleSetupInfo_TypeInfo);
    byte_4C2ABB3 = 1;
  }
  if ( data )
  {
    v6 = (Il2CppClass *)BattleSetupInfo_TypeInfo;
    naturalAligment = BattleSetupInfo_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == BattleSetupInfo_TypeInfo )
    {
      this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)data;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
      if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && data->klass->_2.typeHierarchy[naturalAligment - 1] == v6 )
      {
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.battleSetupInfo, (int32_t)data, (int32_t)method, v3);
        if ( *p_battleSetupInfo )
        {
          data = (Il2CppObject *)(*p_battleSetupInfo)->fields.demoInfo;
          goto LABEL_7;
        }
      }
      else
      {
        sub_1C2D9AC(data);
      }
      sub_1C2D6EC(v11, v12);
    }
    data = 0;
  }
LABEL_7:
  v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleDemoRootComponent__beginStartUp_b__36_0__, 0);
  BattleDemoRootComponent__InitializeBattleDemo(this, (System_String_o *)data, v8, v9);
}


void BattleDemoRootComponent__SetupBattleDemo_d__30___ctor(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleDemoRootComponent__SetupBattleDemo_d__30__MoveNext(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleDemoRootComponent__SetupBattleDemo_d__30_o *v4; // x19
  struct BattleDemoRootComponent_o *_4__this; // x20
  AssetLoader_LoadEndDataHandler_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  struct System_Action_o *InitializeCallback; // x8
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  CGThumbnailListItem_o *v16; // x19
  int v17; // w8
  System_String_o *BgmName; // x20
  UnityEngine_WaitForSeconds_o *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  v4 = this;
  if ( (byte_4C2ABC5 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_BattleDemoRootComponent__SetupBattleDemo_b__30_0__);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    sub_1C2D490(&SoundManager_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C2D490(&StringLiteral_3084/*"Battle/Common"*/);
    this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)sub_1C2D490(&StringLiteral_11086/*"RESET_CAMERA_NOBLEEND"*/);
    byte_4C2ABC5 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v6,
        (Il2CppObject *)_4__this,
        Method_BattleDemoRootComponent__SetupBattleDemo_b__30_0__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage((System_String_o *)StringLiteral_3084/*"Battle/Common"*/, v6, 1, 0);
      goto LABEL_8;
    case 1:
      v4->fields.__1__state = -1;
LABEL_8:
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)AssetManager__LoadIsBusy(0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v4->fields.__2__current = 0;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434(p__2__current, 0, v7, v8);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      if ( !_4__this )
        goto LABEL_35;
      this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_35;
      BattlePerformance__ForceLoadBg((BattlePerformance_o *)this, _4__this->fields.BgId, _4__this->fields.BgType, 0);
      BattleDemoRootComponent__LoadBattleChrs(_4__this, _4__this->fields.PlayerList, v12);
      BattleDemoRootComponent__LoadBattleChrs(_4__this, _4__this->fields.EnemyList, v13);
LABEL_22:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)ServantAssetLoadManager__checkLoad(0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( _4__this )
        {
          BattleDemoRootComponent__LoadCueSheet(_4__this, method);
LABEL_28:
          if ( _4__this->fields.CueSheetCount )
          {
            v4->fields.__2__current = 0;
            v16 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1C2D434(v16, 0, v2, v3);
            v17 = 3;
            goto LABEL_34;
          }
          BattleDemoRootComponent__CreateActors(_4__this, method);
          this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)_4__this->fields.CameraFsm;
          if ( this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11086/*"RESET_CAMERA_NOBLEEND"*/, 0);
            BgmName = _4__this->fields.BgmName;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playBgm(BgmName, 0);
            v19 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v19, 1.0, 0);
            v4->fields.__2__current = (Il2CppObject *)v19;
            v16 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1C2D434(v16, (int32_t)v19, v20, v21);
            v17 = 4;
            goto LABEL_34;
          }
        }
LABEL_35:
        sub_1C2D6EC(this, method);
      }
      v4->fields.__2__current = 0;
      v16 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(v16, 0, v14, v15);
      v17 = 2;
LABEL_34:
      LODWORD(v16[-1].fields._ThumbnailSpritePath_k__BackingField) = v17;
      return 1;
    case 2:
      v4->fields.__1__state = -1;
      goto LABEL_22;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      goto LABEL_28;
    case 4:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      InitializeCallback = _4__this->fields.InitializeCallback;
      if ( InitializeCallback )
        ((void (__fastcall *)(intptr_t, intptr_t))InitializeCallback->fields.invoke_impl)(
          InitializeCallback->fields.method_code,
          InitializeCallback->fields.method);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *BattleDemoRootComponent__SetupBattleDemo_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleDemoRootComponent__SetupBattleDemo_d__30__System_Collections_IEnumerator_Reset(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleDemoRootComponent__SetupBattleDemo_d__30_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattleDemoRootComponent__SetupBattleDemo_d__30__System_Collections_IEnumerator_get_Current(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleDemoRootComponent__SetupBattleDemo_d__30__System_IDisposable_Dispose(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42___ctor(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42__MoveNext(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        const MethodInfo *method)
{
  BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *v2; // x20
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v4; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  bool result; // w0
  struct BattleDemoRootComponent_o *_4__this; // x19
  struct BattlePerformance_o *performance; // x20
  BattlePerformance_c *v10; // x0
  struct BattlePerformance_o *v11; // x8
  BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *v12; // x20
  Il2CppObject *Instance; // x20
  System_Action_object__o *v14; // x21

  v2 = this;
  if ( (byte_4C2ABC6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_USSequencer__TypeInfo);
    sub_1C2D490(&Method_BattleDemoRootComponent_OnNoblePhantasmPlayComplete__);
    sub_1C2D490(&BattlePerformance_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)sub_1C2D490(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4C2ABC6 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_20;
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)_4__this->fields.performance;
    if ( !this )
      goto LABEL_20;
    BattlePerformance__FlipAll((BattlePerformance_o *)this, 0, 0);
    performance = _4__this->fields.performance;
    if ( !performance )
      goto LABEL_20;
    _4__this->fields.backupFov = performance->fields.currentFov;
    v10 = BattlePerformance_TypeInfo;
    if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
      v10 = BattlePerformance_TypeInfo;
    }
    BattlePerformance__setupCameraFov(performance, v10->static_fields->DefaultFov, 0);
    v11 = _4__this->fields.performance;
    if ( !v11 )
      goto LABEL_20;
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)v11->fields.actorcamera;
    if ( !this )
      goto LABEL_20;
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0);
    v12 = this;
    if ( !byte_4C20DA1 )
    {
      this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    if ( !v12
      || (UnityEngine_Transform__set_localEulerAngles(
            (UnityEngine_Transform_o *)v12,
            UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
            0),
          (this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
      || (CommonUI__maskFadein((CommonUI_o *)this, 1.0, 0, 0),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__),
          v14 = (System_Action_object__o *)sub_1C2D6DC(System_Action_USSequencer__TypeInfo),
          System_Action_object____ctor(
            v14,
            (Il2CppObject *)_4__this,
            Method_BattleDemoRootComponent_OnNoblePhantasmPlayComplete__,
            0),
          !Instance) )
    {
LABEL_20:
      sub_1C2D6EC(this, method);
    }
    BattleSequenceManager__play((BattleSequenceManager_o *)Instance, 0, 1, (System_Action_USSequencer__o *)v14, 0);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0);
    v2->fields.__2__current = (Il2CppObject *)v4;
    sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.__2__current, (int32_t)v4, v5, v6);
    result = 1;
    v2->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42__System_Collections_IEnumerator_Reset(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42__System_Collections_IEnumerator_get_Current(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42__System_IDisposable_Dispose(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleDemoRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2ABC3 & 1) == 0 )
  {
    sub_1C2D490(&BattleDemoRootComponent___c_TypeInfo);
    byte_4C2ABC3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(BattleDemoRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleDemoRootComponent___c_TypeInfo->static_fields->__9 = (struct BattleDemoRootComponent___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)BattleDemoRootComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleDemoRootComponent___c___ctor(BattleDemoRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleDemoRootComponent___c___OnNoblePhantasmPlayComplete_b__43_0(
        BattleDemoRootComponent___c_o *this,
        ServantAssetArgs_o *args,
        const MethodInfo *method)
{
  if ( (byte_4C2ABC4 & 1) == 0 )
  {
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    byte_4C2ABC4 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__UnloadAssetsByArgs(args, 0);
}


void BattleDemoRootComponent___c___beginStartUp_b__36_1(BattleDemoRootComponent___c_o *this, const MethodInfo *method)
{
  ;
}