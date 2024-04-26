void __fastcall BlankEarthQuestAfterAction___ctor(BlankEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BlankEarthGimmickEntity_o *__fastcall BlankEarthQuestAfterAction__GetGimmickEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t gimmickId,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1

  if ( (byte_4351629 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
    byte_4351629 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7076C(0LL, v5);
  return (BlankEarthGimmickEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        Master_WarQuestSelectionMaster,
                                        gimmickId,
                                        (const MethodInfo_21C0440 *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
}


BlankEarthSpotEntity_o *__fastcall BlankEarthQuestAfterAction__GetSpotEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1

  if ( (byte_4351628 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
    byte_4351628 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7076C(0LL, v5);
  return (BlankEarthSpotEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     Master_WarQuestSelectionMaster,
                                     spotId,
                                     (const MethodInfo_21C0440 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
}


bool __fastcall BlankEarthQuestAfterAction__IsBlankEarthActive(
        BlankEarthQuestAfterAction_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  UnityEngine_Object_o *mInstance; // x19
  ScrTerminalListTop_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *monitor; // x20

  if ( (byte_435162A & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_435162A = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v2->static_fields->mInstance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (ScrTerminalListTop_o *)UnityEngine_Object__op_Equality(mInstance, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
    return 0;
  if ( !mInstance )
    goto LABEL_23;
  monitor = (UnityEngine_Object_o *)mInstance[10].monitor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
    return 0;
  v4 = (ScrTerminalListTop_o *)mInstance[10].monitor;
  if ( !v4 )
LABEL_23:
    sub_B7076C(v4, v5);
  return ScrTerminalListTop__get_IsActiveBlankEarth(v4, 0LL);
}


bool __fastcall BlankEarthQuestAfterAction__TryGetParam(
        BlankEarthQuestAfterAction_o *this,
        QuestAfterAction_Command_o *command,
        BlankEarthQuestAfterAction_CommandParam_o **commandParam,
        System_String_o **errorMessage,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BlankEarthQuestAfterAction_CommandParam_o *v11; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t id; // w9
  bool v21; // w8
  char v22; // w10
  BlankEarthQuestAfterAction_CommandParam_o *v23; // x20
  BlankEarthQuestAfterAction_o *v24; // x0
  const MethodInfo *v25; // x2
  BlankEarthSpotEntity_o *SpotEntity; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  System_String_o *param; // x21
  System_Char_array *v35; // x0
  System_String_array *v36; // x0
  __int64 v37; // x1
  System_String_array *v38; // x21
  int max_length; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v40; // x22
  float v41; // s0
  System_String_o *v42; // x21
  System_Char_array *v43; // x0
  System_String_array *v44; // x0
  __int64 v45; // x1
  System_String_array *v46; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v47; // x22
  BlankEarthQuestAfterAction_o *v48; // x0
  const MethodInfo *v49; // x2
  System_Int32_array **v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x0
  BlankEarthQuestAfterAction_CommandParam_o *v58; // x20
  __int64 v59; // x0
  __int64 v60; // x1
  System_String_o *v61; // x21
  System_Char_array *v62; // x0
  System_String_array *v63; // x0
  __int64 v64; // x1
  System_String_array *v65; // x21
  int v66; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v67; // x22
  bool v68; // w8
  System_String_o *v69; // x21
  System_Char_array *v70; // x0
  System_String_array *v71; // x0
  __int64 v72; // x1
  System_String_array *v73; // x21
  int v74; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v75; // x22
  float v76; // s0
  System_String_o *v77; // x21
  System_Char_array *v78; // x0
  System_String_array *v79; // x0
  __int64 v80; // x1
  System_String_array *v81; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v82; // x22
  __int64 v83; // x0
  __int64 v84; // x1
  float v85; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v86; // x22
  __int64 v87; // x0
  float v88; // s0
  float v89; // s8
  __int64 v90; // x0
  __int64 v91; // x1
  float v92; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v93; // x20
  __int64 v94; // x0
  __int64 v95; // x1
  BlankEarthQuestAfterAction_CommandParam_o *v96; // x22
  __int64 v97; // x0
  BlankEarthQuestAfterAction_CommandParam_o *v98; // x22
  __int64 v99; // x0
  BlankEarthQuestAfterAction_CommandParam_o *v100; // x20
  BlankEarthQuestAfterAction_o *v101; // x0
  const MethodInfo *v102; // x2
  BlankEarthGimmickEntity_o *GimmickEntity; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x1
  BlankEarthQuestAfterAction_o *v111; // x0
  const MethodInfo *v112; // x2
  BlankEarthQuestAfterAction_o *v113; // x0
  const MethodInfo *v114; // x2
  __int64 v116; // x0
  __int64 v117; // x0
  __int64 v118; // x0
  __int64 v119; // x0
  __int64 v120; // x0
  __int64 v121; // x0
  __int64 v122; // x0
  __int64 v123; // x0
  __int64 v124; // x0
  __int64 v125; // x0
  __int64 v126; // x0
  __int64 v127; // x0
  __int64 v128; // x0

  if ( (byte_4351627 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&BlankEarthQuestAfterAction_CommandParam_TypeInfo);
    byte_4351627 = 1;
  }
  *errorMessage = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)errorMessage,
    0LL,
    (System_String_array **)commandParam,
    (System_String_array **)errorMessage,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  v11 = (BlankEarthQuestAfterAction_CommandParam_o *)sub_B70764(BlankEarthQuestAfterAction_CommandParam_TypeInfo);
  BlankEarthQuestAfterAction_CommandParam___ctor(v11, 0LL);
  *commandParam = v11;
  sub_B70630((BattleServantConfConponent_o *)commandParam, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
  if ( !command )
    sub_B7076C(v18, v19);
  id = command->fields.id;
  v21 = 1;
  v22 = id - 100;
  if ( (unsigned int)(id - 100) > 0xE )
  {
    switch ( id )
    {
      case 300:
        param = command->fields.param;
        v35 = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
        if ( !v35 )
          sub_B7076C(0LL, 0LL);
        if ( !v35->max_length )
        {
          v119 = sub_B70798(v35);
          sub_B70738(v119, 0LL);
        }
        v35->m_Items[2] = 44;
        if ( !param )
          sub_B7076C(v35, v35);
        v36 = System_String__Split(param, v35, 0LL);
        v38 = v36;
        if ( !v36 )
          sub_B7076C(0LL, v37);
        max_length = v36->max_length;
        if ( max_length <= 0 )
          return 0;
        v40 = *commandParam;
        if ( max_length >= 3 )
        {
          v41 = System_Single__Parse(v36->m_Items[2], 0LL) * 0.001;
          if ( !v40 )
            goto LABEL_104;
        }
        else
        {
          v41 = 0.5;
          if ( !v40 )
LABEL_104:
            sub_B7076C(v36, v37);
        }
        v40->fields.time = v41;
        v98 = *commandParam;
        if ( (int)v38->max_length >= 2 )
        {
          v99 = System_Int32__Parse(v38->m_Items[1], 0LL);
          if ( !v98 )
            goto LABEL_107;
        }
        else
        {
          v99 = 15LL;
          if ( !v98 )
LABEL_107:
            sub_B7076C(v99, v37);
        }
        v98->fields.easeType = v99;
        if ( !v38->max_length )
        {
          v123 = sub_B70798(v99);
          sub_B70738(v123, 0LL);
        }
        v23 = *commandParam;
        v111 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v38->m_Items[0], 0LL);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v111, (int32_t)v111, v112);
        v33 = (System_Int32_array **)SpotEntity;
        if ( !v23 )
          sub_B7076C(SpotEntity, SpotEntity);
LABEL_8:
        v23->fields.blankEarthSpotEntity = SpotEntity;
        sub_B70630((BattleServantConfConponent_o *)&v23->fields, v33, v27, v28, v29, v30, v31, v32);
        return 1;
      case 301:
        return v21;
      case 302:
        v69 = command->fields.param;
        v70 = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
        if ( !v70 )
          sub_B7076C(0LL, 0LL);
        if ( !v70->max_length )
        {
          v120 = sub_B70798(v70);
          sub_B70738(v120, 0LL);
        }
        v70->m_Items[2] = 44;
        if ( !v69 )
          sub_B7076C(v70, v70);
        v71 = System_String__Split(v69, v70, 0LL);
        v73 = v71;
        if ( !v71 )
          sub_B7076C(0LL, v72);
        v74 = v71->max_length;
        if ( v74 <= 0 )
          return 0;
        v75 = *commandParam;
        if ( v74 >= 3 )
        {
          v76 = System_Single__Parse(v71->m_Items[2], 0LL) * 0.001;
          if ( !v75 )
            goto LABEL_103;
        }
        else
        {
          v76 = 0.5;
          if ( !v75 )
LABEL_103:
            sub_B7076C(v71, v72);
        }
        v75->fields.time = v76;
        v96 = *commandParam;
        if ( (int)v73->max_length >= 2 )
        {
          v97 = System_Int32__Parse(v73->m_Items[1], 0LL);
          if ( !v96 )
            goto LABEL_105;
        }
        else
        {
          v97 = 15LL;
          if ( !v96 )
LABEL_105:
            sub_B7076C(v97, v72);
        }
        v96->fields.easeType = v97;
        if ( !v73->max_length )
        {
          v122 = sub_B70798(v97);
          sub_B70738(v122, 0LL);
        }
        v100 = *commandParam;
        v101 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v73->m_Items[0], 0LL);
        GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v101, (int32_t)v101, v102);
        v110 = (System_Int32_array **)GimmickEntity;
        if ( !v100 )
          sub_B7076C(GimmickEntity, GimmickEntity);
        goto LABEL_78;
      case 303:
        v77 = command->fields.param;
        v78 = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
        if ( !v78 )
          sub_B7076C(0LL, 0LL);
        if ( !v78->max_length )
        {
          v121 = sub_B70798(v78);
          sub_B70738(v121, 0LL);
        }
        v78->m_Items[2] = 44;
        if ( !v77 )
          sub_B7076C(v78, v78);
        v79 = System_String__Split(v77, v78, 0LL);
        v81 = v79;
        if ( !v79 )
          sub_B7076C(0LL, v80);
        if ( (int)v79->max_length <= 3 )
          return 0;
        v82 = *commandParam;
        v85 = System_Single__Parse(v79->m_Items[2], 0LL);
        if ( !v82 )
          sub_B7076C(v83, v84);
        v82->fields.time = v85 * 0.001;
        v86 = *commandParam;
        if ( !*commandParam )
          sub_B7076C(v83, v84);
        if ( v86->fields.time < 0.0 )
        {
          v86->fields.time = 0.5;
          v86 = *commandParam;
        }
        if ( !v81->max_length )
        {
          v125 = sub_B70798(v83);
          sub_B70738(v125, 0LL);
        }
        v88 = System_Single__Parse(v81->m_Items[0], 0LL);
        if ( v81->max_length <= 1 )
        {
          v126 = sub_B70798(v87);
          sub_B70738(v126, 0LL);
        }
        v89 = v88;
        v92 = System_Single__Parse(v81->m_Items[1], 0LL);
        if ( !v86 )
          sub_B7076C(v90, v91);
        v86->fields.latLongVector.fields.x = v89;
        v86->fields.latLongVector.fields.y = v92;
        if ( v81->max_length <= 3 )
        {
          v127 = sub_B70798(v90);
          sub_B70738(v127, 0LL);
        }
        v93 = *commandParam;
        v94 = System_Int32__Parse(v81->m_Items[3], 0LL);
        if ( !v93 )
          sub_B7076C(v94, v95);
        v93->fields.easeType = v94;
        return 1;
      default:
        if ( (id & 0xFFFFFFFC) != 400 )
          return 1;
        v61 = command->fields.param;
        v62 = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
        if ( !v62 )
          sub_B7076C(0LL, 0LL);
        if ( !v62->max_length )
        {
          v124 = sub_B70798(v62);
          sub_B70738(v124, 0LL);
        }
        v62->m_Items[2] = 44;
        if ( !v61 )
          sub_B7076C(v62, v62);
        v63 = System_String__Split(v61, v62, 0LL);
        v65 = v63;
        if ( !v63 )
          sub_B7076C(0LL, v64);
        v66 = v63->max_length;
        if ( v66 <= 0 )
          return 0;
        v67 = *commandParam;
        if ( v66 == 1 )
        {
          v68 = 0;
          if ( !v67 )
LABEL_122:
            sub_B7076C(v63, v64);
        }
        else
        {
          v63 = (System_String_array *)System_Int32__Parse(v63->m_Items[1], 0LL);
          v68 = (int)v63 > 0;
          if ( !v67 )
            goto LABEL_122;
        }
        v67->fields.noWait = v68;
        if ( !v65->max_length )
        {
          v128 = sub_B70798(v63);
          sub_B70738(v128, 0LL);
        }
        v100 = *commandParam;
        v113 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v65->m_Items[0], 0LL);
        GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v113, (int32_t)v113, v114);
        v110 = (System_Int32_array **)GimmickEntity;
        if ( !v100 )
          sub_B7076C(GimmickEntity, GimmickEntity);
LABEL_78:
        v100->fields.blankEarthGimmickEntity = GimmickEntity;
        sub_B70630(
          (BattleServantConfConponent_o *)&v100->fields.blankEarthGimmickEntity,
          v110,
          v104,
          v105,
          v106,
          v107,
          v108,
          v109);
        return 1;
    }
  }
  if ( ((1 << v22) & 0x23E8) == 0 )
  {
    if ( ((1 << v22) & 0x1C07) == 0 )
    {
      v42 = command->fields.param;
      v43 = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
      if ( !v43 )
        sub_B7076C(0LL, 0LL);
      if ( !v43->max_length )
      {
        v116 = sub_B70798(v43);
        sub_B70738(v116, 0LL);
      }
      v43->m_Items[2] = 44;
      if ( !v42 )
        sub_B7076C(v43, v43);
      v44 = System_String__Split(v42, v43, 0LL);
      v46 = v44;
      if ( !v44 )
        sub_B7076C(0LL, v45);
      if ( !v44->max_length )
      {
        v117 = sub_B70798(v44);
        sub_B70738(v117, 0LL);
      }
      v47 = *commandParam;
      v48 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v44->m_Items[0], 0LL);
      v50 = (System_Int32_array **)BlankEarthQuestAfterAction__GetSpotEntity(v48, (int32_t)v48, v49);
      if ( !v47 )
        sub_B7076C(v50, v50);
      v47->fields.blankEarthSpotEntity = (struct BlankEarthSpotEntity_o *)v50;
      sub_B70630((BattleServantConfConponent_o *)&v47->fields, v50, v51, v52, v53, v54, v55, v56);
      if ( v46->max_length <= 1 )
      {
        v118 = sub_B70798(v57);
        sub_B70738(v118, 0LL);
      }
      v58 = *commandParam;
      v59 = System_Int32__Parse(v46->m_Items[1], 0LL);
      if ( !v58 )
        sub_B7076C(v59, v60);
      v58->fields.intValue = v59;
      return 1;
    }
    v23 = *commandParam;
    v24 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0LL);
    SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v24, (int32_t)v24, v25);
    v33 = (System_Int32_array **)SpotEntity;
    if ( !v23 )
      sub_B7076C(SpotEntity, SpotEntity);
    goto LABEL_8;
  }
  return v21;
}


bool __fastcall BlankEarthQuestAfterAction__UpdateAnim(
        BlankEarthQuestAfterAction_o *this,
        QuestAfterAction_o *that,
        QuestAfterAction_Command_o *command,
        System_Action_o *endAnimCallback,
        bool *isQuickUpdate,
        const MethodInfo *method)
{
  __int64 v10; // x22
  TerminalSceneComponent_c *IsGimmickDispCommand; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Action_o **v19; // x20
  BlankEarthQuestAfterAction_o *v20; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x4
  bool IsBlankEarthActive; // w8
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t id; // w23
  BlankEarth_o *blankEarth; // x21
  int v28; // w8
  bool v29; // w19
  int32_t v30; // w2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v31; // x19
  struct BlankEarthGimmickEntity_o *blankEarthGimmickEntity; // x8
  UnityEngine_Object_o *EarthGimmick; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v34; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v35; // x19
  bool IsNoWaitCommand; // w22
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x3
  System_String_o *v40; // [xsp+0h] [xbp-40h] BYREF
  BlankEarthQuestAfterAction_CommandParam_o *commandParam; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4351626 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__);
    sub_B70694(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__);
    sub_B70694(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__);
    sub_B70694(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__);
    sub_B70694(&BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
    byte_4351626 = 1;
  }
  v40 = 0LL;
  commandParam = 0LL;
  v10 = sub_B70764(BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
  BlankEarthQuestAfterAction___c__DisplayClass1_0___ctor((BlankEarthQuestAfterAction___c__DisplayClass1_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_66;
  *(_QWORD *)(v10 + 16) = endAnimCallback;
  v19 = (System_Action_o **)(v10 + 16);
  sub_B70630(
    (BattleServantConfConponent_o *)(v10 + 16),
    (System_Int32_array **)endAnimCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  *isQuickUpdate = 0;
  IsBlankEarthActive = BlankEarthQuestAfterAction__IsBlankEarthActive(v20, v21);
  LOBYTE(IsGimmickDispCommand) = 0;
  if ( IsBlankEarthActive )
  {
    if ( !BlankEarthQuestAfterAction__TryGetParam(this, command, &commandParam, &v40, v22) )
    {
      ActionExtensions__Call(*v19, 0LL);
LABEL_33:
      LOBYTE(IsGimmickDispCommand) = 1;
      return (char)IsGimmickDispCommand;
    }
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_434DEA1 )
    {
      sub_B70694(&TerminalSceneComponent_TypeInfo);
      byte_434DEA1 = 1;
    }
    IsGimmickDispCommand = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      IsGimmickDispCommand = TerminalSceneComponent_TypeInfo;
    }
    mInstance = IsGimmickDispCommand->static_fields->mInstance;
    if ( !mInstance || (mTerminalList = mInstance->fields.mTerminalList) == 0LL || !command )
LABEL_66:
      sub_B7076C(IsGimmickDispCommand, v12);
    id = command->fields.id;
    blankEarth = mTerminalList->fields.blankEarth;
    IsGimmickDispCommand = 0LL;
    if ( (unsigned int)(id - 100) > 0xE )
    {
      switch ( id )
      {
        case 300:
          v31 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v31,
            (Il2CppObject *)v10,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__,
            (const MethodInfo_264C148 *)Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__);
          if ( !commandParam || !blankEarth )
            goto LABEL_66;
          BlankEarth__RotateEarthTowardsSpot(
            blankEarth,
            commandParam->fields.blankEarthSpotEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v31,
            0LL,
            0LL);
          goto LABEL_33;
        case 301:
          return (char)IsGimmickDispCommand;
        case 302:
          v34 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v34,
            (Il2CppObject *)v10,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__,
            (const MethodInfo_264C148 *)Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__);
          if ( !commandParam || !blankEarth )
            goto LABEL_66;
          BlankEarth__RotateEarthTowardsGimmick(
            blankEarth,
            commandParam->fields.blankEarthGimmickEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v34,
            0LL);
          goto LABEL_33;
        case 303:
          v35 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v35,
            (Il2CppObject *)v10,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__,
            (const MethodInfo_264C148 *)Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__);
          if ( !commandParam || !blankEarth )
            goto LABEL_66;
          BlankEarth__RotateEarthByLatLong(
            blankEarth,
            commandParam->fields.latLongVector,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v35,
            0LL,
            0LL);
          goto LABEL_33;
        default:
          if ( (id & 0xFFFFFFFC) != 400 )
            goto LABEL_46;
          if ( !commandParam )
            goto LABEL_66;
          blankEarthGimmickEntity = commandParam->fields.blankEarthGimmickEntity;
          if ( !blankEarthGimmickEntity || !blankEarth )
            goto LABEL_66;
          EarthGimmick = (UnityEngine_Object_o *)BlankEarth__GetEarthGimmick(
                                                   blankEarth,
                                                   blankEarthGimmickEntity->fields.id,
                                                   0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(EarthGimmick, 0LL, 0LL) )
            goto LABEL_46;
          IsNoWaitCommand = QuestAfterAction__IsNoWaitCommand(id, 0LL);
          IsGimmickDispCommand = (TerminalSceneComponent_c *)QuestAfterAction__IsGimmickDispCommand(id, 0LL);
          if ( ((unsigned __int8)IsGimmickDispCommand & 1) != 0 )
            v12 = 3LL;
          else
            v12 = 2LL;
          if ( IsNoWaitCommand )
          {
            if ( !EarthGimmick )
              goto LABEL_66;
            BlankEarthGimmickComponent__SetDispAnim_24414304(
              (BlankEarthGimmickComponent_o *)EarthGimmick,
              (unsigned __int8)IsGimmickDispCommand & 1,
              0.0,
              v37);
          }
          else
          {
            if ( !commandParam )
              goto LABEL_66;
            if ( !commandParam->fields.noWait )
            {
              if ( EarthGimmick )
              {
                BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v12, *v19, v38);
                goto LABEL_33;
              }
              goto LABEL_66;
            }
            if ( !EarthGimmick )
              goto LABEL_66;
            BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v12, 0LL, v38);
          }
          LOBYTE(IsGimmickDispCommand) = 1;
          *isQuickUpdate = 1;
          break;
      }
    }
    else
    {
      v28 = 1 << (id - 100);
      if ( (v28 & 0x23E8) == 0 )
      {
        if ( (v28 & 0x1C07) != 0 )
        {
          v29 = QuestAfterAction__IsSpotChangeDispQuicklyCommand(id, 0LL);
          IsGimmickDispCommand = (TerminalSceneComponent_c *)QuestAfterAction__IsSpotHideCommand(id, 0LL);
          if ( ((unsigned __int8)IsGimmickDispCommand & 1) != 0 )
          {
            v30 = 0;
          }
          else
          {
            IsGimmickDispCommand = (TerminalSceneComponent_c *)QuestAfterAction__IsSpotGrayCommand(id, 0LL);
            if ( ((unsigned __int8)IsGimmickDispCommand & 1) != 0 )
              v30 = 2;
            else
              v30 = 1;
          }
          if ( commandParam && blankEarth )
          {
            BlankEarth__RevealEarthPoint(blankEarth, commandParam->fields.blankEarthSpotEntity, v30, v29, *v19, 0LL);
            goto LABEL_33;
          }
          goto LABEL_66;
        }
        if ( !commandParam || !blankEarth )
          goto LABEL_66;
        BlankEarth__PlaySpotUniqueAnim(
          blankEarth,
          commandParam->fields.blankEarthSpotEntity,
          commandParam->fields.intValue,
          id == 114,
          *v19,
          0LL);
LABEL_46:
        LOBYTE(IsGimmickDispCommand) = 0;
      }
    }
  }
  return (char)IsGimmickDispCommand;
}


void __fastcall BlankEarthQuestAfterAction_CommandParam___ctor(
        BlankEarthQuestAfterAction_CommandParam_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarthQuestAfterAction___c__DisplayClass1_0___ctor(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_b__0(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        BlankEarth_QAARotateEarthResponse_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAnimCallback, 0LL);
}


void __fastcall BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_b__1(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        BlankEarth_QAARotateEarthResponse_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAnimCallback, 0LL);
}


void __fastcall BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_b__2(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        BlankEarth_QAARotateEarthResponse_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAnimCallback, 0LL);
}