void __fastcall BattleDemoRootComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E781F & 1) == 0 )
  {
    sub_B5D5C4(&BattleDemoRootComponent_TypeInfo, v1, v2, v3);
    byte_42E781F = 1;
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
  UnityEngine_GameObject_array *v6; // x20
  System_String_array *v7; // x22
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
  char *FieldMotion; // x0
  const MethodInfo *v52; // x2
  __int64 v53; // x8
  int32_t v54; // w25
  unsigned __int64 v55; // x24
  System_String_o *v56; // x19
  BattleDemoRootComponent_o *ServantIdByInfo; // x0
  int32_t v58; // w28
  const MethodInfo *v59; // x2
  int32_t LimitCountByInfo; // w0
  struct UnityEngine_GameObject_o *actorPrefab; // x19
  int32_t v62; // w21
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x19
  Il2CppClass **v70; // x0
  UnityEngine_Transform_o *v71; // x21
  UnityEngine_Transform_o *transform; // x21
  int v73; // s0
  UnityEngine_Transform_o *v76; // x21
  int v77; // s0
  UnityEngine_Transform_o *v80; // x21
  int v81; // s0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **performance; // x1
  BattleActorControl_o *v91; // x19
  BattleServantData_o *v92; // x22
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v93; // x21
  int32_t v94; // w26
  UnityEngine_GameObject_o *v95; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *PlayerPopTr; // x0
  UnityEngine_GameObject_o *v98; // x21
  UnityEngine_GameObject_o *v99; // x0
  UnityEngine_Component_o *v100; // x21
  UnityEngine_GameObject_o *v101; // x0
  __int64 v102; // x0
  __int64 v103; // x0
  System_String_array *v104; // [xsp+0h] [xbp-80h]
  UnityEngine_GameObject_array *v105; // [xsp+8h] [xbp-78h]
  BattleFieldMotionComponent_o *v106; // [xsp+10h] [xbp-70h]
  System_String_o **m_Items; // [xsp+20h] [xbp-60h]
  int32_t value; // [xsp+2Ch] [xbp-54h]

  v6 = actors;
  v7 = chrInfos;
  if ( (byte_42E7810 & 1) == 0 )
  {
    sub_B5D5C4(&BattleServantData_TypeInfo, uniqueIdStart, (_DWORD)chrInfos, actors);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v18, v19, v20);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleFieldMotionComponent___, v21, v22, v23);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v24, v25, v26);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_20477/*"limitCount"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_22772/*"svtId"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_20023/*"index"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_23373/*"userSvtId"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_23209/*"uniqueId"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_16159/*"_ENEMY"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_16222/*"_PLAYER"*/, v48, v49, v50);
    byte_42E7810 = 1;
  }
  FieldMotion = (char *)this->fields.FieldMotion;
  if ( !FieldMotion
    || (FieldMotion = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0LL)) == 0LL
    || (FieldMotion = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)FieldMotion,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleFieldMotionComponent___),
        !v7) )
  {
LABEL_39:
    sub_B5D69C(FieldMotion, *(_QWORD *)&uniqueIdStart);
  }
  v53 = *(_QWORD *)&v7->max_length;
  if ( (int)v53 >= 1 )
  {
    v54 = uniqueIdStart;
    v55 = 0LL;
    m_Items = v7->m_Items;
    v105 = v6;
    v106 = (BattleFieldMotionComponent_o *)FieldMotion;
    v104 = v7;
    do
    {
      if ( v55 >= (unsigned int)v53 )
      {
LABEL_40:
        v102 = sub_B5D6C8(FieldMotion);
        sub_B5D668(v102, 0LL);
      }
      v56 = m_Items[v55];
      if ( v56 )
      {
        ServantIdByInfo = (BattleDemoRootComponent_o *)BattleDemoRootComponent__GetServantIdByInfo(
                                                         (BattleDemoRootComponent_o *)FieldMotion,
                                                         m_Items[v55],
                                                         v52);
        v58 = (int)ServantIdByInfo;
        LimitCountByInfo = BattleDemoRootComponent__GetLimitCountByInfo(ServantIdByInfo, v56, v59);
        actorPrefab = this->fields.actorPrefab;
        v62 = LimitCountByInfo;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        FieldMotion = (char *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                (UnityEngine_UI_Dropdown_DropdownItem_o *)actorPrefab,
                                (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !v6 )
          goto LABEL_39;
        v69 = (System_Int32_array **)FieldMotion;
        if ( FieldMotion )
        {
          FieldMotion = (char *)sub_B5D684(FieldMotion, v6->obj.klass->_1.element_class);
          if ( !FieldMotion )
          {
            v103 = sub_B5D6BC();
            sub_B5D668(v103, 0LL);
          }
        }
        if ( v54 - uniqueIdStart >= v6->max_length )
          goto LABEL_40;
        v70 = &v6->obj.klass + v54 - uniqueIdStart;
        v70[4] = (Il2CppClass *)v69;
        value = v62;
        sub_B5D560((BattleServantConfConponent_o *)(v70 + 4), v69, v63, v64, v65, v66, v67, v68);
        if ( !v69 )
          goto LABEL_39;
        FieldMotion = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v69, 0LL);
        if ( !this->fields.Field )
          goto LABEL_39;
        v71 = (UnityEngine_Transform_o *)FieldMotion;
        FieldMotion = (char *)UnityEngine_GameObject__get_transform(this->fields.Field, 0LL);
        if ( !v71 )
          goto LABEL_39;
        UnityEngine_Transform__set_parent(v71, (UnityEngine_Transform_o *)FieldMotion, 0LL);
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v69, 0LL);
        *(UnityEngine_Vector3_o *)&v73 = UnityEngine_Vector3__get_zero(0LL);
        if ( !transform )
          goto LABEL_39;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v73, 0LL);
        v76 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v69, 0LL);
        *(UnityEngine_Vector3_o *)&v77 = UnityEngine_Vector3__get_zero(0LL);
        if ( !v76 )
          goto LABEL_39;
        UnityEngine_Transform__set_localEulerAngles(v76, *(UnityEngine_Vector3_o *)&v77, 0LL);
        v80 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v69, 0LL);
        *(UnityEngine_Vector3_o *)&v81 = UnityEngine_Vector3__get_one(0LL);
        if ( !v80 )
          goto LABEL_39;
        UnityEngine_Transform__set_localScale(v80, *(UnityEngine_Vector3_o *)&v81, 0LL);
        FieldMotion = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)v69,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !FieldMotion )
          goto LABEL_39;
        performance = (System_Int32_array **)this->fields.performance;
        v91 = (BattleActorControl_o *)FieldMotion;
        *((_QWORD *)FieldMotion + 16) = performance;
        sub_B5D560((BattleServantConfConponent_o *)(FieldMotion + 128), performance, v84, v85, v86, v87, v88, v89);
        v92 = (BattleServantData_o *)sub_B5D694(BattleServantData_TypeInfo);
        BattleServantData___ctor(v92, 0LL);
        v93 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__int__TypeInfo);
        System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
          v93,
          (const MethodInfo_2F1A890 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
        if ( !v93 )
          goto LABEL_39;
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          v93,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20023/*"index"*/,
          v54,
          (const MethodInfo_2F1B41C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          v93,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_23209/*"uniqueId"*/,
          v54,
          (const MethodInfo_2F1B41C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          v93,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_23373/*"userSvtId"*/,
          v54,
          (const MethodInfo_2F1B41C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          v93,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22772/*"svtId"*/,
          v58,
          (const MethodInfo_2F1B41C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          v93,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20477/*"limitCount"*/,
          value,
          (const MethodInfo_2F1B41C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        if ( !v92 )
          goto LABEL_39;
        BattleServantData__SetFakeData(v92, (System_Collections_Generic_Dictionary_string__int__o *)v93, 0LL);
        v94 = v54 - uniqueIdStart;
        if ( isPlayer )
        {
          BattleActorControl__setTypePlayer(v91, 0LL);
          BattleActorControl__setServantData(v91, v92, 0LL);
          BattleActorControl__setDirLeft(v91, 0LL);
          FieldMotion = (char *)this->fields.actorCamera;
          if ( !FieldMotion )
            goto LABEL_39;
          FieldMotion = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0LL);
          v7 = v104;
          if ( !this->fields.CameraFsm )
            goto LABEL_39;
          v95 = (UnityEngine_GameObject_o *)FieldMotion;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.CameraFsm, 0LL);
          BattleActorControl__setMotionListForDemo(
            v91,
            (System_String_o *)StringLiteral_16222/*"_PLAYER"*/,
            v95,
            gameObject,
            this->fields.CommonMotionPrefab,
            0LL);
          v6 = v105;
          if ( !v106 )
            goto LABEL_39;
          PlayerPopTr = BattleFieldMotionComponent__getPlayerPopTr(v106, v94, 0LL);
        }
        else
        {
          BattleActorControl__setTypeEnemy(v91, 0LL);
          BattleActorControl__setServantData(v91, v92, 0LL);
          BattleActorControl__setDirRight(v91, 0LL);
          FieldMotion = (char *)this->fields.actorCamera;
          if ( !FieldMotion )
            goto LABEL_39;
          FieldMotion = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0LL);
          v7 = v104;
          if ( !this->fields.CameraFsm )
            goto LABEL_39;
          v98 = (UnityEngine_GameObject_o *)FieldMotion;
          v99 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.CameraFsm, 0LL);
          BattleActorControl__setMotionListForDemo(
            v91,
            (System_String_o *)StringLiteral_16159/*"_ENEMY"*/,
            v98,
            v99,
            this->fields.CommonMotionPrefab,
            0LL);
          v6 = v105;
          if ( !v106 )
            goto LABEL_39;
          PlayerPopTr = BattleFieldMotionComponent__getEnemyPopPoint(v106, v94, 0LL);
        }
        v100 = (UnityEngine_Component_o *)PlayerPopTr;
        BattleActorControl__setCamera(v91, this->fields.actorCamera, 0LL);
        if ( !v100 )
          goto LABEL_39;
        v101 = UnityEngine_Component__get_gameObject(v100, 0LL);
        BattleActorControl__setTargetObject(v91, v101, 0LL);
        ++v54;
      }
      LODWORD(v53) = v7->max_length;
      ++v55;
    }
    while ( (__int64)v55 < (int)v53 );
  }
}


void __fastcall BattleDemoRootComponent__CreateActors(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleDemoRootComponent_o *v4; // x19
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  struct System_String_array *PlayerList; // x8
  System_Int32_array **v27; // x0
  struct UnityEngine_GameObject_array **p_PlayerActorList; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct System_String_array *EnemyList; // x8
  System_Int32_array **v36; // x0
  struct UnityEngine_GameObject_array **p_EnemyActorList; // x20
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
  struct BattlePerformance_o *performance; // x8
  System_Int32_array **PlayerActorList; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct BattlePerformance_o *v58; // x8
  System_Int32_array **EnemyActorList; // x1
  const MethodInfo *v60; // x5
  const MethodInfo *v61; // x5
  struct UnityEngine_GameObject_array *v62; // x8
  unsigned __int64 v63; // x24
  HutongGames_PlayMaker_FsmVariables_o *v64; // x22
  System_String_o *v65; // x0
  struct UnityEngine_GameObject_array *v66; // x8
  struct UnityEngine_GameObject_array *v67; // x8
  unsigned __int64 v68; // x23
  signed __int64 max_length; // x24
  HutongGames_PlayMaker_FsmVariables_o *v70; // x21
  System_String_o *v71; // x0
  struct UnityEngine_GameObject_array *v72; // x8
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct System_String_array *CameraFsm; // x1
  struct UnityEngine_GameObject_array *v80; // x22
  int v81; // w9
  int v82; // w8
  UnityEngine_Object_o *v83; // x21
  struct UnityEngine_GameObject_array *v84; // x21
  int v85; // w9
  int v86; // w8
  UnityEngine_Object_o *v87; // x20
  __int64 v88; // x0
  int v89; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_42E780F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_8890/*"MOTION_ENTRY"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_5579/*"ENEMY"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_3544/*"CameraFsm"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_10564/*"PLAYER"*/, v20, v21, v22);
    this = (BattleDemoRootComponent_o *)sub_B5D5C4(&StringLiteral_5565/*"END_NP"*/, v23, v24, v25);
    byte_42E780F = 1;
  }
  v89 = 0;
  PlayerList = v4->fields.PlayerList;
  if ( !PlayerList )
    goto LABEL_57;
  v27 = (System_Int32_array **)sub_B5D5DC(UnityEngine_GameObject___TypeInfo, PlayerList->max_length);
  v4->fields.PlayerActorList = (struct UnityEngine_GameObject_array *)v27;
  p_PlayerActorList = &v4->fields.PlayerActorList;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.PlayerActorList, v27, v29, v30, v31, v32, v33, v34);
  EnemyList = v4->fields.EnemyList;
  if ( !EnemyList )
    goto LABEL_57;
  v36 = (System_Int32_array **)sub_B5D5DC(UnityEngine_GameObject___TypeInfo, EnemyList->max_length);
  v4->fields.EnemyActorList = (struct UnityEngine_GameObject_array *)v36;
  p_EnemyActorList = &v4->fields.EnemyActorList;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.EnemyActorList, v36, v38, v39, v40, v41, v42, v43);
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_57;
  PlayerActorList = (System_Int32_array **)v4->fields.PlayerActorList;
  performance->fields.p_actorlist = (struct UnityEngine_GameObject_array *)PlayerActorList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&performance->fields.p_actorlist,
    PlayerActorList,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v58 = v4->fields.performance;
  if ( !v58 )
    goto LABEL_57;
  EnemyActorList = (System_Int32_array **)v4->fields.EnemyActorList;
  v58->fields.e_actorlist = (struct UnityEngine_GameObject_array *)EnemyActorList;
  sub_B5D560((BattleServantConfConponent_o *)&v58->fields.e_actorlist, EnemyActorList, v52, v53, v54, v55, v56, v57);
  BattleDemoRootComponent__CreateActorObject(v4, 1, v4->fields.PlayerList, v4->fields.PlayerActorList, 1, v60);
  BattleDemoRootComponent__CreateActorObject(v4, 4, v4->fields.EnemyList, v4->fields.EnemyActorList, 0, v61);
  v62 = v4->fields.PlayerActorList;
  if ( !v62 )
    goto LABEL_57;
  v63 = 0LL;
  while ( (__int64)v63 < (int)v62->max_length )
  {
    this = (BattleDemoRootComponent_o *)v4->fields.FieldMotion;
    if ( this )
    {
      this = (BattleDemoRootComponent_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
      if ( this )
      {
        v64 = *(HutongGames_PlayMaker_FsmVariables_o **)&this->fields.DemoSequenceServantId;
        v89 = v63 + 1;
        v65 = System_Int32__ToString((int32_t)&v89, 0LL);
        this = (BattleDemoRootComponent_o *)System_String__Concat_44577788(
                                              (System_String_o *)StringLiteral_10564/*"PLAYER"*/,
                                              v65,
                                              0LL);
        if ( v64 )
        {
          this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                                v64,
                                                (System_String_o *)this,
                                                0LL);
          v66 = *p_PlayerActorList;
          if ( *p_PlayerActorList )
          {
            if ( v63 >= v66->max_length )
              goto LABEL_58;
            if ( this )
            {
              HutongGames_PlayMaker_FsmGameObject__set_Value(
                (HutongGames_PlayMaker_FsmGameObject_o *)this,
                v66->m_Items[v63],
                0LL);
              v62 = *p_PlayerActorList;
              ++v63;
              if ( *p_PlayerActorList )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_57;
  }
  v67 = *p_EnemyActorList;
  if ( !*p_EnemyActorList )
    goto LABEL_57;
  v68 = 0LL;
  while ( 1 )
  {
    this = (BattleDemoRootComponent_o *)v4->fields.FieldMotion;
    if ( !this )
      goto LABEL_57;
    max_length = (int)v67->max_length;
    this = (BattleDemoRootComponent_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_57;
    v70 = *(HutongGames_PlayMaker_FsmVariables_o **)&this->fields.DemoSequenceServantId;
    if ( (__int64)v68 >= max_length )
      break;
    v89 = v68 + 1;
    v71 = System_Int32__ToString((int32_t)&v89, 0LL);
    this = (BattleDemoRootComponent_o *)System_String__Concat_44577788((System_String_o *)StringLiteral_5579/*"ENEMY"*/, v71, 0LL);
    if ( v70 )
    {
      this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                            v70,
                                            (System_String_o *)this,
                                            0LL);
      v72 = *p_EnemyActorList;
      if ( *p_EnemyActorList )
      {
        if ( v68 >= v72->max_length )
          goto LABEL_58;
        if ( this )
        {
          HutongGames_PlayMaker_FsmGameObject__set_Value(
            (HutongGames_PlayMaker_FsmGameObject_o *)this,
            v72->m_Items[v68],
            0LL);
          v67 = *p_EnemyActorList;
          ++v68;
          if ( *p_EnemyActorList )
            continue;
        }
      }
    }
    goto LABEL_57;
  }
  if ( !v70 )
    goto LABEL_57;
  this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmObject(
                                        *(HutongGames_PlayMaker_FsmVariables_o **)&this->fields.DemoSequenceServantId,
                                        (System_String_o *)StringLiteral_3544/*"CameraFsm"*/,
                                        0LL);
  if ( !this )
    goto LABEL_57;
  CameraFsm = (struct System_String_array *)v4->fields.CameraFsm;
  this->fields.EnemyList = CameraFsm;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.EnemyList,
    (System_Int32_array **)CameraFsm,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  v80 = v4->fields.PlayerActorList;
  v89 = 0;
  if ( !v80 )
    goto LABEL_57;
  v81 = v80->max_length;
  if ( v81 >= 1 )
  {
    v82 = 0;
    while ( v82 < (unsigned int)v81 )
    {
      v83 = (UnityEngine_Object_o *)v80->m_Items[v82];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleDemoRootComponent_o *)UnityEngine_Object__op_Equality(v83, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v83 )
          goto LABEL_57;
        this = (BattleDemoRootComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)v83,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !this )
          goto LABEL_57;
        BattleActorControl__playMotion((BattleActorControl_o *)this, (System_String_o *)StringLiteral_8890/*"MOTION_ENTRY"*/, 0LL);
      }
      v82 = v89 + 1;
      v89 = v82;
      v81 = v80->max_length;
      if ( v82 >= v81 )
        goto LABEL_43;
    }
LABEL_58:
    v88 = sub_B5D6C8(this);
    sub_B5D668(v88, 0LL);
  }
LABEL_43:
  v84 = *p_EnemyActorList;
  v89 = 0;
  if ( !v84 )
    goto LABEL_57;
  v85 = v84->max_length;
  if ( v85 >= 1 )
  {
    v86 = 0;
    while ( v86 < (unsigned int)v85 )
    {
      v87 = (UnityEngine_Object_o *)v84->m_Items[v86];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleDemoRootComponent_o *)UnityEngine_Object__op_Equality(v87, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v87 )
          goto LABEL_57;
        this = (BattleDemoRootComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)v87,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !this )
          goto LABEL_57;
        BattleActorControl__playMotion((BattleActorControl_o *)this, (System_String_o *)StringLiteral_8890/*"MOTION_ENTRY"*/, 0LL);
      }
      v86 = v89 + 1;
      v89 = v86;
      v85 = v84->max_length;
      if ( v86 >= v85 )
        goto LABEL_55;
    }
    goto LABEL_58;
  }
LABEL_55:
  this = (BattleDemoRootComponent_o *)v4->fields.FieldMotion;
  if ( !this )
LABEL_57:
    sub_B5D69C(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5565/*"END_NP"*/, 0LL);
}


void __fastcall BattleDemoRootComponent__EndRequestBattleSetup(
        BattleDemoRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleDemoRootComponent_o *v5; // x19
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
  struct System_String_o *name; // x22
  int32_t actMax; // w20
  int32_t birthDay_high; // w21
  UserGameEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_42E781D & 1) == 0 )
  {
    sub_B5D5C4(&BattleData_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_BattleMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, v21, v22, v23);
    this = (BattleDemoRootComponent_o *)sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v24, v25, v26);
    byte_42E781D = 1;
  }
  entity = 0LL;
  if ( !result )
    goto LABEL_21;
  if ( System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    this = (BattleDemoRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      this = (BattleDemoRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  this = (BattleDemoRootComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !this )
    goto LABEL_21;
  this = (BattleDemoRootComponent_o *)DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                                        (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)this,
                                        &entity,
                                        (const MethodInfo_23FB120 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
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
  this = (BattleDemoRootComponent_o *)v5->fields.myFSM;
  if ( !this )
LABEL_21:
    sub_B5D69C(this, result);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11212/*"REQUEST_OK"*/, 0LL);
}


int32_t __fastcall BattleDemoRootComponent__GetLimitCountByInfo(
        BattleDemoRootComponent_o *this,
        System_String_o *info,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_array *v5; // x0
  System_String_array *v6; // x1
  __int64 v8; // x0

  if ( (byte_42E780B & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)info, (_DWORD)method, v3);
    byte_42E780B = 1;
  }
  v5 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_9;
  v6 = v5;
  if ( !v5->max_length )
    goto LABEL_10;
  LOWORD(v5->m_Items[0]) = 58;
  if ( !info || (v5 = System_String__Split(info, (System_Char_array *)v5, 0LL)) == 0LL )
LABEL_9:
    sub_B5D69C(v5, v6);
  if ( v5->max_length <= 1 )
  {
LABEL_10:
    v8 = sub_B5D6C8(v5);
    sub_B5D668(v8, 0LL);
  }
  return System_Int32__Parse(v5->m_Items[1], 0LL);
}


int32_t __fastcall BattleDemoRootComponent__GetServantIdByInfo(
        BattleDemoRootComponent_o *this,
        System_String_o *info,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_array *v5; // x0
  System_String_array *v6; // x1
  __int64 v8; // x0

  if ( (byte_42E780A & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)info, (_DWORD)method, v3);
    byte_42E780A = 1;
  }
  v5 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_9;
  v6 = v5;
  if ( !v5->max_length )
    goto LABEL_10;
  LOWORD(v5->m_Items[0]) = 58;
  if ( !info || (v5 = System_String__Split(info, (System_Char_array *)v5, 0LL)) == 0LL )
LABEL_9:
    sub_B5D69C(v5, v6);
  if ( !v5->max_length )
  {
LABEL_10:
    v8 = sub_B5D6C8(v5);
    sub_B5D668(v8, 0LL);
  }
  return System_Int32__Parse(v5->m_Items[0], 0LL);
}


bool __fastcall BattleDemoRootComponent__GoToBattleEndTalk(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x21
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _DWORD *monitor; // x8
  int32_t v12; // w19
  int32_t v13; // w20
  ScriptManager_CallbackFunc_o *v14; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_42E781A & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleDemoRootComponent_OnBattleEndScript__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ScriptManager_CallbackFunc_TypeInfo, v5, v6, v7);
    this = (BattleDemoRootComponent_o *)sub_B5D5C4(&ScriptManager_TypeInfo, v8, v9, v10);
    byte_42E781A = 1;
  }
  monitor = v4[13].monitor;
  if ( !monitor )
    sub_B5D69C(this, method);
  v12 = monitor[5];
  v13 = monitor[6];
  v14 = (ScriptManager_CallbackFunc_o *)sub_B5D694(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v14, v4, Method_BattleDemoRootComponent_OnBattleEndScript__, 0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleEnd(v12, v13, 1, v14, 0, -1, 0LL);
  return 1;
}


bool __fastcall BattleDemoRootComponent__GoToBattleStartTalk(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _DWORD *monitor; // x8
  int32_t v12; // w20
  int32_t v13; // w21
  ScriptManager_CallbackFunc_o *v14; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_42E7818 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleDemoRootComponent_OnBattleStartScript__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ScriptManager_CallbackFunc_TypeInfo, v5, v6, v7);
    this = (BattleDemoRootComponent_o *)sub_B5D5C4(&ScriptManager_TypeInfo, v8, v9, v10);
    byte_42E7818 = 1;
  }
  monitor = v4[13].monitor;
  if ( !monitor )
    sub_B5D69C(this, method);
  v12 = monitor[5];
  v13 = monitor[6];
  v14 = (ScriptManager_CallbackFunc_o *)sub_B5D694(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v14, v4, Method_BattleDemoRootComponent_OnBattleStartScript__, 0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleStart2_17841356(v12, v13, v14, 0, 0LL);
  return 1;
}


bool __fastcall BattleDemoRootComponent__GoToTerminal(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  TerminalPramsManager_c *v13; // x0
  AvalonSceneManager_o *Instance; // x0
  __int64 v15; // x1

  if ( (byte_42E781C & 1) == 0 )
  {
    sub_B5D5C4(&ScriptManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5, v6);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v7, v8, v9);
    byte_42E781C = 1;
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
  if ( !byte_42E4B29 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v10, v11, v12);
    byte_42E4B29 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v15);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  Il2CppObject *v62; // x0
  __int64 v63; // x10
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v64; // x21
  struct System_String_array *v65; // x0
  struct System_String_array **p_PlayerList; // x23
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x0
  unsigned int **v74; // x22
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  unsigned __int64 v81; // x28
  __int64 v82; // x20
  System_String_o *v83; // x0
  System_Xml_XmlQualifiedName_o *Item; // x0
  __int64 v85; // x1
  System_Type_o *v86; // x24
  unsigned int *v87; // x25
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x24
  __int64 v95; // x8
  __int64 v96; // x19
  unsigned __int64 v97; // x24
  System_String_o *v98; // x0
  System_Type_o *v99; // x23
  unsigned int *v100; // x25
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Int32_array **v107; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v108; // x23
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  unsigned int v115; // w19
  System_String_o *v116; // x0
  System_Type_o *v117; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *CueSheetList; // x23
  System_Xml_XmlQualifiedName_o *v119; // x8
  System_Int32_array **v120; // x0
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v127; // x20
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  const MethodInfo *v134; // x1
  System_Collections_IEnumerator_o *v135; // x0
  __int64 v136; // x0
  __int64 v137; // x0
  BattleDemoRootComponent_o *v138; // x0
  const MethodInfo *v139; // x1
  struct System_Action_o *v140; // [xsp+8h] [xbp-68h]
  BattleDemoRootComponent_o *v141; // [xsp+10h] [xbp-60h]
  unsigned int v142; // [xsp+1Ch] [xbp-54h] BYREF

  v8 = callback;
  if ( (byte_42E7809 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)demoInfo,
      (_DWORD)callback,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&long_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantAssetArgs___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_ServantAssetArgs__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&string___TypeInfo, v35, v36, v37);
    sub_B5D5C4(&string_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_6072/*"Enemy"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_12834/*"Sequence"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_13081/*"Sound"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_2857/*"Bg"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_10824/*"Player"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_2864/*"Bgm"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_2863/*"BgType"*/, v59, v60, v61);
    byte_42E7809 = 1;
  }
  v142 = 0;
  if ( !demoInfo )
    goto LABEL_47;
  v62 = MiniJSON_Json__Deserialize(demoInfo, 0LL);
  v140 = v8;
  if ( v62
    && (v63 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
        *(&v62->klass->_2.bitflags2 + 1) >= (unsigned int)v63) )
  {
    if ( (System_Collections_Generic_Dictionary_string__object__c *)v62->klass->_2.typeHierarchy[v63 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      v64 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v62;
    else
      v64 = 0LL;
  }
  else
  {
    v64 = 0LL;
  }
  v65 = (struct System_String_array *)sub_B5D5DC(string___TypeInfo, 3LL);
  v141 = this;
  this->fields.PlayerList = v65;
  p_PlayerList = &this->fields.PlayerList;
  sub_B5D560((BattleServantConfConponent_o *)p_PlayerList, (System_Int32_array **)v65, v67, v68, v69, v70, v71, v72);
  v73 = (System_Int32_array **)sub_B5D5DC(string___TypeInfo, 3LL);
  v74 = (unsigned int **)(p_PlayerList + 1);
  p_PlayerList[1] = (struct System_String_array *)v73;
  sub_B5D560((BattleServantConfConponent_o *)(p_PlayerList + 1), v73, v75, v76, v77, v78, v79, v80);
  v81 = -1LL;
  v82 = 8LL;
  do
  {
    v142 = v81 + 2;
    v83 = System_Int32__ToString((int32_t)&v142, 0LL);
    Item = (System_Xml_XmlQualifiedName_o *)System_String__Concat_44577788(
                                              (System_String_o *)StringLiteral_10824/*"Player"*/,
                                              v83,
                                              0LL);
    if ( !v64 )
      goto LABEL_48;
    v86 = (System_Type_o *)Item;
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v64,
           Item,
           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v87 = (unsigned int *)*p_PlayerList;
      Item = (System_Xml_XmlQualifiedName_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                v64,
                                                v86,
                                                (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v87 )
        goto LABEL_48;
      v94 = (System_Int32_array **)Item;
      if ( Item )
      {
        if ( (System_String_c *)Item->klass != string_TypeInfo )
          goto LABEL_50;
        Item = (System_Xml_XmlQualifiedName_o *)sub_B5D684(Item, *(_QWORD *)(*(_QWORD *)v87 + 64LL));
        if ( !Item )
          goto LABEL_51;
        if ( *v94 != (System_Int32_array *)string_TypeInfo )
        {
LABEL_50:
          sub_B5D990(v94);
LABEL_51:
          v137 = sub_B5D6BC();
          sub_B5D668(v137, 0LL);
        }
      }
      if ( v81 + 1 >= v87[6] )
      {
LABEL_49:
        v136 = sub_B5D6C8(Item);
        sub_B5D668(v136, 0LL);
      }
      *(_QWORD *)&v87[v82] = v94;
      sub_B5D560((BattleServantConfConponent_o *)&v87[v82], v94, v88, v89, v90, v91, v92, v93);
    }
    ++v81;
    v82 += 2LL;
  }
  while ( v81 < 2 );
  v95 = -1LL;
  v96 = 8LL;
  do
  {
    v97 = v95 + 1;
    v142 = v95 + 2;
    v98 = System_Int32__ToString((int32_t)&v142, 0LL);
    v99 = (System_Type_o *)System_String__Concat_44577788((System_String_o *)StringLiteral_6072/*"Enemy"*/, v98, 0LL);
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v64,
           (System_Xml_XmlQualifiedName_o *)v99,
           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v100 = *v74;
      Item = (System_Xml_XmlQualifiedName_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                v64,
                                                v99,
                                                (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v100 )
        goto LABEL_48;
      v107 = (System_Int32_array **)Item;
      if ( Item )
      {
        if ( (System_String_c *)Item->klass != string_TypeInfo )
          goto LABEL_52;
        Item = (System_Xml_XmlQualifiedName_o *)sub_B5D684(Item, *(_QWORD *)(*(_QWORD *)v100 + 64LL));
        if ( !Item )
          goto LABEL_51;
        if ( *v107 != (System_Int32_array *)string_TypeInfo )
        {
LABEL_52:
          sub_B5D990(v107);
          goto LABEL_53;
        }
      }
      if ( v97 >= v100[6] )
        goto LABEL_49;
      *(_QWORD *)&v100[v96] = v107;
      sub_B5D560((BattleServantConfConponent_o *)&v100[v96], v107, v101, v102, v103, v104, v105, v106);
    }
    v96 += 2LL;
    v95 = v97;
  }
  while ( v97 < 2 );
  v108 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v108,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  v141->fields.CueSheetList = (struct System_Collections_Generic_List_string__o *)v108;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v141->fields.CueSheetList,
    (System_Int32_array **)v108,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
  v115 = -1;
  do
  {
    v142 = v115 + 2;
    v116 = System_Int32__ToString((int32_t)&v142, 0LL);
    v117 = (System_Type_o *)System_String__Concat_44577788((System_String_o *)StringLiteral_13081/*"Sound"*/, v116, 0LL);
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v64,
           (System_Xml_XmlQualifiedName_o *)v117,
           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      CueSheetList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v141->fields.CueSheetList;
      Item = (System_Xml_XmlQualifiedName_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                v64,
                                                v117,
                                                (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !CueSheetList )
        goto LABEL_48;
      v119 = Item;
      if ( Item && (System_String_c *)Item->klass != string_TypeInfo )
        goto LABEL_53;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        CueSheetList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Item,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
    }
    ++v115;
  }
  while ( v115 < 4 );
  Item = (System_Xml_XmlQualifiedName_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                            v64,
                                            (System_Type_o *)StringLiteral_2857/*"Bg"*/,
                                            (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_48;
  this = v141;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_54;
  v141->fields.BgId = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  Item = (System_Xml_XmlQualifiedName_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                            v64,
                                            (System_Type_o *)StringLiteral_2863/*"BgType"*/,
                                            (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_48;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_54;
  v141->fields.BgType = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  v120 = (System_Int32_array **)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  v64,
                                  (System_Type_o *)StringLiteral_2864/*"Bgm"*/,
                                  (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v119 = (System_Xml_XmlQualifiedName_o *)v120;
  if ( v120 && *v120 != (System_Int32_array *)string_TypeInfo )
  {
LABEL_53:
    Item = v119;
    goto LABEL_54;
  }
  v141->fields.BgmName = (struct System_String_o *)v120;
  sub_B5D560((BattleServantConfConponent_o *)&v141->fields.BgmName, v120, v121, v122, v123, v124, v125, v126);
  Item = (System_Xml_XmlQualifiedName_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                            v64,
                                            (System_Type_o *)StringLiteral_12834/*"Sequence"*/,
                                            (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_48:
    sub_B5D69C(Item, v85);
  v8 = v140;
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v141->fields.DemoSequenceServantId = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
LABEL_47:
    this->fields.InitializeCallback = v8;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.InitializeCallback,
      (System_Int32_array **)v8,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    v127 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantAssetArgs__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v127,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantAssetArgs___ctor__);
    this->fields.loadedAssetArgsList = (struct System_Collections_Generic_List_ServantAssetArgs__o *)v127;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.loadedAssetArgsList,
      (System_Int32_array **)v127,
      v128,
      v129,
      v130,
      v131,
      v132,
      v133);
    v135 = BattleDemoRootComponent__SetupBattleDemo(this, v134);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v135, 0LL);
    return;
  }
LABEL_54:
  v138 = (BattleDemoRootComponent_o *)sub_B5D990(Item);
  BattleDemoRootComponent__ReleaseBattleDemo(v138, v139);
}


void __fastcall BattleDemoRootComponent__LoadBattleChrs(
        BattleDemoRootComponent_o *this,
        System_String_array *chrlist,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleDemoRootComponent_o *v5; // x20
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
  __int64 v18; // x8
  unsigned __int64 i; // x25
  System_String_o *v20; // x22
  BattleDemoRootComponent_o *ServantIdByInfo; // x0
  int32_t v22; // w21
  const MethodInfo *v23; // x2
  int32_t LimitCountByInfo; // w22
  int32_t uiRoot; // w24
  ServantAssetArgs_o *v26; // x23
  __int64 v27; // x0

  v5 = this;
  if ( (byte_42E7811 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitMaster___, (_DWORD)chrlist, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantAssetArgs__Add__, v9, v10, v11);
    sub_B5D5C4(&ServantAssetArgs_TypeInfo, v12, v13, v14);
    this = (BattleDemoRootComponent_o *)sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v15, v16, v17);
    byte_42E7811 = 1;
  }
  if ( !chrlist )
LABEL_20:
    sub_B5D69C(this, chrlist);
  v18 = *(_QWORD *)&chrlist->max_length;
  if ( (int)v18 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v18; ++i )
    {
      if ( i >= (unsigned int)v18 )
      {
        v27 = sub_B5D6C8(this);
        sub_B5D668(v27, 0LL);
      }
      v20 = chrlist->m_Items[i];
      if ( v20 )
      {
        ServantIdByInfo = (BattleDemoRootComponent_o *)BattleDemoRootComponent__GetServantIdByInfo(
                                                         this,
                                                         chrlist->m_Items[i],
                                                         method);
        v22 = (int)ServantIdByInfo;
        LimitCountByInfo = BattleDemoRootComponent__GetLimitCountByInfo(ServantIdByInfo, v20, v23);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (BattleDemoRootComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitMaster___);
        if ( !this )
          goto LABEL_20;
        this = (BattleDemoRootComponent_o *)ServantLimitMaster__GetEntity(
                                              (ServantLimitMaster_o *)this,
                                              v22,
                                              LimitCountByInfo,
                                              0LL);
        if ( !this )
          goto LABEL_20;
        uiRoot = (int32_t)this->fields.uiRoot;
        v26 = (ServantAssetArgs_o *)sub_B5D694(ServantAssetArgs_TypeInfo);
        ServantAssetArgs___ctor_26885940(v26, v22, LimitCountByInfo, 0, 0, uiRoot, 0LL);
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        ServantAssetLoadManager__PreloadAssetsByArgs(v26, 0, 0LL);
        this = (BattleDemoRootComponent_o *)v5->fields.loadedAssetArgsList;
        if ( !this )
          goto LABEL_20;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantAssetArgs__Add__);
      }
      LODWORD(v18) = chrlist->max_length;
    }
  }
}


void __fastcall BattleDemoRootComponent__LoadCueSheet(BattleDemoRootComponent_o *this, const MethodInfo *method)
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct System_Collections_Generic_List_string__o *CueSheetList; // x0
  Il2CppObject *current; // x20
  SoundManager_o *Instance; // x21
  System_Action_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E780C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattleDemoRootComponent__LoadCueSheet_b__28_0__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v20, v21, v22);
    byte_42E780C = 1;
  }
  memset(&v29, 0, sizeof(v29));
  CueSheetList = this->fields.CueSheetList;
  if ( CueSheetList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v29,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CueSheetList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v29,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v29.fields.current;
      ++this->fields.CueSheetCount;
      Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      v26 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_BattleDemoRootComponent__LoadCueSheet_b__28_0__, 0LL);
      if ( !Instance )
        sub_B5D69C(v27, v28);
      SoundManager__LoadAudioAssetStorage(Instance, (System_String_o *)current, v26, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v29,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
}


void __fastcall BattleDemoRootComponent__OnBattleDemoLoadComplete(
        BattleDemoRootComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_Collections_IEnumerator_o *v8; // x1

  if ( (byte_42E7815 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, (_DWORD)obj, (_DWORD)method, v3);
    byte_42E7815 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance
    || (BattleSequenceManager__setup((BattleSequenceManager_o *)Instance, 0LL, 1, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(Instance, v6);
  }
  BattleSequenceManager__SetupDemoActor(
    (BattleSequenceManager_o *)Instance,
    this->fields.PlayerActorList,
    this->fields.EnemyActorList,
    0LL);
  v8 = BattleDemoRootComponent__WaitToNoblePhantasmPlay(this, v7);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDemoRootComponent__OnBattleEndScript(
        BattleDemoRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  _DWORD *monitor; // x8
  int32_t v15; // w20
  int32_t v16; // w21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v17; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_42E781B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string___ctor__, isExit, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_string__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BattleDemoRootComponent__OnBattleEndScript_b__47_0__, v8, v9, v10);
    this = (BattleDemoRootComponent_o *)sub_B5D5C4(&ScriptManager_TypeInfo, v11, v12, v13);
    byte_42E781B = 1;
  }
  monitor = v4[13].monitor;
  if ( !monitor )
    sub_B5D69C(this, isExit);
  v15 = monitor[5];
  v16 = monitor[6];
  v17 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_string__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v17,
    v4,
    Method_BattleDemoRootComponent__OnBattleEndScript_b__47_0__,
    (const MethodInfo_258B320 *)Method_System_Action_string___ctor__);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__LoadBattleEndGameDemo(v15, v16, 0, (System_Action_string__o *)v17, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDemoRootComponent__OnBattleStartScript(
        BattleDemoRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_42E7819 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6966/*"GOTO_BATTLE"*/, isExit, (_DWORD)method, v3);
    byte_42E7819 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B5D69C(0LL, isExit);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6966/*"GOTO_BATTLE"*/, 0LL);
}


void __fastcall BattleDemoRootComponent__OnNoblePhantasmPlayComplete(
        BattleDemoRootComponent_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  BattleFBXComponent_c *v62; // x0
  void *BattleDemoCallback; // x0
  struct UnityEngine_GameObject_array *PlayerActorList; // x21
  __int64 v65; // x8
  unsigned __int64 v66; // x22
  UnityEngine_Object_o *v67; // x20
  struct UnityEngine_GameObject_array *EnemyActorList; // x21
  __int64 v69; // x8
  unsigned __int64 v70; // x22
  UnityEngine_Object_o *v71; // x20
  struct System_Collections_Generic_List_ServantAssetArgs__o *loadedAssetArgsList; // x20
  struct BattleDemoRootComponent___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__43_0; // x21
  Il2CppObject *v75; // x22
  struct BattleDemoRootComponent___c_StaticFields *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  const MethodInfo *v83; // x1
  BattleDemoRootComponent_c *v84; // x0
  float BGM_FADEOUT_TIME; // s8
  __int64 *v86; // x8
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  _BOOL4 battleBefore; // w9
  _BOOL4 isBefore; // w8
  __int64 v90; // x0

  if ( (byte_42E7817 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_ServantAssetArgs___ctor__, (_DWORD)seq, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_ServantAssetArgs__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&AssetManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&BattleDemoRootComponent_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&BattleFBXComponent_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_GC_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantAssetArgs__ForEach__, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&SoundManager_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_BattleDemoRootComponent___c__OnNoblePhantasmPlayComplete_b__43_0__, v41, v42, v43);
    sub_B5D5C4(&BattleDemoRootComponent___c_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_6970/*"GOTO_TERMINAL"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_6968/*"GOTO_BATTLESTARTTALK"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_6967/*"GOTO_BATTLENDTALK"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_2808/*"Battle/Common"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_5557/*"END_DEMO"*/, v59, v60, v61);
    byte_42E7817 = 1;
  }
  if ( this->fields.BattleDemoCallback )
  {
    v62 = BattleFBXComponent_TypeInfo;
    if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      v62 = BattleFBXComponent_TypeInfo;
    }
    v62->static_fields->EnableEvent = 1;
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
  v65 = *(_QWORD *)&PlayerActorList->max_length;
  if ( (int)v65 >= 1 )
  {
    v66 = 0LL;
    while ( v66 < (unsigned int)v65 )
    {
      v67 = (UnityEngine_Object_o *)PlayerActorList->m_Items[v66];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      BattleDemoCallback = (void *)UnityEngine_Object__op_Inequality(v67, 0LL, 0LL);
      if ( ((unsigned __int8)BattleDemoCallback & 1) != 0 )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(v67, 0LL);
      }
      LODWORD(v65) = PlayerActorList->max_length;
      if ( (__int64)++v66 >= (int)v65 )
        goto LABEL_23;
    }
LABEL_78:
    v90 = sub_B5D6C8(BattleDemoCallback);
    sub_B5D668(v90, 0LL);
  }
LABEL_23:
  EnemyActorList = this->fields.EnemyActorList;
  if ( !EnemyActorList )
    goto LABEL_79;
  v69 = *(_QWORD *)&EnemyActorList->max_length;
  if ( (int)v69 >= 1 )
  {
    v70 = 0LL;
    while ( v70 < (unsigned int)v69 )
    {
      v71 = (UnityEngine_Object_o *)EnemyActorList->m_Items[v70];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      BattleDemoCallback = (void *)UnityEngine_Object__op_Inequality(v71, 0LL, 0LL);
      if ( ((unsigned __int8)BattleDemoCallback & 1) != 0 )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(v71, 0LL);
      }
      LODWORD(v69) = EnemyActorList->max_length;
      if ( (__int64)++v70 >= (int)v69 )
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
    v75 = (Il2CppObject *)static_fields->__9;
    _9__43_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_ServantAssetArgs__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__43_0,
      v75,
      Method_BattleDemoRootComponent___c__OnNoblePhantasmPlayComplete_b__43_0__,
      (const MethodInfo_258B320 *)Method_System_Action_ServantAssetArgs___ctor__);
    v76 = BattleDemoRootComponent___c_TypeInfo->static_fields;
    v76->__9__43_0 = (struct System_Action_ServantAssetArgs__o *)_9__43_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v76->__9__43_0,
      (System_Int32_array **)_9__43_0,
      v77,
      v78,
      v79,
      v80,
      v81,
      v82);
  }
  if ( !loadedAssetArgsList )
    goto LABEL_79;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)loadedAssetArgsList,
    (System_Action_T__o *)_9__43_0,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_ServantAssetArgs__ForEach__);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_2808/*"Battle/Common"*/, 0LL);
  BattleDemoCallback = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !BattleDemoCallback )
    goto LABEL_79;
  ServantAssetLoadManager__releaseNoblePhantasm((ServantAssetLoadManager_o *)BattleDemoCallback, 0LL);
  BattleDemoRootComponent__ReleaseCueSheet(this, v83);
  v84 = BattleDemoRootComponent_TypeInfo;
  if ( (BYTE3(BattleDemoRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDemoRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent_TypeInfo);
    v84 = BattleDemoRootComponent_TypeInfo;
  }
  BGM_FADEOUT_TIME = v84->static_fields->BGM_FADEOUT_TIME;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__fadeoutBgm(BGM_FADEOUT_TIME, 0LL);
  BattleDemoCallback = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !BattleDemoCallback )
    goto LABEL_79;
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)BattleDemoCallback, 0LL, 0LL);
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_43893280(0LL);
  BattleDemoCallback = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !BattleDemoCallback )
LABEL_79:
    sub_B5D69C(BattleDemoCallback, seq);
  CommonUI__maskFadeout((CommonUI_o *)BattleDemoCallback, 1, 1.0, 0LL, 0LL);
  if ( !this->fields.battleSetupInfo )
  {
    BattleDemoCallback = this->fields.myFSM;
    if ( !BattleDemoCallback )
      goto LABEL_79;
    v86 = &StringLiteral_5557/*"END_DEMO"*/;
LABEL_67:
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BattleDemoCallback, (System_String_o *)*v86, 0LL);
    return;
  }
  BattleDemoCallback = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !BattleDemoCallback )
    goto LABEL_79;
  BattleDemoCallback = (void *)AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)BattleDemoCallback, 0LL);
  if ( ((unsigned __int8)BattleDemoCallback & 1) != 0 )
  {
    BattleDemoCallback = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
      v86 = &StringLiteral_6967/*"GOTO_BATTLENDTALK"*/;
    else
      v86 = &StringLiteral_6970/*"GOTO_TERMINAL"*/;
    goto LABEL_67;
  }
  if ( !isBefore )
  {
    BattleDemoCallback = this->fields.myFSM;
    if ( !BattleDemoCallback )
      goto LABEL_79;
    v86 = &StringLiteral_6968/*"GOTO_BATTLESTARTTALK"*/;
    goto LABEL_67;
  }
}


void __fastcall BattleDemoRootComponent__ReleaseBattleDemo(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattleDemoRootComponent__ReleaseCueSheet(BattleDemoRootComponent_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v17; // x0
  BattleServantConfConponent_o *p_CueSheetList; // x19
  struct System_Collections_Generic_List_string__o *CueSheetList; // t1
  Il2CppObject *current; // x20
  SoundManager_o *Instance; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E780D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v14, v15, v16);
    byte_42E780D = 1;
  }
  memset(&v29, 0, sizeof(v29));
  CueSheetList = this->fields.CueSheetList;
  p_CueSheetList = (BattleServantConfConponent_o *)&this->fields.CueSheetList;
  v17 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CueSheetList;
  if ( CueSheetList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v29,
      v17,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v29,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v29.fields.current;
      Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_B5D69C(0LL, v22);
      SoundManager__ReleaseAudioAssetStorage(Instance, (System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v29,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    p_CueSheetList->klass = 0LL;
    sub_B5D560(p_CueSheetList, 0LL, v23, v24, v25, v26, v27, v28);
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E780E & 1) == 0 )
  {
    sub_B5D5C4(&BattleDemoRootComponent__SetupBattleDemo_d__30_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E780E = 1;
  }
  v5 = sub_B5D694(BattleDemoRootComponent__SetupBattleDemo_d__30_TypeInfo);
  BattleDemoRootComponent__SetupBattleDemo_d__30___ctor((BattleDemoRootComponent__SetupBattleDemo_d__30_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


bool __fastcall BattleDemoRootComponent__StartBattle(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E781E & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E781E = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
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
  BattleActorControl_o *Component_srcLineSprite; // x0
  __int64 v26; // x1
  struct UnityEngine_GameObject_array *PlayerActorList; // x8
  UnityEngine_GameObject_o *v28; // x21
  BattleActorControl_o *v29; // x20
  BattleFBXComponent_c *v30; // x0
  struct BattlePerformanceBg_o *perfBg; // x8
  int32_t DemoSequenceServantId; // w22
  BattleSequenceManager_o *v33; // x21
  struct BattleServantData_o *battleSvtData; // x8
  int32_t treasuredvcLevel; // w23
  int32_t v36; // w20
  BattleSequenceManager_onGameObjectLoadComplete_o *v37; // x24
  __int64 v38; // x0

  if ( (byte_42E7814 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleDemoRootComponent_OnBattleDemoLoadComplete__, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&BattleFBXComponent_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_9458/*"NPACTOR"*/, v19, v20, v21);
    sub_B5D5C4(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo, v22, v23, v24);
    byte_42E7814 = 1;
  }
  this->fields.BattleDemoCallback = callback;
  sub_B5D560(
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
    v38 = sub_B5D6C8(Component_srcLineSprite);
    sub_B5D668(v38, 0LL);
  }
  v28 = PlayerActorList->m_Items[0];
  if ( !v28 )
    goto LABEL_19;
  Component_srcLineSprite = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v28,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !this->fields.FieldMotion )
    goto LABEL_19;
  v29 = Component_srcLineSprite;
  Component_srcLineSprite = (BattleActorControl_o *)PlayMakerFSM__get_Fsm(this->fields.FieldMotion, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_19;
  Component_srcLineSprite = (BattleActorControl_o *)Component_srcLineSprite->fields._BuffEffectNodeName_k__BackingField;
  if ( !Component_srcLineSprite )
    goto LABEL_19;
  Component_srcLineSprite = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                                      (HutongGames_PlayMaker_FsmVariables_o *)Component_srcLineSprite,
                                                      (System_String_o *)StringLiteral_9458/*"NPACTOR"*/,
                                                      0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_19;
  HutongGames_PlayMaker_FsmGameObject__set_Value(
    (HutongGames_PlayMaker_FsmGameObject_o *)Component_srcLineSprite,
    v28,
    0LL);
  v30 = BattleFBXComponent_TypeInfo;
  if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v30 = BattleFBXComponent_TypeInfo;
  }
  v30->static_fields->EnableEvent = 0;
  Component_srcLineSprite = (BattleActorControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  perfBg = this->fields.perfBg;
  if ( !perfBg )
    goto LABEL_19;
  if ( !Component_srcLineSprite )
    goto LABEL_19;
  BattleSequenceManager__init(
    (BattleSequenceManager_o *)Component_srcLineSprite,
    this->fields.performance,
    v28,
    this->fields.PlayerActorList,
    this->fields.EnemyActorList,
    this->fields.actorCamera,
    perfBg->fields.bgobject,
    0LL);
  Component_srcLineSprite = (BattleActorControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v29 )
    goto LABEL_19;
  DemoSequenceServantId = this->fields.DemoSequenceServantId;
  v33 = (BattleSequenceManager_o *)Component_srcLineSprite;
  Component_srcLineSprite = (BattleActorControl_o *)BattleActorControl__getLimitCount(v29, 0LL);
  battleSvtData = v29->fields.battleSvtData;
  if ( !battleSvtData
    || (treasuredvcLevel = battleSvtData->fields.treasuredvcLevel,
        v36 = (int)Component_srcLineSprite,
        v37 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_B5D694(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo),
        BattleSequenceManager_onGameObjectLoadComplete___ctor(
          v37,
          (Il2CppObject *)this,
          Method_BattleDemoRootComponent_OnBattleDemoLoadComplete__,
          0LL),
        !v33) )
  {
LABEL_19:
    sub_B5D69C(Component_srcLineSprite, v26);
  }
  BattleSequenceManager__loadSequence(
    v33,
    DemoSequenceServantId,
    DemoSequenceServantId,
    v36,
    0,
    treasuredvcLevel,
    1,
    v37,
    0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleDemoRootComponent__WaitToNoblePhantasmPlay(
        BattleDemoRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E7816 & 1) == 0 )
  {
    sub_B5D5C4(&BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7816 = 1;
  }
  v5 = sub_B5D694(BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_TypeInfo);
  BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42___ctor(
    (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  CommonUI_o *Instance; // x0
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  if ( (byte_42E7822 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)demoInfo, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_6970/*"GOTO_TERMINAL"*/, v6, v7, v8);
    byte_42E7822 = 1;
  }
  if ( demoInfo )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B5D69C(Instance, demoInfo);
  }
  Instance = (CommonUI_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6970/*"GOTO_TERMINAL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDemoRootComponent___SetupBattleDemo_b__30_0(
        BattleDemoRootComponent_o *this,
        AssetData_o *aData,
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
  BattleFieldMotionComponent_o *performance; // x0
  struct BattlePerformance_o *v16; // x8
  struct BattleFieldMotionComponent_array *fieldmotion; // x8
  struct PlayMakerFSM_o *Fsm; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_GameObject_o *cameraObject; // x23
  UnityEngine_Transform_o *v26; // x22
  struct UnityEngine_GameObject_o **p_cameraObject; // x21
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  struct UnityEngine_GameObject_o *ObjectIfNotExist; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_Transform_o *transform; // x20
  int v37; // s0
  struct BattlePerformance_o *v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct BattlePerformance_o *v47; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct UnityEngine_Transform_array *npcBattleTr; // x8
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct UnityEngine_Transform_array *v68; // x8
  System_Int32_array **v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct BattlePerformance_o *v76; // x8
  struct BattleActionCamera_o *actioncamera; // x9
  System_Int32_array **frontcamera; // x1
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  struct BattlePerformance_o *v85; // x8
  struct BattleActionCamera_o *v86; // x8
  struct UnityEngine_Camera_o *actorcamera; // x1
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  struct BattlePerformance_o *v94; // x8
  struct PlayMakerFSM_o *camerafsm; // x1
  struct PlayMakerFSM_o **p_CameraFsm; // x19
  __int64 v97; // x8
  __int64 v98; // x19
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  __int64 v105; // x0

  if ( (byte_42E7820 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)aData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleActionCamera___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_11660/*"RootCameraPrefab"*/, v12, v13, v14);
    byte_42E7820 = 1;
  }
  performance = (BattleFieldMotionComponent_o *)this->fields.performance;
  if ( !performance )
    goto LABEL_31;
  BattlePerformance__loadFieldMotion((BattlePerformance_o *)performance, aData, 0LL, 0LL);
  v16 = this->fields.performance;
  if ( !v16 )
    goto LABEL_31;
  fieldmotion = v16->fields.fieldmotion;
  if ( !fieldmotion )
    goto LABEL_31;
  if ( !fieldmotion->max_length )
  {
    v105 = sub_B5D6C8(performance);
    sub_B5D668(v105, 0LL);
  }
  performance = fieldmotion->m_Items[0];
  if ( !performance )
    goto LABEL_31;
  Fsm = BattleFieldMotionComponent__getFsm(performance, 0LL);
  this->fields.FieldMotion = Fsm;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.FieldMotion,
    (System_Int32_array **)Fsm,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
  v26 = (UnityEngine_Transform_o *)performance;
  p_cameraObject = &this->fields.cameraObject;
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 aData,
                                                                 (System_String_o *)StringLiteral_11660/*"RootCameraPrefab"*/,
                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  ObjectIfNotExist = BaseMonoBehaviour__createObjectIfNotExist(
                       (BaseMonoBehaviour_o *)this,
                       cameraObject,
                       Object_WarBoardWaitTimeSetting,
                       v26,
                       0LL,
                       0LL);
  this->fields.cameraObject = ObjectIfNotExist;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cameraObject,
    (System_Int32_array **)ObjectIfNotExist,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  performance = (BattleFieldMotionComponent_o *)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_31;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)performance, (System_String_o *)StringLiteral_11660/*"RootCameraPrefab"*/, 0LL);
  performance = (BattleFieldMotionComponent_o *)*p_cameraObject;
  if ( !*p_cameraObject )
    goto LABEL_31;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)performance, 0LL);
  *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_31;
  UnityEngine_Transform__set_eulerAngles(transform, *(UnityEngine_Vector3_o *)&v37, 0LL);
  performance = (BattleFieldMotionComponent_o *)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_31;
  v40 = this->fields.performance;
  performance = (BattleFieldMotionComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  (UnityEngine_GameObject_o *)performance,
                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v40 )
    goto LABEL_31;
  v40->fields.camerafsm = (struct PlayMakerFSM_o *)performance;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v40->fields.camerafsm,
    (System_Int32_array **)performance,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  performance = (BattleFieldMotionComponent_o *)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_31;
  v47 = this->fields.performance;
  performance = (BattleFieldMotionComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  (UnityEngine_GameObject_o *)performance,
                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActionCamera___);
  if ( !v47 )
    goto LABEL_31;
  v47->fields.actioncamera = (struct BattleActionCamera_o *)performance;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v47->fields.actioncamera,
    (System_Int32_array **)performance,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  performance = (BattleFieldMotionComponent_o *)this->fields.performance;
  if ( !performance )
    goto LABEL_31;
  npcBattleTr = performance[1].fields.npcBattleTr;
  if ( !npcBattleTr )
    goto LABEL_31;
  v61 = (System_Int32_array **)npcBattleTr->m_Items[3];
  performance->fields.npcBattleTr = (struct UnityEngine_Transform_array *)v61;
  sub_B5D560((BattleServantConfConponent_o *)&performance->fields.npcBattleTr, v61, v54, v55, v56, v57, v58, v59);
  performance = (BattleFieldMotionComponent_o *)this->fields.performance;
  if ( !performance )
    goto LABEL_31;
  v68 = performance[1].fields.npcBattleTr;
  if ( !v68 )
    goto LABEL_31;
  v69 = (System_Int32_array **)v68->m_Items[5];
  performance->fields.fieldPopupBattleTr = (struct UnityEngine_Transform_o *)v69;
  sub_B5D560((BattleServantConfConponent_o *)&performance->fields.fieldPopupBattleTr, v69, v62, v63, v64, v65, v66, v67);
  v76 = this->fields.performance;
  if ( !v76 )
    goto LABEL_31;
  actioncamera = v76->fields.actioncamera;
  if ( !actioncamera )
    goto LABEL_31;
  frontcamera = (System_Int32_array **)actioncamera->fields.frontcamera;
  v76->fields.cutIncamera = (struct UnityEngine_Camera_o *)frontcamera;
  sub_B5D560((BattleServantConfConponent_o *)&v76->fields.cutIncamera, frontcamera, v70, v71, v72, v73, v74, v75);
  v85 = this->fields.performance;
  if ( !v85 )
    goto LABEL_31;
  v86 = v85->fields.actioncamera;
  if ( !v86 )
    goto LABEL_31;
  actorcamera = v86->fields.actorcamera;
  this->fields.actorCamera = actorcamera;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.actorCamera,
    (System_Int32_array **)actorcamera,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  v94 = this->fields.performance;
  if ( !v94 )
    goto LABEL_31;
  camerafsm = v94->fields.camerafsm;
  this->fields.CameraFsm = camerafsm;
  p_CameraFsm = &this->fields.CameraFsm;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_CameraFsm,
    (System_Int32_array **)camerafsm,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  v97 = (__int64)*(p_CameraFsm - 7);
  if ( !v97
    || (performance = *(BattleFieldMotionComponent_o **)(v97 + 128)) == 0LL
    || (v98 = (__int64)*(p_CameraFsm - 4),
        performance = (BattleFieldMotionComponent_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)performance,
                                                        0LL),
        !v98) )
  {
LABEL_31:
    sub_B5D69C(performance, aData);
  }
  *(_QWORD *)(v98 + 32) = performance;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v98 + 32),
    (System_Int32_array **)performance,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
}


void __fastcall BattleDemoRootComponent___beginStartUp_b__36_0(
        BattleDemoRootComponent_o *this,
        const MethodInfo *method)
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
  void *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  struct BattleDemoRootComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__36_1; // x20
  Il2CppObject *v19; // x21
  struct BattleDemoRootComponent___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42E7821 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_BattleDemoRootComponent___c__beginStartUp_b__36_1__, v8, v9, v10);
    sub_B5D5C4(&BattleDemoRootComponent___c_TypeInfo, v11, v12, v13);
    byte_42E7821 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v19 = (Il2CppObject *)static_fields->__9;
    _9__36_1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__36_1, v19, Method_BattleDemoRootComponent___c__beginStartUp_b__36_1__, 0LL);
    v20 = BattleDemoRootComponent___c_TypeInfo->static_fields;
    v20->__9__36_1 = _9__36_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v20->__9__36_1,
      (System_Int32_array **)_9__36_1,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !this )
LABEL_14:
    sub_B5D69C(Instance, v15);
  BattleDemoRootComponent__StartDemo(this, _9__36_1, v16);
}


void __fastcall BattleDemoRootComponent__beginFinish(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattleDemoRootComponent__beginInitialize(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonUI_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E7812 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    byte_42E7812 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadeout(Instance, 1, 0.0, 0LL, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(Instance, v9);
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
  Il2CppObject *demoInfo; // x20
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  __int64 v16; // x10
  System_Action_o *v17; // x21
  const MethodInfo *v18; // x3
  __int64 v19; // x0
  __int64 v20; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  demoInfo = data;
  if ( (byte_42E7813 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleDemoRootComponent__beginStartUp_b__36_0__, v10, v11, v12);
    sub_B5D5C4(&BattleSetupInfo_TypeInfo, v13, v14, v15);
    byte_42E7813 = 1;
  }
  if ( demoInfo )
  {
    v16 = *(&BattleSetupInfo_TypeInfo->_2.bitflags2 + 1);
    if ( *(&demoInfo->klass->_2.bitflags2 + 1) >= (unsigned int)v16
      && (BattleSetupInfo_c *)demoInfo->klass->_2.typeHierarchy[v16 - 1] == BattleSetupInfo_TypeInfo )
    {
      this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)demoInfo;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.battleSetupInfo,
        (System_Int32_array **)demoInfo,
        (System_String_array **)method,
        v3,
        v4,
        v5,
        v6,
        v7);
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        sub_B5D69C(v19, v20);
      demoInfo = (Il2CppObject *)battleSetupInfo->fields.demoInfo;
    }
    else
    {
      demoInfo = 0LL;
    }
  }
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_BattleDemoRootComponent__beginStartUp_b__36_0__, 0LL);
  BattleDemoRootComponent__InitializeBattleDemo(this, (System_String_o *)demoInfo, v17, v18);
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
  int v2; // w2
  __int64 v3; // x3
  BattleDemoRootComponent__SetupBattleDemo_d__30_o *v4; // x19
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  struct BattleDemoRootComponent_o *_4__this; // x20
  AssetLoader_LoadEndDataHandler_o *v30; // x21
  System_Action_o *InitializeCallback; // x0
  System_Int32_array **v32; // x0
  BattleServantConfConponent_o *v33; // x19
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  int v48; // w8
  System_Int32_array **v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_o *BgmName; // x20
  UnityEngine_WaitForSeconds_o *v57; // x20
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  int v65; // [xsp+Ch] [xbp-24h] BYREF
  int v66; // [xsp+18h] [xbp-18h] BYREF
  int v67; // [xsp+1Ch] [xbp-14h] BYREF

  v4 = this;
  if ( (byte_42E7C21 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattleDemoRootComponent__SetupBattleDemo_b__30_0__, v5, v6, v7);
    sub_B5D5C4(&int_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&SoundManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_2808/*"Battle/Common"*/, v23, v24, v25);
    this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)sub_B5D5C4(&StringLiteral_11221/*"RESET_CAMERA_NOBLEEND"*/, v26, v27, v28);
    byte_42E7C21 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v30 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v30,
        (Il2CppObject *)_4__this,
        Method_BattleDemoRootComponent__SetupBattleDemo_b__30_0__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__loadAssetStorage((System_String_o *)StringLiteral_2808/*"Battle/Common"*/, v30, 1, 0LL);
      goto LABEL_16;
    case 1:
      v4->fields.__1__state = -1;
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
              v66 = 0;
              v40 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v66);
              v4->fields.__2__current = (Il2CppObject *)v40;
              p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
              sub_B5D560(p__2__current, v40, v42, v43, v44, v45, v46, v47);
              v48 = 2;
LABEL_38:
              *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v48;
              LOBYTE(InitializeCallback) = 1;
              return (char)InitializeCallback;
            }
            if ( _4__this )
            {
              BattleDemoRootComponent__LoadCueSheet(_4__this, 0LL);
LABEL_31:
              if ( _4__this->fields.CueSheetCount )
              {
                v65 = 0;
                v49 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v65);
                v4->fields.__2__current = (Il2CppObject *)v49;
                p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
                sub_B5D560(p__2__current, v49, v50, v51, v52, v53, v54, v55);
                v48 = 3;
                goto LABEL_38;
              }
              BattleDemoRootComponent__CreateActors(_4__this, 0LL);
              this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)_4__this->fields.CameraFsm;
              if ( this )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11221/*"RESET_CAMERA_NOBLEEND"*/, 0LL);
                BgmName = _4__this->fields.BgmName;
                if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SoundManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                }
                SoundManager__playBgm(BgmName, 0LL);
                v57 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
                UnityEngine_WaitForSeconds___ctor(v57, 1.0, 0LL);
                v4->fields.__2__current = (Il2CppObject *)v57;
                p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
                sub_B5D560(p__2__current, (System_Int32_array **)v57, v58, v59, v60, v61, v62, v63);
                v48 = 4;
                goto LABEL_38;
              }
            }
          }
        }
LABEL_40:
        sub_B5D69C(this, method);
      }
      v67 = 0;
      v32 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v67);
      v4->fields.__2__current = (Il2CppObject *)v32;
      v33 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
      sub_B5D560(v33, v32, v34, v35, v36, v37, v38, v39);
      LOBYTE(InitializeCallback) = 1;
      *(_DWORD *)&v33[-1].fields.isOpenAfter = 1;
      return (char)InitializeCallback;
    case 2:
      v4->fields.__1__state = -1;
      goto LABEL_24;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_40;
      goto LABEL_31;
    case 4:
      v4->fields.__1__state = -1;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleDemoRootComponent__SetupBattleDemo_d__30_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *v4; // x20
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v24; // x19
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  bool result; // w0
  struct BattleDemoRootComponent_o *_4__this; // x19
  struct BattlePerformance_o *performance; // x20
  BattlePerformance_c *v34; // x0
  struct BattlePerformance_o *v35; // x8
  UnityEngine_Transform_o *transform; // x20
  int v37; // s0
  WebViewManager_o *Instance; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v41; // x21

  v4 = this;
  if ( (byte_42E7C22 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_USSequencer___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_USSequencer__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BattleDemoRootComponent_OnNoblePhantasmPlayComplete__, v8, v9, v10);
    sub_B5D5C4(&BattlePerformance_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)sub_B5D5C4(
                                                                         &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                         v20,
                                                                         v21,
                                                                         v22);
    byte_42E7C22 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
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
    v34 = BattlePerformance_TypeInfo;
    if ( (BYTE3(BattlePerformance_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformance_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
      v34 = BattlePerformance_TypeInfo;
    }
    BattlePerformance__setupCameraFov(performance, v34->static_fields->DefaultFov, 0LL);
    v35 = _4__this->fields.performance;
    if ( !v35 )
      goto LABEL_19;
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)v35->fields.actorcamera;
    if ( !this )
      goto LABEL_19;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localEulerAngles(transform, *(UnityEngine_Vector3_o *)&v37, 0LL),
          (this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__maskFadein((CommonUI_o *)this, 1.0, 0LL, 0LL),
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__),
          v41 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_USSequencer__TypeInfo),
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v41,
            (Il2CppObject *)_4__this,
            Method_BattleDemoRootComponent_OnNoblePhantasmPlayComplete__,
            (const MethodInfo_258B320 *)Method_System_Action_USSequencer___ctor__),
          !Instance) )
    {
LABEL_19:
      sub_B5D69C(this, method);
    }
    BattleSequenceManager__play((BattleSequenceManager_o *)Instance, 0, 1, (System_Action_USSequencer__o *)v41, 0LL);
  }
  else if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    v24 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v24, 0LL);
    v4->fields.__2__current = (Il2CppObject *)v24;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v4->fields.__2__current,
      (System_Int32_array **)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    result = 1;
    v4->fields.__1__state = 1;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7C1F & 1) == 0 )
  {
    sub_B5D5C4(&BattleDemoRootComponent___c_TypeInfo, v1, v2, v3);
    byte_42E7C1F = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleDemoRootComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleDemoRootComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x3

  if ( (byte_42E7C20 & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, (_DWORD)args, (_DWORD)method, v3);
    byte_42E7C20 = 1;
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