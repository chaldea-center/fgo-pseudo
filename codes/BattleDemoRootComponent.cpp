void __fastcall BattleDemoRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_42AECE2 & 1) == 0 )
  {
    sub_B52984(&BattleDemoRootComponent_TypeInfo);
    byte_42AECE2 = 1;
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
  int32_t v12; // w25
  unsigned __int64 v13; // x24
  System_String_o *v14; // x19
  BattleDemoRootComponent_o *ServantIdByInfo; // x0
  int32_t v16; // w28
  const MethodInfo *v17; // x2
  int32_t LimitCountByInfo; // w0
  struct UnityEngine_GameObject_o *actorPrefab; // x19
  int32_t v20; // w21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x19
  Il2CppClass **v28; // x0
  UnityEngine_Transform_o *v29; // x21
  UnityEngine_Transform_o *transform; // x21
  int v31; // s0
  UnityEngine_Transform_o *v34; // x21
  int v35; // s0
  UnityEngine_Transform_o *v38; // x21
  int v39; // s0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **performance; // x1
  BattleActorControl_o *v49; // x19
  BattleServantData_o *v50; // x22
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v51; // x21
  int32_t v52; // w26
  UnityEngine_GameObject_o *v53; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *PlayerPopTr; // x0
  UnityEngine_GameObject_o *v56; // x21
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_Component_o *v58; // x21
  UnityEngine_GameObject_o *v59; // x0
  __int64 v60; // x0
  __int64 v61; // x0
  System_String_array *v62; // [xsp+0h] [xbp-80h]
  UnityEngine_GameObject_array *v63; // [xsp+8h] [xbp-78h]
  BattleFieldMotionComponent_o *v64; // [xsp+10h] [xbp-70h]
  System_String_o **m_Items; // [xsp+20h] [xbp-60h]
  int32_t value; // [xsp+2Ch] [xbp-54h]

  if ( (byte_42AECD3 & 1) == 0 )
  {
    sub_B52984(&BattleServantData_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleFieldMotionComponent___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_20374/*"limitCount"*/);
    sub_B52984(&StringLiteral_22657/*"svtId"*/);
    sub_B52984(&StringLiteral_19921/*"index"*/);
    sub_B52984(&StringLiteral_23257/*"userSvtId"*/);
    sub_B52984(&StringLiteral_23094/*"uniqueId"*/);
    sub_B52984(&StringLiteral_16074/*"_ENEMY"*/);
    sub_B52984(&StringLiteral_16137/*"_PLAYER"*/);
    byte_42AECD3 = 1;
  }
  FieldMotion = (char *)this->fields.FieldMotion;
  if ( !FieldMotion
    || (FieldMotion = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0LL)) == 0LL
    || (FieldMotion = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)FieldMotion,
                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleFieldMotionComponent___),
        !chrInfos) )
  {
LABEL_39:
    sub_B52A5C(FieldMotion, *(_QWORD *)&uniqueIdStart);
  }
  v11 = *(_QWORD *)&chrInfos->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = uniqueIdStart;
    v13 = 0LL;
    m_Items = chrInfos->m_Items;
    v63 = actors;
    v64 = (BattleFieldMotionComponent_o *)FieldMotion;
    v62 = chrInfos;
    do
    {
      if ( v13 >= (unsigned int)v11 )
      {
LABEL_40:
        v60 = sub_B52A88(FieldMotion);
        sub_B52A28(v60, 0LL);
      }
      v14 = m_Items[v13];
      if ( v14 )
      {
        ServantIdByInfo = (BattleDemoRootComponent_o *)BattleDemoRootComponent__GetServantIdByInfo(
                                                         (BattleDemoRootComponent_o *)FieldMotion,
                                                         m_Items[v13],
                                                         v10);
        v16 = (int)ServantIdByInfo;
        LimitCountByInfo = BattleDemoRootComponent__GetLimitCountByInfo(ServantIdByInfo, v14, v17);
        actorPrefab = this->fields.actorPrefab;
        v20 = LimitCountByInfo;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        FieldMotion = (char *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                (UnityEngine_UI_Dropdown_DropdownItem_o *)actorPrefab,
                                (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !actors )
          goto LABEL_39;
        v27 = (System_Int32_array **)FieldMotion;
        if ( FieldMotion )
        {
          FieldMotion = (char *)sub_B52A44(FieldMotion, actors->obj.klass->_1.element_class);
          if ( !FieldMotion )
          {
            v61 = sub_B52A7C();
            sub_B52A28(v61, 0LL);
          }
        }
        if ( v12 - uniqueIdStart >= actors->max_length )
          goto LABEL_40;
        v28 = &actors->obj.klass + v12 - uniqueIdStart;
        v28[4] = (Il2CppClass *)v27;
        value = v20;
        sub_B52920((BattleServantConfConponent_o *)(v28 + 4), v27, v21, v22, v23, v24, v25, v26);
        if ( !v27 )
          goto LABEL_39;
        FieldMotion = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v27, 0LL);
        if ( !this->fields.Field )
          goto LABEL_39;
        v29 = (UnityEngine_Transform_o *)FieldMotion;
        FieldMotion = (char *)UnityEngine_GameObject__get_transform(this->fields.Field, 0LL);
        if ( !v29 )
          goto LABEL_39;
        UnityEngine_Transform__set_parent(v29, (UnityEngine_Transform_o *)FieldMotion, 0LL);
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v27, 0LL);
        *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_zero(0LL);
        if ( !transform )
          goto LABEL_39;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v31, 0LL);
        v34 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v27, 0LL);
        *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Vector3__get_zero(0LL);
        if ( !v34 )
          goto LABEL_39;
        UnityEngine_Transform__set_localEulerAngles(v34, *(UnityEngine_Vector3_o *)&v35, 0LL);
        v38 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v27, 0LL);
        *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Vector3__get_one(0LL);
        if ( !v38 )
          goto LABEL_39;
        UnityEngine_Transform__set_localScale(v38, *(UnityEngine_Vector3_o *)&v39, 0LL);
        FieldMotion = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)v27,
                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !FieldMotion )
          goto LABEL_39;
        performance = (System_Int32_array **)this->fields.performance;
        v49 = (BattleActorControl_o *)FieldMotion;
        *((_QWORD *)FieldMotion + 16) = performance;
        sub_B52920((BattleServantConfConponent_o *)(FieldMotion + 128), performance, v42, v43, v44, v45, v46, v47);
        v50 = (BattleServantData_o *)sub_B52A54(BattleServantData_TypeInfo);
        BattleServantData___ctor(v50, 0LL);
        v51 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__int__TypeInfo);
        System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
          v51,
          (const MethodInfo_2F0F4D4 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
        if ( !v51 )
          goto LABEL_39;
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          v51,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_19921/*"index"*/,
          v12,
          (const MethodInfo_2F10060 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          v51,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_23094/*"uniqueId"*/,
          v12,
          (const MethodInfo_2F10060 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          v51,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_23257/*"userSvtId"*/,
          v12,
          (const MethodInfo_2F10060 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          v51,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22657/*"svtId"*/,
          v16,
          (const MethodInfo_2F10060 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          v51,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20374/*"limitCount"*/,
          value,
          (const MethodInfo_2F10060 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        if ( !v50 )
          goto LABEL_39;
        BattleServantData__SetFakeData(v50, (System_Collections_Generic_Dictionary_string__int__o *)v51, 0LL);
        v52 = v12 - uniqueIdStart;
        if ( isPlayer )
        {
          BattleActorControl__setTypePlayer(v49, 0LL);
          BattleActorControl__setServantData(v49, v50, 0LL);
          BattleActorControl__setDirLeft(v49, 0LL);
          FieldMotion = (char *)this->fields.actorCamera;
          if ( !FieldMotion )
            goto LABEL_39;
          FieldMotion = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0LL);
          chrInfos = v62;
          if ( !this->fields.CameraFsm )
            goto LABEL_39;
          v53 = (UnityEngine_GameObject_o *)FieldMotion;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.CameraFsm, 0LL);
          BattleActorControl__setMotionListForDemo(
            v49,
            (System_String_o *)StringLiteral_16137/*"_PLAYER"*/,
            v53,
            gameObject,
            this->fields.CommonMotionPrefab,
            0LL);
          actors = v63;
          if ( !v64 )
            goto LABEL_39;
          PlayerPopTr = BattleFieldMotionComponent__getPlayerPopTr(v64, v52, 0LL);
        }
        else
        {
          BattleActorControl__setTypeEnemy(v49, 0LL);
          BattleActorControl__setServantData(v49, v50, 0LL);
          BattleActorControl__setDirRight(v49, 0LL);
          FieldMotion = (char *)this->fields.actorCamera;
          if ( !FieldMotion )
            goto LABEL_39;
          FieldMotion = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0LL);
          chrInfos = v62;
          if ( !this->fields.CameraFsm )
            goto LABEL_39;
          v56 = (UnityEngine_GameObject_o *)FieldMotion;
          v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.CameraFsm, 0LL);
          BattleActorControl__setMotionListForDemo(
            v49,
            (System_String_o *)StringLiteral_16074/*"_ENEMY"*/,
            v56,
            v57,
            this->fields.CommonMotionPrefab,
            0LL);
          actors = v63;
          if ( !v64 )
            goto LABEL_39;
          PlayerPopTr = BattleFieldMotionComponent__getEnemyPopPoint(v64, v52, 0LL);
        }
        v58 = (UnityEngine_Component_o *)PlayerPopTr;
        BattleActorControl__setCamera(v49, this->fields.actorCamera, 0LL);
        if ( !v58 )
          goto LABEL_39;
        v59 = UnityEngine_Component__get_gameObject(v58, 0LL);
        BattleActorControl__setTargetObject(v49, v59, 0LL);
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
  System_Int32_array **v4; // x0
  struct UnityEngine_GameObject_array **p_PlayerActorList; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_String_array *EnemyList; // x8
  System_Int32_array **v13; // x0
  struct UnityEngine_GameObject_array **p_EnemyActorList; // x20
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
  struct BattlePerformance_o *performance; // x8
  System_Int32_array **PlayerActorList; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct BattlePerformance_o *v35; // x8
  System_Int32_array **EnemyActorList; // x1
  const MethodInfo *v37; // x5
  const MethodInfo *v38; // x5
  struct UnityEngine_GameObject_array *v39; // x8
  unsigned __int64 v40; // x24
  HutongGames_PlayMaker_FsmVariables_o *v41; // x22
  System_String_o *v42; // x0
  struct UnityEngine_GameObject_array *v43; // x8
  struct UnityEngine_GameObject_array *v44; // x8
  unsigned __int64 v45; // x23
  signed __int64 max_length; // x24
  HutongGames_PlayMaker_FsmVariables_o *v47; // x21
  System_String_o *v48; // x0
  struct UnityEngine_GameObject_array *v49; // x8
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct System_String_array *CameraFsm; // x1
  struct UnityEngine_GameObject_array *v57; // x22
  int v58; // w9
  int v59; // w8
  UnityEngine_Object_o *v60; // x21
  struct UnityEngine_GameObject_array *v61; // x21
  int v62; // w9
  int v63; // w8
  UnityEngine_Object_o *v64; // x20
  __int64 v65; // x0
  int v66; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_42AECD2 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_GameObject___TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_8853/*"MOTION_ENTRY"*/);
    sub_B52984(&StringLiteral_5544/*"ENEMY"*/);
    sub_B52984(&StringLiteral_3511/*"CameraFsm"*/);
    sub_B52984(&StringLiteral_10520/*"PLAYER"*/);
    this = (BattleDemoRootComponent_o *)sub_B52984(&StringLiteral_5530/*"END_NP"*/);
    byte_42AECD2 = 1;
  }
  v66 = 0;
  PlayerList = v2->fields.PlayerList;
  if ( !PlayerList )
    goto LABEL_57;
  v4 = (System_Int32_array **)sub_B5299C(UnityEngine_GameObject___TypeInfo, PlayerList->max_length);
  v2->fields.PlayerActorList = (struct UnityEngine_GameObject_array *)v4;
  p_PlayerActorList = &v2->fields.PlayerActorList;
  sub_B52920((BattleServantConfConponent_o *)&v2->fields.PlayerActorList, v4, v6, v7, v8, v9, v10, v11);
  EnemyList = v2->fields.EnemyList;
  if ( !EnemyList )
    goto LABEL_57;
  v13 = (System_Int32_array **)sub_B5299C(UnityEngine_GameObject___TypeInfo, EnemyList->max_length);
  v2->fields.EnemyActorList = (struct UnityEngine_GameObject_array *)v13;
  p_EnemyActorList = &v2->fields.EnemyActorList;
  sub_B52920((BattleServantConfConponent_o *)&v2->fields.EnemyActorList, v13, v15, v16, v17, v18, v19, v20);
  performance = v2->fields.performance;
  if ( !performance )
    goto LABEL_57;
  PlayerActorList = (System_Int32_array **)v2->fields.PlayerActorList;
  performance->fields.p_actorlist = (struct UnityEngine_GameObject_array *)PlayerActorList;
  sub_B52920(
    (BattleServantConfConponent_o *)&performance->fields.p_actorlist,
    PlayerActorList,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v35 = v2->fields.performance;
  if ( !v35 )
    goto LABEL_57;
  EnemyActorList = (System_Int32_array **)v2->fields.EnemyActorList;
  v35->fields.e_actorlist = (struct UnityEngine_GameObject_array *)EnemyActorList;
  sub_B52920((BattleServantConfConponent_o *)&v35->fields.e_actorlist, EnemyActorList, v29, v30, v31, v32, v33, v34);
  BattleDemoRootComponent__CreateActorObject(v2, 1, v2->fields.PlayerList, v2->fields.PlayerActorList, 1, v37);
  BattleDemoRootComponent__CreateActorObject(v2, 4, v2->fields.EnemyList, v2->fields.EnemyActorList, 0, v38);
  v39 = v2->fields.PlayerActorList;
  if ( !v39 )
    goto LABEL_57;
  v40 = 0LL;
  while ( (__int64)v40 < (int)v39->max_length )
  {
    this = (BattleDemoRootComponent_o *)v2->fields.FieldMotion;
    if ( this )
    {
      this = (BattleDemoRootComponent_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
      if ( this )
      {
        v41 = *(HutongGames_PlayMaker_FsmVariables_o **)&this->fields.DemoSequenceServantId;
        v66 = v40 + 1;
        v42 = System_Int32__ToString((int32_t)&v66, 0LL);
        this = (BattleDemoRootComponent_o *)System_String__Concat_44568316(
                                              (System_String_o *)StringLiteral_10520/*"PLAYER"*/,
                                              v42,
                                              0LL);
        if ( v41 )
        {
          this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                                v41,
                                                (System_String_o *)this,
                                                0LL);
          v43 = *p_PlayerActorList;
          if ( *p_PlayerActorList )
          {
            if ( v40 >= v43->max_length )
              goto LABEL_58;
            if ( this )
            {
              HutongGames_PlayMaker_FsmGameObject__set_Value(
                (HutongGames_PlayMaker_FsmGameObject_o *)this,
                v43->m_Items[v40],
                0LL);
              v39 = *p_PlayerActorList;
              ++v40;
              if ( *p_PlayerActorList )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_57;
  }
  v44 = *p_EnemyActorList;
  if ( !*p_EnemyActorList )
    goto LABEL_57;
  v45 = 0LL;
  while ( 1 )
  {
    this = (BattleDemoRootComponent_o *)v2->fields.FieldMotion;
    if ( !this )
      goto LABEL_57;
    max_length = (int)v44->max_length;
    this = (BattleDemoRootComponent_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_57;
    v47 = *(HutongGames_PlayMaker_FsmVariables_o **)&this->fields.DemoSequenceServantId;
    if ( (__int64)v45 >= max_length )
      break;
    v66 = v45 + 1;
    v48 = System_Int32__ToString((int32_t)&v66, 0LL);
    this = (BattleDemoRootComponent_o *)System_String__Concat_44568316((System_String_o *)StringLiteral_5544/*"ENEMY"*/, v48, 0LL);
    if ( v47 )
    {
      this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                            v47,
                                            (System_String_o *)this,
                                            0LL);
      v49 = *p_EnemyActorList;
      if ( *p_EnemyActorList )
      {
        if ( v45 >= v49->max_length )
          goto LABEL_58;
        if ( this )
        {
          HutongGames_PlayMaker_FsmGameObject__set_Value(
            (HutongGames_PlayMaker_FsmGameObject_o *)this,
            v49->m_Items[v45],
            0LL);
          v44 = *p_EnemyActorList;
          ++v45;
          if ( *p_EnemyActorList )
            continue;
        }
      }
    }
    goto LABEL_57;
  }
  if ( !v47 )
    goto LABEL_57;
  this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmObject(
                                        *(HutongGames_PlayMaker_FsmVariables_o **)&this->fields.DemoSequenceServantId,
                                        (System_String_o *)StringLiteral_3511/*"CameraFsm"*/,
                                        0LL);
  if ( !this )
    goto LABEL_57;
  CameraFsm = (struct System_String_array *)v2->fields.CameraFsm;
  this->fields.EnemyList = CameraFsm;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.EnemyList,
    (System_Int32_array **)CameraFsm,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v57 = v2->fields.PlayerActorList;
  v66 = 0;
  if ( !v57 )
    goto LABEL_57;
  v58 = v57->max_length;
  if ( v58 >= 1 )
  {
    v59 = 0;
    while ( v59 < (unsigned int)v58 )
    {
      v60 = (UnityEngine_Object_o *)v57->m_Items[v59];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleDemoRootComponent_o *)UnityEngine_Object__op_Equality(v60, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v60 )
          goto LABEL_57;
        this = (BattleDemoRootComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)v60,
                                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !this )
          goto LABEL_57;
        BattleActorControl__playMotion((BattleActorControl_o *)this, (System_String_o *)StringLiteral_8853/*"MOTION_ENTRY"*/, 0LL);
      }
      v59 = v66 + 1;
      v66 = v59;
      v58 = v57->max_length;
      if ( v59 >= v58 )
        goto LABEL_43;
    }
LABEL_58:
    v65 = sub_B52A88(this);
    sub_B52A28(v65, 0LL);
  }
LABEL_43:
  v61 = *p_EnemyActorList;
  v66 = 0;
  if ( !v61 )
    goto LABEL_57;
  v62 = v61->max_length;
  if ( v62 >= 1 )
  {
    v63 = 0;
    while ( v63 < (unsigned int)v62 )
    {
      v64 = (UnityEngine_Object_o *)v61->m_Items[v63];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleDemoRootComponent_o *)UnityEngine_Object__op_Equality(v64, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v64 )
          goto LABEL_57;
        this = (BattleDemoRootComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)v64,
                                              (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !this )
          goto LABEL_57;
        BattleActorControl__playMotion((BattleActorControl_o *)this, (System_String_o *)StringLiteral_8853/*"MOTION_ENTRY"*/, 0LL);
      }
      v63 = v66 + 1;
      v66 = v63;
      v62 = v61->max_length;
      if ( v63 >= v62 )
        goto LABEL_55;
    }
    goto LABEL_58;
  }
LABEL_55:
  this = (BattleDemoRootComponent_o *)v2->fields.FieldMotion;
  if ( !this )
LABEL_57:
    sub_B52A5C(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5530/*"END_NP"*/, 0LL);
}


void __fastcall BattleDemoRootComponent__EndRequestBattleSetup(
        BattleDemoRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  BattleDemoRootComponent_o *v4; // x19
  struct System_String_o *name; // x22
  int32_t actMax; // w20
  int32_t birthDay_high; // w21
  UserGameEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_42AECE0 & 1) == 0 )
  {
    sub_B52984(&BattleData_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_BattleMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_11166/*"REQUEST_OK"*/);
    this = (BattleDemoRootComponent_o *)sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42AECE0 = 1;
  }
  entity = 0LL;
  if ( !result )
    goto LABEL_21;
  if ( System_String__Equals_44555656(result, (System_String_o *)StringLiteral_21239/*"ng"*/, 0LL) )
  {
    this = (BattleDemoRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      this = (BattleDemoRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( this )
      {
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)this, 34, 1, 0LL, 0, 0LL);
        return;
      }
    }
    goto LABEL_21;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleDemoRootComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !this )
    goto LABEL_21;
  this = (BattleDemoRootComponent_o *)DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                                        (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)this,
                                        &entity,
                                        (const MethodInfo_23E25E8 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_21;
    name = entity->fields.name;
    birthDay_high = HIDWORD(entity->fields.birthDay);
    actMax = entity->fields.actMax;
    if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__setResumeBattleId((int64_t)name, birthDay_high, actMax, 0LL);
  }
  this = (BattleDemoRootComponent_o *)v4->fields.myFSM;
  if ( !this )
LABEL_21:
    sub_B52A5C(this, result);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11166/*"REQUEST_OK"*/, 0LL);
}


int32_t __fastcall BattleDemoRootComponent__GetLimitCountByInfo(
        BattleDemoRootComponent_o *this,
        System_String_o *info,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1
  __int64 v7; // x0

  if ( (byte_42AECCE & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    byte_42AECCE = 1;
  }
  v4 = (System_String_array *)sub_B5299C(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 58;
  if ( !info || (v4 = System_String__Split(info, (System_Char_array *)v4, 0LL)) == 0LL )
LABEL_9:
    sub_B52A5C(v4, v5);
  if ( v4->max_length <= 1 )
  {
LABEL_10:
    v7 = sub_B52A88(v4);
    sub_B52A28(v7, 0LL);
  }
  return System_Int32__Parse(v4->m_Items[1], 0LL);
}


int32_t __fastcall BattleDemoRootComponent__GetServantIdByInfo(
        BattleDemoRootComponent_o *this,
        System_String_o *info,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1
  __int64 v7; // x0

  if ( (byte_42AECCD & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    byte_42AECCD = 1;
  }
  v4 = (System_String_array *)sub_B5299C(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 58;
  if ( !info || (v4 = System_String__Split(info, (System_Char_array *)v4, 0LL)) == 0LL )
LABEL_9:
    sub_B52A5C(v4, v5);
  if ( !v4->max_length )
  {
LABEL_10:
    v7 = sub_B52A88(v4);
    sub_B52A28(v7, 0LL);
  }
  return System_Int32__Parse(v4->m_Items[0], 0LL);
}


bool __fastcall BattleDemoRootComponent__GoToBattleEndTalk(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x21
  _DWORD *monitor; // x8
  int32_t v4; // w19
  int32_t v5; // w20
  ScriptManager_CallbackFunc_o *v6; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_42AECDD & 1) == 0 )
  {
    sub_B52984(&Method_BattleDemoRootComponent_OnBattleEndScript__);
    sub_B52984(&ScriptManager_CallbackFunc_TypeInfo);
    this = (BattleDemoRootComponent_o *)sub_B52984(&ScriptManager_TypeInfo);
    byte_42AECDD = 1;
  }
  monitor = v2[13].monitor;
  if ( !monitor )
    sub_B52A5C(this, method);
  v4 = monitor[5];
  v5 = monitor[6];
  v6 = (ScriptManager_CallbackFunc_o *)sub_B52A54(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v6, v2, Method_BattleDemoRootComponent_OnBattleEndScript__, 0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleEnd(v4, v5, 1, v6, 0, -1, 0LL);
  return 1;
}


bool __fastcall BattleDemoRootComponent__GoToBattleStartTalk(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  _DWORD *monitor; // x8
  int32_t v4; // w20
  int32_t v5; // w21
  ScriptManager_CallbackFunc_o *v6; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_42AECDB & 1) == 0 )
  {
    sub_B52984(&Method_BattleDemoRootComponent_OnBattleStartScript__);
    sub_B52984(&ScriptManager_CallbackFunc_TypeInfo);
    this = (BattleDemoRootComponent_o *)sub_B52984(&ScriptManager_TypeInfo);
    byte_42AECDB = 1;
  }
  monitor = v2[13].monitor;
  if ( !monitor )
    sub_B52A5C(this, method);
  v4 = monitor[5];
  v5 = monitor[6];
  v6 = (ScriptManager_CallbackFunc_o *)sub_B52A54(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v6, v2, Method_BattleDemoRootComponent_OnBattleStartScript__, 0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleStart2_17797520(v4, v5, v6, 0, 0LL);
  return 1;
}


bool __fastcall BattleDemoRootComponent__GoToTerminal(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AECDF & 1) == 0 )
  {
    sub_B52984(&ScriptManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AECDF = 1;
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2AB )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2AB = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
  return 1;
}


void __fastcall BattleDemoRootComponent__InitializeBattleDemo(
        BattleDemoRootComponent_o *this,
        System_String_o *demoInfo,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Action_o *v8; // x20
  Il2CppObject *v11; // x0
  __int64 v12; // x10
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v13; // x21
  struct System_String_array *v14; // x0
  struct System_String_array **p_PlayerList; // x23
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x0
  unsigned int **v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  unsigned __int64 v30; // x28
  __int64 v31; // x20
  System_String_o *v32; // x0
  System_Xml_XmlQualifiedName_o *Item; // x0
  __int64 v34; // x1
  System_Type_o *v35; // x24
  unsigned int *v36; // x25
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x24
  __int64 v44; // x8
  __int64 v45; // x19
  unsigned __int64 v46; // x24
  System_String_o *v47; // x0
  System_Type_o *v48; // x23
  unsigned int *v49; // x25
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v57; // x23
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  unsigned int v64; // w19
  System_String_o *v65; // x0
  System_Type_o *v66; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *CueSheetList; // x23
  System_Xml_XmlQualifiedName_o *v68; // x8
  System_Int32_array **v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v76; // x20
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  const MethodInfo *v83; // x1
  System_Collections_IEnumerator_o *v84; // x0
  __int64 v85; // x0
  __int64 v86; // x0
  BattleDemoRootComponent_o *v87; // x0
  const MethodInfo *v88; // x1
  struct System_Action_o *v89; // [xsp+8h] [xbp-68h]
  BattleDemoRootComponent_o *v90; // [xsp+10h] [xbp-60h]
  unsigned int v91; // [xsp+1Ch] [xbp-54h] BYREF

  v8 = callback;
  if ( (byte_42AECCC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantAssetArgs___ctor__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_ServantAssetArgs__TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_6036/*"Enemy"*/);
    sub_B52984(&StringLiteral_12775/*"Sequence"*/);
    sub_B52984(&StringLiteral_13022/*"Sound"*/);
    sub_B52984(&StringLiteral_2833/*"Bg"*/);
    sub_B52984(&StringLiteral_10778/*"Player"*/);
    sub_B52984(&StringLiteral_2840/*"Bgm"*/);
    sub_B52984(&StringLiteral_2839/*"BgType"*/);
    byte_42AECCC = 1;
  }
  v91 = 0;
  if ( !demoInfo )
    goto LABEL_47;
  v11 = MiniJSON_Json__Deserialize(demoInfo, 0LL);
  v89 = v8;
  if ( v11
    && (v12 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
        *(&v11->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
  {
    if ( (System_Collections_Generic_Dictionary_string__object__c *)v11->klass->_2.typeHierarchy[v12 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      v13 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v11;
    else
      v13 = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  v14 = (struct System_String_array *)sub_B5299C(string___TypeInfo, 3LL);
  v90 = this;
  this->fields.PlayerList = v14;
  p_PlayerList = &this->fields.PlayerList;
  sub_B52920((BattleServantConfConponent_o *)p_PlayerList, (System_Int32_array **)v14, v16, v17, v18, v19, v20, v21);
  v22 = (System_Int32_array **)sub_B5299C(string___TypeInfo, 3LL);
  v23 = (unsigned int **)(p_PlayerList + 1);
  p_PlayerList[1] = (struct System_String_array *)v22;
  sub_B52920((BattleServantConfConponent_o *)(p_PlayerList + 1), v22, v24, v25, v26, v27, v28, v29);
  v30 = -1LL;
  v31 = 8LL;
  do
  {
    v91 = v30 + 2;
    v32 = System_Int32__ToString((int32_t)&v91, 0LL);
    Item = (System_Xml_XmlQualifiedName_o *)System_String__Concat_44568316(
                                              (System_String_o *)StringLiteral_10778/*"Player"*/,
                                              v32,
                                              0LL);
    if ( !v13 )
      goto LABEL_48;
    v35 = (System_Type_o *)Item;
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v13,
           Item,
           (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v36 = (unsigned int *)*p_PlayerList;
      Item = (System_Xml_XmlQualifiedName_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                v13,
                                                v35,
                                                (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v36 )
        goto LABEL_48;
      v43 = (System_Int32_array **)Item;
      if ( Item )
      {
        if ( (System_String_c *)Item->klass != string_TypeInfo )
          goto LABEL_50;
        Item = (System_Xml_XmlQualifiedName_o *)sub_B52A44(Item, *(_QWORD *)(*(_QWORD *)v36 + 64LL));
        if ( !Item )
          goto LABEL_51;
        if ( *v43 != (System_Int32_array *)string_TypeInfo )
        {
LABEL_50:
          sub_B52D50(v43);
LABEL_51:
          v86 = sub_B52A7C();
          sub_B52A28(v86, 0LL);
        }
      }
      if ( v30 + 1 >= v36[6] )
      {
LABEL_49:
        v85 = sub_B52A88(Item);
        sub_B52A28(v85, 0LL);
      }
      *(_QWORD *)&v36[v31] = v43;
      sub_B52920((BattleServantConfConponent_o *)&v36[v31], v43, v37, v38, v39, v40, v41, v42);
    }
    ++v30;
    v31 += 2LL;
  }
  while ( v30 < 2 );
  v44 = -1LL;
  v45 = 8LL;
  do
  {
    v46 = v44 + 1;
    v91 = v44 + 2;
    v47 = System_Int32__ToString((int32_t)&v91, 0LL);
    v48 = (System_Type_o *)System_String__Concat_44568316((System_String_o *)StringLiteral_6036/*"Enemy"*/, v47, 0LL);
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v13,
           (System_Xml_XmlQualifiedName_o *)v48,
           (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v49 = *v23;
      Item = (System_Xml_XmlQualifiedName_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                v13,
                                                v48,
                                                (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v49 )
        goto LABEL_48;
      v56 = (System_Int32_array **)Item;
      if ( Item )
      {
        if ( (System_String_c *)Item->klass != string_TypeInfo )
          goto LABEL_52;
        Item = (System_Xml_XmlQualifiedName_o *)sub_B52A44(Item, *(_QWORD *)(*(_QWORD *)v49 + 64LL));
        if ( !Item )
          goto LABEL_51;
        if ( *v56 != (System_Int32_array *)string_TypeInfo )
        {
LABEL_52:
          sub_B52D50(v56);
          goto LABEL_53;
        }
      }
      if ( v46 >= v49[6] )
        goto LABEL_49;
      *(_QWORD *)&v49[v45] = v56;
      sub_B52920((BattleServantConfConponent_o *)&v49[v45], v56, v50, v51, v52, v53, v54, v55);
    }
    v45 += 2LL;
    v44 = v46;
  }
  while ( v46 < 2 );
  v57 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v57,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  v90->fields.CueSheetList = (struct System_Collections_Generic_List_string__o *)v57;
  sub_B52920(
    (BattleServantConfConponent_o *)&v90->fields.CueSheetList,
    (System_Int32_array **)v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  v64 = -1;
  do
  {
    v91 = v64 + 2;
    v65 = System_Int32__ToString((int32_t)&v91, 0LL);
    v66 = (System_Type_o *)System_String__Concat_44568316((System_String_o *)StringLiteral_13022/*"Sound"*/, v65, 0LL);
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v13,
           (System_Xml_XmlQualifiedName_o *)v66,
           (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      CueSheetList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v90->fields.CueSheetList;
      Item = (System_Xml_XmlQualifiedName_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                v13,
                                                v66,
                                                (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !CueSheetList )
        goto LABEL_48;
      v68 = Item;
      if ( Item && (System_String_c *)Item->klass != string_TypeInfo )
        goto LABEL_53;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        CueSheetList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Item,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
    }
    ++v64;
  }
  while ( v64 < 4 );
  Item = (System_Xml_XmlQualifiedName_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                            v13,
                                            (System_Type_o *)StringLiteral_2833/*"Bg"*/,
                                            (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_48;
  this = v90;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_54;
  v90->fields.BgId = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  Item = (System_Xml_XmlQualifiedName_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                            v13,
                                            (System_Type_o *)StringLiteral_2839/*"BgType"*/,
                                            (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_48;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_54;
  v90->fields.BgType = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  v69 = (System_Int32_array **)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 v13,
                                 (System_Type_o *)StringLiteral_2840/*"Bgm"*/,
                                 (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v68 = (System_Xml_XmlQualifiedName_o *)v69;
  if ( v69 && *v69 != (System_Int32_array *)string_TypeInfo )
  {
LABEL_53:
    Item = v68;
    goto LABEL_54;
  }
  v90->fields.BgmName = (struct System_String_o *)v69;
  sub_B52920((BattleServantConfConponent_o *)&v90->fields.BgmName, v69, v70, v71, v72, v73, v74, v75);
  Item = (System_Xml_XmlQualifiedName_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                            v13,
                                            (System_Type_o *)StringLiteral_12775/*"Sequence"*/,
                                            (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_48:
    sub_B52A5C(Item, v34);
  v8 = v89;
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v90->fields.DemoSequenceServantId = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
LABEL_47:
    this->fields.InitializeCallback = v8;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.InitializeCallback,
      (System_Int32_array **)v8,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    v76 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantAssetArgs__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v76,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantAssetArgs___ctor__);
    this->fields.loadedAssetArgsList = (struct System_Collections_Generic_List_ServantAssetArgs__o *)v76;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.loadedAssetArgsList,
      (System_Int32_array **)v76,
      v77,
      v78,
      v79,
      v80,
      v81,
      v82);
    v84 = BattleDemoRootComponent__SetupBattleDemo(this, v83);
    UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v84, 0LL);
    return;
  }
LABEL_54:
  v87 = (BattleDemoRootComponent_o *)sub_B52D50(Item);
  BattleDemoRootComponent__ReleaseBattleDemo(v87, v88);
}


void __fastcall BattleDemoRootComponent__LoadBattleChrs(
        BattleDemoRootComponent_o *this,
        System_String_array *chrlist,
        const MethodInfo *method)
{
  BattleDemoRootComponent_o *v4; // x20
  __int64 v5; // x8
  unsigned __int64 i; // x25
  System_String_o *v7; // x22
  BattleDemoRootComponent_o *ServantIdByInfo; // x0
  int32_t v9; // w21
  const MethodInfo *v10; // x2
  int32_t LimitCountByInfo; // w22
  int32_t uiRoot; // w24
  ServantAssetArgs_o *v13; // x23
  __int64 v14; // x0

  v4 = this;
  if ( (byte_42AECD4 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantAssetArgs__Add__);
    sub_B52984(&ServantAssetArgs_TypeInfo);
    this = (BattleDemoRootComponent_o *)sub_B52984(&ServantAssetLoadManager_TypeInfo);
    byte_42AECD4 = 1;
  }
  if ( !chrlist )
LABEL_20:
    sub_B52A5C(this, chrlist);
  v5 = *(_QWORD *)&chrlist->max_length;
  if ( (int)v5 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v5; ++i )
    {
      if ( i >= (unsigned int)v5 )
      {
        v14 = sub_B52A88(this);
        sub_B52A28(v14, 0LL);
      }
      v7 = chrlist->m_Items[i];
      if ( v7 )
      {
        ServantIdByInfo = (BattleDemoRootComponent_o *)BattleDemoRootComponent__GetServantIdByInfo(
                                                         this,
                                                         chrlist->m_Items[i],
                                                         method);
        v9 = (int)ServantIdByInfo;
        LimitCountByInfo = BattleDemoRootComponent__GetLimitCountByInfo(ServantIdByInfo, v7, v10);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (BattleDemoRootComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantLimitMaster___);
        if ( !this )
          goto LABEL_20;
        this = (BattleDemoRootComponent_o *)ServantLimitMaster__GetEntity(
                                              (ServantLimitMaster_o *)this,
                                              v9,
                                              LimitCountByInfo,
                                              0LL);
        if ( !this )
          goto LABEL_20;
        uiRoot = (int32_t)this->fields.uiRoot;
        v13 = (ServantAssetArgs_o *)sub_B52A54(ServantAssetArgs_TypeInfo);
        ServantAssetArgs___ctor_26788556(v13, v9, LimitCountByInfo, 0, 0, uiRoot, 0LL);
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        ServantAssetLoadManager__PreloadAssetsByArgs(v13, 0, 0LL);
        this = (BattleDemoRootComponent_o *)v4->fields.loadedAssetArgsList;
        if ( !this )
          goto LABEL_20;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantAssetArgs__Add__);
      }
      LODWORD(v5) = chrlist->max_length;
    }
  }
}


void __fastcall BattleDemoRootComponent__LoadCueSheet(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *CueSheetList; // x0
  Il2CppObject *current; // x20
  SoundManager_o *Instance; // x21
  System_Action_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42AECCF & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BattleDemoRootComponent__LoadCueSheet_b__28_0__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_B52984(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_42AECCF = 1;
  }
  memset(&v9, 0, sizeof(v9));
  CueSheetList = this->fields.CueSheetList;
  if ( CueSheetList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v9,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CueSheetList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v9,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v9.fields.current;
      ++this->fields.CueSheetCount;
      Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, Method_BattleDemoRootComponent__LoadCueSheet_b__28_0__, 0LL);
      if ( !Instance )
        sub_B52A5C(v7, v8);
      SoundManager__LoadAudioAssetStorage(Instance, (System_String_o *)current, v6, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v9,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
}


void __fastcall BattleDemoRootComponent__OnBattleDemoLoadComplete(
        BattleDemoRootComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_42AECD8 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_42AECD8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance
    || (BattleSequenceManager__setup((BattleSequenceManager_o *)Instance, 0LL, 1, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__)) == 0LL) )
  {
    sub_B52A5C(Instance, v5);
  }
  BattleSequenceManager__SetupDemoActor(
    (BattleSequenceManager_o *)Instance,
    this->fields.PlayerActorList,
    this->fields.EnemyActorList,
    0LL);
  v7 = BattleDemoRootComponent__WaitToNoblePhantasmPlay(this, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDemoRootComponent__OnBattleEndScript(
        BattleDemoRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  _DWORD *monitor; // x8
  int32_t v5; // w20
  int32_t v6; // w21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v7; // x22

  v3 = (Il2CppObject *)this;
  if ( (byte_42AECDE & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_string___ctor__);
    sub_B52984(&System_Action_string__TypeInfo);
    sub_B52984(&Method_BattleDemoRootComponent__OnBattleEndScript_b__47_0__);
    this = (BattleDemoRootComponent_o *)sub_B52984(&ScriptManager_TypeInfo);
    byte_42AECDE = 1;
  }
  monitor = v3[13].monitor;
  if ( !monitor )
    sub_B52A5C(this, isExit);
  v5 = monitor[5];
  v6 = monitor[6];
  v7 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_string__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v7,
    v3,
    Method_BattleDemoRootComponent__OnBattleEndScript_b__47_0__,
    (const MethodInfo_2627780 *)Method_System_Action_string___ctor__);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__LoadBattleEndGameDemo(v5, v6, 0, (System_Action_string__o *)v7, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDemoRootComponent__OnBattleStartScript(
        BattleDemoRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_42AECDC & 1) == 0 )
  {
    sub_B52984(&StringLiteral_6930/*"GOTO_BATTLE"*/);
    byte_42AECDC = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B52A5C(0LL, isExit);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6930/*"GOTO_BATTLE"*/, 0LL);
}


void __fastcall BattleDemoRootComponent__OnNoblePhantasmPlayComplete(
        BattleDemoRootComponent_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  BattleFBXComponent_c *v4; // x0
  void *BattleDemoCallback; // x0
  struct UnityEngine_GameObject_array *PlayerActorList; // x21
  __int64 v7; // x8
  unsigned __int64 v8; // x22
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_array *EnemyActorList; // x21
  __int64 v11; // x8
  unsigned __int64 v12; // x22
  UnityEngine_Object_o *v13; // x20
  struct System_Collections_Generic_List_ServantAssetArgs__o *loadedAssetArgsList; // x20
  struct BattleDemoRootComponent___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__43_0; // x21
  Il2CppObject *v17; // x22
  struct BattleDemoRootComponent___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x1
  BattleDemoRootComponent_c *v26; // x0
  float BGM_FADEOUT_TIME; // s8
  __int64 *v28; // x8
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  _BOOL4 battleBefore; // w9
  _BOOL4 isBefore; // w8
  __int64 v32; // x0

  if ( (byte_42AECDA & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_ServantAssetArgs___ctor__);
    sub_B52984(&System_Action_ServantAssetArgs__TypeInfo);
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&BattleDemoRootComponent_TypeInfo);
    sub_B52984(&BattleFBXComponent_TypeInfo);
    sub_B52984(&System_GC_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantAssetArgs__ForEach__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_BattleDemoRootComponent___c__OnNoblePhantasmPlayComplete_b__43_0__);
    sub_B52984(&BattleDemoRootComponent___c_TypeInfo);
    sub_B52984(&StringLiteral_6934/*"GOTO_TERMINAL"*/);
    sub_B52984(&StringLiteral_6932/*"GOTO_BATTLESTARTTALK"*/);
    sub_B52984(&StringLiteral_6931/*"GOTO_BATTLENDTALK"*/);
    sub_B52984(&StringLiteral_2786/*"Battle/Common"*/);
    sub_B52984(&StringLiteral_5522/*"END_DEMO"*/);
    byte_42AECDA = 1;
  }
  if ( this->fields.BattleDemoCallback )
  {
    v4 = BattleFBXComponent_TypeInfo;
    if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      v4 = BattleFBXComponent_TypeInfo;
    }
    v4->static_fields->EnableEvent = 1;
    BattleDemoCallback = this->fields.BattleDemoCallback;
    if ( !BattleDemoCallback )
      goto LABEL_79;
    System_Action__Invoke((System_Action_o *)BattleDemoCallback, 0LL);
  }
  BattleDemoCallback = this->fields.performance;
  if ( !BattleDemoCallback )
    goto LABEL_79;
  BattlePerformance__setupCameraFov((BattlePerformance_o *)BattleDemoCallback, this->fields.backupFov, 0LL);
  PlayerActorList = this->fields.PlayerActorList;
  if ( !PlayerActorList )
    goto LABEL_79;
  v7 = *(_QWORD *)&PlayerActorList->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    while ( v8 < (unsigned int)v7 )
    {
      v9 = (UnityEngine_Object_o *)PlayerActorList->m_Items[v8];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      BattleDemoCallback = (void *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)BattleDemoCallback & 1) != 0 )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35616956(v9, 0LL);
      }
      LODWORD(v7) = PlayerActorList->max_length;
      if ( (__int64)++v8 >= (int)v7 )
        goto LABEL_23;
    }
LABEL_78:
    v32 = sub_B52A88(BattleDemoCallback);
    sub_B52A28(v32, 0LL);
  }
LABEL_23:
  EnemyActorList = this->fields.EnemyActorList;
  if ( !EnemyActorList )
    goto LABEL_79;
  v11 = *(_QWORD *)&EnemyActorList->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    while ( v12 < (unsigned int)v11 )
    {
      v13 = (UnityEngine_Object_o *)EnemyActorList->m_Items[v12];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      BattleDemoCallback = (void *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
      if ( ((unsigned __int8)BattleDemoCallback & 1) != 0 )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35616956(v13, 0LL);
      }
      LODWORD(v11) = EnemyActorList->max_length;
      if ( (__int64)++v12 >= (int)v11 )
        goto LABEL_36;
    }
    goto LABEL_78;
  }
LABEL_36:
  loadedAssetArgsList = this->fields.loadedAssetArgsList;
  BattleDemoCallback = BattleDemoRootComponent___c_TypeInfo;
  if ( (BYTE3(BattleDemoRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDemoRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent___c_TypeInfo);
    BattleDemoCallback = BattleDemoRootComponent___c_TypeInfo;
  }
  static_fields = (struct BattleDemoRootComponent___c_StaticFields *)*((_QWORD *)BattleDemoCallback + 23);
  _9__43_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( (*((_BYTE *)BattleDemoCallback + 307) & 4) != 0 && !*((_DWORD *)BattleDemoCallback + 56) )
    {
      j_il2cpp_runtime_class_init_0(BattleDemoCallback);
      static_fields = BattleDemoRootComponent___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__43_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_ServantAssetArgs__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__43_0,
      v17,
      Method_BattleDemoRootComponent___c__OnNoblePhantasmPlayComplete_b__43_0__,
      (const MethodInfo_2627780 *)Method_System_Action_ServantAssetArgs___ctor__);
    v18 = BattleDemoRootComponent___c_TypeInfo->static_fields;
    v18->__9__43_0 = (struct System_Action_ServantAssetArgs__o *)_9__43_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v18->__9__43_0,
      (System_Int32_array **)_9__43_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !loadedAssetArgsList )
    goto LABEL_79;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)loadedAssetArgsList,
    (System_Action_T__o *)_9__43_0,
    (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_ServantAssetArgs__ForEach__);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_2786/*"Battle/Common"*/, 0LL);
  BattleDemoCallback = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !BattleDemoCallback )
    goto LABEL_79;
  ServantAssetLoadManager__releaseNoblePhantasm((ServantAssetLoadManager_o *)BattleDemoCallback, 0LL);
  BattleDemoRootComponent__ReleaseCueSheet(this, v25);
  v26 = BattleDemoRootComponent_TypeInfo;
  if ( (BYTE3(BattleDemoRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDemoRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent_TypeInfo);
    v26 = BattleDemoRootComponent_TypeInfo;
  }
  BGM_FADEOUT_TIME = v26->static_fields->BGM_FADEOUT_TIME;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__fadeoutBgm(BGM_FADEOUT_TIME, 0LL);
  BattleDemoCallback = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !BattleDemoCallback )
    goto LABEL_79;
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)BattleDemoCallback, 0LL, 0LL);
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_44029184(0LL);
  BattleDemoCallback = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !BattleDemoCallback )
LABEL_79:
    sub_B52A5C(BattleDemoCallback, seq);
  CommonUI__maskFadeout((CommonUI_o *)BattleDemoCallback, 1, 1.0, 0LL, 0LL);
  if ( !this->fields.battleSetupInfo )
  {
    BattleDemoCallback = this->fields.myFSM;
    if ( !BattleDemoCallback )
      goto LABEL_79;
    v28 = &StringLiteral_5522/*"END_DEMO"*/;
LABEL_67:
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BattleDemoCallback, (System_String_o *)*v28, 0LL);
    return;
  }
  BattleDemoCallback = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !BattleDemoCallback )
    goto LABEL_79;
  BattleDemoCallback = (void *)AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)BattleDemoCallback, 0LL);
  if ( ((unsigned __int8)BattleDemoCallback & 1) != 0 )
  {
    BattleDemoCallback = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( BattleDemoCallback )
    {
      AvalonSceneManager__popSceneRefresh(
        (AvalonSceneManager_o *)BattleDemoCallback,
        1,
        (Il2CppObject *)this->fields.battleSetupInfo,
        0LL);
      return;
    }
    goto LABEL_79;
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_79;
  battleBefore = battleSetupInfo->fields.battleBefore;
  isBefore = battleSetupInfo->fields.isBefore;
  if ( !battleBefore )
  {
    BattleDemoCallback = this->fields.myFSM;
    if ( !BattleDemoCallback )
      goto LABEL_79;
    if ( isBefore )
      v28 = &StringLiteral_6931/*"GOTO_BATTLENDTALK"*/;
    else
      v28 = &StringLiteral_6934/*"GOTO_TERMINAL"*/;
    goto LABEL_67;
  }
  if ( !isBefore )
  {
    BattleDemoCallback = this->fields.myFSM;
    if ( !BattleDemoCallback )
      goto LABEL_79;
    v28 = &StringLiteral_6932/*"GOTO_BATTLESTARTTALK"*/;
    goto LABEL_67;
  }
}


void __fastcall BattleDemoRootComponent__ReleaseBattleDemo(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattleDemoRootComponent__ReleaseCueSheet(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v3; // x0
  BattleServantConfConponent_o *p_CueSheetList; // x19
  struct System_Collections_Generic_List_string__o *CueSheetList; // t1
  Il2CppObject *current; // x20
  SoundManager_o *Instance; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AECD0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_B52984(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_42AECD0 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  CueSheetList = this->fields.CueSheetList;
  p_CueSheetList = (BattleServantConfConponent_o *)&this->fields.CueSheetList;
  v3 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CueSheetList;
  if ( CueSheetList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      v3,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v15.fields.current;
      Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_B52A5C(0LL, v8);
      SoundManager__ReleaseAudioAssetStorage(Instance, (System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    p_CueSheetList->klass = 0LL;
    sub_B52920(p_CueSheetList, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


bool __fastcall BattleDemoRootComponent__RequestBattleSetup(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  BattleSetupInfo_o *battleSetupInfo; // x0

  battleSetupInfo = this->fields.battleSetupInfo;
  if ( battleSetupInfo )
    BattleScriptRootComponent__GoForBattle(battleSetupInfo, 0LL);
  return 1;
}


System_Collections_IEnumerator_o *__fastcall BattleDemoRootComponent__SetupBattleDemo(
        BattleDemoRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42AECD1 & 1) == 0 )
  {
    sub_B52984(&BattleDemoRootComponent__SetupBattleDemo_d__30_TypeInfo);
    byte_42AECD1 = 1;
  }
  v3 = sub_B52A54(BattleDemoRootComponent__SetupBattleDemo_d__30_TypeInfo);
  BattleDemoRootComponent__SetupBattleDemo_d__30___ctor((BattleDemoRootComponent__SetupBattleDemo_d__30_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall BattleDemoRootComponent__StartBattle(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_42AECE1 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42AECE1 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v3);
  AvalonSceneManager__transitionSceneRefresh(Instance, 10, 1, 0LL, 0, 0LL);
  return 1;
}


void __fastcall BattleDemoRootComponent__StartDemo(
        BattleDemoRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleActorControl_o *Component_srcLineSprite; // x0
  __int64 v11; // x1
  struct UnityEngine_GameObject_array *PlayerActorList; // x8
  UnityEngine_GameObject_o *v13; // x21
  BattleActorControl_o *v14; // x20
  BattleFBXComponent_c *v15; // x0
  struct BattlePerformanceBg_o *perfBg; // x8
  int32_t DemoSequenceServantId; // w22
  BattleSequenceManager_o *v18; // x21
  struct BattleServantData_o *battleSvtData; // x8
  int32_t treasuredvcLevel; // w23
  int32_t v21; // w20
  BattleSequenceManager_onGameObjectLoadComplete_o *v22; // x24
  __int64 v23; // x0

  if ( (byte_42AECD7 & 1) == 0 )
  {
    sub_B52984(&Method_BattleDemoRootComponent_OnBattleDemoLoadComplete__);
    sub_B52984(&BattleFBXComponent_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B52984(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_B52984(&StringLiteral_9419/*"NPACTOR"*/);
    sub_B52984(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo);
    byte_42AECD7 = 1;
  }
  this->fields.BattleDemoCallback = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.BattleDemoCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  PlayerActorList = this->fields.PlayerActorList;
  if ( !PlayerActorList )
    goto LABEL_19;
  if ( !PlayerActorList->max_length )
  {
    v23 = sub_B52A88(Component_srcLineSprite);
    sub_B52A28(v23, 0LL);
  }
  v13 = PlayerActorList->m_Items[0];
  if ( !v13 )
    goto LABEL_19;
  Component_srcLineSprite = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v13,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !this->fields.FieldMotion )
    goto LABEL_19;
  v14 = Component_srcLineSprite;
  Component_srcLineSprite = (BattleActorControl_o *)PlayMakerFSM__get_Fsm(this->fields.FieldMotion, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_19;
  Component_srcLineSprite = (BattleActorControl_o *)Component_srcLineSprite->fields._BuffEffectNodeName_k__BackingField;
  if ( !Component_srcLineSprite )
    goto LABEL_19;
  Component_srcLineSprite = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                                      (HutongGames_PlayMaker_FsmVariables_o *)Component_srcLineSprite,
                                                      (System_String_o *)StringLiteral_9419/*"NPACTOR"*/,
                                                      0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_19;
  HutongGames_PlayMaker_FsmGameObject__set_Value(
    (HutongGames_PlayMaker_FsmGameObject_o *)Component_srcLineSprite,
    v13,
    0LL);
  v15 = BattleFBXComponent_TypeInfo;
  if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v15 = BattleFBXComponent_TypeInfo;
  }
  v15->static_fields->EnableEvent = 0;
  Component_srcLineSprite = (BattleActorControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  perfBg = this->fields.perfBg;
  if ( !perfBg )
    goto LABEL_19;
  if ( !Component_srcLineSprite )
    goto LABEL_19;
  BattleSequenceManager__init(
    (BattleSequenceManager_o *)Component_srcLineSprite,
    this->fields.performance,
    v13,
    this->fields.PlayerActorList,
    this->fields.EnemyActorList,
    this->fields.actorCamera,
    perfBg->fields.bgobject,
    0LL);
  Component_srcLineSprite = (BattleActorControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v14 )
    goto LABEL_19;
  DemoSequenceServantId = this->fields.DemoSequenceServantId;
  v18 = (BattleSequenceManager_o *)Component_srcLineSprite;
  Component_srcLineSprite = (BattleActorControl_o *)BattleActorControl__getLimitCount(v14, 0LL);
  battleSvtData = v14->fields.battleSvtData;
  if ( !battleSvtData
    || (treasuredvcLevel = battleSvtData->fields.treasuredvcLevel,
        v21 = (int)Component_srcLineSprite,
        v22 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_B52A54(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo),
        BattleSequenceManager_onGameObjectLoadComplete___ctor(
          v22,
          (Il2CppObject *)this,
          Method_BattleDemoRootComponent_OnBattleDemoLoadComplete__,
          0LL),
        !v18) )
  {
LABEL_19:
    sub_B52A5C(Component_srcLineSprite, v11);
  }
  BattleSequenceManager__loadSequence(
    v18,
    DemoSequenceServantId,
    DemoSequenceServantId,
    v21,
    0,
    treasuredvcLevel,
    1,
    v22,
    0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleDemoRootComponent__WaitToNoblePhantasmPlay(
        BattleDemoRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42AECD9 & 1) == 0 )
  {
    sub_B52984(&BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_TypeInfo);
    byte_42AECD9 = 1;
  }
  v3 = sub_B52A54(BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_TypeInfo);
  BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42___ctor(
    (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
  CommonUI_o *Instance; // x0
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  if ( (byte_42AECE5 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_6934/*"GOTO_TERMINAL"*/);
    byte_42AECE5 = 1;
  }
  if ( demoInfo )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 1, 0LL);
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( battleSetupInfo )
      {
        battleSetupInfo->fields.isBefore = 0;
        ((void (__fastcall *)(BattleDemoRootComponent_o *, struct BattleSetupInfo_o *, Il2CppMethodPointer))this->klass->vtable._5_beginStartUp.method)(
          this,
          this->fields.battleSetupInfo,
          this->klass->vtable._6_beginStartUp.methodPtr);
        return;
      }
    }
LABEL_9:
    sub_B52A5C(Instance, demoInfo);
  }
  Instance = (CommonUI_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6934/*"GOTO_TERMINAL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDemoRootComponent___SetupBattleDemo_b__30_0(
        BattleDemoRootComponent_o *this,
        AssetData_o *aData,
        const MethodInfo *method)
{
  BattleFieldMotionComponent_o *performance; // x0
  struct BattlePerformance_o *v6; // x8
  struct BattleFieldMotionComponent_array *fieldmotion; // x8
  struct PlayMakerFSM_o *Fsm; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_GameObject_o *cameraObject; // x23
  UnityEngine_Transform_o *v16; // x22
  struct UnityEngine_GameObject_o **p_cameraObject; // x21
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  struct UnityEngine_GameObject_o *ObjectIfNotExist; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Transform_o *transform; // x20
  int v27; // s0
  struct BattlePerformance_o *v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct BattlePerformance_o *v37; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct UnityEngine_Transform_array *npcTacticalTr; // x8
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct UnityEngine_Transform_array *v58; // x8
  System_Int32_array **v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct BattlePerformance_o *v66; // x8
  struct BattleActionCamera_o *actioncamera; // x9
  System_Int32_array **frontcamera; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  struct BattlePerformance_o *v75; // x8
  struct BattleActionCamera_o *v76; // x8
  struct UnityEngine_Camera_o *actorcamera; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct BattlePerformance_o *v84; // x8
  struct PlayMakerFSM_o *camerafsm; // x1
  struct PlayMakerFSM_o **p_CameraFsm; // x19
  __int64 v87; // x8
  __int64 v88; // x19
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  __int64 v95; // x0

  if ( (byte_42AECE3 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleActionCamera___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_B52984(&StringLiteral_11614/*"RootCameraPrefab"*/);
    byte_42AECE3 = 1;
  }
  performance = (BattleFieldMotionComponent_o *)this->fields.performance;
  if ( !performance )
    goto LABEL_31;
  BattlePerformance__loadFieldMotion((BattlePerformance_o *)performance, aData, 0LL, 0LL);
  v6 = this->fields.performance;
  if ( !v6 )
    goto LABEL_31;
  fieldmotion = v6->fields.fieldmotion;
  if ( !fieldmotion )
    goto LABEL_31;
  if ( !fieldmotion->max_length )
  {
    v95 = sub_B52A88(performance);
    sub_B52A28(v95, 0LL);
  }
  performance = fieldmotion->m_Items[0];
  if ( !performance )
    goto LABEL_31;
  Fsm = BattleFieldMotionComponent__getFsm(performance, 0LL);
  this->fields.FieldMotion = Fsm;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.FieldMotion,
    (System_Int32_array **)Fsm,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  performance = (BattleFieldMotionComponent_o *)this->fields.GroundObject;
  if ( !performance )
    goto LABEL_31;
  performance = (BattleFieldMotionComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                  (UnityEngine_GameObject_o *)performance,
                                                  0LL);
  if ( !performance )
    goto LABEL_31;
  performance = (BattleFieldMotionComponent_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)performance,
                                                  0LL);
  if ( !aData )
    goto LABEL_31;
  cameraObject = this->fields.cameraObject;
  v16 = (UnityEngine_Transform_o *)performance;
  p_cameraObject = &this->fields.cameraObject;
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 aData,
                                                                 (System_String_o *)StringLiteral_11614/*"RootCameraPrefab"*/,
                                                                 (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  ObjectIfNotExist = BaseMonoBehaviour__createObjectIfNotExist(
                       (BaseMonoBehaviour_o *)this,
                       cameraObject,
                       Object_WarBoardWaitTimeSetting,
                       v16,
                       0LL,
                       0LL);
  this->fields.cameraObject = ObjectIfNotExist;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.cameraObject,
    (System_Int32_array **)ObjectIfNotExist,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  performance = (BattleFieldMotionComponent_o *)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_31;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)performance, (System_String_o *)StringLiteral_11614/*"RootCameraPrefab"*/, 0LL);
  performance = (BattleFieldMotionComponent_o *)*p_cameraObject;
  if ( !*p_cameraObject )
    goto LABEL_31;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)performance, 0LL);
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_31;
  UnityEngine_Transform__set_eulerAngles(transform, *(UnityEngine_Vector3_o *)&v27, 0LL);
  performance = (BattleFieldMotionComponent_o *)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_31;
  v30 = this->fields.performance;
  performance = (BattleFieldMotionComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  (UnityEngine_GameObject_o *)performance,
                                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v30 )
    goto LABEL_31;
  v30->fields.camerafsm = (struct PlayMakerFSM_o *)performance;
  sub_B52920(
    (BattleServantConfConponent_o *)&v30->fields.camerafsm,
    (System_Int32_array **)performance,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  performance = (BattleFieldMotionComponent_o *)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_31;
  v37 = this->fields.performance;
  performance = (BattleFieldMotionComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  (UnityEngine_GameObject_o *)performance,
                                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleActionCamera___);
  if ( !v37 )
    goto LABEL_31;
  v37->fields.actioncamera = (struct BattleActionCamera_o *)performance;
  sub_B52920(
    (BattleServantConfConponent_o *)&v37->fields.actioncamera,
    (System_Int32_array **)performance,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  performance = (BattleFieldMotionComponent_o *)this->fields.performance;
  if ( !performance )
    goto LABEL_31;
  npcTacticalTr = performance[1].fields.npcTacticalTr;
  if ( !npcTacticalTr )
    goto LABEL_31;
  v51 = (System_Int32_array **)npcTacticalTr->m_Items[1];
  performance->fields.npcBattleTr = (struct UnityEngine_Transform_array *)v51;
  sub_B52920((BattleServantConfConponent_o *)&performance->fields.npcBattleTr, v51, v44, v45, v46, v47, v48, v49);
  performance = (BattleFieldMotionComponent_o *)this->fields.performance;
  if ( !performance )
    goto LABEL_31;
  v58 = performance[1].fields.npcTacticalTr;
  if ( !v58 )
    goto LABEL_31;
  v59 = (System_Int32_array **)v58->m_Items[3];
  performance->fields.fieldPopupBattleTr = (struct UnityEngine_Transform_o *)v59;
  sub_B52920((BattleServantConfConponent_o *)&performance->fields.fieldPopupBattleTr, v59, v52, v53, v54, v55, v56, v57);
  v66 = this->fields.performance;
  if ( !v66 )
    goto LABEL_31;
  actioncamera = v66->fields.actioncamera;
  if ( !actioncamera )
    goto LABEL_31;
  frontcamera = (System_Int32_array **)actioncamera->fields.frontcamera;
  v66->fields.cutIncamera = (struct UnityEngine_Camera_o *)frontcamera;
  sub_B52920((BattleServantConfConponent_o *)&v66->fields.cutIncamera, frontcamera, v60, v61, v62, v63, v64, v65);
  v75 = this->fields.performance;
  if ( !v75 )
    goto LABEL_31;
  v76 = v75->fields.actioncamera;
  if ( !v76 )
    goto LABEL_31;
  actorcamera = v76->fields.actorcamera;
  this->fields.actorCamera = actorcamera;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.actorCamera,
    (System_Int32_array **)actorcamera,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  v84 = this->fields.performance;
  if ( !v84 )
    goto LABEL_31;
  camerafsm = v84->fields.camerafsm;
  this->fields.CameraFsm = camerafsm;
  p_CameraFsm = &this->fields.CameraFsm;
  sub_B52920(
    (BattleServantConfConponent_o *)p_CameraFsm,
    (System_Int32_array **)camerafsm,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  v87 = (__int64)*(p_CameraFsm - 7);
  if ( !v87
    || (performance = *(BattleFieldMotionComponent_o **)(v87 + 128)) == 0LL
    || (v88 = (__int64)*(p_CameraFsm - 4),
        performance = (BattleFieldMotionComponent_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)performance,
                                                        0LL),
        !v88) )
  {
LABEL_31:
    sub_B52A5C(performance, aData);
  }
  *(_QWORD *)(v88 + 32) = performance;
  sub_B52920(
    (BattleServantConfConponent_o *)(v88 + 32),
    (System_Int32_array **)performance,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
}


void __fastcall BattleDemoRootComponent___beginStartUp_b__36_0(
        BattleDemoRootComponent_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct BattleDemoRootComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__36_1; // x20
  Il2CppObject *v8; // x21
  struct BattleDemoRootComponent___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42AECE4 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_BattleDemoRootComponent___c__beginStartUp_b__36_1__);
    sub_B52984(&BattleDemoRootComponent___c_TypeInfo);
    byte_42AECE4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  Instance = BattleDemoRootComponent___c_TypeInfo;
  if ( (BYTE3(BattleDemoRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDemoRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent___c_TypeInfo);
    Instance = BattleDemoRootComponent___c_TypeInfo;
  }
  static_fields = (struct BattleDemoRootComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__36_1 = static_fields->__9__36_1;
  if ( !_9__36_1 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = BattleDemoRootComponent___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__36_1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(_9__36_1, v8, Method_BattleDemoRootComponent___c__beginStartUp_b__36_1__, 0LL);
    v9 = BattleDemoRootComponent___c_TypeInfo->static_fields;
    v9->__9__36_1 = _9__36_1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v9->__9__36_1,
      (System_Int32_array **)_9__36_1,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !this )
LABEL_14:
    sub_B52A5C(Instance, v4);
  BattleDemoRootComponent__StartDemo(this, _9__36_1, v5);
}


void __fastcall BattleDemoRootComponent__beginFinish(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattleDemoRootComponent__beginInitialize(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AECD5 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AECD5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadeout(Instance, 1, 0.0, 0LL, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B52A5C(Instance, v4);
  }
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall BattleDemoRootComponent__beginStartUp(
        BattleDemoRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x10
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x3
  __int64 v13; // x0
  __int64 v14; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  if ( (byte_42AECD6 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BattleDemoRootComponent__beginStartUp_b__36_0__);
    sub_B52984(&BattleSetupInfo_TypeInfo);
    byte_42AECD6 = 1;
  }
  if ( data )
  {
    v10 = *(&BattleSetupInfo_TypeInfo->_2.bitflags2 + 1);
    if ( *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v10
      && (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v10 - 1] == BattleSetupInfo_TypeInfo )
    {
      this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)data;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.battleSetupInfo,
        (System_Int32_array **)data,
        (System_String_array **)method,
        v3,
        v4,
        v5,
        v6,
        v7);
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        sub_B52A5C(v13, v14);
      data = (Il2CppObject *)battleSetupInfo->fields.demoInfo;
    }
    else
    {
      data = 0LL;
    }
  }
  v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_BattleDemoRootComponent__beginStartUp_b__36_0__, 0LL);
  BattleDemoRootComponent__InitializeBattleDemo(this, (System_String_o *)data, v11, v12);
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
  BattleDemoRootComponent__SetupBattleDemo_d__30_o *v2; // x19
  struct BattleDemoRootComponent_o *_4__this; // x20
  AssetLoader_LoadEndDataHandler_o *v4; // x21
  System_Action_o *InitializeCallback; // x0
  System_Int32_array **v6; // x0
  BattleServantConfConponent_o *v7; // x19
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int v22; // w8
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_o *BgmName; // x20
  UnityEngine_WaitForSeconds_o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int v39; // [xsp+Ch] [xbp-24h] BYREF
  int v40; // [xsp+18h] [xbp-18h] BYREF
  int v41; // [xsp+1Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_42AF132 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_BattleDemoRootComponent__SetupBattleDemo_b__30_0__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&ServantAssetLoadManager_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_B52984(&StringLiteral_2786/*"Battle/Common"*/);
    this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)sub_B52984(&StringLiteral_11175/*"RESET_CAMERA_NOBLEEND"*/);
    byte_42AF132 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v4 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v4,
        (Il2CppObject *)_4__this,
        Method_BattleDemoRootComponent__SetupBattleDemo_b__30_0__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__loadAssetStorage((System_String_o *)StringLiteral_2786/*"Battle/Common"*/, v4, 1, 0LL);
      goto LABEL_16;
    case 1:
      v2->fields.__1__state = -1;
LABEL_16:
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)AssetManager__LoadIsBusy(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( _4__this )
        {
          this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)_4__this->fields.performance;
          if ( this )
          {
            BattlePerformance__ForceLoadBg(
              (BattlePerformance_o *)this,
              _4__this->fields.BgId,
              _4__this->fields.BgType,
              0LL);
            BattleDemoRootComponent__LoadBattleChrs(_4__this, _4__this->fields.PlayerList, 0LL);
            BattleDemoRootComponent__LoadBattleChrs(_4__this, _4__this->fields.EnemyList, 0LL);
LABEL_24:
            if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            }
            this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)ServantAssetLoadManager__checkLoad(0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v40 = 0;
              v14 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v40);
              v2->fields.__2__current = (Il2CppObject *)v14;
              p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
              sub_B52920(p__2__current, v14, v16, v17, v18, v19, v20, v21);
              v22 = 2;
LABEL_38:
              *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v22;
              LOBYTE(InitializeCallback) = 1;
              return (char)InitializeCallback;
            }
            if ( _4__this )
            {
              BattleDemoRootComponent__LoadCueSheet(_4__this, 0LL);
LABEL_31:
              if ( _4__this->fields.CueSheetCount )
              {
                v39 = 0;
                v23 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v39);
                v2->fields.__2__current = (Il2CppObject *)v23;
                p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
                sub_B52920(p__2__current, v23, v24, v25, v26, v27, v28, v29);
                v22 = 3;
                goto LABEL_38;
              }
              BattleDemoRootComponent__CreateActors(_4__this, 0LL);
              this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)_4__this->fields.CameraFsm;
              if ( this )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11175/*"RESET_CAMERA_NOBLEEND"*/, 0LL);
                BgmName = _4__this->fields.BgmName;
                if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SoundManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                }
                SoundManager__playBgm(BgmName, 0LL);
                v31 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
                UnityEngine_WaitForSeconds___ctor(v31, 1.0, 0LL);
                v2->fields.__2__current = (Il2CppObject *)v31;
                p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
                sub_B52920(p__2__current, (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
                v22 = 4;
                goto LABEL_38;
              }
            }
          }
        }
LABEL_40:
        sub_B52A5C(this, method);
      }
      v41 = 0;
      v6 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v41);
      v2->fields.__2__current = (Il2CppObject *)v6;
      v7 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B52920(v7, v6, v8, v9, v10, v11, v12, v13);
      LOBYTE(InitializeCallback) = 1;
      *(_DWORD *)&v7[-1].fields.isOpenAfter = 1;
      return (char)InitializeCallback;
    case 2:
      v2->fields.__1__state = -1;
      goto LABEL_24;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_40;
      goto LABEL_31;
    case 4:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_40;
      InitializeCallback = _4__this->fields.InitializeCallback;
      if ( InitializeCallback )
      {
        System_Action__Invoke(InitializeCallback, 0LL);
LABEL_11:
        LOBYTE(InitializeCallback) = 0;
      }
      return (char)InitializeCallback;
    default:
      goto LABEL_11;
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_BattleDemoRootComponent__SetupBattleDemo_d__30_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42__MoveNext(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        const MethodInfo *method)
{
  BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *v2; // x20
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v4; // x19
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  bool result; // w0
  struct BattleDemoRootComponent_o *_4__this; // x19
  struct BattlePerformance_o *performance; // x20
  BattlePerformance_c *v14; // x0
  struct BattlePerformance_o *v15; // x8
  UnityEngine_Transform_o *transform; // x20
  int v17; // s0
  WebViewManager_o *Instance; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v21; // x21

  v2 = this;
  if ( (byte_42AF133 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_USSequencer___ctor__);
    sub_B52984(&System_Action_USSequencer__TypeInfo);
    sub_B52984(&Method_BattleDemoRootComponent_OnNoblePhantasmPlayComplete__);
    sub_B52984(&BattlePerformance_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)sub_B52984(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_42AF133 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_19;
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)_4__this->fields.performance;
    if ( !this )
      goto LABEL_19;
    BattlePerformance__FlipAll((BattlePerformance_o *)this, 0, 0LL);
    performance = _4__this->fields.performance;
    if ( !performance )
      goto LABEL_19;
    _4__this->fields.backupFov = performance->fields.currentFov;
    v14 = BattlePerformance_TypeInfo;
    if ( (BYTE3(BattlePerformance_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformance_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
      v14 = BattlePerformance_TypeInfo;
    }
    BattlePerformance__setupCameraFov(performance, v14->static_fields->DefaultFov, 0LL);
    v15 = _4__this->fields.performance;
    if ( !v15 )
      goto LABEL_19;
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)v15->fields.actorcamera;
    if ( !this )
      goto LABEL_19;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localEulerAngles(transform, *(UnityEngine_Vector3_o *)&v17, 0LL),
          (this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__maskFadein((CommonUI_o *)this, 1.0, 0LL, 0LL),
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__),
          v21 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_USSequencer__TypeInfo),
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v21,
            (Il2CppObject *)_4__this,
            Method_BattleDemoRootComponent_OnNoblePhantasmPlayComplete__,
            (const MethodInfo_2627780 *)Method_System_Action_USSequencer___ctor__),
          !Instance) )
    {
LABEL_19:
      sub_B52A5C(this, method);
    }
    BattleSequenceManager__play((BattleSequenceManager_o *)Instance, 0, 1, (System_Action_USSequencer__o *)v21, 0LL);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0LL);
    v2->fields.__2__current = (Il2CppObject *)v4;
    sub_B52920(
      (BattleServantConfConponent_o *)&v2->fields.__2__current,
      (System_Int32_array **)v4,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AF130 & 1) == 0 )
  {
    sub_B52984(&BattleDemoRootComponent___c_TypeInfo);
    byte_42AF130 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BattleDemoRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleDemoRootComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  if ( (byte_42AF131 & 1) == 0 )
  {
    sub_B52984(&ServantAssetLoadManager_TypeInfo);
    byte_42AF131 = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__UnloadAssetsByArgs(args, 0LL);
}


void __fastcall BattleDemoRootComponent___c___beginStartUp_b__36_1(
        BattleDemoRootComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}