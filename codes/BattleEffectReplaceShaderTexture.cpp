void __fastcall BattleEffectReplaceShaderTexture___ctor(
        BattleEffectReplaceShaderTexture_o *this,
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
  System_Collections_Generic_List_object__o *v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_List_object__o *v26; // x20
  __int64 v27; // x0
  Il2CppObject *v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  struct System_Object_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  Il2CppClass **v76; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass **v82; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  struct System_Object_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  Il2CppClass **v88; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  Il2CppClass **v94; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  struct System_Object_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  Il2CppClass **v100; // x0
  int32_t v101; // w2
  int32_t v102; // w3
  struct System_Object_array *v103; // x8
  _QWORD *v104; // x9
  __int64 v105; // x10
  Il2CppClass **v106; // x0
  int32_t v107; // w2
  int32_t v108; // w3
  struct System_Object_array *v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  Il2CppClass **v112; // x0
  int32_t v113; // w2
  int32_t v114; // w3
  System_Collections_Generic_List_object__o *v115; // x20
  int32_t v116; // w2
  int32_t v117; // w3

  if ( (byte_4A0129F & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Material___ctor__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject___ctor__, v5);
    sub_1B64870(&System_Collections_Generic_List_Material__TypeInfo, v6);
    sub_1B64870(&System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__TypeInfo, v7);
    sub_1B64870(&System_Collections_Generic_List_string__TypeInfo, v8);
    sub_1B64870(&StringLiteral_7200/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/, v9);
    sub_1B64870(&StringLiteral_7203/*"Hidden/Particle/distortion-GrabPass"*/, v10);
    sub_1B64870(&StringLiteral_6342/*"FGO_Battle/Ken/Base"*/, v11);
    sub_1B64870(&StringLiteral_7204/*"Hidden/Particle/distortion-Stencil"*/, v12);
    sub_1B64870(&StringLiteral_7202/*"Hidden/Particle/distortion"*/, v13);
    sub_1B64870(&StringLiteral_6343/*"FGO_Battle/Particle/Base"*/, v14);
    sub_1B64870(&StringLiteral_7199/*"Hidden/Particle/MultiplyAdd1Pass"*/, v15);
    sub_1B64870(&StringLiteral_7193/*"Hidden/Ken/Distortion"*/, v16);
    sub_1B64870(&StringLiteral_7201/*"Hidden/Particle/dissolve"*/, v17);
    sub_1B64870(&StringLiteral_7195/*"Hidden/Ken/MultiplyAdd"*/, v18);
    sub_1B64870(&StringLiteral_7196/*"Hidden/Particle/Base-Stencil"*/, v19);
    sub_1B64870(&StringLiteral_7197/*"Hidden/Particle/MultiplyAdd"*/, v20);
    sub_1B64870(&StringLiteral_7198/*"Hidden/Particle/MultiplyAdd-Stencil"*/, v21);
    sub_1B64870(&StringLiteral_7194/*"Hidden/Ken/GradationMap"*/, v22);
    byte_4A0129F = 1;
  }
  v23 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject___ctor__);
  this->fields.replaceObjects = (struct System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__o *)v23;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.replaceObjects, (int32_t)v23, v24, v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v26 )
    goto LABEL_61;
  v28 = (Il2CppObject *)StringLiteral_6343/*"FGO_Battle/Particle/Base"*/;
  items = v26->fields._items;
  v32 = Method_System_Collections_Generic_List_string__Add__;
  ++v26->fields._version;
  if ( !items )
    goto LABEL_61;
  size = v26->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v28,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    v26->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v28;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v28, v29, v30);
  }
  v28 = (Il2CppObject *)StringLiteral_7197/*"Hidden/Particle/MultiplyAdd"*/;
  v37 = v26->fields._items;
  v38 = Method_System_Collections_Generic_List_string__Add__;
  ++v26->fields._version;
  if ( !v37 )
    goto LABEL_61;
  v39 = v26->fields._size;
  if ( (unsigned int)v39 >= v37->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v28,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &v37->obj.klass + v39;
    v26->fields._size = v39 + 1;
    v40[4] = (Il2CppClass *)v28;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v28, v35, v36);
  }
  v28 = (Il2CppObject *)StringLiteral_7199/*"Hidden/Particle/MultiplyAdd1Pass"*/;
  v43 = v26->fields._items;
  v44 = Method_System_Collections_Generic_List_string__Add__;
  ++v26->fields._version;
  if ( !v43 )
    goto LABEL_61;
  v45 = v26->fields._size;
  if ( (unsigned int)v45 >= v43->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v28,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = &v43->obj.klass + v45;
    v26->fields._size = v45 + 1;
    v46[4] = (Il2CppClass *)v28;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v28, v41, v42);
  }
  v28 = (Il2CppObject *)StringLiteral_7202/*"Hidden/Particle/distortion"*/;
  v49 = v26->fields._items;
  v50 = Method_System_Collections_Generic_List_string__Add__;
  ++v26->fields._version;
  if ( !v49 )
    goto LABEL_61;
  v51 = v26->fields._size;
  if ( (unsigned int)v51 >= v49->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v28,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
  }
  else
  {
    v52 = &v49->obj.klass + v51;
    v26->fields._size = v51 + 1;
    v52[4] = (Il2CppClass *)v28;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v52 + 4), (int32_t)v28, v47, v48);
  }
  v28 = (Il2CppObject *)StringLiteral_7196/*"Hidden/Particle/Base-Stencil"*/;
  v55 = v26->fields._items;
  v56 = Method_System_Collections_Generic_List_string__Add__;
  ++v26->fields._version;
  if ( !v55 )
    goto LABEL_61;
  v57 = v26->fields._size;
  if ( (unsigned int)v57 >= v55->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v28,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v58 = &v55->obj.klass + v57;
    v26->fields._size = v57 + 1;
    v58[4] = (Il2CppClass *)v28;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v58 + 4), (int32_t)v28, v53, v54);
  }
  v28 = (Il2CppObject *)StringLiteral_7198/*"Hidden/Particle/MultiplyAdd-Stencil"*/;
  v61 = v26->fields._items;
  v62 = Method_System_Collections_Generic_List_string__Add__;
  ++v26->fields._version;
  if ( !v61 )
    goto LABEL_61;
  v63 = v26->fields._size;
  if ( (unsigned int)v63 >= v61->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v28,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
  }
  else
  {
    v64 = &v61->obj.klass + v63;
    v26->fields._size = v63 + 1;
    v64[4] = (Il2CppClass *)v28;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v64 + 4), (int32_t)v28, v59, v60);
  }
  v28 = (Il2CppObject *)StringLiteral_7200/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/;
  v67 = v26->fields._items;
  v68 = Method_System_Collections_Generic_List_string__Add__;
  ++v26->fields._version;
  if ( !v67 )
    goto LABEL_61;
  v69 = v26->fields._size;
  if ( (unsigned int)v69 >= v67->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v28,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
  }
  else
  {
    v70 = &v67->obj.klass + v69;
    v26->fields._size = v69 + 1;
    v70[4] = (Il2CppClass *)v28;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v70 + 4), (int32_t)v28, v65, v66);
  }
  v28 = (Il2CppObject *)StringLiteral_7204/*"Hidden/Particle/distortion-Stencil"*/;
  v73 = v26->fields._items;
  v74 = Method_System_Collections_Generic_List_string__Add__;
  ++v26->fields._version;
  if ( !v73 )
    goto LABEL_61;
  v75 = v26->fields._size;
  if ( (unsigned int)v75 >= v73->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v28,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
  }
  else
  {
    v76 = &v73->obj.klass + v75;
    v26->fields._size = v75 + 1;
    v76[4] = (Il2CppClass *)v28;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v76 + 4), (int32_t)v28, v71, v72);
  }
  v28 = (Il2CppObject *)StringLiteral_7203/*"Hidden/Particle/distortion-GrabPass"*/;
  v79 = v26->fields._items;
  v80 = Method_System_Collections_Generic_List_string__Add__;
  ++v26->fields._version;
  if ( !v79 )
    goto LABEL_61;
  v81 = v26->fields._size;
  if ( (unsigned int)v81 >= v79->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v28,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
  }
  else
  {
    v82 = &v79->obj.klass + v81;
    v26->fields._size = v81 + 1;
    v82[4] = (Il2CppClass *)v28;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v82 + 4), (int32_t)v28, v77, v78);
  }
  v28 = (Il2CppObject *)StringLiteral_7201/*"Hidden/Particle/dissolve"*/;
  v85 = v26->fields._items;
  v86 = Method_System_Collections_Generic_List_string__Add__;
  ++v26->fields._version;
  if ( !v85 )
    goto LABEL_61;
  v87 = v26->fields._size;
  if ( (unsigned int)v87 >= v85->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v28,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
  }
  else
  {
    v88 = &v85->obj.klass + v87;
    v26->fields._size = v87 + 1;
    v88[4] = (Il2CppClass *)v28;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v88 + 4), (int32_t)v28, v83, v84);
  }
  v28 = (Il2CppObject *)StringLiteral_6342/*"FGO_Battle/Ken/Base"*/;
  v91 = v26->fields._items;
  v92 = Method_System_Collections_Generic_List_string__Add__;
  ++v26->fields._version;
  if ( !v91 )
    goto LABEL_61;
  v93 = v26->fields._size;
  if ( (unsigned int)v93 >= v91->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v28,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
  }
  else
  {
    v94 = &v91->obj.klass + v93;
    v26->fields._size = v93 + 1;
    v94[4] = (Il2CppClass *)v28;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v94 + 4), (int32_t)v28, v89, v90);
  }
  v28 = (Il2CppObject *)StringLiteral_7195/*"Hidden/Ken/MultiplyAdd"*/;
  v97 = v26->fields._items;
  v98 = Method_System_Collections_Generic_List_string__Add__;
  ++v26->fields._version;
  if ( !v97 )
    goto LABEL_61;
  v99 = v26->fields._size;
  if ( (unsigned int)v99 >= v97->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v28,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
  }
  else
  {
    v100 = &v97->obj.klass + v99;
    v26->fields._size = v99 + 1;
    v100[4] = (Il2CppClass *)v28;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v100 + 4), (int32_t)v28, v95, v96);
  }
  v28 = (Il2CppObject *)StringLiteral_7193/*"Hidden/Ken/Distortion"*/;
  v103 = v26->fields._items;
  v104 = Method_System_Collections_Generic_List_string__Add__;
  ++v26->fields._version;
  if ( !v103 )
    goto LABEL_61;
  v105 = v26->fields._size;
  if ( (unsigned int)v105 >= v103->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v28,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
  }
  else
  {
    v106 = &v103->obj.klass + v105;
    v26->fields._size = v105 + 1;
    v106[4] = (Il2CppClass *)v28;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v106 + 4), (int32_t)v28, v101, v102);
  }
  v28 = (Il2CppObject *)StringLiteral_7194/*"Hidden/Ken/GradationMap"*/;
  v109 = v26->fields._items;
  v110 = Method_System_Collections_Generic_List_string__Add__;
  ++v26->fields._version;
  if ( !v109 )
LABEL_61:
    sub_1B64ACC(v27, v28);
  v111 = v26->fields._size;
  if ( (unsigned int)v111 >= v109->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v26,
      v28,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
  }
  else
  {
    v112 = &v109->obj.klass + v111;
    v26->fields._size = v111 + 1;
    v112[4] = (Il2CppClass *)v28;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v112 + 4), (int32_t)v28, v107, v108);
  }
  this->fields.autoReplaceShaderNames = (struct System_Collections_Generic_List_string__o *)v26;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.autoReplaceShaderNames, (int32_t)v26, v113, v114);
  v115 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v115,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_Material___ctor__);
  this->fields.replaceMaterials = (struct System_Collections_Generic_List_Material__o *)v115;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.replaceMaterials, (int32_t)v115, v116, v117);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture__Execute(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  BattleEffectReplaceShaderTexture_o *v2; // x19
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
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  struct System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__o *replaceObjects; // x8
  System_Collections_Generic_Dictionary_object__object__o *v38; // x20
  UnityEngine_Object_o *v39; // x20
  _BOOL8 v40; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x4
  Il2CppObject *current; // x27
  System_Collections_Generic_List_object__o *TargetActors; // x0
  __int64 v45; // x1
  _BOOL8 v46; // x0
  __int64 v47; // x1
  Il2CppObject *v48; // x21
  bool isChocoServant; // w23
  _BOOL8 isShadowServant; // x0
  const MethodInfo *v51; // x3
  bool v52; // w24
  UnityEngine_Object_o *ActorTexture; // x25
  Il2CppObject *Instance; // x0
  __int64 v55; // x1
  UnityEngine_GameObject_o *ShadowEffect; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x26
  UnityEngine_Transform_o *v59; // x0
  __int64 v60; // x1
  UnityEngine_Transform_o *v61; // x0
  __int64 v62; // x1
  __int64 v63; // x0
  __int64 v64; // x1
  UnityEngine_Transform_o *v65; // x26
  __int64 v66; // x0
  __int64 v67; // x1
  UnityEngine_Transform_o *v68; // x21
  UnityEngine_Object_o *klass; // x21
  __int64 v70; // x1
  UnityEngine_Object_o *v71; // x0
  System_Collections_Generic_List_object__o *v72; // x0
  __int64 v73; // x1
  System_Collections_Generic_List_T__o *monitor; // x0
  Il2CppObject *v75; // x21
  const MethodInfo *v76; // x5
  UnityEngine_Renderer_array *TargetRenderers; // x0
  __int64 v78; // x1
  UnityEngine_Renderer_array *v79; // x28
  __int64 v80; // x8
  unsigned __int64 v81; // x9
  System_Collections_Generic_List_object__o *v82; // x0
  Il2CppObject *v83; // x21
  const MethodInfo *v84; // x4
  System_Collections_Generic_List_object__o *TargetMaterials; // x0
  __int64 v86; // x1
  Il2CppObject *v87; // x29
  _BOOL8 v88; // x0
  __int64 v89; // x1
  System_Collections_Generic_List_object__o *autoReplaceShaderNames; // x21
  UnityEngine_Object_o *shader; // x0
  __int64 v92; // x1
  Il2CppObject *name; // x0
  UnityEngine_Object_o *v94; // x0
  __int64 v95; // x1
  System_String_o *v96; // x0
  BattleEffectReplaceShaderTexture_o *v97; // x0
  const MethodInfo *v98; // x3
  UnityEngine_Object_o *ReplaceChocoShader; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v101; // x1
  Il2CppObject *Component_object; // x26
  _BOOL8 v103; // x0
  __int64 v104; // x1
  UnityEngine_Shader_o *v105; // x0
  _BOOL8 v106; // x0
  const MethodInfo *v107; // x3
  Il2CppObject *object; // x0
  const MethodInfo *v109; // x4
  BattleEffectReplaceShaderTexture_o *v110; // x0
  const MethodInfo *v111; // x5
  System_Collections_Generic_List_object__o *v112; // x21
  UnityEngine_Object_o *v113; // x0
  __int64 v114; // x1
  Il2CppObject *v115; // x0
  UnityEngine_Object_o *v116; // x0
  __int64 v117; // x1
  System_String_o *v118; // x0
  BattleEffectReplaceShaderTexture_o *v119; // x0
  const MethodInfo *v120; // x3
  UnityEngine_Object_o *v121; // x21
  _BOOL8 v122; // x0
  const MethodInfo *v123; // x3
  BattleEffectReplaceShaderTexture_o *v124; // x0
  const MethodInfo *v125; // x5
  System_Collections_Generic_List_object__o *replaceMaterials; // x0
  __int64 v127; // x1
  int32_t v128; // w2
  int32_t v129; // w3
  System_Collections_Generic_List_object__o *v130; // x0
  struct System_Object_array *items; // x8
  _QWORD *v132; // x9
  __int64 size; // x10
  Il2CppClass **v134; // x8
  System_String_o *targetShaderName; // [xsp+8h] [xbp-138h]
  Il2CppObject *v136; // [xsp+10h] [xbp-130h]
  unsigned __int64 v137; // [xsp+18h] [xbp-128h]
  UnityEngine_Component_o *v138; // [xsp+20h] [xbp-120h]
  System_Collections_Generic_List_Enumerator_object__o v139; // [xsp+28h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v140; // [xsp+40h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v141; // [xsp+60h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v142; // [xsp+80h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v143; // [xsp+A0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v144; // [xsp+C0h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_string__Shader__o *shaderCaches; // [xsp+D8h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_4A01293 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__Shader___ctor__, method);
    sub_1B64870(&System_Collections_Generic_Dictionary_string__Shader__TypeInfo, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__Dispose__,
      v6);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_Material__Dispose__, v7);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__Dispose__,
      v8);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__MoveNext__,
      v9);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__, v10);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__MoveNext__,
      v11);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_Material__get_Current__, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v15);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__get_Current__,
      v16);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__get_Current__, v17);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__get_Current__,
      v18);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_BattleServantDeadComponent___, v19);
    sub_1B64870(&Method_System_Collections_Generic_List_Material__Add__, v20);
    sub_1B64870(&Method_System_Collections_Generic_List_string__Contains__, v21);
    sub_1B64870(&Method_System_Collections_Generic_List_Material__Contains__, v22);
    sub_1B64870(&Method_System_Collections_Generic_List_Renderer__Contains__, v23);
    sub_1B64870(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_RendererType__GetEnumerator__,
      v24);
    sub_1B64870(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__GetEnumerator__,
      v25);
    sub_1B64870(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v26);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__, v27);
    sub_1B64870(&Method_System_Collections_Generic_List_Material__GetEnumerator__, v28);
    sub_1B64870(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__get_Count__,
      v29);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v30);
    sub_1B64870(&Method_UnityEngine_Resources_Load_Texture2D___, v31);
    sub_1B64870(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v32);
    sub_1B64870(&StringLiteral_16092/*"_Choco"*/, v33);
    sub_1B64870(&StringLiteral_16270/*"_Shadow"*/, v34);
    sub_1B64870(&StringLiteral_12677/*"Shaders/ChocoMap"*/, v35);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B64870(&StringLiteral_4931/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/, v36);
    byte_4A01293 = 1;
  }
  memset(&v144, 0, sizeof(v144));
  memset(&v143, 0, sizeof(v143));
  memset(&v142, 0, sizeof(v142));
  memset(&v141, 0, sizeof(v141));
  memset(&v140, 0, sizeof(v140));
  replaceObjects = v2->fields.replaceObjects;
  if ( !replaceObjects )
    goto LABEL_146;
  if ( replaceObjects->fields._size < 1 )
    return;
  v38 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64ABC(System_Collections_Generic_Dictionary_string__Shader__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v38,
    (const MethodInfo_317AD24 *)Method_System_Collections_Generic_Dictionary_string__Shader___ctor__);
  shaderCaches = (System_Collections_Generic_Dictionary_string__Shader__o *)v38;
  this = (BattleEffectReplaceShaderTexture_o *)v2->fields.replaceObjects;
  if ( !this )
LABEL_146:
    sub_1B64ACC(this, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v139,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__GetEnumerator__);
  v39 = 0LL;
  v144 = v139;
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v144,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__MoveNext__);
    if ( !v40 )
      break;
    current = v144.fields._current;
    if ( !v144.fields._current )
      sub_1B64ACC(v40, v41);
    TargetActors = (System_Collections_Generic_List_object__o *)BattleEffectReplaceShaderTexture__GetTargetActors(
                                                                  v2,
                                                                  (System_Int32_array *)v144.fields._current[1].monitor,
                                                                  (bool)v144.fields._current[2].klass,
                                                                  (bool)v144.fields._current[1].klass,
                                                                  v42);
    if ( !TargetActors )
      sub_1B64ACC(0LL, v45);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v139,
      TargetActors,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
    v143 = v139;
    while ( 1 )
    {
      v46 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v143,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
      if ( !v46 )
        break;
      v48 = v143.fields._current;
      if ( !v143.fields._current )
        sub_1B64ACC(v46, v47);
      isChocoServant = BattleActorControl__isChocoServant((BattleActorControl_o *)v143.fields._current, 0LL);
      isShadowServant = BattleActorControl__isShadowServant((BattleActorControl_o *)v48, 0LL);
      v52 = isShadowServant;
      v138 = (UnityEngine_Component_o *)v48;
      if ( LOBYTE(current[11].monitor) )
        ActorTexture = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__getActorTexture(
                                                 (BattleEffectReplaceShaderTexture_o *)isShadowServant,
                                                 (BattleActorControl_o *)v48,
                                                 (System_String_o *)current[2].monitor,
                                                 v51);
      else
        ActorTexture = 0LL;
      if ( (v52 & (__int64)current[3].klass & 1) != 0 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !Instance )
          sub_1B64ACC(0LL, v55);
        ShadowEffect = ServantAssetLoadManager__createShadowEffect((ServantAssetLoadManager_o *)Instance, 0, 0LL);
        transform = UnityEngine_Component__get_transform(v138, 0LL);
        NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(
                                                 transform,
                                                 (System_String_o *)current[3].monitor,
                                                 0,
                                                 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v59 = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(NodeFromName, 0LL, 0LL);
        if ( ((unsigned __int8)v59 & 1) != 0 )
        {
          v59 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
          NodeFromName = (UnityEngine_Object_o *)v59;
        }
        if ( !ShadowEffect )
          sub_1B64ACC(v59, v60);
        v61 = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        if ( !v61 )
          sub_1B64ACC(0LL, v62);
        UnityEngine_Transform__SetParent(v61, (UnityEngine_Transform_o *)NodeFromName, 0LL);
        v63 = (__int64)UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        v65 = (UnityEngine_Transform_o *)v63;
        if ( !byte_49F9201 )
        {
          v63 = sub_1B64870(&UnityEngine_Vector3_TypeInfo, v64);
          byte_49F9201 = 1;
        }
        if ( !v65 )
          sub_1B64ACC(v63, v64);
        UnityEngine_Transform__set_localPosition(v65, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        v66 = (__int64)UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        v68 = (UnityEngine_Transform_o *)v66;
        if ( !byte_49F9206 )
        {
          v66 = sub_1B64870(&UnityEngine_Vector3_TypeInfo, v67);
          byte_49F9206 = 1;
        }
        if ( !v68 )
          sub_1B64ACC(v66, v67);
        UnityEngine_Transform__set_localScale(v68, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      }
      klass = (UnityEngine_Object_o *)current[7].klass;
      targetShaderName = (System_String_o *)current[6].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
      {
        v71 = (UnityEngine_Object_o *)current[7].klass;
        if ( !v71 )
          sub_1B64ACC(0LL, v70);
        targetShaderName = UnityEngine_Object__get_name(v71, 0LL);
      }
      v72 = (System_Collections_Generic_List_object__o *)current[4].klass;
      if ( !v72 )
        sub_1B64ACC(0LL, v70);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v139,
        v72,
        (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v142 = v139;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v142,
                (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        monitor = (System_Collections_Generic_List_T__o *)current[5].monitor;
        if ( !monitor )
          sub_1B64ACC(0LL, v73);
        v75 = v142.fields._current;
        System_Collections_Generic_List_Int32Enum___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v139,
          monitor,
          (const MethodInfo_34955F8 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_RendererType__GetEnumerator__);
        v141 = v139;
        while ( System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v141,
                  (const MethodInfo_3228E7C *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__MoveNext__) )
        {
          TargetRenderers = BattleEffectReplaceShaderTexture__getTargetRenderers(
                              v2,
                              (UnityEngine_GameObject_o *)v75,
                              (int32_t)v141.fields._current,
                              (bool)current[5].klass,
                              BYTE1(current[5].klass),
                              v76);
          v79 = TargetRenderers;
          if ( TargetRenderers )
          {
            v80 = *(_QWORD *)&TargetRenderers->max_length;
            if ( (int)v80 >= 1 )
            {
              v81 = 0LL;
              v136 = v75;
              do
              {
                if ( v81 >= (unsigned int)v80 )
                  sub_1B64AD4(TargetRenderers, v78);
                v82 = (System_Collections_Generic_List_object__o *)current[4].monitor;
                if ( !v82 )
                  sub_1B64ACC(0LL, v78);
                v137 = v81;
                v83 = (Il2CppObject *)v79->m_Items[v81];
                TargetRenderers = (UnityEngine_Renderer_array *)System_Collections_Generic_List_object___Contains(
                                                                  v82,
                                                                  v83,
                                                                  (const MethodInfo_34AFD40 *)Method_System_Collections_Generic_List_Renderer__Contains__);
                if ( ((unsigned __int8)TargetRenderers & 1) == 0 )
                {
                  TargetMaterials = (System_Collections_Generic_List_object__o *)BattleEffectReplaceShaderTexture__getTargetMaterials(
                                                                                   (BattleEffectReplaceShaderTexture_o *)TargetRenderers,
                                                                                   (UnityEngine_Renderer_o *)v83,
                                                                                   targetShaderName,
                                                                                   (bool)current[6].klass,
                                                                                   v84);
                  if ( !TargetMaterials )
                    sub_1B64ACC(0LL, v86);
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v139,
                    TargetMaterials,
                    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_Material__GetEnumerator__);
                  v140 = v139;
                  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v140,
                            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__) )
                  {
                    v87 = v140.fields._current;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    v88 = UnityEngine_Object__op_Inequality(ActorTexture, 0LL, 0LL);
                    if ( v88 )
                    {
                      if ( !v87 )
                        sub_1B64ACC(v88, v89);
                      UnityEngine_Material__set_mainTexture(
                        (UnityEngine_Material_o *)v87,
                        (UnityEngine_Texture_o *)ActorTexture,
                        0LL);
                    }
                    if ( isChocoServant )
                    {
                      if ( !BYTE1(current[11].monitor) )
                        goto LABEL_64;
                      if ( !v87 )
                        sub_1B64ACC(v88, v89);
                      autoReplaceShaderNames = (System_Collections_Generic_List_object__o *)v2->fields.autoReplaceShaderNames;
                      shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                         (UnityEngine_Material_o *)v87,
                                                         0LL);
                      if ( !shader )
                        sub_1B64ACC(0LL, v92);
                      name = (Il2CppObject *)UnityEngine_Object__get_name(shader, 0LL);
                      if ( !autoReplaceShaderNames )
                        sub_1B64ACC(name, name);
                      if ( System_Collections_Generic_List_object___Contains(
                             autoReplaceShaderNames,
                             name,
                             (const MethodInfo_34AFD40 *)Method_System_Collections_Generic_List_string__Contains__) )
                      {
                        v94 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                        (UnityEngine_Material_o *)v87,
                                                        0LL);
                        if ( !v94 )
                          sub_1B64ACC(0LL, v95);
                        v96 = UnityEngine_Object__get_name(v94, 0LL);
                        v97 = (BattleEffectReplaceShaderTexture_o *)System_String__Concat_61383576(
                                                                      v96,
                                                                      (System_String_o *)StringLiteral_16092/*"_Choco"*/,
                                                                      0LL);
                        ReplaceChocoShader = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                                       v97,
                                                                       (System_String_o *)v97,
                                                                       &shaderCaches,
                                                                       v98);
                      }
                      else
                      {
LABEL_64:
                        ReplaceChocoShader = 0LL;
                      }
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Equality(ReplaceChocoShader, 0LL, 0LL) )
                        ReplaceChocoShader = (UnityEngine_Object_o *)current[7].monitor;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Equality(ReplaceChocoShader, 0LL, 0LL) && BYTE2(current[11].monitor) )
                      {
                        gameObject = UnityEngine_Component__get_gameObject(v138, 0LL);
                        if ( !gameObject )
                          sub_1B64ACC(0LL, v101);
                        Component_object = UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_BattleServantDeadComponent___);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        v103 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
                        if ( v103 )
                        {
                          if ( !v87 )
                            sub_1B64ACC(v103, v104);
                          v105 = UnityEngine_Material__get_shader((UnityEngine_Material_o *)v87, 0LL);
                          if ( !Component_object )
                            sub_1B64ACC(v105, v105);
                          ReplaceChocoShader = (UnityEngine_Object_o *)BattleServantDeadComponent__getReplaceChocoShader(
                                                                         (BattleServantDeadComponent_o *)Component_object,
                                                                         v105,
                                                                         0LL,
                                                                         0LL);
                        }
                      }
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      v106 = UnityEngine_Object__op_Equality(ReplaceChocoShader, 0LL, 0LL);
                      if ( v106 )
                        ReplaceChocoShader = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                                       (BattleEffectReplaceShaderTexture_o *)v106,
                                                                       (System_String_o *)StringLiteral_4931/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/,
                                                                       &shaderCaches,
                                                                       v107);
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      object = (Il2CppObject *)UnityEngine_Object__op_Equality(v39, 0LL, 0LL);
                      if ( ((unsigned __int8)object & 1) != 0 )
                      {
                        object = UnityEngine_Resources__Load_object_(
                                   (System_String_o *)StringLiteral_12677/*"Shaders/ChocoMap"*/,
                                   (const MethodInfo_2ECE384 *)Method_UnityEngine_Resources_Load_Texture2D___);
                        v39 = (UnityEngine_Object_o *)object;
                      }
                      BattleEffectReplaceShaderTexture__setupChocoShader(
                        (BattleEffectReplaceShaderTexture_o *)object,
                        (UnityEngine_Material_o *)v87,
                        (UnityEngine_Shader_o *)ReplaceChocoShader,
                        (UnityEngine_Texture2D_o *)v39,
                        v109);
                      BattleEffectReplaceShaderTexture__updateShaderValues(
                        v110,
                        (UnityEngine_Material_o *)v87,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *)current[8].klass,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *)current[8].monitor,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *)current[9].klass,
                        v111);
                    }
                    if ( v52 )
                    {
                      if ( !v87 )
                        sub_1B64ACC(v88, v89);
                      v112 = (System_Collections_Generic_List_object__o *)v2->fields.autoReplaceShaderNames;
                      v113 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                       (UnityEngine_Material_o *)v87,
                                                       0LL);
                      if ( !v113 )
                        sub_1B64ACC(0LL, v114);
                      v115 = (Il2CppObject *)UnityEngine_Object__get_name(v113, 0LL);
                      if ( !v112 )
                        sub_1B64ACC(v115, v115);
                      if ( System_Collections_Generic_List_object___Contains(
                             v112,
                             v115,
                             (const MethodInfo_34AFD40 *)Method_System_Collections_Generic_List_string__Contains__) )
                      {
                        v116 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                         (UnityEngine_Material_o *)v87,
                                                         0LL);
                        if ( !v116 )
                          sub_1B64ACC(0LL, v117);
                        v118 = UnityEngine_Object__get_name(v116, 0LL);
                        v119 = (BattleEffectReplaceShaderTexture_o *)System_String__Concat_61383576(
                                                                       v118,
                                                                       (System_String_o *)StringLiteral_16270/*"_Shadow"*/,
                                                                       0LL);
                        v121 = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                         v119,
                                                         (System_String_o *)v119,
                                                         &shaderCaches,
                                                         v120);
                      }
                      else
                      {
                        v121 = 0LL;
                      }
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      v122 = UnityEngine_Object__op_Equality(v121, 0LL, 0LL);
                      if ( v122 )
                        v121 = (UnityEngine_Object_o *)current[9].monitor;
                      BattleEffectReplaceShaderTexture__setupShadowShader(
                        (BattleEffectReplaceShaderTexture_o *)v122,
                        (UnityEngine_Material_o *)v87,
                        (UnityEngine_Shader_o *)v121,
                        v123);
                      BattleEffectReplaceShaderTexture__updateShaderValues(
                        v124,
                        (UnityEngine_Material_o *)v87,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *)current[10].klass,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *)current[10].monitor,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *)current[11].klass,
                        v125);
                    }
                    replaceMaterials = (System_Collections_Generic_List_object__o *)v2->fields.replaceMaterials;
                    if ( !replaceMaterials )
                      sub_1B64ACC(0LL, v89);
                    if ( !System_Collections_Generic_List_object___Contains(
                            replaceMaterials,
                            v87,
                            (const MethodInfo_34AFD40 *)Method_System_Collections_Generic_List_Material__Contains__) )
                    {
                      v130 = (System_Collections_Generic_List_object__o *)v2->fields.replaceMaterials;
                      if ( !v130 )
                        sub_1B64ACC(0LL, v127);
                      items = v130->fields._items;
                      v132 = Method_System_Collections_Generic_List_Material__Add__;
                      ++v130->fields._version;
                      if ( !items )
                        sub_1B64ACC(v130, v127);
                      size = v130->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v130,
                          v87,
                          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v134 = &items->obj.klass + size;
                        v130->fields._size = size + 1;
                        v134[4] = (Il2CppClass *)v87;
                        sub_1B64814((ServantStatusBattleListViewItem_o *)(v134 + 4), (int32_t)v87, v128, v129);
                      }
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v140,
                    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_Material__Dispose__);
                }
                v75 = v136;
                LODWORD(v80) = v79->max_length;
                v81 = v137 + 1;
              }
              while ( (__int64)(v137 + 1) < (int)v80 );
            }
          }
        }
        System_Collections_Generic_List_Enumerator_Int32Enum___Dispose(
          (System_Collections_Generic_List_Enumerator_T__o *)&v141,
          (const MethodInfo_3228E78 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__Dispose__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v142,
        (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v143,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v144,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
BattleActorControl_o *__fastcall BattleEffectReplaceShaderTexture__GetModelBattleActor(
        BattleEffectReplaceShaderTexture_o *this,
        int32_t servantId,
        bool isCheckUniqueId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Object_array *ObjectsOfType_object; // x0
  __int64 v9; // x1
  int max_length; // w8
  System_Object_array *v11; // x22
  unsigned int v12; // w24
  Il2CppClass **v13; // x8
  BattleActorControl_o *v14; // x23

  if ( (byte_4A01295 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, *(_QWORD *)&servantId);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v7);
    byte_4A01295 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_2EBDE20 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
  if ( !ObjectsOfType_object )
    goto LABEL_17;
  max_length = ObjectsOfType_object->max_length;
  v11 = ObjectsOfType_object;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1B64AD4(ObjectsOfType_object, v9);
      v13 = &v11->obj.klass + (int)v12;
      v14 = (BattleActorControl_o *)v13[4];
      if ( !v14 )
        break;
      ObjectsOfType_object = (System_Object_array *)BattleActorControl__getServantId(
                                                      (BattleActorControl_o *)v13[4],
                                                      0LL);
      if ( (_DWORD)ObjectsOfType_object == servantId
        && (!isCheckUniqueId || v14->fields.uniqueID == this->fields.targetId) )
      {
        return v14;
      }
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        return 0LL;
    }
LABEL_17:
    sub_1B64ACC(ObjectsOfType_object, v9);
  }
  return 0LL;
}


System_Collections_Generic_List_BattleActorControl__o *__fastcall BattleEffectReplaceShaderTexture__GetTargetActors(
        BattleEffectReplaceShaderTexture_o *this,
        System_Int32_array *servantIds,
        bool isCheckUniqueId,
        bool useUniqueId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x19
  System_Object_array *Instance; // x0
  Il2CppObject *v18; // x1
  const MethodInfo *v19; // x3
  UnityEngine_Object_o *v20; // x20
  Il2CppObject *Component_object; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  ServantStatusBattleListViewItem_o *v28; // x0
  __int64 v29; // x8
  Il2CppObject **i; // x9
  __int64 v31; // x8
  unsigned __int64 v32; // x25
  bool v33; // w22
  UnityEngine_Object_o *ModelBattleActor; // x23
  int32_t v35; // w2
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  __int64 v40; // x8
  System_Collections_Generic_List_object__o *v41; // x0
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0

  if ( (byte_4A01294 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, servantIds);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActorControl__Add__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActorControl__Contains__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_BattleActorControl___ctor__, v11);
    sub_1B64870(&System_Collections_Generic_List_BattleActorControl__TypeInfo, v12);
    sub_1B64870(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___, v13);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v14);
    sub_1B64870(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v15);
    byte_4A01294 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_BattleActorControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_BattleActorControl___ctor__);
  if ( this->fields.isNPEffect )
  {
    Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    v20 = (UnityEngine_Object_o *)Instance->m_Items[8];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (System_Object_array *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v20 )
        goto LABEL_50;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v20,
                           (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (System_Object_array *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0LL,
                                          0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v16 )
        {
          items = v16->fields._items;
          v25 = Method_System_Collections_Generic_List_BattleActorControl__Add__;
          ++v16->fields._version;
          if ( items )
          {
            size = v16->fields._size;
            if ( (unsigned int)size < items->max_length )
            {
              v27 = &items->obj.klass + size;
              v16->fields._size = size + 1;
              v27[4] = (Il2CppClass *)Component_object;
              v28 = (ServantStatusBattleListViewItem_o *)(v27 + 4);
              LODWORD(v18) = (_DWORD)Component_object;
LABEL_46:
              sub_1B64814(v28, (int32_t)v18, v22, v23);
              return (System_Collections_Generic_List_BattleActorControl__o *)v16;
            }
            v40 = v25[4];
            v41 = v16;
            v18 = Component_object;
            goto LABEL_48;
          }
        }
        goto LABEL_50;
      }
    }
  }
  else if ( useUniqueId )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_2EBDE20 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    if ( !Instance )
      goto LABEL_50;
    if ( (int)*(_QWORD *)&Instance->max_length >= 1 )
    {
      v29 = (unsigned int)*(_QWORD *)&Instance->max_length;
      for ( i = Instance->m_Items; ; ++i )
      {
        v18 = *i;
        if ( !*i )
          goto LABEL_50;
        if ( LODWORD(v18[29].klass) == this->fields.targetId )
          break;
        if ( !--v29 )
          return (System_Collections_Generic_List_BattleActorControl__o *)v16;
      }
      if ( v16 )
      {
        v42 = v16->fields._items;
        v43 = Method_System_Collections_Generic_List_BattleActorControl__Add__;
        ++v16->fields._version;
        if ( v42 )
        {
          v44 = v16->fields._size;
          if ( (unsigned int)v44 < v42->max_length )
          {
            v45 = &v42->obj.klass + v44;
            v16->fields._size = v44 + 1;
            v45[4] = (Il2CppClass *)v18;
            v28 = (ServantStatusBattleListViewItem_o *)(v45 + 4);
            goto LABEL_46;
          }
          v40 = v43[4];
          v41 = v16;
LABEL_48:
          System_Collections_Generic_List_object___AddWithResize(
            v41,
            v18,
            *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v40 + 192) + 112LL));
          return (System_Collections_Generic_List_BattleActorControl__o *)v16;
        }
      }
LABEL_50:
      sub_1B64ACC(Instance, v18);
    }
  }
  else if ( servantIds )
  {
    v31 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v31 >= 1 )
    {
      v32 = 0LL;
      v33 = isCheckUniqueId;
      do
      {
        if ( v32 >= (unsigned int)v31 )
          sub_1B64AD4(Instance, v18);
        ModelBattleActor = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__GetModelBattleActor(
                                                     this,
                                                     servantIds->m_Items[v32 + 1],
                                                     v33,
                                                     v19);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (System_Object_array *)UnityEngine_Object__op_Inequality(ModelBattleActor, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_50;
          Instance = (System_Object_array *)System_Collections_Generic_List_object___Contains(
                                              v16,
                                              (Il2CppObject *)ModelBattleActor,
                                              (const MethodInfo_34AFD40 *)Method_System_Collections_Generic_List_BattleActorControl__Contains__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            v36 = v16->fields._items;
            v37 = Method_System_Collections_Generic_List_BattleActorControl__Add__;
            ++v16->fields._version;
            if ( !v36 )
              goto LABEL_50;
            v38 = v16->fields._size;
            if ( (unsigned int)v38 >= v36->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v16,
                (Il2CppObject *)ModelBattleActor,
                *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
            }
            else
            {
              v39 = &v36->obj.klass + v38;
              v16->fields._size = v38 + 1;
              v39[4] = (Il2CppClass *)ModelBattleActor;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)ModelBattleActor, v35, (int32_t)v19);
            }
          }
        }
        LODWORD(v31) = servantIds->max_length;
        ++v32;
      }
      while ( (__int64)v32 < (int)v31 );
    }
  }
  return (System_Collections_Generic_List_BattleActorControl__o *)v16;
}


void __fastcall BattleEffectReplaceShaderTexture__OnDestroy(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  BattleEffectReplaceShaderTexture_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_Material__o *replaceMaterials; // x8
  int32_t size; // w2
  int v11; // w9
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4A01292 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_Material__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_Material__get_Current__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_Material__Clear__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_Material__GetEnumerator__, v6);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B64870(&UnityEngine_Object_TypeInfo, v7);
    byte_4A01292 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( v2->fields.destroyReplaceShaderMaterials )
  {
    this = (BattleEffectReplaceShaderTexture_o *)v2->fields.replaceMaterials;
    if ( !this )
      goto LABEL_18;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_Material__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__) )
    {
      current = v12.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__DestroyImmediate_69136104((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_Material__Dispose__);
  }
  replaceMaterials = v2->fields.replaceMaterials;
  if ( !replaceMaterials )
LABEL_18:
    sub_1B64ACC(this, method);
  size = replaceMaterials->fields._size;
  v11 = replaceMaterials->fields._version + 1;
  replaceMaterials->fields._size = 0;
  replaceMaterials->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)replaceMaterials->fields._items, 0, size, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture__SetTargetId(
        BattleEffectReplaceShaderTexture_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  this->fields.targetId = targetId;
}


void __fastcall BattleEffectReplaceShaderTexture__Start(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isNPEffect )
    BattleEffectReplaceShaderTexture__Execute(this, method);
}


UnityEngine_Texture_o *__fastcall BattleEffectReplaceShaderTexture__getActorTexture(
        BattleEffectReplaceShaderTexture_o *this,
        BattleActorControl_o *actor,
        System_String_o *searchMeshWord,
        const MethodInfo *method)
{
  int m_CancellationTokenSource; // w8
  BattleEffectReplaceShaderTexture_o *v7; // x20
  unsigned int v8; // w22
  BattleEffectReplaceShaderTexture_c **v9; // x8
  UnityEngine_Object_o *v10; // x21

  if ( (byte_4A01297 & 1) == 0 )
  {
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B64870(
                                                   &Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____75736544,
                                                   actor);
    byte_4A01297 = 1;
  }
  if ( !actor )
    goto LABEL_16;
  this = (BattleEffectReplaceShaderTexture_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                 (UnityEngine_Component_o *)actor,
                                                 1,
                                                 (const MethodInfo_2E32C58 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____75736544);
  if ( !this )
    goto LABEL_16;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v7 = this;
  if ( m_CancellationTokenSource < 1 )
    return 0LL;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= m_CancellationTokenSource )
      sub_1B64AD4(this, actor);
    v9 = &v7->klass + (int)v8;
    v10 = (UnityEngine_Object_o *)v9[4];
    if ( !v10 )
      goto LABEL_16;
    this = (BattleEffectReplaceShaderTexture_o *)UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v9[4], 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (BattleEffectReplaceShaderTexture_o *)UnityEngine_Object__get_name(v10, 0LL);
      if ( !this )
        goto LABEL_16;
      this = (BattleEffectReplaceShaderTexture_o *)System_String__IndexOf_61415144(
                                                     (System_String_o *)this,
                                                     searchMeshWord,
                                                     0LL);
      if ( ((unsigned int)this & 0x80000000) == 0 )
        break;
    }
    m_CancellationTokenSource = (int)v7->fields.m_CancellationTokenSource;
    if ( (int)++v8 >= m_CancellationTokenSource )
      return 0LL;
  }
  this = (BattleEffectReplaceShaderTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v10, 0LL);
  if ( !this )
LABEL_16:
    sub_1B64ACC(this, actor);
  return UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)this, 0LL);
}


UnityEngine_Renderer_o *__fastcall BattleEffectReplaceShaderTexture__getRenderer(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t rendererType,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 *v9; // x8
  UnityEngine_Renderer_o *result; // x0

  if ( (byte_4A01299 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, gameObject);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer___, v6);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_Renderer___, v7);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B64870(
                                                   &Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___,
                                                   v8);
    byte_4A01299 = 1;
  }
  switch ( rendererType )
  {
    case 0:
      if ( !gameObject )
        goto LABEL_14;
      v9 = &Method_UnityEngine_GameObject_GetComponent_Renderer___;
      goto LABEL_13;
    case 1:
      if ( !gameObject )
        goto LABEL_14;
      v9 = &Method_UnityEngine_GameObject_GetComponent_MeshRenderer___;
      goto LABEL_13;
    case 2:
      if ( !gameObject )
        goto LABEL_14;
      v9 = &Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___;
      goto LABEL_13;
    case 3:
      if ( !gameObject )
LABEL_14:
        sub_1B64ACC(this, gameObject);
      v9 = &Method_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer___;
LABEL_13:
      result = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_object_(
                                           gameObject,
                                           (const MethodInfo_2E8A1B4 *)*v9);
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}


UnityEngine_Renderer_array *__fastcall BattleEffectReplaceShaderTexture__getRenderersInChildren(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t rendererType,
        bool includeInactive,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 *v11; // x8
  UnityEngine_Renderer_array *result; // x0

  if ( (byte_4A0129A & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer____75782072, gameObject);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____75782104, v8);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____75782112, v9);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B64870(
                                                   &Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____75782128,
                                                   v10);
    byte_4A0129A = 1;
  }
  switch ( rendererType )
  {
    case 0:
      if ( !gameObject )
        goto LABEL_14;
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____75782112;
      goto LABEL_13;
    case 1:
      if ( !gameObject )
        goto LABEL_14;
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer____75782072;
      goto LABEL_13;
    case 2:
      if ( !gameObject )
        goto LABEL_14;
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____75782128;
      goto LABEL_13;
    case 3:
      if ( !gameObject )
LABEL_14:
        sub_1B64ACC(this, gameObject);
      v11 = &Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____75782104;
LABEL_13:
      result = (UnityEngine_Renderer_array *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                               gameObject,
                                               includeInactive,
                                               (const MethodInfo_2E8AE54 *)*v11);
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}


System_Collections_Generic_List_Material__o *__fastcall BattleEffectReplaceShaderTexture__getTargetMaterials(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_Renderer_o *renderer,
        System_String_o *targetShaderName,
        bool targetShaderAll,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x21
  UnityEngine_Object_o *materials; // x0
  __int64 v14; // x1
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v16; // x22
  unsigned __int64 i; // x25
  UnityEngine_Object_o *v18; // x23
  UnityEngine_Object_o *shader; // x24
  System_String_o *name; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4A0129B & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Material__Add__, renderer);
    sub_1B64870(&Method_System_Collections_Generic_List_Material__Contains__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_Material___ctor__, v9);
    sub_1B64870(&System_Collections_Generic_List_Material__TypeInfo, v10);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v11);
    byte_4A0129B = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_Material___ctor__);
  if ( !renderer || (materials = (UnityEngine_Object_o *)UnityEngine_Renderer__get_materials(renderer, 0LL)) == 0LL )
LABEL_27:
    sub_1B64ACC(materials, v14);
  klass = materials[1].klass;
  v16 = materials;
  if ( (int)klass >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        sub_1B64AD4(materials, v14);
      v18 = (UnityEngine_Object_o *)*((_QWORD *)&v16[1].monitor + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      materials = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
      if ( ((unsigned __int8)materials & 1) != 0 )
        goto LABEL_31;
      if ( !v18 )
        goto LABEL_27;
      shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v18, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      materials = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(shader, 0LL, 0LL);
      if ( ((unsigned __int8)materials & 1) != 0 )
      {
LABEL_31:
        if ( targetShaderAll )
          goto LABEL_19;
        if ( !v18 )
          goto LABEL_27;
        materials = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v18, 0LL);
        if ( !materials )
          goto LABEL_27;
        name = UnityEngine_Object__get_name(materials, 0LL);
        materials = (UnityEngine_Object_o *)System_String__op_Equality(name, targetShaderName, 0LL);
        if ( ((unsigned __int8)materials & 1) != 0 )
        {
LABEL_19:
          if ( !v12 )
            goto LABEL_27;
          materials = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Contains(
                                                v12,
                                                (Il2CppObject *)v18,
                                                (const MethodInfo_34AFD40 *)Method_System_Collections_Generic_List_Material__Contains__);
          if ( ((unsigned __int8)materials & 1) == 0 )
          {
            items = v12->fields._items;
            v24 = Method_System_Collections_Generic_List_Material__Add__;
            ++v12->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v12->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                (Il2CppObject *)v18,
                *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              v12->fields._size = size + 1;
              v26[4] = (Il2CppClass *)v18;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v18, v21, v22);
            }
          }
        }
      }
      LODWORD(klass) = v16[1].klass;
    }
  }
  return (System_Collections_Generic_List_Material__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Renderer_array *__fastcall BattleEffectReplaceShaderTexture__getTargetRenderers(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_GameObject_o *targetObject,
        int32_t rendererType,
        bool targetsInChildren,
        bool includeInactive,
        const MethodInfo *method)
{
  __int64 v10; // x1
  UnityEngine_Object_o *Renderer; // x19
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x0

  if ( (byte_4A01298 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, targetObject);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B64870(&UnityEngine_Renderer___TypeInfo, v10);
    byte_4A01298 = 1;
  }
  if ( targetsInChildren )
    return BattleEffectReplaceShaderTexture__getRenderersInChildren(
             this,
             targetObject,
             rendererType,
             includeInactive,
             (const MethodInfo *)includeInactive);
  Renderer = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__getRenderer(
                                       this,
                                       targetObject,
                                       rendererType,
                                       (const MethodInfo *)targetsInChildren);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = 0LL;
  if ( UnityEngine_Object__op_Inequality(Renderer, 0LL, 0LL) )
  {
    v14 = sub_1B64918(UnityEngine_Renderer___TypeInfo, 1LL);
    if ( !v14 )
      sub_1B64ACC(0LL, v15);
    v13 = v14;
    if ( Renderer )
    {
      v14 = sub_1B649AC(Renderer, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
      if ( !v14 )
      {
        v18 = sub_1B64AF0(0LL);
        sub_1B64998(v18, 0LL);
      }
    }
    if ( !*(_DWORD *)(v13 + 24) )
      sub_1B64AD4(v14, v15);
    *(_QWORD *)(v13 + 32) = Renderer;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)Renderer, v16, v17);
  }
  return (UnityEngine_Renderer_array *)v13;
}


UnityEngine_Shader_o *__fastcall BattleEffectReplaceShaderTexture__loadShader(
        BattleEffectReplaceShaderTexture_o *this,
        System_String_o *shaderName,
        System_Collections_Generic_Dictionary_string__Shader__o **shaderCaches,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_string__Shader__o *v9; // x0
  UnityEngine_Shader_o *result; // x0
  UnityEngine_Object_o *v11; // x21
  bool v12; // w8

  if ( (byte_4A01296 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__Shader__ContainsKey__, shaderName);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__Shader__get_Item__, v6);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__Shader__set_Item__, v7);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v8);
    byte_4A01296 = 1;
  }
  v9 = *shaderCaches;
  if ( !*shaderCaches )
    goto LABEL_13;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v9,
         (Il2CppObject *)shaderName,
         (const MethodInfo_317B8C8 *)Method_System_Collections_Generic_Dictionary_string__Shader__ContainsKey__) )
  {
    v9 = *shaderCaches;
    if ( *shaderCaches )
      return (UnityEngine_Shader_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                       (System_Collections_Generic_Dictionary_object__object__o *)v9,
                                       (Il2CppObject *)shaderName,
                                       (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__Shader__get_Item__);
LABEL_13:
    sub_1B64ACC(v9, shaderName);
  }
  v11 = (UnityEngine_Object_o *)UnityEngine_Shader__Find(shaderName, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  result = 0LL;
  if ( v12 )
  {
    v9 = *shaderCaches;
    if ( !*shaderCaches )
      goto LABEL_13;
    System_Collections_Generic_Dictionary_object__object___set_Item(
      (System_Collections_Generic_Dictionary_object__object__o *)v9,
      (Il2CppObject *)shaderName,
      (Il2CppObject *)v11,
      (const MethodInfo_317B6C0 *)Method_System_Collections_Generic_Dictionary_string__Shader__set_Item__);
    return (UnityEngine_Shader_o *)v11;
  }
  return result;
}


void __fastcall BattleEffectReplaceShaderTexture__setupChocoShader(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_Material_o *material,
        UnityEngine_Shader_o *chocoShader,
        UnityEngine_Texture2D_o *chocoTexture,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v16; // s12
  float v17; // s13
  float v18; // s14
  float v19; // s15
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A0129C & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, material);
    sub_1B64870(&StringLiteral_16112/*"_Color"*/, v8);
    sub_1B64870(&StringLiteral_16093/*"_ChocoTex"*/, v9);
    sub_1B64870(&StringLiteral_16325/*"_Use_alphawidth"*/, v10);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B64870(&StringLiteral_16068/*"_AddColor"*/, v11);
    byte_4A0129C = 1;
  }
  if ( !material )
    sub_1B64ACC(this, material);
  if ( UnityEngine_Material__HasProperty_69002184(material, (System_String_o *)StringLiteral_16112/*"_Color"*/, 0LL) )
  {
    Color = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16112/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    a = Color.fields.a;
  }
  else
  {
    r = 1.0;
    g = 1.0;
    b = 1.0;
    a = 1.0;
  }
  v16 = 0.0;
  v17 = 0.0;
  v18 = 0.0;
  v19 = 0.0;
  if ( UnityEngine_Material__HasProperty_69002184(material, (System_String_o *)StringLiteral_16068/*"_AddColor"*/, 0LL) )
  {
    v21 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16068/*"_AddColor"*/, 0LL);
    v16 = v21.fields.r;
    v17 = v21.fields.g;
    v18 = v21.fields.b;
    v19 = v21.fields.a;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)chocoShader, 0LL, 0LL) )
    UnityEngine_Material__set_shader(material, chocoShader, 0LL);
  v22.fields.r = r;
  v22.fields.g = g;
  v22.fields.b = b;
  v22.fields.a = a;
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_16112/*"_Color"*/, v22, 0LL);
  v23.fields.r = v16;
  v23.fields.g = v17;
  v23.fields.b = v18;
  v23.fields.a = v19;
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_16068/*"_AddColor"*/, v23, 0LL);
  UnityEngine_Material__SetTexture(
    material,
    (System_String_o *)StringLiteral_16093/*"_ChocoTex"*/,
    (UnityEngine_Texture_o *)chocoTexture,
    0LL);
  if ( UnityEngine_Material__HasProperty_69002184(material, (System_String_o *)StringLiteral_16325/*"_Use_alphawidth"*/, 0LL) )
    UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16325/*"_Use_alphawidth"*/, 1.0, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture__setupShadowShader(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_Material_o *material,
        UnityEngine_Shader_o *shadowShader,
        const MethodInfo *method)
{
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A0129D & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, material);
    sub_1B64870(&StringLiteral_16112/*"_Color"*/, v6);
    byte_4A0129D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)shadowShader, 0LL, 0LL);
  if ( !v7 )
  {
    if ( material )
      goto LABEL_9;
LABEL_10:
    sub_1B64ACC(v7, v8);
  }
  if ( !material )
    goto LABEL_10;
  UnityEngine_Material__set_shader(material, shadowShader, 0LL);
LABEL_9:
  v9.fields.r = 0.05;
  v9.fields.a = 1.0;
  v9.fields.g = 0.05;
  v9.fields.b = 0.05;
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_16112/*"_Color"*/, v9, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture__updateShaderValues(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_Material_o *material,
        System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *replaceShaderFloatValues,
        System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *replaceShaderColorValues,
        System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *replaceShaderTextureValues,
        const MethodInfo *method)
{
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
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x22
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x21
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *v29; // x20
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+0h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4A0129E & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__Dispose__,
      material);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__Dispose__,
      v10);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__Dispose__,
      v11);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__MoveNext__,
      v12);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__MoveNext__,
      v13);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__MoveNext__,
      v14);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__get_Current__,
      v15);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__get_Current__,
      v16);
    sub_1B64870(
      &Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__get_Current__,
      v17);
    sub_1B64870(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__GetEnumerator__,
      v18);
    sub_1B64870(
      &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__GetEnumerator__,
      v19);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B64870(
                                                   &Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__GetEnumerator__,
                                                   v20);
    byte_4A0129E = 1;
  }
  memset(&v33, 0, sizeof(v33));
  memset(&v32, 0, sizeof(v32));
  memset(&v31, 0, sizeof(v31));
  if ( !replaceShaderFloatValues )
    goto LABEL_31;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)replaceShaderFloatValues,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__GetEnumerator__);
  v33 = v30;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__MoveNext__);
    if ( !v21 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      sub_1B64ACC(v21, v22);
    if ( !material )
      sub_1B64ACC(v21, v22);
    if ( UnityEngine_Material__HasProperty_69002184(material, (System_String_o *)v33.fields._current[1].klass, 0LL) )
      UnityEngine_Material__SetFloat(material, (System_String_o *)current[1].klass, *(float *)&current[1].monitor, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__Dispose__);
  if ( !replaceShaderColorValues )
    goto LABEL_31;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)replaceShaderColorValues,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__GetEnumerator__);
  v32 = v30;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__MoveNext__);
    if ( !v24 )
      break;
    v26 = v32.fields._current;
    if ( !v32.fields._current )
      sub_1B64ACC(v24, v25);
    if ( !material )
      sub_1B64ACC(v24, v25);
    if ( UnityEngine_Material__HasProperty_69002184(material, (System_String_o *)v32.fields._current[1].klass, 0LL) )
      UnityEngine_Material__SetColor(
        material,
        (System_String_o *)v26[1].klass,
        *(UnityEngine_Color_o *)&v26[1].monitor,
        0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__Dispose__);
  if ( !replaceShaderTextureValues )
LABEL_31:
    sub_1B64ACC(this, material);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)replaceShaderTextureValues,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__GetEnumerator__);
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__MoveNext__);
    if ( !v27 )
      break;
    v29 = v31.fields._current;
    if ( !v31.fields._current )
      sub_1B64ACC(v27, v28);
    if ( !material )
      sub_1B64ACC(v27, v28);
    if ( UnityEngine_Material__HasProperty_69002184(material, (System_String_o *)v31.fields._current[1].klass, 0LL) )
      UnityEngine_Material__SetTexture(
        material,
        (System_String_o *)v29[1].klass,
        (UnityEngine_Texture_o *)v29[1].monitor,
        0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__Dispose__);
}


void __fastcall BattleEffectReplaceShaderTexture_ReplaceObject___ctor(
        BattleEffectReplaceShaderTexture_ReplaceObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A012A0 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_17290/*"body_level"*/, method);
    byte_4A012A0 = 1;
  }
  this->fields.useUniqueId = 1;
  this->fields.isCheckUniqueId = 1;
  v5 = StringLiteral_17290/*"body_level"*/;
  this->fields.searchMeshWord = (struct System_String_o *)StringLiteral_17290/*"body_level"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.searchMeshWord, v5, v2, v3);
  this->fields.targetShaderAll = 1;
  *(_WORD *)&this->fields.targetsInChildren = 257;
  *(_WORD *)&this->fields.useAutoReplaceShader = 257;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture_ShaderColorValue___ctor(
        BattleEffectReplaceShaderTexture_ShaderColorValue_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture_ShaderFloatValue___ctor(
        BattleEffectReplaceShaderTexture_ShaderFloatValue_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture_ShaderTextureValue___ctor(
        BattleEffectReplaceShaderTexture_ShaderTextureValue_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}