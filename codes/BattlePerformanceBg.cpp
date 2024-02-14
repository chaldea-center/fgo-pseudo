void __fastcall BattlePerformanceBg___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4216C00 & 1) == 0 )
  {
    sub_B0D8A4(&BattlePerformanceBg_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_18973/*"front"*/, v8);
    byte_4216C00 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattlePerformanceBg_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18973/*"front"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18973/*"front"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall BattlePerformanceBg___ctor(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7

  if ( (byte_4216BFF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo, v8);
    sub_B0D8A4(&string_TypeInfo, v9);
    byte_4216BFF = 1;
  }
  *(_QWORD *)&this->fields.loadbgno = -1LL;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadedChangeBgList = (struct System_Collections_Generic_List_string__o *)v10;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.loadedChangeBgList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.initLoadedBgPath = static_fields->Empty;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.initLoadedBgPath,
    (System_Int32_array **)Empty,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.bgSpShadowList = (struct System_Collections_Generic_List_string__o *)v27;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.bgSpShadowList,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v36 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                        System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo,
                                                                                        v34,
                                                                                        v35);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v36,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__);
  this->fields.historyBgState = (struct System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__o *)v36;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.historyBgState,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo,
                                                                                                  v43,
                                                                                                  v44);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__);
  this->fields.bgInfoList = (struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *)v45;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.bgInfoList,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformanceBg__AddCallbackOfOnLoadBgFinished(
        BattlePerformanceBg_o *this,
        System_Action_BattlePerformanceBg_ChangedBgArgs__o *callback,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_onLoadBgFinished; // x19
  System_Delegate_o *onLoadBgFinished; // t1
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  BattlePerformanceBg_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4216BFD & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo, callback);
    byte_4216BFD = 1;
  }
  onLoadBgFinished = (System_Delegate_o *)this->fields.onLoadBgFinished;
  p_onLoadBgFinished = (BattleServantConfConponent_o *)&this->fields.onLoadBgFinished;
  v7 = (System_Int32_array **)System_Delegate__Combine(onLoadBgFinished, (System_Delegate_o *)callback, 0LL);
  if ( v7 && *v7 != (System_Int32_array *)System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo )
  {
    sub_B0DC70(v7);
    BattlePerformanceBg__ResetBgAnimation(v14, v15);
  }
  else
  {
    p_onLoadBgFinished->klass = (BattleServantConfConponent_c *)v7;
    sub_B0D840(p_onLoadBgFinished, v7, v8, v9, v10, v11, v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__AddChangeBgInfo(
        BattlePerformanceBg_o *this,
        int32_t No,
        int32_t tp,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool changeDirect,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  float v15; // s11
  float v16; // s12
  float v17; // s13
  __int64 v21; // x1
  BattlePerformanceBg_BgInfo_o *v22; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x25
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *bgInfoList; // x0
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v15 = pos.fields.z;
  v16 = pos.fields.y;
  v17 = pos.fields.x;
  if ( (byte_4216BF0 & 1) == 0 )
  {
    sub_B0D8A4(&BattlePerformanceBg_BgInfo_TypeInfo, *(_QWORD *)&No);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__, v21);
    byte_4216BF0 = 1;
  }
  v22 = (BattlePerformanceBg_BgInfo_o *)sub_B0D974(BattlePerformanceBg_BgInfo_TypeInfo, *(_QWORD *)&No, *(_QWORD *)&tp);
  v25.fields.x = v17;
  v25.fields.y = v16;
  v25.fields.z = v15;
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = z;
  v23 = (EventMissionProgressRequest_Argument_ProgressData_o *)v22;
  BattlePerformanceBg_BgInfo___ctor(v22, No, tp, v25, v26, changeDirect, parentCamera, callback, 0LL);
  bgInfoList = this->fields.bgInfoList;
  if ( !bgInfoList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bgInfoList,
    v23,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__ChangeBg(
        BattlePerformanceBg_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *curBg,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool changeDirect,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x6

  if ( !curBg )
    sub_B0D97C(this);
  BattlePerformanceBg__changeBg(
    this,
    *((_DWORD *)&curBg->fields.isActive + 1),
    curBg->fields.id,
    pos,
    rot,
    changeDirect,
    parentCamera,
    callback,
    v8);
}


void __fastcall BattlePerformanceBg__ClearCallbackOfOnLoadBgFinished(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.onLoadBgFinished = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.onLoadBgFinished, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall BattlePerformanceBg__DebugPrint(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int bgRoot; // w8
  int i; // w9
  __int64 v5; // x0

  if ( !data || (this = (BattlePerformanceBg_o *)AssetData__GetObjectNameList(data, 0LL)) == 0LL )
    sub_B0D97C(this);
  bgRoot = (int)this->fields.bgRoot;
  if ( bgRoot >= 1 )
  {
    for ( i = 0; i < bgRoot; ++i )
    {
      if ( i >= (unsigned int)bgRoot )
      {
        v5 = sub_B0D9A8(this);
        sub_B0D948(v5, 0LL);
      }
    }
  }
}


bool __fastcall BattlePerformanceBg__ExistsLoadBgInfo(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  BattlePerformanceBg_o *v2; // x19
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *bgInfoList; // x8

  v2 = this;
  if ( (byte_4216BF1 & 1) == 0 )
  {
    this = (BattlePerformanceBg_o *)sub_B0D8A4(
                                      &Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Count__,
                                      method);
    byte_4216BF1 = 1;
  }
  bgInfoList = v2->fields.bgInfoList;
  if ( !bgInfoList )
    sub_B0D97C(this);
  return bgInfoList->fields._size > 0;
}


BattlePerformanceBg_BgInfo_o *__fastcall BattlePerformanceBg__FetchBgInfo(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL8 exists; // x0
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *bgInfoList; // x20
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *v6; // x0
  BattlePerformanceBg_BgInfo_o *v7; // x19

  if ( (byte_4216BF2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Item__, v3);
    byte_4216BF2 = 1;
  }
  exists = BattlePerformanceBg__ExistsLoadBgInfo(this, method);
  if ( !exists )
    return 0LL;
  bgInfoList = this->fields.bgInfoList;
  if ( !bgInfoList )
    sub_B0D97C(exists);
  v6 = this->fields.bgInfoList;
  if ( !bgInfoList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v7 = bgInfoList->fields._items->m_Items[0];
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v6,
    0,
    (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__);
  return v7;
}


BattleBgComponent_o *__fastcall BattlePerformanceBg__FindComponentByKey(
        BattlePerformanceBg_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2
  BattleBgComponent_array *BattleBgComponents; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x20

  if ( (byte_4216BFA & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Find_BattleBgComponent___, key);
    sub_B0D8A4(&Method_System_Func_BattleBgComponent__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_BattleBgComponent__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_BattlePerformanceBg___c__DisplayClass67_0__FindComponentByKey_b__0__, v7);
    sub_B0D8A4(&BattlePerformanceBg___c__DisplayClass67_0_TypeInfo, v8);
    byte_4216BFA = 1;
  }
  v9 = sub_B0D974(BattlePerformanceBg___c__DisplayClass67_0_TypeInfo, key, method);
  BattlePerformanceBg___c__DisplayClass67_0___ctor((BattlePerformanceBg___c__DisplayClass67_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  *(_QWORD *)(v9 + 16) = key;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)key, v11, v12, v13, v14, v15, v16);
  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v17);
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BattleBgComponent__bool__TypeInfo,
                                                                             v19,
                                                                             v20);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v9,
    Method_BattlePerformanceBg___c__DisplayClass67_0__FindComponentByKey_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_BattleBgComponent__bool___ctor__);
  return (BattleBgComponent_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                  (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)BattleBgComponents,
                                  (System_Func_T__bool__o *)v21,
                                  (const MethodInfo_170767C *)Method_BasicHelper_Find_BattleBgComponent___);
}


System_String_o *__fastcall BattlePerformanceBg__GetAssetPass(int32_t bgNo, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = bgNo;
  if ( (byte_4216BE4 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2814/*"Bg/"*/, method);
    byte_4216BE4 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_43849904((System_String_o *)StringLiteral_2814/*"Bg/"*/, v2, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Texture2D_o *__fastcall BattlePerformanceBg__GetShadowTexture(
        BattlePerformanceBg_o *this,
        int32_t shadowId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  AssetData_o *BgAssetData; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = shadowId;
  if ( (byte_4216BF8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, *(_QWORD *)&shadowId);
    sub_B0D8A4(&StringLiteral_22165/*"shadow_"*/, v4);
    byte_4216BF8 = 1;
  }
  BgAssetData = this->fields.BgAssetData;
  if ( !BgAssetData )
    return 0LL;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_43849904((System_String_o *)StringLiteral_22165/*"shadow_"*/, v6, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                      BgAssetData,
                                      v7,
                                      (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__LoadBgSpShadowEffect(
        BattlePerformanceBg_o *this,
        int32_t no,
        int32_t tp,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x20
  BattleBgMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int32_t BgSpecialShadowEffectId; // w0
  int32_t v26; // w21
  System_String_o *v27; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  AssetLoader_LoadEndDataHandler_o *v30; // x21
  System_String_o *effectPath; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4216BED & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&no);
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, v9);
    sub_B0D8A4(&Method_DataManager_GetMaster_BattleBgMaster___, v10);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v13);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_B0D8A4(&Method_BattlePerformanceBg___c__DisplayClass46_0__LoadBgSpShadowEffect_b__0__, v15);
    sub_B0D8A4(&BattlePerformanceBg___c__DisplayClass46_0_TypeInfo, v16);
    byte_4216BED = 1;
  }
  effectPath = 0LL;
  v17 = sub_B0D974(BattlePerformanceBg___c__DisplayClass46_0_TypeInfo, *(_QWORD *)&no, *(_QWORD *)&tp);
  BattlePerformanceBg___c__DisplayClass46_0___ctor((BattlePerformanceBg___c__DisplayClass46_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_22;
  *(_QWORD *)(v17 + 16) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v17 + 16),
    (System_Int32_array **)finishCallback,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BattleBgMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  BgSpecialShadowEffectId = BattleBgMaster__GetBgSpecialShadowEffectId(Master_WarQuestSelectionMaster, no, tp, 0, 0LL);
  if ( BgSpecialShadowEffectId <= 0 )
    goto LABEL_15;
  v26 = BgSpecialShadowEffectId;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  if ( !BattleEffectUtility__TryGetBattleCommonEffectPath(&effectPath, v26, 0LL) )
    goto LABEL_15;
  Master_WarQuestSelectionMaster = (BattleBgMaster_o *)this->fields.bgSpShadowList;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Master_WarQuestSelectionMaster,
         (WarBoardManager_TaskList_o *)effectPath,
         (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
LABEL_15:
    ActionExtensions__Call(*(System_Action_o **)(v17 + 16), 0LL);
    return;
  }
  Master_WarQuestSelectionMaster = (BattleBgMaster_o *)this->fields.bgSpShadowList;
  if ( !Master_WarQuestSelectionMaster )
LABEL_22:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Master_WarQuestSelectionMaster,
    (EventMissionProgressRequest_Argument_ProgressData_o *)effectPath,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
  v27 = effectPath;
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v28, v29);
  AssetLoader_LoadEndDataHandler___ctor(
    v30,
    (Il2CppObject *)v17,
    Method_BattlePerformanceBg___c__DisplayClass46_0__LoadBgSpShadowEffect_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v27, v30, 1, 0LL);
}


void __fastcall BattlePerformanceBg__OnEndBgLoad(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  BattlePerformanceBg_BgInfo_o *BgInfo; // x0
  const MethodInfo *v5; // x6

  this->fields.IsLoading = 0;
  if ( BattlePerformanceBg__ExistsLoadBgInfo(this, method) )
  {
    BgInfo = BattlePerformanceBg__FetchBgInfo(this, v3);
    if ( BgInfo )
      BattlePerformanceBg__changeBg(
        this,
        BgInfo->fields.bgNo,
        BgInfo->fields.tp,
        BgInfo->fields.pos,
        BgInfo->fields.rot,
        BgInfo->fields.changeDirect,
        BgInfo->fields.parentCamera,
        BgInfo->fields.callback,
        v5);
  }
}


void __fastcall BattlePerformanceBg__ReleaseBg(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct UnityEngine_GameObject_o **p_bgobject; // x20
  UnityEngine_Object_o *bgobject; // x21
  UnityEngine_Object_o *frontobject; // x21
  UnityEngine_Object_o *v7; // x21
  UnityEngine_Object_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Object_o *actionCamera; // x20
  BattleActionCamera_o *v16; // x0
  struct UnityEngine_GameObject_o **p_frontobject; // x20
  UnityEngine_Object_o *v18; // x21
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_4216BE7 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216BE7 = 1;
  }
  BattlePerformanceBg__saveHistoryBgState(this, 0LL, v2);
  p_bgobject = &this->fields.bgobject;
  bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
    goto LABEL_11;
  frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL) )
  {
LABEL_11:
    v7 = (UnityEngine_Object_o *)*p_bgobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
    {
      v8 = (UnityEngine_Object_o *)*p_bgobject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v8, 0LL);
      *p_bgobject = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.bgobject, 0LL, v9, v10, v11, v12, v13, v14);
    }
    actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(actionCamera, 0LL, 0LL) )
    {
      v16 = this->fields.actionCamera;
      if ( !v16 )
        sub_B0D97C(0LL);
      BattleActionCamera__stopCameraAnimation(v16, 0LL);
    }
    p_frontobject = &this->fields.frontobject;
    v18 = (UnityEngine_Object_o *)this->fields.frontobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
    {
      v20 = (UnityEngine_Object_o *)*p_frontobject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v20, 0LL);
      *p_frontobject = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.frontobject, 0LL, v21, v22, v23, v24, v25, v26);
    }
    BattlePerformanceBg__ReleaseBg_28400844(this, this->fields.nowBgId, v19);
  }
}


void __fastcall BattlePerformanceBg__ReleaseBgSpShadowEffect(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_string__o *bgSpShadowList; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4216BEB & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    byte_4216BEB = 1;
  }
  memset(&v10, 0, sizeof(v10));
  bgSpShadowList = this->fields.bgSpShadowList;
  if ( !bgSpShadowList )
    goto LABEL_12;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bgSpShadowList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v10.fields.current;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  bgSpShadowList = this->fields.bgSpShadowList;
  if ( !bgSpShadowList )
LABEL_12:
    sub_B0D97C(bgSpShadowList);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)bgSpShadowList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_string__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__ReleaseBg_28400844(
        BattlePerformanceBg_o *this,
        int32_t no,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *AssetPass; // x0
  WarBoardManager_TaskList_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_4216BEA & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&no);
    sub_B0D8A4(&BattlePerformanceBg_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Remove__, v7);
    byte_4216BEA = 1;
  }
  if ( (BYTE3(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
  }
  AssetPass = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)BattlePerformanceBg__GetAssetPass(
                                                                               no,
                                                                               *(const MethodInfo **)&no);
  if ( !this->fields.loadedChangeBgList )
    goto LABEL_14;
  v9 = (WarBoardManager_TaskList_o *)AssetPass;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedChangeBgList,
         (WarBoardManager_TaskList_o *)AssetPass,
         (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    AssetPass = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedChangeBgList;
    if ( AssetPass )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        AssetPass,
        v9,
        (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_10;
    }
LABEL_14:
    sub_B0D97C(AssetPass);
  }
LABEL_10:
  this->fields.BgAssetData = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.BgAssetData, 0LL, v10, v11, v12, v13, v14, v15);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)v9, 0LL);
}


void __fastcall BattlePerformanceBg__ReleaseChangeBgAssets(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_string__o *loadedChangeBgList; // x0
  Il2CppObject *current; // x20
  AssetData_o *AssetStorage; // x20
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4216BE9 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    byte_4216BE9 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  loadedChangeBgList = this->fields.loadedChangeBgList;
  if ( !loadedChangeBgList )
    goto LABEL_16;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)loadedChangeBgList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v11.fields.current;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)current, 0LL);
    if ( AssetStorage )
    {
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAsset_29516400(AssetStorage, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  loadedChangeBgList = this->fields.loadedChangeBgList;
  if ( !loadedChangeBgList )
LABEL_16:
    sub_B0D97C(loadedChangeBgList);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)loadedChangeBgList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_string__Clear__);
}


void __fastcall BattlePerformanceBg__ResetBgAnimation(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBgComponent_array *BattleBgComponents; // x0
  __int64 v5; // x8
  BattleBgComponent_array *v6; // x19
  unsigned __int64 v7; // x21
  UnityEngine_Object_o *v8; // x20
  __int64 v9; // x0

  if ( (byte_4216BFE & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216BFE = 1;
  }
  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v2);
  if ( !BattleBgComponents )
LABEL_16:
    sub_B0D97C(BattleBgComponents);
  v5 = *(_QWORD *)&BattleBgComponents->max_length;
  v6 = BattleBgComponents;
  if ( (int)v5 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v5 )
      {
        v9 = sub_B0D9A8(BattleBgComponents);
        sub_B0D948(v9, 0LL);
      }
      v8 = (UnityEngine_Object_o *)v6->m_Items[v7];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      BattleBgComponents = (BattleBgComponent_array *)UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
      if ( ((unsigned __int8)BattleBgComponents & 1) == 0 )
      {
        if ( !v8 )
          goto LABEL_16;
        BattleBgComponent__ResetAnimation((BattleBgComponent_o *)v8, 0LL);
      }
      LODWORD(v5) = v6->max_length;
      ++v7;
    }
    while ( (__int64)v7 < (int)v5 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__UpdateColor(
        BattlePerformanceBg_o *this,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  UnityEngine_RenderSettings__set_ambientLight(color, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__changeBg(
        BattlePerformanceBg_o *this,
        int32_t No,
        int32_t tp,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool changeDirect,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v9; // x7
  float z; // s8
  float y; // s9
  float x; // s10
  float v16; // s11
  float v17; // s12
  float v18; // s13
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  System_Action_o **p_EndCallback; // x25
  const MethodInfo *v33; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Object_array *v42; // x20
  __int64 v43; // x0
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x21
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x1
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x21
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x1
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **v93; // x1
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Int32_array **v100; // x1
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Int32_array **v107; // x1
  System_Collections_Hashtable_o *v108; // x0
  __int64 v109; // x0
  __int64 v110; // x0
  int v111; // [xsp+Ch] [xbp-94h] BYREF
  UnityEngine_Color_o black; // [xsp+10h] [xbp-90h] BYREF
  struct UnityEngine_Color_o tmpcolor; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v16 = pos.fields.z;
  v17 = pos.fields.y;
  v18 = pos.fields.x;
  if ( (byte_4216BF3 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Color_TypeInfo, *(_QWORD *)&No);
    sub_B0D8A4(&object___TypeInfo, v22);
    sub_B0D8A4(&float_TypeInfo, v23);
    sub_B0D8A4(&StringLiteral_18972/*"from"*/, v24);
    sub_B0D8A4(&StringLiteral_18401/*"endChangeColor"*/, v25);
    sub_B0D8A4(&StringLiteral_15106/*"UpdateColor"*/, v26);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v27);
    sub_B0D8A4(&StringLiteral_21341/*"onupdate"*/, v28);
    sub_B0D8A4(&StringLiteral_22790/*"to"*/, v29);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v30);
    sub_B0D8A4(&iTween_TypeInfo, v31);
    byte_4216BF3 = 1;
  }
  if ( this->fields.IsLoading )
  {
    v114.fields.x = v18;
    v114.fields.y = v17;
    v114.fields.z = v16;
    v115.fields.x = x;
    v115.fields.y = y;
    v115.fields.z = z;
    BattlePerformanceBg__AddChangeBgInfo(this, No, tp, v114, v115, changeDirect, parentCamera, callback, method);
    return;
  }
  this->fields.EndCallback = callback;
  p_EndCallback = &this->fields.EndCallback;
  this->fields.IsLoading = 1;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.EndCallback,
    (System_Int32_array **)callback,
    *(System_String_array ***)&tp,
    (System_String_array **)changeDirect,
    (System_Boolean_array **)parentCamera,
    (System_Int32_array **)callback,
    (System_Int32_array *)method,
    v9);
  if ( this->fields.fade && !changeDirect )
  {
    if ( *p_EndCallback )
      System_Action__Invoke(*p_EndCallback, 0LL);
    BattlePerformanceBg__OnEndBgLoad(this, v33);
    return;
  }
  this->fields.loadbgno = No;
  this->fields.loadbgType = tp;
  this->fields.pos.fields.x = v18;
  this->fields.pos.fields.y = v17;
  this->fields.pos.fields.z = v16;
  this->fields.rot.fields.x = x;
  this->fields.rot.fields.y = y;
  this->fields.rot.fields.z = z;
  this->fields.changeDirect = changeDirect;
  this->fields.parentCamera = parentCamera;
  this->fields.fade = 1;
  if ( changeDirect )
  {
    BattlePerformanceBg__endChangeColor(this, v33);
    return;
  }
  this->fields.tmpcolor = UnityEngine_RenderSettings__get_ambientLight(0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v35 = sub_B0D8BC(object___TypeInfo, 10LL);
  if ( !v35 )
    sub_B0D97C(0LL);
  v42 = (System_Object_array *)v35;
  v43 = StringLiteral_18972/*"from"*/;
  if ( StringLiteral_18972/*"from"*/ )
  {
    v43 = sub_B0D964(StringLiteral_18972/*"from"*/, v42->obj.klass->_1.element_class);
    if ( !v43 )
      goto LABEL_62;
    v44 = (System_Int32_array **)StringLiteral_18972/*"from"*/;
  }
  else
  {
    v44 = 0LL;
  }
  if ( !v42->max_length )
    goto LABEL_61;
  v42->m_Items[0] = (Il2CppObject *)v44;
  sub_B0D840((BattleServantConfConponent_o *)v42->m_Items, v44, v36, v37, v38, v39, v40, v41);
  tmpcolor = this->fields.tmpcolor;
  v43 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor);
  v51 = (System_Int32_array **)v43;
  if ( v43 )
  {
    v43 = sub_B0D964(v43, v42->obj.klass->_1.element_class);
    if ( !v43 )
      goto LABEL_62;
  }
  if ( v42->max_length <= 1 )
    goto LABEL_61;
  v42->m_Items[1] = (Il2CppObject *)v51;
  sub_B0D840((BattleServantConfConponent_o *)&v42->m_Items[1], v51, v45, v46, v47, v48, v49, v50);
  v43 = StringLiteral_22790/*"to"*/;
  if ( StringLiteral_22790/*"to"*/ )
  {
    v43 = sub_B0D964(StringLiteral_22790/*"to"*/, v42->obj.klass->_1.element_class);
    if ( !v43 )
      goto LABEL_62;
    v58 = (System_Int32_array **)StringLiteral_22790/*"to"*/;
  }
  else
  {
    v58 = 0LL;
  }
  if ( v42->max_length <= 2 )
    goto LABEL_61;
  v42->m_Items[2] = (Il2CppObject *)v58;
  sub_B0D840((BattleServantConfConponent_o *)&v42->m_Items[2], v58, v52, v53, v54, v55, v56, v57);
  black = UnityEngine_Color__get_black(0LL);
  v43 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &black);
  v65 = (System_Int32_array **)v43;
  if ( v43 )
  {
    v43 = sub_B0D964(v43, v42->obj.klass->_1.element_class);
    if ( !v43 )
      goto LABEL_62;
  }
  if ( v42->max_length <= 3 )
    goto LABEL_61;
  v42->m_Items[3] = (Il2CppObject *)v65;
  sub_B0D840((BattleServantConfConponent_o *)&v42->m_Items[3], v65, v59, v60, v61, v62, v63, v64);
  v43 = StringLiteral_22753/*"time"*/;
  if ( StringLiteral_22753/*"time"*/ )
  {
    v43 = sub_B0D964(StringLiteral_22753/*"time"*/, v42->obj.klass->_1.element_class);
    if ( !v43 )
      goto LABEL_62;
    v72 = (System_Int32_array **)StringLiteral_22753/*"time"*/;
  }
  else
  {
    v72 = 0LL;
  }
  if ( v42->max_length <= 4 )
    goto LABEL_61;
  v42->m_Items[4] = (Il2CppObject *)v72;
  sub_B0D840((BattleServantConfConponent_o *)&v42->m_Items[4], v72, v66, v67, v68, v69, v70, v71);
  v111 = 1056964608;
  v43 = j_il2cpp_value_box_0(float_TypeInfo, &v111);
  v79 = (System_Int32_array **)v43;
  if ( v43 )
  {
    v43 = sub_B0D964(v43, v42->obj.klass->_1.element_class);
    if ( !v43 )
    {
LABEL_62:
      v110 = sub_B0D99C(v43);
      sub_B0D948(v110, 0LL);
    }
  }
  if ( v42->max_length <= 5 )
    goto LABEL_61;
  v42->m_Items[5] = (Il2CppObject *)v79;
  sub_B0D840((BattleServantConfConponent_o *)&v42->m_Items[5], v79, v73, v74, v75, v76, v77, v78);
  v43 = StringLiteral_21341/*"onupdate"*/;
  if ( StringLiteral_21341/*"onupdate"*/ )
  {
    v43 = sub_B0D964(StringLiteral_21341/*"onupdate"*/, v42->obj.klass->_1.element_class);
    if ( !v43 )
      goto LABEL_62;
    v86 = (System_Int32_array **)StringLiteral_21341/*"onupdate"*/;
  }
  else
  {
    v86 = 0LL;
  }
  if ( v42->max_length <= 6 )
    goto LABEL_61;
  v42->m_Items[6] = (Il2CppObject *)v86;
  sub_B0D840((BattleServantConfConponent_o *)&v42->m_Items[6], v86, v80, v81, v82, v83, v84, v85);
  v43 = StringLiteral_15106/*"UpdateColor"*/;
  if ( StringLiteral_15106/*"UpdateColor"*/ )
  {
    v43 = sub_B0D964(StringLiteral_15106/*"UpdateColor"*/, v42->obj.klass->_1.element_class);
    if ( !v43 )
      goto LABEL_62;
    v93 = (System_Int32_array **)StringLiteral_15106/*"UpdateColor"*/;
  }
  else
  {
    v93 = 0LL;
  }
  if ( v42->max_length <= 7 )
    goto LABEL_61;
  v42->m_Items[7] = (Il2CppObject *)v93;
  sub_B0D840((BattleServantConfConponent_o *)&v42->m_Items[7], v93, v87, v88, v89, v90, v91, v92);
  v43 = StringLiteral_21332/*"oncomplete"*/;
  if ( StringLiteral_21332/*"oncomplete"*/ )
  {
    v43 = sub_B0D964(StringLiteral_21332/*"oncomplete"*/, v42->obj.klass->_1.element_class);
    if ( !v43 )
      goto LABEL_62;
    v100 = (System_Int32_array **)StringLiteral_21332/*"oncomplete"*/;
  }
  else
  {
    v100 = 0LL;
  }
  if ( v42->max_length <= 8 )
    goto LABEL_61;
  v42->m_Items[8] = (Il2CppObject *)v100;
  sub_B0D840((BattleServantConfConponent_o *)&v42->m_Items[8], v100, v94, v95, v96, v97, v98, v99);
  v43 = StringLiteral_18401/*"endChangeColor"*/;
  if ( StringLiteral_18401/*"endChangeColor"*/ )
  {
    v43 = sub_B0D964(StringLiteral_18401/*"endChangeColor"*/, v42->obj.klass->_1.element_class);
    if ( v43 )
    {
      v107 = (System_Int32_array **)StringLiteral_18401/*"endChangeColor"*/;
      goto LABEL_56;
    }
    goto LABEL_62;
  }
  v107 = 0LL;
LABEL_56:
  if ( v42->max_length <= 9 )
  {
LABEL_61:
    v109 = sub_B0D9A8(v43);
    sub_B0D948(v109, 0LL);
  }
  v42->m_Items[9] = (Il2CppObject *)v107;
  sub_B0D840((BattleServantConfConponent_o *)&v42->m_Items[9], v107, v101, v102, v103, v104, v105, v106);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v108 = iTween__Hash(v42, 0LL);
  iTween__ValueTo(gameObject, v108, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__endChangeBg(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  UnityEngine_GameObject_o *BgObject; // x0
  const MethodInfo *v24; // x2
  struct BattlePerformanceBg_BgState_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  BattlePerformanceBg_o *v32; // x0
  const MethodInfo *v33; // x3
  _BOOL4 parentCamera; // w22
  UnityEngine_GameObject_o *v35; // x21
  UnityEngine_Transform_o *transform; // x22
  int v37; // s0
  UnityEngine_Transform_o *v40; // x22
  int v41; // s0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  BattlePerformanceBg_o *v50; // x0
  const MethodInfo *v51; // x3
  UnityEngine_Object_o *FrontObject; // x20
  const MethodInfo *v53; // x2
  UnityEngine_Transform_o *v54; // x21
  int v55; // s0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  System_Action_T__o *onLoadBgFinished; // x20
  int32_t loadbgno; // w21
  int32_t loadbgType; // w22
  bool v68; // w23
  __int64 v69; // x1
  __int64 v70; // x2
  BattlePerformanceBg_ChangedBgArgs_o *v71; // x24
  const MethodInfo *v72; // x1
  System_Action_o *EndCallback; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Object_array *v81; // x21
  __int64 v82; // x0
  System_Int32_array **v83; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x22
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x1
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array **v104; // x19
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x1
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Int32_array **v118; // x19
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Int32_array **v125; // x1
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_Int32_array **v132; // x1
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_Int32_array **v139; // x1
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  System_Int32_array **v146; // x1
  System_Collections_Hashtable_o *v147; // x0
  __int64 v148; // x0
  __int64 v149; // x0
  int v150; // [xsp+Ch] [xbp-54h] BYREF
  struct UnityEngine_Color_o tmpcolor; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Color_o black; // [xsp+20h] [xbp-40h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4216BF6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___, data);
    sub_B0D8A4(&BattlePerformanceBg_ChangedBgArgs_TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Color_TypeInfo, v11);
    sub_B0D8A4(&object___TypeInfo, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&float_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_18972/*"from"*/, v15);
    sub_B0D8A4(&StringLiteral_18401/*"endChangeColor"*/, v16);
    sub_B0D8A4(&StringLiteral_15106/*"UpdateColor"*/, v17);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v18);
    sub_B0D8A4(&StringLiteral_21341/*"onupdate"*/, v19);
    sub_B0D8A4(&StringLiteral_22790/*"to"*/, v20);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v21);
    sub_B0D8A4(&iTween_TypeInfo, v22);
    byte_4216BF6 = 1;
  }
  this->fields.BgAssetData = data;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.BgAssetData,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !data )
    goto LABEL_78;
  v25 = BattlePerformanceBg__saveHistoryBgState(this, data->fields.name, v24);
  this->fields.nowBgState = v25;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.nowBgState,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  BgObject = BattlePerformanceBg__getBgObject(v32, data, this->fields.loadbgType, v33);
  if ( !BgObject )
    goto LABEL_78;
  parentCamera = this->fields.parentCamera;
  v35 = BgObject;
  BgObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BgObject, 0LL);
  if ( parentCamera )
  {
    if ( !BgObject )
      goto LABEL_78;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRootCamera, 0LL);
    BgObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v35, 0LL);
    if ( !BgObject )
      goto LABEL_78;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)BgObject, this->fields.rot, 0LL);
  }
  else
  {
    if ( !BgObject )
      goto LABEL_78;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRoot, 0LL);
    transform = UnityEngine_GameObject__get_transform(v35, 0LL);
    *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_78;
    UnityEngine_Transform__set_eulerAngles(transform, *(UnityEngine_Vector3_o *)&v37, 0LL);
  }
  BgObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v35, 0LL);
  if ( !BgObject )
    goto LABEL_78;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BgObject, this->fields.pos, 0LL);
  v40 = UnityEngine_GameObject__get_transform(v35, 0LL);
  *(UnityEngine_Vector3_o *)&v41 = UnityEngine_Vector3__get_one(0LL);
  if ( !v40 )
    goto LABEL_78;
  UnityEngine_Transform__set_localScale(v40, *(UnityEngine_Vector3_o *)&v41, 0LL);
  this->fields.bgobject = v35;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.bgobject,
    (System_Int32_array **)v35,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  FrontObject = (UnityEngine_Object_o *)BattlePerformanceBg__getFrontObject(v50, data, this->fields.loadbgType, v51);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  BgObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(FrontObject, 0LL, 0LL);
  if ( ((unsigned __int8)BgObject & 1) != 0 )
  {
    if ( !FrontObject )
      goto LABEL_78;
    BgObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)FrontObject,
                                             0LL);
    if ( !BgObject )
      goto LABEL_78;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRootCamera, 0LL);
    BgObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)FrontObject,
                                             0LL);
    if ( !BgObject )
      goto LABEL_78;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)BgObject, this->fields.rot, 0LL);
    BgObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)FrontObject,
                                             0LL);
    if ( !BgObject )
      goto LABEL_78;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BgObject, this->fields.pos, 0LL);
    v54 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)FrontObject, 0LL);
    *(UnityEngine_Vector3_o *)&v55 = UnityEngine_Vector3__get_one(0LL);
    if ( !v54 )
      goto LABEL_78;
    UnityEngine_Transform__set_localScale(v54, *(UnityEngine_Vector3_o *)&v55, 0LL);
    this->fields.frontobject = (struct UnityEngine_GameObject_o *)FrontObject;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.frontobject,
      (System_Int32_array **)FrontObject,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
  }
  nowBgState = this->fields.nowBgState;
  BgObject = (UnityEngine_GameObject_o *)BattlePerformanceBg__getBattleBgComponents(this, 0, v53);
  if ( !nowBgState )
    goto LABEL_78;
  BattlePerformanceBg_BgState__loadSaveData(
    nowBgState,
    (BattleBgComponent_array *)BgObject,
    this->fields.actionCamera,
    0LL);
  onLoadBgFinished = (System_Action_T__o *)this->fields.onLoadBgFinished;
  loadbgno = this->fields.loadbgno;
  loadbgType = this->fields.loadbgType;
  v68 = this->fields.parentCamera;
  v71 = (BattlePerformanceBg_ChangedBgArgs_o *)sub_B0D974(BattlePerformanceBg_ChangedBgArgs_TypeInfo, v69, v70);
  BattlePerformanceBg_ChangedBgArgs___ctor(v71, loadbgno, loadbgType, v68, 0LL);
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    onLoadBgFinished,
    (BlankEarth_QAARotateEarthResponse_o *)v71,
    (const MethodInfo_2D96698 *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
  if ( this->fields.changeDirect )
  {
    this->fields.fade = 0;
    white = UnityEngine_Color__get_white(0LL);
    UnityEngine_RenderSettings__set_ambientLight(white, 0LL);
    EndCallback = this->fields.EndCallback;
    if ( EndCallback )
      System_Action__Invoke(EndCallback, 0LL);
    BattlePerformanceBg__OnEndBgLoad(this, v72);
    return;
  }
  this->fields.fade = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  BgObject = (UnityEngine_GameObject_o *)sub_B0D8BC(object___TypeInfo, 10LL);
  if ( !BgObject )
LABEL_78:
    sub_B0D97C(BgObject);
  v81 = (System_Object_array *)BgObject;
  v82 = StringLiteral_18972/*"from"*/;
  if ( StringLiteral_18972/*"from"*/ )
  {
    v82 = sub_B0D964(StringLiteral_18972/*"from"*/, v81->obj.klass->_1.element_class);
    if ( !v82 )
      goto LABEL_80;
    v83 = (System_Int32_array **)StringLiteral_18972/*"from"*/;
  }
  else
  {
    v83 = 0LL;
  }
  if ( !v81->max_length )
    goto LABEL_79;
  v81->m_Items[0] = (Il2CppObject *)v83;
  sub_B0D840((BattleServantConfConponent_o *)v81->m_Items, v83, v75, v76, v77, v78, v79, v80);
  black = UnityEngine_Color__get_black(0LL);
  v82 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &black);
  v90 = (System_Int32_array **)v82;
  if ( v82 )
  {
    v82 = sub_B0D964(v82, v81->obj.klass->_1.element_class);
    if ( !v82 )
      goto LABEL_80;
  }
  if ( v81->max_length <= 1 )
    goto LABEL_79;
  v81->m_Items[1] = (Il2CppObject *)v90;
  sub_B0D840((BattleServantConfConponent_o *)&v81->m_Items[1], v90, v84, v85, v86, v87, v88, v89);
  v82 = StringLiteral_22790/*"to"*/;
  if ( StringLiteral_22790/*"to"*/ )
  {
    v82 = sub_B0D964(StringLiteral_22790/*"to"*/, v81->obj.klass->_1.element_class);
    if ( !v82 )
      goto LABEL_80;
    v97 = (System_Int32_array **)StringLiteral_22790/*"to"*/;
  }
  else
  {
    v97 = 0LL;
  }
  if ( v81->max_length <= 2 )
    goto LABEL_79;
  v81->m_Items[2] = (Il2CppObject *)v97;
  sub_B0D840((BattleServantConfConponent_o *)&v81->m_Items[2], v97, v91, v92, v93, v94, v95, v96);
  tmpcolor = this->fields.tmpcolor;
  v82 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor);
  v104 = (System_Int32_array **)v82;
  if ( v82 )
  {
    v82 = sub_B0D964(v82, v81->obj.klass->_1.element_class);
    if ( !v82 )
      goto LABEL_80;
  }
  if ( v81->max_length <= 3 )
    goto LABEL_79;
  v81->m_Items[3] = (Il2CppObject *)v104;
  sub_B0D840((BattleServantConfConponent_o *)&v81->m_Items[3], v104, v98, v99, v100, v101, v102, v103);
  v82 = StringLiteral_22753/*"time"*/;
  if ( StringLiteral_22753/*"time"*/ )
  {
    v82 = sub_B0D964(StringLiteral_22753/*"time"*/, v81->obj.klass->_1.element_class);
    if ( !v82 )
      goto LABEL_80;
    v111 = (System_Int32_array **)StringLiteral_22753/*"time"*/;
  }
  else
  {
    v111 = 0LL;
  }
  if ( v81->max_length <= 4 )
    goto LABEL_79;
  v81->m_Items[4] = (Il2CppObject *)v111;
  sub_B0D840((BattleServantConfConponent_o *)&v81->m_Items[4], v111, v105, v106, v107, v108, v109, v110);
  v150 = 1056964608;
  v82 = j_il2cpp_value_box_0(float_TypeInfo, &v150);
  v118 = (System_Int32_array **)v82;
  if ( v82 )
  {
    v82 = sub_B0D964(v82, v81->obj.klass->_1.element_class);
    if ( !v82 )
    {
LABEL_80:
      v149 = sub_B0D99C(v82);
      sub_B0D948(v149, 0LL);
    }
  }
  if ( v81->max_length <= 5 )
    goto LABEL_79;
  v81->m_Items[5] = (Il2CppObject *)v118;
  sub_B0D840((BattleServantConfConponent_o *)&v81->m_Items[5], v118, v112, v113, v114, v115, v116, v117);
  v82 = StringLiteral_21341/*"onupdate"*/;
  if ( StringLiteral_21341/*"onupdate"*/ )
  {
    v82 = sub_B0D964(StringLiteral_21341/*"onupdate"*/, v81->obj.klass->_1.element_class);
    if ( !v82 )
      goto LABEL_80;
    v125 = (System_Int32_array **)StringLiteral_21341/*"onupdate"*/;
  }
  else
  {
    v125 = 0LL;
  }
  if ( v81->max_length <= 6 )
    goto LABEL_79;
  v81->m_Items[6] = (Il2CppObject *)v125;
  sub_B0D840((BattleServantConfConponent_o *)&v81->m_Items[6], v125, v119, v120, v121, v122, v123, v124);
  v82 = StringLiteral_15106/*"UpdateColor"*/;
  if ( StringLiteral_15106/*"UpdateColor"*/ )
  {
    v82 = sub_B0D964(StringLiteral_15106/*"UpdateColor"*/, v81->obj.klass->_1.element_class);
    if ( !v82 )
      goto LABEL_80;
    v132 = (System_Int32_array **)StringLiteral_15106/*"UpdateColor"*/;
  }
  else
  {
    v132 = 0LL;
  }
  if ( v81->max_length <= 7 )
    goto LABEL_79;
  v81->m_Items[7] = (Il2CppObject *)v132;
  sub_B0D840((BattleServantConfConponent_o *)&v81->m_Items[7], v132, v126, v127, v128, v129, v130, v131);
  v82 = StringLiteral_21332/*"oncomplete"*/;
  if ( StringLiteral_21332/*"oncomplete"*/ )
  {
    v82 = sub_B0D964(StringLiteral_21332/*"oncomplete"*/, v81->obj.klass->_1.element_class);
    if ( !v82 )
      goto LABEL_80;
    v139 = (System_Int32_array **)StringLiteral_21332/*"oncomplete"*/;
  }
  else
  {
    v139 = 0LL;
  }
  if ( v81->max_length <= 8 )
    goto LABEL_79;
  v81->m_Items[8] = (Il2CppObject *)v139;
  sub_B0D840((BattleServantConfConponent_o *)&v81->m_Items[8], v139, v133, v134, v135, v136, v137, v138);
  v82 = StringLiteral_18401/*"endChangeColor"*/;
  if ( StringLiteral_18401/*"endChangeColor"*/ )
  {
    v82 = sub_B0D964(StringLiteral_18401/*"endChangeColor"*/, v81->obj.klass->_1.element_class);
    if ( v82 )
    {
      v146 = (System_Int32_array **)StringLiteral_18401/*"endChangeColor"*/;
      goto LABEL_73;
    }
    goto LABEL_80;
  }
  v146 = 0LL;
LABEL_73:
  if ( v81->max_length <= 9 )
  {
LABEL_79:
    v148 = sub_B0D9A8(v82);
    sub_B0D948(v148, 0LL);
  }
  v81->m_Items[9] = (Il2CppObject *)v146;
  sub_B0D840((BattleServantConfConponent_o *)&v81->m_Items[9], v146, v140, v141, v142, v143, v144, v145);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v147 = iTween__Hash(v81, 0LL);
  iTween__ValueTo(gameObject, v147, 0LL);
}


void __fastcall BattlePerformanceBg__endChangeColor(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t fade; // w8
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  int32_t loadbgno; // w20
  WarBoardManager_TaskList_o *AssetPass; // x0
  System_String_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  AssetLoader_LoadEndDataHandler_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *EndCallback; // x0
  AssetLoader_LoadEndDataHandler_o *v20; // x21
  UnityEngine_Color_o black; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4216BF7 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&Method_BattlePerformanceBg_endChangeBg__, v3);
    sub_B0D8A4(&BattlePerformanceBg_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v6);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    byte_4216BF7 = 1;
  }
  fade = this->fields.fade;
  if ( fade != 2 )
  {
    if ( fade != 1 )
      return;
    black = UnityEngine_Color__get_black(0LL);
    UnityEngine_RenderSettings__set_ambientLight(black, 0LL);
    BattlePerformanceBg__ReleaseBg(this, v9);
    loadbgno = this->fields.loadbgno;
    if ( (BYTE3(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    }
    AssetPass = (WarBoardManager_TaskList_o *)BattlePerformanceBg__GetAssetPass(loadbgno, v10);
    if ( this->fields.loadedChangeBgList )
    {
      v13 = (System_String_o *)AssetPass;
      if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedChangeBgList,
             AssetPass,
             (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__) )
      {
        v16 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v14, v15);
        AssetLoader_LoadEndDataHandler___ctor(v16, (Il2CppObject *)this, Method_BattlePerformanceBg_endChangeBg__, 0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        if ( AssetManager__getAsset_29515352(v13, v16, 0LL) )
          return;
LABEL_21:
        v20 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v17, v18);
        AssetLoader_LoadEndDataHandler___ctor(v20, (Il2CppObject *)this, Method_BattlePerformanceBg_endChangeBg__, 0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetManager__loadAssetStorage(v13, v20, 1, 0LL);
        return;
      }
      if ( !System_String__op_Inequality(v13, this->fields.initLoadedBgPath, 0LL) )
        goto LABEL_21;
      AssetPass = (WarBoardManager_TaskList_o *)this->fields.loadedChangeBgList;
      if ( AssetPass )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)AssetPass,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
        goto LABEL_21;
      }
    }
    sub_B0D97C(AssetPass);
  }
  EndCallback = this->fields.EndCallback;
  this->fields.fade = 0;
  if ( EndCallback )
    System_Action__Invoke(EndCallback, 0LL);
  BattlePerformanceBg__OnEndBgLoad(this, method);
}


void __fastcall BattlePerformanceBg__endloadBg(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t loadbgno; // w20
  int32_t loadbgType; // w22
  __int64 v23; // x1
  __int64 v24; // x2
  System_Action_o *v25; // x23
  const MethodInfo *v26; // x4

  if ( (byte_4216BEE & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, data);
    sub_B0D8A4(&Method_BattlePerformanceBg___c__DisplayClass47_0__endloadBg_b__0__, v5);
    sub_B0D8A4(&BattlePerformanceBg___c__DisplayClass47_0_TypeInfo, v6);
    byte_4216BEE = 1;
  }
  v7 = sub_B0D974(BattlePerformanceBg___c__DisplayClass47_0_TypeInfo, data, method);
  BattlePerformanceBg___c__DisplayClass47_0___ctor((BattlePerformanceBg___c__DisplayClass47_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v7 + 24) = data;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)data, v15, v16, v17, v18, v19, v20);
  loadbgno = this->fields.loadbgno;
  loadbgType = this->fields.loadbgType;
  v25 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v23, v24);
  System_Action___ctor(v25, (Il2CppObject *)v7, Method_BattlePerformanceBg___c__DisplayClass47_0__endloadBg_b__0__, 0LL);
  BattlePerformanceBg__LoadBgSpShadowEffect(this, loadbgno, loadbgType, v25, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__endloadBgAll(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  BattlePerformanceBg_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Object_o **p_bgobject; // x21
  UnityEngine_Object_o *bgobject; // x22
  UnityEngine_Object_o *frontobject; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Object_o *v23; // x22
  UnityEngine_Object_o *v24; // x22
  UnityEngine_Object_o *v25; // x22
  UnityEngine_Object_o *v26; // x22
  UnityEngine_Object_o *actionCamera; // x22
  const MethodInfo *v28; // x2
  BattlePerformanceBg_o *v29; // x0
  const MethodInfo *v30; // x3
  _BOOL4 parentCamera; // w23
  UnityEngine_GameObject_o *v32; // x22
  UnityEngine_Transform_o *transform; // x23
  int v34; // s0
  UnityEngine_Transform_o *v37; // x23
  int v38; // s0
  int32_t newBgId; // w8
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  BattlePerformanceBg_o *v48; // x0
  const MethodInfo *v49; // x3
  UnityEngine_Object_o *v50; // x20
  const MethodInfo *v51; // x2
  UnityEngine_Transform_o *v52; // x21
  int v53; // s0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  System_Action_T__o *onLoadBgFinished; // x20
  int32_t loadbgno; // w21
  int32_t loadbgType; // w22
  bool v66; // w19
  __int64 v67; // x1
  __int64 v68; // x2
  BattlePerformanceBg_ChangedBgArgs_o *v69; // x23

  v4 = this;
  if ( (byte_4216BEF & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___, data);
    sub_B0D8A4(&BattlePerformanceBg_ChangedBgArgs_TypeInfo, v5);
    this = (BattlePerformanceBg_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_4216BEF = 1;
  }
  v4->fields.IsLoading = 0;
  if ( !data )
    goto LABEL_57;
  v7 = (System_Int32_array **)BattlePerformanceBg__saveHistoryBgState(v4, data->fields.name, method);
  v4->fields.nowBgState = (struct BattlePerformanceBg_BgState_o *)v7;
  sub_B0D840((BattleServantConfConponent_o *)&v4->fields.nowBgState, v7, v8, v9, v10, v11, v12, v13);
  p_bgobject = (UnityEngine_Object_o **)&v4->fields.bgobject;
  bgobject = (UnityEngine_Object_o *)v4->fields.bgobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
    goto LABEL_12;
  frontobject = (UnityEngine_Object_o *)v4->fields.frontobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL) )
  {
LABEL_12:
    v23 = *p_bgobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
    {
      v24 = *p_bgobject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v24, 0LL);
    }
    v25 = (UnityEngine_Object_o *)v4->fields.frontobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
    {
      v26 = (UnityEngine_Object_o *)v4->fields.frontobject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v26, 0LL);
    }
    actionCamera = (UnityEngine_Object_o *)v4->fields.actionCamera;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(actionCamera, 0LL, 0LL) )
    {
      this = (BattlePerformanceBg_o *)v4->fields.actionCamera;
      if ( !this )
        goto LABEL_57;
      BattleActionCamera__stopCameraAnimation((BattleActionCamera_o *)this, 0LL);
    }
    BattlePerformanceBg__ReleaseBg_28400844(v4, v4->fields.nowBgId, v28);
  }
  v4->fields.BgAssetData = data;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v4->fields.BgAssetData,
    (System_Int32_array **)data,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this = (BattlePerformanceBg_o *)BattlePerformanceBg__getBgObject(v29, data, v4->fields.loadbgType, v30);
  if ( !this )
    goto LABEL_57;
  parentCamera = v4->fields.parentCamera;
  v32 = (UnityEngine_GameObject_o *)this;
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( parentCamera )
  {
    if ( !this )
      goto LABEL_57;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRootCamera, 0LL);
    this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform(v32, 0LL);
    if ( !this )
      goto LABEL_57;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v4->fields.rot, 0LL);
  }
  else
  {
    if ( !this )
      goto LABEL_57;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRoot, 0LL);
    transform = UnityEngine_GameObject__get_transform(v32, 0LL);
    *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_57;
    UnityEngine_Transform__set_eulerAngles(transform, *(UnityEngine_Vector3_o *)&v34, 0LL);
  }
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform(v32, 0LL);
  if ( !this )
    goto LABEL_57;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.pos, 0LL);
  v37 = UnityEngine_GameObject__get_transform(v32, 0LL);
  *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_one(0LL);
  if ( !v37 )
    goto LABEL_57;
  UnityEngine_Transform__set_localScale(v37, *(UnityEngine_Vector3_o *)&v38, 0LL);
  newBgId = v4->fields.newBgId;
  v4->fields.bgobject = v32;
  v4->fields.nowBgId = newBgId;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v4->fields.bgobject,
    (System_Int32_array **)v32,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v50 = (UnityEngine_Object_o *)BattlePerformanceBg__getFrontObject(v48, data, v4->fields.loadbgType, v49);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattlePerformanceBg_o *)UnityEngine_Object__op_Inequality(v50, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v50 )
    {
      this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v50, 0LL);
      if ( this )
      {
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRootCamera, 0LL);
        this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v50, 0LL);
        if ( this )
        {
          UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v4->fields.rot, 0LL);
          this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v50, 0LL);
          if ( this )
          {
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.pos, 0LL);
            v52 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v50, 0LL);
            *(UnityEngine_Vector3_o *)&v53 = UnityEngine_Vector3__get_one(0LL);
            if ( v52 )
            {
              UnityEngine_Transform__set_localScale(v52, *(UnityEngine_Vector3_o *)&v53, 0LL);
              v4->fields.frontobject = (struct UnityEngine_GameObject_o *)v50;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v4->fields.frontobject,
                (System_Int32_array **)v50,
                v56,
                v57,
                v58,
                v59,
                v60,
                v61);
              goto LABEL_55;
            }
          }
        }
      }
    }
LABEL_57:
    sub_B0D97C(this);
  }
LABEL_55:
  nowBgState = v4->fields.nowBgState;
  this = (BattlePerformanceBg_o *)BattlePerformanceBg__getBattleBgComponents(v4, 0, v51);
  if ( !nowBgState )
    goto LABEL_57;
  BattlePerformanceBg_BgState__loadSaveData(nowBgState, (BattleBgComponent_array *)this, v4->fields.actionCamera, 0LL);
  onLoadBgFinished = (System_Action_T__o *)v4->fields.onLoadBgFinished;
  loadbgno = v4->fields.loadbgno;
  loadbgType = v4->fields.loadbgType;
  v66 = v4->fields.parentCamera;
  v69 = (BattlePerformanceBg_ChangedBgArgs_o *)sub_B0D974(BattlePerformanceBg_ChangedBgArgs_TypeInfo, v67, v68);
  BattlePerformanceBg_ChangedBgArgs___ctor(v69, loadbgno, loadbgType, v66, 0LL);
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    onLoadBgFinished,
    (BlankEarth_QAARotateEarthResponse_o *)v69,
    (const MethodInfo_2D96698 *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
}


// local variable allocation has failed, the output may be wrong!
BattleBgComponent_array *__fastcall BattlePerformanceBg__getBattleBgComponents(
        BattlePerformanceBg_o *this,
        bool includeInactive,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  UnityEngine_Object_o *bgobject; // x22
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Object_o *frontobject; // x22

  if ( (byte_4216BE8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___, includeInactive);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBgComponent__AddRange__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBgComponent__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBgComponent___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBgComponent__TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_4216BE8 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBgComponent__TypeInfo,
                                                                                                  includeInactive,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBgComponent___ctor__);
  bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
  {
    v12 = this->fields.bgobject;
    if ( !v12 )
      goto LABEL_19;
    v12 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                        v12,
                                        includeInactive,
                                        (const MethodInfo_1B63008 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
    if ( !v10 )
      goto LABEL_19;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v10,
      (System_Collections_Generic_IEnumerable_T__o *)v12,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
  }
  frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) == 0 )
  {
    if ( v10 )
      return (BattleBgComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                          (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
LABEL_19:
    sub_B0D97C(v12);
  }
  v12 = this->fields.frontobject;
  if ( !v12 )
    goto LABEL_19;
  v12 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                      v12,
                                      includeInactive,
                                      (const MethodInfo_1B63008 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
  if ( !v10 )
    goto LABEL_19;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v10,
    (System_Collections_Generic_IEnumerable_T__o *)v12,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
  return (BattleBgComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                      (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
}


UnityEngine_GameObject_o *__fastcall BattlePerformanceBg__getBgObject(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        int32_t tp,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v10; // x1
  System_String_o *v11; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v12; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v15; // x19
  UnityEngine_UI_Dropdown_DropdownItem_o *v16; // x19
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  v17 = tp;
  if ( (byte_4216BF4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, data);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_16744/*"bg"*/, v8);
    this = (BattlePerformanceBg_o *)sub_B0D8A4(&StringLiteral_16747/*"bg0"*/, v9);
    byte_4216BF4 = 1;
  }
  if ( tp < 1 )
  {
    if ( !data )
      sub_B0D97C(this);
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 (System_String_o *)StringLiteral_16744/*"bg"*/,
                                                                                 (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           Object_WarBoardWaitTimeSetting,
                                           (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v16 = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        data,
                                                        (System_String_o *)StringLiteral_16747/*"bg0"*/,
                                                        (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           v16,
                                           (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
  }
  else
  {
    v10 = System_Int32__ToString((int32_t)&v17, 0LL);
    v11 = System_String__Concat_43849904((System_String_o *)StringLiteral_16744/*"bg"*/, v10, 0LL);
    if ( !data )
      sub_B0D97C(v11);
    v12 = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                      data,
                                                      v11,
                                                      (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           v12,
                                           (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v15 = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        data,
                                                        (System_String_o *)StringLiteral_16744/*"bg"*/,
                                                        (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           v15,
                                           (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
  }
}


System_String_array *__fastcall BattlePerformanceBg__getChangeBgList(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  return this->fields.debuglist;
}


UnityEngine_GameObject_o *__fastcall BattlePerformanceBg__getFrontObject(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        int32_t tp,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  void *v9; // x0
  System_String_o *v10; // x20
  System_String_o *v11; // x0
  System_String_o *v12; // x1
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20
  BattlePerformanceBg_c *v14; // x0
  bool v15; // w8
  UnityEngine_GameObject_o *result; // x0
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  v17 = tp;
  if ( (byte_4216BF5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, data);
    sub_B0D8A4(&BattlePerformanceBg_TypeInfo, v6);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    byte_4216BF5 = 1;
  }
  v9 = BattlePerformanceBg_TypeInfo;
  if ( tp > 0 )
  {
    if ( (WORD1(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
      v9 = BattlePerformanceBg_TypeInfo;
    }
    v10 = (System_String_o *)**((_QWORD **)v9 + 23);
    v11 = System_Int32__ToString((int32_t)&v17, 0LL);
    v9 = System_String__Concat_43849904(v10, v11, 0LL);
    v12 = (System_String_o *)v9;
    if ( data )
      goto LABEL_8;
LABEL_28:
    sub_B0D97C(v9);
  }
  if ( (WORD1(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    v9 = BattlePerformanceBg_TypeInfo;
  }
  v12 = (System_String_o *)**((_QWORD **)v9 + 23);
  if ( !data )
    goto LABEL_28;
LABEL_8:
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             data,
                                                             v12,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    goto LABEL_19;
  v14 = BattlePerformanceBg_TypeInfo;
  if ( (BYTE3(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    v14 = BattlePerformanceBg_TypeInfo;
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             data,
                                                             v14->static_fields->Frontfile,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v15 = UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  result = 0LL;
  if ( v15 )
  {
LABEL_19:
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                         (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  return result;
}


BattlePerformanceBg_SaveData_o *__fastcall BattlePerformanceBg__getSaveData(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *compDictionary; // x0
  struct BattlePerformanceBg_BgState_o *nowBgState; // x8
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct BattlePerformanceBg_BgState_o *v24; // x8
  System_Int32_array **bgName; // x1
  struct BattlePerformanceBg_BgState_o *v26; // x8
  unsigned int Count; // w0
  System_Int32_array **v28; // x0
  _DWORD **v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct BattlePerformanceBg_BgState_o *v36; // x8
  unsigned int v37; // w25
  System_Int32_array **value; // x23
  System_Int32_array **key; // x24
  __int64 v40; // x22
  __int64 v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x0
  _DWORD *v55; // x23
  __int64 v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  _DWORD *v63; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x0
  __int64 v67; // x0
  BattlePerformanceBg_SaveData_o *result; // x0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v69; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v70; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4216BE5 & 1) == 0 )
  {
    sub_B0D8A4(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, method);
    sub_B0D8A4(&BattlePerformanceBg_SaveData_CompSaveData_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__, v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__,
      v7);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__,
      v8);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__get_Current__,
      v9);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Key__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Value__, v11);
    sub_B0D8A4(&BattlePerformanceBg_SaveData_TypeInfo, v12);
    byte_4216BE5 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  BattlePerformanceBg__saveHistoryBgState(this, 0LL, v2);
  v15 = sub_B0D974(BattlePerformanceBg_SaveData_TypeInfo, v13, v14);
  BattlePerformanceBg_SaveData___ctor((BattlePerformanceBg_SaveData_o *)v15, 0LL);
  nowBgState = this->fields.nowBgState;
  if ( !nowBgState )
    goto LABEL_24;
  compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)nowBgState->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_26;
  compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
                                                                                                   compDictionary,
                                                                                                   (const MethodInfo_2E4A864 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__);
  if ( (int)compDictionary < 1 )
  {
LABEL_24:
    if ( v15 )
      goto LABEL_25;
LABEL_26:
    sub_B0D97C(compDictionary);
  }
  v24 = this->fields.nowBgState;
  if ( !v24 )
    goto LABEL_26;
  if ( !v15 )
    goto LABEL_26;
  bgName = (System_Int32_array **)v24->fields.bgName;
  *(_QWORD *)(v15 + 16) = bgName;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 16), bgName, v18, v19, v20, v21, v22, v23);
  v26 = this->fields.nowBgState;
  if ( !v26 )
    goto LABEL_26;
  compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v26->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_26;
  Count = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
            compDictionary,
            (const MethodInfo_2E4A864 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__);
  v28 = (System_Int32_array **)sub_B0D8BC(BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, Count);
  *(_QWORD *)(v15 + 24) = v28;
  v29 = (_DWORD **)(v15 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 24), v28, v30, v31, v32, v33, v34, v35);
  v36 = this->fields.nowBgState;
  if ( !v36 )
    goto LABEL_26;
  compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v36->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v69,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)compDictionary,
    (const MethodInfo_2E4B244 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__);
  v70 = v69;
  v37 = 0;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v70,
            (const MethodInfo_26C9288 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__) )
  {
    key = (System_Int32_array **)v70.fields.current.fields.key;
    value = (System_Int32_array **)v70.fields.current.fields.value;
    v40 = sub_B0D974(BattlePerformanceBg_SaveData_CompSaveData_TypeInfo, v64, v65);
    BattlePerformanceBg_SaveData_CompSaveData___ctor((BattlePerformanceBg_SaveData_CompSaveData_o *)v40, 0LL);
    if ( !v40 )
      sub_B0D97C(v41);
    *(_QWORD *)(v40 + 16) = key;
    sub_B0D840((BattleServantConfConponent_o *)(v40 + 16), key, v42, v43, v44, v45, v46, v47);
    *(_QWORD *)(v40 + 24) = value;
    sub_B0D840((BattleServantConfConponent_o *)(v40 + 24), value, v48, v49, v50, v51, v52, v53);
    v55 = *v29;
    if ( !*v29 )
      sub_B0D97C(v54);
    v56 = sub_B0D964(v40, *(_QWORD *)(*(_QWORD *)v55 + 64LL));
    if ( !v56 )
    {
      v66 = sub_B0D99C(0LL);
      sub_B0D948(v66, 0LL);
    }
    if ( v37 >= v55[6] )
    {
      v67 = sub_B0D9A8(v56);
      sub_B0D948(v67, 0LL);
    }
    v63 = &v55[2 * v37];
    *((_QWORD *)v63 + 4) = v40;
    sub_B0D840((BattleServantConfConponent_o *)(v63 + 8), (System_Int32_array **)v40, v57, v58, v59, v60, v61, v62);
    ++v37;
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v70,
    (const MethodInfo_26C93F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__);
LABEL_25:
  result = (BattlePerformanceBg_SaveData_o *)v15;
  *(_DWORD *)(v15 + 32) = this->fields.loadbgno;
  *(_DWORD *)(v15 + 36) = this->fields.loadbgType;
  return result;
}


bool __fastcall BattlePerformanceBg__get_IsBusy(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.IsLoading;
}


int32_t __fastcall BattlePerformanceBg__get_LoadBgNo(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.loadbgno;
}


int32_t __fastcall BattlePerformanceBg__get_LoadBgType(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.loadbgType;
}


bool __fastcall BattlePerformanceBg__isReload(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.loadbgno != -1 && this->fields.loadbgType != -1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__loadBg(
        BattlePerformanceBg_o *this,
        int32_t no,
        int32_t tp,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_String_o *AssetPass; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  AssetLoader_LoadEndDataHandler_o *v19; // x21

  if ( (byte_4216BEC & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&no);
    sub_B0D8A4(&Method_BattlePerformanceBg_endloadBg__, v7);
    sub_B0D8A4(&BattlePerformanceBg_TypeInfo, v8);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    byte_4216BEC = 1;
  }
  this->fields.IsLoading = 1;
  if ( !no )
    goto LABEL_11;
  this->fields.loadbgno = no;
  this->fields.loadbgType = tp;
  this->fields.newBgId = no;
  if ( (BYTE3(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
  }
  AssetPass = BattlePerformanceBg__GetAssetPass(no, *(const MethodInfo **)&no);
  this->fields.initLoadedBgPath = AssetPass;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.initLoadedBgPath,
    (System_Int32_array **)AssetPass,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v17, v18);
  AssetLoader_LoadEndDataHandler___ctor(v19, (Il2CppObject *)this, Method_BattlePerformanceBg_endloadBg__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(AssetPass, v19, 1, 0LL) )
LABEL_11:
    this->fields.IsLoading = 0;
}


void __fastcall BattlePerformanceBg__playAnimation(
        BattlePerformanceBg_o *this,
        System_String_o *key,
        System_String_o *animName,
        float timeline,
        const MethodInfo *method)
{
  BattleBgComponent_array *BattleBgComponents; // x0
  int max_length; // w8
  BattleBgComponent_array *v10; // x21
  unsigned int v11; // w23
  Il2CppClass **v12; // x8
  BattleBgComponent_o *v13; // x22
  __int64 v14; // x0

  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, (const MethodInfo *)animName);
  if ( !BattleBgComponents )
    goto LABEL_11;
  max_length = BattleBgComponents->max_length;
  v10 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
      {
        v14 = sub_B0D9A8(BattleBgComponents);
        sub_B0D948(v14, 0LL);
      }
      v12 = &v10->obj.klass + (int)v11;
      v13 = (BattleBgComponent_o *)v12[4];
      if ( !v13 )
        break;
      BattleBgComponents = (BattleBgComponent_array *)BattleBgComponent__checkKey(
                                                        (BattleBgComponent_o *)v12[4],
                                                        key,
                                                        0LL);
      if ( ((unsigned __int8)BattleBgComponents & 1) != 0 )
        BattleBgComponent__playAnimation(v13, animName, timeline, 0LL);
      max_length = v10->max_length;
      if ( (int)++v11 >= max_length )
        return;
    }
LABEL_11:
    sub_B0D97C(BattleBgComponents);
  }
}


void __fastcall BattlePerformanceBg__playBgAnimationIn(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4216BFC & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21567/*"playerfield"*/, method);
    sub_B0D8A4(&StringLiteral_2792/*"BattleIn"*/, v4);
    byte_4216BFC = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_21567/*"playerfield"*/,
    (System_String_o *)StringLiteral_2792/*"BattleIn"*/,
    0.0,
    v2);
}


void __fastcall BattlePerformanceBg__playBgAnimationOut(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4216BFB & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2794/*"BattleOut"*/, method);
    sub_B0D8A4(&StringLiteral_21567/*"playerfield"*/, v4);
    byte_4216BFB = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_21567/*"playerfield"*/,
    (System_String_o *)StringLiteral_2794/*"BattleOut"*/,
    0.0,
    v2);
}


void __fastcall BattlePerformanceBg__playLoadEndAnimation(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBgComponent_array *BattleBgComponents; // x0
  int max_length; // w8
  BattleBgComponent_array *v5; // x19
  unsigned int v6; // w20
  __int64 v7; // x0

  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v2);
  if ( !BattleBgComponents )
    goto LABEL_11;
  max_length = BattleBgComponents->max_length;
  v5 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        v7 = sub_B0D9A8(BattleBgComponents);
        sub_B0D948(v7, 0LL);
      }
      BattleBgComponents = (BattleBgComponent_array *)v5->m_Items[v6];
      if ( !BattleBgComponents )
        break;
      if ( LOBYTE(BattleBgComponents->m_Items[1]) )
        BattleBgComponent__playLoadEndAnimation((BattleBgComponent_o *)BattleBgComponents, 0LL);
      max_length = v5->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_11:
    sub_B0D97C(BattleBgComponents);
  }
}


void __fastcall BattlePerformanceBg__reloadBg(
        BattlePerformanceBg_o *this,
        int32_t *outNo,
        int32_t *outType,
        const MethodInfo *method)
{
  *outNo = this->fields.loadbgno;
  *outType = this->fields.loadbgType;
  BattlePerformanceBg__loadBg(this, this->fields.loadbgno, this->fields.loadbgType, method);
}


BattlePerformanceBg_BgState_o *__fastcall BattlePerformanceBg__saveHistoryBgState(
        BattlePerformanceBg_o *this,
        System_String_o *inName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *bgobject; // x21
  const MethodInfo *v11; // x2
  UnityEngine_Object_o *frontobject; // x21
  BattlePerformanceBg_BgState_o *nowBgState; // x21
  BattleBgComponent_array *BattleBgComponents; // x0
  struct BattlePerformanceBg_BgState_o *v15; // x8
  struct BattlePerformanceBg_BgState_o *v16; // x8
  struct BattlePerformanceBg_BgState_o *v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x21

  if ( (byte_4216BF9 & 1) == 0 )
  {
    sub_B0D8A4(&BattlePerformanceBg_BgState_TypeInfo, inName);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_4216BF9 = 1;
  }
  if ( this->fields.nowBgState )
  {
    bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
      goto LABEL_12;
    frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL) )
    {
LABEL_12:
      nowBgState = this->fields.nowBgState;
      BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v11);
      if ( !nowBgState )
        goto LABEL_32;
      BattlePerformanceBg_BgState__setSaveData(nowBgState, BattleBgComponents, 0LL);
      v15 = this->fields.nowBgState;
      if ( !v15 )
        goto LABEL_32;
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( !BattleBgComponents )
        goto LABEL_32;
      BattleBgComponents = (BattleBgComponent_array *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponents,
                                                        (System_Xml_XmlQualifiedName_o *)v15->fields.bgName,
                                                        (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__);
      if ( ((unsigned __int8)BattleBgComponents & 1) != 0 )
      {
        v16 = this->fields.nowBgState;
        if ( !v16 )
          goto LABEL_32;
        BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
        if ( !BattleBgComponents )
          goto LABEL_32;
        BattleBgComponents = (BattleBgComponent_array *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
                                                          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponents,
                                                          (System_Xml_XmlQualifiedName_o *)v16->fields.bgName,
                                                          (const MethodInfo_2E4C6D4 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__);
      }
      v17 = this->fields.nowBgState;
      if ( !v17 )
        goto LABEL_32;
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( !BattleBgComponents )
        goto LABEL_32;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponents,
        (System_Xml_XmlQualifiedName_o *)v17->fields.bgName,
        (System_Xml_Schema_XmlSchemaObject_o *)v17,
        (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
    }
  }
  if ( !inName )
    return 0LL;
  BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
  if ( !BattleBgComponents )
LABEL_32:
    sub_B0D97C(BattleBgComponents);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponents,
          (System_Xml_XmlQualifiedName_o *)inName,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__) )
  {
    v20 = sub_B0D974(BattlePerformanceBg_BgState_TypeInfo, v18, v19);
    BattlePerformanceBg_BgState___ctor((BattlePerformanceBg_BgState_o *)v20, inName, 0LL);
    if ( v20 )
    {
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( BattleBgComponents )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponents,
          *(System_Xml_XmlQualifiedName_o **)(v20 + 16),
          (System_Xml_Schema_XmlSchemaObject_o *)v20,
          (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
        return (BattlePerformanceBg_BgState_o *)v20;
      }
    }
    goto LABEL_32;
  }
  BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
  if ( !BattleBgComponents )
    goto LABEL_32;
  return (BattlePerformanceBg_BgState_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                            (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)BattleBgComponents,
                                            (System_Type_o *)inName,
                                            (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__);
}


void __fastcall BattlePerformanceBg__setCutNodeNoble(BattlePerformanceBg_o *this, bool flg, const MethodInfo *method)
{
  BattleBgComponent_array *BattleBgComponents; // x0
  int max_length; // w8
  BattleBgComponent_array *v6; // x19
  unsigned int v7; // w21
  bool v8; // w20
  __int64 v9; // x0

  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 1, method);
  if ( !BattleBgComponents )
    goto LABEL_11;
  max_length = BattleBgComponents->max_length;
  v6 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v7 = 0;
    v8 = flg;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        v9 = sub_B0D9A8(BattleBgComponents);
        sub_B0D948(v9, 0LL);
      }
      BattleBgComponents = (BattleBgComponent_array *)v6->m_Items[v7];
      if ( !BattleBgComponents )
        break;
      if ( BYTE1(BattleBgComponents->m_Items[1]) )
        BattleBgComponent__setCutNodeNoble((BattleBgComponent_o *)BattleBgComponents, v8, 0LL);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_11:
    sub_B0D97C(BattleBgComponents);
  }
}


void __fastcall BattlePerformanceBg__setSaveData(
        BattlePerformanceBg_o *this,
        BattlePerformanceBg_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct BattlePerformanceBg_SaveData_CompSaveData_array *compSaveDataList; // x8
  struct BattlePerformanceBg_BgState_o *v7; // x0
  struct BattlePerformanceBg_BgState_o **p_nowBgState; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *compDictionary; // x0
  const MethodInfo *v16; // x2
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v17; // x21
  int max_length; // w8
  unsigned int v19; // w22
  BattlePerformanceBg_SaveData_CompSaveData_o *v20; // x25
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  __int64 v22; // x0

  if ( (byte_4216BE6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__, saveData);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__, v5);
    byte_4216BE6 = 1;
  }
  if ( saveData )
  {
    this->fields.loadbgno = saveData->fields.bgNo;
    this->fields.loadbgType = saveData->fields.bgTp;
    compSaveDataList = saveData->fields.compSaveDataList;
    if ( compSaveDataList )
    {
      if ( *(_QWORD *)&compSaveDataList->max_length )
      {
        v7 = BattlePerformanceBg__saveHistoryBgState(this, saveData->fields.bgName, method);
        p_nowBgState = &this->fields.nowBgState;
        this->fields.nowBgState = v7;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.nowBgState,
          (System_Int32_array **)v7,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
        v17 = saveData->fields.compSaveDataList;
        if ( !v17 )
          goto LABEL_21;
        max_length = v17->max_length;
        if ( max_length >= 1 )
        {
          v19 = 0;
          while ( 1 )
          {
            if ( v19 >= max_length )
            {
              v22 = sub_B0D9A8(compDictionary);
              sub_B0D948(v22, 0LL);
            }
            if ( !*p_nowBgState )
              break;
            v20 = v17->m_Items[v19];
            if ( !v20 )
              break;
            compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*p_nowBgState)->fields.compDictionary;
            if ( !compDictionary )
              break;
            compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(compDictionary, (System_Xml_XmlQualifiedName_o *)v20->fields.bgCompName, (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
            if ( ((unsigned __int8)compDictionary & 1) == 0 )
            {
              if ( !*p_nowBgState )
                break;
              compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*p_nowBgState)->fields.compDictionary;
              if ( !compDictionary )
                break;
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                compDictionary,
                (System_Xml_XmlQualifiedName_o *)v20->fields.bgCompName,
                (System_Xml_Schema_XmlSchemaObject_o *)v20->fields.bgCompData,
                (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
            }
            max_length = v17->max_length;
            if ( (int)++v19 >= max_length )
              goto LABEL_18;
          }
LABEL_21:
          sub_B0D97C(compDictionary);
        }
LABEL_18:
        nowBgState = this->fields.nowBgState;
        compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattlePerformanceBg__getBattleBgComponents(this, 0, v16);
        if ( !nowBgState )
          goto LABEL_21;
        BattlePerformanceBg_BgState__loadSaveData(
          nowBgState,
          (BattleBgComponent_array *)compDictionary,
          this->fields.actionCamera,
          0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg_BgInfo___ctor(
        BattlePerformanceBg_BgInfo_o *this,
        int32_t No,
        int32_t tp,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool changeDirect,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  float v16; // s11
  float v17; // s12
  float v18; // s13
  BattlePerformanceBg_BgInfo_o *v20; // x24

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v16 = pos.fields.z;
  v17 = pos.fields.y;
  v18 = pos.fields.x;
  v20 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v20->fields.callback = callback;
  v20 = (BattlePerformanceBg_BgInfo_o *)((char *)v20 + 56);
  LODWORD(v20[-1].fields.pos.fields.x) = No;
  LODWORD(v20[-1].fields.pos.fields.y) = tp;
  v20[-1].fields.pos.fields.z = v18;
  v20[-1].fields.rot.fields.x = v17;
  v20[-1].fields.rot.fields.y = v16;
  v20[-1].fields.rot.fields.z = x;
  *(float *)&v20[-1].fields.changeDirect = y;
  *(float *)(&v20[-1].fields.parentCamera + 3) = z;
  LOBYTE(v20[-1].fields.callback) = changeDirect;
  BYTE1(v20[-1].fields.callback) = parentCamera;
  sub_B0D840(v20, callback);
}


void __fastcall BattlePerformanceBg_BgState___ctor(
        BattlePerformanceBg_BgState_o *this,
        System_String_o *inName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattlePerformanceBg_BgState_Fields *p_fields; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v9; // x20

  if ( (byte_4211EA0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__, inName);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo, v5);
    byte_4211EA0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.bgName = inName;
  p_fields = &this->fields;
  sub_B0D840(p_fields, inName);
  v9 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                       System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo,
                                                                                       v7,
                                                                                       v8);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v9,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__);
  p_fields->compDictionary = (struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *)v9;
  sub_B0D840(&p_fields->compDictionary, v9);
}


void __fastcall BattlePerformanceBg_BgState__loadSaveData(
        BattlePerformanceBg_BgState_o *this,
        BattleBgComponent_array *list,
        BattleActionCamera_o *actionCamera,
        const MethodInfo *method)
{
  BattlePerformanceBg_BgState_o *v6; // x21
  __int64 v7; // x1
  signed int max_length; // w8
  unsigned int v9; // w24
  BattleBgComponent_o *v10; // x22
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *compDictionary; // x23
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v12; // x23
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v14; // x0

  v6 = this;
  if ( (byte_4211EA2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__, list);
    this = (BattlePerformanceBg_BgState_o *)sub_B0D8A4(
                                              &Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__,
                                              v7);
    byte_4211EA2 = 1;
  }
  if ( !list )
    goto LABEL_15;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v14 = sub_B0D9A8(this);
        sub_B0D948(v14, 0LL);
      }
      v10 = list->m_Items[v9];
      if ( !v10 )
        break;
      v10[1].klass = (BattleBgComponent_c *)actionCamera;
      sub_B0D840(&v10[1], actionCamera);
      if ( LOBYTE(v10->fields.motionKey) )
      {
        compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.compDictionary;
        this = (BattlePerformanceBg_BgState_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v10, 0LL);
        if ( !compDictionary )
          break;
        this = (BattlePerformanceBg_BgState_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                  compDictionary,
                                                  (System_Xml_XmlQualifiedName_o *)this,
                                                  (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v12 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v6->fields.compDictionary;
          this = (BattlePerformanceBg_BgState_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v10, 0LL);
          if ( !v12 )
            break;
          Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                   v12,
                   (System_Type_o *)this,
                   (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__);
          BattleBgComponent__loadSaveData(v10, (BattleBgComponent_SaveData_o *)Item, 0LL);
        }
      }
      max_length = list->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_15:
    sub_B0D97C(this);
  }
}


void __fastcall BattlePerformanceBg_BgState__setSaveData(
        BattlePerformanceBg_BgState_o *this,
        BattleBgComponent_array *list,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *compDictionary; // x0
  signed int max_length; // w8
  unsigned int v8; // w24
  BattleBgComponent_o *v9; // x22
  struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *v10; // x21
  System_String_o *name; // x23
  __int64 v12; // x0

  if ( (byte_4211EA1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__, list);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__, v5);
    byte_4211EA1 = 1;
  }
  compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_14;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    compDictionary,
    (const MethodInfo_2E4AE44 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__);
  if ( !list )
    goto LABEL_14;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
      {
        v12 = sub_B0D9A8(compDictionary);
        sub_B0D948(v12, 0LL);
      }
      v9 = list->m_Items[v8];
      if ( !v9 )
        break;
      if ( LOBYTE(v9->fields.motionKey) )
      {
        v10 = this->fields.compDictionary;
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v9, 0LL);
        compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponent__getSaveData(v9, 0LL);
        if ( !v10 )
          break;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v10,
          (System_Xml_XmlQualifiedName_o *)name,
          (System_Xml_Schema_XmlSchemaObject_o *)compDictionary,
          (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
      }
      max_length = list->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_14:
    sub_B0D97C(compDictionary);
  }
}


void __fastcall BattlePerformanceBg_ChangedBgArgs___ctor(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        int32_t bgNo,
        int32_t bgType,
        bool useParentCamera,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._BgNo_k__BackingField = bgNo;
  this->fields._UseParentCamera_k__BackingField = useParentCamera;
}


int32_t __fastcall BattlePerformanceBg_ChangedBgArgs__get_BgNo(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._BgNo_k__BackingField;
}


int32_t __fastcall BattlePerformanceBg_ChangedBgArgs__get_BgType(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._BgType_k__BackingField;
}


bool __fastcall BattlePerformanceBg_ChangedBgArgs__get_UseParentCamera(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._UseParentCamera_k__BackingField;
}


void __fastcall BattlePerformanceBg_ChangedBgArgs__set_BgNo(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BgNo_k__BackingField = value;
}


void __fastcall BattlePerformanceBg_ChangedBgArgs__set_BgType(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BgType_k__BackingField = value;
}


void __fastcall BattlePerformanceBg_ChangedBgArgs__set_UseParentCamera(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._UseParentCamera_k__BackingField = value;
}


void __fastcall BattlePerformanceBg_SaveData___ctor(BattlePerformanceBg_SaveData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v6; // x1

  if ( (byte_4211EA3 & 1) == 0 )
  {
    sub_B0D8A4(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, method);
    sub_B0D8A4(&string_TypeInfo, v3);
    byte_4211EA3 = 1;
  }
  *(_QWORD *)&this->fields.bgNo = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.bgName = static_fields->Empty;
  sub_B0D840(&this->fields, Empty);
  v6 = (struct BattlePerformanceBg_SaveData_CompSaveData_array *)sub_B0D8BC(
                                                                   BattlePerformanceBg_SaveData_CompSaveData___TypeInfo,
                                                                   0LL);
  this->fields.compSaveDataList = v6;
  sub_B0D840(&this->fields.compSaveDataList, v6);
}


void __fastcall BattlePerformanceBg_SaveData_CompSaveData___ctor(
        BattlePerformanceBg_SaveData_CompSaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass46_0___ctor(
        BattlePerformanceBg___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass46_0___LoadBgSpShadowEffect_b__0(
        BattlePerformanceBg___c__DisplayClass46_0_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass47_0___ctor(
        BattlePerformanceBg___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass47_0___endloadBg_b__0(
        BattlePerformanceBg___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  BattlePerformanceBg_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  BattlePerformanceBg__endloadBgAll(_4__this, this->fields.data, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass67_0___ctor(
        BattlePerformanceBg___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattlePerformanceBg___c__DisplayClass67_0___FindComponentByKey_b__0(
        BattlePerformanceBg___c__DisplayClass67_0_o *this,
        BattleBgComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return BattleBgComponent__checkKey(x, this->fields.key, 0LL);
}