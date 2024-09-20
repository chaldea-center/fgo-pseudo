void __fastcall BattleDemoRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4A5E4C3 & 1) == 0 )
  {
    sub_1B885B0(&BattleDemoRootComponent_TypeInfo);
    byte_4A5E4C3 = 1;
  }
  LODWORD(BattleDemoRootComponent_TypeInfo->static_fields->BGM_FADEOUT_TIME) = (struct BattleDemoRootComponent_StaticFields)1065353216;
}


void __fastcall BattleDemoRootComponent___ctor(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDemoRootComponent__CreateActorObject(
        BattleDemoRootComponent_o *this,
        int32_t uniqueIdStart,
        System_String_array *chrInfos,
        UnityEngine_GameObject_array *actors,
        bool isPlayer,
        const MethodInfo *method)
{
  char *FieldMotion; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x8
  int32_t v12; // w26
  unsigned __int64 v13; // x24
  System_String_o *v14; // x19
  BattleDemoRootComponent_o *ServantIdByInfo; // x0
  const MethodInfo *v16; // x2
  int32_t LimitCountByInfo; // w0
  Il2CppObject *actorPrefab; // x19
  int32_t v19; // w21
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w27
  UnityEngine_GameObject_o *v23; // x19
  Il2CppClass **v24; // x0
  UnityEngine_Transform_o *v25; // x21
  UnityEngine_Transform_o *v26; // x21
  UnityEngine_Transform_o *v27; // x21
  UnityEngine_Transform_o *v28; // x21
  System_String_array *v29; // x20
  int32_t v30; // w2
  int32_t v31; // w3
  struct BattlePerformance_o *performance; // x1
  BattleActorControl_o *v33; // x19
  BattleServantData_o *v34; // x22
  System_Collections_Generic_Dictionary_object__int__o *v35; // x21
  UnityEngine_GameObject_o *v36; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *PlayerPopTr; // x0
  UnityEngine_GameObject_o *v39; // x21
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_Component_o *v41; // x21
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_GameObject_array *v43; // [xsp+8h] [xbp-88h]
  BattleFieldMotionComponent_o *v44; // [xsp+10h] [xbp-80h]
  System_String_o **m_Items; // [xsp+20h] [xbp-70h]
  int32_t v48; // [xsp+28h] [xbp-68h]
  int32_t value; // [xsp+2Ch] [xbp-64h]

  if ( (byte_4A5E4B4 & 1) == 0 )
  {
    sub_1B885B0(&BattleServantData_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleFieldMotionComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_21102/*"limitCount"*/);
    sub_1B885B0(&StringLiteral_23707/*"svtId"*/);
    sub_1B885B0(&StringLiteral_20619/*"index"*/);
    sub_1B885B0(&StringLiteral_24453/*"userSvtId"*/);
    sub_1B885B0(&StringLiteral_24180/*"uniqueId"*/);
    sub_1B885B0(&StringLiteral_16195/*"_ENEMY"*/);
    sub_1B885B0(&StringLiteral_16295/*"_PLAYER"*/);
    byte_4A5E4B4 = 1;
  }
  FieldMotion = (char *)this->fields.FieldMotion;
  if ( !FieldMotion
    || (FieldMotion = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0LL)) == 0LL
    || (FieldMotion = (char *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)FieldMotion,
                                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleFieldMotionComponent___),
        !chrInfos) )
  {
LABEL_42:
    sub_1B8880C(FieldMotion, *(_QWORD *)&uniqueIdStart);
  }
  v11 = *(_QWORD *)&chrInfos->max_length;
  if ( (int)v11 >= 1 )
  {
    m_Items = chrInfos->m_Items;
    v12 = uniqueIdStart;
    v13 = 0LL;
    v43 = actors;
    v44 = (BattleFieldMotionComponent_o *)FieldMotion;
    do
    {
      if ( v13 >= (unsigned int)v11 )
LABEL_43:
        sub_1B88814(FieldMotion, *(_QWORD *)&uniqueIdStart);
      v14 = m_Items[v13];
      if ( v14 )
      {
        ServantIdByInfo = (BattleDemoRootComponent_o *)BattleDemoRootComponent__GetServantIdByInfo(
                                                         (BattleDemoRootComponent_o *)FieldMotion,
                                                         m_Items[v13],
                                                         v10);
        value = (int)ServantIdByInfo;
        LimitCountByInfo = BattleDemoRootComponent__GetLimitCountByInfo(ServantIdByInfo, v14, v16);
        actorPrefab = (Il2CppObject *)this->fields.actorPrefab;
        v19 = LimitCountByInfo;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        FieldMotion = (char *)UnityEngine_Object__Instantiate_object_(
                                actorPrefab,
                                (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !actors )
          goto LABEL_42;
        v22 = v12 - uniqueIdStart;
        if ( v12 - uniqueIdStart >= actors->max_length )
          goto LABEL_43;
        v23 = (UnityEngine_GameObject_o *)FieldMotion;
        v24 = &actors->obj.klass + v22;
        v24[4] = (Il2CppClass *)v23;
        v48 = v19;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v23, v20, v21);
        if ( !v23 )
          goto LABEL_42;
        FieldMotion = (char *)UnityEngine_GameObject__get_transform(v23, 0LL);
        if ( !this->fields.Field )
          goto LABEL_42;
        v25 = (UnityEngine_Transform_o *)FieldMotion;
        FieldMotion = (char *)UnityEngine_GameObject__get_transform(this->fields.Field, 0LL);
        if ( !v25 )
          goto LABEL_42;
        UnityEngine_Transform__set_parent(v25, (UnityEngine_Transform_o *)FieldMotion, 0LL);
        FieldMotion = (char *)UnityEngine_GameObject__get_transform(v23, 0LL);
        v26 = (UnityEngine_Transform_o *)FieldMotion;
        if ( !byte_4A55CE1 )
        {
          FieldMotion = (char *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE1 = 1;
        }
        if ( !v26 )
          goto LABEL_42;
        UnityEngine_Transform__set_localPosition(v26, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        FieldMotion = (char *)UnityEngine_GameObject__get_transform(v23, 0LL);
        v27 = (UnityEngine_Transform_o *)FieldMotion;
        if ( !byte_4A55CE1 )
        {
          FieldMotion = (char *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE1 = 1;
        }
        if ( !v27 )
          goto LABEL_42;
        UnityEngine_Transform__set_localEulerAngles(v27, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        FieldMotion = (char *)UnityEngine_GameObject__get_transform(v23, 0LL);
        v28 = (UnityEngine_Transform_o *)FieldMotion;
        if ( !byte_4A55CE6 )
        {
          FieldMotion = (char *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE6 = 1;
        }
        if ( !v28 )
          goto LABEL_42;
        v29 = chrInfos;
        UnityEngine_Transform__set_localScale(v28, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        FieldMotion = (char *)UnityEngine_GameObject__GetComponent_object_(
                                v23,
                                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !FieldMotion )
          goto LABEL_42;
        performance = this->fields.performance;
        v33 = (BattleActorControl_o *)FieldMotion;
        *((_QWORD *)FieldMotion + 17) = performance;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(FieldMotion + 136), (int32_t)performance, v30, v31);
        v34 = (BattleServantData_o *)sub_1B887FC(BattleServantData_TypeInfo);
        BattleServantData___ctor(v34, 0LL);
        v35 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
        System_Collections_Generic_Dictionary_object__int____ctor(
          v35,
          (const MethodInfo_31BD92C *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
        if ( !v35 )
          goto LABEL_42;
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v35,
          (Il2CppObject *)StringLiteral_20619/*"index"*/,
          v12,
          (const MethodInfo_31BE2CC *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v35,
          (Il2CppObject *)StringLiteral_24180/*"uniqueId"*/,
          v12,
          (const MethodInfo_31BE2CC *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v35,
          (Il2CppObject *)StringLiteral_24453/*"userSvtId"*/,
          v12,
          (const MethodInfo_31BE2CC *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v35,
          (Il2CppObject *)StringLiteral_23707/*"svtId"*/,
          value,
          (const MethodInfo_31BE2CC *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v35,
          (Il2CppObject *)StringLiteral_21102/*"limitCount"*/,
          v48,
          (const MethodInfo_31BE2CC *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        if ( !v34 )
          goto LABEL_42;
        BattleServantData__SetFakeData(v34, (System_Collections_Generic_Dictionary_string__int__o *)v35, 0LL);
        if ( isPlayer )
        {
          BattleActorControl__setTypePlayer(v33, 0LL);
          BattleActorControl__setServantData(v33, v34, 0LL);
          BattleActorControl__setDirLeft(v33, 0LL);
          FieldMotion = (char *)this->fields.actorCamera;
          if ( !FieldMotion )
            goto LABEL_42;
          FieldMotion = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0LL);
          if ( !this->fields.CameraFsm )
            goto LABEL_42;
          v36 = (UnityEngine_GameObject_o *)FieldMotion;
          chrInfos = v29;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.CameraFsm, 0LL);
          BattleActorControl__setMotionListForDemo(
            v33,
            (System_String_o *)StringLiteral_16295/*"_PLAYER"*/,
            v36,
            gameObject,
            this->fields.CommonMotionPrefab,
            0LL);
          actors = v43;
          if ( !v44 )
            goto LABEL_42;
          PlayerPopTr = BattleFieldMotionComponent__getPlayerPopTr(v44, v22, 0LL);
        }
        else
        {
          BattleActorControl__setTypeEnemy(v33, 0LL);
          BattleActorControl__setServantData(v33, v34, 0LL);
          BattleActorControl__setDirRight(v33, 0LL);
          FieldMotion = (char *)this->fields.actorCamera;
          if ( !FieldMotion )
            goto LABEL_42;
          FieldMotion = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0LL);
          if ( !this->fields.CameraFsm )
            goto LABEL_42;
          v39 = (UnityEngine_GameObject_o *)FieldMotion;
          chrInfos = v29;
          v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.CameraFsm, 0LL);
          BattleActorControl__setMotionListForDemo(
            v33,
            (System_String_o *)StringLiteral_16195/*"_ENEMY"*/,
            v39,
            v40,
            this->fields.CommonMotionPrefab,
            0LL);
          actors = v43;
          if ( !v44 )
            goto LABEL_42;
          PlayerPopTr = BattleFieldMotionComponent__getEnemyPopPoint(v44, v22, 0LL);
        }
        v41 = (UnityEngine_Component_o *)PlayerPopTr;
        BattleActorControl__setCamera(v33, this->fields.actorCamera, 0LL);
        if ( !v41 )
          goto LABEL_42;
        v42 = UnityEngine_Component__get_gameObject(v41, 0LL);
        BattleActorControl__setTargetObject(v33, v42, 0LL);
        ++v12;
      }
      LODWORD(v11) = chrInfos->max_length;
      ++v13;
    }
    while ( (__int64)v13 < (int)v11 );
  }
}


void __fastcall BattleDemoRootComponent__CreateActors(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  BattleDemoRootComponent_o *v2; // x19
  struct System_String_array *PlayerList; // x8
  __int64 v4; // x0
  struct UnityEngine_GameObject_array **p_PlayerActorList; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_String_array *EnemyList; // x8
  __int64 v9; // x0
  struct UnityEngine_GameObject_array **p_EnemyActorList; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  ServantStatusBattleListViewItem_o *performance; // x8
  ServantStatusBattleListViewItem_c *PlayerActorList; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  struct BattlePerformance_o *v19; // x8
  struct UnityEngine_GameObject_array *EnemyActorList; // x1
  const MethodInfo *v21; // x5
  const MethodInfo *v22; // x5
  struct UnityEngine_GameObject_array *v23; // x8
  unsigned __int64 v24; // x23
  struct System_String_o *BgmName; // x22
  System_String_o *v26; // x0
  struct UnityEngine_GameObject_array *v27; // x8
  struct UnityEngine_GameObject_array *v28; // x8
  unsigned __int64 v29; // x23
  signed __int64 max_length; // x27
  struct System_String_o *v31; // x22
  System_String_o *v32; // x0
  struct UnityEngine_GameObject_array *v33; // x8
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_String_array *CameraFsm; // x1
  struct UnityEngine_GameObject_array *v37; // x22
  int v38; // w9
  int v39; // w8
  UnityEngine_Object_o *v40; // x21
  struct UnityEngine_GameObject_array *v41; // x21
  int v42; // w9
  int v43; // w8
  UnityEngine_Object_o *v44; // x20
  int v45; // [xsp+Ch] [xbp-64h] BYREF

  v2 = this;
  if ( (byte_4A5E4B3 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_GameObject___TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_8722/*"MOTION_ENTRY"*/);
    sub_1B885B0(&StringLiteral_5495/*"ENEMY"*/);
    sub_1B885B0(&StringLiteral_3984/*"CameraFsm"*/);
    sub_1B885B0(&StringLiteral_10387/*"PLAYER"*/);
    this = (BattleDemoRootComponent_o *)sub_1B885B0(&StringLiteral_5480/*"END_NP"*/);
    byte_4A5E4B3 = 1;
  }
  v45 = 0;
  PlayerList = v2->fields.PlayerList;
  if ( !PlayerList )
    goto LABEL_55;
  v4 = sub_1B88658(UnityEngine_GameObject___TypeInfo, PlayerList->max_length);
  v2->fields.PlayerActorList = (struct UnityEngine_GameObject_array *)v4;
  p_PlayerActorList = &v2->fields.PlayerActorList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.PlayerActorList, v4, v6, v7);
  EnemyList = v2->fields.EnemyList;
  if ( !EnemyList )
    goto LABEL_55;
  v9 = sub_1B88658(UnityEngine_GameObject___TypeInfo, EnemyList->max_length);
  v2->fields.EnemyActorList = (struct UnityEngine_GameObject_array *)v9;
  p_EnemyActorList = &v2->fields.EnemyActorList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.EnemyActorList, v9, v11, v12);
  performance = (ServantStatusBattleListViewItem_o *)v2->fields.performance;
  if ( !performance )
    goto LABEL_55;
  PlayerActorList = (ServantStatusBattleListViewItem_c *)v2->fields.PlayerActorList;
  performance[2].klass = PlayerActorList;
  sub_1B88554(performance + 2, (int32_t)PlayerActorList, v13, v14);
  v19 = v2->fields.performance;
  if ( !v19 )
    goto LABEL_55;
  EnemyActorList = v2->fields.EnemyActorList;
  v19->fields.e_actorlist = EnemyActorList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->fields.e_actorlist, (int32_t)EnemyActorList, v17, v18);
  BattleDemoRootComponent__CreateActorObject(v2, 1, v2->fields.PlayerList, v2->fields.PlayerActorList, 1, v21);
  BattleDemoRootComponent__CreateActorObject(v2, 4, v2->fields.EnemyList, v2->fields.EnemyActorList, 0, v22);
  v23 = v2->fields.PlayerActorList;
  if ( !v23 )
    goto LABEL_55;
  v24 = 0LL;
  while ( (__int64)v24 < (int)v23->max_length )
  {
    this = (BattleDemoRootComponent_o *)v2->fields.FieldMotion;
    if ( this )
    {
      this = (BattleDemoRootComponent_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
      if ( this )
      {
        BgmName = this->fields.BgmName;
        v45 = v24 + 1;
        v26 = System_Int32__ToString((int32_t)&v45, 0LL);
        this = (BattleDemoRootComponent_o *)System_String__Concat_61707032(
                                              (System_String_o *)StringLiteral_10387/*"PLAYER"*/,
                                              v26,
                                              0LL);
        if ( BgmName )
        {
          this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                                (HutongGames_PlayMaker_FsmVariables_o *)BgmName,
                                                (System_String_o *)this,
                                                0LL);
          v27 = *p_PlayerActorList;
          if ( *p_PlayerActorList )
          {
            if ( v24 >= v27->max_length )
              goto LABEL_56;
            if ( this )
            {
              HutongGames_PlayMaker_FsmGameObject__set_Value(
                (HutongGames_PlayMaker_FsmGameObject_o *)this,
                v27->m_Items[v24],
                0LL);
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
  v28 = *p_EnemyActorList;
  if ( !*p_EnemyActorList )
    goto LABEL_55;
  v29 = 0LL;
  while ( 1 )
  {
    this = (BattleDemoRootComponent_o *)v2->fields.FieldMotion;
    if ( !this )
      goto LABEL_55;
    max_length = (int)v28->max_length;
    this = (BattleDemoRootComponent_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_55;
    v31 = this->fields.BgmName;
    if ( (__int64)v29 >= max_length )
      break;
    v45 = v29 + 1;
    v32 = System_Int32__ToString((int32_t)&v45, 0LL);
    this = (BattleDemoRootComponent_o *)System_String__Concat_61707032((System_String_o *)StringLiteral_5495/*"ENEMY"*/, v32, 0LL);
    if ( v31 )
    {
      this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                            (HutongGames_PlayMaker_FsmVariables_o *)v31,
                                            (System_String_o *)this,
                                            0LL);
      v33 = *p_EnemyActorList;
      if ( *p_EnemyActorList )
      {
        if ( v29 >= v33->max_length )
          goto LABEL_56;
        if ( this )
        {
          HutongGames_PlayMaker_FsmGameObject__set_Value(
            (HutongGames_PlayMaker_FsmGameObject_o *)this,
            v33->m_Items[v29],
            0LL);
          v28 = *p_EnemyActorList;
          ++v29;
          if ( *p_EnemyActorList )
            continue;
        }
      }
    }
    goto LABEL_55;
  }
  if ( !v31 )
    goto LABEL_55;
  this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmObject(
                                        (HutongGames_PlayMaker_FsmVariables_o *)this->fields.BgmName,
                                        (System_String_o *)StringLiteral_3984/*"CameraFsm"*/,
                                        0LL);
  if ( !this )
    goto LABEL_55;
  CameraFsm = (struct System_String_array *)v2->fields.CameraFsm;
  this->fields.PlayerList = CameraFsm;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.PlayerList, (int32_t)CameraFsm, v34, v35);
  v37 = *p_PlayerActorList;
  v45 = 0;
  if ( !v37 )
    goto LABEL_55;
  v38 = v37->max_length;
  if ( v38 >= 1 )
  {
    v39 = 0;
    while ( v39 < (unsigned int)v38 )
    {
      v40 = (UnityEngine_Object_o *)v37->m_Items[v39];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleDemoRootComponent_o *)UnityEngine_Object__op_Equality(v40, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v40 )
          goto LABEL_55;
        this = (BattleDemoRootComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v40,
                                              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !this )
          goto LABEL_55;
        BattleActorControl__playMotion((BattleActorControl_o *)this, (System_String_o *)StringLiteral_8722/*"MOTION_ENTRY"*/, 0LL);
      }
      v39 = v45 + 1;
      v45 = v39;
      v38 = v37->max_length;
      if ( v39 >= v38 )
        goto LABEL_42;
    }
LABEL_56:
    sub_1B88814(this, method);
  }
LABEL_42:
  v41 = *p_EnemyActorList;
  v45 = 0;
  if ( !v41 )
    goto LABEL_55;
  v42 = v41->max_length;
  if ( v42 >= 1 )
  {
    v43 = 0;
    while ( v43 < (unsigned int)v42 )
    {
      v44 = (UnityEngine_Object_o *)v41->m_Items[v43];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleDemoRootComponent_o *)UnityEngine_Object__op_Equality(v44, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v44 )
          goto LABEL_55;
        this = (BattleDemoRootComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v44,
                                              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !this )
          goto LABEL_55;
        BattleActorControl__playMotion((BattleActorControl_o *)this, (System_String_o *)StringLiteral_8722/*"MOTION_ENTRY"*/, 0LL);
      }
      v43 = v45 + 1;
      v45 = v43;
      v42 = v41->max_length;
      if ( v43 >= v42 )
        goto LABEL_53;
    }
    goto LABEL_56;
  }
LABEL_53:
  this = (BattleDemoRootComponent_o *)v2->fields.FieldMotion;
  if ( !this )
LABEL_55:
    sub_1B8880C(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5480/*"END_NP"*/, 0LL);
}


void __fastcall BattleDemoRootComponent__EndRequestBattleSetup(
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
  if ( (byte_4A5E4C1 & 1) == 0 )
  {
    sub_1B885B0(&BattleData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&StringLiteral_11060/*"REQUEST_OK"*/);
    this = (BattleDemoRootComponent_o *)sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5E4C1 = 1;
  }
  entity = 0LL;
  if ( !result )
    goto LABEL_18;
  if ( System_String__Equals_61715348(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
  {
    this = (BattleDemoRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      this = (BattleDemoRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( this )
      {
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)this, 34, 1, 0LL, 0, 0LL);
        return;
      }
    }
    goto LABEL_18;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleDemoRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !this )
    goto LABEL_18;
  this = (BattleDemoRootComponent_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        &entity,
                                        (const MethodInfo_311DBBC *)Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_18;
    monitor = entity[1].monitor;
    klass_high = HIDWORD(entity[2].klass);
    v6 = (int32_t)entity[2].monitor;
    if ( !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__setResumeBattleId((int64_t)monitor, klass_high, v6, 0LL);
  }
  this = (BattleDemoRootComponent_o *)v4->fields.myFSM;
  if ( !this )
LABEL_18:
    sub_1B8880C(this, result);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11060/*"REQUEST_OK"*/, 0LL);
}


int32_t __fastcall BattleDemoRootComponent__GetLimitCountByInfo(
        BattleDemoRootComponent_o *this,
        System_String_o *info,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1

  if ( (byte_4A5E4AF & 1) == 0 )
  {
    sub_1B885B0(&char___TypeInfo);
    byte_4A5E4AF = 1;
  }
  v4 = (System_String_array *)sub_1B88658(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 58;
  if ( !info || (v4 = System_String__Split_61729188(info, (System_Char_array *)v4, 0LL)) == 0LL )
LABEL_9:
    sub_1B8880C(v4, v5);
  if ( v4->max_length <= 1 )
LABEL_10:
    sub_1B88814(v4, v5);
  return System_Int32__Parse(v4->m_Items[1], 0LL);
}


int32_t __fastcall BattleDemoRootComponent__GetServantIdByInfo(
        BattleDemoRootComponent_o *this,
        System_String_o *info,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1

  if ( (byte_4A5E4AE & 1) == 0 )
  {
    sub_1B885B0(&char___TypeInfo);
    byte_4A5E4AE = 1;
  }
  v4 = (System_String_array *)sub_1B88658(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 58;
  if ( !info || (v4 = System_String__Split_61729188(info, (System_Char_array *)v4, 0LL)) == 0LL )
LABEL_9:
    sub_1B8880C(v4, v5);
  if ( !v4->max_length )
LABEL_10:
    sub_1B88814(v4, v5);
  return System_Int32__Parse(v4->m_Items[0], 0LL);
}


bool __fastcall BattleDemoRootComponent__GoToBattleEndTalk(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  ScriptManager_CallbackFunc_o *v6; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4A5E4BE & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleDemoRootComponent_OnBattleEndScript__);
    sub_1B885B0(&ScriptManager_CallbackFunc_TypeInfo);
    this = (BattleDemoRootComponent_o *)sub_1B885B0(&ScriptManager_TypeInfo);
    byte_4A5E4BE = 1;
  }
  klass = v2[14].klass;
  if ( !klass )
    sub_1B8880C(this, method);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v6 = (ScriptManager_CallbackFunc_o *)sub_1B887FC(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v6, v2, Method_BattleDemoRootComponent_OnBattleEndScript__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleEnd(name_high, namespaze, 1, v6, 0, -1, 0LL);
  return 1;
}


bool __fastcall BattleDemoRootComponent__GoToBattleStartTalk(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  ScriptManager_CallbackFunc_o *v6; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4A5E4BC & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleDemoRootComponent_OnBattleStartScript__);
    sub_1B885B0(&ScriptManager_CallbackFunc_TypeInfo);
    this = (BattleDemoRootComponent_o *)sub_1B885B0(&ScriptManager_TypeInfo);
    byte_4A5E4BC = 1;
  }
  klass = v2[14].klass;
  if ( !klass )
    sub_1B8880C(this, method);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v6 = (ScriptManager_CallbackFunc_o *)sub_1B887FC(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v6, v2, Method_BattleDemoRootComponent_OnBattleStartScript__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleStart2_41450924(name_high, namespaze, v6, 0, 0LL);
  return 1;
}


bool __fastcall BattleDemoRootComponent__GoToTerminal(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5E4C0 & 1) == 0 )
  {
    sub_1B885B0(&ScriptManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5E4C0 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5644B )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5644B = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
  return 1;
}


void __fastcall BattleDemoRootComponent__InitializeBattleDemo(
        BattleDemoRootComponent_o *this,
        System_String_o *demoInfo,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct System_Action_o *v4; // x23
  Il2CppObject *v7; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_object__object__o *v9; // x21
  __int64 v10; // x19
  struct System_String_array *v11; // x0
  BattleDemoRootComponent_o **p_PlayerList; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_String_array *v15; // x0
  struct System_String_array **p_EnemyList; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x25
  __int64 v20; // x28
  System_String_o *v21; // x0
  BattleDemoRootComponent_c *Item; // x0
  System_String_c *v23; // x1
  Il2CppObject *v24; // x24
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_c **v27; // x8
  bool v28; // cf
  __int64 v29; // x24
  System_String_o *v30; // x0
  Il2CppObject *v31; // x23
  struct System_String_array *v32; // x25
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_List_object__o *v35; // x23
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x0
  Il2CppObject *v39; // x24
  System_Collections_Generic_List_object__o *CueSheetList; // x23
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_Object_array *items; // x9
  _QWORD *v44; // x10
  __int64 size; // x11
  Il2CppClass **v46; // x0
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x2
  __int64 v50; // x3
  Il2CppObject *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_c *v54; // x1
  struct System_String_o **p_BgmName; // x0
  __int64 v56; // x2
  __int64 v57; // x3
  System_Collections_Generic_List_object__o *v58; // x20
  int32_t v59; // w2
  int32_t v60; // w3
  const MethodInfo *v61; // x1
  System_Collections_IEnumerator_o *v62; // x0
  BattleDemoRootComponent_o *v63; // x0
  const MethodInfo *v64; // x1
  struct System_Action_o *v65; // [xsp+8h] [xbp-78h]
  BattleDemoRootComponent_o *v66; // [xsp+10h] [xbp-70h]
  int v67; // [xsp+1Ch] [xbp-64h] BYREF

  v4 = callback;
  if ( (byte_4A5E4AD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantAssetArgs___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantAssetArgs__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_6006/*"Enemy"*/);
    sub_1B885B0(&StringLiteral_12597/*"Sequence"*/);
    sub_1B885B0(&StringLiteral_12834/*"Sound"*/);
    sub_1B885B0(&StringLiteral_3266/*"Bg"*/);
    sub_1B885B0(&StringLiteral_10673/*"Player"*/);
    sub_1B885B0(&StringLiteral_3272/*"Bgm"*/);
    sub_1B885B0(&StringLiteral_3271/*"BgType"*/);
    byte_4A5E4AD = 1;
  }
  v67 = 0;
  if ( !demoInfo )
    goto LABEL_51;
  v7 = MiniJSON_Json__Deserialize(demoInfo, 0LL);
  v65 = v4;
  if ( v7
    && (methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v7->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (System_Collections_Generic_Dictionary_string__object__c *)v7->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      v9 = (System_Collections_Generic_Dictionary_object__object__o *)v7;
    else
      v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = (__int64)&StringLiteral_10673/*"Player"*/;
  v11 = (struct System_String_array *)sub_1B88658(string___TypeInfo, 3LL);
  this->fields.PlayerList = v11;
  p_PlayerList = (BattleDemoRootComponent_o **)&this->fields.PlayerList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.PlayerList, (int32_t)v11, v13, v14);
  v15 = (struct System_String_array *)sub_1B88658(string___TypeInfo, 3LL);
  this->fields.EnemyList = v15;
  p_EnemyList = &this->fields.EnemyList;
  v66 = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.EnemyList, (int32_t)v15, v17, v18);
  v19 = -3LL;
  v20 = 32LL;
  do
  {
    v67 = v19 + 4;
    v21 = System_Int32__ToString((int32_t)&v67, 0LL);
    Item = (BattleDemoRootComponent_c *)System_String__Concat_61707032((System_String_o *)StringLiteral_10673/*"Player"*/, v21, 0LL);
    if ( !v9 )
      goto LABEL_52;
    v24 = (Il2CppObject *)Item;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v9,
           (Il2CppObject *)Item,
           (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      this = *p_PlayerList;
      Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                            v9,
                                            v24,
                                            (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
        sub_1B88814(Item, v23);
      *(BattleDemoRootComponent_c **)((char *)&this->klass + v20) = Item;
      sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)this + v20), (int32_t)Item, v25, v26);
    }
    v28 = __CFADD__(v19++, 1LL);
    v20 += 8LL;
  }
  while ( !v28 );
  this = v66;
  v10 = -3LL;
  v29 = 32LL;
  do
  {
    v67 = v10 + 4;
    v30 = System_Int32__ToString((int32_t)&v67, 0LL);
    v31 = (Il2CppObject *)System_String__Concat_61707032((System_String_o *)StringLiteral_6006/*"Enemy"*/, v30, 0LL);
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v9,
           v31,
           (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v32 = *p_EnemyList;
      Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                            v9,
                                            v31,
                                            (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v32 )
        goto LABEL_52;
      v27 = (System_String_c **)Item;
      if ( Item )
      {
        v23 = string_TypeInfo;
        if ( Item->_1.image != string_TypeInfo )
          goto LABEL_46;
      }
      if ( v10 + 3 >= (unsigned __int64)v32->max_length )
        goto LABEL_53;
      *(Il2CppClass **)((char *)&v32->obj.klass + v29) = (Il2CppClass *)Item;
      sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v32 + v29), (int32_t)Item, v33, v34);
    }
    v28 = __CFADD__(v10++, 1LL);
    v29 += 8LL;
  }
  while ( !v28 );
  v35 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  v66->fields.CueSheetList = (struct System_Collections_Generic_List_string__o *)v35;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v66->fields.CueSheetList, (int32_t)v35, v36, v37);
  v10 = 1LL;
  do
  {
    v67 = v10;
    v38 = System_Int32__ToString((int32_t)&v67, 0LL);
    v39 = (Il2CppObject *)System_String__Concat_61707032((System_String_o *)StringLiteral_12834/*"Sound"*/, v38, 0LL);
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v9,
           v39,
           (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      CueSheetList = (System_Collections_Generic_List_object__o *)v66->fields.CueSheetList;
      Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                            v9,
                                            v39,
                                            (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      v44 = Method_System_Collections_Generic_List_string__Add__;
      ++CueSheetList->fields._version;
      if ( !items )
        goto LABEL_52;
      size = CueSheetList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          CueSheetList,
          (Il2CppObject *)Item,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &items->obj.klass + size;
        CueSheetList->fields._size = size + 1;
        v46[4] = (Il2CppClass *)v27;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v27, v41, v42);
      }
    }
    v10 = (unsigned int)(v10 + 1);
  }
  while ( (_DWORD)v10 != 6 );
  Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                        v9,
                                        (Il2CppObject *)StringLiteral_3266/*"Bg"*/,
                                        (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_52;
  v10 = (__int64)&long_TypeInfo;
  if ( (Il2CppClass *)*((_QWORD *)Item->_1.image + 8) != long_TypeInfo->_1.element_class )
    goto LABEL_54;
  v66->fields.BgId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v47, v48);
  Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                        v9,
                                        (Il2CppObject *)StringLiteral_3271/*"BgType"*/,
                                        (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_52:
    sub_1B8880C(Item, v23);
  if ( (Il2CppClass *)*((_QWORD *)Item->_1.image + 8) != long_TypeInfo->_1.element_class )
    goto LABEL_54;
  v66->fields.BgType = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v49, v50);
  v51 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v9,
          (Il2CppObject *)StringLiteral_3272/*"Bgm"*/,
          (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v27 = (System_String_c **)v51;
  if ( !v51 )
    goto LABEL_47;
  v54 = string_TypeInfo;
  if ( (System_String_c *)v51->klass != string_TypeInfo
    || (v66->fields.BgmName = (struct System_String_o *)v51, p_BgmName = &v66->fields.BgmName, *v27 != v54) )
  {
LABEL_46:
    sub_1B88ACC(v27);
LABEL_47:
    this->fields.BgmName = 0LL;
    p_BgmName = &this->fields.BgmName;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_BgmName, (int32_t)v27, v52, v53);
  Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                        v9,
                                        (Il2CppObject *)StringLiteral_12597/*"Sequence"*/,
                                        (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_52;
  v4 = v65;
  if ( *((_QWORD *)Item->_1.image + 8) == *(_QWORD *)(*(_QWORD *)v10 + 64LL) )
  {
    this->fields.DemoSequenceServantId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, *(_QWORD *)v10, v56, v57);
LABEL_51:
    this->fields.InitializeCallback = v4;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.InitializeCallback,
      (int32_t)v4,
      (int32_t)callback,
      (int32_t)method);
    v58 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantAssetArgs__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v58,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantAssetArgs___ctor__);
    this->fields.loadedAssetArgsList = (struct System_Collections_Generic_List_ServantAssetArgs__o *)v58;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.loadedAssetArgsList, (int32_t)v58, v59, v60);
    v62 = BattleDemoRootComponent__SetupBattleDemo(this, v61);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v62, 0LL);
    return;
  }
LABEL_54:
  sub_1B88ACC(Item);
  BattleDemoRootComponent__ReleaseBattleDemo(v63, v64);
}


void __fastcall BattleDemoRootComponent__LoadBattleChrs(
        BattleDemoRootComponent_o *this,
        System_String_array *chrlist,
        const MethodInfo *method)
{
  BattleDemoRootComponent_o *v4; // x20
  __int64 v5; // x8
  unsigned __int64 i; // x25
  System_String_o *v7; // x21
  BattleDemoRootComponent_o *ServantIdByInfo; // x0
  int32_t v9; // w22
  const MethodInfo *v10; // x2
  int32_t LimitCountByInfo; // w23
  int32_t myFSM; // w24
  ServantAssetArgs_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v19; // x8

  v4 = this;
  if ( (byte_4A5E4B5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantAssetArgs__Add__);
    sub_1B885B0(&ServantAssetArgs_TypeInfo);
    this = (BattleDemoRootComponent_o *)sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    byte_4A5E4B5 = 1;
  }
  if ( !chrlist )
LABEL_21:
    sub_1B8880C(this, chrlist);
  v5 = *(_QWORD *)&chrlist->max_length;
  if ( (int)v5 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v5; ++i )
    {
      if ( i >= (unsigned int)v5 )
        sub_1B88814(this, chrlist);
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
        this = (BattleDemoRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitMaster___);
        if ( !this )
          goto LABEL_21;
        this = (BattleDemoRootComponent_o *)ServantLimitMaster__GetEntity(
                                              (ServantLimitMaster_o *)this,
                                              v9,
                                              LimitCountByInfo,
                                              0LL);
        if ( !this )
          goto LABEL_21;
        myFSM = (int32_t)this->fields.myFSM;
        v13 = (ServantAssetArgs_o *)sub_1B887FC(ServantAssetArgs_TypeInfo);
        ServantAssetArgs___ctor_43231400(v13, v9, LimitCountByInfo, 0, 0, myFSM, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        ServantAssetLoadManager__PreloadAssetsByArgs(v13, 0, 0LL);
        this = (BattleDemoRootComponent_o *)v4->fields.loadedAssetArgsList;
        if ( !this )
          goto LABEL_21;
        v16 = *(_QWORD *)&this->fields.m_CachedPtr;
        v17 = Method_System_Collections_Generic_List_ServantAssetArgs__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v16 )
          goto LABEL_21;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v16 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v13,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = v16 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v19 + 32) = v13;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 32), (int32_t)v13, v14, v15);
        }
      }
      LODWORD(v5) = chrlist->max_length;
    }
  }
}


void __fastcall BattleDemoRootComponent__LoadCueSheet(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *CueSheetList; // x0
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5E4B0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleDemoRootComponent__LoadCueSheet_b__28_0__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4A5E4B0 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  CueSheetList = this->fields.CueSheetList;
  if ( CueSheetList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      (System_Collections_Generic_List_object__o *)CueSheetList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v9.fields._current;
      ++this->fields.CueSheetCount;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, Method_BattleDemoRootComponent__LoadCueSheet_b__28_0__, 0LL);
      if ( !Instance )
        sub_1B8880C(v7, v8);
      SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, v6, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
}


void __fastcall BattleDemoRootComponent__OnBattleDemoLoadComplete(
        BattleDemoRootComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4A5E4B9 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4A5E4B9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance
    || (BattleSequenceManager__setup((BattleSequenceManager_o *)Instance, 0LL, 1, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(Instance, v5);
  }
  BattleSequenceManager__SetupDemoActor(
    (BattleSequenceManager_o *)Instance,
    this->fields.PlayerActorList,
    this->fields.EnemyActorList,
    0LL);
  v7 = BattleDemoRootComponent__WaitToNoblePhantasmPlay(this, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDemoRootComponent__OnBattleEndScript(
        BattleDemoRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  System_Action_object__o *v7; // x22

  v3 = (Il2CppObject *)this;
  if ( (byte_4A5E4BF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_string__TypeInfo);
    sub_1B885B0(&Method_BattleDemoRootComponent__OnBattleEndScript_b__47_0__);
    this = (BattleDemoRootComponent_o *)sub_1B885B0(&ScriptManager_TypeInfo);
    byte_4A5E4BF = 1;
  }
  klass = v3[14].klass;
  if ( !klass )
    sub_1B8880C(this, isExit);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v7 = (System_Action_object__o *)sub_1B887FC(System_Action_string__TypeInfo);
  System_Action_object____ctor(v7, v3, Method_BattleDemoRootComponent__OnBattleEndScript_b__47_0__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__LoadBattleEndGameDemo(name_high, namespaze, 0, (System_Action_string__o *)v7, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDemoRootComponent__OnBattleStartScript(
        BattleDemoRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4A5E4BD & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6929/*"GOTO_BATTLE"*/);
    byte_4A5E4BD = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B8880C(0LL, isExit);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6929/*"GOTO_BATTLE"*/, 0LL);
}


void __fastcall BattleDemoRootComponent__OnNoblePhantasmPlayComplete(
        BattleDemoRootComponent_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  struct System_Action_o *BattleDemoCallback; // x8
  void *performance; // x0
  struct UnityEngine_GameObject_array *PlayerActorList; // x22
  __int64 v7; // x8
  unsigned __int64 v8; // x23
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_array *EnemyActorList; // x22
  __int64 v11; // x8
  unsigned __int64 v12; // x23
  UnityEngine_Object_o *v13; // x20
  System_Collections_Generic_List_object__o *loadedAssetArgsList; // x20
  System_Action_object__o *v15; // x21
  Il2CppObject *v16; // x22
  struct BattleDemoRootComponent___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x1
  BattleDemoRootComponent_c *v21; // x0
  float BGM_FADEOUT_TIME; // s8
  __int64 *v23; // x8
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  _BOOL4 battleBefore; // w9
  _BOOL4 isBefore; // w8

  if ( (byte_4A5E4BB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_ServantAssetArgs__TypeInfo);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&BattleDemoRootComponent_TypeInfo);
    sub_1B885B0(&BattleFBXComponent_TypeInfo);
    sub_1B885B0(&System_GC_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantAssetArgs__ForEach__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&Method_BattleDemoRootComponent___c__OnNoblePhantasmPlayComplete_b__43_0__);
    sub_1B885B0(&BattleDemoRootComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_6933/*"GOTO_TERMINAL"*/);
    sub_1B885B0(&StringLiteral_6931/*"GOTO_BATTLESTARTTALK"*/);
    sub_1B885B0(&StringLiteral_6930/*"GOTO_BATTLENDTALK"*/);
    sub_1B885B0(&StringLiteral_3209/*"Battle/Common"*/);
    sub_1B885B0(&StringLiteral_5472/*"END_DEMO"*/);
    byte_4A5E4BB = 1;
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
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, const MethodInfo *))BattleDemoCallback->fields.m_target)(
      BattleDemoCallback->fields.original_method_info,
      *(_QWORD *)&BattleDemoCallback->fields.extra_arg,
      method);
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_68;
  BattlePerformance__setupCameraFov((BattlePerformance_o *)performance, this->fields.backupFov, 0LL);
  PlayerActorList = this->fields.PlayerActorList;
  if ( !PlayerActorList )
    goto LABEL_68;
  v7 = *(_QWORD *)&PlayerActorList->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    while ( v8 < (unsigned int)v7 )
    {
      v9 = (UnityEngine_Object_o *)PlayerActorList->m_Items[v8];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      performance = (void *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)performance & 1) != 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69459380(v9, 0LL);
      }
      LODWORD(v7) = PlayerActorList->max_length;
      if ( (__int64)++v8 >= (int)v7 )
        goto LABEL_20;
    }
LABEL_67:
    sub_1B88814(performance, seq);
  }
LABEL_20:
  EnemyActorList = this->fields.EnemyActorList;
  if ( !EnemyActorList )
    goto LABEL_68;
  v11 = *(_QWORD *)&EnemyActorList->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    while ( v12 < (unsigned int)v11 )
    {
      v13 = (UnityEngine_Object_o *)EnemyActorList->m_Items[v12];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      performance = (void *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
      if ( ((unsigned __int8)performance & 1) != 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69459380(v13, 0LL);
      }
      LODWORD(v11) = EnemyActorList->max_length;
      if ( (__int64)++v12 >= (int)v11 )
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
  v15 = *(System_Action_object__o **)(*((_QWORD *)performance + 23) + 16LL);
  if ( !v15 )
  {
    if ( !*((_DWORD *)performance + 56) )
    {
      j_il2cpp_runtime_class_init_0(performance);
      performance = BattleDemoRootComponent___c_TypeInfo;
    }
    v16 = (Il2CppObject *)**((_QWORD **)performance + 23);
    v15 = (System_Action_object__o *)sub_1B887FC(System_Action_ServantAssetArgs__TypeInfo);
    System_Action_object____ctor(
      v15,
      v16,
      Method_BattleDemoRootComponent___c__OnNoblePhantasmPlayComplete_b__43_0__,
      0LL);
    static_fields = BattleDemoRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Action_ServantAssetArgs__o *)v15;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__43_0, (int32_t)v15, v18, v19);
  }
  if ( !loadedAssetArgsList )
    goto LABEL_68;
  System_Collections_Generic_List_object___ForEach(
    loadedAssetArgsList,
    (System_Action_T__o *)v15,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_ServantAssetArgs__ForEach__);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_3209/*"Battle/Common"*/, 0LL);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !performance )
    goto LABEL_68;
  ServantAssetLoadManager__releaseNoblePhantasm((ServantAssetLoadManager_o *)performance, 0LL);
  BattleDemoRootComponent__ReleaseCueSheet(this, v20);
  v21 = BattleDemoRootComponent_TypeInfo;
  if ( !BattleDemoRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent_TypeInfo);
    v21 = BattleDemoRootComponent_TypeInfo;
  }
  BGM_FADEOUT_TIME = v21->static_fields->BGM_FADEOUT_TIME;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__fadeoutBgm(BGM_FADEOUT_TIME, 0LL);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !performance )
    goto LABEL_68;
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)performance, 0LL, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_62753100(0LL);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !performance )
LABEL_68:
    sub_1B8880C(performance, seq);
  CommonUI__maskFadeout((CommonUI_o *)performance, 1, 1.0, 0LL, 0LL);
  if ( !this->fields.battleSetupInfo )
  {
    performance = this->fields.myFSM;
    if ( !performance )
      goto LABEL_68;
    v23 = &StringLiteral_5472/*"END_DEMO"*/;
LABEL_56:
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)performance, (System_String_o *)*v23, 0LL);
    return;
  }
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !performance )
    goto LABEL_68;
  performance = (void *)AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)performance, 0LL);
  if ( ((unsigned __int8)performance & 1) != 0 )
  {
    performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( performance )
    {
      AvalonSceneManager__popSceneRefresh(
        (AvalonSceneManager_o *)performance,
        1,
        (Il2CppObject *)this->fields.battleSetupInfo,
        0LL);
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
      v23 = &StringLiteral_6930/*"GOTO_BATTLENDTALK"*/;
    else
      v23 = &StringLiteral_6933/*"GOTO_TERMINAL"*/;
    goto LABEL_56;
  }
  if ( !isBefore )
  {
    performance = this->fields.myFSM;
    if ( !performance )
      goto LABEL_68;
    v23 = &StringLiteral_6931/*"GOTO_BATTLESTARTTALK"*/;
    goto LABEL_56;
  }
}


void __fastcall BattleDemoRootComponent__ReleaseBattleDemo(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattleDemoRootComponent__ReleaseCueSheet(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x0
  ServantStatusBattleListViewItem_o *p_CueSheetList; // x19
  struct System_Collections_Generic_List_string__o *CueSheetList; // t1
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5E4B1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4A5E4B1 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  CueSheetList = this->fields.CueSheetList;
  p_CueSheetList = (ServantStatusBattleListViewItem_o *)&this->fields.CueSheetList;
  v3 = (System_Collections_Generic_List_object__o *)CueSheetList;
  if ( CueSheetList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      v3,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v11.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_1B8880C(0LL, v8);
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    p_CueSheetList->klass = 0LL;
    sub_1B88554(p_CueSheetList, 0, v9, v10);
  }
}


bool __fastcall BattleDemoRootComponent__RequestBattleSetup(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  BattleSetupInfo_o *battleSetupInfo; // x0

  battleSetupInfo = this->fields.battleSetupInfo;
  if ( battleSetupInfo )
    BattleScriptRootComponent__GoForBattle(battleSetupInfo, method);
  return 1;
}


System_Collections_IEnumerator_o *__fastcall BattleDemoRootComponent__SetupBattleDemo(
        BattleDemoRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5E4B2 & 1) == 0 )
  {
    sub_1B885B0(&BattleDemoRootComponent__SetupBattleDemo_d__30_TypeInfo);
    byte_4A5E4B2 = 1;
  }
  v3 = sub_1B887FC(BattleDemoRootComponent__SetupBattleDemo_d__30_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall BattleDemoRootComponent__StartBattle(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A5E4C2 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5E4C2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 10, 1, 0LL, 0, 0LL);
  return 1;
}


void __fastcall BattleDemoRootComponent__StartDemo(
        BattleDemoRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  BattleActorControl_o *Component_object; // x0
  __int64 v7; // x1
  struct UnityEngine_GameObject_array *PlayerActorList; // x8
  UnityEngine_GameObject_o *v9; // x21
  BattleActorControl_o *v10; // x20
  BattleFBXComponent_c *v11; // x0
  struct BattlePerformanceBg_o *perfBg; // x8
  int32_t DemoSequenceServantId; // w22
  BattleSequenceManager_o *v14; // x21
  struct BattleServantData_o *battleSvtData; // x8
  int32_t v16; // w20
  int32_t treasuredvcLevel; // w23
  BattleSequenceManager_onGameObjectLoadComplete_o *v18; // x24

  if ( (byte_4A5E4B8 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleDemoRootComponent_OnBattleDemoLoadComplete__);
    sub_1B885B0(&BattleFBXComponent_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1B885B0(&StringLiteral_9308/*"NPACTOR"*/);
    sub_1B885B0(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo);
    byte_4A5E4B8 = 1;
  }
  this->fields.BattleDemoCallback = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.BattleDemoCallback,
    (int32_t)callback,
    (int32_t)method,
    v3);
  PlayerActorList = this->fields.PlayerActorList;
  if ( !PlayerActorList )
    goto LABEL_18;
  if ( !PlayerActorList->max_length )
    sub_1B88814(Component_object, v7);
  v9 = PlayerActorList->m_Items[0];
  if ( !v9 )
    goto LABEL_18;
  Component_object = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                               v9,
                                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !this->fields.FieldMotion )
    goto LABEL_18;
  v10 = Component_object;
  Component_object = (BattleActorControl_o *)PlayMakerFSM__get_Fsm(this->fields.FieldMotion, 0LL);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (BattleActorControl_o *)Component_object->fields.nodeText;
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                               (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                               (System_String_o *)StringLiteral_9308/*"NPACTOR"*/,
                                               0LL);
  if ( !Component_object )
    goto LABEL_18;
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Component_object, v9, 0LL);
  v11 = BattleFBXComponent_TypeInfo;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v11 = BattleFBXComponent_TypeInfo;
  }
  v11->static_fields->EnableEvent = 0;
  Component_object = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  perfBg = this->fields.perfBg;
  if ( !perfBg )
    goto LABEL_18;
  if ( !Component_object )
    goto LABEL_18;
  BattleSequenceManager__init(
    (BattleSequenceManager_o *)Component_object,
    this->fields.performance,
    v9,
    this->fields.PlayerActorList,
    this->fields.EnemyActorList,
    this->fields.actorCamera,
    perfBg->fields.bgobject,
    0LL);
  Component_object = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v10 )
    goto LABEL_18;
  DemoSequenceServantId = this->fields.DemoSequenceServantId;
  v14 = (BattleSequenceManager_o *)Component_object;
  Component_object = (BattleActorControl_o *)BattleActorControl__getLimitCount(v10, 0LL);
  battleSvtData = v10->fields.battleSvtData;
  if ( !battleSvtData
    || (v16 = (int)Component_object,
        treasuredvcLevel = battleSvtData->fields.treasuredvcLevel,
        v18 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_1B887FC(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo),
        BattleSequenceManager_onGameObjectLoadComplete___ctor(
          v18,
          (Il2CppObject *)this,
          Method_BattleDemoRootComponent_OnBattleDemoLoadComplete__,
          0LL),
        !v14) )
  {
LABEL_18:
    sub_1B8880C(Component_object, v7);
  }
  BattleSequenceManager__loadSequence(
    v14,
    DemoSequenceServantId,
    DemoSequenceServantId,
    v16,
    0,
    treasuredvcLevel,
    1,
    v18,
    0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleDemoRootComponent__WaitToNoblePhantasmPlay(
        BattleDemoRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5E4BA & 1) == 0 )
  {
    sub_1B885B0(&BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_TypeInfo);
    byte_4A5E4BA = 1;
  }
  v3 = sub_1B887FC(BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleDemoRootComponent___LoadCueSheet_b__28_0(
        BattleDemoRootComponent_o *this,
        const MethodInfo *method)
{
  --this->fields.CueSheetCount;
}


void __fastcall BattleDemoRootComponent___OnBattleEndScript_b__47_0(
        BattleDemoRootComponent_o *this,
        System_String_o *demoInfo,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  CommonUI_o *Instance; // x0

  v3 = demoInfo;
  if ( (byte_4A5E4C6 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_6933/*"GOTO_TERMINAL"*/);
    byte_4A5E4C6 = 1;
  }
  if ( v3 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 1, 0LL);
      demoInfo = (System_String_o *)this->fields.battleSetupInfo;
      if ( demoInfo )
      {
        BYTE1(demoInfo[4].klass) = 0;
        ((void (__fastcall *)(BattleDemoRootComponent_o *))this->klass->vtable._5_beginStartUp.method)(this);
        return;
      }
    }
LABEL_9:
    sub_1B8880C(Instance, demoInfo);
  }
  Instance = (CommonUI_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6933/*"GOTO_TERMINAL"*/, 0LL);
}


void __fastcall BattleDemoRootComponent___SetupBattleDemo_b__30_0(
        BattleDemoRootComponent_o *this,
        AssetData_o *aData,
        const MethodInfo *method)
{
  BattleFieldMotionComponent_o *performance; // x0
  struct BattlePerformance_o *v6; // x8
  struct BattleFieldMotionComponent_array *fieldmotion; // x8
  struct PlayMakerFSM_o *Fsm; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  UnityEngine_GameObject_o *cameraObject; // x23
  UnityEngine_Transform_o *v12; // x22
  struct UnityEngine_GameObject_o **p_cameraObject; // x21
  Il2CppObject *Object_object__48635516; // x0
  struct UnityEngine_GameObject_o *ObjectIfNotExist; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_Transform_o *v18; // x20
  struct BattlePerformance_o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  struct BattlePerformance_o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  struct UnityEngine_Transform_o *fieldPopupTacticalTr; // x8
  struct UnityEngine_Transform_array *v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  struct UnityEngine_Transform_o *v31; // x8
  struct UnityEngine_Transform_o *monitor; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  struct BattlePerformance_o *v35; // x8
  struct BattleActionCamera_o *actioncamera; // x9
  struct UnityEngine_Camera_o *frontcamera; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  struct BattlePerformance_o *v40; // x8
  struct BattleActionCamera_o *v41; // x8
  struct UnityEngine_Camera_o *actorcamera; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  struct BattlePerformance_o *v45; // x8
  struct PlayMakerFSM_o *camerafsm; // x1
  struct PlayMakerFSM_o **p_CameraFsm; // x19
  __int64 v48; // x8
  __int64 v49; // x19
  int32_t v50; // w2
  int32_t v51; // w3

  if ( (byte_4A5E4C4 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActionCamera___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_1B885B0(&StringLiteral_11395/*"RootCameraPrefab"*/);
    byte_4A5E4C4 = 1;
  }
  performance = (BattleFieldMotionComponent_o *)this->fields.performance;
  if ( !performance )
    goto LABEL_33;
  BattlePerformance__loadFieldMotion((BattlePerformance_o *)performance, aData, 0LL, 0LL);
  v6 = this->fields.performance;
  if ( !v6 )
    goto LABEL_33;
  fieldmotion = v6->fields.fieldmotion;
  if ( !fieldmotion )
    goto LABEL_33;
  if ( !fieldmotion->max_length )
    sub_1B88814(performance, aData);
  performance = fieldmotion->m_Items[0];
  if ( !performance )
    goto LABEL_33;
  Fsm = BattleFieldMotionComponent__getFsm(performance, 0LL);
  this->fields.FieldMotion = Fsm;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.FieldMotion, (int32_t)Fsm, v9, v10);
  performance = (BattleFieldMotionComponent_o *)this->fields.GroundObject;
  if ( !performance )
    goto LABEL_33;
  performance = (BattleFieldMotionComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                  (UnityEngine_GameObject_o *)performance,
                                                  0LL);
  if ( !performance )
    goto LABEL_33;
  performance = (BattleFieldMotionComponent_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)performance,
                                                  0LL);
  if ( !aData )
    goto LABEL_33;
  cameraObject = this->fields.cameraObject;
  v12 = (UnityEngine_Transform_o *)performance;
  p_cameraObject = &this->fields.cameraObject;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              aData,
                              (System_String_o *)StringLiteral_11395/*"RootCameraPrefab"*/,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  ObjectIfNotExist = BaseMonoBehaviour__createObjectIfNotExist(
                       (BaseMonoBehaviour_o *)this,
                       cameraObject,
                       (UnityEngine_GameObject_o *)Object_object__48635516,
                       v12,
                       0LL,
                       0LL);
  this->fields.cameraObject = ObjectIfNotExist;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cameraObject, (int32_t)ObjectIfNotExist, v16, v17);
  performance = (BattleFieldMotionComponent_o *)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_33;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)performance, (System_String_o *)StringLiteral_11395/*"RootCameraPrefab"*/, 0LL);
  performance = (BattleFieldMotionComponent_o *)*p_cameraObject;
  if ( !*p_cameraObject )
    goto LABEL_33;
  performance = (BattleFieldMotionComponent_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)performance,
                                                  0LL);
  v18 = (UnityEngine_Transform_o *)performance;
  if ( !byte_4A55CE1 )
  {
    performance = (BattleFieldMotionComponent_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v18 )
    goto LABEL_33;
  UnityEngine_Transform__set_eulerAngles(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  performance = (BattleFieldMotionComponent_o *)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_33;
  v19 = this->fields.performance;
  performance = (BattleFieldMotionComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  (UnityEngine_GameObject_o *)performance,
                                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v19 )
    goto LABEL_33;
  v19->fields.camerafsm = (struct PlayMakerFSM_o *)performance;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->fields.camerafsm, (int32_t)performance, v20, v21);
  performance = (BattleFieldMotionComponent_o *)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_33;
  v22 = this->fields.performance;
  performance = (BattleFieldMotionComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  (UnityEngine_GameObject_o *)performance,
                                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActionCamera___);
  if ( !v22 )
    goto LABEL_33;
  v22->fields.actioncamera = (struct BattleActionCamera_o *)performance;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->fields.actioncamera, (int32_t)performance, v23, v24);
  performance = (BattleFieldMotionComponent_o *)this->fields.performance;
  if ( !performance )
    goto LABEL_33;
  fieldPopupTacticalTr = performance[1].fields.fieldPopupTacticalTr;
  if ( !fieldPopupTacticalTr )
    goto LABEL_33;
  v28 = *(struct UnityEngine_Transform_array **)&fieldPopupTacticalTr[2].fields.m_CachedPtr;
  performance->fields.npcTacticalTr = v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&performance->fields.npcTacticalTr, (int32_t)v28, v25, v26);
  performance = (BattleFieldMotionComponent_o *)this->fields.performance;
  if ( !performance )
    goto LABEL_33;
  v31 = performance[1].fields.fieldPopupTacticalTr;
  if ( !v31 )
    goto LABEL_33;
  monitor = (struct UnityEngine_Transform_o *)v31[3].monitor;
  performance->fields.fieldPopupTacticalTr = monitor;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&performance->fields.fieldPopupTacticalTr,
    (int32_t)monitor,
    v29,
    v30);
  v35 = this->fields.performance;
  if ( !v35 )
    goto LABEL_33;
  actioncamera = v35->fields.actioncamera;
  if ( !actioncamera )
    goto LABEL_33;
  frontcamera = actioncamera->fields.frontcamera;
  v35->fields.cutIncamera = frontcamera;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v35->fields.cutIncamera, (int32_t)frontcamera, v33, v34);
  v40 = this->fields.performance;
  if ( !v40 )
    goto LABEL_33;
  v41 = v40->fields.actioncamera;
  if ( !v41 )
    goto LABEL_33;
  actorcamera = v41->fields.actorcamera;
  this->fields.actorCamera = actorcamera;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.actorCamera, (int32_t)actorcamera, v38, v39);
  v45 = this->fields.performance;
  if ( !v45 )
    goto LABEL_33;
  camerafsm = v45->fields.camerafsm;
  this->fields.CameraFsm = camerafsm;
  p_CameraFsm = &this->fields.CameraFsm;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_CameraFsm, (int32_t)camerafsm, v43, v44);
  v48 = (__int64)*(p_CameraFsm - 7);
  if ( !v48
    || (performance = *(BattleFieldMotionComponent_o **)(v48 + 144)) == 0LL
    || (v49 = (__int64)*(p_CameraFsm - 4),
        performance = (BattleFieldMotionComponent_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)performance,
                                                        0LL),
        !v49) )
  {
LABEL_33:
    sub_1B8880C(performance, aData);
  }
  *(_QWORD *)(v49 + 40) = performance;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v49 + 40), (int32_t)performance, v50, v51);
}


void __fastcall BattleDemoRootComponent___beginStartUp_b__36_0(
        BattleDemoRootComponent_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_Action_o *v6; // x20
  Il2CppObject *v7; // x21
  struct BattleDemoRootComponent___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5E4C5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_BattleDemoRootComponent___c__beginStartUp_b__36_1__);
    sub_1B885B0(&BattleDemoRootComponent___c_TypeInfo);
    byte_4A5E4C5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
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
    v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v6, v7, Method_BattleDemoRootComponent___c__beginStartUp_b__36_1__, 0LL);
    static_fields = BattleDemoRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__36_1 = v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__36_1, (int32_t)v6, v9, v10);
  }
  if ( !this )
LABEL_12:
    sub_1B8880C(Instance, v4);
  BattleDemoRootComponent__StartDemo(this, v6, v5);
}


void __fastcall BattleDemoRootComponent__beginFinish(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattleDemoRootComponent__beginInitialize(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5E4B6 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5E4B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadeout((CommonUI_o *)Instance, 1, 0.0, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
  }
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall BattleDemoRootComponent__beginStartUp(
        BattleDemoRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  Il2CppClass *v6; // x1
  __int64 methodPtr_low; // x8
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x3
  struct BattleSetupInfo_o **p_battleSetupInfo; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4A5E4B7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleDemoRootComponent__beginStartUp_b__36_0__);
    sub_1B885B0(&BattleSetupInfo_TypeInfo);
    byte_4A5E4B7 = 1;
  }
  if ( data )
  {
    v6 = (Il2CppClass *)BattleSetupInfo_TypeInfo;
    methodPtr_low = LOBYTE(BattleSetupInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleSetupInfo_TypeInfo )
    {
      this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)data;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
      if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && data->klass->_2.typeHierarchy[methodPtr_low - 1] == v6 )
      {
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.battleSetupInfo,
          (int32_t)data,
          (int32_t)method,
          v3);
        if ( *p_battleSetupInfo )
        {
          data = (Il2CppObject *)(*p_battleSetupInfo)->fields.demoInfo;
          goto LABEL_7;
        }
      }
      else
      {
        sub_1B88ACC(data);
      }
      sub_1B8880C(v11, v12);
    }
    data = 0LL;
  }
LABEL_7:
  v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleDemoRootComponent__beginStartUp_b__36_0__, 0LL);
  BattleDemoRootComponent__InitializeBattleDemo(this, (System_String_o *)data, v8, v9);
}


void __fastcall BattleDemoRootComponent__SetupBattleDemo_d__30___ctor(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleDemoRootComponent__SetupBattleDemo_d__30__MoveNext(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleDemoRootComponent__SetupBattleDemo_d__30_o *v4; // x19
  struct BattleDemoRootComponent_o *_4__this; // x20
  AssetLoader_LoadEndDataHandler_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  struct System_Action_o *InitializeCallback; // x8
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  int32_t v14; // w2
  int32_t v15; // w3
  ServantStatusBattleListViewItem_o *v16; // x19
  int v17; // w8
  System_String_o *BgmName; // x20
  UnityEngine_WaitForSeconds_o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3

  v4 = this;
  if ( (byte_4A5E4C9 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_BattleDemoRootComponent__SetupBattleDemo_b__30_0__);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1B885B0(&StringLiteral_3209/*"Battle/Common"*/);
    this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)sub_1B885B0(&StringLiteral_11069/*"RESET_CAMERA_NOBLEEND"*/);
    byte_4A5E4C9 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v6,
        (Il2CppObject *)_4__this,
        Method_BattleDemoRootComponent__SetupBattleDemo_b__30_0__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage((System_String_o *)StringLiteral_3209/*"Battle/Common"*/, v6, 1, 0LL);
      goto LABEL_8;
    case 1:
      v4->fields.__1__state = -1;
LABEL_8:
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)AssetManager__LoadIsBusy(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v4->fields.__2__current = 0LL;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(p__2__current, 0, v7, v8);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
      if ( !_4__this )
        goto LABEL_35;
      this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_35;
      BattlePerformance__ForceLoadBg((BattlePerformance_o *)this, _4__this->fields.BgId, _4__this->fields.BgType, 0LL);
      BattleDemoRootComponent__LoadBattleChrs(_4__this, _4__this->fields.PlayerList, v12);
      BattleDemoRootComponent__LoadBattleChrs(_4__this, _4__this->fields.EnemyList, v13);
LABEL_22:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( _4__this )
        {
          BattleDemoRootComponent__LoadCueSheet(_4__this, method);
LABEL_28:
          if ( _4__this->fields.CueSheetCount )
          {
            v4->fields.__2__current = 0LL;
            v16 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B88554(v16, 0, v2, v3);
            v17 = 3;
            goto LABEL_34;
          }
          BattleDemoRootComponent__CreateActors(_4__this, method);
          this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)_4__this->fields.CameraFsm;
          if ( this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11069/*"RESET_CAMERA_NOBLEEND"*/, 0LL);
            BgmName = _4__this->fields.BgmName;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playBgm(BgmName, 0LL);
            v19 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v19, 1.0, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v19;
            v16 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B88554(v16, (int32_t)v19, v20, v21);
            v17 = 4;
            goto LABEL_34;
          }
        }
LABEL_35:
        sub_1B8880C(this, method);
      }
      v4->fields.__2__current = 0LL;
      v16 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(v16, 0, v14, v15);
      v17 = 2;
LABEL_34:
      *(_DWORD *)&v16[-1].fields.isMine = v17;
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
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))InitializeCallback->fields.m_target)(
          InitializeCallback->fields.original_method_info,
          *(_QWORD *)&InitializeCallback->fields.extra_arg);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleDemoRootComponent__SetupBattleDemo_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleDemoRootComponent__SetupBattleDemo_d__30__System_Collections_IEnumerator_Reset(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleDemoRootComponent__SetupBattleDemo_d__30_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleDemoRootComponent__SetupBattleDemo_d__30__System_Collections_IEnumerator_get_Current(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleDemoRootComponent__SetupBattleDemo_d__30__System_IDisposable_Dispose(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42___ctor(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42__MoveNext(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        const MethodInfo *method)
{
  BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *v2; // x20
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  bool result; // w0
  struct BattleDemoRootComponent_o *_4__this; // x19
  struct BattlePerformance_o *performance; // x20
  BattlePerformance_c *v10; // x0
  struct BattlePerformance_o *v11; // x8
  BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *v12; // x20
  Il2CppObject *Instance; // x20
  System_Action_object__o *v14; // x21

  v2 = this;
  if ( (byte_4A5E4CA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_USSequencer__TypeInfo);
    sub_1B885B0(&Method_BattleDemoRootComponent_OnNoblePhantasmPlayComplete__);
    sub_1B885B0(&BattlePerformance_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)sub_1B885B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4A5E4CA = 1;
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
    BattlePerformance__FlipAll((BattlePerformance_o *)this, 0, 0LL);
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
    BattlePerformance__setupCameraFov(performance, v10->static_fields->DefaultFov, 0LL);
    v11 = _4__this->fields.performance;
    if ( !v11 )
      goto LABEL_20;
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)v11->fields.actorcamera;
    if ( !this )
      goto LABEL_20;
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL);
    v12 = this;
    if ( !byte_4A55CE1 )
    {
      this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    if ( !v12
      || (UnityEngine_Transform__set_localEulerAngles(
            (UnityEngine_Transform_o *)v12,
            UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
            0LL),
          (this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__maskFadein((CommonUI_o *)this, 1.0, 0LL, 0LL),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__),
          v14 = (System_Action_object__o *)sub_1B887FC(System_Action_USSequencer__TypeInfo),
          System_Action_object____ctor(
            v14,
            (Il2CppObject *)_4__this,
            Method_BattleDemoRootComponent_OnNoblePhantasmPlayComplete__,
            0LL),
          !Instance) )
    {
LABEL_20:
      sub_1B8880C(this, method);
    }
    BattleSequenceManager__play((BattleSequenceManager_o *)Instance, 0, 1, (System_Action_USSequencer__o *)v14, 0LL);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0LL);
    v2->fields.__2__current = (Il2CppObject *)v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__2__current, (int32_t)v4, v5, v6);
    result = 1;
    v2->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42__System_Collections_IEnumerator_Reset(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42__System_Collections_IEnumerator_get_Current(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42__System_IDisposable_Dispose(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleDemoRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E4C7 & 1) == 0 )
  {
    sub_1B885B0(&BattleDemoRootComponent___c_TypeInfo);
    byte_4A5E4C7 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleDemoRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleDemoRootComponent___c_TypeInfo->static_fields->__9 = (struct BattleDemoRootComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BattleDemoRootComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall BattleDemoRootComponent___c___ctor(BattleDemoRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleDemoRootComponent___c___OnNoblePhantasmPlayComplete_b__43_0(
        BattleDemoRootComponent___c_o *this,
        ServantAssetArgs_o *args,
        const MethodInfo *method)
{
  if ( (byte_4A5E4C8 & 1) == 0 )
  {
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    byte_4A5E4C8 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__UnloadAssetsByArgs(args, 0LL);
}


void __fastcall BattleDemoRootComponent___c___beginStartUp_b__36_1(
        BattleDemoRootComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}