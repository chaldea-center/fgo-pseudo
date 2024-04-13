void __fastcall BlankEarthQuestAfterAction___ctor(BlankEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BlankEarthGimmickEntity_o *__fastcall BlankEarthQuestAfterAction__GetGimmickEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t gimmickId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1

  if ( (byte_42E85EE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___, gimmickId, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__, v8, v9, v10);
    byte_42E85EE = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v12);
  return (BlankEarthGimmickEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        Master_WarQuestSelectionMaster,
                                        gimmickId,
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
}


BlankEarthSpotEntity_o *__fastcall BlankEarthQuestAfterAction__GetSpotEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1

  if ( (byte_42E85ED & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, spotId, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__, v8, v9, v10);
    byte_42E85ED = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v12);
  return (BlankEarthSpotEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     Master_WarQuestSelectionMaster,
                                     spotId,
                                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
}


bool __fastcall BlankEarthQuestAfterAction__IsBlankEarthActive(
        BlankEarthQuestAfterAction_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalSceneComponent_c *v7; // x0
  UnityEngine_Object_o *mInstance; // x19
  ScrTerminalListTop_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *monitor; // x20

  if ( (byte_42E85EF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v4, v5, v6);
    byte_42E85EF = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B1E = 1;
  }
  v7 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v7 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v7->static_fields->mInstance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (ScrTerminalListTop_o *)UnityEngine_Object__op_Equality(mInstance, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
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
  v9 = (ScrTerminalListTop_o *)mInstance[10].monitor;
  if ( !v9 )
LABEL_23:
    sub_B5D69C(v9, v10);
  return ScrTerminalListTop__get_IsActiveBlankEarth(v9, 0LL);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BlankEarthQuestAfterAction_CommandParam_o *v14; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t id; // w9
  bool v24; // w8
  char v25; // w10
  BlankEarthQuestAfterAction_CommandParam_o *v26; // x20
  BlankEarthQuestAfterAction_o *v27; // x0
  const MethodInfo *v28; // x2
  BlankEarthSpotEntity_o *SpotEntity; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  System_String_o *param; // x21
  System_Char_array *v38; // x0
  System_String_array *v39; // x0
  __int64 v40; // x1
  System_String_array *v41; // x21
  int max_length; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v43; // x22
  float v44; // s0
  System_String_o *v45; // x21
  System_Char_array *v46; // x0
  System_String_array *v47; // x0
  __int64 v48; // x1
  System_String_array *v49; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v50; // x22
  BlankEarthQuestAfterAction_o *v51; // x0
  const MethodInfo *v52; // x2
  System_Int32_array **v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x0
  BlankEarthQuestAfterAction_CommandParam_o *v61; // x20
  __int64 v62; // x0
  __int64 v63; // x1
  System_String_o *v64; // x21
  System_Char_array *v65; // x0
  System_String_array *v66; // x0
  __int64 v67; // x1
  System_String_array *v68; // x21
  int v69; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v70; // x22
  bool v71; // w8
  System_String_o *v72; // x21
  System_Char_array *v73; // x0
  System_String_array *v74; // x0
  __int64 v75; // x1
  System_String_array *v76; // x21
  int v77; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v78; // x22
  float v79; // s0
  System_String_o *v80; // x21
  System_Char_array *v81; // x0
  System_String_array *v82; // x0
  __int64 v83; // x1
  System_String_array *v84; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v85; // x22
  __int64 v86; // x0
  __int64 v87; // x1
  float v88; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v89; // x22
  __int64 v90; // x0
  float v91; // s0
  float v92; // s8
  __int64 v93; // x0
  __int64 v94; // x1
  float v95; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v96; // x20
  __int64 v97; // x0
  __int64 v98; // x1
  BlankEarthQuestAfterAction_CommandParam_o *v99; // x22
  __int64 v100; // x0
  BlankEarthQuestAfterAction_CommandParam_o *v101; // x22
  __int64 v102; // x0
  BlankEarthQuestAfterAction_CommandParam_o *v103; // x20
  BlankEarthQuestAfterAction_o *v104; // x0
  const MethodInfo *v105; // x2
  BlankEarthGimmickEntity_o *GimmickEntity; // x0
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x1
  BlankEarthQuestAfterAction_o *v114; // x0
  const MethodInfo *v115; // x2
  BlankEarthQuestAfterAction_o *v116; // x0
  const MethodInfo *v117; // x2
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
  __int64 v129; // x0
  __int64 v130; // x0
  __int64 v131; // x0

  if ( (byte_42E85EC & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)command, (_DWORD)commandParam, errorMessage);
    sub_B5D5C4(&BlankEarthQuestAfterAction_CommandParam_TypeInfo, v11, v12, v13);
    byte_42E85EC = 1;
  }
  *errorMessage = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)errorMessage,
    0LL,
    (System_String_array **)commandParam,
    (System_String_array **)errorMessage,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  v14 = (BlankEarthQuestAfterAction_CommandParam_o *)sub_B5D694(BlankEarthQuestAfterAction_CommandParam_TypeInfo);
  BlankEarthQuestAfterAction_CommandParam___ctor(v14, 0LL);
  *commandParam = v14;
  sub_B5D560((BattleServantConfConponent_o *)commandParam, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
  if ( !command )
    sub_B5D69C(v21, v22);
  id = command->fields.id;
  v24 = 1;
  v25 = id - 100;
  if ( (unsigned int)(id - 100) > 0xE )
  {
    switch ( id )
    {
      case 300:
        param = command->fields.param;
        v38 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
        if ( !v38 )
          sub_B5D69C(0LL, 0LL);
        if ( !v38->max_length )
        {
          v122 = sub_B5D6C8(v38);
          sub_B5D668(v122, 0LL);
        }
        v38->m_Items[2] = 44;
        if ( !param )
          sub_B5D69C(v38, v38);
        v39 = System_String__Split(param, v38, 0LL);
        v41 = v39;
        if ( !v39 )
          sub_B5D69C(0LL, v40);
        max_length = v39->max_length;
        if ( max_length <= 0 )
          return 0;
        v43 = *commandParam;
        if ( max_length >= 3 )
        {
          v44 = System_Single__Parse(v39->m_Items[2], 0LL) * 0.001;
          if ( !v43 )
            goto LABEL_104;
        }
        else
        {
          v44 = 0.5;
          if ( !v43 )
LABEL_104:
            sub_B5D69C(v39, v40);
        }
        v43->fields.time = v44;
        v101 = *commandParam;
        if ( (int)v41->max_length >= 2 )
        {
          v102 = System_Int32__Parse(v41->m_Items[1], 0LL);
          if ( !v101 )
            goto LABEL_107;
        }
        else
        {
          v102 = 15LL;
          if ( !v101 )
LABEL_107:
            sub_B5D69C(v102, v40);
        }
        v101->fields.easeType = v102;
        if ( !v41->max_length )
        {
          v126 = sub_B5D6C8(v102);
          sub_B5D668(v126, 0LL);
        }
        v26 = *commandParam;
        v114 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v41->m_Items[0], 0LL);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v114, (int32_t)v114, v115);
        v36 = (System_Int32_array **)SpotEntity;
        if ( !v26 )
          sub_B5D69C(SpotEntity, SpotEntity);
LABEL_8:
        v26->fields.blankEarthSpotEntity = SpotEntity;
        sub_B5D560((BattleServantConfConponent_o *)&v26->fields, v36, v30, v31, v32, v33, v34, v35);
        return 1;
      case 301:
        return v24;
      case 302:
        v72 = command->fields.param;
        v73 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
        if ( !v73 )
          sub_B5D69C(0LL, 0LL);
        if ( !v73->max_length )
        {
          v123 = sub_B5D6C8(v73);
          sub_B5D668(v123, 0LL);
        }
        v73->m_Items[2] = 44;
        if ( !v72 )
          sub_B5D69C(v73, v73);
        v74 = System_String__Split(v72, v73, 0LL);
        v76 = v74;
        if ( !v74 )
          sub_B5D69C(0LL, v75);
        v77 = v74->max_length;
        if ( v77 <= 0 )
          return 0;
        v78 = *commandParam;
        if ( v77 >= 3 )
        {
          v79 = System_Single__Parse(v74->m_Items[2], 0LL) * 0.001;
          if ( !v78 )
            goto LABEL_103;
        }
        else
        {
          v79 = 0.5;
          if ( !v78 )
LABEL_103:
            sub_B5D69C(v74, v75);
        }
        v78->fields.time = v79;
        v99 = *commandParam;
        if ( (int)v76->max_length >= 2 )
        {
          v100 = System_Int32__Parse(v76->m_Items[1], 0LL);
          if ( !v99 )
            goto LABEL_105;
        }
        else
        {
          v100 = 15LL;
          if ( !v99 )
LABEL_105:
            sub_B5D69C(v100, v75);
        }
        v99->fields.easeType = v100;
        if ( !v76->max_length )
        {
          v125 = sub_B5D6C8(v100);
          sub_B5D668(v125, 0LL);
        }
        v103 = *commandParam;
        v104 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v76->m_Items[0], 0LL);
        GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v104, (int32_t)v104, v105);
        v113 = (System_Int32_array **)GimmickEntity;
        if ( !v103 )
          sub_B5D69C(GimmickEntity, GimmickEntity);
        goto LABEL_78;
      case 303:
        v80 = command->fields.param;
        v81 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
        if ( !v81 )
          sub_B5D69C(0LL, 0LL);
        if ( !v81->max_length )
        {
          v124 = sub_B5D6C8(v81);
          sub_B5D668(v124, 0LL);
        }
        v81->m_Items[2] = 44;
        if ( !v80 )
          sub_B5D69C(v81, v81);
        v82 = System_String__Split(v80, v81, 0LL);
        v84 = v82;
        if ( !v82 )
          sub_B5D69C(0LL, v83);
        if ( (int)v82->max_length <= 3 )
          return 0;
        v85 = *commandParam;
        v88 = System_Single__Parse(v82->m_Items[2], 0LL);
        if ( !v85 )
          sub_B5D69C(v86, v87);
        v85->fields.time = v88 * 0.001;
        v89 = *commandParam;
        if ( !*commandParam )
          sub_B5D69C(v86, v87);
        if ( v89->fields.time < 0.0 )
        {
          v89->fields.time = 0.5;
          v89 = *commandParam;
        }
        if ( !v84->max_length )
        {
          v128 = sub_B5D6C8(v86);
          sub_B5D668(v128, 0LL);
        }
        v91 = System_Single__Parse(v84->m_Items[0], 0LL);
        if ( v84->max_length <= 1 )
        {
          v129 = sub_B5D6C8(v90);
          sub_B5D668(v129, 0LL);
        }
        v92 = v91;
        v95 = System_Single__Parse(v84->m_Items[1], 0LL);
        if ( !v89 )
          sub_B5D69C(v93, v94);
        v89->fields.latLongVector.fields.x = v92;
        v89->fields.latLongVector.fields.y = v95;
        if ( v84->max_length <= 3 )
        {
          v130 = sub_B5D6C8(v93);
          sub_B5D668(v130, 0LL);
        }
        v96 = *commandParam;
        v97 = System_Int32__Parse(v84->m_Items[3], 0LL);
        if ( !v96 )
          sub_B5D69C(v97, v98);
        v96->fields.easeType = v97;
        return 1;
      default:
        if ( (id & 0xFFFFFFFC) != 400 )
          return 1;
        v64 = command->fields.param;
        v65 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
        if ( !v65 )
          sub_B5D69C(0LL, 0LL);
        if ( !v65->max_length )
        {
          v127 = sub_B5D6C8(v65);
          sub_B5D668(v127, 0LL);
        }
        v65->m_Items[2] = 44;
        if ( !v64 )
          sub_B5D69C(v65, v65);
        v66 = System_String__Split(v64, v65, 0LL);
        v68 = v66;
        if ( !v66 )
          sub_B5D69C(0LL, v67);
        v69 = v66->max_length;
        if ( v69 <= 0 )
          return 0;
        v70 = *commandParam;
        if ( v69 == 1 )
        {
          v71 = 0;
          if ( !v70 )
LABEL_122:
            sub_B5D69C(v66, v67);
        }
        else
        {
          v66 = (System_String_array *)System_Int32__Parse(v66->m_Items[1], 0LL);
          v71 = (int)v66 > 0;
          if ( !v70 )
            goto LABEL_122;
        }
        v70->fields.noWait = v71;
        if ( !v68->max_length )
        {
          v131 = sub_B5D6C8(v66);
          sub_B5D668(v131, 0LL);
        }
        v103 = *commandParam;
        v116 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v68->m_Items[0], 0LL);
        GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v116, (int32_t)v116, v117);
        v113 = (System_Int32_array **)GimmickEntity;
        if ( !v103 )
          sub_B5D69C(GimmickEntity, GimmickEntity);
LABEL_78:
        v103->fields.blankEarthGimmickEntity = GimmickEntity;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v103->fields.blankEarthGimmickEntity,
          v113,
          v107,
          v108,
          v109,
          v110,
          v111,
          v112);
        return 1;
    }
  }
  if ( ((1 << v25) & 0x23E8) == 0 )
  {
    if ( ((1 << v25) & 0x1C07) == 0 )
    {
      v45 = command->fields.param;
      v46 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !v46 )
        sub_B5D69C(0LL, 0LL);
      if ( !v46->max_length )
      {
        v119 = sub_B5D6C8(v46);
        sub_B5D668(v119, 0LL);
      }
      v46->m_Items[2] = 44;
      if ( !v45 )
        sub_B5D69C(v46, v46);
      v47 = System_String__Split(v45, v46, 0LL);
      v49 = v47;
      if ( !v47 )
        sub_B5D69C(0LL, v48);
      if ( !v47->max_length )
      {
        v120 = sub_B5D6C8(v47);
        sub_B5D668(v120, 0LL);
      }
      v50 = *commandParam;
      v51 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v47->m_Items[0], 0LL);
      v53 = (System_Int32_array **)BlankEarthQuestAfterAction__GetSpotEntity(v51, (int32_t)v51, v52);
      if ( !v50 )
        sub_B5D69C(v53, v53);
      v50->fields.blankEarthSpotEntity = (struct BlankEarthSpotEntity_o *)v53;
      sub_B5D560((BattleServantConfConponent_o *)&v50->fields, v53, v54, v55, v56, v57, v58, v59);
      if ( v49->max_length <= 1 )
      {
        v121 = sub_B5D6C8(v60);
        sub_B5D668(v121, 0LL);
      }
      v61 = *commandParam;
      v62 = System_Int32__Parse(v49->m_Items[1], 0LL);
      if ( !v61 )
        sub_B5D69C(v62, v63);
      v61->fields.intValue = v62;
      return 1;
    }
    v26 = *commandParam;
    v27 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0LL);
    SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v27, (int32_t)v27, v28);
    v36 = (System_Int32_array **)SpotEntity;
    if ( !v26 )
      sub_B5D69C(SpotEntity, SpotEntity);
    goto LABEL_8;
  }
  return v24;
}


bool __fastcall BlankEarthQuestAfterAction__UpdateAnim(
        BlankEarthQuestAfterAction_o *this,
        QuestAfterAction_o *that,
        QuestAfterAction_Command_o *command,
        System_Action_o *endAnimCallback,
        bool *isQuickUpdate,
        const MethodInfo *method)
{
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
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  __int64 v31; // x22
  TerminalSceneComponent_c *IsGimmickDispCommand; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Action_o **v40; // x20
  BlankEarthQuestAfterAction_o *v41; // x0
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x4
  bool IsBlankEarthActive; // w8
  int v45; // w2
  __int64 v46; // x3
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  int32_t id; // w23
  BlankEarth_o *blankEarth; // x21
  int v51; // w8
  bool v52; // w19
  int32_t v53; // w2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v54; // x19
  struct BlankEarthGimmickEntity_o *blankEarthGimmickEntity; // x8
  UnityEngine_Object_o *EarthGimmick; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v57; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v58; // x19
  bool IsNoWaitCommand; // w22
  System_String_o *v61; // [xsp+0h] [xbp-40h] BYREF
  BlankEarthQuestAfterAction_CommandParam_o *commandParam; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E85EB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__,
      (_DWORD)that,
      (_DWORD)command,
      endAnimCallback);
    sub_B5D5C4(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__, v19, v20, v21);
    sub_B5D5C4(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__, v22, v23, v24);
    sub_B5D5C4(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__, v25, v26, v27);
    sub_B5D5C4(&BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo, v28, v29, v30);
    byte_42E85EB = 1;
  }
  v61 = 0LL;
  commandParam = 0LL;
  v31 = sub_B5D694(BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
  BlankEarthQuestAfterAction___c__DisplayClass1_0___ctor((BlankEarthQuestAfterAction___c__DisplayClass1_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_66;
  *(_QWORD *)(v31 + 16) = endAnimCallback;
  v40 = (System_Action_o **)(v31 + 16);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v31 + 16),
    (System_Int32_array **)endAnimCallback,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  *isQuickUpdate = 0;
  IsBlankEarthActive = BlankEarthQuestAfterAction__IsBlankEarthActive(v41, v42);
  LOBYTE(IsGimmickDispCommand) = 0;
  if ( IsBlankEarthActive )
  {
    if ( !BlankEarthQuestAfterAction__TryGetParam(this, command, &commandParam, &v61, v43) )
    {
      ActionExtensions__Call(*v40, 0LL);
LABEL_33:
      LOBYTE(IsGimmickDispCommand) = 1;
      return (char)IsGimmickDispCommand;
    }
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v33, v45, v46);
      byte_42E4B1E = 1;
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
      sub_B5D69C(IsGimmickDispCommand, v33);
    id = command->fields.id;
    blankEarth = mTerminalList->fields.blankEarth;
    IsGimmickDispCommand = 0LL;
    if ( (unsigned int)(id - 100) > 0xE )
    {
      switch ( id )
      {
        case 300:
          v54 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v54,
            (Il2CppObject *)v31,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__,
            (const MethodInfo_258B320 *)Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__);
          if ( !commandParam || !blankEarth )
            goto LABEL_66;
          BlankEarth__RotateEarthTowardsSpot(
            blankEarth,
            commandParam->fields.blankEarthSpotEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v54,
            0LL,
            0LL);
          goto LABEL_33;
        case 301:
          return (char)IsGimmickDispCommand;
        case 302:
          v57 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v57,
            (Il2CppObject *)v31,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__,
            (const MethodInfo_258B320 *)Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__);
          if ( !commandParam || !blankEarth )
            goto LABEL_66;
          BlankEarth__RotateEarthTowardsGimmick(
            blankEarth,
            commandParam->fields.blankEarthGimmickEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v57,
            0LL);
          goto LABEL_33;
        case 303:
          v58 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v58,
            (Il2CppObject *)v31,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__,
            (const MethodInfo_258B320 *)Method_System_Action_BlankEarth_QAARotateEarthResponse___ctor__);
          if ( !commandParam || !blankEarth )
            goto LABEL_66;
          BlankEarth__RotateEarthByLatLong(
            blankEarth,
            commandParam->fields.latLongVector,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v58,
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
            v33 = 3LL;
          else
            v33 = 2LL;
          if ( IsNoWaitCommand )
          {
            if ( !EarthGimmick )
              goto LABEL_66;
            BlankEarthGimmickComponent__SetDispAnimQuick(
              (BlankEarthGimmickComponent_o *)EarthGimmick,
              (unsigned __int8)IsGimmickDispCommand & 1,
              0LL);
          }
          else
          {
            if ( !commandParam )
              goto LABEL_66;
            if ( !commandParam->fields.noWait )
            {
              if ( EarthGimmick )
              {
                BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v33, *v40, 0LL);
                goto LABEL_33;
              }
              goto LABEL_66;
            }
            if ( !EarthGimmick )
              goto LABEL_66;
            BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v33, 0LL, 0LL);
          }
          LOBYTE(IsGimmickDispCommand) = 1;
          *isQuickUpdate = 1;
          break;
      }
    }
    else
    {
      v51 = 1 << (id - 100);
      if ( (v51 & 0x23E8) == 0 )
      {
        if ( (v51 & 0x1C07) != 0 )
        {
          v52 = QuestAfterAction__IsSpotChangeDispQuicklyCommand(id, 0LL);
          IsGimmickDispCommand = (TerminalSceneComponent_c *)QuestAfterAction__IsSpotHideCommand(id, 0LL);
          if ( ((unsigned __int8)IsGimmickDispCommand & 1) != 0 )
          {
            v53 = 0;
          }
          else
          {
            IsGimmickDispCommand = (TerminalSceneComponent_c *)QuestAfterAction__IsSpotGrayCommand(id, 0LL);
            if ( ((unsigned __int8)IsGimmickDispCommand & 1) != 0 )
              v53 = 2;
            else
              v53 = 1;
          }
          if ( commandParam && blankEarth )
          {
            BlankEarth__RevealEarthPoint(blankEarth, commandParam->fields.blankEarthSpotEntity, v53, v52, *v40, 0LL);
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
          *v40,
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