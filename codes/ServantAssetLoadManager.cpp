void __fastcall ServantAssetLoadManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *v6; // x19
  struct ServantAssetLoadManager_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w1
  struct ServantAssetLoadManager_StaticFields *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FB718 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__, v1);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo, v3);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FB718 = 1;
  }
  ServantAssetLoadManager_TypeInfo->static_fields->KeepAssetPlayerServantCount = 3;
  v6 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                    System_Collections_Generic_Dictionary_string__ServantAssetArgs__TypeInfo,
                                                                    v1,
                                                                    v2);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v6,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs___ctor__);
  static_fields = ServantAssetLoadManager_TypeInfo->static_fields;
  static_fields->unloadIgnoredAssetArgs = (struct System_Collections_Generic_Dictionary_string__ServantAssetArgs__o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->unloadIgnoredAssetArgs, (int32_t)v6, v8, v9);
  v10 = (int)StringLiteral_1/*""*/;
  v11 = ServantAssetLoadManager_TypeInfo->static_fields;
  v11->wkSpace = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->wkSpace, v10, v12, v13);
}


void __fastcall ServantAssetLoadManager___ctor(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_Dictionary_int__object__o *v29; // x20
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_Dictionary_int__object__o *v34; // x20
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_object__o *v39; // x20
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_Generic_List_object__o *v44; // x20
  int32_t v45; // w2
  int32_t v46; // w3
  __int64 v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_Dictionary_object__object__o *v49; // x20
  int32_t v50; // w2
  int32_t v51; // w3

  if ( (byte_49FB717 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__Object___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__string___ctor__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__string__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__Object__TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetData___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v11);
    sub_1B640C8(&System_Collections_Generic_List_AssetData__TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__, v13);
    byte_49FB717 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadedList = (struct System_Collections_Generic_List_string__o *)v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.loadedList, (int32_t)v14, v15, v16);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadlist = (struct System_Collections_Generic_List_string__o *)v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.loadlist, (int32_t)v19, v20, v21);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v22,
                                                       v23);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.downloadlist = (struct System_Collections_Generic_List_string__o *)v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.downloadlist, (int32_t)v24, v25, v26);
  v29 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__SePlayer__TypeInfo,
                                                                  v27,
                                                                  v28);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v29,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__SePlayer___ctor__);
  this->fields.ActorVoice = (struct System_Collections_Generic_Dictionary_int__SePlayer__o *)v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.ActorVoice, (int32_t)v29, v30, v31);
  v34 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__string__TypeInfo,
                                                                  v32,
                                                                  v33);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v34,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
  this->fields.LastActorVoice = (struct System_Collections_Generic_Dictionary_int__string__o *)v34;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.LastActorVoice, (int32_t)v34, v35, v36);
  v39 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_AssetData__TypeInfo,
                                                       v37,
                                                       v38);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v39;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bgAssetDataList, (int32_t)v39, v40, v41);
  v44 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v42,
                                                       v43);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.nobleEffectList = (struct System_Collections_Generic_List_string__o *)v44;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.nobleEffectList, (int32_t)v44, v45, v46);
  this->fields.InitPoint.fields.z = 0.0;
  *(_QWORD *)&this->fields.InitPoint.fields.x = 0x3D4CCCCD00000000LL;
  v49 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__Object__TypeInfo,
                                                                     v47,
                                                                     v48);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v49,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__Object___ctor__);
  this->fields._releaseAssets = (struct System_Collections_Generic_Dictionary_string__Object__o *)v49;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._releaseAssets, (int32_t)v49, v50, v51);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager___ctor__);
}


bool __fastcall ServantAssetLoadManager__CheckLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadlist; // x0

  if ( (byte_49FB711 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, path);
    byte_49FB711 = 1;
  }
  loadlist = this->fields.loadlist;
  if ( !loadlist )
    sub_1B64324(0LL);
  return System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)loadlist,
           (Il2CppObject *)path,
           (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__);
}


void __fastcall ServantAssetLoadManager__DebugPrint(
        ServantAssetLoadManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  if ( !data || (this = (ServantAssetLoadManager_o *)AssetData__GetObjectNameList(data, 0LL)) == 0LL )
    sub_1B64324(this);
}


void __fastcall ServantAssetLoadManager__DownLoadAssetsByArgs(ServantAssetArgs_o *args, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FB6AB & 1) == 0 )
  {
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, method);
    byte_49FB6AB = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__PreloadAssetsByArgs(args, 1, v2);
}


void __fastcall ServantAssetLoadManager__DownloadSkillCutInLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *v4; // x0
  const MethodInfo *v5; // x2
  System_String_o *SkillCutInPath; // x1
  const MethodInfo *v7; // x3

  if ( skillInfo )
  {
    v4 = (ServantAssetLoadManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))skillInfo->klass->vtable._7_getCutInId.method)(
                                        skillInfo,
                                        skillInfo->klass->vtable._8_PreLoad.methodPtr,
                                        method);
    if ( (int)v4 >= 1 )
    {
      SkillCutInPath = ServantAssetLoadManager__getSkillCutInPath(v4, (int32_t)v4, v5);
      ServantAssetLoadManager__setLoadList(this, SkillCutInPath, 1, v7);
    }
  }
}


void __fastcall ServantAssetLoadManager__EndPlaySe(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ServantAssetLoadManager__EndRetryTransition(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_object__object__o *Instance; // x0
  ServantAssetLoadManager_c *v11; // x0
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  ServantAssetArgs_o *currentValue; // x19
  int32_t v15; // w24
  ServantAssetLoadManager_c *v16; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FB710 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__, v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__,
      v4);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__,
      v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__get_Current__,
      v6);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v8);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__,
      v9);
    byte_49FB710 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  this->fields._IsRetryTransition_k__BackingField = 0;
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  LODWORD(Instance[1].fields._syncRoot) = 3;
  v11 = ServantAssetLoadManager_TypeInfo;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v11 = ServantAssetLoadManager_TypeInfo;
  }
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)v11->static_fields->unloadIgnoredAssetArgs;
  if ( !Instance )
    goto LABEL_22;
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                          Instance,
                                                                          (const MethodInfo_3179228 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Values__);
  if ( !Instance )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v17,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_37BDDB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__ServantAssetArgs__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v12 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v18,
            (const MethodInfo_3277270 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__MoveNext__);
    if ( !v12 )
      break;
    currentValue = (ServantAssetArgs_o *)v18.fields._currentValue;
    if ( !v18.fields._currentValue )
      sub_1B64324(v12);
    if ( SLODWORD(v18.fields._currentValue[5].monitor) >= 1 )
    {
      v15 = 0;
      do
      {
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        ServantAssetLoadManager__UnloadAssetsByArgs(currentValue, v13);
        ++v15;
      }
      while ( v15 < currentValue->fields._UnloadCount_k__BackingField );
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v18,
    (const MethodInfo_327726C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__ServantAssetArgs__Dispose__);
  v16 = ServantAssetLoadManager_TypeInfo;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v16 = ServantAssetLoadManager_TypeInfo;
  }
  Instance = (System_Collections_Generic_Dictionary_object__object__o *)v16->static_fields->unloadIgnoredAssetArgs;
  if ( !Instance )
LABEL_22:
    sub_1B64324(Instance);
  System_Collections_Generic_Dictionary_object__object___Clear(
    Instance,
    (const MethodInfo_3179580 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__Clear__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAssetLoadManager__ExistPreloadBattleActor(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t appearanceId,
        bool isForce,
        const MethodInfo *method)
{
  System_String_o *PreloadBattleActorFolderName; // x19

  if ( (byte_49FB6C3 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&svtId);
    byte_49FB6C3 = 1;
  }
  PreloadBattleActorFolderName = ServantAssetLoadManager__GetPreloadBattleActorFolderName(
                                   this,
                                   svtId,
                                   limitCount,
                                   appearanceId,
                                   isForce,
                                   method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__isExistAssetStorage(PreloadBattleActorFolderName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAssetLoadManager__ExistsBattleVoice(
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        int32_t type,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_49FB6F1 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_49FB6F1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return ServantAssetLoadManager__ExistsBattleVoiceLocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limit,
           overwriteSvtVoiceId,
           type,
           v10);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAssetLoadManager__ExistsBattleVoiceLocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t VoicePrefix; // w24
  const MethodInfo *v16; // x3
  int32_t VoiceId; // w0
  int32_t v18; // w9
  Il2CppObject *v19; // x20
  Il2CppObject *FileName; // x0
  System_String_o *v21; // x19
  Il2CppObject *Instance; // x20
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  int32_t v26; // [xsp+8h] [xbp-68h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49FB6F2 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v11);
    sub_1B640C8(&Voice_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_24843/*"{0:D0}_{1}"*/, v13);
    sub_1B640C8(&StringLiteral_12599/*"Servants_"*/, v14);
    byte_49FB6F2 = 1;
  }
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, *(const MethodInfo **)&overwriteSvtVoiceId);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v16);
  if ( overwriteSvtVoiceId )
    v18 = overwriteSvtVoiceId;
  else
    v18 = VoiceId;
  v26 = VoicePrefix;
  v27 = v18;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = (Il2CppObject *)Voice__getFileName(type, 0LL);
  v21 = System_String__Format_61389768((System_String_o *)StringLiteral_24843/*"{0:D0}_{1}"*/, v19, FileName, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v23 = System_Int32__ToString((int32_t)&v27, 0LL);
  v24 = System_String__Concat_61375396((System_String_o *)StringLiteral_12599/*"Servants_"*/, v23, 0LL);
  if ( !Instance )
    sub_1B64324(v24);
  return SoundManager__IsExistsSound((SoundManager_o *)Instance, v24, v21, 0LL);
}


System_Collections_IEnumerator_o *__fastcall ServantAssetLoadManager__GetAheadBg(
        ServantAssetLoadManager_o *this,
        WellFired_USFGOChangeBgEvent_array *bgList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FB6FC & 1) == 0 )
  {
    sub_1B640C8(&ServantAssetLoadManager__GetAheadBg_d__155_TypeInfo, bgList);
    byte_49FB6FC = 1;
  }
  v7 = sub_1B64314(ServantAssetLoadManager__GetAheadBg_d__155_TypeInfo, bgList, callback);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 32) = bgList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)bgList, v10, v11);
  *(_QWORD *)(v7 + 48) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)callback, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


System_String_o *__fastcall ServantAssetLoadManager__GetCommandCodeFolderName(
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FB70E & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&StringLiteral_4594/*"CommandCodes/Texture/"*/, v3);
    byte_49FB70E = 1;
  }
  v6 = commandCodeId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Concat((Il2CppObject *)StringLiteral_4594/*"CommandCodes/Texture/"*/, v4, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__GetLastVoiceType(int32_t uniqueId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_49FB6F5 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_49FB6F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return ServantAssetLoadManager__GetLastVoiceTypeLocal((ServantAssetLoadManager_o *)Instance, uniqueId, v4);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__GetLastVoiceTypeLocal(
        ServantAssetLoadManager_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_int__string__o *LastActorVoice; // x0
  ServantAssetLoadManager_c *v9; // x0

  if ( (byte_49FB6F6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__, *(_QWORD *)&uniqueId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__string__get_Item__, v5);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v6);
    byte_49FB6F6 = 1;
  }
  LastActorVoice = this->fields.LastActorVoice;
  if ( !LastActorVoice )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)LastActorVoice,
         uniqueId,
         (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__string__ContainsKey__) )
  {
    LastActorVoice = this->fields.LastActorVoice;
    if ( LastActorVoice )
      return (System_String_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                  (System_Collections_Generic_Dictionary_int__object__o *)LastActorVoice,
                                  uniqueId,
                                  (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__string__get_Item__);
LABEL_10:
    sub_1B64324(LastActorVoice);
  }
  v9 = ServantAssetLoadManager_TypeInfo;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v9 = ServantAssetLoadManager_TypeInfo;
  }
  return v9->static_fields->wkSpace;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantAssetLoadManager__GetLimitImageIndex(
        int32_t svtId,
        int32_t limitCount,
        int32_t limitDiff,
        const MethodInfo *method)
{
  int v5; // w19

  v5 = limitCount;
  if ( (byte_49FB68E & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    byte_49FB68E = 1;
  }
  if ( v5 <= 10 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    return ImageLimitCount__GetImageLimitCount(svtId, v5, 0LL) + limitDiff;
  }
  return v5;
}


int32_t __fastcall ServantAssetLoadManager__GetNPSeqIdFromCachedAssetName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  Il2CppClass *klass; // x8
  System_String_o *namespaze; // x19
  System_String_o *FileNameWithoutExtension; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_49FB712 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_Path_TypeInfo, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v2);
    byte_49FB712 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  klass = Instance[7].klass;
  if ( !klass )
    return 0;
  result = 0;
  namespaze = (System_String_o *)klass->_1.namespaze;
  if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
  FileNameWithoutExtension = System_IO_Path__GetFileNameWithoutExtension(namespaze, 0LL);
  if ( System_Int32__TryParse(FileNameWithoutExtension, &result, 0LL) )
    return result;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__GetPrefixVoiceId(
        ServantAssetLoadManager_o *this,
        int32_t servantId,
        int32_t limitCount,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *v10; // x0
  int32_t VoicePrefix; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FB6EE & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&servantId);
    sub_1B640C8(&StringLiteral_24843/*"{0:D0}_{1}"*/, v9);
    byte_49FB6EE = 1;
  }
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, servantId, limitCount, (const MethodInfo *)voiceId);
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &VoicePrefix);
  return System_String__Format_61389768((System_String_o *)StringLiteral_24843/*"{0:D0}_{1}"*/, v10, (Il2CppObject *)voiceId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__GetPreloadBattleActorFolderName(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t appearanceId,
        bool isForce,
        const MethodInfo *method)
{
  int32_t v10; // w0

  if ( (byte_49FB6C2 & 1) == 0 )
  {
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
    byte_49FB6C2 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( appearanceId < 1 )
  {
    v10 = svtId;
    if ( isForce )
      return ServantAssetLoadManager__getActorFolderName_37621032(v10, *(const MethodInfo **)&svtId);
  }
  else
  {
    v10 = appearanceId;
    if ( isForce )
      return ServantAssetLoadManager__getActorFolderName_37621032(v10, *(const MethodInfo **)&svtId);
  }
  return ServantAssetLoadManager__getActorFolderName(v10, limitCount, *(const MethodInfo **)&limitCount);
}


System_Func_Shader__Shader__Shader__o *__fastcall ServantAssetLoadManager__GetReplaceChocoShaderFunc(
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ServantAssetLoadManager___c_c *v9; // x0
  System_Func_T1__T2__TResult__o *_9__95_0; // x20
  Il2CppObject *v11; // x21
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Object_array *ComponentsInChildren_object__48794364; // x0
  __int64 v16; // x1
  __int64 v17; // x8
  Il2CppObject *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x2

  if ( (byte_49FB6C9 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleServantDeadComponent_getReplaceChocoShader__, method);
    sub_1B640C8(&System_Func_Shader__Shader__Shader__TypeInfo, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__95_0__, v7);
    sub_1B640C8(&ServantAssetLoadManager___c_TypeInfo, v8);
    byte_49FB6C9 = 1;
  }
  v9 = ServantAssetLoadManager___c_TypeInfo;
  if ( !ServantAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager___c_TypeInfo);
    v9 = ServantAssetLoadManager___c_TypeInfo;
  }
  _9__95_0 = (System_Func_T1__T2__TResult__o *)v9->static_fields->__9__95_0;
  if ( !_9__95_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = ServantAssetLoadManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__95_0 = (System_Func_T1__T2__TResult__o *)sub_1B64314(System_Func_Shader__Shader__Shader__TypeInfo, method, v2);
    System_Func_object__object__object____ctor(
      _9__95_0,
      v11,
      Method_ServantAssetLoadManager___c__GetReplaceChocoShaderFunc_b__95_0__,
      0LL);
    static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__95_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__95_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__95_0, (int32_t)_9__95_0, v13, v14);
  }
  if ( !obj )
    sub_1B64324(v9);
  ComponentsInChildren_object__48794364 = UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                            obj,
                                            (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( ComponentsInChildren_object__48794364
    && (v17 = *(_QWORD *)&ComponentsInChildren_object__48794364->max_length) != 0 )
  {
    if ( !(_DWORD)v17 )
      sub_1B6432C(ComponentsInChildren_object__48794364, v16);
    v18 = ComponentsInChildren_object__48794364->m_Items[0];
  }
  else
  {
    v18 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL) )
  {
    _9__95_0 = (System_Func_T1__T2__TResult__o *)sub_1B64314(System_Func_Shader__Shader__Shader__TypeInfo, v19, v20);
    System_Func_object__object__object____ctor(
      _9__95_0,
      v18,
      Method_BattleServantDeadComponent_getReplaceChocoShader__,
      0LL);
  }
  return (System_Func_Shader__Shader__Shader__o *)_9__95_0;
}


System_Func_Shader__Shader__Shader__o *__fastcall ServantAssetLoadManager__GetReplaceDeadShaderFunc(
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ServantAssetLoadManager___c_c *v9; // x0
  System_Func_T1__T2__TResult__o *_9__94_0; // x20
  Il2CppObject *v11; // x21
  struct ServantAssetLoadManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Object_array *ComponentsInChildren_object__48794364; // x0
  __int64 v16; // x1
  __int64 v17; // x8
  Il2CppObject *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x2

  if ( (byte_49FB6C8 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleServantDeadComponent_getReplaceDeadShader__, method);
    sub_1B640C8(&System_Func_Shader__Shader__Shader__TypeInfo, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__94_0__, v7);
    sub_1B640C8(&ServantAssetLoadManager___c_TypeInfo, v8);
    byte_49FB6C8 = 1;
  }
  v9 = ServantAssetLoadManager___c_TypeInfo;
  if ( !ServantAssetLoadManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager___c_TypeInfo);
    v9 = ServantAssetLoadManager___c_TypeInfo;
  }
  _9__94_0 = (System_Func_T1__T2__TResult__o *)v9->static_fields->__9__94_0;
  if ( !_9__94_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = ServantAssetLoadManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__94_0 = (System_Func_T1__T2__TResult__o *)sub_1B64314(System_Func_Shader__Shader__Shader__TypeInfo, method, v2);
    System_Func_object__object__object____ctor(
      _9__94_0,
      v11,
      Method_ServantAssetLoadManager___c__GetReplaceDeadShaderFunc_b__94_0__,
      0LL);
    static_fields = ServantAssetLoadManager___c_TypeInfo->static_fields;
    static_fields->__9__94_0 = (struct System_Func_Shader__Shader__Shader__o *)_9__94_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__94_0, (int32_t)_9__94_0, v13, v14);
  }
  if ( !obj )
    sub_1B64324(v9);
  ComponentsInChildren_object__48794364 = UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                            obj,
                                            (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleServantDeadComponent___);
  if ( ComponentsInChildren_object__48794364
    && (v17 = *(_QWORD *)&ComponentsInChildren_object__48794364->max_length) != 0 )
  {
    if ( !(_DWORD)v17 )
      sub_1B6432C(ComponentsInChildren_object__48794364, v16);
    v18 = ComponentsInChildren_object__48794364->m_Items[0];
  }
  else
  {
    v18 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL) )
  {
    _9__94_0 = (System_Func_T1__T2__TResult__o *)sub_1B64314(System_Func_Shader__Shader__Shader__TypeInfo, v19, v20);
    System_Func_object__object__object____ctor(
      _9__94_0,
      v18,
      Method_BattleServantDeadComponent_getReplaceDeadShader__,
      0LL);
  }
  return (System_Func_Shader__Shader__Shader__o *)_9__94_0;
}


bool __fastcall ServantAssetLoadManager__IsIgnoreUnloadServant(BattleServantData_o *data, const MethodInfo *method)
{
  BattleServantData_o *v2; // x19
  int32_t uniqueId; // w19
  ServantAssetLoadManager_c *v5; // x0

  v2 = data;
  if ( (byte_49FB6B0 & 1) == 0 )
  {
    data = (BattleServantData_o *)sub_1B640C8(&ServantAssetLoadManager_TypeInfo, method);
    byte_49FB6B0 = 1;
  }
  if ( !v2 )
    sub_1B64324(data);
  if ( v2->fields.isEnemy || v2->fields.followerType )
    return v2->fields.isEnemy;
  uniqueId = v2->fields.uniqueId;
  v5 = ServantAssetLoadManager_TypeInfo;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v5 = ServantAssetLoadManager_TypeInfo;
  }
  return uniqueId <= v5->static_fields->KeepAssetPlayerServantCount;
}


bool __fastcall ServantAssetLoadManager__IsKeepAssetAvailable(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppClass *klass; // x8
  __int64 methodPtr_low; // x11
  Il2CppClass *v9; // x19
  Il2CppClass *element_class; // x8

  if ( (byte_49FB70F & 1) == 0 )
  {
    sub_1B640C8(&BattleRootComponent_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v2);
    sub_1B640C8(&OptionManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1B640C8(&StringLiteral_6364/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/, v5);
    byte_49FB70F = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_6364/*"FLAG_BATTLE_RETRY_UNAVAILABLE"*/, 0LL) > 0 )
    return 0;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0LL) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  klass = Instance[2].klass;
  if ( klass
    && (methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
        *((unsigned __int8 *)klass->_1.image + 304) >= (unsigned int)methodPtr_low) )
  {
    if ( *(BattleRootComponent_c **)(*((_QWORD *)klass->_1.image + 25) + 8 * methodPtr_low - 8) == BattleRootComponent_TypeInfo )
      v9 = Instance[2].klass;
    else
      v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    return 0;
  if ( !v9 || (element_class = v9->_1.element_class) == 0LL )
LABEL_21:
    sub_1B64324(Instance);
  return BYTE4(element_class->vtable[25].methodPtr);
}


bool __fastcall ServantAssetLoadManager__IsStop(int32_t uniqueId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FB6F9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v4);
    byte_49FB6F9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)Instance[5].klass;
  if ( !Instance )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)Instance,
         uniqueId,
         (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( Instance )
    {
      Instance = (Il2CppObject *)Instance[5].klass;
      if ( Instance )
      {
        Instance = System_Collections_Generic_Dictionary_int__object___get_Item(
                     (System_Collections_Generic_Dictionary_int__object__o *)Instance,
                     uniqueId,
                     (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        if ( Instance )
          return LOBYTE(Instance[2].monitor) != 0;
      }
    }
LABEL_11:
    sub_1B64324(Instance);
  }
  return 1;
}


void __fastcall ServantAssetLoadManager__LoadBg(
        ServantAssetLoadManager_o *this,
        WellFired_USFGOChangeBgEvent_array *bgList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *AheadBg; // x1

  AheadBg = ServantAssetLoadManager__GetAheadBg(this, bgList, callback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, AheadBg, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__LoadNoblePhantasm(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        int32_t treasureDvcId,
        int32_t treasureDvcLv,
        int32_t npChargeStage,
        ServantAssetLoadManager_onGameObjectLoadComplete_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  UnityEngine_MonoBehaviour_o *v16; // x26
  System_Collections_IEnumerator_o *Manager__loadNoblePhantasmCoroutine; // x1
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]

  if ( (byte_49FB6FA & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtId);
    byte_49FB6FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  v16 = (UnityEngine_MonoBehaviour_o *)Instance;
  Manager__loadNoblePhantasmCoroutine = ServantAssetLoadManager__loadNoblePhantasmCoroutine(
                                          (ServantAssetLoadManager_o *)Instance,
                                          parent,
                                          svtId,
                                          limitCount,
                                          treasureDvcId,
                                          treasureDvcLv,
                                          npChargeStage,
                                          callback,
                                          v18);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008(v16, Manager__loadNoblePhantasmCoroutine, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__PreloadAssetsByArgs(
        ServantAssetArgs_o *args,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Item; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  int Weapon_k__BackingField; // w21
  int WeaponEffectId_k__BackingField; // w21
  int32_t EffectFolder_k__BackingField; // w22
  int32_t CameraId_k__BackingField; // w21
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_object__o *skillList_k__BackingField; // x20
  int32_t v16; // w21

  if ( (byte_49FB6AA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, dlOnly);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v5);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v6);
    byte_49FB6AA = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__preloadServant(args, dlOnly, method);
  if ( !args )
LABEL_24:
    sub_1B64324(Item);
  Weapon_k__BackingField = args->fields._Weapon_k__BackingField;
  if ( Weapon_k__BackingField >= 1 )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__preloadActorMotion(Weapon_k__BackingField, dlOnly, v8);
  }
  WeaponEffectId_k__BackingField = args->fields._WeaponEffectId_k__BackingField;
  if ( WeaponEffectId_k__BackingField >= 1 )
  {
    EffectFolder_k__BackingField = args->fields._EffectFolder_k__BackingField;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__preloadWeaponEffect(
      WeaponEffectId_k__BackingField,
      EffectFolder_k__BackingField,
      dlOnly,
      v9);
  }
  CameraId_k__BackingField = args->fields._CameraId_k__BackingField;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__preloadCameraAction(CameraId_k__BackingField, dlOnly, v8);
  ServantAssetLoadManager__preloadFromDeckServant(args->fields._deckSvt_k__BackingField, dlOnly, v14);
  skillList_k__BackingField = (System_Collections_Generic_List_object__o *)args->fields._skillList_k__BackingField;
  if ( skillList_k__BackingField && skillList_k__BackingField->fields._size >= 1 )
  {
    v16 = 0;
    do
    {
      if ( System_Collections_Generic_List_object___get_Item(
             skillList_k__BackingField,
             v16,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 skillList_k__BackingField,
                 v16,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
        if ( !Item )
          goto LABEL_24;
        ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))Item->klass->vtable[8].method)(
          Item,
          dlOnly,
          Item->klass->vtable[9].methodPtr);
      }
      ++v16;
    }
    while ( v16 < skillList_k__BackingField->fields._size );
  }
}


void __fastcall ServantAssetLoadManager__ShowAssetNotFoundError(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantAssetLoadManager__StopVoice(int32_t uniqueId, float fadeoutTime, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49FB6F7 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_49FB6F7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  ServantAssetLoadManager__localStopVoice((ServantAssetLoadManager_o *)Instance, uniqueId, fadeoutTime, v6);
}


bool __fastcall ServantAssetLoadManager__TryRegisterUnloadIgnoredArgs(
        ServantAssetArgs_o *args,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v8; // x1
  bool IsKeepAssetAvailable; // w20
  System_Collections_Generic_Dictionary_object__object__o *v10; // x21
  ServantAssetLoadManager_c *v11; // x0
  System_Collections_Generic_Dictionary_object__object__o *unloadIgnoredAssetArgs; // x21
  ServantAssetLoadManager_c *v13; // x0
  System_Collections_Generic_Dictionary_object__object__o *v14; // x21

  if ( (byte_49FB6AD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__, v4);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    byte_49FB6AD = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  IsKeepAssetAvailable = ServantAssetLoadManager__IsKeepAssetAvailable(Instance, v8);
  if ( IsKeepAssetAvailable )
  {
    Instance = (ServantAssetLoadManager_o *)ServantAssetLoadManager_TypeInfo;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Instance = (ServantAssetLoadManager_o *)ServantAssetLoadManager_TypeInfo;
    }
    if ( args )
    {
      v10 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(_QWORD *)&Instance[1].fields.m_CachedPtr
                                                                        + 8LL);
      Instance = (ServantAssetLoadManager_o *)ServantAssetArgs__get_UniqueKey(args, 0LL);
      if ( v10 )
      {
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v10,
                (Il2CppObject *)Instance,
                (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__ContainsKey__) )
        {
          v11 = ServantAssetLoadManager_TypeInfo;
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            v11 = ServantAssetLoadManager_TypeInfo;
          }
          unloadIgnoredAssetArgs = (System_Collections_Generic_Dictionary_object__object__o *)v11->static_fields->unloadIgnoredAssetArgs;
          Instance = (ServantAssetLoadManager_o *)ServantAssetArgs__get_UniqueKey(args, 0LL);
          if ( !unloadIgnoredAssetArgs )
            goto LABEL_20;
          System_Collections_Generic_Dictionary_object__object___set_Item(
            unloadIgnoredAssetArgs,
            (Il2CppObject *)Instance,
            (Il2CppObject *)args,
            (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__set_Item__);
        }
        v13 = ServantAssetLoadManager_TypeInfo;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          v13 = ServantAssetLoadManager_TypeInfo;
        }
        v14 = (System_Collections_Generic_Dictionary_object__object__o *)v13->static_fields->unloadIgnoredAssetArgs;
        Instance = (ServantAssetLoadManager_o *)ServantAssetArgs__get_UniqueKey(args, 0LL);
        if ( v14 )
        {
          Instance = (ServantAssetLoadManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                    v14,
                                                    (Il2CppObject *)Instance,
                                                    (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__ServantAssetArgs__get_Item__);
          if ( Instance )
          {
            ++LODWORD(Instance->fields.LastActorVoice);
            return IsKeepAssetAvailable;
          }
        }
      }
    }
LABEL_20:
    sub_1B64324(Instance);
  }
  return IsKeepAssetAvailable;
}


void __fastcall ServantAssetLoadManager__UnloadAllAsset(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__Object__o *releaseAssets; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v8; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_49FB6FE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__Object__get_Value__, v6);
    byte_49FB6FE = 1;
  }
  memset(&v8, 0, sizeof(v8));
  releaseAssets = this->fields._releaseAssets;
  if ( !releaseAssets )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v8,
    (System_Collections_Generic_Dictionary_object__object__o *)releaseAssets,
    (const MethodInfo_3179828 *)Method_System_Collections_Generic_Dictionary_string__Object__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v8,
            (const MethodInfo_3275FB0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__MoveNext__) )
    UnityEngine_Resources__UnloadAsset((UnityEngine_Object_o *)v8.fields._current.fields.value, 0LL);
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v8,
    (const MethodInfo_32760D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Object__Dispose__);
}


void __fastcall ServantAssetLoadManager__UnloadAssetsByArgs(ServantAssetArgs_o *args, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Item; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  int Weapon_k__BackingField; // w20
  int WeaponEffectId_k__BackingField; // w20
  int32_t EffectFolder_k__BackingField; // w21
  int32_t CameraId_k__BackingField; // w20
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_object__o *skillList_k__BackingField; // x19
  int32_t v14; // w20

  if ( (byte_49FB6AC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v3);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v4);
    byte_49FB6AC = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__unloadServant(args, method);
  if ( !args )
LABEL_24:
    sub_1B64324(Item);
  Weapon_k__BackingField = args->fields._Weapon_k__BackingField;
  if ( Weapon_k__BackingField >= 1 )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__unloadActorMotion(Weapon_k__BackingField, v6);
  }
  WeaponEffectId_k__BackingField = args->fields._WeaponEffectId_k__BackingField;
  if ( WeaponEffectId_k__BackingField >= 1 )
  {
    EffectFolder_k__BackingField = args->fields._EffectFolder_k__BackingField;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__unloadWeaponGroupEffect(WeaponEffectId_k__BackingField, EffectFolder_k__BackingField, v7);
  }
  CameraId_k__BackingField = args->fields._CameraId_k__BackingField;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__unloadCameraAction(CameraId_k__BackingField, v6);
  ServantAssetLoadManager__unloadFromDeckServant(args->fields._deckSvt_k__BackingField, v12);
  skillList_k__BackingField = (System_Collections_Generic_List_object__o *)args->fields._skillList_k__BackingField;
  if ( skillList_k__BackingField && skillList_k__BackingField->fields._size >= 1 )
  {
    v14 = 0;
    do
    {
      if ( System_Collections_Generic_List_object___get_Item(
             skillList_k__BackingField,
             v14,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__) )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 skillList_k__BackingField,
                 v14,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
        if ( !Item )
          goto LABEL_24;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[9].method)(
          Item,
          Item->klass->vtable[10].methodPtr);
      }
      ++v14;
    }
    while ( v14 < skillList_k__BackingField->fields._size );
  }
}


void __fastcall ServantAssetLoadManager__UnloadCommandCodeTextureLocal(
        ServantAssetLoadManager_o *this,
        System_Int32_array *commandCodeIds,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *v4; // x20
  __int64 v5; // x8
  unsigned __int64 v6; // x22
  int32_t v7; // w21
  System_String_o *CommandCodeFolderName; // x0
  const MethodInfo *v9; // x2

  v4 = this;
  if ( (byte_49FB70D & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1B640C8(&ServantAssetLoadManager_TypeInfo, commandCodeIds);
    byte_49FB70D = 1;
  }
  if ( commandCodeIds )
  {
    v5 = *(_QWORD *)&commandCodeIds->max_length;
    if ( (int)v5 >= 1 )
    {
      v6 = 0LL;
      do
      {
        if ( v6 >= (unsigned int)v5 )
          sub_1B6432C(this, commandCodeIds);
        v7 = commandCodeIds->m_Items[v6 + 1];
        if ( v7 >= 1 )
        {
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          CommandCodeFolderName = ServantAssetLoadManager__GetCommandCodeFolderName(
                                    v7,
                                    (const MethodInfo *)commandCodeIds);
          ServantAssetLoadManager__unloadTargetPathAssetLocal(v4, CommandCodeFolderName, v9);
          LODWORD(v5) = commandCodeIds->max_length;
        }
        ++v6;
      }
      while ( (__int64)v6 < (int)v5 );
    }
  }
}


void __fastcall ServantAssetLoadManager___GetAheadBg_b__155_0(
        ServantAssetLoadManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Collections_Generic_List_object__o *bgAssetDataList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_49FB719 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetData__Add__, data);
    byte_49FB719 = 1;
  }
  bgAssetDataList = (System_Collections_Generic_List_object__o *)this->fields.bgAssetDataList;
  if ( !bgAssetDataList
    || (items = bgAssetDataList->fields._items,
        v8 = Method_System_Collections_Generic_List_AssetData__Add__,
        ++bgAssetDataList->fields._version,
        !items) )
  {
    sub_1B64324(bgAssetDataList);
  }
  size = bgAssetDataList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      bgAssetDataList,
      (Il2CppObject *)data,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    bgAssetDataList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)data;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)data, (int32_t)method, v3);
  }
}


void __fastcall ServantAssetLoadManager___preloadCommandSpellAnyVoiceLocal_b__80_0(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  --this->fields.soundCount;
}


void __fastcall ServantAssetLoadManager___preloadServantVoicelocal_b__72_0(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  --this->fields.soundCount;
}


void __fastcall ServantAssetLoadManager___preloadServantVoicelocal_b__72_1(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  --this->fields.soundCount;
}


void __fastcall ServantAssetLoadManager___preloadSkillAnyVoiceLocal_b__76_0(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  --this->fields.soundCount;
}


void __fastcall ServantAssetLoadManager___preloadSkillAnyVoiceLocal_b__76_1(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  --this->fields.soundCount;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__changeChocoDeadShader(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v2; // x23
  __int64 v3; // x1
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v18; // x25
  unsigned __int64 v19; // x19
  UnityEngine_Object_o *v20; // x20
  float v21; // s13
  float v22; // s14
  float v23; // s15
  float g; // s11
  float r; // s12
  UnityEngine_Shader_o *v26; // x20
  Il2CppObject *object; // x21
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v29; // x1
  UnityEngine_Transform_o *NodeFromName; // x22
  UnityEngine_GameObject_c *v31; // x8
  UnityEngine_GameObject_o *v32; // x23
  unsigned __int64 v33; // x27
  UnityEngine_Object_o *v34; // x24
  int v35; // w8
  UnityEngine_GameObject_o *v36; // x25
  unsigned int v37; // w19
  UnityEngine_GameObject_c **v38; // x8
  UnityEngine_Material_o *v39; // x26
  UnityEngine_Shader_o *v40; // x0
  int v41; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  float v47; // s8
  float v48; // s9
  float v49; // s10
  float v50; // s8
  float v51; // s9
  float v52; // s10
  float v53; // s8
  UnityEngine_GameObject_o *v54; // [xsp+8h] [xbp-E8h]
  float b; // [xsp+14h] [xbp-DCh]
  float a; // [xsp+18h] [xbp-D8h]
  float value; // [xsp+1Ch] [xbp-D4h]
  UnityEngine_Bounds_o v58; // [xsp+20h] [xbp-D0h] BYREF
  UnityEngine_Bounds_o v59; // [xsp+38h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = obj;
  if ( (byte_49FB6CB & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_Texture2D___, v4);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_16106/*"_ClipSharpnessY"*/, v6);
    sub_1B640C8(&StringLiteral_16110/*"_Color"*/, v7);
    sub_1B640C8(&StringLiteral_20867/*"joint_all_Base"*/, v8);
    sub_1B640C8(&StringLiteral_16091/*"_ChocoTex"*/, v9);
    sub_1B640C8(&StringLiteral_24570/*"weapon"*/, v10);
    sub_1B640C8(&StringLiteral_12673/*"Shaders/ChocoMap"*/, v11);
    sub_1B640C8(&StringLiteral_16323/*"_Use_alphawidth"*/, v12);
    sub_1B640C8(&StringLiteral_4931/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, v13);
    sub_1B640C8(&StringLiteral_17287/*"body"*/, v14);
    obj = (UnityEngine_GameObject_o *)sub_1B640C8(&StringLiteral_16066/*"_AddColor"*/, v15);
    byte_49FB6CB = 1;
  }
  if ( !v2 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                      v2,
                                      (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !obj )
    goto LABEL_53;
  klass = obj[1].klass;
  v18 = obj;
  a = 0.0;
  value = 1.0;
  if ( (int)klass < 1 )
  {
LABEL_12:
    v21 = 0.0;
    v22 = 0.0;
    v23 = 0.0;
    g = 1.0;
    r = 1.0;
    b = 1.0;
    goto LABEL_13;
  }
  v19 = 0LL;
  while ( 1 )
  {
    if ( v19 >= (unsigned int)klass )
      goto LABEL_54;
    v20 = (UnityEngine_Object_o *)*((_QWORD *)&v18[1].monitor + v19);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v20, 0LL, 0LL);
    if ( ((unsigned __int8)obj & 1) == 0 )
      break;
    LODWORD(klass) = v18[1].klass;
    if ( (__int64)++v19 >= (int)klass )
      goto LABEL_12;
  }
  if ( !v20 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v20, 0LL);
  if ( !obj )
    goto LABEL_53;
  value = 1.0;
  g = 1.0;
  r = 1.0;
  b = 1.0;
  if ( UnityEngine_Material__HasProperty_68994004(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16110/*"_Color"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v20, 0LL);
    if ( !obj )
      goto LABEL_53;
    Color = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16110/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    value = Color.fields.a;
  }
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v20, 0LL);
  if ( !obj )
LABEL_53:
    sub_1B64324(obj);
  if ( UnityEngine_Material__HasProperty_68994004(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16066/*"_AddColor"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v20, 0LL);
    if ( obj )
    {
      v65 = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16066/*"_AddColor"*/, 0LL);
      v23 = v65.fields.r;
      v22 = v65.fields.g;
      v21 = v65.fields.b;
      a = v65.fields.a;
      goto LABEL_13;
    }
    goto LABEL_53;
  }
  v21 = 0.0;
  v22 = 0.0;
  v23 = 0.0;
LABEL_13:
  v26 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4931/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, 0LL);
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_12673/*"Shaders/ChocoMap"*/,
             (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_Texture2D___);
  transform = UnityEngine_GameObject__get_transform(v2, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_20867/*"joint_all_Base"*/, 0, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  obj = (UnityEngine_GameObject_o *)ServantAssetLoadManager__GetReplaceDeadShaderFunc(v2, v29);
  v31 = v18[1].klass;
  if ( (int)v31 >= 1 )
  {
    v32 = obj;
    v33 = 0LL;
    v54 = v18;
    while ( 1 )
    {
      if ( v33 >= (unsigned int)v31 )
        goto LABEL_54;
      v34 = (UnityEngine_Object_o *)*((_QWORD *)&v18[1].monitor + v33);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v34, 0LL, 0LL);
      if ( ((unsigned __int8)obj & 1) == 0 )
      {
        if ( !v34 )
          goto LABEL_53;
        obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v34, 0LL);
        if ( !obj )
          goto LABEL_53;
        v35 = (int)obj[1].klass;
        v36 = obj;
        if ( v35 >= 1 )
          break;
      }
LABEL_41:
      v18 = v54;
      ++v33;
      LODWORD(v31) = v54[1].klass;
      if ( (__int64)v33 >= (int)v31 )
        return;
    }
    v37 = 0;
    while ( v37 < v35 )
    {
      v38 = &v36->klass + (int)v37;
      v39 = (UnityEngine_Material_o *)v38[4];
      if ( !v39 )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v38[4], 0LL);
      if ( !v32 )
        goto LABEL_53;
      v40 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(_QWORD, UnityEngine_GameObject_o *, UnityEngine_Shader_o *, _QWORD))v32[1].klass)(
                                      *(_QWORD *)&v32[2].fields.m_CachedPtr,
                                      obj,
                                      v26,
                                      *(_QWORD *)&v32[1].fields.m_CachedPtr);
      UnityEngine_Material__set_shader(v39, v40, 0LL);
      v62.fields.b = b;
      v62.fields.a = value;
      v62.fields.r = r;
      v62.fields.g = g;
      UnityEngine_Material__SetColor(v39, (System_String_o *)StringLiteral_16110/*"_Color"*/, v62, 0LL);
      v63.fields.a = a;
      v63.fields.r = v23;
      v63.fields.g = v22;
      v63.fields.b = v21;
      UnityEngine_Material__SetColor(v39, (System_String_o *)StringLiteral_16066/*"_AddColor"*/, v63, 0LL);
      UnityEngine_Material__SetTexture(
        v39,
        (System_String_o *)StringLiteral_16091/*"_ChocoTex"*/,
        (UnityEngine_Texture_o *)object,
        0LL);
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v34, 0LL);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0LL);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_17287/*"body"*/, 0LL) )
        goto LABEL_34;
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v34, 0LL);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0LL);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_24570/*"weapon"*/, 0LL) )
      {
LABEL_34:
        obj = (UnityEngine_GameObject_o *)UnityEngine_SkinnedMeshRenderer__get_rootBone(
                                            (UnityEngine_SkinnedMeshRenderer_o *)v34,
                                            0LL);
        if ( !obj )
          goto LABEL_53;
        *(UnityEngine_Vector3_o *)&v41 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)obj, 0LL);
        if ( !NodeFromName )
          goto LABEL_53;
        v60 = UnityEngine_Transform__InverseTransformPoint(NodeFromName, *(UnityEngine_Vector3_o *)&v41, 0LL);
        x = v60.fields.x;
        y = v60.fields.y;
        z = v60.fields.z;
        localPosition = UnityEngine_Transform__get_localPosition(NodeFromName, 0LL);
        v47 = x - localPosition.fields.x;
        v48 = y - localPosition.fields.y;
        v49 = z - localPosition.fields.z;
        UnityEngine_Renderer__get_localBounds(&v59, (UnityEngine_Renderer_o *)v34, 0LL);
        v50 = v47 + v59.fields.m_Center.fields.x;
        v51 = v48 + v59.fields.m_Center.fields.y;
        v52 = v49 + v59.fields.m_Center.fields.z;
        UnityEngine_Renderer__get_localBounds(&v59, (UnityEngine_Renderer_o *)v34, 0LL);
        v58.fields.m_Center.fields.x = v50;
        v58.fields.m_Center.fields.y = v51;
        v58.fields.m_Center.fields.z = v52;
        *(float32x2_t *)&v58.fields.m_Extents.fields.x = vmul_f32(
                                                           vadd_f32(
                                                             *(float32x2_t *)&v59.fields.m_Extents.fields.x,
                                                             *(float32x2_t *)&v59.fields.m_Extents.fields.x),
                                                           (float32x2_t)0x3F0000003F000000LL);
        v58.fields.m_Extents.fields.z = (float)(v59.fields.m_Extents.fields.z + v59.fields.m_Extents.fields.z) * 0.5;
        UnityEngine_Renderer__set_localBounds((UnityEngine_Renderer_o *)v34, &v58, 0LL);
        UnityEngine_SkinnedMeshRenderer__set_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v34, NodeFromName, 0LL);
      }
      else
      {
        UnityEngine_Renderer__get_localBounds(&v59, (UnityEngine_Renderer_o *)v34, 0LL);
        v53 = v59.fields.m_Center.fields.y;
        UnityEngine_Renderer__get_localBounds(&v59, (UnityEngine_Renderer_o *)v34, 0LL);
        UnityEngine_Material__SetFloat(
          v39,
          (System_String_o *)StringLiteral_16106/*"_ClipSharpnessY"*/,
          v53 - v59.fields.m_Extents.fields.y,
          0LL);
      }
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__HasProperty_68994004(
                                          v39,
                                          (System_String_o *)StringLiteral_16323/*"_Use_alphawidth"*/,
                                          0LL);
      if ( ((unsigned __int8)obj & 1) != 0 )
        UnityEngine_Material__SetFloat(v39, (System_String_o *)StringLiteral_16323/*"_Use_alphawidth"*/, 1.0, 0LL);
      v35 = (int)v36[1].klass;
      if ( (int)++v37 >= v35 )
        goto LABEL_41;
    }
LABEL_54:
    sub_1B6432C(obj, v16);
  }
}


void __fastcall ServantAssetLoadManager__changeChocoSahder(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v14; // x21
  float a; // s9
  float v16; // s8
  unsigned __int64 v17; // x23
  UnityEngine_Object_o *v18; // x20
  float v19; // s13
  float v20; // s14
  float v21; // s15
  float b; // s10
  float g; // s11
  float r; // s12
  UnityEngine_Shader_o *v25; // x20
  const MethodInfo *v26; // x1
  Il2CppObject *object; // x21
  System_Func_Shader__Shader__Shader__o *ReplaceChocoShaderFunc; // x22
  UnityEngine_GameObject_c *v29; // x8
  UnityEngine_GameObject_o *v30; // x9
  unsigned __int64 v31; // x28
  UnityEngine_GameObject_o *v32; // x26
  UnityEngine_Object_o *v33; // x23
  int v34; // w8
  UnityEngine_GameObject_o *v35; // x23
  unsigned int v36; // w19
  UnityEngine_GameObject_c **v37; // x8
  UnityEngine_Material_o *v38; // x24
  UnityEngine_Shader_o *v39; // x0
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = obj;
  if ( (byte_49FB6CC & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_Texture2D___, v4);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_16110/*"_Color"*/, v6);
    sub_1B640C8(&StringLiteral_16091/*"_ChocoTex"*/, v7);
    sub_1B640C8(&StringLiteral_4930/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, v8);
    sub_1B640C8(&StringLiteral_12673/*"Shaders/ChocoMap"*/, v9);
    sub_1B640C8(&StringLiteral_16323/*"_Use_alphawidth"*/, v10);
    obj = (UnityEngine_GameObject_o *)sub_1B640C8(&StringLiteral_16066/*"_AddColor"*/, v11);
    byte_49FB6CC = 1;
  }
  if ( !v2 )
    goto LABEL_44;
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                      v2,
                                      (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !obj )
    goto LABEL_44;
  klass = obj[1].klass;
  v14 = obj;
  a = 1.0;
  v16 = 0.0;
  if ( (int)klass < 1 )
  {
LABEL_12:
    v19 = 0.0;
    v20 = 0.0;
    v21 = 0.0;
    b = 1.0;
    g = 1.0;
    r = 1.0;
    goto LABEL_13;
  }
  v17 = 0LL;
  while ( 1 )
  {
    if ( v17 >= (unsigned int)klass )
      goto LABEL_45;
    v18 = (UnityEngine_Object_o *)*((_QWORD *)&v14[1].monitor + v17);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v18, 0LL, 0LL);
    if ( ((unsigned __int8)obj & 1) == 0 )
      break;
    LODWORD(klass) = v14[1].klass;
    if ( (__int64)++v17 >= (int)klass )
      goto LABEL_12;
  }
  if ( !v18 )
    goto LABEL_44;
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v18, 0LL);
  if ( !obj )
    goto LABEL_44;
  a = 1.0;
  b = 1.0;
  g = 1.0;
  r = 1.0;
  if ( UnityEngine_Material__HasProperty_68994004(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16110/*"_Color"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v18, 0LL);
    if ( !obj )
      goto LABEL_44;
    Color = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16110/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    a = Color.fields.a;
  }
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v18, 0LL);
  if ( !obj )
LABEL_44:
    sub_1B64324(obj);
  if ( UnityEngine_Material__HasProperty_68994004(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16066/*"_AddColor"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v18, 0LL);
    if ( !obj )
      goto LABEL_44;
    v43 = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16066/*"_AddColor"*/, 0LL);
    v16 = v43.fields.r;
    v19 = v43.fields.g;
    v20 = v43.fields.b;
    v21 = v43.fields.a;
  }
  else
  {
    v19 = 0.0;
    v20 = 0.0;
    v21 = 0.0;
  }
LABEL_13:
  v25 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4930/*"Custom/SoftEdgeUnlitCutZ_Choco"*/, 0LL);
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_12673/*"Shaders/ChocoMap"*/,
             (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_Texture2D___);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ReplaceChocoShaderFunc = ServantAssetLoadManager__GetReplaceChocoShaderFunc(v2, v26);
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                      v2,
                                      (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !obj )
    goto LABEL_44;
  v29 = obj[1].klass;
  v30 = obj;
  if ( (int)v29 >= 1 )
  {
    v31 = 0LL;
    while ( 1 )
    {
      if ( v31 >= (unsigned int)v29 )
        goto LABEL_45;
      v32 = v30;
      v33 = (UnityEngine_Object_o *)*((_QWORD *)&v30[1].monitor + v31);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v33, 0LL, 0LL);
      if ( ((unsigned __int8)obj & 1) == 0 )
      {
        if ( !v33 )
          goto LABEL_44;
        obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v33, 0LL);
        if ( !obj )
          goto LABEL_44;
        v34 = (int)obj[1].klass;
        v35 = obj;
        if ( v34 >= 1 )
          break;
      }
LABEL_32:
      LODWORD(v29) = v32[1].klass;
      ++v31;
      v30 = v32;
      if ( (__int64)v31 >= (int)v29 )
        return;
    }
    v36 = 0;
    while ( v36 < v34 )
    {
      v37 = &v35->klass + (int)v36;
      v38 = (UnityEngine_Material_o *)v37[4];
      if ( !v38 )
        goto LABEL_44;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v37[4], 0LL);
      if ( !ReplaceChocoShaderFunc )
        goto LABEL_44;
      v39 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, UnityEngine_GameObject_o *, UnityEngine_Shader_o *, _QWORD))ReplaceChocoShaderFunc->fields.m_target)(
                                      ReplaceChocoShaderFunc->fields.original_method_info,
                                      obj,
                                      v25,
                                      *(_QWORD *)&ReplaceChocoShaderFunc->fields.extra_arg);
      UnityEngine_Material__set_shader(v38, v39, 0LL);
      v40.fields.r = r;
      v40.fields.g = g;
      v40.fields.b = b;
      v40.fields.a = a;
      UnityEngine_Material__SetColor(v38, (System_String_o *)StringLiteral_16110/*"_Color"*/, v40, 0LL);
      v41.fields.r = v16;
      v41.fields.g = v19;
      v41.fields.b = v20;
      v41.fields.a = v21;
      UnityEngine_Material__SetColor(v38, (System_String_o *)StringLiteral_16066/*"_AddColor"*/, v41, 0LL);
      UnityEngine_Material__SetTexture(
        v38,
        (System_String_o *)StringLiteral_16091/*"_ChocoTex"*/,
        (UnityEngine_Texture_o *)object,
        0LL);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__HasProperty_68994004(
                                          v38,
                                          (System_String_o *)StringLiteral_16323/*"_Use_alphawidth"*/,
                                          0LL);
      if ( ((unsigned __int8)obj & 1) != 0 )
        UnityEngine_Material__SetFloat(v38, (System_String_o *)StringLiteral_16323/*"_Use_alphawidth"*/, 1.0, 0LL);
      v34 = (int)v35[1].klass;
      if ( (int)++v36 >= v34 )
        goto LABEL_32;
    }
LABEL_45:
    sub_1B6432C(obj, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__changeDeadShader(UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v2; // x22
  __int64 v3; // x1
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
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v15; // x23
  unsigned __int64 v16; // x19
  UnityEngine_Object_o *v17; // x20
  float v18; // s13
  float v19; // s14
  float v20; // s15
  float g; // s11
  float r; // s12
  UnityEngine_Shader_o *v23; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v25; // x1
  UnityEngine_Transform_o *NodeFromName; // x21
  UnityEngine_GameObject_c *v27; // x8
  UnityEngine_GameObject_o *v28; // x22
  unsigned __int64 v29; // x29
  UnityEngine_Object_o *v30; // x23
  int v31; // w8
  UnityEngine_GameObject_o *v32; // x24
  unsigned int v33; // w27
  UnityEngine_GameObject_c **v34; // x8
  UnityEngine_Material_o *v35; // x25
  UnityEngine_Shader_o *v36; // x0
  int v37; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  float v43; // s8
  float v44; // s9
  float v45; // s10
  float v46; // s8
  float v47; // s9
  float v48; // s10
  float v49; // s8
  UnityEngine_GameObject_o *v50; // [xsp+8h] [xbp-E8h]
  float b; // [xsp+14h] [xbp-DCh]
  float a; // [xsp+18h] [xbp-D8h]
  float value; // [xsp+1Ch] [xbp-D4h]
  UnityEngine_Bounds_o v54; // [xsp+20h] [xbp-D0h] BYREF
  UnityEngine_Bounds_o v55; // [xsp+38h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = obj;
  if ( (byte_49FB6CA & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_16106/*"_ClipSharpnessY"*/, v5);
    sub_1B640C8(&StringLiteral_4929/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/, v6);
    sub_1B640C8(&StringLiteral_16110/*"_Color"*/, v7);
    sub_1B640C8(&StringLiteral_20867/*"joint_all_Base"*/, v8);
    sub_1B640C8(&StringLiteral_24570/*"weapon"*/, v9);
    sub_1B640C8(&StringLiteral_16323/*"_Use_alphawidth"*/, v10);
    sub_1B640C8(&StringLiteral_17287/*"body"*/, v11);
    obj = (UnityEngine_GameObject_o *)sub_1B640C8(&StringLiteral_16066/*"_AddColor"*/, v12);
    byte_49FB6CA = 1;
  }
  if ( !v2 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                      v2,
                                      (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !obj )
    goto LABEL_53;
  klass = obj[1].klass;
  v15 = obj;
  a = 0.0;
  value = 1.0;
  if ( (int)klass < 1 )
  {
LABEL_12:
    v18 = 0.0;
    v19 = 0.0;
    v20 = 0.0;
    g = 1.0;
    r = 1.0;
    b = 1.0;
    goto LABEL_13;
  }
  v16 = 0LL;
  while ( 1 )
  {
    if ( v16 >= (unsigned int)klass )
      goto LABEL_54;
    v17 = (UnityEngine_Object_o *)*((_QWORD *)&v15[1].monitor + v16);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v17, 0LL, 0LL);
    if ( ((unsigned __int8)obj & 1) == 0 )
      break;
    LODWORD(klass) = v15[1].klass;
    if ( (__int64)++v16 >= (int)klass )
      goto LABEL_12;
  }
  if ( !v17 )
    goto LABEL_53;
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v17, 0LL);
  if ( !obj )
    goto LABEL_53;
  value = 1.0;
  g = 1.0;
  r = 1.0;
  b = 1.0;
  if ( UnityEngine_Material__HasProperty_68994004(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16110/*"_Color"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v17, 0LL);
    if ( !obj )
      goto LABEL_53;
    Color = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16110/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    value = Color.fields.a;
  }
  obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v17, 0LL);
  if ( !obj )
LABEL_53:
    sub_1B64324(obj);
  if ( UnityEngine_Material__HasProperty_68994004(
         (UnityEngine_Material_o *)obj,
         (System_String_o *)StringLiteral_16066/*"_AddColor"*/,
         0LL) )
  {
    obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v17, 0LL);
    if ( obj )
    {
      v61 = UnityEngine_Material__GetColor((UnityEngine_Material_o *)obj, (System_String_o *)StringLiteral_16066/*"_AddColor"*/, 0LL);
      v20 = v61.fields.r;
      v19 = v61.fields.g;
      v18 = v61.fields.b;
      a = v61.fields.a;
      goto LABEL_13;
    }
    goto LABEL_53;
  }
  v18 = 0.0;
  v19 = 0.0;
  v20 = 0.0;
LABEL_13:
  v23 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4929/*"Custom/SoftEdgeUnlitCutZ (SoftClip)"*/, 0LL);
  transform = UnityEngine_GameObject__get_transform(v2, 0LL);
  NodeFromName = TransformHelper__getNodeFromName(transform, (System_String_o *)StringLiteral_20867/*"joint_all_Base"*/, 0, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  obj = (UnityEngine_GameObject_o *)ServantAssetLoadManager__GetReplaceDeadShaderFunc(v2, v25);
  v27 = v15[1].klass;
  if ( (int)v27 >= 1 )
  {
    v28 = obj;
    v29 = 0LL;
    v50 = v15;
    while ( 1 )
    {
      if ( v29 >= (unsigned int)v27 )
        goto LABEL_54;
      v30 = (UnityEngine_Object_o *)*((_QWORD *)&v15[1].monitor + v29);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v30, 0LL, 0LL);
      if ( ((unsigned __int8)obj & 1) == 0 )
      {
        if ( !v30 )
          goto LABEL_53;
        obj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v30, 0LL);
        if ( !obj )
          goto LABEL_53;
        v31 = (int)obj[1].klass;
        v32 = obj;
        if ( v31 >= 1 )
          break;
      }
LABEL_41:
      v15 = v50;
      ++v29;
      LODWORD(v27) = v50[1].klass;
      if ( (__int64)v29 >= (int)v27 )
        return;
    }
    v33 = 0;
    while ( v33 < v31 )
    {
      v34 = &v32->klass + (int)v33;
      v35 = (UnityEngine_Material_o *)v34[4];
      if ( !v35 )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v34[4], 0LL);
      if ( !v28 )
        goto LABEL_53;
      v36 = (UnityEngine_Shader_o *)((__int64 (__fastcall *)(_QWORD, UnityEngine_GameObject_o *, UnityEngine_Shader_o *, _QWORD))v28[1].klass)(
                                      *(_QWORD *)&v28[2].fields.m_CachedPtr,
                                      obj,
                                      v23,
                                      *(_QWORD *)&v28[1].fields.m_CachedPtr);
      UnityEngine_Material__set_shader(v35, v36, 0LL);
      v58.fields.b = b;
      v58.fields.a = value;
      v58.fields.r = r;
      v58.fields.g = g;
      UnityEngine_Material__SetColor(v35, (System_String_o *)StringLiteral_16110/*"_Color"*/, v58, 0LL);
      v59.fields.a = a;
      v59.fields.r = v20;
      v59.fields.g = v19;
      v59.fields.b = v18;
      UnityEngine_Material__SetColor(v35, (System_String_o *)StringLiteral_16066/*"_AddColor"*/, v59, 0LL);
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0LL);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0LL);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_17287/*"body"*/, 0LL) )
        goto LABEL_34;
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0LL);
      if ( !obj )
        goto LABEL_53;
      obj = (UnityEngine_GameObject_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)obj, 0LL);
      if ( !obj )
        goto LABEL_53;
      if ( System_String__StartsWith((System_String_o *)obj, (System_String_o *)StringLiteral_24570/*"weapon"*/, 0LL) )
      {
LABEL_34:
        obj = (UnityEngine_GameObject_o *)UnityEngine_SkinnedMeshRenderer__get_rootBone(
                                            (UnityEngine_SkinnedMeshRenderer_o *)v30,
                                            0LL);
        if ( !obj )
          goto LABEL_53;
        *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)obj, 0LL);
        if ( !NodeFromName )
          goto LABEL_53;
        v56 = UnityEngine_Transform__InverseTransformPoint(NodeFromName, *(UnityEngine_Vector3_o *)&v37, 0LL);
        x = v56.fields.x;
        y = v56.fields.y;
        z = v56.fields.z;
        localPosition = UnityEngine_Transform__get_localPosition(NodeFromName, 0LL);
        v43 = x - localPosition.fields.x;
        v44 = y - localPosition.fields.y;
        v45 = z - localPosition.fields.z;
        UnityEngine_Renderer__get_localBounds(&v55, (UnityEngine_Renderer_o *)v30, 0LL);
        v46 = v43 + v55.fields.m_Center.fields.x;
        v47 = v44 + v55.fields.m_Center.fields.y;
        v48 = v45 + v55.fields.m_Center.fields.z;
        UnityEngine_Renderer__get_localBounds(&v55, (UnityEngine_Renderer_o *)v30, 0LL);
        v54.fields.m_Center.fields.x = v46;
        v54.fields.m_Center.fields.y = v47;
        v54.fields.m_Center.fields.z = v48;
        *(float32x2_t *)&v54.fields.m_Extents.fields.x = vmul_f32(
                                                           vadd_f32(
                                                             *(float32x2_t *)&v55.fields.m_Extents.fields.x,
                                                             *(float32x2_t *)&v55.fields.m_Extents.fields.x),
                                                           (float32x2_t)0x3F0000003F000000LL);
        v54.fields.m_Extents.fields.z = (float)(v55.fields.m_Extents.fields.z + v55.fields.m_Extents.fields.z) * 0.5;
        UnityEngine_Renderer__set_localBounds((UnityEngine_Renderer_o *)v30, &v54, 0LL);
        UnityEngine_SkinnedMeshRenderer__set_rootBone((UnityEngine_SkinnedMeshRenderer_o *)v30, NodeFromName, 0LL);
      }
      else
      {
        UnityEngine_Renderer__get_localBounds(&v55, (UnityEngine_Renderer_o *)v30, 0LL);
        v49 = v55.fields.m_Center.fields.y;
        UnityEngine_Renderer__get_localBounds(&v55, (UnityEngine_Renderer_o *)v30, 0LL);
        UnityEngine_Material__SetFloat(
          v35,
          (System_String_o *)StringLiteral_16106/*"_ClipSharpnessY"*/,
          v49 - v55.fields.m_Extents.fields.y,
          0LL);
      }
      obj = (UnityEngine_GameObject_o *)UnityEngine_Material__HasProperty_68994004(
                                          v35,
                                          (System_String_o *)StringLiteral_16323/*"_Use_alphawidth"*/,
                                          0LL);
      if ( ((unsigned __int8)obj & 1) != 0 )
        UnityEngine_Material__SetFloat(v35, (System_String_o *)StringLiteral_16323/*"_Use_alphawidth"*/, 1.0, 0LL);
      v31 = (int)v32[1].klass;
      if ( (int)++v33 >= v31 )
        goto LABEL_41;
    }
LABEL_54:
    sub_1B6432C(obj, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAssetLoadManager__checkBattleVoice(
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        System_String_o *voiceTypeId,
        bool isNp,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v12; // x6

  if ( (byte_49FB6F3 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_49FB6F3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return ServantAssetLoadManager__checkBattleVoicelocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limit,
           overwriteSvtVoiceId,
           voiceTypeId,
           isNp,
           v12);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAssetLoadManager__checkBattleVoicelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        System_String_o *voiceTypeId,
        bool isNp,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  ServantEntity_o *SvtEntity; // x25
  const MethodInfo *v18; // x3
  int32_t VoicePrefix; // w26
  const MethodInfo *v20; // x3
  int32_t VoiceId; // w0
  int32_t v22; // w9
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  __int64 *v25; // x8
  System_String_o *v26; // x20
  System_String_o *v27; // x19
  System_String_o *v28; // x0
  System_String_o *v29; // x19
  int32_t v32; // [xsp+8h] [xbp-58h] BYREF
  int32_t v33; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49FB6F4 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&SoundManager_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_9462/*"NoblePhantasm_"*/, v14);
    sub_1B640C8(&StringLiteral_24843/*"{0:D0}_{1}"*/, v15);
    sub_1B640C8(&StringLiteral_12599/*"Servants_"*/, v16);
    byte_49FB6F4 = 1;
  }
  SvtEntity = ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&limit);
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, v18);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v20);
  if ( overwriteSvtVoiceId )
    v22 = overwriteSvtVoiceId;
  else
    v22 = VoiceId;
  v32 = VoicePrefix;
  v33 = v22;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
  v24 = System_String__Format_61389768((System_String_o *)StringLiteral_24843/*"{0:D0}_{1}"*/, v23, (Il2CppObject *)voiceTypeId, 0LL);
  if ( SvtEntity )
  {
    v25 = &StringLiteral_9462/*"NoblePhantasm_"*/;
    v26 = v24;
    if ( !isNp )
      v25 = &StringLiteral_12599/*"Servants_"*/;
    v27 = (System_String_o *)*v25;
    v28 = System_Int32__ToString((int32_t)&v33, 0LL);
    v29 = System_String__Concat_61375396(v27, v28, 0LL);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    return SoundManager__checkServantVoice(v29, v26, 0, 0LL);
  }
  else
  {
    return 0;
  }
}


bool __fastcall ServantAssetLoadManager__checkLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_49FB6A5 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_49FB6A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return ServantAssetLoadManager__checkLoadlocal((ServantAssetLoadManager_o *)Instance, v3);
}


bool __fastcall ServantAssetLoadManager__checkLoadlocal(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  ServantAssetLoadManager_o *v2; // x19
  struct System_Collections_Generic_List_string__o *loadlist; // x8
  struct System_Collections_Generic_List_string__o *downloadlist; // x8

  v2 = this;
  if ( (byte_49FB6A6 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, method);
    byte_49FB6A6 = 1;
  }
  loadlist = v2->fields.loadlist;
  if ( !loadlist )
    goto LABEL_9;
  if ( loadlist->fields._size > 0 )
    return 1;
  downloadlist = v2->fields.downloadlist;
  if ( !downloadlist )
LABEL_9:
    sub_1B64324(this);
  if ( downloadlist->fields._size > 0 )
    return 1;
  return v2->fields.soundCount > 0;
}


void __fastcall ServantAssetLoadManager__checkMaster(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  ServantStatusBattleListViewItem_o *p_svtlimitaddmaster; // x19
  struct ServantLimitAddMaster_o *svtlimitaddmaster; // t1
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_49FB68F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FB68F = 1;
  }
  if ( !this->fields.svtmaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    this->fields.svtmaster = (struct ServantMaster_o *)MasterData_object;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svtmaster, (int32_t)MasterData_object, v8, v9);
  }
  if ( !this->fields.svtlimitmaster )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_12;
    v10 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
    this->fields.svtlimitmaster = (struct ServantLimitMaster_o *)v10;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svtlimitmaster, (int32_t)v10, v11, v12);
  }
  svtlimitaddmaster = this->fields.svtlimitaddmaster;
  p_svtlimitaddmaster = (ServantStatusBattleListViewItem_o *)&this->fields.svtlimitaddmaster;
  if ( svtlimitaddmaster )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1B64324(Instance);
  v15 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  p_svtlimitaddmaster->klass = (ServantStatusBattleListViewItem_c *)v15;
  sub_1B6406C(p_svtlimitaddmaster, (int32_t)v15, v16, v17);
}


void __fastcall ServantAssetLoadManager__clearServantlist(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_49FB6A3 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_49FB6A3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  ServantAssetLoadManager__clearServantlistlocal((ServantAssetLoadManager_o *)Instance, v3);
}


void __fastcall ServantAssetLoadManager__clearServantlistlocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *v2; // x19
  struct System_Collections_Generic_List_string__o *loadlist; // x8
  int32_t size; // w2
  int v5; // w9
  struct System_Collections_Generic_List_string__o *downloadlist; // x8
  int32_t v7; // w2
  int v8; // w9
  struct System_Collections_Generic_List_string__o *loadedList; // x8
  int32_t v10; // w2
  int v11; // w9

  v2 = this;
  if ( (byte_49FB6A4 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1B640C8(&Method_System_Collections_Generic_List_string__Clear__, method);
    byte_49FB6A4 = 1;
  }
  loadlist = v2->fields.loadlist;
  if ( !loadlist )
    goto LABEL_13;
  size = loadlist->fields._size;
  v5 = loadlist->fields._version + 1;
  loadlist->fields._size = 0;
  loadlist->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)loadlist->fields._items, 0, size, 0LL);
  downloadlist = v2->fields.downloadlist;
  if ( !downloadlist )
    goto LABEL_13;
  v7 = downloadlist->fields._size;
  v8 = downloadlist->fields._version + 1;
  downloadlist->fields._size = 0;
  downloadlist->fields._version = v8;
  if ( v7 >= 1 )
    System_Array__Clear((System_Array_o *)downloadlist->fields._items, 0, v7, 0LL);
  loadedList = v2->fields.loadedList;
  if ( !loadedList )
LABEL_13:
    sub_1B64324(this);
  v10 = loadedList->fields._size;
  v11 = loadedList->fields._version + 1;
  loadedList->fields._size = 0;
  loadedList->fields._version = v11;
  if ( v10 >= 1 )
    System_Array__Clear((System_Array_o *)loadedList->fields._items, 0, v10, 0LL);
  v2->fields.soundCount = 0;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__createShadowEffect(
        ServantAssetLoadManager_o *this,
        int32_t tp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *v12; // x0
  Il2CppObject *object; // x0
  System_String_o *v14; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v16; // x19
  struct System_Collections_Generic_Dictionary_string__Object__o *releaseAssets; // x8
  int v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FB6FF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__, *(_QWORD *)&tp);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__Object__get_Item__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__Object__set_Item__, v6);
    sub_1B640C8(&UnityEngine_GameObject_TypeInfo, v7);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_GameObject___, v10);
    sub_1B640C8(&StringLiteral_18830/*"effect/ef_shadow0"*/, v11);
    byte_49FB6FF = 1;
  }
  v19 = tp + 1;
  v12 = System_Int32__ToString((int32_t)&v19, 0LL);
  object = (Il2CppObject *)System_String__Concat_61375396((System_String_o *)StringLiteral_18830/*"effect/ef_shadow0"*/, v12, 0LL);
  if ( !this->fields._releaseAssets )
    goto LABEL_16;
  v14 = (System_String_o *)object;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)this->fields._releaseAssets,
          object,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey__) )
  {
    object = UnityEngine_Resources__Load_object_(
               v14,
               (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_GameObject___);
    releaseAssets = this->fields._releaseAssets;
    if ( releaseAssets )
    {
      v16 = object;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        (System_Collections_Generic_Dictionary_object__object__o *)releaseAssets,
        (Il2CppObject *)v14,
        object,
        (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__Object__set_Item__);
      goto LABEL_13;
    }
LABEL_16:
    sub_1B64324(object);
  }
  object = (Il2CppObject *)this->fields._releaseAssets;
  if ( !object )
    goto LABEL_16;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)object,
           (Il2CppObject *)v14,
           (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__Object__get_Item__);
  if ( Item )
  {
    if ( (UnityEngine_GameObject_c *)Item->klass == UnityEngine_GameObject_TypeInfo )
      v16 = Item;
    else
      v16 = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
LABEL_13:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       v16,
                                       (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
}


void __fastcall ServantAssetLoadManager__endloadList(
        ServantAssetLoadManager_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_string__o *loadlist; // x0
  Il2CppObject *name; // x20

  if ( (byte_49FB6A9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, data);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Remove__, v5);
    byte_49FB6A9 = 1;
  }
  if ( data )
  {
    loadlist = this->fields.loadlist;
    if ( !loadlist )
      goto LABEL_13;
    name = (Il2CppObject *)data->fields.name;
    if ( System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)loadlist,
           name,
           (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      loadlist = this->fields.loadlist;
      if ( !loadlist )
        goto LABEL_13;
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)loadlist,
        name,
        (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_string__Remove__);
    }
    loadlist = this->fields.downloadlist;
    if ( !loadlist )
LABEL_13:
      sub_1B64324(loadlist);
    if ( System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)loadlist,
           name,
           (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__) )
    {
      loadlist = this->fields.downloadlist;
      if ( loadlist )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)loadlist,
          name,
          (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_string__Remove__);
        return;
      }
      goto LABEL_13;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getActorFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v7; // x3
  System_String_o *BattleChrId; // x0

  if ( (byte_49FB6BE & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    sub_1B640C8(&StringLiteral_12592/*"Servants/"*/, v5);
    byte_49FB6BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  BattleChrId = ServantAssetLoadManager__getBattleChrId((ServantAssetLoadManager_o *)Instance, svtId, limitCount, v7);
  return System_String__Concat_61375396((System_String_o *)StringLiteral_12592/*"Servants/"*/, BattleChrId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getActorFolderNameFromDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x21
  __int64 LimitCountByImageLimitCostumeIn; // x0
  const MethodInfo *v9; // x3
  System_String_o *BattleChrId; // x0

  if ( (byte_49FB6BD & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, *(_QWORD *)&displimitCount);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_12592/*"Servants/"*/, v6);
    byte_49FB6BD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByImageLimitCostumeIn = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(displimitCount, 0LL);
  if ( !Instance )
    sub_1B64324(LimitCountByImageLimitCostumeIn);
  BattleChrId = ServantAssetLoadManager__getBattleChrId(
                  (ServantAssetLoadManager_o *)Instance,
                  svtId,
                  LimitCountByImageLimitCostumeIn,
                  v9);
  return System_String__Concat_61375396((System_String_o *)StringLiteral_12592/*"Servants/"*/, BattleChrId, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getActorFolderName_37621032(
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FB6BF & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&StringLiteral_12592/*"Servants/"*/, v3);
    byte_49FB6BF = 1;
  }
  v6 = svtId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Concat((Il2CppObject *)StringLiteral_12592/*"Servants/"*/, v4, 0LL);
}


Il2CppObject *__fastcall ServantAssetLoadManager__getAssetObject_object_(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        System_String_o *file,
        const MethodInfo_2ED62E8 *method)
{
  Il2CppObject *result; // x0

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&AssetManager_TypeInfo, path);
    if ( !method->rgctx_data )
      sub_1BB6000();
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  result = (Il2CppObject *)AssetManager__getAssetStorage(path, 0LL);
  if ( result )
    return AssetData__GetObject_object__48347676(
             (AssetData_o *)result,
             file,
             (const MethodInfo_2E1BA1C *)method->rgctx_data->_1_AssetData_GetObject_T_);
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getBattleChrId(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantLimitAddMaster_o *svtlimitaddmaster; // x0

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtlimitaddmaster = this->fields.svtlimitaddmaster;
  if ( !svtlimitaddmaster )
    sub_1B64324(0LL);
  return ServantLimitAddMaster__getBattleChrId(svtlimitaddmaster, svtId, limitCount, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getCameraActionPath(int32_t cameraId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = cameraId;
  if ( (byte_49FB702 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12593/*"Servants/Camera/"*/, method);
    byte_49FB702 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_61375396((System_String_o *)StringLiteral_12593/*"Servants/Camera/"*/, v2, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getCommandCardLoadFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FB692 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B640C8(&StringLiteral_12595/*"Servants/Commands/"*/, v4);
    byte_49FB692 = 1;
  }
  v7 = svtId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Concat((Il2CppObject *)StringLiteral_12595/*"Servants/Commands/"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getCommandCardLoadFolderNameDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FB691 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&displimitCount);
    sub_1B640C8(&StringLiteral_12595/*"Servants/Commands/"*/, v4);
    byte_49FB691 = 1;
  }
  v7 = svtId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Concat((Il2CppObject *)StringLiteral_12595/*"Servants/Commands/"*/, v5, 0LL);
}


System_String_o *__fastcall ServantAssetLoadManager__getNameEffectPath(
        int32_t enemyNameEffectId,
        const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = enemyNameEffectId;
  if ( (byte_49FB716 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5787/*"Effect/BattleCommon/NameEffect/"*/, method);
    byte_49FB716 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_61375396((System_String_o *)StringLiteral_5787/*"Effect/BattleCommon/NameEffect/"*/, v2, 0LL);
}


int32_t __fastcall ServantAssetLoadManager__getSkillCutInId(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  if ( skillInfo )
    return ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._7_getCutInId.method)(
             skillInfo,
             skillInfo->klass->vtable._8_PreLoad.methodPtr);
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getSkillCutInPath(
        ServantAssetLoadManager_o *this,
        int32_t cutInId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FB6E3 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&cutInId);
    sub_1B640C8(&StringLiteral_5811/*"Effect/CutIn/Skill/{0}"*/, v4);
    byte_49FB6E3 = 1;
  }
  v7 = cutInId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Format((System_String_o *)StringLiteral_5811/*"Effect/CutIn/Skill/{0}"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getStatusImageFolderName(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FB69A & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B640C8(&StringLiteral_12598/*"Servants/Status/"*/, v4);
    byte_49FB69A = 1;
  }
  v7 = svtId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Concat((Il2CppObject *)StringLiteral_12598/*"Servants/Status/"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAssetLoadManager__getStatusImageFolderNameDisp(
        int32_t svtId,
        int32_t displimitCount,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FB699 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&displimitCount);
    sub_1B640C8(&StringLiteral_12598/*"Servants/Status/"*/, v4);
    byte_49FB699 = 1;
  }
  v7 = svtId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Concat((Il2CppObject *)StringLiteral_12598/*"Servants/Status/"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantEntity_o *__fastcall ServantAssetLoadManager__getSvtEntity(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *svtmaster; // x0

  if ( (byte_49FB690 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, *(_QWORD *)&svtId);
    byte_49FB690 = 1;
  }
  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtmaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.svtmaster;
  if ( !svtmaster )
    sub_1B64324(0LL);
  return (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              svtmaster,
                              svtId,
                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantLimitAddEntity_o *__fastcall ServantAssetLoadManager__getSvtLimitAddEntity(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  ServantLimitAddMaster_o *svtlimitaddmaster; // x0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  entity = 0LL;
  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtlimitaddmaster = this->fields.svtlimitaddmaster;
  if ( !svtlimitaddmaster )
    sub_1B64324(0LL);
  if ( ServantLimitAddMaster__TryGetEntity(svtlimitaddmaster, &entity, svtId, limitCnt, 0LL) )
    return entity;
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
ServantLimitEntity_o *__fastcall ServantAssetLoadManager__getSvtLimitEntity(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  ServantLimitMaster_o *svtlimitmaster; // x0

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  svtlimitmaster = this->fields.svtlimitmaster;
  if ( !svtlimitmaster )
    sub_1B64324(0LL);
  return ServantLimitMaster__GetEntity(svtlimitmaster, svtId, limitCnt, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantAssetLoadManager__getVoiceId(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 SvtVoiceId; // x0

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, 0LL);
  if ( !this->fields.svtlimitaddmaster )
    sub_1B64324(SvtVoiceId);
  return ServantLimitAddMaster__getVoiceId(this->fields.svtlimitaddmaster, SvtVoiceId, limitCount, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantAssetLoadManager__getVoicePrefix(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 SvtVoiceId; // x0

  ServantAssetLoadManager__checkMaster(this, *(const MethodInfo **)&svtId);
  SvtVoiceId = ServantVoiceMaster__getSvtVoiceId(svtId, 0LL);
  if ( !this->fields.svtlimitaddmaster )
    sub_1B64324(SvtVoiceId);
  return ServantLimitAddMaster__getVoicePrefix(this->fields.svtlimitaddmaster, SvtVoiceId, limitCount, 0LL);
}


bool __fastcall ServantAssetLoadManager__get_IsRetryTransition(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  return this->fields._IsRetryTransition_k__BackingField;
}


int32_t __fastcall ServantAssetLoadManager__get_retryStatus(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  return this->fields._retryStatus_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadActorEffectFromActor(
        int32_t svtId,
        int32_t limitCount,
        int32_t weapongroup,
        System_String_o *name,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v9; // w3
  const MethodInfo *v10; // x5

  if ( (byte_49FB6D1 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_49FB6D1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return ServantAssetLoadManager__loadActorEffectlocalFromActor(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limitCount,
           v9,
           name,
           v10);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadActorEffectlocalFromActor(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t weapongroup,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v10; // x1
  System_String_o *BattleChrId; // x0
  System_String_o *v12; // x1

  if ( (byte_49FB6D2 & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, *(_QWORD *)&svtId);
    sub_1B640C8(&StringLiteral_12592/*"Servants/"*/, v10);
    byte_49FB6D2 = 1;
  }
  BattleChrId = ServantAssetLoadManager__getBattleChrId(this, svtId, limitCount, *(const MethodInfo **)&weapongroup);
  v12 = System_String__Concat_61375396((System_String_o *)StringLiteral_12592/*"Servants/"*/, BattleChrId, 0LL);
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_object_(
                                       this,
                                       v12,
                                       name,
                                       (const MethodInfo_2ED62E8 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadActorMotion(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t weapongroup,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x4

  if ( (byte_49FB6E8 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtId);
    byte_49FB6E8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return ServantAssetLoadManager__loadActorMotionlocal(
           (ServantAssetLoadManager_o *)Instance,
           parent,
           v7,
           weapongroup,
           v8);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadActorMotionlocal(
        ServantAssetLoadManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t weapongroup,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  Il2CppObject *AssetObject_object; // x19
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_GameObject_o *v15; // x19
  UnityEngine_Transform_o *v16; // x21
  __int64 v17; // x1
  UnityEngine_Transform_o *v18; // x20
  __int64 v19; // x1
  UnityEngine_Transform_o *v20; // x20
  __int64 v21; // x1
  UnityEngine_Transform_o *v22; // x20
  int32_t v24; // [xsp+Ch] [xbp-44h] BYREF

  v24 = weapongroup;
  if ( (byte_49FB6E9 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, parent);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v8);
    sub_1B640C8(&StringLiteral_21431/*"motion"*/, v9);
    sub_1B640C8(&StringLiteral_12596/*"Servants/Motion/"*/, v10);
    byte_49FB6E9 = 1;
  }
  v11 = System_Int32__ToString((int32_t)&v24, 0LL);
  v12 = System_String__Concat_61375396((System_String_o *)StringLiteral_12596/*"Servants/Motion/"*/, v11, 0LL);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         v12,
                         (System_String_o *)StringLiteral_21431/*"motion"*/,
                         (const MethodInfo_2ED62E8 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            AssetObject_object,
                                            (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_18;
  v15 = transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !parent )
    goto LABEL_18;
  v16 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v16 )
    goto LABEL_18;
  UnityEngine_Transform__set_parent(v16, (UnityEngine_Transform_o *)transform, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v15, 0LL);
  v18 = (UnityEngine_Transform_o *)transform;
  if ( !byte_49F7111 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v17);
    byte_49F7111 = 1;
  }
  if ( !v18 )
    goto LABEL_18;
  UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v15, 0LL);
  v20 = (UnityEngine_Transform_o *)transform;
  if ( !byte_49F7119 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v19);
    byte_49F7119 = 1;
  }
  if ( !v20 )
    goto LABEL_18;
  UnityEngine_Transform__set_eulerAngles(v20, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v15, 0LL);
  v22 = (UnityEngine_Transform_o *)transform;
  if ( !byte_49F7116 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v21);
    byte_49F7116 = 1;
  }
  if ( !v22 )
LABEL_18:
    sub_1B64324(transform);
  UnityEngine_Transform__set_localScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v15;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_TextAsset_o *__fastcall ServantAssetLoadManager__loadAnimEvents(
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x4

  if ( (byte_49FB6CD & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_49FB6CD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return ServantAssetLoadManager__loadAnimEventslocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limitCount,
           isForce,
           v8);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_TextAsset_o *__fastcall ServantAssetLoadManager__loadAnimEventslocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *ActorFolderName_37621032; // x0

  if ( (byte_49FB6CE & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantAssetLoadManager_getAssetObject_TextAsset___, *(_QWORD *)&svtId);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_19306/*"fbxevent"*/, v10);
    byte_49FB6CE = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( isForce )
    ActorFolderName_37621032 = ServantAssetLoadManager__getActorFolderName_37621032(svtId, *(const MethodInfo **)&svtId);
  else
    ActorFolderName_37621032 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 *(const MethodInfo **)&limitCount);
  if ( !this )
    sub_1B64324(ActorFolderName_37621032);
  return (UnityEngine_TextAsset_o *)ServantAssetLoadManager__getAssetObject_object_(
                                      this,
                                      ActorFolderName_37621032,
                                      (System_String_o *)StringLiteral_19306/*"fbxevent"*/,
                                      (const MethodInfo_2ED62E8 *)Method_ServantAssetLoadManager_getAssetObject_TextAsset___);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadBattleActor(
        System_String_o **assetPath,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v12; // x6

  if ( (byte_49FB6C4 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, parent);
    byte_49FB6C4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return ServantAssetLoadManager__loadBattleActorlocal(
           (ServantAssetLoadManager_o *)Instance,
           assetPath,
           parent,
           svtId,
           limitCount,
           isForce,
           v12);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadBattleActorlocal(
        ServantAssetLoadManager_o *this,
        System_String_o **assetPath,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        bool isForce,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_o *ActorFolderName_37621032; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *AssetObject_object; // x20
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_GameObject_o *v22; // x20
  UnityEngine_Transform_o *v23; // x22
  __int64 v24; // x1
  UnityEngine_Transform_o *v25; // x19
  __int64 v26; // x1
  UnityEngine_Transform_o *v27; // x19

  if ( (byte_49FB6C5 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, assetPath);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v14);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_17894/*"chr"*/, v16);
    byte_49FB6C5 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( isForce )
    ActorFolderName_37621032 = ServantAssetLoadManager__getActorFolderName_37621032(
                                 svtId,
                                 (const MethodInfo *)assetPath);
  else
    ActorFolderName_37621032 = ServantAssetLoadManager__getActorFolderName(
                                 svtId,
                                 limitCount,
                                 (const MethodInfo *)parent);
  *assetPath = ActorFolderName_37621032;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)assetPath, (int32_t)ActorFolderName_37621032, v18, v19);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         *assetPath,
                         (System_String_o *)StringLiteral_17894/*"chr"*/,
                         (const MethodInfo_2ED62E8 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                            AssetObject_object,
                                            (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_21;
  v22 = transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
  if ( !parent )
    goto LABEL_21;
  v23 = (UnityEngine_Transform_o *)transform;
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v23 )
    goto LABEL_21;
  UnityEngine_Transform__set_parent(v23, (UnityEngine_Transform_o *)transform, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v22, 0LL);
  if ( !transform )
    goto LABEL_21;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.InitPoint, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v22, 0LL);
  v25 = (UnityEngine_Transform_o *)transform;
  if ( !byte_49F7119 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v24);
    byte_49F7119 = 1;
  }
  if ( !v25 )
    goto LABEL_21;
  UnityEngine_Transform__set_eulerAngles(v25, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
  transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v22, 0LL);
  v27 = (UnityEngine_Transform_o *)transform;
  if ( !byte_49F7116 )
  {
    transform = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v26);
    byte_49F7116 = 1;
  }
  if ( !v27 )
LABEL_21:
    sub_1B64324(transform);
  UnityEngine_Transform__set_localScale(v27, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  return v22;
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadBattleCommonEffect(
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_49FB6DF & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, name);
    byte_49FB6DF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return ServantAssetLoadManager__loadBattleCommonEffectLocal((ServantAssetLoadManager_o *)Instance, path, name, v6);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadBattleCommonEffectLocal(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__48347676; // x19

  if ( (byte_49FB6E0 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, path);
    sub_1B640C8(&AssetManager_TypeInfo, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FB6E0 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
    Object_object__48347676 = AssetData__GetObject_object__48347676(
                                AssetStorage,
                                name,
                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  else
    Object_object__48347676 = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL) )
    return (UnityEngine_GameObject_o *)Object_object__48347676;
  else
    return 0LL;
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadCameraAction(
        int32_t cameraId,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_49FB704 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, parent);
    byte_49FB704 = 1;
  }
  if ( !cameraId )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return ServantAssetLoadManager__loadCameraActionlocal((ServantAssetLoadManager_o *)Instance, cameraId, parent, v6);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadCameraActionlocal(
        ServantAssetLoadManager_o *this,
        int32_t cameraId,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *CameraActionPath; // x0
  Il2CppObject *AssetObject_object; // x22
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *v15; // x22
  __int64 v16; // x1
  UnityEngine_Transform_o *v17; // x19
  __int64 v18; // x1
  UnityEngine_Transform_o *v19; // x19

  if ( (byte_49FB705 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, *(_QWORD *)&cameraId);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v8);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_17639/*"cameraAction"*/, v10);
    byte_49FB705 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, *(const MethodInfo **)&cameraId);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         CameraActionPath,
                         (System_String_o *)StringLiteral_17639/*"cameraAction"*/,
                         (const MethodInfo_2ED62E8 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)AssetObject_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              AssetObject_object,
                                              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_22;
    v13 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !parent )
      goto LABEL_22;
    v15 = (UnityEngine_Transform_o *)transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)parent, 0LL);
    if ( !v15 )
      goto LABEL_22;
    UnityEngine_Transform__set_parent(v15, (UnityEngine_Transform_o *)transform, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
    if ( !transform )
      goto LABEL_22;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, this->fields.InitPoint, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
    v17 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49F7119 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v16);
      byte_49F7119 = 1;
    }
    if ( !v17 )
      goto LABEL_22;
    UnityEngine_Transform__set_eulerAngles(v17, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
    v19 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49F7116 )
    {
      transform = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v18);
      byte_49F7116 = 1;
    }
    if ( !v19 )
LABEL_22:
      sub_1B64324(transform);
    UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  return v13;
}


// local variable allocation has failed, the output may be wrong!
UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCard(
        UITexture_o *tex,
        int32_t svtId,
        int32_t limit,
        int32_t commandLimit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v9; // w3
  const MethodInfo *v10; // x5

  if ( (byte_49FB695 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtId);
    byte_49FB695 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return ServantAssetLoadManager__loadCommandCardlocal(
           (ServantAssetLoadManager_o *)Instance,
           tex,
           svtId,
           v9,
           commandLimit,
           v10);
}


// local variable allocation has failed, the output may be wrong!
UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCardlocal(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int32_t svtId,
        int32_t limit,
        int32_t commandLimit,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  const MethodInfo *v15; // x2
  System_String_o *CommandCardLoadFolderName; // x21
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  Il2CppObject *AssetObject_object; // x20
  bool v20; // w8
  UITexture_o *result; // x0
  _BOOL8 v22; // x0
  int32_t LimitImageIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FB696 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, tex);
    sub_1B640C8(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v10);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_17710/*"card_servant_"*/, v12);
    byte_49FB696 = 1;
  }
  ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&svtId);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, commandLimit, 1, v13);
  CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v14, v15);
  v17 = System_Int32__ToString((int32_t)&LimitImageIndex, 0LL);
  v18 = System_String__Concat_61375396((System_String_o *)StringLiteral_17710/*"card_servant_"*/, v17, 0LL);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         CommandCardLoadFolderName,
                         v18,
                         (const MethodInfo_2ED62E8 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v20 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssetObject_object, 0LL, 0LL);
  result = 0LL;
  if ( !v20 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v22 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
    if ( v22 )
    {
      if ( !tex )
        sub_1B64324(v22);
      ((void (__fastcall *)(UITexture_o *, Il2CppObject *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
        tex,
        AssetObject_object,
        tex->klass->vtable._28_get_shader.methodPtr);
    }
    return tex;
  }
  return result;
}


UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTexture(
        UITexture_o *tex,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_49FB708 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, userCommandCodeId);
    byte_49FB708 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal_37640160(
           (ServantAssetLoadManager_o *)Instance,
           tex,
           userCommandCodeId,
           v6);
}


UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTextureLocal(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *CommandCodeFolderName; // x22
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  Il2CppObject *AssetObject_object; // x20
  bool v15; // w8
  UITexture_o *result; // x0
  _BOOL8 v17; // x0
  int32_t v18; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FB70A & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, tex);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v8);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_17623/*"c_{0:D7}"*/, v10);
    byte_49FB70A = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  CommandCodeFolderName = ServantAssetLoadManager__GetCommandCodeFolderName(commandCodeId, (const MethodInfo *)tex);
  v18 = commandCodeId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v13 = System_String__Format((System_String_o *)StringLiteral_17623/*"c_{0:D7}"*/, v12, 0LL);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         CommandCodeFolderName,
                         v13,
                         (const MethodInfo_2ED62E8 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssetObject_object, 0LL, 0LL);
  result = 0LL;
  if ( !v15 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
    if ( v17 )
    {
      if ( !tex )
        sub_1B64324(v17);
      ((void (__fastcall *)(UITexture_o *, Il2CppObject *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
        tex,
        AssetObject_object,
        tex->klass->vtable._28_get_shader.methodPtr);
    }
    return tex;
  }
  return result;
}


UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTextureLocal_37640160(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int32_t v13; // w0
  const MethodInfo *v14; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_49FB70B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, tex);
    sub_1B640C8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FB70B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  entity = 0LL;
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userCommandCodeId,
                               (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0LL;
  if ( !entity )
LABEL_12:
    sub_1B64324(Instance);
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = klass;
  *(_QWORD *)&v17.fields.fakeValue = monitor;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v17, 0LL);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal(this, tex, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
UITexture_o *__fastcall ServantAssetLoadManager__loadCommandCodeTexture_37640428(
        UITexture_o *tex,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_49FB709 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&commandCodeId);
    byte_49FB709 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return ServantAssetLoadManager__loadCommandCodeTextureLocal(
           (ServantAssetLoadManager_o *)Instance,
           tex,
           commandCodeId,
           v6);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadCommonEffect(
        System_String_o *name,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_49FB6D5 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_49FB6D5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return ServantAssetLoadManager__loadCommonEffectlocal((ServantAssetLoadManager_o *)Instance, name, v4);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadCommonEffectlocal(
        ServantAssetLoadManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x0
  UnityEngine_Object_o *v8; // x0
  UnityEngine_Object_o *v9; // x19

  if ( (byte_49FB6D6 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_GameObject_TypeInfo, name);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_18797/*"effect/"*/, v6);
    byte_49FB6D6 = 1;
  }
  v7 = System_String__Concat_61375396((System_String_o *)StringLiteral_18797/*"effect/"*/, name, 0LL);
  v8 = UnityEngine_Resources__Load(v7, 0LL);
  if ( v8 )
  {
    if ( (UnityEngine_GameObject_c *)v8->klass == UnityEngine_GameObject_TypeInfo )
      v9 = v8;
    else
      v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
    return 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       (Il2CppObject *)v9,
                                       (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadEffect(
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x4

  if ( (byte_49FB6D3 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&weapongroup);
    byte_49FB6D3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return ServantAssetLoadManager__loadEffectlocal(
           (ServantAssetLoadManager_o *)Instance,
           name,
           weapongroup,
           effectFolder,
           v8);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadEffectlocal(
        ServantAssetLoadManager_o *this,
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Manager__loadCommonEffectlocal; // x22
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x4

  if ( (byte_49FB6D4 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, name);
    byte_49FB6D4 = 1;
  }
  Manager__loadCommonEffectlocal = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCommonEffectlocal(
                                                             this,
                                                             name,
                                                             *(const MethodInfo **)&weapongroup);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality(Manager__loadCommonEffectlocal, 0LL, 0LL);
  if ( v9 )
    return ServantAssetLoadManager__loadWeaponGroupEffectlocal(
             (ServantAssetLoadManager_o *)v9,
             name,
             weapongroup,
             effectFolder,
             v10);
  else
    return (UnityEngine_GameObject_o *)Manager__loadCommonEffectlocal;
}


UIStandFigureR_o *__fastcall ServantAssetLoadManager__loadFigureObject(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        int32_t faceType,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // [xsp+8h] [xbp-18h]

  return StandFigureManager__CreateRenderPrefab_37607928(
           parent,
           svtId,
           limitCount,
           2,
           faceType,
           50,
           callbackFunc,
           0,
           -1,
           v7);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAssetLoadManager__loadNobleName(
        UITexture_o *tex,
        int32_t svtId,
        int32_t limit,
        int32_t treasureDvcId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_49FB6A1 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtId);
    byte_49FB6A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return ServantAssetLoadManager__loadNobleNamelocal(
           (ServantAssetLoadManager_o *)Instance,
           tex,
           svtId,
           limit,
           treasureDvcId,
           v10);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantAssetLoadManager__loadNobleNamelocal(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int32_t svtId,
        int32_t limit,
        int32_t treasureDvcId,
        const MethodInfo *method)
{
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
  ServantTreasureDvcEntity_o *EntityFromIDID; // x23
  DataManager_o *Instance; // x0
  Il2CppObject *v26; // x25
  ServantLimitAddMaster_o *v27; // x26
  int32_t v28; // w1
  const MethodInfo *v29; // x2
  System_String_o *v30; // x21
  System_String_o *OverwriteTDFileName; // x0
  Il2CppObject *AssetObject_object; // x20
  int imageIndex; // w22
  __int64 v34; // x0
  System_String_o *v35; // x24
  __int64 v36; // x0
  System_String_o *NpNameFileSuffix; // x22
  int32_t v38; // w1
  const MethodInfo *v39; // x2
  System_String_o *v40; // x21
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  System_String_o *v43; // x2
  ServantAssetLoadManager_o *v44; // x0
  System_String_o *CommandCardLoadFolderName; // x1
  int v47; // s0
  float v48; // s1
  float v49; // s2
  float v50; // s3
  unsigned int v51; // [xsp+Ch] [xbp-54h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_49FB6A2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, tex);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v12);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1B640C8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v14);
    sub_1B640C8(&int_TypeInfo, v15);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B640C8(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v17);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B640C8(&StringLiteral_24883/*"{0}"*/, v21);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v22);
    sub_1B640C8(&StringLiteral_17711/*"card_servant_np"*/, v23);
    byte_49FB6A2 = 1;
  }
  ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&svtId);
  EntityFromIDID = ServantTreasureDvcMaster__getEntityFromIDID(svtId, treasureDvcId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_49;
  v26 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          svtId,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  entity = 0LL;
  if ( !v26 )
    goto LABEL_49;
  v27 = (ServantLimitAddMaster_o *)Instance;
  Instance = (DataManager_o *)ServantEntity__IsNameTrueFromBattleSvt((ServantEntity_o *)v26, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_16;
  if ( !v27 )
    goto LABEL_49;
  if ( !ServantLimitAddMaster__TryGetEntity(v27, &entity, svtId, limit, 0LL) )
    goto LABEL_16;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_49;
  if ( ServantLimitAddEntity__ExistOverwriteTDInfo(entity, 0LL) )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    Instance = (DataManager_o *)ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v28, v29);
    if ( !entity )
      goto LABEL_49;
    v30 = (System_String_o *)Instance;
    OverwriteTDFileName = ServantLimitAddEntity__GetOverwriteTDFileName(entity, 0LL);
    AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                           this,
                           v30,
                           OverwriteTDFileName,
                           (const MethodInfo_2ED62E8 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    LOBYTE(imageIndex) = 0;
  }
  else
  {
LABEL_16:
    if ( EntityFromIDID )
    {
      v34 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
      v35 = (System_String_o *)StringLiteral_17711/*"card_servant_np"*/;
      if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
        v34 = sub_1BB5FA4(v34);
      v36 = *(_QWORD *)(*(_QWORD *)(v34 + 192) + 16LL);
      if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
        v36 = sub_1BB5FA4(v36);
      Instance = **(DataManager_o ***)(v36 + 184);
      if ( !Instance )
        goto LABEL_49;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( !Instance )
        goto LABEL_49;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    treasureDvcId,
                                    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_49;
      NpNameFileSuffix = TreasureDvcEntity__GetNpNameFileSuffix((TreasureDvcEntity_o *)Instance, 0LL);
      if ( !System_String__IsNullOrEmpty(NpNameFileSuffix, 0LL) )
        v35 = System_String__Concat_61386656(v35, (System_String_o *)StringLiteral_16054/*"_"*/, NpNameFileSuffix, 0LL);
      imageIndex = EntityFromIDID->fields.imageIndex;
      if ( imageIndex <= 1 )
      {
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v38, v39);
        v44 = this;
        v43 = v35;
      }
      else
      {
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        v40 = ServantAssetLoadManager__getCommandCardLoadFolderName(svtId, v38, v39);
        v51 = (unsigned int)imageIndex >> 1;
        v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
        v42 = System_String__Format((System_String_o *)StringLiteral_24883/*"{0}"*/, v41, 0LL);
        v43 = System_String__Concat_61375396(v35, v42, 0LL);
        v44 = this;
        CommandCardLoadFolderName = v40;
      }
      AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                             v44,
                             CommandCardLoadFolderName,
                             v43,
                             (const MethodInfo_2ED62E8 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
    }
    else
    {
      LOBYTE(imageIndex) = 0;
      AssetObject_object = 0LL;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssetObject_object, 0LL, 0LL) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( tex )
    {
      ((void (__fastcall *)(UITexture_o *, Il2CppObject *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
        tex,
        AssetObject_object,
        tex->klass->vtable._28_get_shader.methodPtr);
      v47 = 0;
      if ( (imageIndex & 1) != 0 )
        v48 = 0.0;
      else
        v48 = 0.5;
      v49 = 1.0;
      v50 = 0.5;
      UITexture__set_uvRect(tex, *(UnityEngine_Rect_o *)&v47, 0LL);
      return 1;
    }
LABEL_49:
    sub_1B64324(Instance);
  }
  return 1;
}


void __fastcall ServantAssetLoadManager__loadNoblePhantasm(
        ServantAssetLoadManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        int32_t treasureDvcId,
        int32_t treasureDvcLv,
        int32_t npChargeStage,
        ServantAssetLoadManager_onGameObjectLoadComplete_o *callback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *Manager__loadNoblePhantasmCoroutine; // x1
  const MethodInfo *v11; // [xsp+0h] [xbp-20h]

  Manager__loadNoblePhantasmCoroutine = ServantAssetLoadManager__loadNoblePhantasmCoroutine(
                                          this,
                                          parent,
                                          svtId,
                                          limitCount,
                                          treasureDvcId,
                                          treasureDvcLv,
                                          npChargeStage,
                                          callback,
                                          v11);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008(
    (UnityEngine_MonoBehaviour_o *)this,
    Manager__loadNoblePhantasmCoroutine,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall ServantAssetLoadManager__loadNoblePhantasmCoroutine(
        ServantAssetLoadManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        int32_t treasureDvcId,
        int32_t treasureDvcLv,
        int32_t npChargeStage,
        ServantAssetLoadManager_onGameObjectLoadComplete_o *callback,
        const MethodInfo *method)
{
  __int64 v17; // x27
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_49FB6FB & 1) == 0 )
  {
    sub_1B640C8(&ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_TypeInfo, parent);
    byte_49FB6FB = 1;
  }
  v17 = sub_1B64314(ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_TypeInfo, parent, *(_QWORD *)&svtId);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  *(_DWORD *)(v17 + 16) = 0;
  *(_QWORD *)(v17 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)this, v18, v19);
  *(_QWORD *)(v17 + 40) = parent;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 40), (int32_t)parent, v20, v21);
  *(_DWORD *)(v17 + 48) = treasureDvcId;
  *(_DWORD *)(v17 + 52) = limitCount;
  *(_DWORD *)(v17 + 72) = treasureDvcLv;
  *(_DWORD *)(v17 + 56) = npChargeStage;
  *(_DWORD *)(v17 + 60) = svtId;
  *(_QWORD *)(v17 + 80) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 80), (int32_t)callback, v22, v23);
  return (System_Collections_IEnumerator_o *)v17;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadNoblePhantasmEffect(
        int32_t treasureDeviceId,
        int32_t limit,
        System_String_o *name,
        int32_t seqIdFromMstTDSeqWeight,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_49FB6CF & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_49FB6CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return ServantAssetLoadManager__loadNoblePhantasmEffectlocal(
           (ServantAssetLoadManager_o *)Instance,
           treasureDeviceId,
           limit,
           name,
           seqIdFromMstTDSeqWeight,
           v10);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadNoblePhantasmEffectlocal(
        ServantAssetLoadManager_o *this,
        int32_t treasureDeviceId,
        int32_t limit,
        System_String_o *name,
        int32_t seqIdFromMstTDSeqWeight,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *Master_object; // x0
  int32_t klass; // w0
  System_String_o *v18; // x0
  System_String_o *v19; // x21
  System_String_o *v20; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF
  __int64 v23; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_49FB6D0 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&treasureDeviceId);
    sub_1B640C8(&Method_DataManager_GetMaster_TreasureDvcMaster___, v11);
    sub_1B640C8(&DataManager_TypeInfo, v12);
    sub_1B640C8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v13);
    sub_1B640C8(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v14);
    sub_1B640C8(&StringLiteral_9458/*"NoblePhantasm/"*/, v15);
    byte_49FB6D0 = 1;
  }
  v23 = 0LL;
  entity = 0LL;
  if ( seqIdFromMstTDSeqWeight >= 1 )
  {
    HIDWORD(v23) = seqIdFromMstTDSeqWeight;
    goto LABEL_16;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !Master_object )
    goto LABEL_21;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          treasureDeviceId,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
  {
    HIDWORD(v23) = treasureDeviceId;
    goto LABEL_16;
  }
  Master_object = entity;
  if ( !entity
    || (Master_object = (Il2CppObject *)TreasureDvcEntity__IsRandomTD((TreasureDvcEntity_o *)entity, 0LL), !entity) )
  {
LABEL_21:
    sub_1B64324(Master_object);
  }
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    klass = (int32_t)entity[6].klass;
  else
    klass = TreasureDvcEntity__getSeqId((TreasureDvcEntity_o *)entity, limit, 0LL);
  HIDWORD(v23) = klass;
LABEL_16:
  v18 = System_Int32__ToString((int32_t)&v23 + 4, 0LL);
  v19 = System_String__Concat_61375396((System_String_o *)StringLiteral_9458/*"NoblePhantasm/"*/, v18, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v19, 0LL) )
  {
    LODWORD(v23) = 10 * (SHIDWORD(v23) / 10);
    v20 = System_Int32__ToString((int32_t)&v23, 0LL);
    v19 = System_String__Concat_61375396((System_String_o *)StringLiteral_9458/*"NoblePhantasm/"*/, v20, 0LL);
  }
  return (UnityEngine_GameObject_o *)ServantAssetLoadManager__getAssetObject_object_(
                                       this,
                                       v19,
                                       name,
                                       (const MethodInfo_2ED62E8 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
}


void __fastcall ServantAssetLoadManager__loadSkillCutIn(
        BattleSkillInfoData_o *skillInfo,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_49FB6E4 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, callback);
    byte_49FB6E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  ServantAssetLoadManager__loadSkillCutInLocal((ServantAssetLoadManager_o *)Instance, skillInfo, callback, v6);
}


void __fastcall ServantAssetLoadManager__loadSkillCutInLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  int32_t v6; // w1
  System_String_o *SkillCutInPath; // x20

  if ( (byte_49FB6E5 & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1B640C8(&AssetManager_TypeInfo, skillInfo);
    byte_49FB6E5 = 1;
  }
  if ( skillInfo )
  {
    this = (ServantAssetLoadManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, AssetLoader_LoadEndDataHandler_o *, const MethodInfo *))skillInfo->klass->vtable._7_getCutInId.method)(
                                          skillInfo,
                                          skillInfo->klass->vtable._8_PreLoad.methodPtr,
                                          callback,
                                          method);
    v6 = (int)this;
  }
  else
  {
    v6 = 0;
  }
  SkillCutInPath = ServantAssetLoadManager__getSkillCutInPath(this, v6, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(SkillCutInPath, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UITexture_o *__fastcall ServantAssetLoadManager__loadStatusFace(
        UITexture_o *tex,
        int32_t svtID,
        int32_t limit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x4

  if ( (byte_49FB69D & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&svtID);
    byte_49FB69D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return ServantAssetLoadManager__loadStatusFacelocal((ServantAssetLoadManager_o *)Instance, tex, svtID, limit, v8);
}


// local variable allocation has failed, the output may be wrong!
UITexture_o *__fastcall ServantAssetLoadManager__loadStatusFacelocal(
        ServantAssetLoadManager_o *this,
        UITexture_o *tex,
        int32_t svtID,
        int32_t limit,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  const MethodInfo *v14; // x2
  System_String_o *StatusImageFolderName; // x21
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  Il2CppObject *AssetObject_object; // x20
  bool v19; // w8
  UITexture_o *result; // x0
  _BOOL8 v21; // x0
  int32_t LimitImageIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FB69E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, tex);
    sub_1B640C8(&Method_ServantAssetLoadManager_getAssetObject_Texture2D___, v9);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_23436/*"status_servant_"*/, v11);
    byte_49FB69E = 1;
  }
  ServantAssetLoadManager__getSvtEntity(this, svtID, *(const MethodInfo **)&svtID);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtID, limit, 1, v12);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(svtID, v13, v14);
  v16 = System_Int32__ToString((int32_t)&LimitImageIndex, 0LL);
  v17 = System_String__Concat_61375396((System_String_o *)StringLiteral_23436/*"status_servant_"*/, v16, 0LL);
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         this,
                         StatusImageFolderName,
                         v17,
                         (const MethodInfo_2ED62E8 *)Method_ServantAssetLoadManager_getAssetObject_Texture2D___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v19 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)AssetObject_object, 0LL, 0LL);
  result = 0LL;
  if ( !v19 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v21 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tex, 0LL, 0LL);
    if ( v21 )
    {
      if ( !tex )
        sub_1B64324(v21);
      ((void (__fastcall *)(UITexture_o *, Il2CppObject *, Il2CppMethodPointer))tex->klass->vtable._27_set_mainTexture.method)(
        tex,
        AssetObject_object,
        tex->klass->vtable._28_get_shader.methodPtr);
    }
    return tex;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadWeaponGroupEffect(
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x4

  if ( (byte_49FB6D9 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&weapongroup);
    byte_49FB6D9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return ServantAssetLoadManager__loadWeaponGroupEffectlocal(
           (ServantAssetLoadManager_o *)Instance,
           name,
           weapongroup,
           effectFolder,
           v8);
}


UnityEngine_GameObject_o *__fastcall ServantAssetLoadManager__loadWeaponGroupEffectlocal(
        ServantAssetLoadManager_o *this,
        System_String_o *name,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x0
  System_String_o *v12; // x21
  System_String_o *v13; // x0
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__48347676; // x19
  int32_t v17; // [xsp+8h] [xbp-28h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  v17 = effectFolder;
  v18 = weapongroup;
  if ( (byte_49FB6DA & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, name);
    sub_1B640C8(&AssetManager_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_5839/*"Effect/weapon/"*/, v9);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v10);
    byte_49FB6DA = 1;
  }
  v11 = System_Int32__ToString((int32_t)&v18, 0LL);
  v12 = System_String__Concat_61375396((System_String_o *)StringLiteral_5839/*"Effect/weapon/"*/, v11, 0LL);
  if ( effectFolder )
  {
    v13 = System_Int32__ToString((int32_t)&v17, 0LL);
    v12 = System_String__Concat_61386656(v12, (System_String_o *)StringLiteral_1124/*"/"*/, v13, 0LL);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v12, 0LL);
  if ( AssetStorage )
    Object_object__48347676 = AssetData__GetObject_object__48347676(
                                AssetStorage,
                                name,
                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  else
    Object_object__48347676 = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL) )
    return (UnityEngine_GameObject_o *)Object_object__48347676;
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__localStopVoice(
        ServantAssetLoadManager_o *this,
        int32_t uniqueId,
        float fadeoutTime,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_int__object__o *ActorVoice; // x0

  if ( (byte_49FB6F8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__, *(_QWORD *)&uniqueId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__, v7);
    byte_49FB6F8 = 1;
  }
  ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
  if ( !ActorVoice )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         ActorVoice,
         uniqueId,
         (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
  {
    ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
    if ( ActorVoice )
    {
      ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                             ActorVoice,
                                                                             uniqueId,
                                                                             (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
      if ( ActorVoice )
      {
        SePlayer__StopSe((SePlayer_o *)ActorVoice, fadeoutTime, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1B64324(ActorVoice);
  }
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *__fastcall ServantAssetLoadManager__playBattleVoice(
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        System_String_o *voiceTypeId,
        float volume,
        System_Action_o *callback,
        int32_t uniqueId,
        bool isNp,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v19; // [xsp+8h] [xbp-68h]

  if ( (byte_49FB6EC & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_49FB6EC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return ServantAssetLoadManager__playBattleVoicelocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limit,
           overwriteSvtVoiceId,
           voiceTypeId,
           volume,
           callback,
           uniqueId,
           0LL,
           isNp,
           v19);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *__fastcall ServantAssetLoadManager__playBattleVoiceSe(
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        System_String_o *fileName,
        float volume,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v12; // x5

  if ( (byte_49FB6EF & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limit);
    byte_49FB6EF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return ServantAssetLoadManager__playBattleVoiceSelocal(
           (ServantAssetLoadManager_o *)Instance,
           svtId,
           limit,
           overwriteSvtVoiceId,
           fileName,
           volume,
           v12);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *__fastcall ServantAssetLoadManager__playBattleVoiceSelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        System_String_o *targetFileName,
        float volume,
        const MethodInfo *method)
{
  __int64 v13; // x1
  SePlayer_o *result; // x0
  const MethodInfo *v15; // x3
  int32_t VoiceId; // w8
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  int32_t v21; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FB6F0 & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantAssetLoadManager_playBattleVoiceSelocal__, *(_QWORD *)&svtId);
    sub_1B640C8(&StringLiteral_12592/*"Servants/"*/, v13);
    byte_49FB6F0 = 1;
  }
  result = (SePlayer_o *)ServantAssetLoadManager__getSvtEntity(this, svtId, *(const MethodInfo **)&limit);
  if ( result )
  {
    VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v15);
    v17 = Method_ServantAssetLoadManager_playBattleVoiceSelocal__;
    if ( overwriteSvtVoiceId )
      VoiceId = overwriteSvtVoiceId;
    v21 = VoiceId;
    if ( (*((_BYTE *)Method_ServantAssetLoadManager_playBattleVoiceSelocal__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1B640E0(Method_ServantAssetLoadManager_playBattleVoiceSelocal__);
    v18 = (System_Reflection_MethodBase_o *)sub_1B640AC(v17, v17[4]);
    v19 = System_Int32__ToString((int32_t)&v21, 0LL);
    v20 = System_String__Concat_61375396((System_String_o *)StringLiteral_12592/*"Servants/"*/, v19, 0LL);
    return OverwriteAssetSoundName__PlaySe_38216620(v18, v20, targetFileName, volume, 0LL, 0LL);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *__fastcall ServantAssetLoadManager__playBattleVoicelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limit,
        int32_t overwriteSvtVoiceId,
        System_String_o *voiceTypeId,
        float volume,
        System_Action_o *callback,
        int32_t uniqueId,
        System_String_o *targetFileName,
        bool isNp,
        const MethodInfo *method)
{
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x23
  System_Collections_Generic_Dictionary_int__object__o *ActorVoice; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x28
  int32_t v36; // w2
  int32_t v37; // w3
  const MethodInfo *v38; // x2
  ServantEntity_o *SvtEntity; // x27
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  int32_t VoicePrefix; // w0
  System_String_o **v43; // x8
  System_String_o *v44; // x22
  System_String_o *v45; // x0
  System_String_o *v46; // x0
  struct System_Collections_Generic_Dictionary_int__SePlayer__o *v47; // x22
  System_String_o *v48; // x24
  __int64 v49; // x1
  __int64 v50; // x2
  System_Action_o *v51; // x25
  Il2CppObject *v53; // x0
  int32_t v54; // [xsp+8h] [xbp-68h] BYREF
  int32_t VoiceId; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49FB6ED & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__string__set_Item__, v23);
    sub_1B640C8(&int_TypeInfo, v24);
    sub_1B640C8(&SoundManager_TypeInfo, v25);
    sub_1B640C8(&Method_ServantAssetLoadManager___c__DisplayClass135_0__playBattleVoicelocal_b__0__, v26);
    sub_1B640C8(&ServantAssetLoadManager___c__DisplayClass135_0_TypeInfo, v27);
    sub_1B640C8(&StringLiteral_24843/*"{0:D0}_{1}"*/, v28);
    sub_1B640C8(&StringLiteral_12592/*"Servants/"*/, v29);
    sub_1B640C8(&StringLiteral_9458/*"NoblePhantasm/"*/, v30);
    byte_49FB6ED = 1;
  }
  v31 = sub_1B64314(ServantAssetLoadManager___c__DisplayClass135_0_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limit);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  if ( !v31 )
    goto LABEL_29;
  *(_QWORD *)(v31 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 16), (int32_t)this, v33, v34);
  *(_QWORD *)(v31 + 24) = callback;
  v35 = v31 + 24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 24), (int32_t)callback, v36, v37);
  SvtEntity = ServantAssetLoadManager__getSvtEntity(this, svtId, v38);
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limit, v40);
  VoicePrefix = ServantAssetLoadManager__getVoicePrefix(this, svtId, limit, v41);
  if ( overwriteSvtVoiceId )
    VoiceId = overwriteSvtVoiceId;
  if ( targetFileName )
  {
    if ( SvtEntity )
    {
LABEL_8:
      if ( uniqueId != -1 )
      {
        ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
        if ( !ActorVoice )
          goto LABEL_29;
        if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
               ActorVoice,
               uniqueId,
               (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__ContainsKey__) )
        {
          ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
          if ( !ActorVoice )
            goto LABEL_29;
          if ( System_Collections_Generic_Dictionary_int__object___get_Item(
                 ActorVoice,
                 uniqueId,
                 (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__) )
          {
            ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
            if ( !ActorVoice )
              goto LABEL_29;
            ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                   ActorVoice,
                                                                                   uniqueId,
                                                                                   (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
            if ( !ActorVoice )
              goto LABEL_29;
            SePlayer__StopSe((SePlayer_o *)ActorVoice, 0.0, 0LL);
          }
        }
      }
      ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.LastActorVoice;
      if ( ActorVoice )
      {
        System_Collections_Generic_Dictionary_int__object___set_Item(
          ActorVoice,
          uniqueId,
          (Il2CppObject *)voiceTypeId,
          (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__string__set_Item__);
        v43 = (System_String_o **)(isNp ? &StringLiteral_9458/*"NoblePhantasm/"*/ : &StringLiteral_12592/*"Servants/"*/);
        v44 = *v43;
        v45 = System_Int32__ToString((int32_t)&VoiceId, 0LL);
        v46 = System_String__Concat_61375396(v44, v45, 0LL);
        v47 = this->fields.ActorVoice;
        v48 = v46;
        v51 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v49, v50);
        System_Action___ctor(
          v51,
          (Il2CppObject *)v31,
          Method_ServantAssetLoadManager___c__DisplayClass135_0__playBattleVoicelocal_b__0__,
          0LL);
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)SoundManager__playVoice_38387180(
                                                                               v48,
                                                                               targetFileName,
                                                                               volume,
                                                                               v51,
                                                                               0LL);
        if ( v47 )
        {
          System_Collections_Generic_Dictionary_int__object___set_Item(
            (System_Collections_Generic_Dictionary_int__object__o *)v47,
            uniqueId,
            (Il2CppObject *)ActorVoice,
            (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__set_Item__);
          ActorVoice = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.ActorVoice;
          if ( ActorVoice )
            return (SePlayer_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                   ActorVoice,
                                   uniqueId,
                                   (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__SePlayer__get_Item__);
        }
      }
LABEL_29:
      sub_1B64324(ActorVoice);
    }
  }
  else
  {
    v54 = VoicePrefix;
    v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
    targetFileName = System_String__Format_61389768(
                       (System_String_o *)StringLiteral_24843/*"{0:D0}_{1}"*/,
                       v53,
                       (Il2CppObject *)voiceTypeId,
                       0LL);
    if ( SvtEntity )
      goto LABEL_8;
  }
  if ( *(_QWORD *)v35 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v35 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v35 + 64LL),
      *(_QWORD *)(*(_QWORD *)v35 + 40LL));
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadActorMotion(int32_t weapongroup, bool dlOnly, const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  const MethodInfo *v8; // x3
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = weapongroup;
  if ( (byte_49FB6E7 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, dlOnly);
    sub_1B640C8(&StringLiteral_12596/*"Servants/Motion/"*/, v4);
    byte_49FB6E7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_61375396((System_String_o *)StringLiteral_12596/*"Servants/Motion/"*/, v6, 0LL);
  if ( !Instance )
    sub_1B64324(v7);
  ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, v7, dlOnly, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadBattleActor(
        ServantAssetArgs_o *args,
        bool isForce,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x6

  if ( (byte_49FB6C0 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, isForce);
    byte_49FB6C0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_1B64324(Instance);
  ServantAssetLoadManager__preloadBattleActorlocal(
    (ServantAssetLoadManager_o *)Instance,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
    args->fields._AppearanceId_k__BackingField,
    isForce,
    0,
    v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadBattleActorlocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t appearanceId,
        bool isForce,
        bool dlOnly,
        const MethodInfo *method)
{
  int32_t v13; // w0
  System_String_o *ActorFolderName_37621032; // x0
  const MethodInfo *v15; // x3

  if ( (byte_49FB6C1 & 1) == 0 )
  {
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
    byte_49FB6C1 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( appearanceId < 1 )
  {
    v13 = svtId;
    if ( isForce )
      goto LABEL_7;
  }
  else
  {
    v13 = appearanceId;
    if ( isForce )
    {
LABEL_7:
      ActorFolderName_37621032 = ServantAssetLoadManager__getActorFolderName_37621032(v13, *(const MethodInfo **)&svtId);
      goto LABEL_10;
    }
  }
  ActorFolderName_37621032 = ServantAssetLoadManager__getActorFolderName(
                               v13,
                               limitCount,
                               *(const MethodInfo **)&limitCount);
LABEL_10:
  if ( !this )
    sub_1B64324(ActorFolderName_37621032);
  ServantAssetLoadManager__setLoadList(this, ActorFolderName_37621032, dlOnly, v15);
}


System_String_array *__fastcall ServantAssetLoadManager__preloadBattleCommonEffect(
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_49FB6DD & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_49FB6DD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return ServantAssetLoadManager__preloadBattleCommonEffectLocal(
           (ServantAssetLoadManager_o *)Instance,
           effectIdList,
           v4);
}


System_String_array *__fastcall ServantAssetLoadManager__preloadBattleCommonEffectLocal(
        ServantAssetLoadManager_o *this,
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  System_String_array *BattleCommonEffectPathList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  __int64 v8; // x8
  System_String_array *v9; // x20
  unsigned __int64 v10; // x21

  if ( (byte_49FB6DE & 1) == 0 )
  {
    sub_1B640C8(&BattleEffectUtility_TypeInfo, effectIdList);
    byte_49FB6DE = 1;
  }
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleCommonEffectPathList = BattleEffectUtility__GetBattleCommonEffectPathList(effectIdList, 0LL);
  if ( !BattleCommonEffectPathList )
    sub_1B64324(0LL);
  v8 = *(_QWORD *)&BattleCommonEffectPathList->max_length;
  v9 = BattleCommonEffectPathList;
  if ( (int)v8 >= 1 )
  {
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)v8 )
        sub_1B6432C(BattleCommonEffectPathList, v6);
      ServantAssetLoadManager__setLoadList(this, v9->m_Items[v10], 0, v7);
      LODWORD(v8) = v9->max_length;
      ++v10;
    }
    while ( (__int64)v10 < (int)v8 );
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadCameraAction(int32_t cameraId, bool dlOnly, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  Il2CppObject *Instance; // x21
  System_String_o *CameraActionPath; // x0
  const MethodInfo *v9; // x3

  if ( (byte_49FB703 & 1) == 0 )
  {
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, dlOnly);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    byte_49FB703 = 1;
  }
  if ( cameraId )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, v6);
    if ( !Instance )
      sub_1B64324(CameraActionPath);
    ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, CameraActionPath, dlOnly, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadCommandCard(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x4

  if ( (byte_49FB693 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_49FB693 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  ServantAssetLoadManager__preloadCommandCardlocal((ServantAssetLoadManager_o *)Instance, svtId, v5, 0, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadCommandCardlocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool dlOnly,
        const MethodInfo *method)
{
  System_String_o *CommandCardLoadFolderName; // x0
  const MethodInfo *v9; // x3

  if ( (byte_49FB694 & 1) == 0 )
  {
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
    byte_49FB694 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  CommandCardLoadFolderName = ServantAssetLoadManager__getCommandCardLoadFolderName(
                                svtId,
                                svtId,
                                *(const MethodInfo **)&limitCount);
  ServantAssetLoadManager__tryLoadList(this, CommandCardLoadFolderName, dlOnly, v9);
}


void __fastcall ServantAssetLoadManager__preloadCommandCodeTextureLocal(
        ServantAssetLoadManager_o *this,
        System_Int32_array *commandCodeIds,
        bool dlOnly,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *v6; // x20
  __int64 v7; // x8
  unsigned __int64 v8; // x23
  bool v9; // w21
  int32_t v10; // w22
  System_String_o *CommandCodeFolderName; // x0
  const MethodInfo *v12; // x3

  v6 = this;
  if ( (byte_49FB70C & 1) == 0 )
  {
    this = (ServantAssetLoadManager_o *)sub_1B640C8(&ServantAssetLoadManager_TypeInfo, commandCodeIds);
    byte_49FB70C = 1;
  }
  if ( commandCodeIds )
  {
    v7 = *(_QWORD *)&commandCodeIds->max_length;
    if ( (int)v7 >= 1 )
    {
      v8 = 0LL;
      v9 = dlOnly;
      do
      {
        if ( v8 >= (unsigned int)v7 )
          sub_1B6432C(this, commandCodeIds);
        v10 = commandCodeIds->m_Items[v8 + 1];
        if ( v10 >= 1 )
        {
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          CommandCodeFolderName = ServantAssetLoadManager__GetCommandCodeFolderName(
                                    v10,
                                    (const MethodInfo *)commandCodeIds);
          ServantAssetLoadManager__tryLoadList(v6, CommandCodeFolderName, v9, v12);
          LODWORD(v7) = commandCodeIds->max_length;
        }
        ++v8;
      }
      while ( (__int64)v8 < (int)v7 );
    }
  }
}


void __fastcall ServantAssetLoadManager__preloadCommandSpellAnyVoice(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_49FB6B9 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_49FB6B9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal((ServantAssetLoadManager_o *)Instance, v3);
}


void __fastcall ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v11; // x20
  unsigned __int64 v12; // x24
  bool *p_DispLog; // x28
  SoundManager_o *v14; // x21
  System_String_o *VoiceAssetName; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x23

  if ( (byte_49FB6BA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommandSpellMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_getEntitys_CommandSpellEntity___, v4);
    sub_1B640C8(&Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v7);
    byte_49FB6BA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase__getEntitys_object_(
                                      (DataMasterBase_o *)Instance,
                                      (const MethodInfo_2E39C80 *)Method_DataMasterBase_getEntitys_CommandSpellEntity___)) == 0LL )
  {
LABEL_21:
    sub_1B64324(Instance);
  }
  m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
  v11 = Instance;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v12 = 0LL;
    p_DispLog = &Instance->fields._DispLog;
    do
    {
      if ( v12 >= (unsigned int)m_CancellationTokenSource )
LABEL_20:
        sub_1B6432C(Instance, v9);
      Instance = *(DataManager_o **)&p_DispLog[8 * v12];
      if ( Instance )
      {
        Instance = (DataManager_o *)CommandSpellEntity__isUseBattle((CommandSpellEntity_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v12 >= LODWORD(v11->fields.m_CancellationTokenSource) )
            goto LABEL_20;
          Instance = *(DataManager_o **)&p_DispLog[8 * v12];
          if ( !Instance )
            goto LABEL_21;
          Instance = (DataManager_o *)CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
          if ( Instance )
          {
            ++this->fields.soundCount;
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
            if ( v12 >= LODWORD(v11->fields.m_CancellationTokenSource) )
              goto LABEL_20;
            v14 = (SoundManager_o *)Instance;
            Instance = *(DataManager_o **)&p_DispLog[8 * v12];
            if ( !Instance )
              goto LABEL_21;
            VoiceAssetName = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
            v18 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
            System_Action___ctor(
              v18,
              (Il2CppObject *)this,
              Method_ServantAssetLoadManager__preloadCommandSpellAnyVoiceLocal_b__80_0__,
              0LL);
            if ( !v14 )
              goto LABEL_21;
            SoundManager__LoadAudioAssetStorage(v14, VoiceAssetName, v18, 1, 0LL);
          }
        }
      }
      LODWORD(m_CancellationTokenSource) = v11->fields.m_CancellationTokenSource;
      ++v12;
    }
    while ( (__int64)v12 < (int)m_CancellationTokenSource );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadFromDeckServant(
        BattleDeckServantData_o *deckSvt,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t EnemyNameEffect; // w0
  const MethodInfo *v7; // x1
  int32_t v8; // w20
  System_String_o *NameEffectPath; // x20
  Il2CppObject *Instance; // x0
  const MethodInfo *v11; // x3

  if ( (byte_49FB713 & 1) == 0 )
  {
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, dlOnly);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    byte_49FB713 = 1;
  }
  if ( deckSvt )
  {
    EnemyNameEffect = BattleDeckServantData__getEnemyNameEffect(deckSvt, 0LL);
    if ( EnemyNameEffect )
    {
      v8 = EnemyNameEffect;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v8, v7);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !Instance )
        sub_1B64324(0LL);
      ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, NameEffectPath, dlOnly, v11);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadMovie(
        EffectMovieEntity_o *ent,
        int32_t loadFolderType,
        int32_t optionNo,
        bool dlOnly,
        const MethodInfo *method)
{
  EffectMovieEntity_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  EffectMovieMaster_c *v14; // x0
  int32_t *v15; // x1
  System_String_o *NOBLE_PATH; // x22
  System_Int32_c *v17; // x0
  EffectMovieMaster_c *v18; // x0
  Il2CppObject *v19; // x0
  System_String_o *BATTLECOMMON_PATH; // x0
  System_String_o *name; // x1
  System_String_o *v22; // x2
  EffectMovieMaster_c *v23; // x0
  System_String_o *v24; // x20
  const MethodInfo *v25; // x3
  int32_t v26; // [xsp+8h] [xbp-38h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-34h] BYREF

  v8 = ent;
  if ( (byte_49FB6D8 & 1) == 0 )
  {
    sub_1B640C8(&EffectMovieMaster_TypeInfo, *(_QWORD *)&loadFolderType);
    sub_1B640C8(&int_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v11);
    sub_1B640C8(&StringLiteral_1122/*".usm"*/, v12);
    ent = (EffectMovieEntity_o *)sub_1B640C8(&StringLiteral_1/*""*/, v13);
    byte_49FB6D8 = 1;
  }
  if ( !v8 )
    goto LABEL_27;
  if ( v8->fields.folderType != loadFolderType )
    return;
  switch ( loadFolderType )
  {
    case 2:
      v18 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo);
        v18 = EffectMovieMaster_TypeInfo;
      }
      v15 = &v26;
      NOBLE_PATH = v18->static_fields->NOBLE_PATH;
      v17 = int_TypeInfo;
      v26 = optionNo;
      goto LABEL_14;
    case 5:
      v23 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo);
        v23 = EffectMovieMaster_TypeInfo;
      }
      name = v8->fields.name;
      BATTLECOMMON_PATH = v23->static_fields->BATTLECOMMON_PATH;
      v22 = (System_String_o *)StringLiteral_1122/*".usm"*/;
      goto LABEL_18;
    case 3:
      v14 = EffectMovieMaster_TypeInfo;
      if ( !EffectMovieMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EffectMovieMaster_TypeInfo);
        v14 = EffectMovieMaster_TypeInfo;
      }
      v15 = &v27;
      NOBLE_PATH = v14->static_fields->WEAPON_PATH;
      v17 = int_TypeInfo;
      v27 = optionNo;
LABEL_14:
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(v17, v15);
      BATTLECOMMON_PATH = System_String__Format(NOBLE_PATH, v19, 0LL);
      name = v8->fields.name;
      v22 = (System_String_o *)StringLiteral_1122/*".usm"*/;
LABEL_18:
      v24 = System_String__Concat_61386656(BATTLECOMMON_PATH, name, v22, 0LL);
      goto LABEL_20;
  }
  v24 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_20:
  ent = (EffectMovieEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !ent )
    goto LABEL_27;
  if ( !AssetManager__IsExistAssetStorage((AssetManager_o *)ent, v24, 0LL) )
    return;
  ent = (EffectMovieEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !ent )
    goto LABEL_27;
  if ( !AssetManager__IsNeedDownload((AssetManager_o *)ent, v24, 0LL) )
    return;
  ent = (EffectMovieEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !ent )
LABEL_27:
    sub_1B64324(ent);
  ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)ent, v24, dlOnly, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadServant(
        ServantAssetArgs_o *args,
        bool dlOnly,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_49FB6AE & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, dlOnly);
    byte_49FB6AE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  ServantAssetLoadManager__preloadServantlocal((ServantAssetLoadManager_o *)Instance, args, dlOnly, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadServantVoice(
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x5

  if ( (byte_49FB6B1 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_49FB6B1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  ServantAssetLoadManager__preloadServantVoicelocal(
    (ServantAssetLoadManager_o *)Instance,
    svtId,
    limitCount,
    overwriteSvtVoiceId,
    0,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadServantVoicelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t VoiceId; // w0
  int32_t v16; // w8
  Il2CppObject *Instance; // x21
  System_String_o *v18; // x0
  System_String_o *v19; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_o *v22; // x0
  System_Action_o *v23; // x23
  __int64 v24; // x0
  int32_t v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FB6B2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_0__, v11);
    sub_1B640C8(&Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_1__, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v13);
    sub_1B640C8(&StringLiteral_12599/*"Servants_"*/, v14);
    byte_49FB6B2 = 1;
  }
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limitCount, *(const MethodInfo **)&overwriteSvtVoiceId);
  if ( overwriteSvtVoiceId )
    v16 = overwriteSvtVoiceId;
  else
    v16 = VoiceId;
  v25 = v16;
  if ( v16 )
  {
    ++this->fields.soundCount;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v18 = System_Int32__ToString((int32_t)&v25, 0LL);
    v19 = System_String__Concat_61375396((System_String_o *)StringLiteral_12599/*"Servants_"*/, v18, 0LL);
    v22 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v21);
    v23 = v22;
    if ( dlOnly )
    {
      System_Action___ctor(
        v22,
        (Il2CppObject *)this,
        Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_0__,
        0LL);
      if ( Instance )
      {
        SoundManager__DownloadAudioAssetStorage((SoundManager_o *)Instance, v19, v23, 1, 0LL);
        return;
      }
LABEL_13:
      sub_1B64324(v24);
    }
    System_Action___ctor(
      v22,
      (Il2CppObject *)this,
      Method_ServantAssetLoadManager__preloadServantVoicelocal_b__72_1__,
      0LL);
    if ( !Instance )
      goto LABEL_13;
    SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v19, v23, 1, 0LL);
  }
}


void __fastcall ServantAssetLoadManager__preloadServantlocal(
        ServantAssetLoadManager_o *this,
        ServantAssetArgs_o *args,
        bool dlOnly,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6
  bool v6; // w21
  int32_t v8; // w2
  const MethodInfo *v9; // x4
  int32_t v10; // w2
  const MethodInfo *v11; // x4
  const MethodInfo *v12; // x5
  const MethodInfo *v13; // x3

  if ( !args )
    sub_1B64324(this);
  v6 = dlOnly;
  ServantAssetLoadManager__preloadBattleActorlocal(
    this,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
    args->fields._AppearanceId_k__BackingField,
    0,
    dlOnly,
    v4);
  ServantAssetLoadManager__preloadCommandCardlocal(this, args->fields._CommandImageSvtId_k__BackingField, v8, v6, v9);
  ServantAssetLoadManager__preloadStatusFacelocal(this, args->fields._DispImageSvtId_k__BackingField, v10, v6, v11);
  ServantAssetLoadManager__preloadServantVoicelocal(
    this,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
    args->fields._OverwriteSvtVoiceId_k__BackingField,
    v6,
    v12);
  ServantAssetLoadManager__preloadCommandCodeTextureLocal(this, args->fields._CommandCodeIds_k__BackingField, v6, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadSkillAnyVoice(
        BattleSkillInfoData_o *skillInfo,
        bool dlOnly,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_49FB6B5 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, dlOnly);
    byte_49FB6B5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  ServantAssetLoadManager__preloadSkillAnyVoiceLocal((ServantAssetLoadManager_o *)Instance, skillInfo, dlOnly, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadSkillAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x0
  __int64 v14; // x0
  DataManager_o *v15; // x0
  Il2CppObject *MasterData_object; // x22
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v18; // x21
  System_String_o *VoiceAssetName; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_o *v22; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  System_Action_o *v27; // x22

  if ( (byte_49FB6B6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, skillInfo);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v7);
    sub_1B640C8(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__, v8);
    sub_1B640C8(&Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v11);
    sub_1B640C8(&SoundManager_TypeInfo, v12);
    byte_49FB6B6 = 1;
  }
  if ( skillInfo
    && ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, bool, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
         skillInfo,
         skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
         dlOnly,
         method)
    && skillInfo->fields.skilllv )
  {
    v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1BB5FA4(v13);
    v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1BB5FA4(v14);
    v15 = **(DataManager_o ***)(v14 + 184);
    if ( v15 )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            v15,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
      v15 = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                               skillInfo,
                               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( MasterData_object )
      {
        Entity = SkillLvMaster__GetEntity(
                   (SkillLvMaster_o *)MasterData_object,
                   (int32_t)v15,
                   skillInfo->fields.skilllv,
                   0LL);
        if ( !Entity )
          return;
        v18 = Entity;
        if ( !SkillLvEntity__getVoiceAssetName(Entity, 0LL) )
          return;
        ++this->fields.soundCount;
        if ( dlOnly )
        {
          VoiceAssetName = SkillLvEntity__getVoiceAssetName(v18, 0LL);
          v22 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v21);
          System_Action___ctor(
            v22,
            (Il2CppObject *)this,
            Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_0__,
            0LL);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__downloadAudioAssetStorage(VoiceAssetName, v22, 1, 0LL);
          return;
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        v24 = SkillLvEntity__getVoiceAssetName(v18, 0LL);
        v27 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v25, v26);
        System_Action___ctor(
          v27,
          (Il2CppObject *)this,
          Method_ServantAssetLoadManager__preloadSkillAnyVoiceLocal_b__76_1__,
          0LL);
        if ( Instance )
        {
          SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v24, v27, 1, 0LL);
          return;
        }
      }
    }
    sub_1B64324(v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadStatusFace(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x4

  if ( (byte_49FB69B & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_49FB69B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  ServantAssetLoadManager__preloadCommandCardlocal((ServantAssetLoadManager_o *)Instance, svtId, v5, 0, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadStatusFacelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool dlOnly,
        const MethodInfo *method)
{
  System_String_o *StatusImageFolderName; // x0
  const MethodInfo *v9; // x3

  if ( (byte_49FB69C & 1) == 0 )
  {
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&svtId);
    byte_49FB69C = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  StatusImageFolderName = ServantAssetLoadManager__getStatusImageFolderName(
                            svtId,
                            svtId,
                            *(const MethodInfo **)&limitCount);
  ServantAssetLoadManager__tryLoadList(this, StatusImageFolderName, dlOnly, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__preloadWeaponEffect(
        int32_t weapongroup,
        int32_t effectFolder,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Instance; // x21
  System_String_o *v13; // x22
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  const MethodInfo *v16; // x3
  int i; // w8
  Il2CppObject *v18; // x20
  Il2CppObject *v19; // x21
  Il2CppObject *v20; // x0
  System_String_o *v21; // x20
  const MethodInfo *v22; // x3
  int32_t v23; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v24; // [xsp+8h] [xbp-58h] BYREF
  int v25; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v26; // [xsp+18h] [xbp-48h] BYREF
  int32_t v27; // [xsp+1Ch] [xbp-44h] BYREF

  v26 = effectFolder;
  v27 = weapongroup;
  if ( (byte_49FB6D7 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&effectFolder);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_5839/*"Effect/weapon/"*/, v8);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v9);
    sub_1B640C8(&StringLiteral_5842/*"Effect/weapon/{0}/usm/battle_{1}_mov{2}.usm"*/, v10);
    sub_1B640C8(&StringLiteral_4965/*"D3"*/, v11);
    byte_49FB6D7 = 1;
  }
  v25 = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v13 = System_Int32__ToString((int32_t)&v27, 0LL);
  if ( effectFolder )
  {
    v14 = System_Int32__ToString((int32_t)&v26, 0LL);
    v15 = System_String__Concat_61388660(
            (System_String_o *)StringLiteral_5839/*"Effect/weapon/"*/,
            v13,
            (System_String_o *)StringLiteral_1124/*"/"*/,
            v14,
            0LL);
    if ( !Instance )
LABEL_16:
      sub_1B64324(v15);
  }
  else
  {
    v15 = System_String__Concat_61375396((System_String_o *)StringLiteral_5839/*"Effect/weapon/"*/, v13, 0LL);
    if ( !Instance )
      goto LABEL_16;
  }
  ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)Instance, v15, dlOnly, v16);
  for ( i = 1; ; i = v25 + 1 )
  {
    v24 = v27;
    v25 = i;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    v23 = v27;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v20 = (Il2CppObject *)System_Int32__ToString_62180668((int32_t)&v25, (System_String_o *)StringLiteral_4965/*"D3"*/, 0LL);
    v21 = System_String__Format_61389836((System_String_o *)StringLiteral_5842/*"Effect/weapon/{0}/usm/battle_{1}_mov{2}.usm"*/, v18, v19, v20, 0LL);
    v15 = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( !v15 )
      goto LABEL_16;
    if ( !AssetManager__IsExistAssetStorage((AssetManager_o *)v15, v21, 0LL) )
      break;
    v15 = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( !v15 )
      goto LABEL_16;
    if ( AssetManager__IsNeedDownload((AssetManager_o *)v15, v21, 0LL) )
    {
      v15 = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !v15 )
        goto LABEL_16;
      ServantAssetLoadManager__setLoadList((ServantAssetLoadManager_o *)v15, v21, dlOnly, v22);
    }
  }
}


void __fastcall ServantAssetLoadManager__releaseNoblePhantasm(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  AssetData_o *nobleAssetData; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  AssetData_o *nobleSequenceData; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Collections_Generic_List_AssetData__o *bgAssetDataList; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_object__o *nobleEffectList; // x0
  System_String_array *v24; // x0
  const MethodInfo *v25; // x2
  struct System_Collections_Generic_List_string__o *v26; // x8
  int32_t size; // w2
  int v28; // w9
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FB6FD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetData___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v9);
    sub_1B640C8(&System_Collections_Generic_List_AssetData__TypeInfo, v10);
    byte_49FB6FD = 1;
  }
  memset(&v29, 0, sizeof(v29));
  nobleAssetData = this->fields.nobleAssetData;
  if ( nobleAssetData )
  {
    AssetData__RemoveEntry(nobleAssetData, 0LL);
    this->fields.nobleAssetData = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.nobleAssetData, 0, v12, v13);
  }
  nobleSequenceData = this->fields.nobleSequenceData;
  if ( nobleSequenceData )
  {
    AssetData__RemoveEntry(nobleSequenceData, 0LL);
    this->fields.nobleSequenceData = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.nobleSequenceData, 0, v15, v16);
  }
  bgAssetDataList = this->fields.bgAssetDataList;
  if ( bgAssetDataList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      (System_Collections_Generic_List_object__o *)bgAssetDataList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v29,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      if ( !v29.fields._current )
        sub_1B64324(0LL);
      AssetData__RemoveEntry((AssetData_o *)v29.fields._current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_AssetData__TypeInfo,
                                                         v18,
                                                         v19);
    System_Collections_Generic_List_object____ctor(
      v20,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_AssetData___ctor__);
    this->fields.bgAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v20;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bgAssetDataList, (int32_t)v20, v21, v22);
  }
  nobleEffectList = (System_Collections_Generic_List_object__o *)this->fields.nobleEffectList;
  if ( !nobleEffectList )
    goto LABEL_20;
  if ( nobleEffectList->fields._size <= 0 )
    return;
  v24 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 nobleEffectList,
                                 (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
  ServantAssetLoadManager__unloadTargetPathAssetsLocal(this, v24, v25);
  v26 = this->fields.nobleEffectList;
  if ( !v26 )
LABEL_20:
    sub_1B64324(nobleEffectList);
  size = v26->fields._size;
  v28 = v26->fields._version + 1;
  v26->fields._size = 0;
  v26->fields._version = v28;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v26->fields._items, 0, size, 0LL);
}


void __fastcall ServantAssetLoadManager__setLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        bool dlOnly,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *downloadlist; // x0
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_Object_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass **v21; // x8
  char v22; // w2
  int32_t v23; // w3
  AssetLoader_LoadEndDataHandler_o *v24; // x21
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  AssetLoader_LoadEndDataHandler_o *v31; // x21

  if ( (byte_49FB6A7 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, path);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Remove__, v8);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1B640C8(&Method_ServantAssetLoadManager_endloadList__, v10);
    byte_49FB6A7 = 1;
  }
  if ( dlOnly )
  {
    downloadlist = (System_Collections_Generic_List_object__o *)this->fields.downloadlist;
    if ( downloadlist )
    {
      items = downloadlist->fields._items;
      v13 = Method_System_Collections_Generic_List_string__Add__;
      ++downloadlist->fields._version;
      if ( items )
      {
        size = downloadlist->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            downloadlist,
            (Il2CppObject *)path,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          downloadlist->fields._size = size + 1;
          v15[4] = (Il2CppClass *)path;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)path, dlOnly, (int32_t)method);
        }
        v24 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v16, v17);
        AssetLoader_LoadEndDataHandler___ctor(
          v24,
          (Il2CppObject *)this,
          Method_ServantAssetLoadManager_endloadList__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        if ( AssetManager__downloadAssetStorage(path, v24, 20, 0LL) )
          return;
        downloadlist = (System_Collections_Generic_List_object__o *)this->fields.downloadlist;
        if ( downloadlist )
        {
          System_Collections_Generic_List_object___Remove(
            downloadlist,
            (Il2CppObject *)path,
            (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_string__Remove__);
          return;
        }
      }
    }
LABEL_28:
    sub_1B64324(downloadlist);
  }
  downloadlist = (System_Collections_Generic_List_object__o *)this->fields.loadedList;
  if ( !downloadlist )
    goto LABEL_28;
  v18 = downloadlist->fields._items;
  v19 = Method_System_Collections_Generic_List_string__Add__;
  ++downloadlist->fields._version;
  if ( !v18 )
    goto LABEL_28;
  v20 = downloadlist->fields._size;
  if ( (unsigned int)v20 >= v18->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      downloadlist,
      (Il2CppObject *)path,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &v18->obj.klass + v20;
    downloadlist->fields._size = v20 + 1;
    v21[4] = (Il2CppClass *)path;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)path, dlOnly, (int32_t)method);
  }
  downloadlist = (System_Collections_Generic_List_object__o *)this->fields.loadlist;
  if ( !downloadlist )
    goto LABEL_28;
  v25 = downloadlist->fields._items;
  v26 = Method_System_Collections_Generic_List_string__Add__;
  ++downloadlist->fields._version;
  if ( !v25 )
    goto LABEL_28;
  v27 = downloadlist->fields._size;
  if ( (unsigned int)v27 >= v25->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      downloadlist,
      (Il2CppObject *)path,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &v25->obj.klass + v27;
    downloadlist->fields._size = v27 + 1;
    v28[4] = (Il2CppClass *)path;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)path, v22, v23);
  }
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v29, v30);
  AssetLoader_LoadEndDataHandler___ctor(v31, (Il2CppObject *)this, Method_ServantAssetLoadManager_endloadList__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_37483888(path, 20, v31, 0LL);
}


void __fastcall ServantAssetLoadManager__set_IsRetryTransition(
        ServantAssetLoadManager_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsRetryTransition_k__BackingField = value;
}


void __fastcall ServantAssetLoadManager__set_retryStatus(
        ServantAssetLoadManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._retryStatus_k__BackingField = value;
}


void __fastcall ServantAssetLoadManager__tryLoadList(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        bool dlOnly,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3

  if ( (byte_49FB6A8 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, path);
    byte_49FB6A8 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(path, 0LL) )
    ServantAssetLoadManager__setLoadList(this, path, dlOnly, v7);
}


void __fastcall ServantAssetLoadManager__unloadActorMotion(int32_t weapongroup, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_49FB6EA & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_49FB6EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  ServantAssetLoadManager__unloadActorMotionlocal((ServantAssetLoadManager_o *)Instance, weapongroup, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadActorMotionlocal(
        ServantAssetLoadManager_o *this,
        int32_t weapongroup,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x0
  Il2CppObject *loadedList; // x0
  Il2CppObject *v9; // x20
  AssetData_o *AssetStorage; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = weapongroup;
  if ( (byte_49FB6EB & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&weapongroup);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Remove__, v5);
    sub_1B640C8(&StringLiteral_12596/*"Servants/Motion/"*/, v6);
    byte_49FB6EB = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v11, 0LL);
  loadedList = (Il2CppObject *)System_String__Concat_61375396((System_String_o *)StringLiteral_12596/*"Servants/Motion/"*/, v7, 0LL);
  if ( !this->fields.loadedList )
    goto LABEL_10;
  v9 = loadedList;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.loadedList,
          loadedList,
          (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_7;
  loadedList = (Il2CppObject *)this->fields.loadedList;
  if ( !loadedList )
LABEL_10:
    sub_1B64324(loadedList);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)loadedList,
    v9,
    (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_7:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v9, 0LL);
  AssetManager__releaseAsset_37477464(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadAssets(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_49FB700 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_49FB700 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  ServantAssetLoadManager__unloadAssetsLocal((ServantAssetLoadManager_o *)Instance, v3);
}


void __fastcall ServantAssetLoadManager__unloadAssetsLocal(ServantAssetLoadManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_string__o *loadedList; // x0
  Il2CppObject *current; // x20
  AssetData_o *AssetStorage; // x20
  struct System_Collections_Generic_List_string__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FB701 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    byte_49FB701 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)loadedList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v14.fields._current;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)current, 0LL);
    if ( AssetStorage )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_37477464(AssetStorage, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v11 = this->fields.loadedList;
  if ( !v11 )
LABEL_16:
    sub_1B64324(loadedList);
  size = v11->fields._size;
  v13 = v11->fields._version + 1;
  v11->fields._size = 0;
  v11->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadBattleActor(ServantAssetArgs_o *args, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x4

  if ( (byte_49FB6C6 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_49FB6C6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !args || !Instance )
    sub_1B64324(Instance);
  ServantAssetLoadManager__unloadBattleActorlocal(
    (ServantAssetLoadManager_o *)Instance,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
    args->fields._AppearanceId_k__BackingField,
    v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadBattleActorlocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t appearanceId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *ActorFolderName; // x0
  Il2CppObject *v13; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_49FB6C7 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Remove__, v10);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v11);
    byte_49FB6C7 = 1;
  }
  if ( appearanceId < 1 )
    appearanceId = svtId;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ActorFolderName = (Il2CppObject *)ServantAssetLoadManager__getActorFolderName(
                                      appearanceId,
                                      limitCount,
                                      *(const MethodInfo **)&limitCount);
  if ( !this->fields.loadedList )
    goto LABEL_14;
  v13 = ActorFolderName;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.loadedList,
          ActorFolderName,
          (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_11;
  ActorFolderName = (Il2CppObject *)this->fields.loadedList;
  if ( !ActorFolderName )
LABEL_14:
    sub_1B64324(ActorFolderName);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)ActorFolderName,
    v13,
    (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_11:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v13, 0LL);
  AssetManager__releaseAsset_37477464(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadCameraAction(int32_t cameraId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_49FB706 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_49FB706 = 1;
  }
  if ( cameraId )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    ServantAssetLoadManager__unloadCameraActionlocal((ServantAssetLoadManager_o *)Instance, cameraId, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadCameraActionlocal(
        ServantAssetLoadManager_o *this,
        int32_t cameraId,
        const MethodInfo *method)
{
  System_String_o *CameraActionPath; // x1
  const MethodInfo *v6; // x2

  if ( (byte_49FB707 & 1) == 0 )
  {
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, *(_QWORD *)&cameraId);
    byte_49FB707 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  CameraActionPath = ServantAssetLoadManager__getCameraActionPath(cameraId, *(const MethodInfo **)&cameraId);
  ServantAssetLoadManager__unloadTargetPathAssetLocal(this, CameraActionPath, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadCommandCard(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_49FB697 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_49FB697 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  ServantAssetLoadManager__unloadCommandCardlocal((ServantAssetLoadManager_o *)Instance, svtId, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadCommandCardlocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *CommandCardLoadFolderName; // x0
  Il2CppObject *v10; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_49FB698 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Remove__, v7);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v8);
    byte_49FB698 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  CommandCardLoadFolderName = (Il2CppObject *)ServantAssetLoadManager__getCommandCardLoadFolderName(
                                                svtId,
                                                svtId,
                                                *(const MethodInfo **)&limitCount);
  if ( !this->fields.loadedList )
    goto LABEL_12;
  v10 = CommandCardLoadFolderName;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.loadedList,
          CommandCardLoadFolderName,
          (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_9;
  CommandCardLoadFolderName = (Il2CppObject *)this->fields.loadedList;
  if ( !CommandCardLoadFolderName )
LABEL_12:
    sub_1B64324(CommandCardLoadFolderName);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)CommandCardLoadFolderName,
    v10,
    (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_9:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v10, 0LL);
  AssetManager__releaseAsset_37477464(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadCommandSpellAnyVoice(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_49FB6BB & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v1);
    byte_49FB6BB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  ServantAssetLoadManager__unloadCommandSpellAnyVoiceLocal((ServantAssetLoadManager_o *)Instance, v3);
}


void __fastcall ServantAssetLoadManager__unloadCommandSpellAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  void *Instance; // x0
  __int64 v6; // x1
  int v7; // w8
  _DWORD *v8; // x19
  unsigned int i; // w21
  char *v10; // x23
  CommandSpellEntity_o *v11; // x0
  void **v12; // x23
  CommandSpellEntity_o *v13; // t1
  SoundManager_o *v14; // x20

  if ( (byte_49FB6BC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CommandSpellMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_getEntitys_CommandSpellEntity___, v2);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v4);
    byte_49FB6BC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommandSpellMaster___)) == 0LL
    || (Instance = DataMasterBase__getEntitys_object_(
                     (DataMasterBase_o *)Instance,
                     (const MethodInfo_2E39C80 *)Method_DataMasterBase_getEntitys_CommandSpellEntity___)) == 0LL )
  {
LABEL_21:
    sub_1B64324(Instance);
  }
  v7 = *((_DWORD *)Instance + 6);
  v8 = Instance;
  if ( v7 >= 1 )
  {
    for ( i = 0; (int)i < v7; ++i )
    {
      if ( i >= v7 )
LABEL_20:
        sub_1B6432C(Instance, v6);
      v10 = (char *)&v8[2 * i];
      v13 = (CommandSpellEntity_o *)*((_QWORD *)v10 + 4);
      v12 = (void **)(v10 + 32);
      v11 = v13;
      if ( !v13 )
        return;
      Instance = (void *)CommandSpellEntity__isUseBattle(v11, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( i >= v8[6] )
          goto LABEL_20;
        Instance = *v12;
        if ( !*v12 )
          goto LABEL_21;
        Instance = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
        if ( Instance )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
          if ( i >= v8[6] )
            goto LABEL_20;
          v14 = (SoundManager_o *)Instance;
          Instance = *v12;
          if ( !*v12 )
            goto LABEL_21;
          Instance = CommandSpellEntity__getVoiceAssetName((CommandSpellEntity_o *)Instance, 0LL);
          if ( !v14 )
            goto LABEL_21;
          SoundManager__ReleaseAudioAssetStorage(v14, (System_String_o *)Instance, 0LL);
        }
      }
      v7 = v8[6];
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadFromDeckServant(
        BattleDeckServantData_o *deckSvt,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_49FB714 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_49FB714 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  ServantAssetLoadManager__unloadFromDeckServantlocal((ServantAssetLoadManager_o *)Instance, deckSvt, v4);
}


void __fastcall ServantAssetLoadManager__unloadFromDeckServantlocal(
        ServantAssetLoadManager_o *this,
        BattleDeckServantData_o *deckSvt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t EnemyNameEffect; // w0
  const MethodInfo *v9; // x1
  int32_t v10; // w20
  Il2CppObject *NameEffectPath; // x0
  System_String_o *v12; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_49FB715 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, deckSvt);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Remove__, v6);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v7);
    byte_49FB715 = 1;
  }
  if ( deckSvt )
  {
    EnemyNameEffect = BattleDeckServantData__getEnemyNameEffect(deckSvt, 0LL);
    if ( EnemyNameEffect )
    {
      v10 = EnemyNameEffect;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      NameEffectPath = (Il2CppObject *)ServantAssetLoadManager__getNameEffectPath(v10, v9);
      if ( this->fields.loadedList )
      {
        v12 = (System_String_o *)NameEffectPath;
        if ( !System_Collections_Generic_List_object___Contains(
                (System_Collections_Generic_List_object__o *)this->fields.loadedList,
                NameEffectPath,
                (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__) )
        {
LABEL_11:
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetStorage = AssetManager__getAssetStorage(v12, 0LL);
          AssetManager__releaseAsset_37477464(AssetStorage, 0LL);
          return;
        }
        NameEffectPath = (Il2CppObject *)this->fields.loadedList;
        if ( NameEffectPath )
        {
          System_Collections_Generic_List_object___Remove(
            (System_Collections_Generic_List_object__o *)NameEffectPath,
            (Il2CppObject *)v12,
            (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_string__Remove__);
          goto LABEL_11;
        }
      }
      sub_1B64324(NameEffectPath);
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadServant(ServantAssetArgs_o *args, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_49FB6AF & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_49FB6AF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  ServantAssetLoadManager__unloadServantlocal((ServantAssetLoadManager_o *)Instance, args, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadServantVoice(
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v8; // x4

  if ( (byte_49FB6B3 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_49FB6B3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  ServantAssetLoadManager__unloadServantVoicelocal(
    (ServantAssetLoadManager_o *)Instance,
    svtId,
    limitCount,
    overwriteSvtVoiceId,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadServantVoicelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  int32_t VoiceId; // w0
  int32_t v11; // w8
  Il2CppObject *Instance; // x19
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FB6B4 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, *(_QWORD *)&svtId);
    sub_1B640C8(&StringLiteral_12599/*"Servants_"*/, v9);
    byte_49FB6B4 = 1;
  }
  VoiceId = ServantAssetLoadManager__getVoiceId(this, svtId, limitCount, *(const MethodInfo **)&overwriteSvtVoiceId);
  if ( overwriteSvtVoiceId )
    v11 = overwriteSvtVoiceId;
  else
    v11 = VoiceId;
  v15 = v11;
  if ( v11 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v13 = System_Int32__ToString((int32_t)&v15, 0LL);
    v14 = System_String__Concat_61375396((System_String_o *)StringLiteral_12599/*"Servants_"*/, v13, 0LL);
    if ( !Instance )
      sub_1B64324(v14);
    SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, v14, 0LL);
  }
}


void __fastcall ServantAssetLoadManager__unloadServantlocal(
        ServantAssetLoadManager_o *this,
        ServantAssetArgs_o *args,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4
  const MethodInfo *v10; // x2

  if ( !args )
    sub_1B64324(this);
  ServantAssetLoadManager__unloadBattleActorlocal(
    this,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
    args->fields._AppearanceId_k__BackingField,
    v3);
  ServantAssetLoadManager__unloadStatusFacelocal(
    this,
    args->fields._DispImageSvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
    v6);
  ServantAssetLoadManager__unloadCommandCardlocal(this, args->fields._CommandImageSvtId_k__BackingField, v7, v8);
  ServantAssetLoadManager__unloadServantVoicelocal(
    this,
    args->fields._SvtId_k__BackingField,
    args->fields._DispLimitCount_k__BackingField,
    args->fields._OverwriteSvtVoiceId_k__BackingField,
    v9);
  ServantAssetLoadManager__UnloadCommandCodeTextureLocal(this, args->fields._CommandCodeIds_k__BackingField, v10);
}


void __fastcall ServantAssetLoadManager__unloadSkillAnyVoice(
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_49FB6B7 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_49FB6B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  ServantAssetLoadManager__unloadSkillAnyVoiceLocal((ServantAssetLoadManager_o *)Instance, skillInfo, v4);
}


void __fastcall ServantAssetLoadManager__unloadSkillAnyVoiceLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x0
  DataManager_o *VoiceAssetName; // x0
  Il2CppObject *MasterData_object; // x20
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v11; // x19
  Il2CppObject *Instance; // x20

  if ( (byte_49FB6B8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, skillInfo);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v5);
    byte_49FB6B8 = 1;
  }
  if ( skillInfo
    && ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.method)(
         skillInfo,
         skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr,
         method)
    && skillInfo->fields.skilllv )
  {
    v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
      v6 = sub_1BB5FA4(v6);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1BB5FA4(v7);
    VoiceAssetName = **(DataManager_o ***)(v7 + 184);
    if ( !VoiceAssetName )
      goto LABEL_17;
    MasterData_object = DataManager__GetMasterData_object_(
                          VoiceAssetName,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
    VoiceAssetName = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                        skillInfo,
                                        skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !MasterData_object )
      goto LABEL_17;
    Entity = SkillLvMaster__GetEntity(
               (SkillLvMaster_o *)MasterData_object,
               (int32_t)VoiceAssetName,
               skillInfo->fields.skilllv,
               0LL);
    if ( Entity )
    {
      v11 = Entity;
      if ( SkillLvEntity__getVoiceAssetName(Entity, 0LL) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        VoiceAssetName = (DataManager_o *)SkillLvEntity__getVoiceAssetName(v11, 0LL);
        if ( Instance )
        {
          SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)VoiceAssetName, 0LL);
          return;
        }
LABEL_17:
        sub_1B64324(VoiceAssetName);
      }
    }
  }
}


void __fastcall ServantAssetLoadManager__unloadSkillCutIn(BattleSkillInfoData_o *skillInfo, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_49FB6E6 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_49FB6E6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  ServantAssetLoadManager__unloadSkillCutInLocal((ServantAssetLoadManager_o *)Instance, skillInfo, v4);
}


void __fastcall ServantAssetLoadManager__unloadSkillCutInLocal(
        ServantAssetLoadManager_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  ServantAssetLoadManager_o *v4; // x0
  const MethodInfo *v5; // x2
  System_String_o *SkillCutInPath; // x1
  const MethodInfo *v7; // x2

  if ( skillInfo )
  {
    v4 = (ServantAssetLoadManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))skillInfo->klass->vtable._7_getCutInId.method)(
                                        skillInfo,
                                        skillInfo->klass->vtable._8_PreLoad.methodPtr,
                                        method);
    if ( (int)v4 >= 1 )
    {
      SkillCutInPath = ServantAssetLoadManager__getSkillCutInPath(v4, (int32_t)v4, v5);
      ServantAssetLoadManager__unloadTargetPathAssetLocal(this, SkillCutInPath, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadStatusFace(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_49FB69F & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&limitCount);
    byte_49FB69F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  ServantAssetLoadManager__unloadStatusFacelocal((ServantAssetLoadManager_o *)Instance, svtId, limitCount, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadStatusFacelocal(
        ServantAssetLoadManager_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w1
  const MethodInfo *v11; // x2
  Il2CppObject *StatusImageFolderName; // x0
  Il2CppObject *v13; // x20
  AssetData_o *AssetStorage; // x0

  if ( (byte_49FB6A0 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Remove__, v8);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v9);
    byte_49FB6A0 = 1;
  }
  ServantAssetLoadManager__getBattleChrId(this, svtId, limitCount, method);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  StatusImageFolderName = (Il2CppObject *)ServantAssetLoadManager__getStatusImageFolderName(svtId, v10, v11);
  if ( !this->fields.loadedList )
    goto LABEL_12;
  v13 = StatusImageFolderName;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)this->fields.loadedList,
          StatusImageFolderName,
          (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_9;
  StatusImageFolderName = (Il2CppObject *)this->fields.loadedList;
  if ( !StatusImageFolderName )
LABEL_12:
    sub_1B64324(StatusImageFolderName);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)StatusImageFolderName,
    v13,
    (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_9:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)v13, 0LL);
  AssetManager__releaseAsset_37477464(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__unloadTargetPathAssetLocal(
        ServantAssetLoadManager_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_string__o *loadedList; // x0
  AssetData_o *AssetStorage; // x0
  AssetData_o *v9; // x19

  if ( (byte_49FB6E2 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, path);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Remove__, v6);
    byte_49FB6E2 = 1;
  }
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_14;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)loadedList,
          (Il2CppObject *)path,
          (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_7;
  loadedList = this->fields.loadedList;
  if ( !loadedList )
LABEL_14:
    sub_1B64324(loadedList);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)loadedList,
    (Il2CppObject *)path,
    (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_7:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(path, 0LL);
  if ( AssetStorage )
  {
    v9 = AssetStorage;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37477464(v9, 0LL);
  }
}


void __fastcall ServantAssetLoadManager__unloadTargetPathAssets(
        System_String_array *pathList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_49FB6E1 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, method);
    byte_49FB6E1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  ServantAssetLoadManager__unloadTargetPathAssetsLocal((ServantAssetLoadManager_o *)Instance, pathList, v4);
}


void __fastcall ServantAssetLoadManager__unloadTargetPathAssetsLocal(
        ServantAssetLoadManager_o *this,
        System_String_array *pathList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v6; // x21

  if ( !pathList )
    sub_1B64324(this);
  v3 = *(_QWORD *)&pathList->max_length;
  if ( (int)v3 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v3 )
        sub_1B6432C(this, pathList);
      ServantAssetLoadManager__unloadTargetPathAssetLocal(this, pathList->m_Items[v6], method);
      LODWORD(v3) = pathList->max_length;
      ++v6;
    }
    while ( (__int64)v6 < (int)v3 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadWeaponGroupEffect(
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x3

  if ( (byte_49FB6DB & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, *(_QWORD *)&effectFolder);
    byte_49FB6DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  ServantAssetLoadManager__unloadWeaponGroupEffectlocal(
    (ServantAssetLoadManager_o *)Instance,
    weapongroup,
    effectFolder,
    v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager__unloadWeaponGroupEffectlocal(
        ServantAssetLoadManager_o *this,
        int32_t weapongroup,
        int32_t effectFolder,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v10; // x0
  System_String_o *v11; // x20
  System_String_o *v12; // x0
  struct System_Collections_Generic_List_string__o *loadedList; // x0
  AssetData_o *AssetStorage; // x0
  int32_t v15; // [xsp+8h] [xbp-28h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  v15 = effectFolder;
  v16 = weapongroup;
  if ( (byte_49FB6DC & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&weapongroup);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Remove__, v7);
    sub_1B640C8(&StringLiteral_5839/*"Effect/weapon/"*/, v8);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v9);
    byte_49FB6DC = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v16, 0LL);
  v11 = System_String__Concat_61375396((System_String_o *)StringLiteral_5839/*"Effect/weapon/"*/, v10, 0LL);
  if ( effectFolder )
  {
    v12 = System_Int32__ToString((int32_t)&v15, 0LL);
    v11 = System_String__Concat_61386656(v11, (System_String_o *)StringLiteral_1124/*"/"*/, v12, 0LL);
  }
  loadedList = this->fields.loadedList;
  if ( !loadedList )
    goto LABEL_12;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)loadedList,
          (Il2CppObject *)v11,
          (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__) )
    goto LABEL_9;
  loadedList = this->fields.loadedList;
  if ( !loadedList )
LABEL_12:
    sub_1B64324(loadedList);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)loadedList,
    (Il2CppObject *)v11,
    (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_string__Remove__);
LABEL_9:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(v11, 0LL);
  AssetManager__releaseAsset_37477464(AssetStorage, 0LL);
}


void __fastcall ServantAssetLoadManager__GetAheadBg_d__155___ctor(
        ServantAssetLoadManager__GetAheadBg_d__155_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ServantAssetLoadManager__GetAheadBg_d__155__MoveNext(
        ServantAssetLoadManager__GetAheadBg_d__155_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v3; // w3
  ServantAssetLoadManager__GetAheadBg_d__155_o *v4; // x19
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
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  struct WellFired_USFGOChangeBgEvent_array *bgList; // x8
  System_Collections_Generic_List_object__o *v20; // x22
  ServantAssetLoadManager__GetAheadBg_d__155_o **p_bgAheadList_5__2; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  WellFired_USFGOChangeBgEvent_o *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  struct WellFired_USFGOChangeBgEvent_array *v27; // x22
  int max_length; // w8
  unsigned int v29; // w23
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 _2__current_low; // x10
  __int64 v33; // x8
  System_String_o *BgAssetPath; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  AssetLoader_LoadEndDataHandler_o *v37; // x22
  struct System_Collections_Generic_List_USFGOChangeBgEvent__o *bgAheadList_5__2; // x8
  _DWORD *monitor; // x9
  struct System_Action_o *callback; // x8
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v42; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v44; // w2
  int32_t v45; // w3
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_49FB71C & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_USFGOChangeBgEvent__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_AssetData__get_Count__, v12);
    sub_1B640C8(&System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo, v13);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_1B640C8(&Method_ServantAssetLoadManager__GetAheadBg_b__155_0__, v15);
    this = (ServantAssetLoadManager__GetAheadBg_d__155_o *)sub_1B640C8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v16);
    byte_49FB71C = 1;
  }
  memset(&v47, 0, sizeof(v47));
  _1__state = v4->fields.__1__state;
  _4__this = (Il2CppObject *)v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    bgList = v4->fields.bgList;
    v4->fields.__1__state = -1;
    if ( !bgList )
    {
LABEL_32:
      callback = v4->fields.callback;
      if ( !callback )
        goto LABEL_35;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        *(_QWORD *)&callback->fields.extra_arg);
      return 0;
    }
    v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_USFGOChangeBgEvent__TypeInfo,
                                                         method,
                                                         v2);
    System_Collections_Generic_List_object____ctor(
      v20,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_USFGOChangeBgEvent___ctor__);
    v4->fields._bgAheadList_5__2 = (struct System_Collections_Generic_List_USFGOChangeBgEvent__o *)v20;
    p_bgAheadList_5__2 = (ServantAssetLoadManager__GetAheadBg_d__155_o **)&v4->fields._bgAheadList_5__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._bgAheadList_5__2, (int32_t)v20, v22, v23);
    v27 = v4->fields.bgList;
    if ( !v27 )
      goto LABEL_35;
    max_length = v27->max_length;
    if ( max_length >= 1 )
    {
      v29 = 0;
      while ( 1 )
      {
        if ( v29 >= max_length )
          sub_1B6432C(this, v24);
        v24 = v27->m_Items[v29];
        if ( !v24 )
          break;
        if ( v24->fields.aheadLoad )
        {
          this = *p_bgAheadList_5__2;
          if ( !*p_bgAheadList_5__2 )
            break;
          v30 = *(_QWORD *)&this->fields.__1__state;
          v31 = Method_System_Collections_Generic_List_USFGOChangeBgEvent__Add__;
          ++HIDWORD(this->fields.__2__current);
          if ( !v30 )
            break;
          _2__current_low = SLODWORD(this->fields.__2__current);
          if ( (unsigned int)_2__current_low >= *(_DWORD *)(v30 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v24,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = v30 + 8 * _2__current_low;
            LODWORD(this->fields.__2__current) = _2__current_low + 1;
            *(_QWORD *)(v33 + 32) = v24;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 32), (int32_t)v24, v25, v26);
          }
        }
        max_length = v27->max_length;
        if ( (int)++v29 >= max_length )
          goto LABEL_18;
      }
LABEL_35:
      sub_1B64324(this);
    }
LABEL_18:
    this = *p_bgAheadList_5__2;
    if ( !*p_bgAheadList_5__2 )
      goto LABEL_35;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v46,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_USFGOChangeBgEvent__GetEnumerator__);
    v47 = v46;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v47,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__MoveNext__) )
    {
      if ( !v47.fields._current )
        sub_1B64324(0LL);
      BgAssetPath = WellFired_USFGOChangeBgEvent__GetBgAssetPath(
                      (WellFired_USFGOChangeBgEvent_o *)v47.fields._current,
                      0LL);
      v37 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v35, v36);
      AssetLoader_LoadEndDataHandler___ctor(v37, _4__this, Method_ServantAssetLoadManager__GetAheadBg_b__155_0__, 0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(BgAssetPath, v37, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v47,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_USFGOChangeBgEvent__Dispose__);
  }
  this = (ServantAssetLoadManager__GetAheadBg_d__155_o *)&v4->fields._bgAheadList_5__2;
  bgAheadList_5__2 = v4->fields._bgAheadList_5__2;
  if ( !bgAheadList_5__2 )
    goto LABEL_35;
  if ( !_4__this )
    goto LABEL_35;
  monitor = _4__this[7].monitor;
  if ( !monitor )
    goto LABEL_35;
  if ( bgAheadList_5__2->fields._size == monitor[6] )
  {
    this->klass = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)this, 0, v2, v3);
    goto LABEL_32;
  }
  v42 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
  UnityEngine_WaitForEndOfFrame___ctor(v42, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v42;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B6406C(p__2__current, (int32_t)v42, v44, v45);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return result;
}


Il2CppObject *__fastcall ServantAssetLoadManager__GetAheadBg_d__155__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantAssetLoadManager__GetAheadBg_d__155_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ServantAssetLoadManager__GetAheadBg_d__155__System_Collections_IEnumerator_Reset(
        ServantAssetLoadManager__GetAheadBg_d__155_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_ServantAssetLoadManager__GetAheadBg_d__155_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall ServantAssetLoadManager__GetAheadBg_d__155__System_Collections_IEnumerator_get_Current(
        ServantAssetLoadManager__GetAheadBg_d__155_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ServantAssetLoadManager__GetAheadBg_d__155__System_IDisposable_Dispose(
        ServantAssetLoadManager__GetAheadBg_d__155_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantAssetLoadManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FB71A & 1) == 0 )
  {
    sub_1B640C8(&ServantAssetLoadManager___c_TypeInfo, v1);
    byte_49FB71A = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantAssetLoadManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantAssetLoadManager___c_TypeInfo->static_fields->__9 = (struct ServantAssetLoadManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantAssetLoadManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall ServantAssetLoadManager___c___ctor(ServantAssetLoadManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Shader_o *__fastcall ServantAssetLoadManager___c___GetReplaceChocoShaderFunc_b__95_0(
        ServantAssetLoadManager___c_o *this,
        UnityEngine_Shader_o *targetShader,
        UnityEngine_Shader_o *defaultShader,
        const MethodInfo *method)
{
  return defaultShader;
}


UnityEngine_Shader_o *__fastcall ServantAssetLoadManager___c___GetReplaceDeadShaderFunc_b__94_0(
        ServantAssetLoadManager___c_o *this,
        UnityEngine_Shader_o *targetShader,
        UnityEngine_Shader_o *defaultShader,
        const MethodInfo *method)
{
  return defaultShader;
}


void __fastcall ServantAssetLoadManager___c__DisplayClass135_0___ctor(
        ServantAssetLoadManager___c__DisplayClass135_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantAssetLoadManager___c__DisplayClass135_0___playBattleVoicelocal_b__0(
        ServantAssetLoadManager___c__DisplayClass135_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  if ( !this->fields.__4__this )
    sub_1B64324(this);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall ServantAssetLoadManager___c__DisplayClass153_0___ctor(
        ServantAssetLoadManager___c__DisplayClass153_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantAssetLoadManager___c__DisplayClass153_0___loadNoblePhantasmCoroutine_b__0(
        ServantAssetLoadManager___c__DisplayClass153_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct ServantAssetLoadManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  _4__this->fields.nobleSequenceData = data;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&_4__this->fields.nobleSequenceData,
    (int32_t)data,
    (int32_t)method,
    v3);
  this->fields.isNext = 1;
}


void __fastcall ServantAssetLoadManager___c__DisplayClass153_0___loadNoblePhantasmCoroutine_b__1(
        ServantAssetLoadManager___c__DisplayClass153_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 _4__this; // x0
  Il2CppObject *AssetObject_object; // x20
  Il2CppObject *v14; // x0
  struct UnityEngine_GameObject_o **p_sequence; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_Transform_o *v18; // x21
  __int64 v19; // x1
  UnityEngine_Transform_o *v20; // x21
  __int64 v21; // x1
  UnityEngine_Transform_o *v22; // x21
  __int64 v23; // x1
  UnityEngine_Transform_o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  const MethodInfo *v27; // x3
  System_Action_o *_9__2; // x22
  WellFired_USFGOChangeBgEvent_array *v29; // x21
  ServantAssetLoadManager_o *v30; // x20
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_IEnumerator_o *AheadBg; // x1

  if ( (byte_49FB71B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, assetData);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___, v6);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&Method_ServantAssetLoadManager_getAssetObject_GameObject___, v9);
    sub_1B640C8(&Method_ServantAssetLoadManager___c__DisplayClass153_0__loadNoblePhantasmCoroutine_b__2__, v10);
    sub_1B640C8(&StringLiteral_4439/*"ChrSequence1"*/, v11);
    byte_49FB71B = 1;
  }
  _4__this = (__int64)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_28;
  *(_QWORD *)(_4__this + 112) = assetData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(_4__this + 112), (int32_t)assetData, (int32_t)method, v3);
  _4__this = (__int64)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_28;
  AssetObject_object = ServantAssetLoadManager__getAssetObject_object_(
                         (ServantAssetLoadManager_o *)_4__this,
                         this->fields.sequencePath,
                         (System_String_o *)StringLiteral_4439/*"ChrSequence1"*/,
                         (const MethodInfo_2ED62E8 *)Method_ServantAssetLoadManager_getAssetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__Instantiate_object_(
          AssetObject_object,
          (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.sequence = (struct UnityEngine_GameObject_o *)v14;
  p_sequence = &this->fields.sequence;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.sequence, (int32_t)v14, v16, v17);
  _4__this = (__int64)this->fields.sequence;
  if ( !_4__this )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0LL);
  _4__this = (__int64)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  if ( !this->fields.parent )
    goto LABEL_28;
  v18 = (UnityEngine_Transform_o *)_4__this;
  _4__this = (__int64)UnityEngine_GameObject__get_transform(this->fields.parent, 0LL);
  if ( !v18 )
    goto LABEL_28;
  UnityEngine_Transform__set_parent(v18, (UnityEngine_Transform_o *)_4__this, 0LL);
  _4__this = (__int64)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  v20 = (UnityEngine_Transform_o *)_4__this;
  if ( !byte_49F7111 )
  {
    _4__this = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v19);
    byte_49F7111 = 1;
  }
  if ( !v20 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v20, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  _4__this = (__int64)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  v22 = (UnityEngine_Transform_o *)_4__this;
  if ( !byte_49F7119 )
  {
    _4__this = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v21);
    byte_49F7119 = 1;
  }
  if ( !v22 )
    goto LABEL_28;
  UnityEngine_Transform__set_eulerAngles(v22, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
  _4__this = (__int64)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0LL);
  v24 = (UnityEngine_Transform_o *)_4__this;
  if ( !byte_49F7116 )
  {
    _4__this = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v23);
    byte_49F7116 = 1;
  }
  if ( !v24 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v24, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  _4__this = (__int64)*p_sequence;
  if ( !*p_sequence )
    goto LABEL_28;
  _4__this = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                        (UnityEngine_GameObject_o *)_4__this,
                        (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOChangeBgEvent___);
  _9__2 = this->fields.__9__2;
  v29 = (WellFired_USFGOChangeBgEvent_array *)_4__this;
  v30 = this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v25, v26);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ServantAssetLoadManager___c__DisplayClass153_0__loadNoblePhantasmCoroutine_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v31, v32);
  }
  if ( !v30 )
LABEL_28:
    sub_1B64324(_4__this);
  AheadBg = ServantAssetLoadManager__GetAheadBg(v30, v29, _9__2, v27);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)v30, AheadBg, 0LL);
}


void __fastcall ServantAssetLoadManager___c__DisplayClass153_0___loadNoblePhantasmCoroutine_b__2(
        ServantAssetLoadManager___c__DisplayClass153_0_o *this,
        const MethodInfo *method)
{
  this->fields.isNext = 1;
}


void __fastcall ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153___ctor(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153__MoveNext(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v3; // w3
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *v4; // x19
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
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  struct ServantAssetLoadManager_o *_4__this; // x21
  Il2CppObject *v31; // x22
  struct ServantAssetLoadManager___c__DisplayClass153_0_o **p__8__1; // x20
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  struct ServantAssetLoadManager_o *v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  struct UnityEngine_GameObject_o *parent; // x1
  const MethodInfo *v41; // x1
  TreasureDeviceSequenceWeightEntity_o *EntityWithCommonPattern; // x0
  int32_t _1__state; // w8
  int v44; // w9
  struct ServantAssetLoadManager_o **p__4__this; // x0
  System_String_o *v46; // x20
  Il2CppObject *v47; // x23
  __int64 v48; // x1
  __int64 v49; // x2
  AssetLoader_LoadEndDataHandler_o *v50; // x22
  struct ServantAssetLoadManager___c__DisplayClass153_0_o *v51; // x8
  UnityEngine_Object_o *sequence; // x20
  __int64 v53; // x1
  __int64 v54; // x2
  int32_t v55; // w3
  System_Collections_Generic_List_int__o *v56; // x20
  System_Int32_array *funcId; // x20
  int v58; // w20
  const MethodInfo *v59; // x2
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *v60; // x1
  struct ServantAssetLoadManager___c__DisplayClass153_0_o *v61; // x8
  int _2__current; // w8
  ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *v63; // x20
  __int64 v64; // x22
  const MethodInfo *v65; // x2
  ServantAssetLoadManager_c *v66; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int v68; // w8
  struct ServantAssetLoadManager___c__DisplayClass153_0_o *v69; // x8
  struct UnityEngine_GameObject_o *v70; // x20
  struct ServantAssetLoadManager_onGameObjectLoadComplete_o *callback; // x23
  int32_t seqIdFromMstTDSeqWeight_5__2; // w21
  int32_t groupSeqIdFromMstTDSeqWeight_5__3; // w22
  System_Tuple_int__int__o *v74; // x19
  bool result; // w0
  int32_t limitCount; // w1
  int32_t RandomSeqIdEachLimit; // w0
  struct ServantAssetLoadManager___c__DisplayClass153_0_o *v78; // x21
  System_String_o *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  struct ServantAssetLoadManager___c__DisplayClass153_0_o *_8__1; // x8
  System_String_o *sequencePath; // x22
  struct ServantAssetLoadManager___c__DisplayClass153_0_o *v88; // x22
  System_String_o *v89; // x0
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *nobleDataPath_5__4; // x22
  __int64 v93; // x1
  __int64 v94; // x2
  System_String_o *v95; // x0
  System_String_o *v96; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  struct ServantAssetLoadManager___c__DisplayClass153_0_o *v99; // x22
  System_String_o *v100; // x20
  AssetLoader_LoadEndDataHandler_o *v101; // x21
  struct ServantAssetLoadManager___c__DisplayClass153_0_o *v102; // x8
  _BOOL4 isNext; // w20
  TreasureDvcLvEntity_o *v104; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_List_int__o *effectIdList; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+10h] [xbp-50h] BYREF
  int32_t v107; // [xsp+1Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_49FB71D & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&BattleEffectUtility_TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_TreasureDeviceSequenceWeightMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_TreasureDvcMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v10);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___, v11);
    sub_1B640C8(&int___TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__AddRange__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v17);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v18);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B640C8(&Method_System_Tuple_int__int___ctor__, v21);
    sub_1B640C8(&Method_System_Tuple_int__int__get_Item1__, v22);
    sub_1B640C8(&Method_System_Tuple_int__int__get_Item2__, v23);
    sub_1B640C8(&System_Tuple_int__int__TypeInfo, v24);
    sub_1B640C8(&Method_ServantAssetLoadManager___c__DisplayClass153_0__loadNoblePhantasmCoroutine_b__0__, v25);
    sub_1B640C8(&Method_ServantAssetLoadManager___c__DisplayClass153_0__loadNoblePhantasmCoroutine_b__1__, v26);
    sub_1B640C8(&ServantAssetLoadManager___c__DisplayClass153_0_TypeInfo, v27);
    sub_1B640C8(&StringLiteral_9458/*"NoblePhantasm/"*/, v28);
    this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)sub_1B640C8(&StringLiteral_9460/*"NoblePhantasm/Sequence/"*/, v29);
    byte_49FB71D = 1;
  }
  v107 = 0;
  effectIdList = 0LL;
  entity = 0LL;
  v104 = 0LL;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v31 = (Il2CppObject *)sub_1B64314(ServantAssetLoadManager___c__DisplayClass153_0_TypeInfo, method, v2);
      System_Object___ctor(v31, 0LL);
      v4->fields.__8__1 = (struct ServantAssetLoadManager___c__DisplayClass153_0_o *)v31;
      p__8__1 = &v4->fields.__8__1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v31, v33, v34);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_97;
      v37 = v4->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v37;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v37, v35, v36);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_97;
      parent = v4->fields.parent;
      *(_QWORD *)&this->fields.treasureDvcId = parent;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.treasureDvcId, (int32_t)parent, v38, v39);
      if ( !*p__8__1 )
        goto LABEL_97;
      (*p__8__1)->fields.isNext = 0;
      if ( !_4__this )
        goto LABEL_97;
      ServantAssetLoadManager__releaseNoblePhantasm(_4__this, v41);
      *(_QWORD *)&v4->fields._seqIdFromMstTDSeqWeight_5__2 = 0LL;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_TreasureDeviceSequenceWeightMaster___);
      if ( !this )
        goto LABEL_97;
      EntityWithCommonPattern = TreasureDeviceSequenceWeightMaster__GetEntityWithCommonPattern(
                                  (TreasureDeviceSequenceWeightMaster_o *)this,
                                  v4->fields.treasureDvcId,
                                  v4->fields.limitCount,
                                  v4->fields.npChargeStage,
                                  0LL);
      if ( !EntityWithCommonPattern )
        goto LABEL_64;
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)TreasureDeviceSequenceWeightEntity__GetSeqIdAndGroupSeqId(
                                                                               EntityWithCommonPattern,
                                                                               0LL);
      if ( !this )
        goto LABEL_97;
      _1__state = this->fields.__1__state;
      if ( _1__state >= 1 )
      {
        v4->fields._seqIdFromMstTDSeqWeight_5__2 = _1__state;
        v44 = *(&this->fields.__1__state + 1);
        if ( v44 >= 1 )
          v4->fields._groupSeqIdFromMstTDSeqWeight_5__3 = v44;
        goto LABEL_73;
      }
      _1__state = v4->fields._seqIdFromMstTDSeqWeight_5__2;
      if ( _1__state >= 1 )
        goto LABEL_73;
LABEL_64:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
      if ( !this )
        goto LABEL_97;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              &entity,
              v4->fields.treasureDvcId,
              (const MethodInfo_30D3EF8 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
      {
        _1__state = v4->fields.treasureDvcId;
LABEL_73:
        v107 = _1__state;
        goto LABEL_76;
      }
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)entity;
      if ( !entity )
        goto LABEL_97;
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)TreasureDvcEntity__IsRandomTD(
                                                                               (TreasureDvcEntity_o *)entity,
                                                                               0LL);
      if ( !entity )
        goto LABEL_97;
      limitCount = v4->fields.limitCount;
      if ( ((unsigned __int8)this & 1) != 0 )
        RandomSeqIdEachLimit = TreasureDvcEntity__getRandomSeqIdEachLimit(
                                 (TreasureDvcEntity_o *)entity,
                                 limitCount,
                                 0,
                                 0LL);
      else
        RandomSeqIdEachLimit = TreasureDvcEntity__getSeqId((TreasureDvcEntity_o *)entity, limitCount, 0LL);
      v107 = RandomSeqIdEachLimit;
LABEL_76:
      v78 = *p__8__1;
      v79 = System_Int32__ToString((int32_t)&v107, 0LL);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)System_String__Concat_61375396(
                                                                               (System_String_o *)StringLiteral_9460/*"NoblePhantasm/Sequence/"*/,
                                                                               v79,
                                                                               0LL);
      if ( !v78 )
        goto LABEL_97;
      v78->fields.sequencePath = (struct System_String_o *)this;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v78->fields.sequencePath, (int32_t)this, v80, v81);
      v82 = System_Int32__ToString((int32_t)&v107, 0LL);
      v83 = System_String__Concat_61375396((System_String_o *)StringLiteral_9458/*"NoblePhantasm/"*/, v82, 0LL);
      v4->fields._nobleDataPath_5__4 = v83;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._nobleDataPath_5__4, (int32_t)v83, v84, v85);
      _8__1 = v4->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_97;
      sequencePath = _8__1->fields.sequencePath;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( !AssetManager__isExistAssetStorage(sequencePath, 0LL) )
      {
        v88 = v4->fields.__8__1;
        v89 = System_Int32__ToString((int)v4 + 60, 0LL);
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)System_String__Concat_61375396(
                                                                                 (System_String_o *)StringLiteral_9460/*"NoblePhantasm/Sequence/"*/,
                                                                                 v89,
                                                                                 0LL);
        if ( !v88 )
          goto LABEL_97;
        v88->fields.sequencePath = (struct System_String_o *)this;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v88->fields.sequencePath, (int32_t)this, v90, v91);
      }
      nobleDataPath_5__4 = v4->fields._nobleDataPath_5__4;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)AssetManager__isExistAssetStorage(
                                                                               nobleDataPath_5__4,
                                                                               0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v95 = System_Int32__ToString((int)v4 + 60, 0LL);
        v96 = System_String__Concat_61375396((System_String_o *)StringLiteral_9458/*"NoblePhantasm/"*/, v95, 0LL);
        v4->fields._nobleDataPath_5__4 = v96;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._nobleDataPath_5__4, (int32_t)v96, v97, v98);
      }
      v99 = *p__8__1;
      if ( !*p__8__1 )
        goto LABEL_97;
      v99->fields.isNext = 0;
      v100 = v99->fields.sequencePath;
      v101 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v93, v94);
      AssetLoader_LoadEndDataHandler___ctor(
        v101,
        (Il2CppObject *)v99,
        Method_ServantAssetLoadManager___c__DisplayClass153_0__loadNoblePhantasmCoroutine_b__0__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)AssetManager__loadAssetStorage(
                                                                               v100,
                                                                               v101,
                                                                               1,
                                                                               0LL);
LABEL_91:
      v102 = v4->fields.__8__1;
      if ( !v102 )
        goto LABEL_97;
      isNext = v102->fields.isNext;
      v4->fields.__2__current = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__2__current, 0, v2, v3);
      if ( !isNext )
      {
        result = 1;
        v4->fields.__1__state = 1;
        return result;
      }
      v4->fields.__1__state = 2;
      return 1;
    case 1:
      v4->fields.__1__state = -1;
      goto LABEL_91;
    case 2:
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !this )
        goto LABEL_97;
      this->fields.__4__this = 0LL;
      p__4__this = &this->fields.__4__this;
      *((_BYTE *)p__4__this - 8) = 0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)p__4__this, 0, v2, v3);
      v46 = v4->fields._nobleDataPath_5__4;
      v47 = (Il2CppObject *)v4->fields.__8__1;
      v50 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v48, v49);
      AssetLoader_LoadEndDataHandler___ctor(
        v50,
        v47,
        Method_ServantAssetLoadManager___c__DisplayClass153_0__loadNoblePhantasmCoroutine_b__1__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)AssetManager__loadAssetStorage(
                                                                               v46,
                                                                               v50,
                                                                               1,
                                                                               0LL);
LABEL_22:
      v51 = v4->fields.__8__1;
      if ( !v51 )
        goto LABEL_97;
      if ( v51->fields.isNext )
      {
        sequence = (UnityEngine_Object_o *)v51->fields.sequence;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(sequence, 0LL, 0LL) )
          goto LABEL_56;
        v56 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v53,
                                                          v54);
        System_Collections_Generic_List_int____ctor(
          v56,
          (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
        effectIdList = v56;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_97;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)DataManager__GetMasterData_object_(
                                                                                 (DataManager_o *)this,
                                                                                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
        if ( !this )
          goto LABEL_97;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)TreasureDvcLvMaster__TryGetEntity(
                                                                                 (TreasureDvcLvMaster_o *)this,
                                                                                 &v104,
                                                                                 v4->fields.treasureDvcId,
                                                                                 v4->fields.treasureDvcLv,
                                                                                 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v104 )
            goto LABEL_97;
          funcId = v104->fields.funcId;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          BattleEffectUtility__AddRelatedFunctionEffectIdList(funcId, &effectIdList, 0LL);
          this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)v104;
          if ( !v104 )
LABEL_97:
            sub_1B64324(this);
          this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)TreasureDvcLvEntity__GetFieldHpDamageSpecialInvincibleEffectId(
                                                                                   v104,
                                                                                   0LL);
          if ( (int)this >= 1 )
          {
            v58 = (int)this;
            this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)sub_1B64170(int___TypeInfo, 1LL);
            if ( !this )
              goto LABEL_97;
            v60 = this;
            if ( !LODWORD(this->fields.__2__current) )
LABEL_98:
              sub_1B6432C(this, v60);
            LODWORD(this->fields.__4__this) = v58;
            if ( !_4__this )
              goto LABEL_97;
            this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)ServantAssetLoadManager__preloadBattleCommonEffectLocal(
                                                                                     _4__this,
                                                                                     (System_Int32_array *)this,
                                                                                     v59);
          }
        }
        v61 = v4->fields.__8__1;
        if ( !v61 )
          goto LABEL_97;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)v61->fields.sequence;
        if ( !this )
          goto LABEL_97;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                                                                 (UnityEngine_GameObject_o *)this,
                                                                                 (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
        if ( this )
        {
          _2__current = (int)this->fields.__2__current;
          v63 = this;
          if ( _2__current >= 1 )
          {
            v64 = 0LL;
            while ( (unsigned int)v64 < _2__current )
            {
              this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)*((_QWORD *)&v63->fields.__4__this
                                                                                     + v64);
              if ( !this )
                goto LABEL_97;
              WellFired_USFGOActorBattleActionEvent__AddHasAllEffectIds(
                (WellFired_USFGOActorBattleActionEvent_o *)this,
                &effectIdList,
                0LL);
              _2__current = (int)v63->fields.__2__current;
              if ( (int)++v64 >= _2__current )
                goto LABEL_47;
            }
            goto LABEL_98;
          }
        }
LABEL_47:
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)effectIdList;
        if ( !effectIdList )
          goto LABEL_97;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)System_Collections_Generic_List_int___ToArray(
                                                                                 effectIdList,
                                                                                 (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !_4__this )
          goto LABEL_97;
        this = (ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *)ServantAssetLoadManager__preloadBattleCommonEffectLocal(
                                                                                 _4__this,
                                                                                 (System_Int32_array *)this,
                                                                                 v65);
        if ( !_4__this->fields.nobleEffectList )
          goto LABEL_97;
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)_4__this->fields.nobleEffectList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_string__AddRange__);
LABEL_52:
        v66 = ServantAssetLoadManager_TypeInfo;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        if ( ServantAssetLoadManager__checkLoad((const MethodInfo *)v66) )
        {
          v4->fields.__2__current = 0LL;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B6406C(p__2__current, 0, v54, v55);
          v68 = 4;
        }
        else
        {
LABEL_56:
          v4->fields.__2__current = 0LL;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B6406C(p__2__current, 0, v54, v55);
          v68 = 5;
        }
      }
      else
      {
        v4->fields.__2__current = 0LL;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(p__2__current, 0, v2, v3);
        v68 = 3;
      }
      *(_DWORD *)&p__2__current[-1].fields.isMine = v68;
      return 1;
    case 3:
      v4->fields.__1__state = -1;
      goto LABEL_22;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_52;
    case 5:
      v69 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !v69 )
        goto LABEL_97;
      v70 = v69->fields.sequence;
      callback = v4->fields.callback;
      seqIdFromMstTDSeqWeight_5__2 = v4->fields._seqIdFromMstTDSeqWeight_5__2;
      groupSeqIdFromMstTDSeqWeight_5__3 = v4->fields._groupSeqIdFromMstTDSeqWeight_5__3;
      v74 = (System_Tuple_int__int__o *)sub_1B64314(System_Tuple_int__int__TypeInfo, method, v2);
      System_Tuple_int__int____ctor(
        v74,
        seqIdFromMstTDSeqWeight_5__2,
        groupSeqIdFromMstTDSeqWeight_5__3,
        (const MethodInfo_377D200 *)Method_System_Tuple_int__int___ctor__);
      if ( !callback )
        goto LABEL_97;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        v70,
        v74,
        *(_QWORD *)&callback->fields.extra_arg);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153__System_Collections_IEnumerator_Reset(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153__System_Collections_IEnumerator_get_Current(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153__System_IDisposable_Dispose(
        ServantAssetLoadManager__loadNoblePhantasmCoroutine_d__153_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantAssetLoadManager_onGameObjectLoadComplete___ctor(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19ABC04;
      goto LABEL_6;
    }
    if ( !object )
    {
      v11 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v11, 0LL);
    }
LABEL_8:
    v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v10;
    goto LABEL_9;
  }
  if ( v8 != 2 )
    goto LABEL_8;
  v9 = (Il2CppObject *)sub_19ABC28;
LABEL_6:
  this->fields.m_target = v9;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19ABBAC;
}


System_IAsyncResult_o *__fastcall ServantAssetLoadManager_onGameObjectLoadComplete__BeginInvoke(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        UnityEngine_GameObject_o *obj,
        System_Tuple_int__int__o *paramsFromMstTDSeqWeight,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v7[2]; // [xsp+8h] [xbp-28h] BYREF

  v7[0] = (__int64)obj;
  v7[1] = (__int64)paramsFromMstTDSeqWeight;
  return (System_IAsyncResult_o *)sub_1B6407C(this, v7, callback, object);
}


void __fastcall ServantAssetLoadManager_onGameObjectLoadComplete__EndInvoke(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall ServantAssetLoadManager_onGameObjectLoadComplete__Invoke(
        ServantAssetLoadManager_onGameObjectLoadComplete_o *this,
        UnityEngine_GameObject_o *obj,
        System_Tuple_int__int__o *paramsFromMstTDSeqWeight,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, UnityEngine_GameObject_o *, System_Tuple_int__int__o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    obj,
    paramsFromMstTDSeqWeight,
    *(_QWORD *)&this->fields.extra_arg);
}