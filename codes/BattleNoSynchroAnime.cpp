void BattleNoSynchroAnime___ctor(BattleNoSynchroAnime_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleNoSynchroAnime__Start(BattleNoSynchroAnime_o *this, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object__58857296; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v7; // x22
  SimpleAnimation_o *States; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v10; // x20
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x20
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x20
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x20
  __int64 v29; // x8
  __int64 v30; // x9
  SimpleAnimation_State_c **v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  SimpleAnimation_State_c **v35; // x10
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  SimpleAnimation_State_c **v39; // x10
  __int64 v40; // x0
  float v41; // s0
  float v42; // s8
  __int64 v43; // x8
  __int64 v44; // x9
  SimpleAnimation_State_c **v45; // x10
  __int64 v46; // x0
  __int64 v47; // x21
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x20
  unsigned __int64 v53; // x8
  unsigned __int64 v54; // x22
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v56; // x1
  System_Collections_IEnumerator_o *v57; // x19
  System_Collections_IEnumerator_c *v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x0
  __int64 v63; // x1
  System_Collections_IEnumerator_o *v64; // x19
  System_Collections_IEnumerator_c *v65; // x8
  __int64 v66; // x9
  System_Collections_IEnumerator_c **v67; // x10
  __int64 v68; // x0
  UnityEngine_AnimationState_o *v69; // x0
  __int64 v70; // x1
  __int64 v71; // x2
  UnityEngine_AnimationState_o *v72; // x19
  float length; // s0
  float v74; // s0
  __int64 v75; // x8
  __int64 v76; // x21
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0
  __int64 v80; // [xsp+8h] [xbp-98h] BYREF
  _QWORD *v81; // [xsp+10h] [xbp-90h]
  __int64 *v82; // [xsp+18h] [xbp-88h]
  __int64 v83; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_IEnumerator_o *v84; // [xsp+28h] [xbp-78h] BYREF
  __int64 v85; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_5973F91 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_AnimationState_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_5973F91 = 1;
  }
  v85 = 0;
  v83 = 0;
  v84 = 0;
  ComponentsInChildren_object__58857296 = UnityEngine_Component__GetComponentsInChildren_object__58857296(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_3821750 *)Method_UnityEngine_Component_GetComponentsInChildren_SimpleAnimation___);
  v4 = (__int64)UnityEngine_Component__GetComponentsInChildren_object__58857296(
                  (UnityEngine_Component_o *)this,
                  (const MethodInfo_3821750 *)Method_UnityEngine_Component_GetComponentsInChildren_Animation___);
  if ( ComponentsInChildren_object__58857296 )
  {
    max_length_low = LODWORD(ComponentsInChildren_object__58857296->max_length);
    if ( (int)max_length_low >= 1 )
    {
      v7 = 0;
      while ( v7 < max_length_low )
      {
        States = (SimpleAnimation_o *)ComponentsInChildren_object__58857296->m_Items[v7];
        if ( !States )
          goto LABEL_112;
        States = (SimpleAnimation_o *)SimpleAnimation__GetStates(States, 0);
        if ( !States )
          goto LABEL_112;
        klass = States->klass;
        v10 = States;
        v11 = *(unsigned __int16 *)&States->klass->_2.rank;
        if ( *(_WORD *)&States->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v11;
            p_offset += 4;
            if ( !v11 )
              goto LABEL_13;
          }
          v13 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_13:
          v13 = sub_224BC3C(States, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
        }
        v14 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v13)(v10, *(_QWORD *)(v13 + 8));
        v16 = v14;
        v80 = 0;
        v81 = &v85;
        v85 = v14;
        if ( !v14 )
LABEL_59:
          sub_2213CDC(v14, v15);
        while ( 1 )
        {
          v17 = *(_QWORD *)v16;
          v18 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
          {
            v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v18;
              v19 += 4;
              if ( !v18 )
                goto LABEL_20;
            }
            v20 = v17 + 16LL * *v19 + 312;
          }
          else
          {
LABEL_20:
            v20 = sub_224BC3C(v16, System_Collections_IEnumerator_TypeInfo, 0);
          }
          v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8));
          if ( (v4 & 1) == 0 )
            break;
          v21 = v85;
          if ( !v85 )
            sub_2213CDC(v4, v5);
          v22 = *(_QWORD *)v85;
          v23 = *(unsigned __int16 *)(*(_QWORD *)v85 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v85 + 302LL) )
          {
            v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v24 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v23;
              v24 += 4;
              if ( !v23 )
                goto LABEL_28;
            }
            v25 = v22 + 16LL * *v24 + 312;
          }
          else
          {
LABEL_28:
            v25 = sub_224BC3C(v85, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
          }
          v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8));
          v28 = v26;
          if ( !v26 )
            sub_2213CDC(0, v27);
          v29 = *(_QWORD *)v26;
          v30 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
          {
            v31 = (SimpleAnimation_State_c **)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *(v31 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v30;
              v31 += 2;
              if ( !v30 )
                goto LABEL_35;
            }
            v32 = v29 + 16LL * (*(_DWORD *)v31 + 15) + 312;
          }
          else
          {
LABEL_35:
            v32 = sub_224BC3C(v26, SimpleAnimation_State_TypeInfo, 15);
          }
          if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8)) == 2 )
            goto LABEL_45;
          v33 = *(_QWORD *)v28;
          v34 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
          {
            v35 = (SimpleAnimation_State_c **)(*(_QWORD *)(v33 + 176) + 8LL);
            while ( *(v35 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v34;
              v35 += 2;
              if ( !v34 )
                goto LABEL_42;
            }
            v36 = v33 + 16LL * (*(_DWORD *)v35 + 17) + 312;
          }
          else
          {
LABEL_42:
            v36 = sub_224BC3C(v28, SimpleAnimation_State_TypeInfo, 17);
          }
          v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v28, *(_QWORD *)(v36 + 8));
          if ( (_DWORD)v14 == 2 )
          {
LABEL_45:
            v37 = *(_QWORD *)v28;
            v38 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
            {
              v39 = (SimpleAnimation_State_c **)(*(_QWORD *)(v37 + 176) + 8LL);
              while ( *(v39 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v38;
                v39 += 2;
                if ( !v38 )
                  goto LABEL_49;
              }
              v40 = v37 + 16LL * (*(_DWORD *)v39 + 13) + 312;
            }
            else
            {
LABEL_49:
              v40 = sub_224BC3C(v28, SimpleAnimation_State_TypeInfo, 13);
            }
            v41 = (*(float (__fastcall **)(__int64, _QWORD))v40)(v28, *(_QWORD *)(v40 + 8));
            v42 = UnityEngine_Random__Range(0.0, v41, 0);
            v43 = *(_QWORD *)v28;
            v44 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
            {
              v45 = (SimpleAnimation_State_c **)(*(_QWORD *)(v43 + 176) + 8LL);
              while ( *(v45 - 1) != SimpleAnimation_State_TypeInfo )
              {
                --v44;
                v45 += 2;
                if ( !v44 )
                  goto LABEL_55;
              }
              v46 = v43 + 16LL * (*(_DWORD *)v45 + 4) + 312;
            }
            else
            {
LABEL_55:
              v46 = sub_224BC3C(v28, SimpleAnimation_State_TypeInfo, 4);
            }
            v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, float))v46)(v28, *(_QWORD *)(v46 + 8), v42);
          }
          v16 = v85;
          if ( !v85 )
            goto LABEL_59;
        }
        v47 = v85;
        if ( v85 )
        {
          v48 = *(_QWORD *)v85;
          v49 = *(unsigned __int16 *)(*(_QWORD *)v85 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v85 + 302LL) )
          {
            v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
            {
              --v49;
              v50 += 4;
              if ( !v49 )
                goto LABEL_65;
            }
            v51 = v48 + 16LL * *v50 + 312;
          }
          else
          {
LABEL_65:
            v51 = sub_224BC3C(v85, System_IDisposable_TypeInfo, 0);
          }
          v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8));
        }
        max_length_low = LODWORD(ComponentsInChildren_object__58857296->max_length);
        if ( (int)++v7 >= (int)max_length_low )
          return;
      }
      goto LABEL_113;
    }
  }
  else
  {
    v52 = v4;
    if ( v4 )
    {
      v53 = *(unsigned int *)(v4 + 24);
      if ( (int)v53 >= 1 )
      {
        v54 = 0;
        while ( v54 < v53 )
        {
          States = *(SimpleAnimation_o **)(v52 + 8 * v54 + 32);
          if ( !States )
LABEL_112:
            sub_2213CDC(States, v5);
          Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)States, 0);
          v57 = Enumerator;
          v80 = 0;
          v81 = &v84;
          v84 = Enumerator;
          v82 = &v83;
          if ( !Enumerator )
LABEL_97:
            sub_2213CDC(Enumerator, v56);
          while ( 1 )
          {
            v58 = v57->klass;
            v59 = *(unsigned __int16 *)&v57->klass->_2.rank;
            if ( *(_WORD *)&v57->klass->_2.rank )
            {
              v60 = &v58->_1.interfaceOffsets->offset;
              while ( *((System_Collections_IEnumerator_c **)v60 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v59;
                v60 += 4;
                if ( !v59 )
                  goto LABEL_82;
              }
              v61 = (__int64)&v58->vtable[*v60];
            }
            else
            {
LABEL_82:
              v61 = sub_224BC3C(v57, System_Collections_IEnumerator_TypeInfo, 0);
            }
            v62 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v61)(v57, *(_QWORD *)(v61 + 8));
            if ( (v62 & 1) == 0 )
              break;
            v64 = v84;
            if ( !v84 )
              sub_2213CDC(v62, v63);
            v65 = v84->klass;
            v66 = *(unsigned __int16 *)&v84->klass->_2.rank;
            if ( *(_WORD *)&v84->klass->_2.rank )
            {
              v67 = (System_Collections_IEnumerator_c **)&v65->_1.interfaceOffsets->offset;
              while ( *(v67 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v66;
                v67 += 2;
                if ( !v66 )
                  goto LABEL_90;
              }
              v68 = (__int64)&v65->vtable[*(_DWORD *)v67 + 1];
            }
            else
            {
LABEL_90:
              v68 = sub_224BC3C(v84, System_Collections_IEnumerator_TypeInfo, 1);
            }
            v69 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v68)(
                                                    v64,
                                                    *(_QWORD *)(v68 + 8));
            v72 = v69;
            if ( !v69 )
              sub_2213CDC(0, v70);
            if ( v69->klass != UnityEngine_AnimationState_TypeInfo )
            {
              sub_221405C(v69, UnityEngine_AnimationState_TypeInfo, v71);
              sub_1FF99DC(&v80);
              sub_230112C();
            }
            Enumerator = (System_Collections_IEnumerator_o *)UnityEngine_AnimationState__get_wrapMode(v69, 0);
            if ( (_DWORD)Enumerator == 2 )
            {
              length = UnityEngine_AnimationState__get_length(v72, 0);
              v74 = UnityEngine_Random__Range(0.0, length, 0);
              UnityEngine_AnimationState__set_time(v72, v74, 0);
            }
            v57 = v84;
            if ( !v84 )
              goto LABEL_97;
          }
          v4 = sub_2213BB4(v84, System_IDisposable_TypeInfo);
          v83 = v4;
          if ( v4 )
          {
            v75 = *(_QWORD *)v4;
            v76 = v4;
            v77 = *(unsigned __int16 *)(*(_QWORD *)v4 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v4 + 302LL) )
            {
              v78 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
              while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
              {
                --v77;
                v78 += 4;
                if ( !v77 )
                  goto LABEL_103;
              }
              v79 = v75 + 16LL * *v78 + 312;
            }
            else
            {
LABEL_103:
              v79 = sub_224BC3C(v4, System_IDisposable_TypeInfo, 0);
            }
            v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))v79)(v76, *(_QWORD *)(v79 + 8));
          }
          v53 = *(unsigned int *)(v52 + 24);
          if ( (int)++v54 >= (int)v53 )
            return;
        }
LABEL_113:
        sub_2213CE4(v4);
      }
    }
  }
}